// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FProcEnumerator @ 141a9c230

FProcEnumerator * __thiscall
FWindowsPlatformProcess::FProcEnumerator::FProcEnumerator(FProcEnumerator *this)

{
  void *pvVar1;
  tagPROCESSENTRY32W *ptVar2;
  
  pvVar1 = (void *)CreateToolhelp32Snapshot(2);
  this->SnapshotHandle = pvVar1;
  ptVar2 = ::operator_new(0x238);
  if (ptVar2 == (tagPROCESSENTRY32W *)0x0) {
    ptVar2 = (tagPROCESSENTRY32W *)0x0;
  }
  else {
    memset(&ptVar2->cntUsage,0,0x234);
  }
  this->CurrentEntry = ptVar2;
  ptVar2->dwSize = 0;
  return this;
}

// ~FProcEnumerator @ 141a9d3d0

void __thiscall FWindowsPlatformProcess::FProcEnumerator::~FProcEnumerator(FProcEnumerator *this)

{
  CloseHandle(this->SnapshotHandle);
  ::operator_delete(this->CurrentEntry,0x238);
  return;
}

// GetCurrent @ 141aa7fa0

FProcEnumInfo __thiscall FWindowsPlatformProcess::FProcEnumerator::GetCurrent(FProcEnumerator *this)

{
  tagPROCESSENTRY32W *ptVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  tagPROCESSENTRY32W *in_RDX;
  longlong lVar7;
  tagPROCESSENTRY32W *ptVar8;
  
  ptVar1 = this->CurrentEntry;
  puVar5 = ::operator_new(0x238);
  if (puVar5 != (undefined8 *)0x0) {
    lVar7 = 4;
    puVar4 = puVar5;
    do {
      ptVar8 = ptVar1;
      puVar6 = puVar4;
      uVar2 = *(undefined8 *)&ptVar8->th32ProcessID;
      *puVar6 = *(undefined8 *)ptVar8;
      puVar6[1] = uVar2;
      uVar2 = *(undefined8 *)&ptVar8->th32ModuleID;
      puVar6[2] = ptVar8->th32DefaultHeapID;
      puVar6[3] = uVar2;
      uVar2 = *(undefined8 *)&ptVar8->dwFlags;
      puVar6[4] = *(undefined8 *)&ptVar8->th32ParentProcessID;
      puVar6[5] = uVar2;
      uVar2 = *(undefined8 *)(ptVar8->szExeFile + 6);
      puVar6[6] = *(undefined8 *)(ptVar8->szExeFile + 2);
      puVar6[7] = uVar2;
      uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0xe);
      puVar6[8] = *(undefined8 *)(ptVar8->szExeFile + 10);
      puVar6[9] = uVar2;
      uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x16);
      puVar6[10] = *(undefined8 *)(ptVar8->szExeFile + 0x12);
      puVar6[0xb] = uVar2;
      uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x1e);
      puVar6[0xc] = *(undefined8 *)(ptVar8->szExeFile + 0x1a);
      puVar6[0xd] = uVar2;
      uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x26);
      puVar6[0xe] = *(undefined8 *)(ptVar8->szExeFile + 0x22);
      puVar6[0xf] = uVar2;
      lVar7 = lVar7 + -1;
      puVar4 = puVar6 + 0x10;
      ptVar1 = (tagPROCESSENTRY32W *)(ptVar8->szExeFile + 0x2a);
    } while (lVar7 != 0);
    uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x2a);
    uVar3 = *(undefined8 *)(ptVar8->szExeFile + 0x2e);
    *(undefined8 **)in_RDX = puVar5;
    puVar6[0x10] = uVar2;
    puVar6[0x11] = uVar3;
    uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x36);
    puVar6[0x12] = *(undefined8 *)(ptVar8->szExeFile + 0x32);
    puVar6[0x13] = uVar2;
    uVar2 = *(undefined8 *)(ptVar8->szExeFile + 0x3e);
    puVar6[0x14] = *(undefined8 *)(ptVar8->szExeFile + 0x3a);
    puVar6[0x15] = uVar2;
    puVar6[0x16] = *(undefined8 *)(ptVar8->szExeFile + 0x42);
    return (FProcEnumInfo)in_RDX;
  }
  in_RDX->dwSize = 0;
  in_RDX->cntUsage = 0;
  return (FProcEnumInfo)in_RDX;
}

// MoveNext @ 141ab7090

bool __thiscall FWindowsPlatformProcess::FProcEnumerator::MoveNext(FProcEnumerator *this)

{
  int iVar1;
  
  if (this->CurrentEntry->dwSize == 0) {
    this->CurrentEntry->dwSize = 0x238;
    iVar1 = Process32FirstW(this->SnapshotHandle,this->CurrentEntry);
    return iVar1 == 1;
  }
  iVar1 = Process32NextW(this->SnapshotHandle);
  return iVar1 == 1;
}

