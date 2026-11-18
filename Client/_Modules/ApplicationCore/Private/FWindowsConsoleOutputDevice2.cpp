// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 16

// FWindowsConsoleOutputDevice2 @ 1423c3580

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsConsoleOutputDevice2 * __thiscall
FWindowsConsoleOutputDevice2::FWindowsConsoleOutputDevice2(FWindowsConsoleOutputDevice2 *this)

{
  int *piVar1;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar2;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  FWindowsConsoleOutputDevice2 *pFVar11;
  FName FVar12;
  FName *pFVar13;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar14;
  FName *pFVar15;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar16;
  TStringBuilderBase<wchar_t> *this_00;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res8[0] = 0;
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice2__6B_;
  this->OverrideColorSet = false;
  this->Window = (FConsoleWindow *)0x0;
  (this->WindowRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CommandHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandHistory).ArrayNum = 0;
  (this->CommandHistory).ArrayMax = 0;
  this->AllowedLogVerbosity = All;
  (this->LogHighlights).AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0;
  this->CommandHistoryCursor = 0;
  (this->LogHighlights).ArrayNum = 0;
  (this->LogHighlights).ArrayMax = 8;
  (this->LogStringHighlights).AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0;
  (this->LogStringHighlights).ArrayNum = 0;
  (this->LogStringHighlights).ArrayMax = 8;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar9,L"LogHighlights=",&local_88,true,(wchar_t **)0x0);
  if (bVar7) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_88,&local_b8,L",",true);
    iVar6 = local_b8.ArrayNum;
    pFVar18 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10;
    FVar17.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar6) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar17.Data == pFVar18) break;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      pFVar10 = ::FString::TrimStartAndEnd((FString *)FVar17.Data,&local_78);
      iVar8 = ::FString::ParseIntoArray(pFVar10,&local_d8,L" ",true);
      if ((iVar8 == 0) || (local_d8.ArrayNum != 2)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar8 = local_d8.ArrayNum;
      if (bVar7) {
        if (local_d8.ArrayNum < 2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FWindowsConsoleOutputDevice2 *)(*pcVar5)();
            return pFVar11;
          }
        }
        pFVar10 = ::FString::TrimStartAndEnd
                            ((FString *)(local_d8.AllocatorInstance.Data + 0x10),&local_68);
        FVar12 = (FName)`FWindowsConsoleOutputDevice2::FWindowsConsoleOutputDevice2'::__l2::
                        <lambda_1>::operator()(local_res18,pFVar10);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (FVar12 != (FName)0x0) {
          iVar8 = (this->LogHighlights).ArrayNum;
          piVar1 = &(this->LogHighlights).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>_>
                              (0x810,&(this->LogHighlights).AllocatorInstance,piVar1);
          }
          (this->LogHighlights).ArrayNum = iVar8 + 1;
          FVar2 = (this->LogHighlights).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)&this->LogHighlights
          ;
          if (FVar2 != (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
            FVar14 = FVar2;
          }
          pFVar15 = (FName *)((longlong)FVar14 + (longlong)iVar8 * 0x10);
          DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogHighlight,int>(pFVar15,1);
          if (local_d8.ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FWindowsConsoleOutputDevice2 *)(*pcVar5)();
              return pFVar11;
            }
          }
          iVar8 = *(int *)(local_d8.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_d8.AllocatorInstance.Data + 8) == 0) {
            iVar8 = 0;
          }
          pFVar13 = ::FName::FName(&local_res20,iVar8,*(wchar_t **)local_d8.AllocatorInstance.Data,
                                   FNAME_Add);
          *pFVar15 = *pFVar13;
          pFVar15[1] = FVar12;
        }
        iVar8 = local_d8.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar8);
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      FVar17.Data = FVar17.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar9,L"LogStringHighlights=",&local_98,true,(wchar_t **)0x0);
  if (bVar7) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_98,&local_a8,L",",true);
    iVar6 = local_a8.ArrayNum;
    pFVar18 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x10;
    FVar17.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if (local_a8.ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar17.Data == pFVar18) break;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      iVar8 = ::FString::ParseIntoArray((FString *)FVar17.Data,&local_c8,L"=",true);
      if ((iVar8 != 0) && (local_c8.ArrayNum == 2)) {
        pFVar10 = ::FString::TrimStartAndEnd
                            ((FString *)(local_c8.AllocatorInstance.Data + 0x10),&local_58);
        pwVar9 = `FWindowsConsoleOutputDevice2::FWindowsConsoleOutputDevice2'::__l2::<lambda_1>::
                 operator()(local_res18,pFVar10);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (pwVar9 != (wchar_t *)0x0) {
          iVar8 = (this->LogStringHighlights).ArrayNum;
          piVar1 = &(this->LogStringHighlights).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>_>
                              (0x128,8,&(this->LogStringHighlights).AllocatorInstance,piVar1);
          }
          (this->LogStringHighlights).ArrayNum = iVar8 + 1;
          FVar3 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
                   &this->LogStringHighlights;
          if (FVar3 != (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
            FVar16 = FVar3;
          }
          this_00 = (TStringBuilderBase<wchar_t> *)((longlong)FVar16 + (longlong)iVar8 * 0x128);
          DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int>(this_00,1);
          if (local_c8.ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FWindowsConsoleOutputDevice2 *)(*pcVar5)();
              return pFVar11;
            }
          }
          pwVar4 = *(wchar_t **)local_c8.AllocatorInstance.Data;
          iVar8 = *(int *)(local_c8.AllocatorInstance.Data + 8);
          this_00->CurPos = this_00->Base;
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,pwVar4,iVar8);
          this_00[9].Base = pwVar9;
        }
      }
      DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      FVar17.Data = FVar17.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  pwVar9 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar9,L"SuppressConsoleOutputVerboseLogging");
  if (bVar7) {
    this->AllowedLogVerbosity = Log;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FWindowsConsoleOutputDevice2 @ 1423c7110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::~FWindowsConsoleOutputDevice2(FWindowsConsoleOutputDevice2 *this)

{
  FConsoleWindow *this_00;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar6;
  
  this_00 = this->Window;
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice2__6B_;
  if (this_00 != (FConsoleWindow *)0x0) {
    FConsoleWindow::~FConsoleWindow(this_00);
    ::operator_delete(this_00,0x360);
  }
  FVar6 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
    FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
            &this->LogStringHighlights;
  }
  DestructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int>
            ((FLogStringHighlight *)FVar6,(this->LogStringHighlights).ArrayNum);
  FVar6 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FVar1 = (this->LogHighlights).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CommandHistory).AllocatorInstance.Data,
             (this->CommandHistory).ArrayNum);
  pFVar2 = (this->CommandHistory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// operator() @ 1423c8110

/* WARNING: Removing unreachable block (ram,0x0001423c8493) */

wchar_t * __thiscall
`FWindowsConsoleOutputDevice2::FWindowsConsoleOutputDevice2'::__l2::<lambda_1>::operator()
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

// AddCommand @ 1423cf8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::AddCommand(FWindowsConsoleOutputDevice2 *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = this->CommandHistoryCursor;
  if ((-1 < iVar5) && (iVar5 < (this->CommandHistory).ArrayNum)) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (param_1->Data).ArrayNum;
    pFVar6 = (this->CommandHistory).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    iVar5 = *(int *)(pFVar6 + 8);
    if (iVar5 == iVar2) {
      if (iVar5 < 2) {
        return;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar6,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = iVar5 + iVar2 == 1;
    }
    if (bVar4) {
      return;
    }
  }
  pFVar6 = (this->CommandHistory).AllocatorInstance.Data;
  if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (longlong)(this->CommandHistory).ArrayMax * 0x10))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->CommandHistory).ArrayNum;
  piVar1 = &(this->CommandHistory).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CommandHistory).AllocatorInstance,piVar1);
  }
  (this->CommandHistory).ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((this->CommandHistory).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                     param_1);
  this->CommandHistoryCursor = iVar5;
  SaveToINI(this);
  return;
}

// CanBeUsedOnAnyThread @ 1423d2190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice2::CanBeUsedOnAnyThread(FWindowsConsoleOutputDevice2 *this)

{
  return true;
}

// GetConfigFilename @ 1423ddec0

FString * __cdecl FWindowsConsoleOutputDevice2::GetConfigFilename(void)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar1 = &FPaths::EngineSavedDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_28,pTVar1,8 - (uint)(pTVar1->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_28,L"Config",6);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&Filename.Data,&local_28,0x12 - (uint)(local_28.ArrayNum != 0));
      ::FString::PathAppend(&Filename,L"DebugConsole.ini",0x10);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`FWindowsConsoleOutputDevice2::GetConfigFilename'::__l2::
             _dynamic_atexit_destructor_for__Filename__);
      _Init_thread_footer(&::_TSS0);
      return &Filename;
    }
  }
  return &Filename;
}

// GetLastCommand @ 1423df730

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice2::GetLastCommand(FWindowsConsoleOutputDevice2 *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  iVar6 = this->CommandHistoryCursor;
  if ((-1 < iVar6) && (iVar6 < (this->CommandHistory).ArrayNum)) {
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar5 = (this->CommandHistory).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    iVar1 = *(int *)(pFVar5 + 8);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(param_1,*(wchar_t **)pFVar5,iVar6);
    return true;
  }
  return false;
}

// GetNextCommand @ 1423e0ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice2::GetNextCommand(FWindowsConsoleOutputDevice2 *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = (this->CommandHistory).ArrayNum;
  if (iVar8 + -1 <= this->CommandHistoryCursor) {
    return false;
  }
  uVar7 = this->CommandHistoryCursor + 1;
  this->CommandHistoryCursor = uVar7;
  uVar5 = 0;
  if ((int)uVar7 < iVar8) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = (this->CommandHistory).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  iVar1 = *(int *)(pFVar6 + 8);
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(param_1,*(wchar_t **)pFVar6,iVar8);
  return true;
}

// GetPreviousCommand @ 1423e1490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice2::GetPreviousCommand
          (FWindowsConsoleOutputDevice2 *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if (0 < this->CommandHistoryCursor) {
    iVar6 = this->CommandHistoryCursor + -1;
    this->CommandHistoryCursor = iVar6;
    if (iVar6 < (this->CommandHistory).ArrayNum) {
      if (iVar6 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar5 = (this->CommandHistory).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      iVar1 = *(int *)(pFVar5 + 8);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(param_1,*(wchar_t **)pFVar5,iVar6);
      return true;
    }
  }
  return false;
}

// IsAttached @ 1423ea3a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsConsoleOutputDevice2::IsAttached(FWindowsConsoleOutputDevice2 *this)

{
  return this->Window != (FConsoleWindow *)0x0;
}

// IsShown @ 1423eb350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsConsoleOutputDevice2::IsShown(FWindowsConsoleOutputDevice2 *this)

{
  if ((this->Window != (FConsoleWindow *)0x0) && (this->Window->bIsVisible != false)) {
    return true;
  }
  return false;
}

// SaveToINI @ 1424025b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::SaveToINI(FWindowsConsoleOutputDevice2 *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FConsoleWindow *pFVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  FString *pFVar8;
  IFileManager *pIVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStackY_3f78 [32];
  FString local_3f38;
  TStringView<wchar_t> local_3f28;
  ForAnyElementType local_3f18;
  int local_3f10;
  int local_3f0c;
  ForAnyElementType local_3f08;
  int local_3f00;
  int local_3efc;
  int local_3ef8;
  int local_3ef4;
  EConsoleColor local_3ef0;
  int local_3eec;
  FConfigCacheIni local_3ee8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f78;
  AcquireSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  pFVar5 = this->Window;
  if (pFVar5 == (FConsoleWindow *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  }
  else {
    iVar3 = pFVar5->ConsoleWidth;
    dVar12 = __real_3ff0000000000000 / pFVar5->DpiScale;
    iVar4 = pFVar5->ConsoleHeight;
    local_3ef8 = (int)((double)pFVar5->ConsolePosX * dVar12);
    local_3ef4 = (int)((double)pFVar5->ConsolePosY * dVar12);
    local_3ef0 = pFVar5->ConsoleColor;
    local_3eec = pFVar5->ConsoleShowDateTime;
    local_3f08.Data = (FScriptContainerElement *)0x0;
    local_3f00 = (pFVar5->ConsoleIncludeFilterStr).Data.ArrayNum;
    lVar11 = (longlong)local_3f00;
    pFVar6 = (pFVar5->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
    if (local_3f00 == 0) {
      local_3efc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f00,0,&local_3f08,local_3f00,&local_3efc);
      memcpy(local_3f08.Data,pFVar6,lVar11 * 2);
    }
    local_3f18.Data = (FScriptContainerElement *)0x0;
    local_3f10 = (this->Window->ConsoleExcludeFilterStr).Data.ArrayNum;
    lVar11 = (longlong)local_3f10;
    pFVar6 = (this->Window->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
    if (local_3f10 == 0) {
      local_3f0c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f10,0,&local_3f18,local_3f10,&local_3f0c);
      memcpy(local_3f18.Data,pFVar6,lVar11 * 2);
    }
    bVar1 = this->Window->bConsoleExpanded;
    bVar2 = this->Window->bConsoleShowVerbosity;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
    pFVar8 = GetConfigFilename();
    local_3f38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f38.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    lVar11 = (longlong)local_3f38.Data.ArrayNum;
    pFVar6 = (pFVar8->Data).AllocatorInstance.Data;
    if (local_3f38.Data.ArrayNum == 0) {
      local_3f38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f38.Data.ArrayNum,0,(ForAnyElementType *)&local_3f38,
                 local_3f38.Data.ArrayNum,&local_3f38.Data.ArrayMax);
      memcpy(local_3f38.Data.AllocatorInstance.Data,pFVar6,lVar11 * 2);
    }
    local_3f28.DataPtr = (wchar_t *)0x0;
    FConfigCacheIni::FConfigCacheIni(&local_3ee8,DiskBacked,(FName)0x0,false);
    pIVar9 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_3f38.Data.ArrayNum != 0) {
      FVar10.Data = local_3f38.Data.AllocatorInstance.Data;
    }
    cVar7 = (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,FVar10.Data);
    if (cVar7 == '\0') {
      pIVar9 = IFileManager::Get();
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_3f38.Data.ArrayNum != 0) {
        FVar10.Data = local_3f38.Data.AllocatorInstance.Data;
      }
      local_3f28.DataPtr = (wchar_t *)0x0;
      local_3f28.Size = 0;
      local_3f28._12_4_ = 0;
      FFileHelper::SaveStringToFile(&local_3f28,(wchar_t *)FVar10.Data,AutoDetect,pIVar9,0);
    }
    FConfigCacheIni::LoadFile(&local_3ee8,&local_3f38,(FConfigFile *)0x0,(wchar_t *)0x0);
    FConfigCacheIni::SetInt(&local_3ee8,L"GameConsoleWindows",L"ConsoleX",local_3ef8,&local_3f38);
    FConfigCacheIni::SetInt(&local_3ee8,L"GameConsoleWindows",L"ConsoleY",local_3ef4,&local_3f38);
    FConfigCacheIni::SetInt
              (&local_3ee8,L"GameConsoleWindows",L"ConsoleWidth",(int)((double)iVar3 * dVar12),
               &local_3f38);
    FConfigCacheIni::SetInt
              (&local_3ee8,L"GameConsoleWindows",L"ConsoleHeight",(int)((double)iVar4 * dVar12),
               &local_3f38);
    FConfigCacheIni::SetInt
              (&local_3ee8,L"GameConsoleWindows",L"ConsoleColor",local_3ef0,&local_3f38);
    FConfigCacheIni::SetBool(&local_3ee8,L"GameConsoleWindows",L"ConsoleExpanded",bVar1,&local_3f38)
    ;
    FConfigCacheIni::SetBool
              (&local_3ee8,L"GameConsoleWindows",L"ConsoleShowVerbosity",bVar2,&local_3f38);
    FConfigCacheIni::SetInt
              (&local_3ee8,L"GameConsoleWindows",L"ConsoleShowDateTime",local_3eec,&local_3f38);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_3f00 != 0) {
      FVar10.Data = local_3f08.Data;
    }
    FConfigCacheIni::SetString
              (&local_3ee8,L"GameConsoleWindows",L"IncludeFilter",(wchar_t *)FVar10.Data,&local_3f38
              );
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_3f10 != 0) {
      FVar10.Data = local_3f18.Data;
    }
    FConfigCacheIni::SetString
              (&local_3ee8,L"GameConsoleWindows",L"ExcludeFilter",(wchar_t *)FVar10.Data,&local_3f38
              );
    FConfigCacheIni::SetArray
              (&local_3ee8,L"GameConsoleWindows",L"CommandHistory",&this->CommandHistory,&local_3f38
              );
    FConfigCacheIni::Flush(&local_3ee8,false,&local_3f38);
    FConfigCacheIni::~FConfigCacheIni(&local_3ee8);
    if (local_3f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f38.Data.AllocatorInstance.Data);
    }
    if (local_3f18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f18.Data);
    }
    if (local_3f08.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f08.Data);
    }
  }
  return;
}

// Serialize @ 142403260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::Serialize
          (FWindowsConsoleOutputDevice2 *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  Serialize(this,param_1,param_2,param_3,__real_bff0000000000000);
  return;
}

// Serialize @ 142403290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::Serialize
          (FWindowsConsoleOutputDevice2 *this,wchar_t *param_1,Type param_2,FName *param_3,
          double param_4)

{
  ushort uVar1;
  FConsoleWindow *this_00;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar8;
  size_t sVar9;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar10;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar11;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar12;
  DWORD DVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER local_res8;
  undefined1 local_res18 [8];
  FName *local_res20;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [3];
  
  if ((param_2 & VerbosityMask) <= this->AllowedLogVerbosity) {
    local_res20 = param_3;
    if (param_4 == __real_bff0000000000000) {
      QueryPerformanceCounter(&local_res8);
      param_4 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000) - GStartTime;
    }
    if (param_2 == SetColor) {
      SetColor(this,param_1);
      iVar6 = wcscmp(L"",param_1);
      this->OverrideColorSet = iVar6 != 0;
      return;
    }
    LVar14.QuadPart = 0;
    bVar4 = false;
    bVar3 = false;
    local_res8.QuadPart = 0;
    if (this->OverrideColorSet == false) {
      if (param_2 == Error) {
        SetColor(this,L"1001");
        bVar3 = true;
      }
      else if (param_2 == Warning) {
        SetColor(this,L"1101");
        bVar3 = true;
      }
      else {
        iVar6 = (this->LogHighlights).ArrayNum;
        bVar3 = bVar4;
        if (0 < iVar6) {
          FVar10 = (this->LogHighlights).AllocatorInstance.SecondaryData;
          if (FVar10 == (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
            FVar10 = (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)
                     &this->LogHighlights;
          }
          FVar8 = (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)
                  ((longlong)iVar6 * 0x10 + (longlong)FVar10);
          if (FVar10 != FVar8) {
            do {
              if (*(FName *)FVar10 == *local_res20) {
                SetColor(this,*(wchar_t **)((longlong)FVar10 + 8));
                bVar3 = true;
                break;
              }
              FVar10 = (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)
                       ((longlong)FVar10 + 0x10);
            } while (FVar10 != FVar8);
          }
        }
        iVar6 = (this->LogStringHighlights).ArrayNum;
        LVar14.QuadPart = 0;
        if (0 < iVar6) {
          local_88.Size = 0;
          local_88.DataPtr = param_1;
          if (param_1 != (wchar_t *)0x0) {
            sVar9 = wcslen(param_1);
            local_88.Size = (int)sVar9;
          }
          pwVar5 = local_88.DataPtr;
          FVar11 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
          uVar2._4_4_ = local_88._12_4_;
          uVar2._0_4_ = local_88.Size;
          if (FVar11 == (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
            FVar11 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
                     &this->LogStringHighlights;
          }
          FVar12 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
                   ((longlong)iVar6 * 0x128 + (longlong)FVar11);
          while( true ) {
            if ((this->LogStringHighlights).ArrayNum != iVar6) {
              `TCheckedPointerIterator<FWindowsConsoleOutputDevice2::FLogStringHighlight,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            LVar14 = local_res8;
            if (FVar11 == FVar12) goto LAB_1424034e4;
            local_88.DataPtr = *(wchar_t **)FVar11;
            local_88.Size =
                 (int)(*(longlong *)((longlong)FVar11 + 8) - (longlong)local_88.DataPtr >> 1);
            local_78._12_4_ = local_88._12_4_;
            local_78.Size = local_88.Size;
            local_68[0].DataPtr = pwVar5;
            local_78.DataPtr = local_88.DataPtr;
            local_68[0]._8_8_ = uVar2;
            iVar7 = UE::String::FindFirst(local_68,&local_78,IgnoreCase);
            if (iVar7 != -1) break;
            FVar11 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
                     ((longlong)FVar11 + 0x128);
          }
          SetColor(this,*(wchar_t **)((longlong)FVar11 + 0x120));
          bVar3 = true;
          LVar14 = local_res8;
        }
      }
    }
LAB_1424034e4:
    DVar13 = LVar14.s.LowPart;
    AcquireSRWLockShared((PSRWLOCK)&this->WindowRWLock);
    this_00 = this->Window;
    if (this_00 != (FConsoleWindow *)0x0) {
      uVar1 = this->TextAttribute;
      local_88.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar9 = wcslen(param_1);
        DVar13 = (DWORD)sVar9;
      }
      local_88.Size = DVar13;
      FConsoleWindow::AddLogEntry(this_00,&local_88,param_2,local_res20,param_4,uVar1);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->WindowRWLock);
    if (bVar3) {
      SetColor(this,L"");
    }
  }
  return;
}

// SetColor @ 142403ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::SetColor(FWindowsConsoleOutputDevice2 *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
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
    this->TextAttribute = 7;
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
    this->TextAttribute =
         -(ushort)(uStack_20._6_2_ != 0) & 0x80 | (ushort)(sStack_24 != 0) |
         -(ushort)(local_28[1] != 0) & 2 | -(ushort)((short)uStack_20 != 0) & 0x40 |
         -(ushort)(sStack_22 != 0) & 8 | -(ushort)(uStack_20._2_2_ != 0) & 0x20 |
         -(ushort)(uStack_20._4_2_ != 0) & 0x10 | -(ushort)(wVar2 != L'\0') & 4;
  }
  return;
}

// Show @ 142406470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::Show(FWindowsConsoleOutputDevice2 *this,bool param_1)

{
  FScriptContainerElement *_Src;
  FConsoleWindow *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FConsoleWindow *pFVar9;
  FConsoleWindow *pFVar10;
  HANDLE pvVar11;
  longlong lVar12;
  undefined1 auStackY_4018 [32];
  bool local_3fd8;
  bool local_3fd7 [3];
  int local_3fd4;
  int local_3fd0 [2];
  FString local_3fc8;
  int local_3fb8;
  int local_3fb4;
  EConsoleColor local_3fb0;
  int local_3fac;
  FString local_3fa8;
  FString local_3f98;
  FString local_3f88;
  undefined8 local_3f78;
  FString local_3f70;
  FDisplayMetrics local_3f58;
  FConfigCacheIni local_3ed8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4018;
  if (param_1) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsConsoleOutputDevice2.cpp"
                           ,3000,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (FConsoleWindow *)0x0;
    local_3fb8 = 1000;
    local_3fd4 = 0;
    local_3fd0[0] = 0;
    local_3fb0 = DarkGray;
    local_3fac = 0;
    local_3f98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f98.Data.ArrayNum = 0;
    local_3f98.Data.ArrayMax = 0;
    local_3f88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f88.Data.ArrayNum = 0;
    local_3f88.Data.ArrayMax = 0;
    local_3fd8 = false;
    local_3fd7[0] = false;
    local_3fb4 = 700;
    pFVar7 = GetConfigFilename();
    local_3fc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3fc8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    lVar12 = (longlong)local_3fc8.Data.ArrayNum;
    _Src = (pFVar7->Data).AllocatorInstance.Data;
    if (local_3fc8.Data.ArrayNum == 0) {
      local_3fc8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3fc8.Data.ArrayNum,0,(ForAnyElementType *)&local_3fc8,
                 local_3fc8.Data.ArrayNum,&local_3fc8.Data.ArrayMax);
      memcpy(local_3fc8.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    local_3f78 = 0;
    FConfigCacheIni::FConfigCacheIni(&local_3ed8,Temporary,(FName)0x0,false);
    FConfigCacheIni::LoadFile(&local_3ed8,&local_3fc8,(FConfigFile *)0x0,(wchar_t *)0x0);
    FConfigCacheIni::GetInt
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleWidth",&local_3fb8,&local_3fc8);
    FConfigCacheIni::GetInt
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleHeight",&local_3fb4,&local_3fc8);
    bVar3 = FConfigCacheIni::GetInt
                      (&local_3ed8,L"GameConsoleWindows",L"ConsoleX",&local_3fd4,&local_3fc8);
    bVar4 = FConfigCacheIni::GetInt
                      (&local_3ed8,L"GameConsoleWindows",L"ConsoleY",local_3fd0,&local_3fc8);
    FConfigCacheIni::GetInt
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleColor",(int *)&local_3fb0,&local_3fc8);
    FConfigCacheIni::GetBool
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleExpanded",&local_3fd8,&local_3fc8);
    FConfigCacheIni::GetBool
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleShowVerbosity",local_3fd7,&local_3fc8);
    FConfigCacheIni::GetInt
              (&local_3ed8,L"GameConsoleWindows",L"ConsoleShowDateTime",&local_3fac,&local_3fc8);
    FConfigCacheIni::GetString
              (&local_3ed8,L"GameConsoleWindows",L"IncludeFilter",&local_3f98,&local_3fc8);
    FConfigCacheIni::GetString
              (&local_3ed8,L"GameConsoleWindows",L"ExcludeFilter",&local_3f88,&local_3fc8);
    FConfigCacheIni::GetArray
              (&local_3ed8,L"GameConsoleWindows",L"CommandHistory",&this->CommandHistory,&local_3fc8
              );
    this->CommandHistoryCursor = (this->CommandHistory).ArrayNum;
    pwVar8 = FCommandLine::Get();
    bVar5 = FParse::Value(pwVar8,L"ConsoleX=",&local_3fd4);
    if ((!bVar5) && (!bVar3)) {
      local_3fd4 = -0x80000000;
    }
    pwVar8 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar8,L"ConsoleY=",local_3fd0);
    if ((!bVar3) && (!bVar4)) {
      local_3fd0[0] = -0x80000000;
    }
    pwVar8 = FCommandLine::Get();
    FParse::Value(pwVar8,L"ConsoleIncludeFilter=",&local_3f98,true,(wchar_t **)0x0);
    local_3fa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3fa8.Data.ArrayNum = 0;
    local_3fa8.Data.ArrayMax = 0;
    pwVar8 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar8,L"ConsoleTitle=",&local_3fa8,true,(wchar_t **)0x0);
    if (!bVar3) {
      FWindowsPlatformProcess::ExecutablePath();
      ::FString::PrintfImpl(&local_3f70,L"%s Console (%s) - %s  (F1 for help)");
      if (local_3fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3fa8.Data.AllocatorInstance.Data);
      }
      local_3fa8.Data.AllocatorInstance.Data = local_3f70.Data.AllocatorInstance.Data;
      local_3fa8.Data.ArrayMax = local_3f70.Data.ArrayMax;
      local_3fa8.Data.ArrayNum = local_3f70.Data.ArrayNum;
    }
    local_3f58.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f58.MonitorInfo.ArrayNum = 0;
    local_3f58.MonitorInfo.ArrayMax = 0;
    local_3f58.PrimaryDisplayWorkAreaRect.Left = 0;
    local_3f58.PrimaryDisplayWorkAreaRect.Top = 0;
    local_3f58.PrimaryDisplayWorkAreaRect.Right = 0;
    local_3f58.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_3f58.VirtualDisplayRect.Left = 0;
    local_3f58.VirtualDisplayRect.Top = 0;
    local_3f58.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_3f58.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_3f58.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_3f58.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_3f58.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_3f58.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_3f58.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_3f58.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_3f58.VirtualDisplayRect.Right = 0;
    local_3f58.VirtualDisplayRect.Bottom = 0;
    FDisplayMetrics::RebuildDisplayMetrics(&local_3f58);
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ActualConsoleWidth = local_3fb8;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ActualConsoleHeight = local_3fb4;
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ActualScreenWidth = local_3f58.VirtualDisplayRect.Right - local_3f58.VirtualDisplayRect.Left;
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ActualScreenHeight = local_3f58.VirtualDisplayRect.Bottom - local_3f58.VirtualDisplayRect.Top;
      _Init_thread_footer(&::_TSS3);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      RightPadding = ActualScreenWidth / 2;
      if (ActualConsoleWidth / 2 < ActualScreenWidth / 2) {
        RightPadding = ActualConsoleWidth / 2;
      }
      if (RightPadding < 0x32) {
        RightPadding = 0x32;
      }
      _Init_thread_footer(&::_TSS4);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      BottomPadding = ActualScreenHeight / 2;
      if (ActualConsoleHeight / 2 < ActualScreenHeight / 2) {
        BottomPadding = ActualConsoleHeight / 2;
      }
      if (BottomPadding < 0x32) {
        BottomPadding = 0x32;
      }
      _Init_thread_footer(&::_TSS5);
    }
    if (local_3fd4 != -0x80000000) {
      iVar6 = local_3f58.VirtualDisplayRect.Left;
      if (local_3f58.VirtualDisplayRect.Left < local_3fd4) {
        iVar6 = local_3fd4;
      }
      local_3fd4 = local_3f58.VirtualDisplayRect.Right - RightPadding;
      if (iVar6 < local_3f58.VirtualDisplayRect.Right - RightPadding) {
        local_3fd4 = iVar6;
      }
    }
    if (local_3fd0[0] != -0x80000000) {
      iVar6 = local_3f58.VirtualDisplayRect.Top;
      if (local_3f58.VirtualDisplayRect.Top < local_3fd0[0]) {
        iVar6 = local_3fd0[0];
      }
      local_3fd0[0] = local_3f58.VirtualDisplayRect.Bottom - BottomPadding;
      if (iVar6 < local_3f58.VirtualDisplayRect.Bottom - BottomPadding) {
        local_3fd0[0] = iVar6;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
    pFVar1 = this->Window;
    pFVar9 = pFVar1;
    if (pFVar1 == (FConsoleWindow *)0x0) {
      pFVar9 = ::operator_new(0x360);
      if (pFVar9 != (FConsoleWindow *)0x0) {
        pFVar10 = FConsoleWindow::FConsoleWindow(pFVar9,this);
      }
      this->Window = pFVar10;
      pFVar9 = pFVar10;
    }
    pFVar9->ConsolePosX = local_3fd4;
    this->Window->ConsolePosY = local_3fd0[0];
    this->Window->ConsoleWidth = local_3fb8;
    this->Window->ConsoleHeight = local_3fb4;
    this->Window->ConsoleColor = local_3fb0;
    this->Window->ConsoleShowDateTime = local_3fac;
    iVar6 = local_3f98.Data.ArrayNum + -1;
    if (local_3f98.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->Window->ConsoleIncludeFilterStr,
               (wchar_t *)local_3f98.Data.AllocatorInstance.Data,iVar6);
    iVar6 = local_3f88.Data.ArrayNum + -1;
    if (local_3f88.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->Window->ConsoleExcludeFilterStr,
               (wchar_t *)local_3f88.Data.AllocatorInstance.Data,iVar6);
    iVar6 = local_3fa8.Data.ArrayNum + -1;
    if (local_3fa8.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->Window->ConsoleTitle,(wchar_t *)local_3fa8.Data.AllocatorInstance.Data,iVar6);
    this->Window->bConsoleExpanded = local_3fd8;
    this->Window->bConsoleShowVerbosity = local_3fd7[0];
    this->Window->bIsVisible = true;
    if (pFVar1 == (FConsoleWindow *)0x0) {
      pFVar10 = this->Window;
      pvVar11 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FConsoleWindow::StaticThreadProc,pFVar10,0
                             ,(LPDWORD)0x0);
      pFVar10->Thread = pvVar11;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_3f58.MonitorInfo.AllocatorInstance.Data,
               local_3f58.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_3f58.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_3f58.MonitorInfo.AllocatorInstance.Data);
    }
    if (local_3fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3fa8.Data.AllocatorInstance.Data);
    }
    FConfigCacheIni::~FConfigCacheIni(&local_3ed8);
    if (local_3fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3fc8.Data.AllocatorInstance.Data);
    }
    if (local_3f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f88.Data.AllocatorInstance.Data);
    }
    if (local_3f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f98.Data.AllocatorInstance.Data);
    }
  }
  else if (this->Window != (FConsoleWindow *)0x0) {
    SaveToINI(this);
    this->Window->bIsVisible = false;
  }
  return;
}

