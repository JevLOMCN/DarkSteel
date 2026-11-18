// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 3

// GetGamepadAcceptKey @ 14238fe50

FKey * __cdecl FGenericPlatformInput::GetGamepadAcceptKey(FKey *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->KeyName = EKeys::Gamepad_FaceButton_Bottom.KeyName;
  (__return_storage_ptr__->KeyDetails).Object = EKeys::Gamepad_FaceButton_Bottom.KeyDetails.Object;
  FVar2 = EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGamepadBackKey @ 14238fe90

FKey * __cdecl FGenericPlatformInput::GetGamepadBackKey(FKey *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->KeyName = EKeys::Gamepad_FaceButton_Right.KeyName;
  (__return_storage_ptr__->KeyDetails).Object = EKeys::Gamepad_FaceButton_Right.KeyDetails.Object;
  FVar2 = EKeys::Gamepad_FaceButton_Right.KeyDetails.SharedReferenceCount;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       EKeys::Gamepad_FaceButton_Right.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetStandardPrintableKeyMap @ 142392630

uint __cdecl
FGenericPlatformInput::GetStandardPrintableKeyMap
          (uint *param_1,FString *param_2,uint param_3,bool param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    *param_1 = 0x30;
    ::FString::operator=(param_2,L"Zero");
    uVar3 = 1;
    if (1 < param_3) {
      param_1[1] = 0x31;
      ::FString::operator=(param_2 + 1,L"One");
      uVar3 = 2;
      if (2 < param_3) {
        param_1[2] = 0x32;
        ::FString::operator=(param_2 + 2,L"Two");
        uVar3 = 3;
        if (3 < param_3) {
          param_1[3] = 0x33;
          ::FString::operator=(param_2 + 3,L"Three");
          uVar3 = 4;
          if (4 < param_3) {
            param_1[4] = 0x34;
            ::FString::operator=(param_2 + 4,L"Four");
            uVar3 = 5;
            if (5 < param_3) {
              param_1[5] = 0x35;
              ::FString::operator=(param_2 + 5,L"Five");
              uVar3 = 6;
              if (6 < param_3) {
                param_1[6] = 0x36;
                ::FString::operator=(param_2 + 6,L"Six");
                uVar3 = 7;
                if (7 < param_3) {
                  param_1[7] = 0x37;
                  ::FString::operator=(param_2 + 7,L"Seven");
                  uVar3 = 8;
                  if (8 < param_3) {
                    param_1[8] = 0x38;
                    ::FString::operator=(param_2 + 8,L"Eight");
                    uVar3 = 9;
                    if (9 < param_3) {
                      param_1[9] = 0x39;
                      ::FString::operator=(param_2 + 9,L"Nine");
                      uVar3 = 10;
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
  if ((param_4) && (uVar2 = (uint)uVar3, uVar2 < param_3)) {
    param_1[uVar3] = 0x41;
    ::FString::operator=(param_2 + uVar3,L"A");
    uVar1 = uVar2 + 1;
    uVar3 = (ulonglong)uVar1;
    if (uVar1 < param_3) {
      param_1[uVar3] = 0x42;
      ::FString::operator=(param_2 + uVar1,L"B");
      uVar1 = uVar2 + 2;
      uVar3 = (ulonglong)uVar1;
      if (uVar1 < param_3) {
        param_1[uVar3] = 0x43;
        ::FString::operator=(param_2 + uVar1,L"C");
        uVar1 = uVar2 + 3;
        uVar3 = (ulonglong)uVar1;
        if (uVar1 < param_3) {
          param_1[uVar3] = 0x44;
          ::FString::operator=(param_2 + uVar1,L"D");
          uVar1 = uVar2 + 4;
          uVar3 = (ulonglong)uVar1;
          if (uVar1 < param_3) {
            param_1[uVar3] = 0x45;
            ::FString::operator=(param_2 + uVar1,L"E");
            uVar1 = uVar2 + 5;
            uVar3 = (ulonglong)uVar1;
            if (uVar1 < param_3) {
              param_1[uVar3] = 0x46;
              ::FString::operator=(param_2 + uVar1,L"F");
              uVar1 = uVar2 + 6;
              uVar3 = (ulonglong)uVar1;
              if (uVar1 < param_3) {
                param_1[uVar3] = 0x47;
                ::FString::operator=(param_2 + uVar1,L"G");
                uVar1 = uVar2 + 7;
                uVar3 = (ulonglong)uVar1;
                if (uVar1 < param_3) {
                  param_1[uVar3] = 0x48;
                  ::FString::operator=(param_2 + uVar1,L"H");
                  uVar1 = uVar2 + 8;
                  uVar3 = (ulonglong)uVar1;
                  if (uVar1 < param_3) {
                    param_1[uVar3] = 0x49;
                    ::FString::operator=(param_2 + uVar1,L"I");
                    uVar1 = uVar2 + 9;
                    uVar3 = (ulonglong)uVar1;
                    if (uVar1 < param_3) {
                      param_1[uVar3] = 0x4a;
                      ::FString::operator=(param_2 + uVar1,L"J");
                      uVar1 = uVar2 + 10;
                      uVar3 = (ulonglong)uVar1;
                      if (uVar1 < param_3) {
                        param_1[uVar3] = 0x4b;
                        ::FString::operator=(param_2 + uVar1,L"K");
                        uVar1 = uVar2 + 0xb;
                        uVar3 = (ulonglong)uVar1;
                        if (uVar1 < param_3) {
                          param_1[uVar3] = 0x4c;
                          ::FString::operator=(param_2 + uVar1,L"L");
                          uVar1 = uVar2 + 0xc;
                          uVar3 = (ulonglong)uVar1;
                          if (uVar1 < param_3) {
                            param_1[uVar3] = 0x4d;
                            ::FString::operator=(param_2 + uVar1,L"M");
                            uVar1 = uVar2 + 0xd;
                            uVar3 = (ulonglong)uVar1;
                            if (uVar1 < param_3) {
                              param_1[uVar3] = 0x4e;
                              ::FString::operator=(param_2 + uVar1,L"N");
                              uVar1 = uVar2 + 0xe;
                              uVar3 = (ulonglong)uVar1;
                              if (uVar1 < param_3) {
                                param_1[uVar3] = 0x4f;
                                ::FString::operator=(param_2 + uVar1,L"O");
                                uVar1 = uVar2 + 0xf;
                                uVar3 = (ulonglong)uVar1;
                                if (uVar1 < param_3) {
                                  param_1[uVar3] = 0x50;
                                  ::FString::operator=(param_2 + uVar1,L"P");
                                  uVar1 = uVar2 + 0x10;
                                  uVar3 = (ulonglong)uVar1;
                                  if (uVar1 < param_3) {
                                    param_1[uVar3] = 0x51;
                                    ::FString::operator=(param_2 + uVar1,L"Q");
                                    uVar1 = uVar2 + 0x11;
                                    uVar3 = (ulonglong)uVar1;
                                    if (uVar1 < param_3) {
                                      param_1[uVar3] = 0x52;
                                      ::FString::operator=(param_2 + uVar1,L"R");
                                      uVar1 = uVar2 + 0x12;
                                      uVar3 = (ulonglong)uVar1;
                                      if (uVar1 < param_3) {
                                        param_1[uVar3] = 0x53;
                                        ::FString::operator=(param_2 + uVar1,L"S");
                                        uVar1 = uVar2 + 0x13;
                                        uVar3 = (ulonglong)uVar1;
                                        if (uVar1 < param_3) {
                                          param_1[uVar3] = 0x54;
                                          ::FString::operator=(param_2 + uVar1,L"T");
                                          uVar1 = uVar2 + 0x14;
                                          uVar3 = (ulonglong)uVar1;
                                          if (uVar1 < param_3) {
                                            param_1[uVar3] = 0x55;
                                            ::FString::operator=(param_2 + uVar1,L"U");
                                            uVar1 = uVar2 + 0x15;
                                            uVar3 = (ulonglong)uVar1;
                                            if (uVar1 < param_3) {
                                              param_1[uVar3] = 0x56;
                                              ::FString::operator=(param_2 + uVar1,L"V");
                                              uVar1 = uVar2 + 0x16;
                                              uVar3 = (ulonglong)uVar1;
                                              if (uVar1 < param_3) {
                                                param_1[uVar3] = 0x57;
                                                ::FString::operator=(param_2 + uVar1,L"W");
                                                uVar1 = uVar2 + 0x17;
                                                uVar3 = (ulonglong)uVar1;
                                                if (uVar1 < param_3) {
                                                  param_1[uVar3] = 0x58;
                                                  ::FString::operator=(param_2 + uVar1,L"X");
                                                  uVar1 = uVar2 + 0x18;
                                                  uVar3 = (ulonglong)uVar1;
                                                  if (uVar1 < param_3) {
                                                    param_1[uVar3] = 0x59;
                                                    ::FString::operator=(param_2 + uVar1,L"Y");
                                                    uVar1 = uVar2 + 0x19;
                                                    uVar3 = (ulonglong)uVar1;
                                                    if (uVar1 < param_3) {
                                                      param_1[uVar3] = 0x5a;
                                                      ::FString::operator=(param_2 + uVar1,L"Z");
                                                      uVar3 = (ulonglong)(uVar2 + 0x1a);
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
  uVar2 = (uint)uVar3;
  if (param_5) {
    if (param_3 <= uVar2) {
      return uVar2;
    }
    param_1[uVar3] = 0x61;
    ::FString::operator=(param_2 + uVar3,L"A");
    uVar1 = uVar2 + 1;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x62;
    ::FString::operator=(param_2 + uVar1,L"B");
    uVar1 = uVar2 + 2;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 99;
    ::FString::operator=(param_2 + uVar1,L"C");
    uVar1 = uVar2 + 3;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 100;
    ::FString::operator=(param_2 + uVar1,L"D");
    uVar1 = uVar2 + 4;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x65;
    ::FString::operator=(param_2 + uVar1,L"E");
    uVar1 = uVar2 + 5;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x66;
    ::FString::operator=(param_2 + uVar1,L"F");
    uVar1 = uVar2 + 6;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x67;
    ::FString::operator=(param_2 + uVar1,L"G");
    uVar1 = uVar2 + 7;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x68;
    ::FString::operator=(param_2 + uVar1,L"H");
    uVar1 = uVar2 + 8;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x69;
    ::FString::operator=(param_2 + uVar1,L"I");
    uVar1 = uVar2 + 9;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6a;
    ::FString::operator=(param_2 + uVar1,L"J");
    uVar1 = uVar2 + 10;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6b;
    ::FString::operator=(param_2 + uVar1,L"K");
    uVar1 = uVar2 + 0xb;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6c;
    ::FString::operator=(param_2 + uVar1,L"L");
    uVar1 = uVar2 + 0xc;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6d;
    ::FString::operator=(param_2 + uVar1,L"M");
    uVar1 = uVar2 + 0xd;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6e;
    ::FString::operator=(param_2 + uVar1,L"N");
    uVar1 = uVar2 + 0xe;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x6f;
    ::FString::operator=(param_2 + uVar1,L"O");
    uVar1 = uVar2 + 0xf;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x70;
    ::FString::operator=(param_2 + uVar1,L"P");
    uVar1 = uVar2 + 0x10;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x71;
    ::FString::operator=(param_2 + uVar1,L"Q");
    uVar1 = uVar2 + 0x11;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x72;
    ::FString::operator=(param_2 + uVar1,L"R");
    uVar1 = uVar2 + 0x12;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x73;
    ::FString::operator=(param_2 + uVar1,L"S");
    uVar1 = uVar2 + 0x13;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x74;
    ::FString::operator=(param_2 + uVar1,L"T");
    uVar1 = uVar2 + 0x14;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x75;
    ::FString::operator=(param_2 + uVar1,L"U");
    uVar1 = uVar2 + 0x15;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x76;
    ::FString::operator=(param_2 + uVar1,L"V");
    uVar1 = uVar2 + 0x16;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x77;
    ::FString::operator=(param_2 + uVar1,L"W");
    uVar1 = uVar2 + 0x17;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x78;
    ::FString::operator=(param_2 + uVar1,L"X");
    uVar1 = uVar2 + 0x18;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x79;
    ::FString::operator=(param_2 + uVar1,L"Y");
    uVar1 = uVar2 + 0x19;
    if (param_3 <= uVar1) {
      return uVar1;
    }
    param_1[uVar1] = 0x7a;
    ::FString::operator=(param_2 + uVar1,L"Z");
    uVar3 = (ulonglong)(uVar2 + 0x1a);
  }
  uVar1 = (uint)uVar3;
  uVar2 = uVar1;
  if (uVar1 < param_3) {
    param_1[uVar3] = 0x3b;
    ::FString::operator=(param_2 + uVar3,L"Semicolon");
    uVar2 = uVar1 + 1;
    if (uVar2 < param_3) {
      param_1[uVar2] = 0x3d;
      ::FString::operator=(param_2 + uVar2,L"Equals");
      uVar2 = uVar1 + 2;
      if (uVar2 < param_3) {
        param_1[uVar2] = 0x2c;
        ::FString::operator=(param_2 + uVar2,L"Comma");
        uVar2 = uVar1 + 3;
        if (uVar2 < param_3) {
          param_1[uVar2] = 0x2d;
          ::FString::operator=(param_2 + uVar2,L"Hyphen");
          uVar2 = uVar1 + 4;
          if (uVar2 < param_3) {
            param_1[uVar2] = 0x2e;
            ::FString::operator=(param_2 + uVar2,L"Period");
            uVar2 = uVar1 + 5;
            if (uVar2 < param_3) {
              param_1[uVar2] = 0x2f;
              ::FString::operator=(param_2 + uVar2,L"Slash");
              uVar2 = uVar1 + 6;
              if (uVar2 < param_3) {
                param_1[uVar2] = 0x60;
                ::FString::operator=(param_2 + uVar2,L"Tilde");
                uVar2 = uVar1 + 7;
                if (uVar2 < param_3) {
                  param_1[uVar2] = 0x5b;
                  ::FString::operator=(param_2 + uVar2,L"LeftBracket");
                  uVar2 = uVar1 + 8;
                  if (uVar2 < param_3) {
                    param_1[uVar2] = 0x5c;
                    ::FString::operator=(param_2 + uVar2,L"Backslash");
                    uVar2 = uVar1 + 9;
                    if (uVar2 < param_3) {
                      param_1[uVar2] = 0x5d;
                      ::FString::operator=(param_2 + uVar2,L"RightBracket");
                      uVar2 = uVar1 + 10;
                      if (uVar2 < param_3) {
                        param_1[uVar2] = 0x27;
                        ::FString::operator=(param_2 + uVar2,L"Apostrophe");
                        uVar2 = uVar1 + 0xb;
                        if (uVar2 < param_3) {
                          param_1[uVar2] = 0x20;
                          ::FString::operator=(param_2 + uVar2,L"SpaceBar");
                          uVar2 = uVar1 + 0xc;
                          if (uVar2 < param_3) {
                            param_1[uVar2] = 0x26;
                            ::FString::operator=(param_2 + uVar2,L"Ampersand");
                            uVar2 = uVar1 + 0xd;
                            if (uVar2 < param_3) {
                              param_1[uVar2] = 0x2a;
                              ::FString::operator=(param_2 + uVar2,L"Asterix");
                              uVar2 = uVar1 + 0xe;
                              if (uVar2 < param_3) {
                                param_1[uVar2] = 0x5e;
                                ::FString::operator=(param_2 + uVar2,L"Caret");
                                uVar2 = uVar1 + 0xf;
                                if (uVar2 < param_3) {
                                  param_1[uVar2] = 0x3a;
                                  ::FString::operator=(param_2 + uVar2,L"Colon");
                                  uVar2 = uVar1 + 0x10;
                                  if (uVar2 < param_3) {
                                    param_1[uVar2] = 0x24;
                                    ::FString::operator=(param_2 + uVar2,L"Dollar");
                                    uVar2 = uVar1 + 0x11;
                                    if (uVar2 < param_3) {
                                      param_1[uVar2] = 0x21;
                                      ::FString::operator=(param_2 + uVar2,L"Exclamation");
                                      uVar2 = uVar1 + 0x12;
                                      if (uVar2 < param_3) {
                                        param_1[uVar2] = 0x28;
                                        ::FString::operator=(param_2 + uVar2,L"LeftParantheses");
                                        uVar2 = uVar1 + 0x13;
                                        if (uVar2 < param_3) {
                                          param_1[uVar2] = 0x29;
                                          ::FString::operator=(param_2 + uVar2,L"RightParantheses");
                                          uVar2 = uVar1 + 0x14;
                                          if (uVar2 < param_3) {
                                            param_1[uVar2] = 0x22;
                                            ::FString::operator=(param_2 + uVar2,L"Quote");
                                            uVar2 = uVar1 + 0x15;
                                            if (uVar2 < param_3) {
                                              param_1[uVar2] = 0x5f;
                                              ::FString::operator=(param_2 + uVar2,L"Underscore");
                                              uVar2 = uVar1 + 0x16;
                                              if (uVar2 < param_3) {
                                                param_1[uVar2] = 0xe0;
                                                ::FString::operator=
                                                          (param_2 + uVar2,L"A_AccentGrave");
                                                uVar2 = uVar1 + 0x17;
                                                if (uVar2 < param_3) {
                                                  param_1[uVar2] = 0xe7;
                                                  ::FString::operator=(param_2 + uVar2,L"C_Cedille")
                                                  ;
                                                  uVar2 = uVar1 + 0x18;
                                                  if (uVar2 < param_3) {
                                                    param_1[uVar2] = 0xe9;
                                                    ::FString::operator=
                                                              (param_2 + uVar2,L"E_AccentAigu");
                                                    uVar2 = uVar1 + 0x19;
                                                    if (uVar2 < param_3) {
                                                      param_1[uVar2] = 0xe8;
                                                      ::FString::operator=
                                                                (param_2 + uVar2,L"E_AccentGrave");
                                                      uVar2 = uVar1 + 0x1a;
                                                      if (uVar2 < param_3) {
                                                        param_1[uVar2] = 0xa7;
                                                        ::FString::operator=
                                                                  (param_2 + uVar2,L"Section");
                                                        uVar2 = uVar1 + 0x1b;
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
  return uVar2;
}

