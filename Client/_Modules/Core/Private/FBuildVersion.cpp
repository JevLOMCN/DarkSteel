// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FBuildVersion @ 1419152b0

FBuildVersion * __thiscall FBuildVersion::FBuildVersion(FBuildVersion *this)

{
  this->MajorVersion = 0;
  this->MinorVersion = 0;
  this->PatchVersion = 0;
  this->Changelist = 0;
  this->CompatibleChangelist = 0;
  this->IsLicenseeVersion = 0;
  this->IsPromotedBuild = 0;
  (this->BranchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchName).Data.ArrayNum = 0;
  (this->BranchName).Data.ArrayMax = 0;
  (this->BuildId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildId).Data.ArrayNum = 0;
  (this->BuildId).Data.ArrayMax = 0;
  (this->BuildVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildVersion).Data.ArrayNum = 0;
  (this->BuildVersion).Data.ArrayMax = 0;
  (this->BuildUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildUrl).Data.ArrayNum = 0;
  (this->BuildUrl).Data.ArrayMax = 0;
  return this;
}

// GetCompatibleEngineVersion @ 141946180

FEngineVersion * __thiscall
FBuildVersion::GetCompatibleEngineVersion
          (FBuildVersion *this,FEngineVersion *__return_storage_ptr__)

{
  uint uVar1;
  
  if ((this->Changelist == 0) ||
     (uVar1 = this->CompatibleChangelist, this->CompatibleChangelist == 0)) {
    uVar1 = this->Changelist;
  }
  if (this->IsLicenseeVersion != 0) {
    uVar1 = FEngineVersionBase::EncodeLicenseeChangelist(uVar1);
  }
  FEngineVersion::FEngineVersion
            (__return_storage_ptr__,(ushort)this->MajorVersion,(ushort)this->MinorVersion,
             (ushort)this->PatchVersion,uVar1,&this->BranchName);
  return __return_storage_ptr__;
}

// GetDefaultFileName @ 1419465d0

FString * __cdecl FBuildVersion::GetDefaultFileName(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString((FString *)&local_18,pwVar1);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,&local_18,0x15 - (uint)(local_18.ArrayNum != 0));
  ::FString::PathAppend(__return_storage_ptr__,L"Build/Build.version",0x13);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEffectiveCompatibleChangelist @ 141946890

int __thiscall FBuildVersion::GetEffectiveCompatibleChangelist(FBuildVersion *this)

{
  int iVar1;
  
  if ((this->Changelist == 0) ||
     (iVar1 = this->CompatibleChangelist, this->CompatibleChangelist == 0)) {
    iVar1 = this->Changelist;
  }
  return iVar1;
}

// GetEngineVersion @ 141946bb0

FEngineVersion * __thiscall
FBuildVersion::GetEngineVersion(FBuildVersion *this,FEngineVersion *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = this->Changelist;
  if (this->IsLicenseeVersion != 0) {
    uVar1 = FEngineVersionBase::EncodeLicenseeChangelist(uVar1);
  }
  FEngineVersion::FEngineVersion
            (__return_storage_ptr__,(ushort)this->MajorVersion,(ushort)this->MinorVersion,
             (ushort)this->PatchVersion,uVar1,&this->BranchName);
  return __return_storage_ptr__;
}

// GetFileNameForCurrentExecutable @ 1419472e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FBuildVersion::GetFileNameForCurrentExecutable(FString *__return_storage_ptr__)

{
  bool bVar1;
  EBuildConfiguration EVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar4 = FWindowsPlatformProcess::ExecutableName(true);
  ::FString::FString(&local_38,pwVar4);
  iVar10 = 1;
  bVar1 = ::FString::EndsWith(&local_38,L"-Cmd",4,IgnoreCase);
  iVar9 = 0;
  iVar12 = 0;
  if (bVar1) {
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = iVar12;
    }
    if (iVar3 + -4 < iVar3) {
      iVar3 = iVar3 + -4;
    }
    iVar8 = iVar12;
    if (0 < iVar3) {
      iVar8 = iVar3;
    }
    ::FString::RemoveAt(&local_38,iVar8,4,No);
  }
  EVar2 = FApp::GetBuildConfiguration();
  if (EVar2 == DebugGame) {
    do {
      pFVar5 = local_38.Data.AllocatorInstance.Data + (longlong)local_38.Data.ArrayNum * 2;
      do {
        if (pFVar5 == local_38.Data.AllocatorInstance.Data) goto LAB_1419473e4;
        pFVar5 = pFVar5 + -2;
      } while (*(wchar_t *)pFVar5 != L'-');
      iVar3 = (int)((longlong)pFVar5 - (longlong)local_38.Data.AllocatorInstance.Data >> 1);
      if (iVar3 == -1) break;
      iVar8 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      iVar7 = iVar8;
      if (iVar3 < iVar8) {
        iVar7 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar7) {
        iVar3 = iVar7;
      }
      ::FString::RemoveAt(&local_38,iVar3,iVar8 - iVar3,No);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
  }
LAB_1419473e4:
  pFVar6 = FWindowsPlatformProcess::GetModulesDirectory(&local_18);
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = iVar12;
  }
  if (((pFVar6->Data).ArrayNum == 0) && (iVar9 != -1)) {
    iVar10 = 2;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = (pFVar6->Data).ArrayNum;
  pFVar5 = (pFVar6->Data).AllocatorInstance.Data;
  local_28.Data.ArrayNum = iVar12;
  if ((iVar12 == 0) && (iVar9 + iVar10 == 0)) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    uVar11 = iVar12 + iVar9 + iVar10;
    if ((int)uVar11 < iVar12) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,(ForAnyElementType *)&local_28,iVar12,&local_28.Data.ArrayMax);
    if (iVar12 != 0) {
      memcpy(local_28.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar12 * 2);
    }
  }
  ::FString::PathAppend(&local_28,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar9);
  ::FString::ConcatFC(__return_storage_ptr__,&local_28,L".version");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryRead @ 141977430

bool __cdecl FBuildVersion::TryRead(FString *param_1,FBuildVersion *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToString(&local_18,pwVar2,None,0);
  if (bVar1) {
    bVar1 = TryReadFromString(&local_18,param_2);
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// TryReadFromString @ 141978190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FBuildVersion::TryReadFromString(FString *param_1,FBuildVersion *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *local_res8;
  FString local_38;
  
  if ((param_1->Data).ArrayNum == 0) {
    local_res8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_res8 = (param_1->Data).AllocatorInstance.Data;
  }
  for (; (uVar1 = *(ushort *)local_res8, uVar1 == 0x20 ||
         (((uVar1 - 9 & 0xfffa) == 0 && (uVar1 != 0xe)))); local_res8 = local_res8 + 2) {
  }
  if (uVar1 == 0x7b) {
    do {
      do {
        local_res8 = local_res8 + 2;
        uVar1 = *(ushort *)local_res8;
      } while (uVar1 == 0x20);
    } while (((uVar1 - 9 & 0xfffa) == 0) && (uVar1 != 0xe));
    if (uVar1 != 0x7d) {
      bVar9 = false;
      bVar2 = false;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar3 = false;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      bVar4 = FSimpleParse::ParseString((wchar_t **)&local_res8,&local_38);
      pFVar10 = local_res8;
      if (bVar4) {
        do {
          for (; (uVar1 = *(ushort *)pFVar10, uVar1 == 0x20 ||
                 (((uVar1 - 9 & 0xfffa) == 0 && (uVar1 != 0xe)))); pFVar10 = pFVar10 + 2) {
          }
          if (uVar1 != 0x3a) break;
          do {
            do {
              pFVar6 = pFVar10;
              uVar1 = *(ushort *)(pFVar6 + 2);
              pFVar10 = pFVar6 + 2;
            } while (uVar1 == 0x20);
          } while (((uVar1 - 9 & 0xfffa) == 0) && (uVar1 != 0xe));
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar7.Data = local_38.Data.AllocatorInstance.Data;
          }
          local_res8 = pFVar10;
          iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"MajorVersion");
          if (iVar5 == 0) {
            if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
            pFVar6 = pFVar6 + 4;
            iVar5 = *(ushort *)pFVar10 - 0x30;
            uVar1 = *(ushort *)pFVar6;
            while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
              pFVar6 = pFVar6 + 2;
              iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
              uVar1 = *(ushort *)pFVar6;
            }
            param_2->MajorVersion = iVar5;
            bVar9 = true;
          }
          else {
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_38.Data.ArrayNum != 0) {
              FVar7.Data = local_38.Data.AllocatorInstance.Data;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"MinorVersion");
            if (iVar5 == 0) {
              if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
              pFVar6 = pFVar6 + 4;
              iVar5 = *(ushort *)pFVar10 - 0x30;
              uVar1 = *(ushort *)pFVar6;
              while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                pFVar6 = pFVar6 + 2;
                iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                uVar1 = *(ushort *)pFVar6;
              }
              param_2->MinorVersion = iVar5;
              bVar2 = true;
            }
            else {
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_38.Data.ArrayNum != 0) {
                FVar7.Data = local_38.Data.AllocatorInstance.Data;
              }
              iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"PatchVersion");
              if (iVar5 == 0) {
                if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
                pFVar6 = pFVar6 + 4;
                iVar5 = *(ushort *)pFVar10 - 0x30;
                uVar1 = *(ushort *)pFVar6;
                while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                  pFVar6 = pFVar6 + 2;
                  iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                  uVar1 = *(ushort *)pFVar6;
                }
                param_2->PatchVersion = iVar5;
                bVar3 = true;
              }
              else {
                FVar7.Data = (FScriptContainerElement *)L"";
                if (local_38.Data.ArrayNum != 0) {
                  FVar7.Data = local_38.Data.AllocatorInstance.Data;
                }
                iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"Changelist");
                if (iVar5 == 0) {
                  if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
                  pFVar6 = pFVar6 + 4;
                  iVar5 = *(ushort *)pFVar10 - 0x30;
                  uVar1 = *(ushort *)pFVar6;
                  while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                    pFVar6 = pFVar6 + 2;
                    iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                    uVar1 = *(ushort *)pFVar6;
                  }
                  param_2->Changelist = iVar5;
                }
                else {
                  FVar7.Data = (FScriptContainerElement *)L"";
                  if (local_38.Data.ArrayNum != 0) {
                    FVar7.Data = local_38.Data.AllocatorInstance.Data;
                  }
                  iVar5 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)FVar7.Data,L"CompatibleChangelist");
                  if (iVar5 == 0) {
                    if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
                    pFVar6 = pFVar6 + 4;
                    iVar5 = *(ushort *)pFVar10 - 0x30;
                    uVar1 = *(ushort *)pFVar6;
                    while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                      pFVar6 = pFVar6 + 2;
                      iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                      uVar1 = *(ushort *)pFVar6;
                    }
                    param_2->CompatibleChangelist = iVar5;
                  }
                  else {
                    FVar7.Data = (FScriptContainerElement *)L"";
                    if (local_38.Data.ArrayNum != 0) {
                      FVar7.Data = local_38.Data.AllocatorInstance.Data;
                    }
                    iVar5 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)FVar7.Data,L"IsLicenseeVersion");
                    if (iVar5 == 0) {
                      if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
                      pFVar6 = pFVar6 + 4;
                      iVar5 = *(ushort *)pFVar10 - 0x30;
                      uVar1 = *(ushort *)pFVar6;
                      while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                        pFVar6 = pFVar6 + 2;
                        iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                        uVar1 = *(ushort *)pFVar6;
                      }
                      param_2->IsLicenseeVersion = iVar5;
                    }
                    else {
                      FVar7.Data = (FScriptContainerElement *)L"";
                      if (local_38.Data.ArrayNum != 0) {
                        FVar7.Data = local_38.Data.AllocatorInstance.Data;
                      }
                      iVar5 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)FVar7.Data,L"IsPromotedBuild");
                      if (iVar5 == 0) {
                        if (9 < (ushort)(*(ushort *)pFVar10 - 0x30)) break;
                        pFVar6 = pFVar6 + 4;
                        iVar5 = *(ushort *)pFVar10 - 0x30;
                        uVar1 = *(ushort *)pFVar6;
                        while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
                          pFVar6 = pFVar6 + 2;
                          iVar5 = (uint)uVar1 + (iVar5 * 5 + -0x18) * 2;
                          uVar1 = *(ushort *)pFVar6;
                        }
                        param_2->IsPromotedBuild = iVar5;
                      }
                      else {
                        FVar7.Data = (FScriptContainerElement *)L"";
                        if (local_38.Data.ArrayNum != 0) {
                          FVar7.Data = local_38.Data.AllocatorInstance.Data;
                        }
                        iVar5 = FGenericPlatformStricmp::Stricmp
                                          ((wchar_t *)FVar7.Data,L"BranchName");
                        if (iVar5 == 0) {
                          pFVar8 = &param_2->BranchName;
                        }
                        else {
                          FVar7.Data = (FScriptContainerElement *)L"";
                          if (local_38.Data.ArrayNum != 0) {
                            FVar7.Data = local_38.Data.AllocatorInstance.Data;
                          }
                          iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"BuildId")
                          ;
                          if (iVar5 == 0) {
                            pFVar8 = &param_2->BuildId;
                          }
                          else {
                            FVar7.Data = (FScriptContainerElement *)L"";
                            if (local_38.Data.ArrayNum != 0) {
                              FVar7.Data = local_38.Data.AllocatorInstance.Data;
                            }
                            iVar5 = FGenericPlatformStricmp::Stricmp
                                              ((wchar_t *)FVar7.Data,L"BuildVersion");
                            if (iVar5 == 0) {
                              pFVar8 = &param_2->BuildVersion;
                            }
                            else {
                              FVar7.Data = (FScriptContainerElement *)L"";
                              if (local_38.Data.ArrayNum != 0) {
                                FVar7.Data = local_38.Data.AllocatorInstance.Data;
                              }
                              iVar5 = FGenericPlatformStricmp::Stricmp
                                                ((wchar_t *)FVar7.Data,L"BuildURL");
                              if (iVar5 != 0) {
                                if (2 < (byte)LogCore._0_1_) {
                                  UE::Logging::Private::BasicLog<3>
                                            (&::LOG_Static,(FLogCategoryBase *)&LogCore);
                                }
                                break;
                              }
                              pFVar8 = &param_2->BuildUrl;
                            }
                          }
                        }
                        bVar4 = FSimpleParse::ParseString((wchar_t **)&local_res8,pFVar8);
                        pFVar6 = local_res8;
                        if (!bVar4) break;
                      }
                    }
                  }
                }
              }
            }
          }
          for (; (uVar1 = *(ushort *)pFVar6, uVar1 == 0x20 ||
                 (((uVar1 - 9 & 0xfffa) == 0 && (uVar1 != 0xe)))); pFVar6 = pFVar6 + 2) {
          }
          if (uVar1 == 0x7d) {
            if (((bVar9) && (bVar2)) && (bVar3)) {
              bVar9 = true;
              goto LAB_1419786e0;
            }
            break;
          }
          if (uVar1 != 0x2c) break;
          do {
            do {
              pFVar6 = pFVar6 + 2;
              uVar1 = *(ushort *)pFVar6;
            } while (uVar1 == 0x20);
          } while (((uVar1 - 9 & 0xfffa) == 0) && (uVar1 != 0xe));
          local_res8 = pFVar6;
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          bVar4 = FSimpleParse::ParseString((wchar_t **)&local_res8,&local_38);
          pFVar10 = local_res8;
        } while (bVar4);
      }
      bVar9 = false;
LAB_1419786e0:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return bVar9;
    }
  }
  return false;
}

