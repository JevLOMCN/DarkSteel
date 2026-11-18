// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 12

// FWindowsConsoleOutputDevice @ 1423c3ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsConsoleOutputDevice * __thiscall
FWindowsConsoleOutputDevice::FWindowsConsoleOutputDevice(FWindowsConsoleOutputDevice *this)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar3;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  FWindowsConsoleOutputDevice *pFVar11;
  FName FVar12;
  FName *pFVar13;
  ulonglong uVar14;
  ForElementType<wchar_t> _Dst;
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar15;
  FName *pFVar16;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar17;
  ForAnyElementType FVar18;
  ForElementType<wchar_t> FVar19;
  FScriptContainerElement *pFVar20;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res8[0] = 0;
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->AllowedLogVerbosity = All;
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice__6B_;
  this->ConsoleHandle = (void *)0x0;
  this->OverrideColorSet = false;
  this->bIsAttached = false;
  (this->LogHighlights).AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0;
  (this->LogHighlights).ArrayNum = 0;
  (this->LogHighlights).ArrayMax = 8;
  (this->LogStringHighlights).AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0;
  (this->LogStringHighlights).ArrayNum = 0;
  (this->LogStringHighlights).ArrayMax = 8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar6 = FParse::Value(pwVar9,L"LogHighlights=",&local_98,true,(wchar_t **)0x0);
  if (bVar6) {
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_98,&local_c8,L",",true);
    iVar8 = local_c8.ArrayNum;
    pFVar20 = local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x10;
    FVar18.Data = local_c8.AllocatorInstance.Data;
    while( true ) {
      if (local_c8.ArrayNum != iVar8) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar18.Data == pFVar20) break;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      pFVar10 = ::FString::TrimStartAndEnd((FString *)FVar18.Data,&local_80);
      iVar7 = ::FString::ParseIntoArray(pFVar10,&local_e8,L" ",true);
      if ((iVar7 == 0) || (local_e8.ArrayNum != 2)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      iVar7 = local_e8.ArrayNum;
      if (bVar6) {
        if (local_e8.ArrayNum < 2) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FWindowsConsoleOutputDevice *)(*pcVar5)();
            return pFVar11;
          }
        }
        pFVar10 = ::FString::TrimStartAndEnd
                            ((FString *)(local_e8.AllocatorInstance.Data + 0x10),&local_70);
        FVar12 = (FName)`FWindowsConsoleOutputDevice::FWindowsConsoleOutputDevice'::__l2::<lambda_1>
                        ::operator()(local_res18,pFVar10);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (FVar12 != (FName)0x0) {
          iVar7 = (this->LogHighlights).ArrayNum;
          piVar1 = &(this->LogHighlights).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>_>
                              (0x810,&(this->LogHighlights).AllocatorInstance,piVar1);
          }
          (this->LogHighlights).ArrayNum = iVar7 + 1;
          FVar3 = (this->LogHighlights).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)&this->LogHighlights;
          if (FVar3 != (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
            FVar15 = FVar3;
          }
          pFVar16 = (FName *)((longlong)FVar15 + (longlong)iVar7 * 0x10);
          DefaultConstructItems<FWindowsConsoleOutputDevice::FLogHighlight,int>(pFVar16,1);
          if (local_e8.ArrayNum < 1) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FWindowsConsoleOutputDevice *)(*pcVar5)();
              return pFVar11;
            }
          }
          iVar7 = *(int *)(local_e8.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_e8.AllocatorInstance.Data + 8) == 0) {
            iVar7 = 0;
          }
          pFVar13 = ::FName::FName(&local_88,iVar7,*(wchar_t **)local_e8.AllocatorInstance.Data,
                                   FNAME_Add);
          *pFVar16 = *pFVar13;
          pFVar16[1] = FVar12;
        }
        iVar7 = local_e8.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,iVar7);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      FVar18.Data = FVar18.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar6 = FParse::Value(pwVar9,L"LogStringHighlights=",&local_a8,true,(wchar_t **)0x0);
  if (bVar6) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_a8,&local_b8,L",",true);
    uVar14 = (ulonglong)local_b8.ArrayNum;
    pFVar20 = local_b8.AllocatorInstance.Data + uVar14 * 0x10;
    local_res20 = local_b8.ArrayNum;
    FVar18.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar18.Data == pFVar20) break;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      iVar8 = ::FString::ParseIntoArray((FString *)FVar18.Data,&local_d8,L"=",true);
      if ((iVar8 != 0) && (local_d8.ArrayNum == 2)) {
        pFVar10 = ::FString::TrimStartAndEnd
                            ((FString *)(local_d8.AllocatorInstance.Data + 0x10),local_60);
        pwVar9 = `FWindowsConsoleOutputDevice::FWindowsConsoleOutputDevice'::__l2::<lambda_1>::
                 operator()(local_res18,pFVar10);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if (pwVar9 != (wchar_t *)0x0) {
          iVar8 = (this->LogStringHighlights).ArrayNum;
          piVar1 = &(this->LogStringHighlights).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>_>
                              (0x118,8,&(this->LogStringHighlights).AllocatorInstance,piVar1);
          }
          (this->LogStringHighlights).ArrayNum = iVar8 + 1;
          FVar4 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
                   &this->LogStringHighlights;
          if (FVar4 != (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
            FVar17 = FVar4;
          }
          FVar19 = (ForElementType<wchar_t>)((longlong)iVar8 * 0x118 + (longlong)FVar17);
          DefaultConstructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int>
                    ((void *)FVar19,1);
          if (local_d8.ArrayNum < 1) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FWindowsConsoleOutputDevice *)(*pcVar5)();
              return pFVar11;
            }
          }
          puVar2 = (uchar *)((longlong)FVar19 + 0x10c);
          iVar8 = *(int *)puVar2;
          iVar7 = *(int *)(local_d8.AllocatorInstance.Data + 8);
          _Src = *(void **)local_d8.AllocatorInstance.Data;
          *(int *)((ForElementType<wchar_t> *)((longlong)FVar19 + 0x108))->InlineData = iVar7;
          if ((iVar7 == 0) && (iVar8 == 0)) {
            puVar2[0] = 0x80;
            puVar2[1] = '\0';
            puVar2[2] = '\0';
            puVar2[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                      (2,2,iVar7,iVar8,(ForElementType<wchar_t> *)FVar19,iVar7,(int *)puVar2);
            _Dst = FVar19;
            if (*(ForElementType<wchar_t> *)((longlong)FVar19 + 0x100) !=
                (ForElementType<wchar_t>)0x0) {
              _Dst = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x100);
            }
            if (iVar7 != 0) {
              memcpy((void *)_Dst,_Src,(longlong)iVar7 * 2);
            }
          }
          *(wchar_t **)((longlong)FVar19 + 0x110) = pwVar9;
        }
      }
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      uVar14 = (ulonglong)local_res20;
      FVar18.Data = FVar18.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  pwVar9 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar9,L"SuppressConsoleOutputVerboseLogging");
  if (bVar6) {
    this->AllowedLogVerbosity = Log;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FWindowsConsoleOutputDevice @ 1423c7210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice::~FWindowsConsoleOutputDevice(FWindowsConsoleOutputDevice *this)

{
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar1;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar2;
  
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice__6B_;
  SaveToINI(this);
  FVar2 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
    FVar2 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
            &this->LogStringHighlights;
  }
  DestructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int>
            ((FLogStringHighlight *)FVar2,(this->LogStringHighlights).ArrayNum);
  FVar2 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar1 = (this->LogHighlights).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// operator() @ 1423c84c0

/* WARNING: Removing unreachable block (ram,0x0001423c8843) */

wchar_t * __thiscall
`FWindowsConsoleOutputDevice::FWindowsConsoleOutputDevice'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar2 = (wchar_t *)0x0;
  iVar3 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 5) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp
                        (L"Black",(wchar_t *)(param_1->Data).AllocatorInstance.Data,5), iVar1 == 0))
  {
    return L"0000";
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 7) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp
                        (L"DarkRed",(wchar_t *)(param_1->Data).AllocatorInstance.Data,7), iVar1 == 0
     )) {
    return L"1000";
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 9) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp
                        (L"DarkGreen",(wchar_t *)(param_1->Data).AllocatorInstance.Data,9),
     iVar1 == 0)) {
    return L"0100";
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 8) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp
                        (L"DarkBlue",(wchar_t *)(param_1->Data).AllocatorInstance.Data,8),
     iVar1 == 0)) {
    pwVar2 = L"0010";
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = 0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = iVar3;
    }
    if ((iVar4 == 10) &&
       (iVar1 = FGenericPlatformStricmp::Strnicmp
                          (L"DarkYellow",(wchar_t *)(param_1->Data).AllocatorInstance.Data,10),
       iVar1 == 0)) {
      pwVar2 = L"1100";
    }
    else {
      iVar1 = (param_1->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      if ((iVar4 == 8) &&
         (iVar1 = FGenericPlatformStricmp::Strnicmp
                            (L"DarkCyan",(wchar_t *)(param_1->Data).AllocatorInstance.Data,8),
         iVar1 == 0)) {
        pwVar2 = L"0110";
      }
      else {
        iVar1 = (param_1->Data).ArrayNum;
        iVar4 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar4 = iVar3;
        }
        if ((iVar4 == 10) &&
           (iVar1 = FGenericPlatformStricmp::Strnicmp
                              (L"DarkPurple",(wchar_t *)(param_1->Data).AllocatorInstance.Data,10),
           iVar1 == 0)) {
          pwVar2 = L"1010";
        }
        else {
          iVar1 = (param_1->Data).ArrayNum;
          iVar4 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar4 = iVar3;
          }
          if ((iVar4 == 4) &&
             (iVar1 = FGenericPlatformStricmp::Strnicmp
                                (L"Gray",(wchar_t *)(param_1->Data).AllocatorInstance.Data,4),
             iVar1 == 0)) {
            pwVar2 = L"1110";
          }
          else {
            iVar1 = (param_1->Data).ArrayNum;
            iVar4 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar4 = iVar3;
            }
            if ((iVar4 == 3) &&
               (iVar1 = FGenericPlatformStricmp::Strnicmp
                                  (L"Red",(wchar_t *)(param_1->Data).AllocatorInstance.Data,3),
               iVar1 == 0)) {
              pwVar2 = L"1001";
            }
            else {
              iVar1 = (param_1->Data).ArrayNum;
              iVar3 = 0;
              iVar4 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar4 = iVar3;
              }
              if ((iVar4 == 5) &&
                 (iVar1 = FGenericPlatformStricmp::Strnicmp
                                    (L"Green",(wchar_t *)(param_1->Data).AllocatorInstance.Data,5),
                 iVar1 == 0)) {
                pwVar2 = L"0101";
              }
              else {
                iVar1 = (param_1->Data).ArrayNum;
                iVar4 = iVar1 + -1;
                if (iVar1 == 0) {
                  iVar4 = iVar3;
                }
                if ((iVar4 == 4) &&
                   (iVar1 = FGenericPlatformStricmp::Strnicmp
                                      (L"Blue",(wchar_t *)(param_1->Data).AllocatorInstance.Data,4),
                   iVar1 == 0)) {
                  pwVar2 = L"0011";
                }
                else {
                  iVar1 = (param_1->Data).ArrayNum;
                  iVar4 = iVar1 + -1;
                  if (iVar1 == 0) {
                    iVar4 = iVar3;
                  }
                  if ((iVar4 == 6) &&
                     (iVar1 = FGenericPlatformStricmp::Strnicmp
                                        (L"Yellow",(wchar_t *)(param_1->Data).AllocatorInstance.Data
                                         ,6), iVar1 == 0)) {
                    pwVar2 = L"1101";
                  }
                  else {
                    iVar1 = (param_1->Data).ArrayNum;
                    iVar4 = iVar1 + -1;
                    if (iVar1 == 0) {
                      iVar4 = iVar3;
                    }
                    if ((iVar4 == 4) &&
                       (iVar1 = FGenericPlatformStricmp::Strnicmp
                                          (L"Cyan",(wchar_t *)(param_1->Data).AllocatorInstance.Data
                                           ,4), iVar1 == 0)) {
                      pwVar2 = L"0111";
                    }
                    else {
                      iVar1 = (param_1->Data).ArrayNum;
                      iVar4 = iVar1 + -1;
                      if (iVar1 == 0) {
                        iVar4 = iVar3;
                      }
                      if ((iVar4 == 6) &&
                         (iVar1 = FGenericPlatformStricmp::Strnicmp
                                            (L"Purple",
                                             (wchar_t *)(param_1->Data).AllocatorInstance.Data,6),
                         iVar1 == 0)) {
                        pwVar2 = L"1011";
                      }
                      else {
                        iVar1 = (param_1->Data).ArrayNum;
                        iVar4 = iVar1 + -1;
                        if (iVar1 == 0) {
                          iVar4 = iVar3;
                        }
                        if ((iVar4 == 5) &&
                           (iVar1 = FGenericPlatformStricmp::Strnicmp
                                              (L"White",(wchar_t *)
                                                        (param_1->Data).AllocatorInstance.Data,5),
                           iVar1 == 0)) {
                          pwVar2 = L"1111";
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
  return pwVar2;
}

// CanBeUsedOnAnyThread @ 1423d21a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsConsoleOutputDevice::CanBeUsedOnAnyThread(FWindowsConsoleOutputDevice *this)

{
  return true;
}

// CanBeUsedOnPanicThread @ 1423d21b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice::CanBeUsedOnPanicThread(FWindowsConsoleOutputDevice *this)

{
  return true;
}

// IsAttached @ 1423ea3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsConsoleOutputDevice::IsAttached(FWindowsConsoleOutputDevice *this)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (this->ConsoleHandle != (void *)0x0) {
    return this->bIsAttached;
  }
  BVar1 = AttachConsole(OutputDeviceConstants::WIN_ATTACH_PARENT_PROCESS);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return DVar2 == 5;
  }
  FreeConsole();
  return false;
}

// IsShown @ 1423eb370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsConsoleOutputDevice::IsShown(FWindowsConsoleOutputDevice *this)

{
  return this->ConsoleHandle != (void *)0x0;
}

// SaveToINI @ 142402ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice::SaveToINI(FWindowsConsoleOutputDevice *this)

{
  longlong *plVar1;
  BOOL BVar2;
  HWND hWnd;
  undefined1 auStackY_58 [32];
  _CONSOLE_SCREEN_BUFFER_INFO local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if ((GConfig != (FConfigCacheIni *)0x0) && (plVar1 = &this->_padding_, 1 < (int)this->_padding_))
  {
    hWnd = GetConsoleWindow();
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,(LPRECT)&local_28);
      FConfigCacheIni::SetInt
                (GConfig,L"DebugWindows",L"ConsoleX",(int)local_28.dwSize,(FString *)plVar1);
      FConfigCacheIni::SetInt
                (GConfig,L"DebugWindows",L"ConsoleY",(int)local_28.dwCursorPosition,
                 (FString *)plVar1);
    }
    if ((this->ConsoleHandle != (HANDLE)0x0) &&
       (BVar2 = GetConsoleScreenBufferInfo(this->ConsoleHandle,&local_28), BVar2 != 0)) {
      FConfigCacheIni::SetInt
                (GConfig,L"DebugWindows",L"ConsoleWidth",(int)local_28.dwSize.X,(FString *)plVar1);
      FConfigCacheIni::SetInt
                (GConfig,L"DebugWindows",L"ConsoleHeight",(int)local_28.dwSize.Y,(FString *)plVar1);
    }
  }
  return;
}

// Serialize @ 1424035a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice::Serialize
          (FWindowsConsoleOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1424035d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice::Serialize
          (FWindowsConsoleOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3,
          double param_4)

{
  undefined8 uVar1;
  bool bVar2;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar3;
  int iVar4;
  int iVar5;
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar6;
  FThreadHeartBeat *pFVar7;
  size_t sVar8;
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar9;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar10;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar11;
  undefined1 auStackY_908 [32];
  undefined1 local_8c8 [8];
  LARGE_INTEGER local_8c0;
  FName *local_8b8;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  TStringView<wchar_t> local_898;
  TStringView<wchar_t> local_888;
  wchar_t local_878;
  undefined1 local_876 [2046];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_908;
  if (((param_2 & VerbosityMask) <= this->AllowedLogVerbosity) &&
     (this->ConsoleHandle != (void *)0x0)) {
    local_8b8 = param_3;
    if (param_4 == __real_bff0000000000000) {
      QueryPerformanceCounter(&local_8c0);
      param_4 = ((double)local_8c0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000) - GStartTime;
    }
    if ((GIsCriticalError == false) || (Entry != false)) {
      if (param_2 == SetColor) {
        SetColor(this,param_1);
        iVar4 = wcscmp(L"",param_1);
        this->OverrideColorSet = iVar4 != 0;
      }
      else {
        bVar2 = false;
        if (this->OverrideColorSet == false) {
          if (param_2 == Error) {
            SetColor(this,L"1001");
            bVar2 = true;
          }
          else if (param_2 == Warning) {
            SetColor(this,L"1101");
            bVar2 = true;
          }
          else {
            iVar4 = (this->LogHighlights).ArrayNum;
            if (0 < iVar4) {
              FVar9 = (this->LogHighlights).AllocatorInstance.SecondaryData;
              if (FVar9 == (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
                FVar9 = (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)
                        &this->LogHighlights;
              }
              FVar6 = (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)
                      ((longlong)iVar4 * 0x10 + (longlong)FVar9);
              if (FVar9 != FVar6) {
                do {
                  if (*(FName *)FVar9 == *local_8b8) {
                    SetColor(this,*(wchar_t **)((longlong)FVar9 + 8));
                    bVar2 = true;
                    break;
                  }
                  FVar9 = (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)
                          ((longlong)FVar9 + 0x10);
                } while (FVar9 != FVar6);
              }
            }
            iVar4 = (this->LogStringHighlights).ArrayNum;
            if (0 < iVar4) {
              iStack_8a0 = 0;
              local_8a8 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)param_1;
              if (param_1 != (wchar_t *)0x0) {
                sVar8 = wcslen(param_1);
                iStack_8a0 = (int)sVar8;
              }
              FVar3 = local_8a8;
              FVar10 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
              uVar1._4_4_ = uStack_89c;
              uVar1._0_4_ = iStack_8a0;
              if (FVar10 == (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
                FVar10 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
                         &this->LogStringHighlights;
              }
              FVar11 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
                       ((longlong)iVar4 * 0x118 + (longlong)FVar10);
              while( true ) {
                if ((this->LogStringHighlights).ArrayNum != iVar4) {
                  `TCheckedPointerIterator<FWindowsConsoleOutputDevice::FLogStringHighlight,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_8c8);
                }
                if (FVar10 == FVar11) goto LAB_142403882;
                iStack_8a0 = *(int *)((longlong)FVar10 + 0x108) + -1;
                local_898.DataPtr = (wchar_t *)FVar3;
                local_8a8 = FVar10;
                if (*(ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> *)
                     ((longlong)FVar10 + 0x100) !=
                    (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
                  local_8a8 = *(ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> *)
                               ((longlong)FVar10 + 0x100);
                }
                local_888._12_4_ = uStack_89c;
                local_888.Size = iStack_8a0;
                local_898._8_8_ = uVar1;
                local_888.DataPtr = (wchar_t *)local_8a8;
                iVar5 = UE::String::FindFirst(&local_898,&local_888,IgnoreCase);
                if (iVar5 != -1) break;
                FVar10 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
                         ((longlong)FVar10 + 0x118);
              }
              SetColor(this,*(wchar_t **)((longlong)FVar10 + 0x110));
              bVar2 = true;
            }
          }
        }
LAB_142403882:
        local_878 = L'\0';
        memset(local_876,0,0x7fe);
        FOutputDeviceHelper::FormatLogLine
                  ((FString *)&local_898,param_2,local_8b8,param_1,GPrintLogTimes,param_4,(int *)0x0
                  );
        TCString<wchar_t>::SprintfImpl(&local_878,L"%s%s");
        if ((ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)local_898.DataPtr !=
            (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
          FMemory::Free(local_898.DataPtr);
        }
        pFVar7 = FThreadHeartBeat::GetNoInit();
        if (pFVar7 != (FThreadHeartBeat *)0x0) {
          FThreadHeartBeat::SuspendHeartBeat(pFVar7,false);
        }
        sVar8 = wcslen(&local_878);
        WriteConsoleW(this->ConsoleHandle,&local_878,(DWORD)sVar8,(LPDWORD)&local_8c0.QuadPart,
                      (LPVOID)0x0);
        if (bVar2) {
          SetColor(this,L"");
        }
        if ((pFVar7 != (FThreadHeartBeat *)0x0) &&
           (pFVar7 = FThreadHeartBeat::GetNoInit(), pFVar7 != (FThreadHeartBeat *)0x0)) {
          FThreadHeartBeat::ResumeHeartBeat(pFVar7,false);
        }
      }
    }
    else {
      Entry = true;
      (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
      Entry = false;
    }
  }
  return;
}

// SetColor @ 142404030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice::SetColor(FWindowsConsoleOutputDevice *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  WORD wAttributes;
  undefined1 auStack_48 [32];
  wchar_t local_28 [2];
  short sStack_24;
  short sStack_22;
  undefined8 uStack_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  iVar3 = FGenericPlatformStricmp::Stricmp(param_1,L"");
  if (iVar3 == 0) {
    wAttributes = 7;
  }
  else {
    local_18 = 0;
    _local_28 = 0;
    uStack_20 = 0;
    wcsncpy(local_28,param_1,8);
    pwVar4 = local_28;
    local_18 = 0;
    wVar2 = L'\0';
    wVar1 = local_28[0];
    if (local_28[0] != L'\0') {
      do {
        *pwVar4 = wVar1 + L'￐';
        pwVar4 = pwVar4 + 1;
        wVar1 = *pwVar4;
      } while (*pwVar4 != L'\0');
      wVar2 = local_28[0];
    }
    wAttributes = -(ushort)(sStack_22 != 0) & 8 |
                  -(ushort)(uStack_20._6_2_ != 0) & 0x80 | (ushort)(sStack_24 != 0) |
                  -(ushort)(local_28[1] != 0) & 2 | -(ushort)((short)uStack_20 != 0) & 0x40 |
                  -(ushort)(uStack_20._2_2_ != 0) & 0x20 | -(ushort)(uStack_20._4_2_ != 0) & 0x10 |
                  -(ushort)(wVar2 != L'\0') & 4;
  }
  SetConsoleTextAttribute(this->ConsoleHandle,wAttributes);
  return;
}

// Show @ 142406ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice::Show(FWindowsConsoleOutputDevice *this,bool param_1)

{
  longlong lVar1;
  int X;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  HANDLE pvVar6;
  HWND pHVar7;
  wchar_t *pwVar8;
  int iVar9;
  ForAnyElementType lpConsoleTitle;
  int Y;
  undefined1 auStackY_138 [32];
  int local_f8;
  int local_f4;
  COORD local_f0;
  short sStack_ec;
  SHORT SStack_ea;
  int local_e8;
  int local_e4;
  FString local_e0;
  FDisplayMetrics local_c8;
  tagRECT local_48;
  _CONSOLE_SCREEN_BUFFER_INFO local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1) {
    if (this->ConsoleHandle == (void *)0x0) {
      BVar5 = AllocConsole();
      if (BVar5 == 0) {
        this->bIsAttached = true;
      }
      else {
        FWindowsPlatformMisc::SetGracefulTerminationHandler();
      }
      pvVar6 = GetStdHandle(OutputDeviceConstants::WIN_STD_OUTPUT_HANDLE);
      this->ConsoleHandle = pvVar6;
      if (pvVar6 != (HANDLE)0xffffffffffffffff) {
        local_e8 = 0xa0;
        bVar2 = false;
        bVar3 = false;
        local_f0.X = 0xa0;
        local_f0.Y = 4000;
        local_e4 = 4000;
        local_f8 = 0;
        local_f4 = 0;
        if (GConfig != (FConfigCacheIni *)0x0) {
          FConfigCacheIni::GetInt(GConfig,L"DebugWindows",L"ConsoleWidth",&local_e8,&GGameIni);
          FConfigCacheIni::GetInt(GConfig,L"DebugWindows",L"ConsoleHeight",&local_e4,&GGameIni);
          bVar2 = FConfigCacheIni::GetInt(GConfig,L"DebugWindows",L"ConsoleX",&local_f8,&GGameIni);
          bVar3 = FConfigCacheIni::GetInt(GConfig,L"DebugWindows",L"ConsoleY",&local_f4,&GGameIni);
          local_f0.Y = (SHORT)local_e4;
          local_f0.X = (SHORT)local_e8;
        }
        SetConsoleScreenBufferSize(this->ConsoleHandle,local_f0);
        BVar5 = GetConsoleScreenBufferInfo(this->ConsoleHandle,&local_38);
        if (BVar5 != 0) {
          SStack_ea = local_38.srWindow.Bottom;
          local_f0 = local_38.srWindow._0_4_;
          sStack_ec = local_38.dwSize.X + -1;
          SetConsoleWindowInfo(this->ConsoleHandle,1,(SMALL_RECT *)&local_f0);
        }
        pHVar7 = GetConsoleWindow();
        GetWindowRect(pHVar7,&local_48);
        pwVar8 = FCommandLine::Get();
        bVar4 = FParse::Value(pwVar8,L"ConsoleX=",&local_f8);
        if ((!bVar4) && (bVar2 == false)) {
          local_f8 = local_48.left;
        }
        pwVar8 = FCommandLine::Get();
        bVar2 = FParse::Value(pwVar8,L"ConsoleY=",&local_f4);
        if ((!bVar2) && (bVar3 == false)) {
          local_f4 = local_48.top;
        }
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        pwVar8 = FCommandLine::Get();
        bVar2 = FParse::Value(pwVar8,L"ConsoleTitle=",&local_e0,true,(wchar_t **)0x0);
        if (bVar2) {
          lpConsoleTitle.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            lpConsoleTitle.Data = local_e0.Data.AllocatorInstance.Data;
          }
          SetConsoleTitleW((LPCWSTR)lpConsoleTitle.Data);
        }
        local_c8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.MonitorInfo.ArrayNum = 0;
        local_c8.MonitorInfo.ArrayMax = 0;
        local_c8.PrimaryDisplayWorkAreaRect.Left = 0;
        local_c8.PrimaryDisplayWorkAreaRect.Top = 0;
        local_c8.PrimaryDisplayWorkAreaRect.Right = 0;
        local_c8.PrimaryDisplayWorkAreaRect.Bottom = 0;
        local_c8.VirtualDisplayRect.Left = 0;
        local_c8.VirtualDisplayRect.Top = 0;
        local_c8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
        local_c8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
        local_c8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
        local_c8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
        local_c8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
        local_c8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
        local_c8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
        local_c8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
        local_c8.VirtualDisplayRect.Right = 0;
        local_c8.VirtualDisplayRect.Bottom = 0;
        FDisplayMetrics::RebuildDisplayMetrics(&local_c8);
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            ActualConsoleWidth = local_48.right - local_48.left;
            _Init_thread_footer(&::_TSS0);
          }
        }
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            ActualConsoleHeight = local_48.bottom - local_48.top;
            _Init_thread_footer(&::_TSS1);
          }
        }
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS2) {
          _Init_thread_header(&::_TSS2);
          if (::_TSS2 == -1) {
            ActualScreenWidth = local_c8.VirtualDisplayRect.Right - local_c8.VirtualDisplayRect.Left
            ;
            _Init_thread_footer(&::_TSS2);
          }
        }
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS3) {
          _Init_thread_header(&::_TSS3);
          if (::_TSS3 == -1) {
            ActualScreenHeight =
                 local_c8.VirtualDisplayRect.Bottom - local_c8.VirtualDisplayRect.Top;
            _Init_thread_footer(&::_TSS3);
          }
        }
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS4) {
          _Init_thread_header(&::_TSS4);
          if (::_TSS4 == -1) {
            RightPadding = ActualScreenWidth / 2;
            if (ActualConsoleWidth / 2 < ActualScreenWidth / 2) {
              RightPadding = ActualConsoleWidth / 2;
            }
            if (RightPadding < 0x32) {
              RightPadding = 0x32;
            }
            _Init_thread_footer(&::_TSS4);
          }
        }
        if (*(int *)(lVar1 + 0x9d4c) < ::_TSS5) {
          _Init_thread_header(&::_TSS5);
          if (::_TSS5 == -1) {
            BottomPadding = ActualScreenHeight / 2;
            if (ActualConsoleHeight / 2 < ActualScreenHeight / 2) {
              BottomPadding = ActualConsoleHeight / 2;
            }
            if (BottomPadding < 0x32) {
              BottomPadding = 0x32;
            }
            _Init_thread_footer(&::_TSS5);
          }
        }
        iVar9 = local_c8.VirtualDisplayRect.Left;
        if (local_c8.VirtualDisplayRect.Left < local_f8) {
          iVar9 = local_f8;
        }
        X = local_c8.VirtualDisplayRect.Right - RightPadding;
        if (iVar9 < local_c8.VirtualDisplayRect.Right - RightPadding) {
          X = iVar9;
        }
        iVar9 = local_c8.VirtualDisplayRect.Top;
        if (local_c8.VirtualDisplayRect.Top < local_f4) {
          iVar9 = local_f4;
        }
        Y = local_c8.VirtualDisplayRect.Bottom - BottomPadding;
        if (iVar9 < local_c8.VirtualDisplayRect.Bottom - BottomPadding) {
          Y = iVar9;
        }
        local_f8 = X;
        local_f4 = Y;
        pHVar7 = GetConsoleWindow();
        SetWindowPos(pHVar7,(HWND)0x0,X,Y,0,0,0x405);
        DestructItems<FMonitorInfo,int>
                  ((FMonitorInfo *)local_c8.MonitorInfo.AllocatorInstance.Data,
                   local_c8.MonitorInfo.ArrayNum);
        if ((FMonitorInfo *)local_c8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
          FMemory::Free(local_c8.MonitorInfo.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else if (this->ConsoleHandle != (void *)0x0) {
    SaveToINI(this);
    this->ConsoleHandle = (void *)0x0;
    FreeConsole();
    this->bIsAttached = false;
  }
  return;
}

