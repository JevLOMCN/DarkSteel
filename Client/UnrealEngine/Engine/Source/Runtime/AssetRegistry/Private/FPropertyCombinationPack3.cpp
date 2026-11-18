// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// Pack @ 142b5dfb0

uint __cdecl FPropertyCombinationPack3::Pack(uint *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    if (7 < *param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values[0] <= MaxValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2d4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return *param_1;
  }
  if (param_2 == 2) {
    uVar3 = *param_1;
    if (uVar3 == 1) {
      if (((param_1[1] - 2 & 0xfffffff9) != 0) || (param_1[1] == 8)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values[1] == 2 || Values[1] == 4 || Values[1] == 6",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x2dc,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      return (param_1[1] - 2 >> 1) + 8;
    }
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        if (2 < param_1[1] - 4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values[1] == 4 || Values[1] == 5 || Values[1] == 6",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x2e2,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
        }
        return param_1[1] + 9;
      }
      if ((uVar3 != 5) || (param_1[1] != 6)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values[0] == 5 && Values[1] == 6",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x2e5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      return 0x10;
    }
    if (1 < param_1[1] - 4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values[1] == 4 || Values[1] == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2df,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return param_1[1] + 7;
  }
  if (param_2 != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                       ,0x2eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (*param_1 == 1) {
    if ((param_1[1] != 2) || (param_1[2] != 4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values[1] == 2 && Values[2] == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ee,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return 0x11;
  }
  if (((*param_1 != 3) || (param_1[1] != 5)) || (param_1[2] != 6)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values[0] == 3 && Values[1] == 5 && Values[2] == 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0x12;
}

// Unpack @ 142b6d700

void __cdecl FPropertyCombinationPack3::Unpack(uint param_1,uint **param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 8) {
    *param_2 = (uint *)((longlong)
                        &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                         ::__l5::Values + (ulonglong)param_1 * 4);
    *param_3 = 1;
    return;
  }
  switch(param_1) {
  case 8:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l10::Values;
    *param_3 = 2;
    return;
  case 9:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l11::Values;
    *param_3 = 2;
    return;
  case 10:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l12::Values;
    *param_3 = 2;
    return;
  case 0xb:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l13::Values;
    *param_3 = 2;
    return;
  case 0xc:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l14::Values;
    *param_3 = 2;
    return;
  case 0xd:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l15::Values;
    *param_3 = 2;
    return;
  case 0xe:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l16::Values;
    *param_3 = 2;
    return;
  case 0xf:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l17::Values;
    *param_3 = 2;
    return;
  case 0x10:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l18::Values;
    *param_3 = 2;
    return;
  case 0x11:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l19::Values;
    *param_3 = 3;
    return;
  case 0x12:
    *param_2 = (uint *)&`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l20::Values;
    *param_3 = 3;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                     ,0x2ca,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

