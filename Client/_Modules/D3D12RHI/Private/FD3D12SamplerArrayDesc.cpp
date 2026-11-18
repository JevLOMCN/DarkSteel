// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// operator== @ 1459ad2c0

bool __thiscall
FD3D12SamplerArrayDesc::operator==(FD3D12SamplerArrayDesc *this,FD3D12SamplerArrayDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (0x20 < this->Count) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count <= (sizeof(UEArrayCountHelper(SamplerID)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.h"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (0x20 < param_1->Count) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("rhs.Count <= (sizeof(UEArrayCountHelper(rhs.SamplerID)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.h"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->Count != param_1->Count) {
    return false;
  }
  iVar4 = memcmp(this->SamplerID,param_1->SamplerID,(ulonglong)this->Count * 2);
  return iVar4 == 0;
}

