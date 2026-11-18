// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// FPakData @ 142a52f40

/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakData * __thiscall
FPakPrecacher::FPakData::FPakData
          (FPakData *this,FPakFile *param_1,IAsyncReadFileHandle *param_2,FName param_3,
          long64 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  FPakData *pFVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  this->TotalSize = param_4;
  this->StartShift = 0;
  this->MaxShift = 0;
  this->BytesToBitsShift = 0;
  this->ActualPakFile = param_1;
  this->Name = param_3;
  (this->Signatures).Object = (FPakSignatureFile *)0x0;
  (this->Signatures).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Handle = param_2;
  if ((((param_2 == (IAsyncReadFileHandle *)0x0) || (param_4 < 1)) || (param_3 == (FName)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle && TotalSize > 0 && Name != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x2c5,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPakData *)(*pcVar2)();
    return pFVar5;
  }
  *(uint *)((longlong)(this->InRequests + 0) + 0) = 0;
  *(uint *)((longlong)(this->InRequests + 0) + 4) = 0;
  *(undefined8 *)(this->InRequests[0] + 2) = 0;
  *(uint *)((longlong)(this->InRequests + 1) + 4) = 0;
  *(uint *)((longlong)(this->InRequests + 1) + 8) = 0;
  *(uint *)((longlong)(this->InRequests + 2) + 0) = 0;
  *(uint *)((longlong)(this->InRequests + 2) + 4) = 0;
  *(undefined8 *)(this->InRequests[2] + 2) = 0;
  *(uint *)((longlong)(this->InRequests + 3) + 4) = 0;
  *(uint *)((longlong)(this->InRequests + 3) + 8) = 0;
  *(uint *)((longlong)(this->InRequests + 4) + 0) = 0;
  *(uint *)((longlong)(this->InRequests + 4) + 4) = 0;
  *(undefined8 *)(this->InRequests[4] + 2) = 0;
  *(uint *)((longlong)(this->InRequests + 5) + 4) = 0;
  *(uint *)((longlong)(this->InRequests + 5) + 8) = 0;
  this->CacheBlocks[0] = 0;
  this->CacheBlocks[1] = 0;
  lVar6 = 0x10001;
  if (0x10001 < (ulonglong)this->TotalSize) {
    lVar6 = this->TotalSize;
  }
  uVar1 = lVar6 - 1;
  if (-1 < (longlong)uVar1) {
    uVar8 = this->StartShift;
    uVar10 = uVar1;
    do {
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 * 2;
    } while (-1 < (longlong)uVar10);
    this->StartShift = uVar8;
  }
  uVar7 = 0x10000;
  uVar10 = uVar1;
  uVar8 = this->BytesToBitsShift;
  do {
    uVar9 = uVar8;
    uVar10 = uVar10 >> 1;
    uVar7 = uVar7 >> 1;
    uVar8 = uVar9 + 1;
  } while (uVar7 != 0);
  this->BytesToBitsShift = uVar9;
  if ((1 << ((byte)uVar9 & 0x1f) != 0x10000) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("1 << BytesToBitsShift == (1024*64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x2e7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPakData *)(*pcVar2)();
    return pFVar5;
  }
  uVar9 = this->StartShift;
  this->MaxShift = uVar9;
  uVar8 = uVar9;
  if (uVar10 != 0) {
    do {
      uVar10 = uVar10 >> 1;
      uVar8 = uVar8 + 1;
    } while (uVar10 != 0);
    this->MaxShift = uVar8;
  }
  uVar10 = 0xffffffffffffffff >> ((byte)uVar9 & 0x3f);
  this->MaxNode = uVar10;
  if (((uVar10 < uVar1) || (uVar1 <= uVar10 >> 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxNode >= StartingLastByte && (MaxNode >> 1) < StartingLastByte",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x2ef,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPakData *)(*pcVar2)();
    return pFVar5;
  }
  if ((((this->MaxShift == 0) || (bVar3 = (byte)this->MaxShift, 0x10000L << (bVar3 + 1 & 0x3f) != 0)
       ) || (0x10000L << (bVar3 & 0x3f) == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxShift && (uint64((1024*64)) << (MaxShift + 1)) == 0 && (uint64((1024*64)) << MaxShift) != 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x2f1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPakData *)(*pcVar2)();
    return pFVar5;
  }
  return this;
}

