// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// SetHostFromUrl @ 1445818c0

int __thiscall
UE::IoStore::HTTP::FConnectionPool::FParams::SetHostFromUrl
          (FParams *this,TStringView<char> *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  FUrlOffsets local_res10 [3];
  TStringView<char> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = ParseUrl(&local_18,local_res10);
  if (-1 < iVar1) {
    iVar1 = (uint)local_res10[0].HostName.Right - (uint)local_res10[0].HostName.Left;
    uVar5 = (uint)*(undefined8 *)&param_1->Size;
    uVar3 = (uint)local_res10[0].HostName.Left;
    if (local_res10[0].HostName.Left != uVar5 &&
        (int)uVar5 <= (int)(uint)local_res10[0].HostName.Left) {
      uVar3 = uVar5;
    }
    iVar7 = uVar5 - uVar3;
    if (iVar1 < (int)(uVar5 - uVar3)) {
      iVar7 = iVar1;
    }
    pcVar2 = param_1->DataPtr;
    this->VerifyCert = 0;
    iVar1 = 0;
    if (0 < iVar7) {
      iVar1 = iVar7;
    }
    (this->HostName).DataPtr = pcVar2 + (int)uVar3;
    (this->HostName).Size = iVar1;
    *(undefined4 *)&(this->HostName).field_0xc = local_18._12_4_;
    if (local_res10[0].SchemeLength == '\x05') {
      this->VerifyCert = 0xffffffffffffffff;
    }
    if (local_res10[0].Port.Left != 0) {
      uVar3 = 0;
      uVar4 = (uint)local_res10[0].Port.Left;
      uVar6 = (uint)*(undefined8 *)&param_1->Size;
      uVar5 = uVar4;
      if ((int)uVar6 < (int)uVar4) {
        uVar5 = uVar6;
      }
      iVar1 = uVar6 - uVar5;
      if ((int)(local_res10[0].Port.Right - uVar4) < (int)(uVar6 - uVar5)) {
        iVar1 = local_res10[0].Port.Right - uVar4;
      }
      pcVar2 = param_1->DataPtr + (int)uVar5;
      iVar7 = 0;
      if (0 < iVar1) {
        iVar7 = iVar1;
      }
      pcVar8 = pcVar2 + iVar7;
      for (; (pcVar2 != pcVar8 && ((int)*pcVar2 - 0x30U < 10)); pcVar2 = pcVar2 + 1) {
        uVar3 = ((int)*pcVar2 - 0x30U) + uVar3 * 10;
      }
      this->Port = uVar3 & 0xffff;
    }
    return (int)local_res10[0].Path;
  }
  return -1;
}

