// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 2

// GetCharKeyMap @ 14238fc80

uint __cdecl FWindowsPlatformInput::GetCharKeyMap(uint *param_1,FString *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FGenericPlatformInput::GetStandardPrintableKeyMap(param_1,param_2,param_3,true,false);
  return uVar1;
}

// GetKeyMap @ 142391140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint __cdecl FWindowsPlatformInput::GetKeyMap(uint *param_1,FString *param_2,uint param_3)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  FString *pFVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  FString *pFVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_16a8 [32];
  UINT local_1678 [3];
  undefined4 local_166c;
  UINT local_1668 [3];
  UINT local_165c;
  UINT local_1658 [3];
  UINT local_164c;
  UINT local_1648 [3];
  UINT local_163c;
  UINT local_1638 [3];
  UINT local_162c;
  UINT local_1628 [3];
  UINT local_161c;
  UINT local_1618 [2];
  undefined8 local_1610;
  undefined1 local_1608 [8];
  undefined1 local_1600 [8];
  undefined1 local_15f8 [8];
  undefined1 local_15f0 [8];
  undefined1 local_15e8 [8];
  undefined1 local_15e0 [8];
  TPairInitializer<unsigned_int_const_&,unsigned_int_&&> local_15d8;
  int iStack_15c8;
  uint uStack_15c4;
  TBitArray<FDefaultBitArrayAllocator> *local_15c0;
  undefined4 uStack_15b8;
  int iStack_15b4;
  int local_15b0;
  int iStack_15ac;
  uint *local_15a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1598;
  UINT *local_1578;
  UINT *local_1570;
  UINT *local_1568;
  UINT *local_1560;
  UINT *local_1558;
  undefined4 *local_1550;
  UINT *local_1548;
  UINT *local_1540;
  UINT *local_1538;
  undefined4 *local_1530;
  UINT *local_1528;
  UINT *local_1520;
  UINT *local_1518;
  undefined4 *local_1510;
  UINT *local_1508;
  UINT *local_1500;
  UINT *local_14f8;
  undefined4 *local_14f0;
  UINT *local_14e8;
  UINT *local_14e0;
  UINT *local_14d8;
  undefined4 *local_14d0;
  UINT *local_14c8;
  UINT *local_14c0;
  UINT *local_14b8;
  longlong local_14b0;
  FString local_14a8;
  undefined1 local_1498 [32];
  uint *local_1478;
  int local_1470;
  undefined4 local_146c;
  undefined4 local_1468;
  undefined4 local_1464;
  ForElementType<FSetElementId> local_1458;
  int local_1450;
  uint local_1448 [256];
  FString local_1048 [255];
  ulonglong local_58 [4];
  
  local_58[2] = __security_cookie.value ^ (ulonglong)auStack_16a8;
  uVar5 = 0;
  uVar6 = 0;
  if ((param_1 != (uint *)0x0) && (uVar6 = 0, param_2 != (FString *)0x0)) {
    if (param_3 == 0) goto LAB_142392192;
    *param_1 = 1;
    local_1610 = 1;
    ::FString::operator=(param_2,L"LeftMouseButton");
    uVar14 = 1;
    if (1 < param_3) {
      param_1[1] = 2;
      ::FString::operator=(param_2 + 1,L"RightMouseButton");
      uVar14 = 2;
      if (2 < param_3) {
        param_1[2] = 4;
        ::FString::operator=(param_2 + 2,L"MiddleMouseButton");
        uVar14 = 3;
        if (3 < param_3) {
          param_1[3] = 5;
          ::FString::operator=(param_2 + 3,L"ThumbMouseButton");
          uVar14 = 4;
          if (4 < param_3) {
            param_1[4] = 6;
            ::FString::operator=(param_2 + 4,L"ThumbMouseButton2");
            uVar14 = 5;
            if (5 < param_3) {
              param_1[5] = 8;
              ::FString::operator=(param_2 + 5,L"BackSpace");
              uVar14 = 6;
              if (6 < param_3) {
                param_1[6] = 9;
                ::FString::operator=(param_2 + 6,L"Tab");
                uVar14 = 7;
                if (7 < param_3) {
                  param_1[7] = 0xd;
                  ::FString::operator=(param_2 + 7,L"Enter");
                  uVar14 = 8;
                  if (8 < param_3) {
                    param_1[8] = 0x13;
                    ::FString::operator=(param_2 + 8,L"Pause");
                    uVar14 = 9;
                    if (9 < param_3) {
                      param_1[9] = 0x14;
                      ::FString::operator=(param_2 + 9,L"CapsLock");
                      uVar14 = 10;
                      if (10 < param_3) {
                        param_1[10] = 0x1b;
                        ::FString::operator=(param_2 + 10,L"Escape");
                        uVar14 = 0xb;
                        if (0xb < param_3) {
                          param_1[0xb] = 0x20;
                          ::FString::operator=(param_2 + 0xb,L"SpaceBar");
                          uVar14 = 0xc;
                          if (0xc < param_3) {
                            param_1[0xc] = 0x21;
                            ::FString::operator=(param_2 + 0xc,L"PageUp");
                            uVar14 = 0xd;
                            if (0xd < param_3) {
                              param_1[0xd] = 0x22;
                              ::FString::operator=(param_2 + 0xd,L"PageDown");
                              uVar14 = 0xe;
                              if (0xe < param_3) {
                                param_1[0xe] = 0x23;
                                ::FString::operator=(param_2 + 0xe,L"End");
                                uVar14 = 0xf;
                                if (0xf < param_3) {
                                  param_1[0xf] = 0x24;
                                  ::FString::operator=(param_2 + 0xf,L"Home");
                                  uVar14 = 0x10;
                                  if (0x10 < param_3) {
                                    param_1[0x10] = 0x25;
                                    ::FString::operator=(param_2 + 0x10,L"Left");
                                    uVar14 = 0x11;
                                    if (0x11 < param_3) {
                                      param_1[0x11] = 0x26;
                                      ::FString::operator=(param_2 + 0x11,L"Up");
                                      uVar14 = 0x12;
                                      if (0x12 < param_3) {
                                        param_1[0x12] = 0x27;
                                        ::FString::operator=(param_2 + 0x12,L"Right");
                                        uVar14 = 0x13;
                                        if (0x13 < param_3) {
                                          param_1[0x13] = 0x28;
                                          ::FString::operator=(param_2 + 0x13,L"Down");
                                          uVar14 = 0x14;
                                          if (0x14 < param_3) {
                                            param_1[0x14] = 0x2d;
                                            ::FString::operator=(param_2 + 0x14,L"Insert");
                                            uVar14 = 0x15;
                                            if (0x15 < param_3) {
                                              param_1[0x15] = 0x2e;
                                              ::FString::operator=(param_2 + 0x15,L"Delete");
                                              uVar14 = 0x16;
                                              if (0x16 < param_3) {
                                                param_1[0x16] = 0x60;
                                                ::FString::operator=(param_2 + 0x16,L"NumPadZero");
                                                uVar14 = 0x17;
                                                if (0x17 < param_3) {
                                                  param_1[0x17] = 0x61;
                                                  ::FString::operator=(param_2 + 0x17,L"NumPadOne");
                                                  uVar14 = 0x18;
                                                  if (0x18 < param_3) {
                                                    param_1[0x18] = 0x62;
                                                    ::FString::operator=
                                                              (param_2 + 0x18,L"NumPadTwo");
                                                    uVar14 = 0x19;
                                                    if (0x19 < param_3) {
                                                      param_1[0x19] = 99;
                                                      ::FString::operator=
                                                                (param_2 + 0x19,L"NumPadThree");
                                                      uVar14 = 0x1a;
                                                      if (0x1a < param_3) {
                                                        param_1[0x1a] = 100;
                                                        ::FString::operator=
                                                                  (param_2 + 0x1a,L"NumPadFour");
                                                        uVar14 = 0x1b;
                                                        if (0x1b < param_3) {
                                                          param_1[0x1b] = 0x65;
                                                          ::FString::operator=
                                                                    (param_2 + 0x1b,L"NumPadFive");
                                                          uVar14 = 0x1c;
                                                          if (0x1c < param_3) {
                                                            param_1[0x1c] = 0x66;
                                                            ::FString::operator=
                                                                      (param_2 + 0x1c,L"NumPadSix");
                                                            uVar14 = 0x1d;
                                                            if (0x1d < param_3) {
                                                              param_1[0x1d] = 0x67;
                                                              ::FString::operator=
                                                                        (param_2 + 0x1d,
                                                                         L"NumPadSeven");
                                                              uVar14 = 0x1e;
                                                              if (0x1e < param_3) {
                                                                param_1[0x1e] = 0x68;
                                                                ::FString::operator=
                                                                          (param_2 + 0x1e,
                                                                           L"NumPadEight");
                                                                uVar14 = 0x1f;
                                                                if (0x1f < param_3) {
                                                                  param_1[0x1f] = 0x69;
                                                                  ::FString::operator=
                                                                            (param_2 + 0x1f,
                                                                             L"NumPadNine");
                                                                  uVar14 = 0x20;
                                                                  if (0x20 < param_3) {
                                                                    param_1[0x20] = 0x6a;
                                                                    ::FString::operator=
                                                                              (param_2 + 0x20,
                                                                               L"Multiply");
                                                                    uVar14 = 0x21;
                                                                    if (0x21 < param_3) {
                                                                      param_1[0x21] = 0x6b;
                                                                      ::FString::operator=
                                                                                (param_2 + 0x21,
                                                                                 L"Add");
                                                                      uVar14 = 0x22;
                                                                      if (0x22 < param_3) {
                                                                        param_1[0x22] = 0x6d;
                                                                        ::FString::operator=
                                                                                  (param_2 + 0x22,
                                                                                   L"Subtract");
                                                                        uVar14 = 0x23;
                                                                        if (0x23 < param_3) {
                                                                          param_1[0x23] = 0x6e;
                                                                          ::FString::operator=
                                                                                    (param_2 + 0x23,
                                                                                     L"Decimal");
                                                                          uVar14 = 0x24;
                                                                          if (0x24 < param_3) {
                                                                            param_1[0x24] = 0x6f;
                                                                            ::FString::operator=
                                                                                      (param_2 + 
                                                  0x24,L"Divide");
                                                  uVar14 = 0x25;
                                                  if (0x25 < param_3) {
                                                    param_1[0x25] = 0x70;
                                                    ::FString::operator=(param_2 + 0x25,L"F1");
                                                    uVar14 = 0x26;
                                                    if (0x26 < param_3) {
                                                      param_1[0x26] = 0x71;
                                                      ::FString::operator=(param_2 + 0x26,L"F2");
                                                      uVar14 = 0x27;
                                                      if (0x27 < param_3) {
                                                        param_1[0x27] = 0x72;
                                                        ::FString::operator=(param_2 + 0x27,L"F3");
                                                        uVar14 = 0x28;
                                                        if (0x28 < param_3) {
                                                          param_1[0x28] = 0x73;
                                                          ::FString::operator=(param_2 + 0x28,L"F4")
                                                          ;
                                                          uVar14 = 0x29;
                                                          if (0x29 < param_3) {
                                                            param_1[0x29] = 0x74;
                                                            ::FString::operator=
                                                                      (param_2 + 0x29,L"F5");
                                                            uVar14 = 0x2a;
                                                            if (0x2a < param_3) {
                                                              param_1[0x2a] = 0x75;
                                                              ::FString::operator=
                                                                        (param_2 + 0x2a,L"F6");
                                                              uVar14 = 0x2b;
                                                              if (0x2b < param_3) {
                                                                param_1[0x2b] = 0x76;
                                                                ::FString::operator=
                                                                          (param_2 + 0x2b,L"F7");
                                                                uVar14 = 0x2c;
                                                                if (0x2c < param_3) {
                                                                  param_1[0x2c] = 0x77;
                                                                  ::FString::operator=
                                                                            (param_2 + 0x2c,L"F8");
                                                                  uVar14 = 0x2d;
                                                                  if (0x2d < param_3) {
                                                                    param_1[0x2d] = 0x78;
                                                                    ::FString::operator=
                                                                              (param_2 + 0x2d,L"F9")
                                                                    ;
                                                                    uVar14 = 0x2e;
                                                                    if (0x2e < param_3) {
                                                                      param_1[0x2e] = 0x79;
                                                                      ::FString::operator=
                                                                                (param_2 + 0x2e,
                                                                                 L"F10");
                                                                      uVar14 = 0x2f;
                                                                      if (0x2f < param_3) {
                                                                        param_1[0x2f] = 0x7a;
                                                                        ::FString::operator=
                                                                                  (param_2 + 0x2f,
                                                                                   L"F11");
                                                                        uVar14 = 0x30;
                                                                        if (0x30 < param_3) {
                                                                          param_1[0x30] = 0x7b;
                                                                          ::FString::operator=
                                                                                    (param_2 + 0x30,
                                                                                     L"F12");
                                                                          uVar14 = 0x31;
                                                                          if (0x31 < param_3) {
                                                                            param_1[0x31] = 0x90;
                                                                            ::FString::operator=
                                                                                      (param_2 + 
                                                  0x31,L"NumLock");
                                                  uVar14 = 0x32;
                                                  if (0x32 < param_3) {
                                                    param_1[0x32] = 0x91;
                                                    ::FString::operator=
                                                              (param_2 + 0x32,L"ScrollLock");
                                                    uVar14 = 0x33;
                                                    if (0x33 < param_3) {
                                                      param_1[0x33] = 0xa0;
                                                      ::FString::operator=
                                                                (param_2 + 0x33,L"LeftShift");
                                                      uVar14 = 0x34;
                                                      if (0x34 < param_3) {
                                                        param_1[0x34] = 0xa1;
                                                        ::FString::operator=
                                                                  (param_2 + 0x34,L"RightShift");
                                                        uVar14 = 0x35;
                                                        if (0x35 < param_3) {
                                                          param_1[0x35] = 0xa2;
                                                          ::FString::operator=
                                                                    (param_2 + 0x35,L"LeftControl");
                                                          uVar14 = 0x36;
                                                          if (0x36 < param_3) {
                                                            param_1[0x36] = 0xa3;
                                                            ::FString::operator=
                                                                      (param_2 + 0x36,
                                                                       L"RightControl");
                                                            uVar14 = 0x37;
                                                            if (0x37 < param_3) {
                                                              param_1[0x37] = 0xa4;
                                                              ::FString::operator=
                                                                        (param_2 + 0x37,L"LeftAlt");
                                                              uVar14 = 0x38;
                                                              if (0x38 < param_3) {
                                                                param_1[0x38] = 0xa5;
                                                                ::FString::operator=
                                                                          (param_2 + 0x38,
                                                                           L"RightAlt");
                                                                uVar14 = 0x39;
                                                                if (0x39 < param_3) {
                                                                  param_1[0x39] = 0x5b;
                                                                  ::FString::operator=
                                                                            (param_2 + 0x39,
                                                                             L"LeftCommand");
                                                                  uVar14 = 0x3a;
                                                                  if (0x3a < param_3) {
                                                                    param_1[0x3a] = 0x5c;
                                                                    ::FString::operator=
                                                                              (param_2 + 0x3a,
                                                                               L"RightCommand");
                                                                    uVar14 = 0x3b;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = (uint)uVar14;
    local_1498._0_8_ = 0;
    local_1498._8_8_ = 0;
    local_1478 = (uint *)0x0;
    local_1470 = 0;
    local_146c = 0x80;
    local_1468 = 0xffffffff;
    local_1464 = 0;
    local_1458 = (ForElementType<FSetElementId>)0x0;
    local_1450 = 0;
    local_1678[0] = MapVirtualKeyW(0xba,2);
    if (local_1678[0] != 0) {
      local_14c8 = local_1678;
      local_1678[1] = 0xba;
      local_14c0 = local_1678 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,&local_15d8,(bool *)&local_14c8);
    }
    local_1678[2] = MapVirtualKeyW(0xbf,2);
    if (local_1678[2] != 0) {
      local_14b8 = local_1678 + 2;
      local_166c = 0xbf;
      local_14b0 = (longlong)&local_166c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_1608,
                 (bool *)&local_14b8);
    }
    local_1668[0] = MapVirtualKeyW(0xc0,2);
    if (local_1668[0] != 0) {
      local_1578 = local_1668;
      local_1668[1] = 0xc0;
      local_1570 = local_1668 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_1608 + 4),
                 (bool *)&local_1578);
    }
    local_1668[2] = MapVirtualKeyW(0xdb,2);
    if (local_1668[2] != 0) {
      local_1568 = local_1668 + 2;
      local_165c = 0xdb;
      local_1560 = &local_165c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_1600,
                 (bool *)&local_1568);
    }
    local_1658[0] = MapVirtualKeyW(0xdc,2);
    if (local_1658[0] != 0) {
      local_1558 = local_1658;
      local_1658[1] = 0xdc;
      local_1550 = local_1658 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_1600 + 4),
                 (bool *)&local_1558);
    }
    local_1658[2] = MapVirtualKeyW(0xdd,2);
    if (local_1658[2] != 0) {
      local_1548 = local_1658 + 2;
      local_164c = 0xdd;
      local_1540 = &local_164c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_15f8,
                 (bool *)&local_1548);
    }
    local_1648[0] = MapVirtualKeyW(0xde,2);
    if (local_1648[0] != 0) {
      local_1538 = local_1648;
      local_1648[1] = 0xde;
      local_1530 = local_1648 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_15f8 + 4),
                 (bool *)&local_1538);
    }
    local_1648[2] = MapVirtualKeyW(0xdf,2);
    if (local_1648[2] != 0) {
      local_1528 = local_1648 + 2;
      local_163c = 0xdf;
      local_1520 = &local_163c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_15f0,
                 (bool *)&local_1528);
    }
    local_1638[0] = MapVirtualKeyW(0xbb,2);
    if (local_1638[0] != 0) {
      local_1518 = local_1638;
      local_1638[1] = 0xbb;
      local_1510 = local_1638 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_15f0 + 4),
                 (bool *)&local_1518);
    }
    local_1638[2] = MapVirtualKeyW(0xbc,2);
    if (local_1638[2] != 0) {
      local_1508 = local_1638 + 2;
      local_162c = 0xbc;
      local_1500 = &local_162c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_15e8,
                 (bool *)&local_1508);
    }
    local_1628[0] = MapVirtualKeyW(0xbd,2);
    if (local_1628[0] != 0) {
      local_14f8 = local_1628;
      local_1628[1] = 0xbd;
      local_14f0 = local_1628 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_15e8 + 4),
                 (bool *)&local_14f8);
    }
    local_1628[2] = MapVirtualKeyW(0xbe,2);
    if (local_1628[2] != 0) {
      local_14e8 = local_1628 + 2;
      local_161c = 0xbe;
      local_14e0 = &local_161c;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_15e0,
                 (bool *)&local_14e8);
    }
    local_1618[0] = MapVirtualKeyW(0xe2,2);
    if (local_1618[0] != 0) {
      local_14d8 = local_1618;
      local_1618[1] = 0xe2;
      local_14d0 = local_1618 + 1;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_15e0 + 4),
                 (bool *)&local_14d8);
    }
    lVar17 = 0x100;
    piVar7 = &local_1048[0].Data.ArrayMax;
    lVar9 = 0x100;
    do {
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar7 + -3))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar7 + -1) = 0;
      piVar7 = piVar7 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar5 = FGenericPlatformInput::GetStandardPrintableKeyMap
                      (local_1448,local_1048,0x100,true,false);
    uVar11 = 1;
    if (0 < (int)uVar5) {
      puVar10 = local_1448;
      uVar16 = (ulonglong)uVar5;
      do {
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_1498,*puVar10);
        puVar10 = puVar10 + 1;
        uVar16 = uVar16 - 1;
        uVar11 = local_1610;
      } while (uVar16 != 0);
    }
    uStack_15c4 = (uint)uVar11;
    iStack_15c8 = 0;
    iStack_15b4 = 0;
    local_15b0 = iStack_15c8;
    if (local_1470 != 0) {
      puVar10 = (uint *)(local_1498 + 0x10);
      if (local_1478 != (uint *)0x0) {
        puVar10 = local_1478;
      }
      uVar5 = *puVar10;
      while (uVar5 == 0) {
        lVar9 = (longlong)iStack_15c8;
        local_15b0 = local_15b0 + 0x20;
        iStack_15c8 = iStack_15c8 + 1;
        iStack_15b4 = local_1470;
        if ((int)(local_1470 + -1 + (local_1470 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_15c8)
        goto LAB_14239202f;
        uVar5 = puVar10[lVar9 + 1];
      }
      uStack_15c4 = -uVar5 & uVar5;
      uVar16 = (ulonglong)uStack_15c4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_1610 = CONCAT44(local_1610._4_4_,(int)lVar9);
      iStack_15b4 = (int)lVar9 + -1 + local_15b0;
      if (local_1470 < iStack_15b4) {
        iStack_15b4 = local_1470;
      }
    }
LAB_14239202f:
    local_15d8.Value = (uint *)local_1498;
    local_15c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1498 + 0x10);
    uStack_15b8 = 0xffffffff;
    TStack_1598._padding_ = CONCAT44(uStack_15c4,iStack_15c8);
    TStack_1598.CurrentBitIndex = iStack_15b4;
    TStack_1598.UnvisitedBitMask = 0xffffffff;
    TStack_1598._28_4_ = iStack_15b4;
    TStack_1598.BaseBitIndex = local_15b0;
    iStack_15ac = iStack_15b4;
    local_15a0 = local_15d8.Value;
    TStack_1598.Array = local_15c0;
    iVar15 = iStack_15b4;
    if (iStack_15b4 < local_1470) {
      do {
        if ((uint)uVar14 < param_3) {
          param_1[uVar14] = *(uint *)(*(longlong *)local_15a0 + 4 + (longlong)iVar15 * 0x10);
          pFVar8 = ::FString::Chr(&local_14a8,
                                  *(wchar_t *)(*(longlong *)local_15a0 + (longlong)iVar15 * 0x10));
          pFVar12 = param_2 + uVar14;
          if (pFVar12 != pFVar8) {
            pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pFVar12->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar12->Data).ArrayNum = (pFVar8->Data).ArrayNum;
            (pFVar12->Data).ArrayMax = (pFVar8->Data).ArrayMax;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_14a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14a8.Data.AllocatorInstance.Data);
          }
          uVar14 = (ulonglong)((uint)uVar14 + 1);
        }
        uVar6 = (uint)uVar14;
        TStack_1598.UnvisitedBitMask = TStack_1598.UnvisitedBitMask & ~TStack_1598._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1598);
        iVar15 = TStack_1598.CurrentBitIndex;
      } while (TStack_1598.CurrentBitIndex < (TStack_1598.Array)->NumBits);
    }
    puVar13 = local_58 + 2;
    do {
      puVar1 = puVar13 + -2;
      puVar13 = puVar13 + -2;
      lVar17 = lVar17 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar17 != 0);
    local_1450 = 0;
    if (local_1458 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1458);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1498);
  }
  uVar5 = uVar6;
  if (uVar5 < param_3) {
    return uVar5;
  }
LAB_142392192:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumMappings < MaxMappings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InputCore\\Private\\Windows\\WindowsPlatformInput.cpp"
                     ,0x76,L"");
  if (!bVar4) {
    return uVar5;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

