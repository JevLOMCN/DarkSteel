// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// AdvanceArgumentStream @ 14d3d4830

bool __cdecl
TraceServices::FFormatArgsHelper::AdvanceArgumentStream(FFormatArgsStreamContext *param_1)

{
  byte bVar1;
  uchar uVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar *puVar8;
  short *psVar9;
  int *piVar10;
  
  if (param_1->ArgumentTypeCategory == '\0') {
    return false;
  }
  bVar1 = param_1->ArgumentTypeSize;
  if (param_1->ArgumentTypeCategory == 0xc0) {
    if (bVar1 == 1) {
      puVar8 = param_1->PayloadPtr;
      do {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar2 != '\0');
      param_1->PayloadPtr = puVar8;
    }
    else if (bVar1 == 2) {
      psVar9 = (short *)param_1->PayloadPtr;
      do {
        sVar3 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar3 != 0);
      param_1->PayloadPtr = (uchar *)psVar9;
    }
    else if (bVar1 == 4) {
      piVar10 = (int *)param_1->PayloadPtr;
      do {
        iVar4 = *piVar10;
        piVar10 = piVar10 + 1;
      } while (iVar4 != 0);
      param_1->PayloadPtr = (uchar *)piVar10;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\FormatArgs.cpp"
                         ,0xd7,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  else {
    param_1->PayloadPtr = param_1->PayloadPtr + bVar1;
  }
  param_1->DescriptorPtr = param_1->DescriptorPtr + 1;
  param_1->ArgumentTypeCategory = *param_1->DescriptorPtr & 0xc0;
  bVar1 = *param_1->DescriptorPtr;
  param_1->ArgumentCount = param_1->ArgumentCount + 0xff;
  param_1->ArgumentTypeSize = bVar1 & 0x3f;
  return true;
}

// ExtractFloatingPointArgument @ 14d3dd7e0

double __cdecl
TraceServices::FFormatArgsHelper::ExtractFloatingPointArgument(FFormatArgsStreamContext *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  dVar2 = 0.0;
  if (param_1->ArgumentTypeCategory == 0x80) {
    if (param_1->ArgumentTypeSize == '\x04') {
      dVar2 = (double)*(float *)param_1->PayloadPtr;
    }
    else {
      if (param_1->ArgumentTypeSize != '\b') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArgStream.ArgumentTypeSize == 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\FormatArgs.cpp"
                           ,0xfb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          dVar2 = (double)(*pcVar1)();
          return dVar2;
        }
      }
      dVar2 = *(double *)param_1->PayloadPtr;
    }
  }
  AdvanceArgumentStream(param_1);
  return dVar2;
}

// ExtractIntegerArgument @ 14d3dd860

ulong64 __cdecl
TraceServices::FFormatArgsHelper::ExtractIntegerArgument(FFormatArgsStreamContext *param_1)

{
  ulong64 uVar1;
  ulong64 local_res8;
  
  local_res8 = 0;
  if (param_1->ArgumentTypeCategory == '@') {
    memcpy(&local_res8,param_1->PayloadPtr,(ulonglong)param_1->ArgumentTypeSize);
  }
  uVar1 = local_res8;
  AdvanceArgumentStream(param_1);
  return uVar1;
}

// ExtractNextFormatArg @ 14d3dd8b0

/* WARNING: Removing unreachable block (ram,0x00014d3dda63) */

wchar_t * __cdecl
TraceServices::FFormatArgsHelper::ExtractNextFormatArg(wchar_t *param_1,FFormatArgSpec *param_2)

{
  wchar_t *pwVar1;
  
  param_2->PassthroughLength = 0;
  param_2->AdditionalIntegerArgumentCount = '\0';
  param_2->Valid = false;
  param_2->NothingPrinted = false;
  if (*param_1 == L'\0') {
    param_2->PassthroughLength = 0;
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d3dd947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)
           (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + switchD_14d3dd947::switchdataD_14d3ddb30)
           )(switchD_1501dbc7b::caseD_1.e_magic + switchD_14d3dd947::switchdataD_14d3ddb30,0,
             &switchD_1501dbc7b::caseD_1,0x1280900000000);
  return pwVar1;
}

// ExtractStringArgument @ 14d3ddb60

wchar_t * __cdecl
TraceServices::FFormatArgsHelper::ExtractStringArgument
          (FFormatArgsStreamContext *param_1,wchar_t *param_2,int param_3)

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = ::Empty;
  if (param_1->ArgumentTypeCategory == 0xc0) {
    if (param_1->ArgumentTypeSize == '\x02') {
      pwVar2 = (wchar_t *)param_1->PayloadPtr;
    }
    else if (param_1->ArgumentTypeSize == '\x01') {
      sVar1 = strlen((char *)param_1->PayloadPtr);
      iVar3 = (int)sVar1 + 1;
      if (iVar3 < param_3) {
        TStringConvert<char,wchar_t>::Convert<char>
                  (param_2,param_3,(char *)param_1->PayloadPtr,iVar3);
        pwVar2 = param_2;
      }
    }
  }
  AdvanceArgumentStream(param_1);
  return pwVar2;
}

// Format @ 14d3df270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::FFormatArgsHelper::Format
          (wchar_t *param_1,ulong64 param_2,wchar_t *param_3,ulong64 param_4,wchar_t *param_5,
          uchar *param_6)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_2b8 [32];
  FFormatArgsStreamContext local_288;
  FFormatArgSpec local_268;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (param_6 != (uchar *)0x0) {
    local_288.ArgumentCount = *param_6;
    local_288.DescriptorPtr = param_6 + 1;
    local_288.PayloadPtr = local_288.DescriptorPtr + local_288.ArgumentCount;
    if (local_288.ArgumentCount != 0) {
      local_288._1_2_ = CONCAT11(*local_288.DescriptorPtr,*local_288.DescriptorPtr) & 0x3fc0;
      goto LAB_14d3df2f0;
    }
  }
  local_288.ArgumentTypeCategory = '\0';
  local_288.ArgumentTypeSize = '\0';
LAB_14d3df2f0:
  pwVar1 = param_1 + param_2;
  if (local_288.ArgumentCount == 0) {
    wcsncpy(param_1,param_5,param_2 - 1);
    pwVar1[-1] = L'\0';
  }
  else {
    wVar2 = *param_5;
    while ((wVar2 != L'\0' && (param_1 != pwVar1))) {
      pwVar4 = ExtractNextFormatArg(param_5,&local_268);
      iVar3 = (int)((longlong)pwVar1 - (longlong)param_1 >> 1);
      if (local_268.PassthroughLength < iVar3) {
        iVar3 = local_268.PassthroughLength;
      }
      if (iVar3 != 0) {
        wcsncpy(param_1,param_5,(longlong)iVar3);
        param_1 = param_1 + iVar3;
        *param_1 = L'\0';
      }
      if (local_268.Valid != false) {
        iVar3 = FormatArgument(param_1,(int)((longlong)pwVar1 - (longlong)param_1 >> 1),param_3,
                               (int)param_4,&local_268,&local_288);
        if (iVar3 < 0) {
          return;
        }
        param_1 = param_1 + iVar3;
      }
      wVar2 = *pwVar4;
      param_5 = pwVar4;
    }
  }
  return;
}

// FormatArgument @ 14d3df420

int __cdecl
TraceServices::FFormatArgsHelper::FormatArgument
          (wchar_t *param_1,int param_2,wchar_t *param_3,int param_4,FFormatArgSpec *param_5,
          FFormatArgsStreamContext *param_6)

{
  wchar_t *pwVar1;
  uchar uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  
  if ((2 < param_5->AdditionalIntegerArgumentCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArgSpec.AdditionalIntegerArgumentCount <= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\FormatArgs.cpp"
                         ,0x120,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar2 = param_5->ExpectedTypeCategory;
  if (uVar2 == '@') {
    bVar3 = param_5->AdditionalIntegerArgumentCount;
    if (param_5->NothingPrinted != false) {
      bVar7 = 0;
      if (bVar3 != 0xffffffff) {
        do {
          AdvanceArgumentStream(param_6);
          bVar7 = bVar7 + 1;
        } while ((uint)bVar7 < param_5->AdditionalIntegerArgumentCount + 1);
      }
      return 0;
    }
    if (bVar3 != 2) {
      if (bVar3 == 1) {
        ExtractIntegerArgument(param_6);
        ExtractIntegerArgument(param_6);
        iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,param_5->FormatString);
        return iVar6;
      }
      ExtractIntegerArgument(param_6);
      goto LAB_14d3df52b;
    }
    ExtractIntegerArgument(param_6);
  }
  else {
    if (uVar2 == 0x80) {
      pwVar1 = param_5->FormatString;
      if (param_5->AdditionalIntegerArgumentCount == '\x02') {
        ExtractFloatingPointArgument(param_6);
        ExtractIntegerArgument(param_6);
        ExtractIntegerArgument(param_6);
        iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,pwVar1);
        return iVar6;
      }
      if (param_5->AdditionalIntegerArgumentCount == '\x01') {
        ExtractFloatingPointArgument(param_6);
        ExtractIntegerArgument(param_6);
        iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,pwVar1);
        return iVar6;
      }
      ExtractFloatingPointArgument(param_6);
      iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,pwVar1);
      return iVar6;
    }
    if (uVar2 != 0xc0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\FormatArgs.cpp"
                         ,0x156,L"");
      if (!bVar5) {
        return 0;
      }
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (param_5->AdditionalIntegerArgumentCount != '\x02') {
      if (param_5->AdditionalIntegerArgumentCount == '\x01') {
        ExtractStringArgument(param_6,param_3,param_4);
        ExtractIntegerArgument(param_6);
        iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,param_5->FormatString);
        return iVar6;
      }
      ExtractStringArgument(param_6,param_3,param_4);
LAB_14d3df52b:
      iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,param_5->FormatString);
      return iVar6;
    }
    ExtractStringArgument(param_6,param_3,param_4);
  }
  ExtractIntegerArgument(param_6);
  ExtractIntegerArgument(param_6);
  iVar6 = TCString<wchar_t>::SnprintfImpl(param_1,param_2,param_5->FormatString);
  return iVar6;
}

// InitArgumentStream @ 14d3e68f0

void __cdecl
TraceServices::FFormatArgsHelper::InitArgumentStream
          (FFormatArgsStreamContext *param_1,uchar *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 == (uchar *)0x0) {
    param_1->ArgumentTypeCategory = '\0';
    param_1->ArgumentTypeSize = '\0';
    return;
  }
  bVar1 = *param_2;
  pbVar2 = param_2 + 1;
  param_1->ArgumentCount = bVar1;
  param_1->DescriptorPtr = pbVar2;
  param_1->PayloadPtr = pbVar2 + bVar1;
  if (bVar1 != 0) {
    param_1->ArgumentTypeCategory = *pbVar2 & 0xc0;
    param_1->ArgumentTypeSize = *pbVar2 & 0x3f;
    return;
  }
  param_1->ArgumentTypeCategory = '\0';
  param_1->ArgumentTypeSize = '\0';
  return;
}

