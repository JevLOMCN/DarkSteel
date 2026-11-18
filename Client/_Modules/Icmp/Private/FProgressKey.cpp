// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 3

// FProgressKey @ 1445530a0

FProgressKey * __thiscall
FUdpPingWorker::FProgressKey::FProgressKey(FProgressKey *this,FString *param_1,int param_2)

{
  ::FString::FString(&this->Address,param_1);
  this->UniqueId = param_2;
  return this;
}

// operator== @ 144553e70

bool __thiscall FUdpPingWorker::FProgressKey::operator==(FProgressKey *this,FProgressKey *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->Address).Data.ArrayNum;
  iVar1 = (param_1->Address).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_144553eaa;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Address).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Address).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_144553eaa:
  if (this->UniqueId != param_1->UniqueId) {
    return false;
  }
  return true;
}

// CalcHash @ 144554ad0

uint __thiscall FUdpPingWorker::FProgressKey::CalcHash(FProgressKey *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (this->Address).Data.ArrayNum;
  uVar4 = this->UniqueId;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Address).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  uVar7 = uVar2 - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar6 = (uVar4 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar4 = (uVar2 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar2 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar6 = (uVar7 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 << 10;
  return (uVar2 - uVar4) - uVar6 ^ uVar4 >> 0xf;
}

