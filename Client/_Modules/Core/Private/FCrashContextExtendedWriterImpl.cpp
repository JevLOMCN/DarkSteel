// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AddBuffer @ 141626760

void __thiscall
FCrashContextExtendedWriterImpl::AddBuffer
          (FCrashContextExtendedWriterImpl *this,wchar_t *param_1,uchar *param_2,uint param_3)

{
  if (((param_1 != (wchar_t *)0x0) && (param_2 != (uchar *)0x0)) && (param_3 != 0)) {
    OutputBuffer(this,param_1,param_2,param_3,L"bin");
  }
  return;
}

// AddString @ 1416284b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCrashContextExtendedWriterImpl::AddString
          (FCrashContextExtendedWriterImpl *this,wchar_t *param_1,wchar_t *param_2)

{
  uint uVar1;
  size_t sVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_108 [32];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  uint local_48;
  ulonglong local_38;
  
  if ((param_1 != (wchar_t *)0x0) &&
     (local_38 = __security_cookie.value ^ (ulonglong)auStackY_108, param_2 != (wchar_t *)0x0)) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"Additional Crash Context (Key=\"%s\", Value=\"%s\")");
    local_58.Data = (FScriptContainerElement *)0x0;
    sVar2 = wcslen(param_2);
    local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,(int)sVar2);
    uVar1 = local_48 + 1;
    FVar3.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar1) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar1,1);
      FVar3.Data = local_58.Data;
    }
    local_50 = local_d8;
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      local_50 = FVar3.Data;
    }
    UE::Core::Private::FTCHARToUTF8_Convert::Convert<wchar_t>
              ((uchar *)local_50,uVar1,param_2,(int)sVar2 + 1);
    OutputBuffer(this,param_1,(uchar *)local_50,local_48,L"txt");
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// OutputBuffer @ 14164f9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCrashContextExtendedWriterImpl::OutputBuffer
          (FCrashContextExtendedWriterImpl *this,wchar_t *param_1,uchar *param_2,uint param_3,
          wchar_t *param_4)

{
  IPlatformFile *pIVar1;
  longlong *plVar2;
  undefined1 auStack_868 [32];
  wchar_t *local_848;
  wchar_t *local_840;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_868;
  memset(local_838,0,0x800);
  local_840 = param_4;
  local_848 = param_1;
  TCString<wchar_t>::SnprintfImpl(local_838,0x400,L"%s/%s.%s");
  pIVar1 = IPlatformFile::GetPlatformPhysical();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,local_838,0,0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    (**(code **)(*plVar2 + 0x38))(plVar2,0);
    (**(code **)*plVar2)(plVar2,1);
  }
  return;
}

