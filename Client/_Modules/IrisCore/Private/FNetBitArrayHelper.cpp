// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// ClearBit @ 144232fb0

void __cdecl UE::Net::FNetBitArrayHelper::ClearBit(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1[param_3 >> 5] = param_1[param_3 >> 5] & ~(1 << (param_3 & 0x1f));
  return;
}

// GetBit @ 14423b3a0

bool __cdecl UE::Net::FNetBitArrayHelper::GetBit(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (param_1[param_3 >> 5] >> (param_3 & 0x1f) & 1) != 0;
}

// SetBit @ 144251260

void __cdecl UE::Net::FNetBitArrayHelper::SetBit(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1[param_3 >> 5] = param_1[param_3 >> 5] | 1 << (param_3 & 0x1f);
  return;
}

// SetBitValue @ 1442512d0

void __cdecl
UE::Net::FNetBitArrayHelper::SetBitValue(uint *param_1,uint param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = 1 << ((byte)param_3 & 0x1f);
  uVar3 = 0;
  if (param_4) {
    uVar3 = uVar4;
  }
  param_1[param_3 >> 5] = uVar3 | ~uVar4 & param_1[param_3 >> 5];
  return;
}

