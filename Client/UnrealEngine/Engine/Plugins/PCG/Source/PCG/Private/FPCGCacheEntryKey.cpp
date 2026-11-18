// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FPCGCacheEntryKey @ 149ca25f0

FPCGCacheEntryKey * __thiscall
FPCGCacheEntryKey::FPCGCacheEntryKey(FPCGCacheEntryKey *this,IPCGElement *param_1,FPCGCrc *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPCGCacheEntryKey *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  this->Element = param_1;
  this->CrcHash = param_2->Value;
  this->Hash = 0;
  if (param_1 == (IPCGElement *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.h"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGCacheEntryKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2->bValid == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3679017334476898341>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.h"
                       ,0x25,"InCrc.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGCacheEntryKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar5 = this->CrcHash;
  uVar4 = ((uint)((ulonglong)this->Element >> 0x14) & 0xffff ^ (uint)((ulonglong)this->Element >> 4)
          ) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar6 = (uVar4 >> 0x10 ^ uVar4) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar7 = (uVar5 - uVar6) - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar5 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar4 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
  this->Hash = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  return this;
}

