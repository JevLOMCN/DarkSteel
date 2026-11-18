// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 31

// FDateTime @ 1418babc0

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime * __thiscall
FDateTime::FDateTime
          (FDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 - 1;
  if (((uVar3 < 9999) && (param_2 - 1U < 0xc)) && (0 < param_3)) {
    iVar1 = DaysInMonth(param_1,param_2);
    if (((param_3 <= iVar1) && ((uint)param_4 < 0x18)) &&
       (((uint)param_5 < 0x3c && (((uint)param_6 < 0x3c && ((uint)param_7 < 1000))))))
    goto LAB_1418bac7b;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
LAB_1418bac7b:
  iVar1 = 0;
  if (2 < param_2) {
    uVar2 = param_1 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    iVar1 = 0;
    if ((uVar2 == 0) && ((param_1 != (param_1 / 100) * 100 || (param_1 == (param_1 / 400) * 400))))
    {
      iVar1 = 1;
    }
  }
  this->Ticks = (((((longlong)param_4 +
                   (longlong)
                   (int)(((int)(uVar3 + ((int)uVar3 >> 0x1f & 3U)) >> 2) +
                         iVar1 + ((*(int *)(&DAT_1506a3134 + (longlong)param_2 * 4) +
                                   (int)uVar3 / 400 + uVar3 * 0x16d) - (int)uVar3 / 100) +
                        param_3 + -1) * 0x18) * 0x3c + (longlong)param_5) * 0x3c + (longlong)param_6
                 ) * 1000 + (longlong)param_7) * 10000;
  return this;
}

// operator() @ 1418c2fc0

int __thiscall `FDateTime::ParseHttpDate'::__l2::<lambda_2>::operator()(void *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 3) {
    return -1;
  }
  ::FString::FString(&local_18,L"Mon");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 1;
  }
  ::FString::FString(&local_18,L"Tue");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 2;
  }
  ::FString::FString(&local_18,L"Wed");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 3;
  }
  ::FString::FString(&local_18,L"Thu");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 4;
  }
  ::FString::FString(&local_18,L"Fri");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 5;
  }
  ::FString::FString(&local_18,L"Sat");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    return 6;
  }
  ::FString::FString(&local_18,L"Sun");
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar3 = -1;
  if (bVar4) {
    iVar3 = 7;
  }
  return iVar3;
}

// operator() @ 1418c33c0

int __thiscall `FDateTime::ParseHttpDate'::__l2::<lambda_3>::operator()(void *this,FString *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FString local_18;
  
  iVar2 = (param_1->Data).ArrayNum;
  uVar3 = iVar2 - 7;
  if (iVar2 == 0) {
    uVar3 = 0xfffffffa;
  }
  if (3 < uVar3) {
    return -1;
  }
  ::FString::FString(&local_18,L"Monday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 1;
  }
  ::FString::FString(&local_18,L"Tuesday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 2;
  }
  ::FString::FString(&local_18,L"Wednesday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 3;
  }
  ::FString::FString(&local_18,L"Thursday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 4;
  }
  ::FString::FString(&local_18,L"Friday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 5;
  }
  ::FString::FString(&local_18,L"Saturday");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar4) {
    return 6;
  }
  ::FString::FString(&local_18,L"Sunday");
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar2 = -1;
  if (bVar4) {
    iVar2 = 7;
  }
  return iVar2;
}

// operator() @ 1418c39e0

int __thiscall `FDateTime::ParseHttpDate'::__l2::<lambda_4>::operator()(void *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 3) {
    return -1;
  }
  ::FString::FString(&local_18,L"Jan");
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (bVar4) {
    iVar3 = 1;
  }
  else {
    ::FString::FString(&local_18,L"Feb");
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar3 == local_18.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar4 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar4 = iVar3 == 0;
      }
    }
    else {
      bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
    }
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (bVar4) {
      iVar3 = 2;
    }
    else {
      ::FString::FString(&local_18,L"Mar");
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar3 == local_18.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar4 = true;
        }
        else {
          iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
          bVar4 = iVar3 == 0;
        }
      }
      else {
        bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
      }
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      if (bVar4) {
        iVar3 = 3;
      }
      else {
        ::FString::FString(&local_18,L"Apr");
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
        iVar3 = (param_1->Data).ArrayNum;
        if (iVar3 == local_18.Data.ArrayNum) {
          if (iVar3 < 2) {
            bVar4 = true;
          }
          else {
            iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)local_18.Data.AllocatorInstance.Data);
            bVar4 = iVar3 == 0;
          }
        }
        else {
          bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
        }
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
        if (bVar4) {
          iVar3 = 4;
        }
        else {
          ::FString::FString(&local_18,L"May");
          FVar2.Data = local_18.Data.AllocatorInstance.Data;
          iVar3 = (param_1->Data).ArrayNum;
          if (iVar3 == local_18.Data.ArrayNum) {
            if (iVar3 < 2) {
              bVar4 = true;
            }
            else {
              iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                             (wchar_t *)local_18.Data.AllocatorInstance.Data);
              bVar4 = iVar3 == 0;
            }
          }
          else {
            bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
          }
          if (FVar2.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar2.Data);
          }
          if (bVar4) {
            iVar3 = 5;
          }
          else {
            ::FString::FString(&local_18,L"Jun");
            FVar2.Data = local_18.Data.AllocatorInstance.Data;
            iVar3 = (param_1->Data).ArrayNum;
            if (iVar3 == local_18.Data.ArrayNum) {
              if (iVar3 < 2) {
                bVar4 = true;
              }
              else {
                iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                               (wchar_t *)local_18.Data.AllocatorInstance.Data);
                bVar4 = iVar3 == 0;
              }
            }
            else {
              bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
            }
            if (FVar2.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar2.Data);
            }
            if (bVar4) {
              iVar3 = 6;
            }
            else {
              ::FString::FString(&local_18,L"Jul");
              FVar2.Data = local_18.Data.AllocatorInstance.Data;
              iVar3 = (param_1->Data).ArrayNum;
              if (iVar3 == local_18.Data.ArrayNum) {
                if (iVar3 < 2) {
                  bVar4 = true;
                }
                else {
                  iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_18.Data.AllocatorInstance.Data);
                  bVar4 = iVar3 == 0;
                }
              }
              else {
                bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
              }
              if (FVar2.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar2.Data);
              }
              if (bVar4) {
                iVar3 = 7;
              }
              else {
                ::FString::FString(&local_18,L"Aug");
                FVar2.Data = local_18.Data.AllocatorInstance.Data;
                iVar3 = (param_1->Data).ArrayNum;
                if (iVar3 == local_18.Data.ArrayNum) {
                  if (iVar3 < 2) {
                    bVar4 = true;
                  }
                  else {
                    iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                   (wchar_t *)local_18.Data.AllocatorInstance.Data);
                    bVar4 = iVar3 == 0;
                  }
                }
                else {
                  bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
                }
                if (FVar2.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar2.Data);
                }
                if (bVar4) {
                  iVar3 = 8;
                }
                else {
                  ::FString::FString(&local_18,L"Sep");
                  FVar2.Data = local_18.Data.AllocatorInstance.Data;
                  iVar3 = (param_1->Data).ArrayNum;
                  if (iVar3 == local_18.Data.ArrayNum) {
                    if (iVar3 < 2) {
                      bVar4 = true;
                    }
                    else {
                      iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
                      bVar4 = iVar3 == 0;
                    }
                  }
                  else {
                    bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
                  }
                  if (FVar2.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar2.Data);
                  }
                  if (bVar4) {
                    iVar3 = 9;
                  }
                  else {
                    ::FString::FString(&local_18,L"Oct");
                    FVar2.Data = local_18.Data.AllocatorInstance.Data;
                    iVar3 = (param_1->Data).ArrayNum;
                    if (iVar3 == local_18.Data.ArrayNum) {
                      if (iVar3 < 2) {
                        bVar4 = true;
                      }
                      else {
                        iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                       (wchar_t *)local_18.Data.AllocatorInstance.Data);
                        bVar4 = iVar3 == 0;
                      }
                    }
                    else {
                      bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
                    }
                    if (FVar2.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar2.Data);
                    }
                    if (bVar4) {
                      iVar3 = 10;
                    }
                    else {
                      ::FString::FString(&local_18,L"Nov");
                      FVar2.Data = local_18.Data.AllocatorInstance.Data;
                      iVar3 = (param_1->Data).ArrayNum;
                      if (iVar3 == local_18.Data.ArrayNum) {
                        if (iVar3 < 2) {
                          bVar4 = true;
                        }
                        else {
                          iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
                          bVar4 = iVar3 == 0;
                        }
                      }
                      else {
                        bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
                      }
                      if (FVar2.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FVar2.Data);
                      }
                      if (bVar4) {
                        iVar3 = 0xb;
                      }
                      else {
                        ::FString::FString(&local_18,L"Dec");
                        iVar3 = (param_1->Data).ArrayNum;
                        if (iVar3 == local_18.Data.ArrayNum) {
                          if (iVar3 < 2) {
                            bVar4 = true;
                          }
                          else {
                            iVar3 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                                           (wchar_t *)local_18.Data.AllocatorInstance.Data);
                            bVar4 = iVar3 == 0;
                          }
                        }
                        else {
                          bVar4 = iVar3 + local_18.Data.ArrayNum == 1;
                        }
                        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_18.Data.AllocatorInstance.Data);
                        }
                        iVar3 = -1;
                        if (bVar4) {
                          iVar3 = 0xc;
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
  return iVar3;
}

// DaysInMonth @ 1418d4fc0

int __cdecl FDateTime::DaysInMonth(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (0xb < param_2 - 1U) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Month >= 1) && (Month <= 12)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DateTime.cpp"
                       ,0x158,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 == 2) {
    uVar4 = param_1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar4 == 0) && ((param_1 != (param_1 / 100) * 100 || (param_1 == (param_1 / 400) * 400))))
    {
      return 0x1d;
    }
  }
  return DaysPerMonth[param_2];
}

// DaysInYear @ 1418d5080

int __cdecl FDateTime::DaysInYear(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && ((param_1 != (param_1 / 100) * 100 || (param_1 == (param_1 / 400) * 400)))) {
    return 0x16e;
  }
  return 0x16d;
}

// ExportTextItem @ 1418da390

bool __thiscall
FDateTime::ExportTextItem
          (FDateTime *this,FString *param_1,FDateTime *param_2,UObject *param_3,int param_4,
          UObject *param_5)

{
  int iVar1;
  FString local_18;
  
  ToString(this,&local_18,L"%Y.%m.%d-%H.%M.%S");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetDate @ 1418de970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDateTime::GetDate(FDateTime *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  lVar5 = this->Ticks - this->Ticks % 864000000000;
  dVar6 = (double)(lVar5 % 864000000000) * __real_3d745c7fe3bc40b0 + (double)(lVar5 / 864000000000)
          + ___real_413a445200000000;
  iVar4 = ((int)ROUND((dVar6 + dVar6) - __real_3fe0000000000000) >> 1) + 0x10bd9;
  iVar1 = (iVar4 * 4) / 0x23ab1;
  iVar3 = iVar1 * 0x23ab1 + 3;
  iVar4 = iVar4 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar4 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  iVar3 = (iVar4 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x1f;
  iVar4 = (iVar3 * 0x50) / 0x98f;
  *param_1 = (iVar1 + -0x31) * 100 + iVar4 / 0xb + iVar2;
  *param_2 = iVar4 + (iVar4 / 0xb) * -0xc + 2;
  *param_3 = iVar3 - (iVar4 * 0x98f) / 0x50;
  return;
}

// GetDay @ 1418deae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FDateTime::GetDay(FDateTime *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  lVar3 = this->Ticks - this->Ticks % 864000000000;
  dVar4 = (double)(lVar3 % 864000000000) * __real_3d745c7fe3bc40b0 + (double)(lVar3 / 864000000000)
          + ___real_413a445200000000;
  iVar2 = ((int)ROUND((dVar4 + dVar4) - __real_3fe0000000000000) >> 1) + 0x10bd9;
  iVar1 = ((iVar2 * 4) / 0x23ab1) * 0x23ab1 + 3;
  iVar2 = iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = (((iVar2 + 1) * 4000) / 0x164b09) * 0x5b5;
  iVar1 = (iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + 0x1f;
  return iVar1 - (((iVar1 * 0x50) / 0x98f) * 0x98f) / 0x50;
}

// GetDayOfWeek @ 1418debe0

EDayOfWeek __thiscall FDateTime::GetDayOfWeek(FDateTime *this)

{
  longlong lVar1;
  
  lVar1 = this->Ticks / 864000000000;
  return (int)lVar1 + (int)(lVar1 / 7) * -7;
}

// GetDayOfYear @ 1418dec20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FDateTime::GetDayOfYear(FDateTime *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  
  lVar8 = this->Ticks - this->Ticks % 864000000000;
  dVar9 = (double)(lVar8 / 864000000000) + ___real_413a445200000000;
  iVar7 = ((int)ROUND(((double)(lVar8 % 864000000000) * ___real_3d845c7fe3bc40b0 + dVar9 + dVar9) -
                      __real_3fe0000000000000) >> 1) + 0x10bd9;
  iVar1 = (iVar7 * 4) / 0x23ab1;
  iVar3 = iVar1 * 0x23ab1 + 3;
  iVar7 = iVar7 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar7 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  iVar3 = (iVar7 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x1f;
  iVar7 = (iVar3 * 0x50) / 0x98f;
  iVar6 = iVar7 + (iVar7 / 0xb) * -0xc + 2;
  iVar5 = 1;
  iVar3 = iVar3 - (iVar7 * 0x98f) / 0x50;
  if (1 < iVar6) {
    do {
      iVar4 = DaysInMonth((iVar1 + -0x31) * 100 + iVar7 / 0xb + iVar2,iVar5);
      iVar3 = iVar3 + iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return iVar3;
}

// GetHour12 @ 1418df690

int __thiscall FDateTime::GetHour12(FDateTime *this)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = this->Ticks / 36000000000;
  iVar2 = (int)lVar1 + (int)(lVar1 / 0x18) * -0x18;
  if (iVar2 < 1) {
    return 0xc;
  }
  if (0xc < iVar2) {
    iVar2 = iVar2 + -0xc;
  }
  return iVar2;
}

// GetMonth @ 1418dfb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FDateTime::GetMonth(FDateTime *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  lVar3 = this->Ticks - this->Ticks % 864000000000;
  dVar4 = (double)(lVar3 % 864000000000) * __real_3d745c7fe3bc40b0 + (double)(lVar3 / 864000000000)
          + ___real_413a445200000000;
  iVar2 = ((int)ROUND((dVar4 + dVar4) - __real_3fe0000000000000) >> 1) + 0x10bd9;
  iVar1 = ((iVar2 * 4) / 0x23ab1) * 0x23ab1 + 3;
  iVar2 = iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = (((iVar2 + 1) * 4000) / 0x164b09) * 0x5b5;
  iVar1 = (((iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + 0x1f) * 0x50) / 0x98f;
  return iVar1 + (iVar1 / 0xb) * -0xc + 2;
}

// GetYear @ 1418e1e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FDateTime::GetYear(FDateTime *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  
  lVar4 = this->Ticks - this->Ticks % 864000000000;
  dVar6 = (double)(lVar4 % 864000000000) * __real_3d745c7fe3bc40b0 + (double)(lVar4 / 864000000000)
          + ___real_413a445200000000;
  iVar5 = ((int)ROUND((dVar6 + dVar6) - __real_3fe0000000000000) >> 1) + 0x10bd9;
  iVar1 = (iVar5 * 4) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1 + 3;
  iVar5 = iVar5 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar5 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  return (iVar1 + -0x31) * 100 +
         (((iVar5 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x1f) * 0x50) / 0x6925 + iVar2;
}

// ImportTextItem @ 1418e25c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FDateTime::ImportTextItem
          (FDateTime *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t *_Str;
  bool bVar1;
  size_t sVar2;
  FString *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  _Str = *param_1;
  sVar2 = wcslen(_Str);
  if (0x12 < (int)sVar2) {
    this_00 = ::FString::FString(&local_18,_Str);
    iVar3 = (this_00->Data).ArrayNum;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    iVar3 = iVar5;
    if (0x13 < iVar5) {
      iVar3 = 0x13;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    ::FString::RemoveAt(this_00,iVar4,iVar5 - iVar4,No);
    local_28.Data.AllocatorInstance.Data = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (this_00->Data).ArrayNum;
    local_28.Data.ArrayMax = (this_00->Data).ArrayMax;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    bVar1 = Parse(&local_28,this);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      *param_1 = *param_1 + 0x13;
      return true;
    }
  }
  return false;
}

// IsLeapYear @ 1418e3290

bool __cdecl FDateTime::IsLeapYear(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && ((param_1 != (param_1 / 100) * 100 || (param_1 == (param_1 / 400) * 400)))) {
    return true;
  }
  return false;
}

// NetSerialize @ 1418e9250

bool __thiscall
FDateTime::NetSerialize(FDateTime *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    this->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    *param_3 = true;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    *param_3 = true;
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
  *param_3 = true;
  return true;
}

// Now @ 1418e96e0

FDateTime __cdecl FDateTime::Now(void)

{
  FDateTime *in_RCX;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FWindowsPlatformTime::SystemTime
            (&local_10,&local_14,&local_c,&local_18,local_res20,local_res18,local_res10,local_res8);
  FDateTime(in_RCX,local_10,local_14,local_18,local_res20[0],local_res18[0],local_res10[0],
            local_res8[0]);
  return (FDateTime)(long64)in_RCX;
}

// Parse @ 1418e9f90

bool __cdecl FDateTime::Parse(FString *param_1,FDateTime *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDateTime *pFVar12;
  wchar_t *pwVar13;
  wchar_t *_Str;
  FDateTime local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  ::FString::Replace(param_1,&local_48,L"-",L" ",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L":",L" ",CaseSensitive);
  ::FString::ReplaceInline(&local_48,L".",L" ",CaseSensitive);
  uVar10 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_48,&local_58,L" ",true);
  if (local_58.ArrayNum - 6U < 2) {
    _Str = L"";
    if (*(int *)(local_58.AllocatorInstance.Data + 8) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)local_58.AllocatorInstance.Data;
    }
    iVar4 = _wtoi(pwVar13);
    if (local_58.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x18) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x10);
    }
    iVar5 = _wtoi(pwVar13);
    if (local_58.ArrayNum < 3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x28) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x20);
    }
    iVar6 = _wtoi(pwVar13);
    if (local_58.ArrayNum < 4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x38) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x30);
    }
    uVar7 = _wtoi(pwVar13);
    if (local_58.ArrayNum < 5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x48) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x40);
    }
    uVar8 = _wtoi(pwVar13);
    if (local_58.ArrayNum < 6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x58) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x50);
    }
    uVar9 = _wtoi(pwVar13);
    if (6 < local_58.ArrayNum) {
      if (*(int *)(local_58.AllocatorInstance.Data + 0x68) != 0) {
        _Str = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x60);
      }
      uVar10 = _wtoi(_Str);
    }
    if (((iVar4 - 1U < 9999) && (iVar5 - 1U < 0xc)) && (0 < iVar6)) {
      iVar11 = DaysInMonth(iVar4,iVar5);
      if (((iVar6 <= iVar11) && (uVar7 < 0x18)) &&
         ((uVar8 < 0x3c && ((uVar9 < 0x3c && (uVar10 < 1000)))))) {
        pFVar12 = FDateTime(&local_res20,iVar4,iVar5,iVar6,uVar7,uVar8,uVar9,uVar10);
        bVar2 = true;
        param_2->Ticks = pFVar12->Ticks;
        goto LAB_1418ea2b3;
      }
    }
  }
  bVar2 = false;
LAB_1418ea2b3:
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ParseHttpDate @ 1418ec9e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDateTime::ParseHttpDate(FString *param_1,FDateTime *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FDateTime *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FString local_60 [2];
  
  if ((param_1->Data).ArrayNum < 2) {
    return false;
  }
  uVar18 = 0;
  uVar14 = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_res10 = param_2;
  iVar5 = ::FString::ParseIntoArray(param_1,&local_c0,L" ",true);
  if (iVar5 < 1) goto LAB_1418eca59;
  if (local_c0.ArrayNum != iVar5) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6821849401237963388>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DateTime.cpp"
                       ,0x27c,"Tokens.Num() == NumTokens");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    goto LAB_1418eca59;
  }
  uVar9 = 0;
  local_ac = 0;
  uVar7 = 0;
  local_b0 = 0;
  uVar6 = 0;
  uVar8 = 0;
  if ((local_c0.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  bVar3 = ::FString::EndsWith((FString *)local_c0.AllocatorInstance.Data,L",",1,IgnoreCase);
  if (bVar3) {
    if (local_c0.ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar13.Data = local_c0.AllocatorInstance.Data;
    if ((local_c0.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = *(int *)(local_c0.AllocatorInstance.Data + 8) + -2;
    if (*(int *)(local_c0.AllocatorInstance.Data + 8) == 0) {
      iVar5 = -1;
    }
    ::FString::RemoveAt((FString *)FVar13.Data,iVar5,1,Default);
  }
  uVar15 = local_c0.ArrayNum - 1;
  uVar10 = uVar9;
  if ((int)uVar15 < local_c0.ArrayNum) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar16 = local_c0.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  ::FString::FString(local_60,L"GMT");
  iVar5 = *(int *)(pFVar16 + 8);
  if (iVar5 == local_60[0].Data.ArrayNum) {
    if (iVar5 < 2) {
      bVar3 = true;
    }
    else {
      iVar5 = wcscmp(*(wchar_t **)pFVar16,(wchar_t *)local_60[0].Data.AllocatorInstance.Data);
      bVar3 = iVar5 == 0;
    }
  }
  else {
    bVar3 = iVar5 + local_60[0].Data.ArrayNum == 1;
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    if ((local_c0.ArrayNum == 5) &&
       (iVar5 = `FDateTime::ParseHttpDate'::__l2::<lambda_2>::operator()
                          (local_res8,(FString *)local_c0.AllocatorInstance.Data), 0 < iVar5)) {
      if (local_c0.ArrayNum < 3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar13.Data = local_c0.AllocatorInstance.Data;
      if ((local_c0.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar2.Data = local_c0.AllocatorInstance.Data;
      iVar5 = *(int *)(FVar13.Data + 0x28);
      uVar18 = iVar5 - 2;
      if (iVar5 == 0) {
        uVar18 = 0xffffffff;
      }
      if (1 < uVar18) {
        `FDateTime::ParseHttpDate'::__l2::<lambda_4>::operator()
                  (local_res18,(FString *)(local_c0.AllocatorInstance.Data + 0x10));
        goto LAB_1418eca59;
      }
      pwVar17 = L"";
      if (iVar5 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(FVar13.Data + 0x20);
      }
      uVar6 = _wtoi(pwVar12);
      uVar7 = `FDateTime::ParseHttpDate'::__l2::<lambda_4>::operator()
                        (local_res18,(FString *)(FVar2.Data + 0x10));
      if ((0x1e < uVar6 - 1) || (0xb < uVar7 - 1)) goto LAB_1418eca59;
      if ((local_c0.ArrayNum < 4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      iVar5 = ::FString::ParseIntoArray
                        ((FString *)(local_c0.AllocatorInstance.Data + 0x30),&local_80,L":",true);
      if (iVar5 != 3) {
        DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
        goto LAB_1418eca59;
      }
      if ((local_80.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(local_80.AllocatorInstance.Data + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)local_80.AllocatorInstance.Data;
      }
      uVar18 = _wtoi(pwVar12);
      local_ac = uVar18;
      if ((local_80.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(local_80.AllocatorInstance.Data + 0x18) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(local_80.AllocatorInstance.Data + 0x10);
      }
      uVar8 = _wtoi(pwVar12);
      local_b0 = uVar8;
      if ((local_80.ArrayNum < 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(local_80.AllocatorInstance.Data + 0x28) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(local_80.AllocatorInstance.Data + 0x20);
      }
      uVar9 = _wtoi(pwVar12);
      if (((uVar18 < 0x18) && (uVar8 < 0x3c)) && (uVar9 < 0x3c)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      uVar8 = 0;
      if (bVar3) {
        if ((local_c0.ArrayNum < 5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar18 = *(int *)(local_c0.AllocatorInstance.Data + 0x48) - 1;
        if (*(int *)(local_c0.AllocatorInstance.Data + 0x48) == 0) {
          uVar18 = 0;
        }
        uVar8 = 0;
        if (uVar18 == 4) {
          if ((local_c0.ArrayNum < 5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          if (*(int *)(local_c0.AllocatorInstance.Data + 0x48) != 0) {
            pwVar17 = *(wchar_t **)(local_c0.AllocatorInstance.Data + 0x40);
          }
          uVar8 = _wtoi(pwVar17);
        }
      }
    }
    goto LAB_1418ecf4e;
  }
  if (local_c0.ArrayNum == 6) {
    iVar5 = `FDateTime::ParseHttpDate'::__l2::<lambda_2>::operator()
                      (local_res8,(FString *)local_c0.AllocatorInstance.Data);
    uVar8 = uVar14;
    uVar7 = uVar14;
    uVar6 = uVar14;
    if (0 < iVar5) {
      if (local_c0.ArrayNum < 4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar13.Data = local_c0.AllocatorInstance.Data;
      iVar5 = local_c0.ArrayNum;
      if (local_c0.ArrayNum < 3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar5 = local_c0.ArrayNum;
      }
      FVar2.Data = local_c0.AllocatorInstance.Data;
      if ((iVar5 < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pwVar17 = L"";
      if (*(int *)(local_c0.AllocatorInstance.Data + 0x18) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(local_c0.AllocatorInstance.Data + 0x10);
      }
      uVar6 = _wtoi(pwVar12);
      uVar7 = `FDateTime::ParseHttpDate'::__l2::<lambda_4>::operator()
                        (local_res20,(FString *)(FVar2.Data + 0x20));
      iVar5 = *(int *)(FVar13.Data + 0x38);
      uVar18 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar18 = uVar9;
      }
      if (uVar18 == 4) {
        if (iVar5 == 0) {
          uVar8 = _wtoi(L"");
        }
        else {
          uVar8 = _wtoi(*(wchar_t **)(FVar13.Data + 0x30));
        }
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (((uVar6 - 1 < 0x1f) && (uVar7 - 1 < 0xc)) && (uVar8 - 1 < 9999)) {
        if ((local_c0.ArrayNum < 5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        iVar5 = ::FString::ParseIntoArray
                          ((FString *)(local_c0.AllocatorInstance.Data + 0x40),&local_a0,L":",true);
        if (iVar5 != 3) {
          DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
          FVar13.Data = local_a0.AllocatorInstance.Data;
          goto LAB_1418ecf41;
        }
        if ((local_a0.ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_a0.AllocatorInstance.Data + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)local_a0.AllocatorInstance.Data;
        }
        local_ac = _wtoi(pwVar12);
        if ((local_a0.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_a0.AllocatorInstance.Data + 0x18) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)(local_a0.AllocatorInstance.Data + 0x10);
        }
        local_b0 = _wtoi(pwVar12);
        if ((local_a0.ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_a0.AllocatorInstance.Data + 0x28) != 0) {
          pwVar17 = *(wchar_t **)(local_a0.AllocatorInstance.Data + 0x20);
        }
        uVar9 = _wtoi(pwVar17);
        DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    if ((local_c0.ArrayNum != 4) ||
       (iVar5 = `FDateTime::ParseHttpDate'::__l2::<lambda_3>::operator()
                          (&local_a8,(FString *)local_c0.AllocatorInstance.Data), iVar5 < 1))
    goto LAB_1418ecf4e;
    if ((local_c0.ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    iVar5 = ::FString::ParseIntoArray
                      ((FString *)(local_c0.AllocatorInstance.Data + 0x10),&local_70,L"-",true);
    pwVar17 = L"";
    uVar8 = uVar18;
    uVar7 = uVar18;
    uVar6 = uVar18;
    if (iVar5 == 3) {
      if ((local_70.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(local_70.AllocatorInstance.Data + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)local_70.AllocatorInstance.Data;
      }
      uVar6 = _wtoi(pwVar12);
      if ((local_70.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar7 = `FDateTime::ParseHttpDate'::__l2::<lambda_4>::operator()
                        (local_a7,(FString *)(local_70.AllocatorInstance.Data + 0x10));
      if ((local_70.ArrayNum < 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(local_70.AllocatorInstance.Data + 0x28) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(local_70.AllocatorInstance.Data + 0x20);
      }
      iVar5 = _wtoi(pwVar12);
      uVar8 = iVar5 + 0x76c;
      if (((0x1e < uVar6 - 1) || (0xb < uVar7 - 1)) || (0x270e < iVar5 + 0x76bU))
      goto LAB_1418ed192;
      bVar3 = true;
    }
    else {
LAB_1418ed192:
      bVar3 = false;
    }
    DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (bVar3) {
      if ((local_c0.ArrayNum < 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      iVar5 = ::FString::ParseIntoArray
                        ((FString *)(local_c0.AllocatorInstance.Data + 0x20),&local_90,L":",true);
      if (iVar5 == 3) {
        if ((local_90.ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_90.AllocatorInstance.Data + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)local_90.AllocatorInstance.Data;
        }
        local_ac = _wtoi(pwVar12);
        if ((local_90.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_90.AllocatorInstance.Data + 0x18) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)(local_90.AllocatorInstance.Data + 0x10);
        }
        local_b0 = _wtoi(pwVar12);
        if ((local_90.ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(int *)(local_90.AllocatorInstance.Data + 0x28) != 0) {
          pwVar17 = *(wchar_t **)(local_90.AllocatorInstance.Data + 0x20);
        }
        uVar9 = _wtoi(pwVar17);
        DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
      }
      else {
        DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
        FVar13.Data = local_90.AllocatorInstance.Data;
LAB_1418ecf41:
        if (FVar13.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar13.Data);
        }
      }
    }
  }
LAB_1418ecf4e:
  uVar18 = uVar8 - 1;
  if (((0x270e < uVar18) || (0xb < uVar7 - 1)) || ((int)uVar6 < 1)) goto LAB_1418eca59;
  iVar5 = 0x1d;
  if (uVar7 == 2) {
    uVar10 = uVar8 & 0x80000003;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar10 != 0) ||
       ((uVar8 == ((int)uVar8 / 100) * 100 && (uVar8 != ((int)uVar8 / 400) * 400))))
    goto LAB_1418ed6f0;
    iVar11 = 0x1d;
  }
  else {
LAB_1418ed6f0:
    iVar11 = DaysPerMonth[(int)uVar7];
  }
  if (((iVar11 < (int)uVar6) || (0x17 < local_ac)) || ((0x3b < local_b0 || (0x3b < uVar9)))) {
LAB_1418eca59:
    DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    return false;
  }
  if (uVar7 == 2) {
    uVar10 = uVar8 & 0x80000003;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar10 == 0) &&
       ((uVar8 != ((int)uVar8 / 100) * 100 || (uVar8 == ((int)uVar8 / 400) * 400))))
    goto LAB_1418ed787;
  }
  iVar5 = DaysPerMonth[(int)uVar7];
LAB_1418ed787:
  if (iVar5 < (int)uVar6) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  if (2 < (int)uVar7) {
    uVar10 = uVar8 & 0x80000003;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar10 == 0) &&
       ((uVar8 != ((int)uVar8 / 100) * 100 || (uVar8 == ((int)uVar8 / 400) * 400)))) {
      uVar14 = 1;
    }
  }
  local_res10->Ticks =
       ((((longlong)(int)local_ac +
         (longlong)
         (int)(((int)(uVar18 + ((int)uVar18 >> 0x1f & 3U)) >> 2) +
               ((*(int *)(&DAT_1506a3134 + (longlong)(int)uVar7 * 4) + (int)uVar18 / 400 +
                uVar18 * 0x16d) - (int)uVar18 / 100) + -1 + uVar14 + uVar6) * 0x18) * 0x3c +
        (longlong)(int)local_b0) * 0x3c + (longlong)(int)uVar9) * 10000000;
  DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return true;
}

// ParseIso8601 @ 1418edab0

bool __cdecl FDateTime::ParseIso8601(wchar_t *param_1,FDateTime *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ulong uVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar17 [16];
  FDateTime local_res8;
  FDateTime *local_res10;
  ulong local_res18;
  ulong local_res20;
  wchar_t *local_58 [3];
  
  uVar6 = 0;
  local_58[0] = (wchar_t *)0x0;
  uVar14 = 0;
  local_res10 = param_2;
  local_res8.Ticks._0_4_ = wcstoul(param_1,local_58,10);
  if (local_58[0] <= param_1) {
    return false;
  }
  if (*local_58[0] == L'\0') {
    return false;
  }
  pwVar1 = local_58[0] + 1;
  local_res20 = wcstoul(pwVar1,local_58,10);
  if (local_58[0] <= pwVar1) {
    return false;
  }
  if (*local_58[0] == L'\0') {
    return false;
  }
  pwVar1 = local_58[0] + 1;
  local_res18 = wcstoul(pwVar1,local_58,10);
  if (local_58[0] <= pwVar1) {
    return false;
  }
  if (*local_58[0] == L'T') {
    pwVar1 = local_58[0] + 1;
    uVar6 = wcstoul(pwVar1,local_58,10);
    if (local_58[0] <= pwVar1) {
      return false;
    }
    if (*local_58[0] == L'\0') {
      return false;
    }
    pwVar1 = local_58[0] + 1;
    uVar7 = wcstoul(pwVar1,local_58,10);
    if (local_58[0] <= pwVar1) {
      return false;
    }
    if (*local_58[0] == L'\0') {
      return false;
    }
    pwVar1 = local_58[0] + 1;
    uVar8 = wcstoul(pwVar1,local_58,10);
    pwVar5 = local_58[0];
    if (local_58[0] <= pwVar1) {
      return false;
    }
    uVar13 = 0;
    if (*local_58[0] == L'.') {
      pwVar1 = local_58[0] + 1;
      lVar10 = _wcstoi64(pwVar1,local_58,10);
      if (local_58[0] <= pwVar1) {
        return false;
      }
      if (pwVar5 + 0x13 < local_58[0]) {
        return false;
      }
      iVar15 = (int)((longlong)local_58[0] - (longlong)pwVar1 >> 1);
      if (iVar15 < 3) {
        uVar11 = (ulonglong)(3 - iVar15);
        do {
          lVar10 = lVar10 * 10;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      else if (3 < iVar15) {
        lVar12 = 1;
        uVar11 = (ulonglong)(iVar15 - 3);
        do {
          lVar12 = lVar12 * 10;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        lVar10 = ((lVar12 >> 1) + lVar10) / lVar12;
      }
      uVar13 = 999;
      if ((int)(ulong)lVar10 < 999) {
        uVar13 = (ulong)lVar10;
      }
    }
    pwVar1 = local_58[0];
    wVar2 = *local_58[0];
    if ((wVar2 == L'+') || (wVar2 == L'-')) {
      uVar9 = wcstoul(local_58[0],local_58,10);
      lVar10 = (longlong)local_58[0] - (longlong)pwVar1 >> 1;
      if (lVar10 == 3) {
        uVar14 = uVar9;
        uVar9 = 0;
        if (*local_58[0] != L'\0') {
          if (*local_58[0] != L':') {
            return false;
          }
          uVar9 = wcstoul(local_58[0] + 1,local_58,10);
        }
      }
      else {
        if (lVar10 != 5) {
          return false;
        }
        uVar14 = (int)uVar9 / 100;
        uVar9 = (int)uVar9 % 100;
      }
      goto LAB_1418edd53;
    }
    uVar9 = uVar14;
    if (wVar2 == L'\0') goto LAB_1418edd53;
    bVar16 = wVar2 == L'Z';
  }
  else {
    bVar16 = *local_58[0] == L'\0';
    uVar13 = uVar6;
    uVar8 = uVar6;
    uVar7 = uVar6;
  }
  uVar9 = 0;
  if (!bVar16) {
    return false;
  }
LAB_1418edd53:
  uVar4 = local_res20;
  uVar3 = local_res18;
  bVar16 = Validate((ulong)local_res8.Ticks,local_res20,local_res18,uVar6,uVar7,uVar8,uVar13);
  if (!bVar16) {
    return false;
  }
  FDateTime(&local_res8,(ulong)local_res8.Ticks,uVar4,uVar3,uVar6,uVar7,uVar8,uVar13);
  uVar6 = -uVar9;
  if (-1 < (int)uVar14) {
    uVar6 = uVar9;
  }
  auVar17._0_8_ =
       (double)(int)(uVar14 * 0x3c + uVar6) * __real_41c1e1a300000000 + __real_3fe0000000000000;
  auVar17._8_8_ = 0;
  auVar17 = roundpd(extraout_XMM0,auVar17,1);
  local_res10->Ticks =
       CONCAT44(local_res8.Ticks._4_4_,(ulong)local_res8.Ticks) - (longlong)auVar17._0_8_;
  return true;
}

// Serialize @ 1418f4ab0

bool __thiscall FDateTime::Serialize(FDateTime *this,FArchive *param_1)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    this->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
  return true;
}

// ToFormattedString @ 1418fb090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDateTime::ToFormattedString(FDateTime *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  size_t sVar5;
  void *pvVar6;
  ulong64 uVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  undefined1 auStack_d8 [32];
  FString local_b8;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.CurPos = local_88;
  local_a8.End = (wchar_t *)local_48;
  local_a8.Base = local_88;
  local_a8.bIsDynamic = false;
  local_a8.bIsExternal = false;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)__return_storage_ptr__;
  if (param_1 != (wchar_t *)0x0) {
    wVar8 = *param_1;
    while (wVar8 != L'\0') {
      if (wVar8 != L'%') {
switchD_1418fb19f_caseD_43:
        if (local_a8.End < local_a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
        }
        *local_a8.CurPos = wVar8;
        local_a8.CurPos = local_a8.CurPos + 1;
        goto LAB_1418fb226;
      }
      wVar8 = param_1[1];
      param_1 = param_1 + 1;
      if (wVar8 == L'\0') goto switchD_1418fb19f_caseD_43;
      switch(wVar8) {
      case L'A':
        lVar4 = this->Ticks / 864000000000;
        pwVar9 = LongDayNames[(int)lVar4 + (int)(lVar4 / 7) * -7];
        goto LAB_1418fb1d2;
      case L'B':
        iVar2 = GetMonth(this);
        pwVar9 = ShortMonthNames[(longlong)iVar2 + 0xb];
        goto LAB_1418fb1d2;
      default:
        goto switchD_1418fb19f_caseD_43;
      case L'H':
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%02i");
        break;
      case L'I':
        lVar4 = this->Ticks / 36000000000;
        if ((int)lVar4 + (int)(lVar4 / 0x18) * -0x18 < 1) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%02i");
        }
        else {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%02i");
        }
        break;
      case L'M':
        goto LAB_1418fb575;
      case L'P':
        pwVar9 = L"pm";
        lVar4 = this->Ticks / 36000000000;
        if ((int)lVar4 + (int)(lVar4 / 0x18) * -0x18 < 0xc) {
          pwVar9 = L"am";
        }
        sVar5 = wcslen(pwVar9);
        uVar7 = (ulong64)(int)sVar5;
        if (local_a8.End < local_a8.CurPos + uVar7) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar7);
        }
        if ((int)sVar5 != 0) {
          pvVar6 = FGenericPlatformString::Memcpy(local_a8.CurPos,pwVar9,uVar7 * 2);
          local_a8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
        }
        break;
      case L'S':
LAB_1418fb575:
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%02i");
        break;
      case L'Y':
        GetYear(this);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%04i");
        break;
      case L'a':
        lVar4 = this->Ticks / 864000000000;
        pwVar9 = ShortDayNames[(int)lVar4 + (int)(lVar4 / 7) * -7];
        goto LAB_1418fb1d2;
      case L'b':
        iVar2 = GetMonth(this);
        pwVar9 = LongDayNames[(longlong)iVar2 + 6];
LAB_1418fb1d2:
        iVar2 = 0;
        if (pwVar9 != (wchar_t *)0x0) {
          sVar5 = wcslen(pwVar9);
          iVar2 = (int)sVar5;
        }
        uVar7 = (ulong64)iVar2;
        if (local_a8.End < local_a8.CurPos + uVar7) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar7);
        }
        if (iVar2 != 0) {
          pvVar6 = FGenericPlatformString::Memcpy(local_a8.CurPos,pwVar9,uVar7 * 2);
          local_a8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
        }
        break;
      case L'd':
        GetDay(this);
        goto LAB_1418fb3de;
      case L'e':
        GetDay(this);
        goto LAB_1418fb3a6;
      case L'j':
        GetDayOfYear(this);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%03i");
        break;
      case L'l':
        goto LAB_1418fb3a6;
      case L'm':
        GetMonth(this);
        goto LAB_1418fb3de;
      case L'p':
        pwVar9 = L"PM";
        lVar4 = this->Ticks / 36000000000;
        if ((int)lVar4 + (int)(lVar4 / 0x18) * -0x18 < 0xc) {
          pwVar9 = L"AM";
        }
        sVar5 = wcslen(pwVar9);
        uVar7 = (ulong64)(int)sVar5;
        if (local_a8.End < local_a8.CurPos + uVar7) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar7);
        }
        if ((int)sVar5 != 0) {
          pvVar6 = FGenericPlatformString::Memcpy(local_a8.CurPos,pwVar9,uVar7 * 2);
          local_a8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
        }
        break;
      case L'w':
LAB_1418fb3a6:
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%i");
        break;
      case L'y':
        GetYear(this);
LAB_1418fb3de:
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_a8,L"%02i");
      }
LAB_1418fb226:
      pwVar9 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar8 = *pwVar9;
    }
  }
  FVar1.Data = local_b8.Data.AllocatorInstance.Data;
  *(undefined8 *)local_b8.Data.AllocatorInstance.Data = 0;
  *(undefined8 *)(local_b8.Data.AllocatorInstance.Data + 8) = 0;
  pFVar3 = (FScriptContainerElement *)
           ::FString::ConstructFromPtrSize
                     (&local_b8,local_a8.Base,
                      (int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1));
  if (FVar1.Data != pFVar3) {
    if (*(void **)FVar1.Data != (void *)0x0) {
      FMemory::Free(*(void **)FVar1.Data);
    }
    *(undefined8 *)FVar1.Data = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(int *)(FVar1.Data + 8) = *(int *)(pFVar3 + 8);
    *(int *)(FVar1.Data + 0xc) = *(int *)(pFVar3 + 0xc);
    *(undefined8 *)(pFVar3 + 8) = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
  return (FString *)FVar1.Data;
}

// ToHttpDate @ 1418fb7b0

FString * __thiscall FDateTime::ToHttpDate(FDateTime *this,FString *__return_storage_ptr__)

{
  FString local_28;
  
  ::FString::PrintfImpl(&local_28,L"%02i:%02i:%02i");
  GetYear(this);
  GetMonth(this);
  GetDay(this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, %02d %s %d %s GMT");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToIso8601 @ 1418fb980

FString * __thiscall FDateTime::ToIso8601(FDateTime *this,FString *__return_storage_ptr__)

{
  ToString(this,__return_storage_ptr__,L"%Y-%m-%dT%H:%M:%S.%sZ");
  return __return_storage_ptr__;
}

// ToString @ 1418fbaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDateTime::ToString(FDateTime *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_d8 [32];
  FString local_b8;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [48];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.bIsDynamic = false;
  local_a8.bIsExternal = false;
  local_a8.Base = local_88;
  local_a8.CurPos = local_88;
  local_a8.End = (wchar_t *)local_28;
  ToString(this,param_1,&local_a8);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_b8,local_a8.Base,
                      (int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
  return __return_storage_ptr__;
}

// ToString @ 1418fbbe0

FString * __thiscall FDateTime::ToString(FDateTime *this,FString *__return_storage_ptr__)

{
  ToString(this,__return_storage_ptr__,L"%Y.%m.%d-%H.%M.%S");
  return __return_storage_ptr__;
}

// ToString @ 1418fbc10

void __thiscall
FDateTime::ToString(FDateTime *this,wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int local_res10 [4];
  int local_res20 [2];
  int local_48 [4];
  
  if (param_1 != (wchar_t *)0x0) {
    wVar6 = *param_1;
    local_res10[0] = 0;
    local_res20[0] = 0;
    local_48[0] = 0;
    while (wVar6 != L'\0') {
      if (wVar6 != L'%') {
switchD_1418fbcd6_caseD_42:
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = wVar6;
        param_2->CurPos = param_2->CurPos + 1;
        goto LAB_1418fc2c3;
      }
      wVar6 = param_1[1];
      param_1 = param_1 + 1;
      if (wVar6 == L'\0') goto switchD_1418fbcd6_caseD_42;
      switch(wVar6) {
      case L'A':
        pwVar7 = L"PM";
        lVar3 = this->Ticks / 36000000000;
        lVar4 = lVar3 / 6 + (lVar3 >> 0x3f);
        pwVar1 = L"AM";
        goto LAB_1418fbcf8;
      default:
        goto switchD_1418fbcd6_caseD_42;
      case L'D':
        iVar5 = GetDayOfYear(this);
        bVar11 = param_2->CurPos + 3 < param_2->End;
        bVar12 = param_2->CurPos + 3 == param_2->End;
        goto LAB_1418fbd6c;
      case L'H':
        lVar3 = this->Ticks / 36000000000;
        iVar5 = (int)lVar3 + (int)(lVar3 / 0x18) * -0x18;
        goto LAB_1418fc157;
      case L'M':
        lVar3 = this->Ticks / 600000000 + (this->Ticks >> 0x3f);
        goto LAB_1418fc20d;
      case L'S':
        lVar3 = this->Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(this->Ticks),8) >> 0x17;
LAB_1418fc20d:
        lVar3 = lVar3 - (lVar3 >> 0x3f);
        lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
        iVar5 = (int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c;
        goto LAB_1418fc157;
      case L'Y':
        if (local_res10[0] == 0) {
          GetDate(this,local_res10,local_res20,local_48);
        }
        iVar5 = local_res10[0];
        if (param_2->End < param_2->CurPos + 4) {
          TStringBuilderBase<wchar_t>::Extend(param_2,4);
        }
        pwVar1 = param_2->CurPos;
        pwVar7 = param_2->Base;
        param_2->CurPos = pwVar1 + 4;
        iVar10 = (int)((longlong)pwVar1 - (longlong)pwVar7 >> 1);
        iVar9 = iVar5 / 10;
        sVar8 = (short)iVar9;
        pwVar7[iVar10 + 3] = (short)iVar5 + sVar8 * -10 + L'0';
        iVar9 = iVar9 / 10;
        pwVar7[iVar10 + 2] = sVar8 + (short)iVar9 * -10 + L'0';
        goto LAB_1418fbdcc;
      case L'a':
        pwVar7 = L"pm";
        lVar3 = this->Ticks / 36000000000;
        lVar4 = lVar3 / 6 + (lVar3 >> 0x3f);
        pwVar1 = L"am";
LAB_1418fbcf8:
        if ((int)lVar3 + ((int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f)) * -0x18 < 0xc) {
          pwVar7 = pwVar1;
        }
        sVar2 = wcslen(pwVar7);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar7,(int)sVar2);
        goto LAB_1418fc2c3;
      case L'd':
        if (local_48[0] == 0) {
          GetDate(this,local_res10,local_res20,local_48);
        }
        iVar5 = local_48[0];
        if (param_2->End < param_2->CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(param_2,2);
        }
        pwVar7 = param_2->CurPos;
        pwVar1 = param_2->Base;
        param_2->CurPos = pwVar7 + 2;
        iVar9 = iVar5 / 10;
        iVar10 = (int)((longlong)pwVar7 - (longlong)pwVar1 >> 1);
        pwVar1[iVar10 + 1] = (short)iVar5 + (short)iVar9 * -10 + L'0';
        break;
      case L'h':
        lVar3 = this->Ticks / 36000000000;
        iVar5 = (int)lVar3 + (int)(lVar3 / 0x18) * -0x18;
        if (iVar5 < 1) {
          iVar5 = 0xc;
        }
        else if (0xc < iVar5) {
          iVar5 = iVar5 + -0xc;
        }
LAB_1418fc157:
        if (param_2->End < param_2->CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(param_2,2);
        }
        pwVar7 = param_2->CurPos;
        pwVar1 = param_2->Base;
        param_2->CurPos = pwVar7 + 2;
        iVar10 = (int)((longlong)pwVar7 - (longlong)pwVar1 >> 1);
        iVar9 = iVar5 / 10;
        pwVar1[iVar10 + 1] = (short)iVar5 + (short)iVar9 * -10 + L'0';
        break;
      case L'm':
        if (local_res20[0] == 0) {
          GetDate(this,local_res10,local_res20,local_48);
        }
        iVar5 = local_res20[0];
        if (param_2->End < param_2->CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(param_2,2);
        }
        pwVar7 = param_2->CurPos;
        pwVar1 = param_2->Base;
        param_2->CurPos = pwVar7 + 2;
        iVar10 = (int)((longlong)pwVar7 - (longlong)pwVar1 >> 1);
        iVar9 = iVar5 / 10;
        pwVar1[iVar10 + 1] = (short)iVar5 + (short)iVar9 * -10 + L'0';
        break;
      case L's':
        lVar3 = this->Ticks / 10000;
        iVar5 = (int)lVar3 + (int)(lVar3 / 1000) * -1000;
        bVar11 = param_2->CurPos + 3 < param_2->End;
        bVar12 = param_2->CurPos + 3 == param_2->End;
LAB_1418fbd6c:
        if (!bVar11 && !bVar12) {
          TStringBuilderBase<wchar_t>::Extend(param_2,3);
        }
        pwVar1 = param_2->CurPos;
        pwVar7 = param_2->Base;
        param_2->CurPos = pwVar1 + 3;
        iVar9 = iVar5 / 10;
        iVar10 = (int)((longlong)pwVar1 - (longlong)pwVar7 >> 1);
        pwVar7[iVar10 + 2] = (short)iVar5 + (short)iVar9 * -10 + L'0';
LAB_1418fbdcc:
        iVar5 = iVar9 / 10;
        pwVar7[iVar10 + 1] = (short)iVar9 + (short)iVar5 * -10 + L'0';
        pwVar7[iVar10] =
             (short)iVar5 +
             (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
             (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) * -10 + L'0';
        goto LAB_1418fc2c3;
      case L'y':
        if (local_res10[0] == 0) {
          GetDate(this,local_res10,local_res20,local_48);
        }
        iVar5 = local_res10[0] % 100;
        if (param_2->End < param_2->CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(param_2,2);
        }
        pwVar7 = param_2->CurPos;
        pwVar1 = param_2->Base;
        param_2->CurPos = pwVar7 + 2;
        iVar10 = (int)((longlong)pwVar7 - (longlong)pwVar1 >> 1);
        iVar9 = iVar5 / 10;
        pwVar1[iVar10 + 1] = (short)iVar5 + (short)iVar9 * -10 + L'0';
      }
      pwVar1[iVar10] =
           (short)iVar9 +
           (((short)(iVar9 / 10) + (short)(iVar9 >> 0x1f)) -
           (short)((longlong)iVar9 * 0x66666667 >> 0x3f)) * -10 + L'0';
LAB_1418fc2c3:
      pwVar7 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar6 = *pwVar7;
    }
  }
  return;
}

// UtcNow @ 1418fec90

FDateTime __cdecl FDateTime::UtcNow(void)

{
  FDateTime *in_RCX;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FWindowsPlatformTime::UtcTime
            (&local_10,&local_14,&local_c,&local_18,local_res20,local_res18,local_res10,local_res8);
  FDateTime(in_RCX,local_10,local_14,local_18,local_res20[0],local_res18[0],local_res10[0],
            local_res8[0]);
  return (FDateTime)(long64)in_RCX;
}

// Validate @ 1418fedf0

bool __cdecl
FDateTime::Validate(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7)

{
  int iVar1;
  
  if (((param_1 - 1U < 9999) && (param_2 - 1U < 0xc)) && (0 < param_3)) {
    iVar1 = DaysInMonth(param_1,param_2);
    if (((param_3 <= iVar1) && ((uint)param_4 < 0x18)) &&
       (((uint)param_5 < 0x3c && (((uint)param_6 < 0x3c && ((uint)param_7 < 1000)))))) {
      return true;
    }
  }
  return false;
}

// ToUnixTimestamp @ 1419730d0

long64 __thiscall FDateTime::ToUnixTimestamp(FDateTime *this)

{
  FDateTime *pFVar1;
  longlong lVar2;
  FDateTime local_res8 [4];
  
  pFVar1 = FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
  lVar2 = this->Ticks - pFVar1->Ticks;
  lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8) + lVar2;
  return (lVar2 >> 0x17) - (lVar2 >> 0x3f);
}

