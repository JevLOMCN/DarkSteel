// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FUniversallyUniqueObjectNameGenerator @ 142258840

FUniversallyUniqueObjectNameGenerator * __thiscall
FUniversallyUniqueObjectNameGenerator::FUniversallyUniqueObjectNameGenerator
          (FUniversallyUniqueObjectNameGenerator *this,FGuid *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  FUniversallyUniqueObjectNameGenerator *pFVar5;
  short sVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  
  this->Seed = (atomic<unsigned_int>)0x0;
  uVar2 = 0;
  uVar3 = CONCAT44(param_1->A,param_1->C);
  do {
    if (uVar3 == 0) {
      this->SessionIdBase36[uVar2] = L'\0';
      LOCK();
      this->Seed = (atomic<unsigned_int>)param_1->D;
      UNLOCK();
      return this;
    }
    uVar7 = uVar3 / 0x24;
    bVar9 = (char)uVar3 + (char)uVar7 * -0x24;
    sVar6 = 0x57;
    if (bVar9 < 10) {
      sVar6 = 0x30;
    }
    uVar8 = (int)uVar2 + 1;
    this->SessionIdBase36[uVar2] = sVar6 + (ushort)bVar9;
    uVar2 = (ulonglong)uVar8;
    uVar3 = uVar7;
  } while ((uVar8 < 0xe) ||
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < (sizeof(SessionIdBase36) / sizeof(SessionIdBase36[0]))",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                              ,0xb80,L""), !bVar4));
  pcVar1 = (code *)swi(3);
  pFVar5 = (FUniversallyUniqueObjectNameGenerator *)(*pcVar1)();
  return pFVar5;
}

// GetNewValue @ 14226ff00

uint __thiscall
FUniversallyUniqueObjectNameGenerator::GetNewValue(FUniversallyUniqueObjectNameGenerator *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  
  aVar2 = this->Seed;
  do {
    aVar3 = (atomic<unsigned_int>)((int)aVar2 * 0x19660d + 0x3c6ef35f);
    LOCK();
    aVar1 = this->Seed;
    bVar4 = aVar2 == aVar1;
    if (bVar4) {
      this->Seed = aVar3;
      aVar1 = aVar2;
    }
    aVar2 = aVar1;
    UNLOCK();
  } while (!bVar4);
  return (uint)aVar3;
}

