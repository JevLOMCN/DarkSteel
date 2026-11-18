// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 10

// FArchiveMemoryStream @ 14a6600b0

FArchiveMemoryStream * __thiscall
FArchiveMemoryStream::FArchiveMemoryStream(FArchiveMemoryStream *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchiveMemoryStream *pFVar3;
  long64 lVar4;
  
  this->Archive = param_1;
  this->_padding_ = (longlong)&_vftable__for__trio__Openable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Closeable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Readable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Writable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Seekable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Bounded__;
  this->Origin = 0;
  if (param_1 == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Archive != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\ArchiveMemoryStream.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FArchiveMemoryStream *)(*pcVar1)();
      return pFVar3;
    }
  }
  lVar4 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  this->Origin = lVar4;
  return this;
}

// close @ 14a6892b0

void __thiscall FArchiveMemoryStream::close(FArchiveMemoryStream *this)

{
  return;
}

// open @ 14a68b9d0

void __thiscall FArchiveMemoryStream::open(FArchiveMemoryStream *this)

{
  return;
}

// read @ 14a68b9f0

ulong64 __thiscall
FArchiveMemoryStream::read(FArchiveMemoryStream *this,char *param_1,ulong64 param_2)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x188))();
  return param_2;
}

// read @ 14a68ba20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
FArchiveMemoryStream::read(FArchiveMemoryStream *this,Writable *param_1,ulong64 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulong64 uVar3;
  undefined1 auStack_1058 [32];
  undefined1 local_1038 [4096];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1058;
  uVar3 = param_2;
  if (0x1000 < param_2) {
    lVar2 = (param_2 - 0x1001 >> 0xc) + 1;
    uVar3 = lVar2 * -0x1000 + param_2;
    do {
      plVar1 = (longlong *)this->_padding_;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_1038,0x1000);
      (**(code **)((longlong)*param_1 + 8))(param_1,local_1038,0x1000);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  plVar1 = (longlong *)this->_padding_;
  (**(code **)(*plVar1 + 0x188))(plVar1,local_1038,uVar3);
  (**(code **)((longlong)*param_1 + 8))(param_1,local_1038,uVar3);
  return param_2;
}

// seek @ 14a68bb90

void __thiscall FArchiveMemoryStream::seek(FArchiveMemoryStream *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x7fffffffffffffff < param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7582675116530597871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\ArchiveMemoryStream.cpp"
                       ,0x11,"Position <= static_cast<std::uint64_t>(TNumericLimits<int64>::Max())")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a68bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))
            ((longlong *)this->_padding_,this->_padding_ + param_1);
  return;
}

// size @ 14a68bc20

ulong64 __thiscall FArchiveMemoryStream::size(FArchiveMemoryStream *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulong64 uVar4;
  
  lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x30))();
  if (lVar3 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7582675116530597807>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\ArchiveMemoryStream.cpp"
                       ,0x51,"TotalSize >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar4 = lVar3 - this->_padding_;
  if ((longlong)uVar4 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7582675116530597805>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\ArchiveMemoryStream.cpp"
                       ,0x53,"StreamSize >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return uVar4;
}

// tell @ 14a68bd10

ulong64 __thiscall FArchiveMemoryStream::tell(FArchiveMemoryStream *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ulong64 uVar5;
  
  lVar1 = this->_padding_;
  lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  uVar5 = lVar4 - lVar1;
  if ((longlong)uVar5 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7582675116530597864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\ArchiveMemoryStream.cpp"
                       ,0x18,"RelPosition >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return uVar5;
}

// write @ 14a68bda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
FArchiveMemoryStream::write(FArchiveMemoryStream *this,Readable *param_1,ulong64 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulong64 uVar3;
  undefined1 auStack_1058 [32];
  undefined1 local_1038 [4096];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1058;
  uVar3 = param_2;
  if (0x1000 < param_2) {
    lVar2 = (param_2 - 0x1001 >> 0xc) + 1;
    uVar3 = lVar2 * -0x1000 + param_2;
    do {
      (**(code **)((longlong)*param_1 + 8))(param_1,local_1038,0x1000);
      plVar1 = (longlong *)this->_padding_;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_1038,0x1000);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  (**(code **)((longlong)*param_1 + 8))(param_1,local_1038,uVar3);
  plVar1 = (longlong *)this->_padding_;
  (**(code **)(*plVar1 + 0x188))(plVar1,local_1038,uVar3);
  return param_2;
}

// write @ 14a68be90

ulong64 __thiscall
FArchiveMemoryStream::write(FArchiveMemoryStream *this,char *param_1,ulong64 param_2)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x188))();
  return param_2;
}

