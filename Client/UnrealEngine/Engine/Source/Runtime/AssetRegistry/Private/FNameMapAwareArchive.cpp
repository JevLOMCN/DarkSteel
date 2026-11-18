// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// operator<< @ 142b4f6b0

FArchive * __thiscall
UE::AssetRegistry::FNameMapAwareArchive::operator<<(FNameMapAwareArchive *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  uint local_res18 [4];
  
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res8[0] = 0;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar7 = (longlong)(int)local_res18[0];
  if ((-1 < (int)local_res18[0]) && ((int)local_res18[0] < (this->NameMap).ArrayNum)) {
    uVar6 = 0;
    if ((int)local_res18[0] < (this->NameMap).ArrayNum) {
      uVar6 = ~local_res18[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar3.Number = local_res8[0];
    FVar3.ComparisonIndex.Value = *(uint *)((this->NameMap).AllocatorInstance.Data + lVar7 * 4);
    *param_1 = FVar3;
    return (FArchive *)this;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  FArchiveState::SetCriticalError((FArchiveState *)this);
  return (FArchive *)this;
}

