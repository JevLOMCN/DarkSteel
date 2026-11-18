// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FModuleManifest @ 1419171b0

FModuleManifest * __thiscall FModuleManifest::FModuleManifest(FModuleManifest *this)

{
  (this->BuildId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildId).Data.ArrayNum = 0;
  (this->BuildId).Data.ArrayMax = 0;
  *(undefined8 *)&this->ModuleNameToFileName = 0;
  *(undefined8 *)&(this->ModuleNameToFileName).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleNameToFileName).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleNameToFileName).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleNameToFileName).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleNameToFileName).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleNameToFileName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleNameToFileName).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleNameToFileName).field_0x48 = 0;
  *(undefined8 *)&this->LibraryDependencies = 0;
  *(undefined8 *)&(this->LibraryDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->LibraryDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->LibraryDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->LibraryDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->LibraryDependencies).field_0x34 = 0;
  *(undefined4 *)&(this->LibraryDependencies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LibraryDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->LibraryDependencies).field_0x48 = 0;
  return this;
}

// GetFileName @ 141947280

FString * __cdecl
FModuleManifest::GetFileName(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  EBuildConfiguration EVar1;
  wchar_t *pwVar2;
  
  EVar1 = FApp::GetBuildConfiguration();
  if ((EVar1 != DebugGame) || (pwVar2 = L"ProjectDS-Win64-DebugGame.modules", !param_2)) {
    pwVar2 = L"ProjectDS.modules";
  }
  ::operator/(__return_storage_ptr__,param_1,pwVar2);
  return __return_storage_ptr__;
}

// TryRead @ 1419774a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141977eeb) */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl FModuleManifest::TryRead(FString *param_1,FModuleManifest *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  longlong lVar12;
  FString *pFVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_468 [32];
  FString *local_448;
  FString *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  FScriptContainerElement *local_418;
  FString local_410;
  FString local_400;
  FString *local_3f0;
  undefined8 local_3e8;
  FString local_3e0;
  undefined1 local_3d0 [16];
  undefined4 local_3c0;
  TStringView<wchar_t> local_3b8;
  FString *local_3a8;
  FString **local_3a0;
  FString local_398;
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [64];
  TStringBuilderBase<wchar_t> local_2e8;
  wchar_t local_2c8 [64];
  TStringBuilderBase<wchar_t> local_248;
  FString local_228 [8];
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [64];
  TStringBuilderBase<wchar_t> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8 [10];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_468;
  local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_400.Data.ArrayNum = 0;
  local_400.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_400,pwVar9,None,0);
  if (bVar4) {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_400.Data.ArrayNum != 0) {
      FVar10.Data = local_400.Data.AllocatorInstance.Data;
    }
    for (; (wVar1 = *(wchar_t *)FVar10.Data, wVar1 == L' ' ||
           (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
        FVar10.Data = FVar10.Data + 2) {
    }
    if (wVar1 == L'{') {
      do {
        do {
          FVar10.Data = FVar10.Data + 2;
          wVar1 = *(wchar_t *)FVar10.Data;
        } while (wVar1 == L' ');
      } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
      local_418 = FVar10.Data;
      if (wVar1 != L'}') {
        local_2e8.Base = local_2c8;
        local_2e8.CurPos = local_2c8;
        local_2e8.End = (wchar_t *)&local_248;
        local_2e8.bIsDynamic = false;
        local_2e8.bIsExternal = false;
        bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>((wchar_t **)&local_418,&local_2e8);
        pFVar15 = local_418;
        if (bVar4) {
          do {
            for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                   (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                pFVar15 = pFVar15 + 2) {
            }
            if (wVar1 != L':') break;
            do {
              do {
                wVar1 = *(wchar_t *)(pFVar15 + 2);
                pFVar15 = pFVar15 + 2;
              } while (wVar1 == L' ');
            } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
            local_418 = pFVar15;
            if (((int)((longlong)local_2e8.CurPos - (longlong)local_2e8.Base >> 1) == 7) &&
               (iVar6 = FGenericPlatformStricmp::Strnicmp(local_2e8.Base,L"BuildId",7), iVar6 == 0))
            {
              bVar4 = FSimpleParse::ParseString((wchar_t **)&local_418,&param_2->BuildId);
              pFVar16 = local_418;
              if (!bVar4) break;
            }
            else if (((int)((longlong)local_2e8.CurPos - (longlong)local_2e8.Base >> 1) == 7) &&
                    (iVar6 = FGenericPlatformStricmp::Strnicmp(local_2e8.Base,L"Modules",7),
                    iVar6 == 0)) {
              for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                     (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                  pFVar15 = pFVar15 + 2) {
              }
              if (wVar1 != L'{') break;
              do {
                do {
                  pFVar16 = pFVar15;
                  wVar1 = *(wchar_t *)(pFVar16 + 2);
                  local_418 = pFVar16 + 2;
                  pFVar15 = local_418;
                } while (wVar1 == L' ');
              } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
              if (wVar1 == L'}') {
                pFVar16 = pFVar16 + 4;
              }
              else {
LAB_141977730:
                local_1a8.Base = local_188;
                local_1a8.bIsDynamic = false;
                local_1a8.bIsExternal = false;
                local_1a8.CurPos = local_188;
                local_108.bIsDynamic = false;
                local_108.bIsExternal = false;
                local_1a8.End = (wchar_t *)&local_108;
                local_108.Base = (wchar_t *)local_e8;
                local_108.CurPos = (wchar_t *)local_e8;
                local_108.End = (wchar_t *)local_48;
                bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>
                                  ((wchar_t **)&local_418,&local_1a8);
                pFVar15 = local_418;
                if (!bVar4) {
LAB_1419780b6:
                  if (local_108.bIsDynamic != false) {
                    FMemory::Free(local_108.Base);
                  }
                  pwVar9 = local_1a8.Base;
                  cVar3 = local_1a8.bIsDynamic;
                  goto joined_r0x0001419780fa;
                }
                for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                       (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                    pFVar15 = pFVar15 + 2) {
                }
                if (wVar1 != L':') goto LAB_1419780b6;
                do {
                  do {
                    pFVar15 = pFVar15 + 2;
                    wVar1 = *(wchar_t *)pFVar15;
                  } while (wVar1 == L' ');
                } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
                local_418 = pFVar15;
                bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>
                                  ((wchar_t **)&local_418,&local_108);
                pFVar15 = local_418;
                if (!bVar4) goto LAB_1419780b6;
                for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                       (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                    pFVar15 = pFVar15 + 2) {
                }
                local_3d0._8_8_ = local_108.Base;
                local_3c0 = (undefined4)((longlong)local_108.CurPos - (longlong)local_108.Base >> 1)
                ;
                local_3b8.DataPtr = local_1a8.Base;
                local_3b8.Size = (int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1);
                FindOrAddHeterogeneous<FString,FString,TStringView<wchar_t>,TStringView<wchar_t>_>
                          (&param_2->ModuleNameToFileName,&local_3b8,
                           (TStringView<wchar_t> *)(local_3d0 + 8));
                if (*(wchar_t *)pFVar15 != L'}') {
                  if (*(wchar_t *)pFVar15 != L',') goto LAB_1419780b6;
                  do {
                    do {
                      wVar1 = *(wchar_t *)(pFVar15 + 2);
                      pFVar15 = pFVar15 + 2;
                    } while (wVar1 == L' ');
                  } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
                  local_418 = pFVar15;
                  if (local_108.bIsDynamic != false) {
                    FMemory::Free(local_108.Base);
                  }
                  if (local_1a8.bIsDynamic != false) {
                    FMemory::Free(local_1a8.Base);
                  }
                  goto LAB_141977730;
                }
                if (local_108.bIsDynamic != false) {
                  FMemory::Free(local_108.Base);
                }
                pwVar9 = local_1a8.Base;
                cVar3 = local_1a8.bIsDynamic;
joined_r0x00014197790e:
                pFVar16 = pFVar15 + 2;
                if (cVar3 != '\0') {
                  FMemory::Free(pwVar9);
                }
              }
            }
            else {
              if (((int)((longlong)local_2e8.CurPos - (longlong)local_2e8.Base >> 1) != 0x13) ||
                 (iVar6 = FGenericPlatformStricmp::Strnicmp
                                    (local_2e8.Base,L"LibraryDependencies",0x13), iVar6 != 0))
              break;
              for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                     (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                  pFVar15 = pFVar15 + 2) {
              }
              if (wVar1 != L'{') break;
              do {
                do {
                  pFVar16 = pFVar15;
                  wVar1 = *(wchar_t *)(pFVar16 + 2);
                  local_418 = pFVar16 + 2;
                  pFVar15 = local_418;
                } while (wVar1 == L' ');
              } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
              if (wVar1 != L'}') {
                while( true ) {
                  local_388.bIsDynamic = false;
                  local_388.bIsExternal = false;
                  local_388.End = (wchar_t *)&local_2e8;
                  local_388.Base = local_368;
                  local_388.CurPos = local_368;
                  bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>
                                    ((wchar_t **)&local_418,&local_388);
                  pFVar15 = local_418;
                  if (!bVar4) break;
                  for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                         (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                      pFVar15 = pFVar15 + 2) {
                  }
                  if (wVar1 != L':') break;
                  do {
                    do {
                      pFVar16 = pFVar15;
                      wVar1 = *(wchar_t *)(pFVar16 + 2);
                      pFVar15 = pFVar16 + 2;
                    } while (wVar1 == L' ');
                  } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
                  if (wVar1 != L'[') break;
                  for (local_418 = pFVar16 + 4;
                      (wVar1 = *(wchar_t *)local_418, wVar1 == L' ' ||
                      (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                      local_418 = local_418 + 2) {
                  }
                  local_3f0 = (FString *)0x0;
                  local_3e8 = 0;
                  if (local_388.End < (TStringBuilderBase<wchar_t> *)(local_388.CurPos + 1)) {
                    if (local_388.bIsExternal != false) {
                      local_440 = (FString *)
                                  ((longlong)local_388.End - (longlong)local_388.Base >> 1);
                      local_448 = (FString *)
                                  ((longlong)local_388.CurPos - (longlong)local_388.Base >> 1);
                      local_438 = 1;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("!bIsExternal",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                                         ,0x24,
                                         L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                    uVar11 = (longlong)local_388.End - (longlong)local_388.Base >> 1;
                    uVar11 = uVar11 >> 1 | uVar11;
                    uVar11 = uVar11 >> 2 | uVar11;
                    uVar11 = uVar11 >> 4 | uVar11;
                    uVar11 = uVar11 >> 8 | uVar11;
                    uVar8 = (uVar11 >> 0x10 | uVar11) + 1;
                    uVar11 = 0x20;
                    if (0x20 < uVar8) {
                      uVar11 = uVar8;
                    }
                    pwVar9 = FMemory::Malloc(uVar11 * 2,2);
                    lVar12 = (longlong)local_388.CurPos - (longlong)local_388.Base >> 1;
                    if (lVar12 != 0) {
                      memcpy(pwVar9,local_388.Base,lVar12 * 2);
                    }
                    if (local_388.bIsDynamic != false) {
                      FMemory::Free(local_388.Base);
                    }
                    local_388.CurPos = pwVar9 + lVar12;
                    local_388.End = pwVar9 + uVar11;
                    local_388.bIsDynamic = true;
                    local_388.Base = pwVar9;
                  }
                  *local_388.CurPos = L'\0';
                  ::FString::FString(&local_398,local_388.Base);
                  local_3a8 = &local_398;
                  local_3a0 = &local_3f0;
                  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&param_2->LibraryDependencies,
                             (TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>
                              *)local_3d0,(bool *)&local_3a8);
                  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_398.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FString,int>(local_3f0,(int)local_3e8);
                  pFVar13 = local_3f0;
                  if (local_3f0 == (FString *)0x0) goto LAB_141977be0;
LAB_141977bd6:
                  FMemory::Free(pFVar13);
LAB_141977be0:
                  local_248.Base = (wchar_t *)local_228;
                  local_248.bIsDynamic = false;
                  local_248.bIsExternal = false;
                  local_248.CurPos = (wchar_t *)local_228;
                  local_248.End = (wchar_t *)&local_1a8;
                  bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>
                                    ((wchar_t **)&local_418,&local_248);
                  if (!bVar4) {
LAB_1419780e1:
                    if (local_248.bIsDynamic != false) {
                      FMemory::Free(local_248.Base);
                    }
                    break;
                  }
                  for (; (wVar1 = *(wchar_t *)local_418, wVar1 == L' ' ||
                         (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                      local_418 = local_418 + 2) {
                  }
                  if (local_388.End < (TStringBuilderBase<wchar_t> *)(local_388.CurPos + 1)) {
                    if (local_388.bIsExternal != false) {
                      local_440 = (FString *)
                                  ((longlong)local_388.End - (longlong)local_388.Base >> 1);
                      local_448 = (FString *)
                                  ((longlong)local_388.CurPos - (longlong)local_388.Base >> 1);
                      local_438 = 1;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("!bIsExternal",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                                         ,0x24,
                                         L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                    uVar11 = (longlong)local_388.End - (longlong)local_388.Base >> 1;
                    uVar11 = uVar11 >> 1 | uVar11;
                    uVar11 = uVar11 >> 2 | uVar11;
                    uVar11 = uVar11 >> 4 | uVar11;
                    uVar11 = uVar11 >> 8 | uVar11;
                    uVar8 = (uVar11 >> 0x10 | uVar11) + 1;
                    uVar11 = 0x20;
                    if (0x20 < uVar8) {
                      uVar11 = uVar8;
                    }
                    pwVar9 = FMemory::Malloc(uVar11 * 2,2);
                    lVar12 = (longlong)local_388.CurPos - (longlong)local_388.Base >> 1;
                    if (lVar12 != 0) {
                      memcpy(pwVar9,local_388.Base,lVar12 * 2);
                    }
                    if (local_388.bIsDynamic != false) {
                      FMemory::Free(local_388.Base);
                    }
                    local_388.CurPos = pwVar9 + lVar12;
                    local_388.End = pwVar9 + uVar11;
                    local_388.bIsDynamic = true;
                    local_388.Base = pwVar9;
                  }
                  *local_388.CurPos = L'\0';
                  ::FString::FString(&local_3e0,local_388.Base);
                  iVar6 = local_3e0.Data.ArrayNum + -1;
                  FVar10.Data = local_3e0.Data.AllocatorInstance.Data;
                  if (local_3e0.Data.ArrayNum == 0) {
                    iVar6 = 0;
                    FVar10.Data = (FScriptContainerElement *)L"";
                  }
                  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
                  iVar6 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          ::FindIndexByHash<FString>
                                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                      *)&param_2->LibraryDependencies,uVar7,&local_3e0);
                  lVar12 = 0;
                  if (((iVar6 == -1) ||
                      (lVar12 = *(longlong *)&param_2->LibraryDependencies + (longlong)iVar6 * 0x28,
                      lVar12 == 0)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Pair != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                         ,0x288,L""), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    uVar5 = (*pcVar2)();
                    return (bool)uVar5;
                  }
                  if (local_248.End <
                      (TStringBuilderBase<wchar_t> *)
                      ((longlong)
                       &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_248.CurPos)->
                        AllocatorInstance).Data + 2U)) {
                    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
                  }
                  *(undefined2 *)
                   &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_248.CurPos)->
                    AllocatorInstance).Data = 0;
                  ::FString::FString(&local_410,local_248.Base);
                  pFVar13 = *(FString **)(lVar12 + 0x10);
                  if ((pFVar13 <= &local_410) && (&local_410 < pFVar13 + *(int *)(lVar12 + 0x1c))) {
                    local_430 = (longlong)*(int *)(lVar12 + 0x18);
                    local_428 = 0x10;
                    local_448 = &local_410;
                    local_440 = pFVar13;
                    local_438 = (longlong)*(int *)(lVar12 + 0x1c);
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      uVar5 = (*pcVar2)();
                      return (bool)uVar5;
                    }
                  }
                  iVar6 = *(int *)(lVar12 + 0x18);
                  if (iVar6 == *(int *)(lVar12 + 0x1c)) {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,(ForAnyElementType *)(lVar12 + 0x10),
                                       (int *)(lVar12 + 0x1c));
                  }
                  *(int *)(lVar12 + 0x18) = iVar6 + 1;
                  puVar14 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar12 + 0x10));
                  *puVar14 = 0;
                  *puVar14 = local_410.Data.AllocatorInstance.Data;
                  *(int *)(puVar14 + 1) = local_410.Data.ArrayNum;
                  *(int *)((longlong)puVar14 + 0xc) = local_410.Data.ArrayMax;
                  local_410.Data.ArrayNum = 0;
                  local_410.Data.ArrayMax = 0;
                  local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  pFVar15 = local_418;
                  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                    pFVar15 = local_418;
                  }
                  for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                         (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                      pFVar15 = pFVar15 + 2) {
                  }
                  if (wVar1 != L']') {
                    if (wVar1 != L',') goto LAB_1419780e1;
                    do {
                      do {
                        wVar1 = *(wchar_t *)(pFVar15 + 2);
                        pFVar15 = pFVar15 + 2;
                      } while (wVar1 == L' ');
                    } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
                    pFVar13 = (FString *)local_248.Base;
                    local_418 = pFVar15;
                    if (local_248.bIsDynamic != false) goto LAB_141977bd6;
                    goto LAB_141977be0;
                  }
                  pFVar15 = pFVar15 + 2;
                  if (local_248.bIsDynamic != false) {
                    FMemory::Free(local_248.Base);
                  }
                  for (; (wVar1 = *(wchar_t *)pFVar15, wVar1 == L' ' ||
                         (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                      pFVar15 = pFVar15 + 2) {
                  }
                  pwVar9 = local_388.Base;
                  cVar3 = local_388.bIsDynamic;
                  if (wVar1 == L'}') goto joined_r0x00014197790e;
                  if (wVar1 != L',') break;
                  do {
                    do {
                      wVar1 = *(wchar_t *)(pFVar15 + 2);
                      pFVar15 = pFVar15 + 2;
                    } while (wVar1 == L' ');
                  } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
                  local_418 = pFVar15;
                  if (local_388.bIsDynamic != false) {
                    FMemory::Free(local_388.Base);
                  }
                }
                pwVar9 = local_388.Base;
                cVar3 = local_388.bIsDynamic;
joined_r0x0001419780fa:
                if (cVar3 != '\0') {
                  FMemory::Free(pwVar9);
                }
                break;
              }
              pFVar16 = pFVar16 + 4;
            }
            for (; (wVar1 = *(wchar_t *)pFVar16, wVar1 == L' ' ||
                   (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))));
                pFVar16 = pFVar16 + 2) {
            }
            if (wVar1 == L'}') {
              bVar4 = true;
              goto LAB_141978107;
            }
            if (wVar1 != L',') break;
            do {
              do {
                wVar1 = *(wchar_t *)(pFVar16 + 2);
                pFVar16 = pFVar16 + 2;
              } while (wVar1 == L' ');
            } while (((wVar1 + L'\xfff7' & 0xfffaU) == 0) && (wVar1 != L'\x0e'));
            local_418 = pFVar16;
            if (local_2e8.bIsDynamic != false) {
              FMemory::Free(local_2e8.Base);
            }
            local_2e8.Base = local_2c8;
            local_2e8.bIsDynamic = false;
            local_2e8.bIsExternal = false;
            local_2e8.CurPos = local_2c8;
            local_2e8.End = (wchar_t *)&local_248;
            bVar4 = SimpleParseString<TStringBuilderBase<wchar_t>_>
                              ((wchar_t **)&local_418,&local_2e8);
            pFVar15 = local_418;
          } while (bVar4);
        }
        bVar4 = false;
LAB_141978107:
        if (local_2e8.bIsDynamic != false) {
          FMemory::Free(local_2e8.Base);
        }
        goto LAB_14197813d;
      }
    }
  }
  bVar4 = false;
LAB_14197813d:
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

