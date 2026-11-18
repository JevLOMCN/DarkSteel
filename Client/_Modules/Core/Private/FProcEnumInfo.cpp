// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FProcEnumInfo @ 141a9c150

FProcEnumInfo * __thiscall
FWindowsPlatformProcess::FProcEnumInfo::FProcEnumInfo
          (FProcEnumInfo *this,tagPROCESSENTRY32W *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  tagPROCESSENTRY32W *ptVar8;
  tagPROCESSENTRY32W *ptVar9;
  longlong lVar10;
  tagPROCESSENTRY32W *ptVar11;
  tagPROCESSENTRY32W *ptVar12;
  
  ptVar9 = ::operator_new(0x238);
  if (ptVar9 != (tagPROCESSENTRY32W *)0x0) {
    lVar10 = 4;
    ptVar8 = ptVar9;
    do {
      ptVar12 = ptVar8;
      ptVar11 = param_1;
      ptVar8 = (tagPROCESSENTRY32W *)(ptVar12->szExeFile + 0x2a);
      uVar2 = ptVar11->cntUsage;
      uVar3 = ptVar11->th32ProcessID;
      uVar4 = *(undefined4 *)&ptVar11->field_0xc;
      param_1 = (tagPROCESSENTRY32W *)(ptVar11->szExeFile + 0x2a);
      ptVar12->dwSize = ptVar11->dwSize;
      ptVar12->cntUsage = uVar2;
      ptVar12->th32ProcessID = uVar3;
      *(undefined4 *)&ptVar12->field_0xc = uVar4;
      uVar2 = ptVar11->th32ModuleID;
      uVar3 = ptVar11->cntThreads;
      ptVar12->th32DefaultHeapID = ptVar11->th32DefaultHeapID;
      ptVar12->th32ModuleID = uVar2;
      ptVar12->cntThreads = uVar3;
      lVar5 = ptVar11->pcPriClassBase;
      uVar2 = ptVar11->dwFlags;
      wVar6 = ptVar11->szExeFile[0];
      wVar7 = ptVar11->szExeFile[1];
      ptVar12->th32ParentProcessID = ptVar11->th32ParentProcessID;
      ptVar12->pcPriClassBase = lVar5;
      ptVar12->dwFlags = uVar2;
      ptVar12->szExeFile[0] = wVar6;
      ptVar12->szExeFile[1] = wVar7;
      uVar1 = *(undefined8 *)(ptVar11->szExeFile + 6);
      *(undefined8 *)(ptVar12->szExeFile + 2) = *(undefined8 *)(ptVar11->szExeFile + 2);
      *(undefined8 *)(ptVar12->szExeFile + 6) = uVar1;
      uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0xe);
      *(undefined8 *)(ptVar12->szExeFile + 10) = *(undefined8 *)(ptVar11->szExeFile + 10);
      *(undefined8 *)(ptVar12->szExeFile + 0xe) = uVar1;
      uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x16);
      *(undefined8 *)(ptVar12->szExeFile + 0x12) = *(undefined8 *)(ptVar11->szExeFile + 0x12);
      *(undefined8 *)(ptVar12->szExeFile + 0x16) = uVar1;
      uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x1e);
      *(undefined8 *)(ptVar12->szExeFile + 0x1a) = *(undefined8 *)(ptVar11->szExeFile + 0x1a);
      *(undefined8 *)(ptVar12->szExeFile + 0x1e) = uVar1;
      uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x26);
      *(undefined8 *)(ptVar12->szExeFile + 0x22) = *(undefined8 *)(ptVar11->szExeFile + 0x22);
      *(undefined8 *)(ptVar12->szExeFile + 0x26) = uVar1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar2 = param_1->cntUsage;
    uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x2e);
    ptVar8->dwSize = param_1->dwSize;
    ptVar8->cntUsage = uVar2;
    *(undefined8 *)(ptVar12->szExeFile + 0x2e) = uVar1;
    uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x36);
    *(undefined8 *)(ptVar12->szExeFile + 0x32) = *(undefined8 *)(ptVar11->szExeFile + 0x32);
    *(undefined8 *)(ptVar12->szExeFile + 0x36) = uVar1;
    uVar1 = *(undefined8 *)(ptVar11->szExeFile + 0x3e);
    *(undefined8 *)(ptVar12->szExeFile + 0x3a) = *(undefined8 *)(ptVar11->szExeFile + 0x3a);
    *(undefined8 *)(ptVar12->szExeFile + 0x3e) = uVar1;
    *(undefined8 *)(ptVar12->szExeFile + 0x42) = *(undefined8 *)(ptVar11->szExeFile + 0x42);
    this->Info = ptVar9;
    return this;
  }
  this->Info = (tagPROCESSENTRY32W *)0x0;
  return this;
}

// ~FProcEnumInfo @ 141a9d3b0

void __thiscall FWindowsPlatformProcess::FProcEnumInfo::~FProcEnumInfo(FProcEnumInfo *this)

{
  ::operator_delete(this->Info,0x238);
  return;
}

// GetFullPath @ 141aa97e0

FString * __thiscall
FWindowsPlatformProcess::FProcEnumInfo::GetFullPath
          (FProcEnumInfo *this,FString *__return_storage_ptr__)

{
  GetApplicationName(__return_storage_ptr__,this->Info->th32ProcessID);
  return __return_storage_ptr__;
}

// GetName @ 141aab550

FString * __thiscall
FWindowsPlatformProcess::FProcEnumInfo::GetName(FProcEnumInfo *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,this->Info->szExeFile);
  return __return_storage_ptr__;
}

// GetPID @ 141aac6d0

uint __thiscall FWindowsPlatformProcess::FProcEnumInfo::GetPID(FProcEnumInfo *this)

{
  return this->Info->th32ProcessID;
}

// GetParentPID @ 141aac770

uint __thiscall FWindowsPlatformProcess::FProcEnumInfo::GetParentPID(FProcEnumInfo *this)

{
  return this->Info->th32ParentProcessID;
}

