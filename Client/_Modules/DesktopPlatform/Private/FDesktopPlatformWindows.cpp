// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 19

// operator() @ 142d1d1d0

void __thiscall
`FDesktopPlatformWindows::FileDialogShared'::__l31::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  uint *puVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  IFileManager *pIVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  void *local_18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_1) &&
     (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)&pFVar2[1].Data;
  puVar1 = (uint *)((longlong)&pFVar2[1].Data + 4);
  if (uVar5 == *puVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,(int *)puVar1);
  }
  *(uint *)&pFVar2[1].Data = uVar5 + 1;
  ::FString::FString((FString *)(pFVar2->Data + (longlong)(int)uVar5 * 0x10),param_1);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pFVar2[1].Data) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = pFVar2->Data + (longlong)(int)uVar5 * 0x10;
  pIVar7 = IFileManager::Get();
  if (*(int *)(pFVar9 + 8) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)pFVar9;
  }
  pFVar8 = (FScriptContainerElement *)
           (**(code **)((longlong)*pIVar7 + 0xf8))(pIVar7,local_18,pwVar10);
  if (pFVar9 != pFVar8) {
    if (*(void **)pFVar9 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar9);
    }
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(pFVar8 + 8);
    *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(pFVar8 + 0xc);
    *(undefined8 *)(pFVar8 + 8) = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  FPaths::NormalizeFilename((FString *)pFVar9);
  return;
}

// EnumerateEngineInstallations @ 142d1ee60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d1f236) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDesktopPlatformWindows::EnumerateEngineInstallations
          (FDesktopPlatformWindows *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  code *pcVar1;
  char cVar2;
  LSTATUS LVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  wchar_t *lpValueName;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  DWORD dwIndex;
  bool bVar10;
  undefined1 auStackY_538 [32];
  ForAnyElementType local_4e8;
  undefined8 local_4e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4d8;
  undefined1 local_4c8 [8];
  FString local_4c0;
  DWORD local_4b0 [2];
  FString local_4a8;
  DWORD local_498;
  DWORD local_494;
  HKEY local_490;
  TPairInitializer<FString_&&,FString_const_&> local_488;
  FString *local_478;
  FString local_470;
  WCHAR local_458 [255];
  short sStack_25a;
  undefined1 local_258 [528];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  (**(code **)(*(longlong *)this + 0x50))();
  LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,InstallationsSubKey,0,0xf003f,&local_490);
  if (LVar3 == 0) {
    dwIndex = 0;
    local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d8.ArrayNum = 0;
    local_4d8.ArrayMax = 0;
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)param_1,&local_4d8);
    local_4e8.Data = (FScriptContainerElement *)0x0;
    local_4e0 = 0;
LAB_142d1ef10:
    while( true ) {
      local_498 = 0;
      local_494 = 0x100;
      local_4b0[0] = 0x208;
      LVar3 = RegEnumValueW(local_490,dwIndex,local_458,&local_494,(LPDWORD)0x0,&local_498,local_258
                            ,local_4b0);
      if (LVar3 != 0) break;
      uVar9 = local_4b0[0] >> 1;
      if ((uVar9 != 0) && ((&sStack_25a)[uVar9] == 0)) {
        uVar9 = uVar9 - 1;
      }
      ::FString::ConstructFromPtrSize(&local_4c0,(wchar_t *)local_258,uVar9);
      FPaths::NormalizeDirectoryName(&local_4c0);
      FPaths::CollapseRelativeDirectories(&local_4c0,false);
      cVar2 = (**(code **)(*(longlong *)this + 0xc0))(this,&local_4c0);
      if (cVar2 == '\0') {
LAB_142d1f157:
        ::FString::FString(&local_4a8,local_458);
        if (((local_4e8.Data <= (FScriptContainerElement *)&local_4a8) &&
            ((FScriptContainerElement *)&local_4a8 <
             local_4e8.Data + (longlong)local_4e0._4_4_ * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_4e0;
        if ((int)local_4e0 == local_4e0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_4e8,(int *)((longlong)&local_4e0 + 4));
        }
        local_4e0 = CONCAT44(local_4e0._4_4_,iVar4 + 1);
        pFVar8 = local_4e8.Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(FScriptContainerElement **)pFVar8 = local_4a8.Data.AllocatorInstance.Data;
        local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar8 + 8) = local_4a8.Data.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_4a8.Data.ArrayMax;
        local_4a8.Data.ArrayNum = 0;
        local_4a8.Data.ArrayMax = 0;
      }
      else {
        pFVar8 = local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10;
        uVar6 = local_4c0.Data._8_8_;
        for (FVar7.Data = local_4d8.AllocatorInstance.Data; FVar7.Data != pFVar8;
            FVar7.Data = FVar7.Data + 0x10) {
          iVar4 = *(int *)(FVar7.Data + 8);
          if (iVar4 == (int)uVar6) {
            if (iVar4 < 2) goto LAB_142d1f157;
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar7.Data,
                               (wchar_t *)local_4c0.Data.AllocatorInstance.Data);
            bVar10 = iVar4 == 0;
            uVar6 = local_4c0.Data._8_8_;
          }
          else {
            bVar10 = iVar4 + (int)uVar6 == 1;
          }
          if (bVar10) goto LAB_142d1f157;
        }
        ::FString::FString(&local_470,local_458);
        local_488.Value = &local_470;
        local_478 = &local_4c0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)param_1,&local_488,(bool *)&local_488.Value);
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        if (((local_4d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4c0) &&
            ((FScriptContainerElement *)&local_4c0 <
             local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = local_4d8.ArrayNum;
        if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
        }
        FVar7.Data = local_4c0.Data.AllocatorInstance.Data;
        pFVar8 = local_4d8.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        local_4d8.ArrayNum = iVar4 + 1;
        *(FScriptContainerElement **)pFVar8 = (FScriptContainerElement *)0x0;
        iVar4 = local_4c0.Data.ArrayNum;
        *(int *)(pFVar8 + 8) = iVar4;
        if (iVar4 == 0) {
          *(int *)(pFVar8 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar4,0,(ForAnyElementType *)pFVar8,iVar4,(int *)(pFVar8 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar8,FVar7.Data,(longlong)iVar4 * 2);
        }
      }
      if (local_4c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_142d1f259;
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
      dwIndex = dwIndex + 1;
    }
    if (LVar3 != 0x103) {
LAB_142d1f259:
      dwIndex = dwIndex + 1;
      goto LAB_142d1ef10;
    }
    iVar4 = (int)local_4e0;
    uVar5 = (ulonglong)(int)local_4e0;
    pFVar8 = local_4e8.Data + uVar5 * 0x10;
    FVar7.Data = local_4e8.Data;
    while( true ) {
      if ((int)uVar5 != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4c8);
      }
      if (FVar7.Data == pFVar8) break;
      if (*(int *)(FVar7.Data + 8) == 0) {
        lpValueName = L"";
      }
      else {
        lpValueName = *(wchar_t **)FVar7.Data;
      }
      RegDeleteValueW(local_490,lpValueName);
      uVar5 = local_4e0 & 0xffffffff;
      FVar7.Data = FVar7.Data + 0x10;
    }
    RegCloseKey(local_490);
    DestructItems<FString,int>((FString *)local_4e8.Data,(int)local_4e0);
    if (local_4e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data);
    }
    DestructItems<FString,int>((FString *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum);
    if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.AllocatorInstance.Data);
    }
  }
  return;
}

// FileDialogShared @ 142d215a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FDesktopPlatformWindows::FileDialogShared
          (FDesktopPlatformWindows *this,bool param_1,void *param_2,FString *param_3,
          FString *param_4,FString *param_5,FString *param_6,uint param_7,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_8,int *param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  HRESULT HVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  _GUID *rclsid;
  longlong *plVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  _GUID *riid;
  ulonglong uVar16;
  bool local_res10;
  longlong *local_148;
  longlong *local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  uint local_128 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  uint local_110 [2];
  longlong *local_108;
  longlong *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  longlong *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong uVar12;
  
  riid = &IID_IFileOpenDialog;
  local_148 = (longlong *)0x0;
  local_res10 = false;
  rclsid = &CLSID_FileOpenDialog;
  if (param_1) {
    riid = &IID_IFileSaveDialog;
    rclsid = &CLSID_FileSaveDialog;
  }
  HVar4 = CoCreateInstance((IID *)rclsid,(LPUNKNOWN)0x0,1,(IID *)riid,&local_148);
  bVar2 = false;
  if (-1 < HVar4) {
    if (param_1) {
      if (1 < (param_5->Data).ArrayNum) {
        if ((local_148 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        plVar9 = local_148;
        pcVar1 = *(code **)(*local_148 + 0x78);
        pFVar7 = FPaths::GetCleanFilename(&local_68,param_5);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        (*pcVar1)(plVar9,pwVar8);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((param_7 & 1) != 0) {
      local_110[0] = 0;
      if ((local_148 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)(*local_148 + 0x50))(local_148,local_110);
      if ((local_148 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)(*local_148 + 0x48))(local_148,local_110[0] | 0x200);
    }
    if ((local_148 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((param_3->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    (**(code **)(*local_148 + 0x88))(local_148,pwVar8);
    if (1 < (param_4->Data).ArrayNum) {
      FPaths::ConvertRelativePathToFull(&local_98,param_4);
      ::FString::ReplaceInline(&local_98,L"/",L"\\",CaseSensitive);
      local_b8 = (longlong *)0x0;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      HVar4 = SHCreateItemFromParsingName
                        ((PCWSTR)FVar15.Data,(IBindCtx *)0x0,
                         (IID *)&_GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,&local_b8);
      if (-1 < HVar4) {
        if ((local_148 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (**(code **)(*local_148 + 0x60))(local_148,local_b8);
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = 0;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    local_138.Data = (FScriptContainerElement *)0x0;
    local_130 = 0;
    ::FString::ParseIntoArray(param_6,&local_120,L"|",true);
    uVar10 = 0;
    if ((local_120._8_8_ & 1) == 0) {
      uVar5 = local_120.ArrayNum / 2;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if ((int)local_130._4_4_ < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar5,&local_138,(uint)local_130,(int *)((longlong)&local_130 + 4));
      }
      uVar14 = uVar12;
      uVar16 = uVar12;
      if (0 < local_120.ArrayNum) {
        do {
          uVar5 = (uint)local_130;
          if ((uint)local_130 == local_130._4_4_) {
            uVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_138,(int *)((longlong)&local_130 + 4));
          }
          local_130 = CONCAT44(local_130._4_4_,uVar5 + 1);
          uVar13 = uVar10;
          if ((int)uVar5 < (int)(uVar5 + 1)) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar13 = (uint)uVar14;
          pFVar11 = local_138.Data + (longlong)(int)uVar5 * 0x10;
          uVar5 = uVar10;
          if ((int)uVar13 < local_120.ArrayNum) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (*(int *)(local_120.AllocatorInstance.Data + uVar16 + 8) == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = *(wchar_t **)(local_120.AllocatorInstance.Data + uVar16);
          }
          *(wchar_t **)pFVar11 = pwVar8;
          uVar5 = uVar10;
          if ((int)(uVar13 + 1) < local_120.ArrayNum) {
            uVar5 = ~(uVar13 + 1) >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (*(int *)(local_120.AllocatorInstance.Data + uVar16 + 0x18) == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = *(wchar_t **)(local_120.AllocatorInstance.Data + uVar16 + 0x10);
          }
          *(wchar_t **)(pFVar11 + 8) = pwVar8;
          uVar14 = (ulonglong)(uVar13 + 2);
          uVar16 = uVar16 + 0x20;
        } while ((int)(uVar13 + 2) < local_120.ArrayNum);
      }
    }
    if ((local_148 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*local_148 + 0x20))(local_148,local_130 & 0xffffffff,local_138.Data);
    if ((local_148 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar6 = (**(code **)(*local_148 + 0x18))(local_148,param_2);
    if (-1 < iVar6) {
      *param_9 = 0;
      if ((local_148 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = (**(code **)(*local_148 + 0x30))(local_148,param_9);
      if (-1 < iVar6) {
        *param_9 = *param_9 + -1;
      }
      local_a0 = param_8;
      if (param_1) {
        local_108 = (longlong *)0x0;
        if ((local_148 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar6 = (**(code **)(*local_148 + 0xa0))(local_148,&local_108);
        plVar9 = local_108;
        if (-1 < iVar6) {
          local_b0 = (wchar_t *)0x0;
          if ((local_108 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar6 = (**(code **)(*local_108 + 0x28))(local_108,0x80058000,&local_b0);
          plVar9 = local_108;
          if (-1 < iVar6) {
            local_res10 = true;
            ::FString::FString(&local_e8,local_b0);
            uVar5 = *param_9;
            if ((-1 < (int)uVar5) && ((int)uVar5 < (int)(uint)local_130)) {
              uVar13 = uVar10;
              if ((int)uVar5 < (int)(uint)local_130) {
                uVar13 = ~uVar5 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              ::FString::FString(&local_88,
                                 *(wchar_t **)(local_138.Data + (longlong)(int)uVar5 * 0x10 + 8));
              local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c8.ArrayNum = 0;
              local_c8.ArrayMax = 0;
              ::FString::ParseIntoArray(&local_88,&local_c8,L";",true);
              if ((local_c8.ArrayNum < 1) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              ::FString::FString(&local_d8,(FString *)local_c8.AllocatorInstance.Data);
              FVar15.Data = (FScriptContainerElement *)L"";
              if (local_d8.Data.ArrayNum != 0) {
                FVar15.Data = local_d8.Data.AllocatorInstance.Data;
              }
              iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"*.*");
              if (iVar6 == 0) {
                ::FString::Reset(&local_d8,0);
              }
              else {
                for (FVar15.Data = local_d8.Data.AllocatorInstance.Data;
                    FVar15.Data !=
                    local_d8.Data.AllocatorInstance.Data + (longlong)local_d8.Data.ArrayNum * 2;
                    FVar15.Data = FVar15.Data + 2) {
                  if (*(wchar_t *)FVar15.Data == L'*') {
                    iVar6 = (int)((longlong)FVar15.Data -
                                  (longlong)local_d8.Data.AllocatorInstance.Data >> 1);
                    if (iVar6 != -1) {
                      ::FString::RemoveAt(&local_d8,0,iVar6 + 1,No);
                    }
                    break;
                  }
                }
              }
              FPaths::GetCleanFilename(&local_f8,&local_e8);
              pFVar7 = FPaths::GetPath(&local_58,&local_e8);
              if (&local_e8 != pFVar7) {
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                local_e8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_e8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                local_e8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                (pFVar7->Data).ArrayNum = 0;
                (pFVar7->Data).ArrayMax = 0;
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              pFVar7 = FPaths::GetExtension(&local_48,&local_f8,false);
              if (((pFVar7->Data).ArrayNum < 2) && (1 < local_d8.Data.ArrayNum)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                pFVar7 = FPaths::SetExtension(&local_38,&local_f8,&local_d8);
                if (&local_f8 != pFVar7) {
                  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                  }
                  local_f8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_f8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                  local_f8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                  (pFVar7->Data).ArrayNum = 0;
                  (pFVar7->Data).ArrayMax = 0;
                }
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
              }
              uVar5 = local_f8.Data.ArrayNum - 1;
              if (local_f8.Data.ArrayNum == 0) {
                uVar5 = uVar10;
              }
              ::FString::PathAppend(&local_e8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,uVar5)
              ;
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
              if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            `FDesktopPlatformWindows::FileDialogShared'::__l31::<lambda_1>::operator()
                      (&local_a0,&local_e8);
            CoTaskMemFree(local_b0);
            plVar9 = local_108;
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              plVar9 = local_108;
            }
          }
        }
      }
      else {
        local_140 = (longlong *)0x0;
        iVar6 = (**(code **)(*local_148 + 0xd8))(local_148,&local_140);
        plVar9 = local_140;
        if (-1 < iVar6) {
          local_128[0] = 0;
          if ((local_140 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          (**(code **)(*local_140 + 0x38))(local_140,local_128);
          plVar9 = local_140;
          if (local_128[0] != 0) {
            do {
              local_100 = (longlong *)0x0;
              if ((local_140 == (longlong *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RawPointer != 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                     ,0x9f,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              iVar6 = (**(code **)(*local_140 + 0x40))(local_140,uVar12,&local_100);
              if (-1 < iVar6) {
                local_a8 = (wchar_t *)0x0;
                if ((local_100 == (longlong *)0x0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("RawPointer != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                       ,0x9f,L""), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                iVar6 = (**(code **)(*local_100 + 0x28))(local_100,0x80058000,&local_a8);
                if (-1 < iVar6) {
                  local_res10 = true;
                  ::FString::FString(&local_78,local_a8);
                  `FDesktopPlatformWindows::FileDialogShared'::__l31::<lambda_1>::operator()
                            (&local_a0,&local_78);
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  CoTaskMemFree(local_a8);
                }
              }
              if (local_100 != (longlong *)0x0) {
                (**(code **)(*local_100 + 0x10))();
              }
              uVar10 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar10;
              plVar9 = local_140;
            } while (uVar10 < local_128[0]);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    bVar2 = local_res10;
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))();
  }
  return bVar2;
}

// GetNativeFeedbackContext @ 142d24430

FFeedbackContext * __thiscall
FDesktopPlatformWindows::GetNativeFeedbackContext(FDesktopPlatformWindows *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&FeedbackContext);
      FeedbackContext._padding_ = (longlong)&___7FWindowsNativeFeedbackContext__6B_;
      FeedbackContext.Context = (FContextSupplier *)0x0;
      FeedbackContext.hThread = (void *)0x0;
      FeedbackContext.hCloseEvent = (void *)0x0;
      FeedbackContext.hUpdateEvent = (void *)0x0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&FeedbackContext.CriticalSection,4000);
      FeedbackContext.Status.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FeedbackContext.Status.Data.ArrayNum = 0;
      FeedbackContext.Status.Data.ArrayMax = 0;
      FeedbackContext.Progress = 0.0;
      FeedbackContext.LogOutput.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FeedbackContext.LogOutput.Data.ArrayNum = 0;
      FeedbackContext.LogOutput.Data.ArrayMax = 0;
      FeedbackContext.bReceivedUserCancel = false;
      FeedbackContext.bShowCancelButton = false;
      atexit(`FDesktopPlatformWindows::GetNativeFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__FeedbackContext__);
      _Init_thread_footer(&::_TSS0);
      return (FFeedbackContext *)&FeedbackContext;
    }
  }
  return (FFeedbackContext *)&FeedbackContext;
}

// GetOidcTokenExecutableFilename @ 142d25420

FString * __thiscall
FDesktopPlatformWindows::GetOidcTokenExecutableFilename
          (FDesktopPlatformWindows *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,param_1,L"Engine/Binaries/DotNET/OidcToken/win-x64/OidcToken.exe");
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRequiredRegistrySettings @ 142d25fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDesktopPlatformWindows::GetRequiredRegistrySettings
          (FDesktopPlatformWindows *this,
          TIndirectArray<FRegistryRootedKey,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LSTATUS LVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  FString *pFVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  FRegistryKey *pFVar16;
  FRegistryKey *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStackY_538 [32];
  DWORD local_4e8 [2];
  undefined8 *local_4e0;
  undefined8 *local_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_490;
  HKEY local_480;
  FString local_478;
  FString local_468;
  FString local_458;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  wchar_t local_138 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_538;
  puVar15 = (undefined8 *)0x0;
  iVar7 = 0;
  local_4e8[1] = 0;
  pwVar10 = FWindowsPlatformProcess::ExecutableName(false);
  ::FString::FString(&local_478,pwVar10);
  bVar4 = ::FString::StartsWith(&local_478,L"UnrealVersionSelector",0x15,IgnoreCase);
  if (!bVar4) {
    ::FString::operator=(&local_478,L"UnrealVersionSelector.exe");
  }
  pFVar11 = FPaths::EngineDir(&local_1b8);
  pTVar12 = &FPaths::ConvertRelativePathToFull(&local_1c8,pFVar11)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_448,pTVar12,0x10 - (uint)(pTVar12->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_448,L"Binaries/Win64",0xe);
  iVar8 = local_478.Data.ArrayNum + -1;
  if (local_478.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  if ((local_448.ArrayNum != 0) || (iVar6 = 1, iVar8 + 1 == 0)) {
    iVar6 = iVar7;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_490,&local_448,iVar6 + iVar8 + 1);
  ::FString::PathAppend
            ((FString *)&local_490,(wchar_t *)local_478.Data.AllocatorInstance.Data,iVar8);
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  bVar4 = FWindowsPlatformMisc::QueryRegKey
                    ((HKEY__ *)&DAT_ffffffff80000002,L"SOFTWARE\\EpicGames\\Unreal Engine",
                     L"INSTALLDIR",&local_4a0);
  FVar3.Data = local_4a0.Data.AllocatorInstance.Data;
  if (bVar4) {
    lVar18 = (longlong)local_4a0.Data.ArrayNum;
    iVar8 = local_4a0.Data.ArrayNum + -1;
    if (local_4a0.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    if (0 < iVar8) {
      local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4b0.Data.ArrayNum = local_4a0.Data.ArrayNum;
      if (local_4a0.Data.ArrayNum == 0) {
        local_4b0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_4a0.Data.ArrayNum,0,(ForAnyElementType *)&local_4b0,
                   local_4a0.Data.ArrayNum,&local_4b0.Data.ArrayMax);
        memcpy(local_4b0.Data.AllocatorInstance.Data,FVar3.Data,lVar18 * 2);
      }
      FPaths::NormalizeDirectoryName(&local_4b0);
      pFVar11 = ::FString::FString(&local_1a8,
                                   "Launcher/Engine/Binaries/Win64/UnrealVersionSelector.exe");
      ::operator/(&local_438,&local_4b0,pFVar11);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      iVar7 = GetShellIntegrationVersion(this,&local_438);
      iVar8 = GetShellIntegrationVersion(this,(FString *)&local_490);
      if (iVar7 == iVar8) {
        iVar7 = local_438.Data.ArrayNum + -1;
        if (local_438.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange
                  ((FString *)&local_490,(wchar_t *)local_438.Data.AllocatorInstance.Data,iVar7);
      }
      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
    }
  }
  FPaths::MakePlatformFilename((FString *)&local_490);
  pFVar11 = ::FString::FString(&local_188,L"\"");
  pFVar13 = ::FString::FString(&local_198,L"\"");
  ::FString::ConcatFF(&local_3e8,pFVar13,(FString *)&local_490);
  ::FString::ConcatFF(&local_4c0,&local_3e8,pFVar11);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  puVar14 = ::operator_new(0x20);
  puVar19 = puVar15;
  if (puVar14 != (undefined8 *)0x0) {
    ::FString::FString(&local_458,L"SOFTWARE\\Classes\\.uproject");
    FVar3.Data = local_458.Data.AllocatorInstance.Data;
    pFVar11 = (FString *)(puVar14 + 1);
    puVar14[3] = 0;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)puVar14 + 0x14) = 0;
    *(undefined4 *)(puVar14 + 2) = 0;
    *puVar14 = 0xffffffff80000001;
    if ((pFVar11 != &local_458) &&
       (*(int *)(puVar14 + 2) = local_458.Data.ArrayNum, local_458.Data.ArrayNum != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_458.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_458.Data.ArrayNum,
                 (int *)((longlong)puVar14 + 0x14));
      memcpy((pFVar11->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_458.Data.ArrayNum * 2
            );
    }
    puVar15 = puVar14;
    puVar19 = (undefined8 *)&DAT_00000001;
  }
  if ((puVar19 != (undefined8 *)0x0) &&
     (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
  pFVar1 = (param_1->Array).AllocatorInstance.Data;
  local_4e0 = puVar15;
  if (((pFVar1 <= (FScriptContainerElement *)&local_4e0) &&
      ((FScriptContainerElement *)&local_4e0 < pFVar1 + (longlong)(param_1->Array).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (param_1->Array).ArrayNum;
  if (iVar7 == (param_1->Array).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
  }
  (param_1->Array).ArrayNum = iVar7 + 1;
  *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_4e0;
  puVar15 = ::operator_new(0x20);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    ::FString::FString(&local_418,L"SOFTWARE\\Classes\\.uproject");
    FVar3.Data = local_418.Data.AllocatorInstance.Data;
    pFVar11 = (FString *)(puVar15 + 1);
    bVar4 = true;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    puVar15[3] = 0;
    *puVar15 = &DAT_ffffffff80000002;
    if ((pFVar11 != &local_418) &&
       (*(int *)(puVar15 + 2) = local_418.Data.ArrayNum, local_418.Data.ArrayNum != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_418.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_418.Data.ArrayNum,
                 (int *)((longlong)puVar15 + 0x14));
      memcpy((pFVar11->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_418.Data.ArrayNum * 2
            );
    }
  }
  pFVar17 = (FRegistryKey *)0x0;
  if ((bVar4) && (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
  pFVar16 = ::operator_new(0xa0);
  if (pFVar16 != (FRegistryKey *)0x0) {
    *(undefined8 *)&pFVar16->Keys = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x8 = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x20 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x28 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar16->Keys).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar16->Keys).field_0x34 = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x40 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x48 = 0;
    *(undefined8 *)&pFVar16->Values = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar16->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar16->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x48 = 0;
    pFVar17 = pFVar16;
  }
  puVar19 = puVar15 + 3;
  if (puVar19 == &local_1d8) {
    if (pFVar17 != (FRegistryKey *)0x0) {
      FRegistryKey::~FRegistryKey(pFVar17);
      goto LAB_142d2654a;
    }
  }
  else {
    pFVar16 = (FRegistryKey *)*puVar19;
    *puVar19 = pFVar17;
    if (pFVar16 != (FRegistryKey *)0x0) {
      FRegistryKey::~FRegistryKey(pFVar16);
      pFVar17 = pFVar16;
LAB_142d2654a:
      ::operator_delete(pFVar17,0xa0);
    }
  }
  pFVar17 = (FRegistryKey *)*puVar19;
  ::FString::FString(&local_3c8,L"Unreal.ProjectFile");
  ::FString::FString(&local_3d8,L"");
  FRegistryKey::SetValue(pFVar17,&local_3d8,&local_3c8);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Array).AllocatorInstance.Data;
  local_4d8 = puVar15;
  if (((pFVar1 <= (FScriptContainerElement *)&local_4d8) &&
      ((FScriptContainerElement *)&local_4d8 < pFVar1 + (longlong)(param_1->Array).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (param_1->Array).ArrayNum;
  if (iVar7 == (param_1->Array).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
  }
  (param_1->Array).ArrayNum = iVar7 + 1;
  *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_4d8;
  puVar15 = ::operator_new(0x20);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    ::FString::FString(&local_468,L"SOFTWARE\\Classes\\Unreal.ProjectFile");
    FVar3.Data = local_468.Data.AllocatorInstance.Data;
    *puVar15 = &DAT_ffffffff80000002;
    pFVar11 = (FString *)(puVar15 + 1);
    bVar4 = true;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    puVar15[3] = 0;
    if ((pFVar11 != &local_468) &&
       (*(int *)(puVar15 + 2) = local_468.Data.ArrayNum, local_468.Data.ArrayNum != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_468.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_468.Data.ArrayNum,
                 (int *)((longlong)puVar15 + 0x14));
      memcpy((pFVar11->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_468.Data.ArrayNum * 2
            );
    }
  }
  pFVar17 = (FRegistryKey *)0x0;
  if ((bVar4) && (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
  pFVar16 = ::operator_new(0xa0);
  if (pFVar16 != (FRegistryKey *)0x0) {
    *(undefined8 *)&pFVar16->Keys = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x8 = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x20 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x28 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar16->Keys).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar16->Keys).field_0x34 = 0;
    *(undefined8 *)&(pFVar16->Keys).field_0x40 = 0;
    *(undefined4 *)&(pFVar16->Keys).field_0x48 = 0;
    *(undefined8 *)&pFVar16->Values = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar16->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar16->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar16->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar16->Values).field_0x48 = 0;
    pFVar17 = pFVar16;
  }
  puVar19 = puVar15 + 3;
  if (puVar19 == &local_1d0) {
    if (pFVar17 != (FRegistryKey *)0x0) {
      FRegistryKey::~FRegistryKey(pFVar17);
      goto LAB_142d2679f;
    }
  }
  else {
    pFVar16 = (FRegistryKey *)*puVar19;
    *puVar19 = pFVar17;
    if (pFVar16 != (FRegistryKey *)0x0) {
      FRegistryKey::~FRegistryKey(pFVar16);
      pFVar17 = pFVar16;
LAB_142d2679f:
      ::operator_delete(pFVar17,0xa0);
    }
  }
  pFVar17 = (FRegistryKey *)*puVar19;
  ::FString::FString(&local_3a8,L"Unreal Engine Project File");
  ::FString::FString(&local_3b8,L"");
  FRegistryKey::SetValue(pFVar17,&local_3b8,&local_3a8);
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  pFVar17 = (FRegistryKey *)*puVar19;
  ::FString::FString(&local_388,L"DefaultIcon");
  pFVar17 = FRegistryKey::FindOrAddKey(pFVar17,&local_388);
  ::FString::FString(&local_398,L"");
  FRegistryKey::SetValue(pFVar17,&local_398,&local_4c0);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Array).AllocatorInstance.Data;
  local_4d0 = puVar15;
  if (((pFVar1 <= (FScriptContainerElement *)&local_4d0) &&
      ((FScriptContainerElement *)&local_4d0 < pFVar1 + (longlong)(param_1->Array).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (param_1->Array).ArrayNum;
  if (iVar7 == (param_1->Array).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
  }
  (param_1->Array).ArrayNum = iVar7 + 1;
  *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_4d0;
  pFVar17 = (FRegistryKey *)*puVar19;
  ::FString::FString(&local_378,L"shell");
  pFVar17 = FRegistryKey::FindOrAddKey(pFVar17,&local_378);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_368,L"open");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar17,&local_368);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_348,L"Open");
  ::FString::FString(&local_358,L"");
  FRegistryKey::SetValue(pFVar16,&local_358,&local_348);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_318,L"command");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar16,&local_318);
  pFVar11 = ::FString::FString(&local_178,L" /editor \"%1\"");
  ::FString::ConcatFF(&local_328,&local_4c0,pFVar11);
  ::FString::FString(&local_338,L"");
  FRegistryKey::SetValue(pFVar16,&local_338,&local_328);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_308,L"run");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar17,&local_308);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2e8,L"Launch game");
  ::FString::FString(&local_2f8,L"");
  FRegistryKey::SetValue(pFVar16,&local_2f8,&local_2e8);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2d8,L"Icon");
  FRegistryKey::SetValue(pFVar16,&local_2d8,&local_4c0);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2a8,L"command");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar16,&local_2a8);
  pFVar11 = ::FString::FString(&local_168,L" /game \"%1\"");
  ::FString::ConcatFF(&local_2b8,&local_4c0,pFVar11);
  ::FString::FString(&local_2c8,L"");
  FRegistryKey::SetValue(pFVar16,&local_2c8,&local_2b8);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_298,L"rungenproj");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar17,&local_298);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_278,L"Generate Visual Studio project files");
  ::FString::FString(&local_288,L"");
  FRegistryKey::SetValue(pFVar16,&local_288,&local_278);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_268,L"Icon");
  FRegistryKey::SetValue(pFVar16,&local_268,&local_4c0);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_238,L"command");
  pFVar16 = FRegistryKey::FindOrAddKey(pFVar16,&local_238);
  pFVar11 = ::FString::FString(&local_158,L" /projectfiles \"%1\"");
  ::FString::ConcatFF(&local_248,&local_4c0,pFVar11);
  ::FString::FString(&local_258,L"");
  FRegistryKey::SetValue(pFVar16,&local_258,&local_248);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_228,L"switchversion");
  pFVar17 = FRegistryKey::FindOrAddKey(pFVar17,&local_228);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_208,L"Switch Unreal Engine version...");
  ::FString::FString(&local_218,L"");
  FRegistryKey::SetValue(pFVar17,&local_218,&local_208);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1f8,L"Icon");
  FRegistryKey::SetValue(pFVar17,&local_1f8,&local_4c0);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3f8,L"command");
  pFVar17 = FRegistryKey::FindOrAddKey(pFVar17,&local_3f8);
  pFVar11 = ::FString::FString(&local_148,L" /switchversion \"%1\"");
  ::FString::ConcatFF(&local_408,&local_4c0,pFVar11);
  ::FString::FString(&local_1e8,L"");
  FRegistryKey::SetValue(pFVar17,&local_1e8,&local_408);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  bVar5 = true;
  LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FileExts\\.uproject\\UserChoice"
                        ,0,0x20019,&local_480);
  if (LVar9 == 0) {
    local_4e8[1] = 0x100;
    local_4e8[0] = 0;
    LVar9 = RegQueryValueExW(local_480,L"Progid",(LPDWORD)0x0,local_4e8,(LPBYTE)local_138,
                             local_4e8 + 1);
    if ((LVar9 == 0) && (local_4e8[0] == 1)) {
      iVar7 = wcscmp(local_138,L"Unreal.ProjectFile");
      bVar5 = iVar7 != 0;
    }
    RegCloseKey(local_480);
    if (!bVar5) goto LAB_142d27107;
  }
  puVar15 = ::operator_new(0x20);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    ::FString::FString(&local_428,
                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FileExts\\.uproject\\UserChoice"
                      );
    FVar3.Data = local_428.Data.AllocatorInstance.Data;
    pFVar11 = (FString *)(puVar15 + 1);
    bVar4 = true;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    puVar15[3] = 0;
    *puVar15 = 0xffffffff80000001;
    if ((pFVar11 != &local_428) &&
       (*(int *)(puVar15 + 2) = local_428.Data.ArrayNum, local_428.Data.ArrayNum != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_428.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_428.Data.ArrayNum,
                 (int *)((longlong)puVar15 + 0x14));
      memcpy((pFVar11->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_428.Data.ArrayNum * 2
            );
    }
  }
  pFVar1 = (param_1->Array).AllocatorInstance.Data;
  local_4c8 = puVar15;
  if (((pFVar1 <= (FScriptContainerElement *)&local_4c8) &&
      ((FScriptContainerElement *)&local_4c8 < pFVar1 + (longlong)(param_1->Array).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (param_1->Array).ArrayNum;
  if (iVar7 == (param_1->Array).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
  }
  (param_1->Array).ArrayNum = iVar7 + 1;
  *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_4c8;
  if ((bVar4) && (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
LAB_142d27107:
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  return;
}

// GetShellIntegrationVersion @ 142d27180

int __thiscall
FDesktopPlatformWindows::GetShellIntegrationVersion(FDesktopPlatformWindows *this,FString *param_1)

{
  DWORD dwLen;
  BOOL BVar1;
  ulong uVar2;
  wchar_t *lptstrFilename;
  wchar_t *lptstrFilename_00;
  uint local_res10 [2];
  wchar_t *local_res18;
  wchar_t *local_res20;
  ForAnyElementType local_28;
  int local_20 [2];
  
  lptstrFilename_00 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    lptstrFilename = L"";
  }
  else {
    lptstrFilename = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  dwLen = GetFileVersionInfoSizeW(lptstrFilename,(LPDWORD)0x0);
  if (dwLen != 0) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,dwLen,&local_28,local_20,local_20 + 1);
    if ((param_1->Data).ArrayNum != 0) {
      lptstrFilename_00 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    BVar1 = GetFileVersionInfoW(lptstrFilename_00,0,dwLen,local_28.Data);
    if (BVar1 != 0) {
      BVar1 = VerQueryValueW(local_28.Data,L"\\StringFileInfo\\040904b0\\ShellIntegrationVersion",
                             &local_res18,local_res10);
      if (BVar1 != 0) {
        uVar2 = wcstoul(local_res18,&local_res20,10);
        if (*local_res20 == L'\0') {
          if (local_28.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data);
          }
          return uVar2;
        }
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return 0;
}

// GetUserTempPath @ 142d282e0

FString * __thiscall
FDesktopPlatformWindows::GetUserTempPath
          (FDesktopPlatformWindows *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FWindowsPlatformProcess::UserTempDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// IsSourceDistribution @ 142d28e70

bool __thiscall
FDesktopPlatformWindows::IsSourceDistribution(FDesktopPlatformWindows *this,FString *param_1)

{
  char cVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  byte extraout_var;
  ForAnyElementType FVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  ::operator/(&local_18,param_1,L"Engine/Build/Build.version");
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,FVar4.Data);
  if (cVar1 == '\0') {
    ::operator/(&local_28,param_1,L"GenerateProjectFiles.bat");
    pIVar2 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,FVar4.Data);
    if (-1 < lVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
      goto LAB_142d28f62;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::operator/(&local_28,param_1,L"Engine/Build/SourceDistribution.txt");
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,FVar4.Data);
  bVar5 = (bool)(extraout_var >> 7 ^ 1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_142d28f62:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// OpenDirectoryDialog @ 142d2a9d0

bool __thiscall
FDesktopPlatformWindows::OpenDirectoryDialog
          (FDesktopPlatformWindows *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  HRESULT HVar5;
  int iVar6;
  ForAnyElementType pszPath;
  wchar_t *pwVar7;
  uint local_58 [2];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  wchar_t *local_38;
  FString local_30;
  
  local_50 = (longlong *)0x0;
  bVar4 = false;
  HVar5 = CoCreateInstance((IID *)&CLSID_FileOpenDialog,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_d57c7288_d4ad_4768_be02_9d969532d960,&local_50);
  if (-1 < HVar5) {
    local_58[0] = 0;
    if ((local_50 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*local_50 + 0x50))(local_50,local_58);
    if ((local_50 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*local_50 + 0x48))(local_50,local_58[0] | 0x20);
    if ((local_50 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((param_2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    (**(code **)(*local_50 + 0x88))(local_50,pwVar7);
    if (1 < (param_3->Data).ArrayNum) {
      FPaths::ConvertRelativePathToFull(&local_30,param_3);
      ::FString::ReplaceInline(&local_30,L"/",L"\\",CaseSensitive);
      local_40 = (longlong *)0x0;
      pszPath.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        pszPath.Data = local_30.Data.AllocatorInstance.Data;
      }
      HVar5 = SHCreateItemFromParsingName
                        ((PCWSTR)pszPath.Data,(IBindCtx *)0x0,
                         (IID *)&_GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,&local_40);
      if (-1 < HVar5) {
        if ((local_50 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (**(code **)(*local_50 + 0x60))(local_50,local_40);
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    if ((local_50 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar6 = (**(code **)(*local_50 + 0x18))(local_50,param_1);
    if (-1 < iVar6) {
      local_48 = (longlong *)0x0;
      if ((local_50 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = (**(code **)(*local_50 + 0xa0))(local_50,&local_48);
      bVar4 = false;
      if (-1 < iVar6) {
        local_38 = (wchar_t *)0x0;
        if ((local_48 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar6 = (**(code **)(*local_48 + 0x28))(local_48,0x80058000,&local_38);
        if (-1 < iVar6) {
          bVar4 = true;
          ::FString::operator=(param_4,local_38);
          FPaths::NormalizeDirectoryName(param_4);
          CoTaskMemFree(local_38);
        }
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return bVar4;
}

// OpenFileDialog @ 142d2aef0

bool __thiscall
FDesktopPlatformWindows::OpenFileDialog
          (FDesktopPlatformWindows *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  int local_18 [6];
  
  bVar1 = FileDialogShared(this,false,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           local_18);
  return bVar1;
}

// OpenFileDialog @ 142d2af50

bool __thiscall
FDesktopPlatformWindows::OpenFileDialog
          (FDesktopPlatformWindows *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = FileDialogShared(this,false,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8);
  return bVar1;
}

// OpenFontDialog @ 142d2afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformWindows::OpenFontDialog
          (FDesktopPlatformWindows *this,void *param_1,FString *param_2,float *param_3,
          EFontImportFlags *param_4)

{
  BOOL BVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  EFontImportFlags EVar4;
  float fVar5;
  undefined1 auStack_138 [32];
  CHOOSEFONTW local_118;
  tagLOGFONTW local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.nSizeMax = 0;
  local_118._100_4_ = 0;
  local_a8.lfFaceName[0x1a] = L'\0';
  local_a8.lfFaceName[0x1b] = L'\0';
  local_a8.lfFaceName[0x1c] = L'\0';
  local_a8.lfFaceName[0x1d] = L'\0';
  local_a8.lfFaceName[0x1e] = L'\0';
  local_a8.lfFaceName[0x1f] = L'\0';
  local_118.lpLogFont = &local_a8;
  local_118.hDC = (HDC)0x0;
  local_118.rgbColors = 0;
  local_118._44_4_ = 0;
  local_118.lStructSize = 0x68;
  local_118._4_4_ = 0;
  local_118.lCustData = 0;
  local_118.lpfnHook = (LPCFHOOKPROC)0x0;
  local_118.lpTemplateName = (LPCWSTR)0x0;
  local_118.hInstance = (HINSTANCE)0x0;
  local_118.iPointSize = 0;
  local_118.Flags = 0x101;
  local_118.lpszStyle = (LPWSTR)0x0;
  local_118.nFontType = 0;
  local_118.___MISSING_ALIGNMENT__ = 0;
  local_118.nSizeMin = 0;
  local_a8.lfHeight = 0;
  local_a8.lfWidth = 0;
  local_a8.lfEscapement = 0;
  local_a8.lfOrientation = 0;
  local_a8.lfWeight = 0;
  local_a8.lfItalic = '\0';
  local_a8.lfUnderline = '\0';
  local_a8.lfStrikeOut = '\0';
  local_a8.lfCharSet = '\0';
  local_a8.lfOutPrecision = '\0';
  local_a8.lfClipPrecision = '\0';
  local_a8.lfQuality = '\0';
  local_a8.lfPitchAndFamily = '\0';
  local_a8.lfFaceName[0] = L'\0';
  local_a8.lfFaceName[1] = L'\0';
  local_a8.lfFaceName[2] = L'\0';
  local_a8.lfFaceName[3] = L'\0';
  local_a8.lfFaceName[4] = L'\0';
  local_a8.lfFaceName[5] = L'\0';
  local_a8.lfFaceName[6] = L'\0';
  local_a8.lfFaceName[7] = L'\0';
  local_a8.lfFaceName[8] = L'\0';
  local_a8.lfFaceName[9] = L'\0';
  local_a8.lfFaceName[10] = L'\0';
  local_a8.lfFaceName[0xb] = L'\0';
  local_a8.lfFaceName[0xc] = L'\0';
  local_a8.lfFaceName[0xd] = L'\0';
  local_a8.lfFaceName[0xe] = L'\0';
  local_a8.lfFaceName[0xf] = L'\0';
  local_a8.lfFaceName[0x10] = L'\0';
  local_a8.lfFaceName[0x11] = L'\0';
  local_a8.lfFaceName[0x12] = L'\0';
  local_a8.lfFaceName[0x13] = L'\0';
  local_a8.lfFaceName[0x14] = L'\0';
  local_a8.lfFaceName[0x15] = L'\0';
  local_a8.lfFaceName[0x16] = L'\0';
  local_a8.lfFaceName[0x17] = L'\0';
  local_a8.lfFaceName[0x18] = L'\0';
  local_a8.lfFaceName[0x19] = L'\0';
  local_118.hwndOwner = param_1;
  BVar1 = ChooseFontW(&local_118);
  if (BVar1 == 0) {
    if (2 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
  }
  else {
    hdc = GetDC(local_118.hwndOwner);
    iVar2 = GetDeviceCaps(hdc,0x5a);
    iVar3 = -local_a8.lfHeight;
    EVar4 = None;
    if (local_a8.lfUnderline != '\0') {
      EVar4 = EnableUnderline;
    }
    fVar5 = __real_42900000 / (float)iVar2;
    if (local_a8.lfItalic != '\0') {
      EVar4 = EVar4 | EnableItalic;
    }
    if (local_a8.lfWeight == 700) {
      EVar4 = EVar4 | EnableBold;
    }
    ::FString::operator=(param_2,local_a8.lfFaceName);
    *param_3 = (float)(int)((float)iVar3 * fVar5);
    *param_4 = EVar4;
    ReleaseDC(local_118.hwndOwner,hdc);
  }
  return BVar1 != 0;
}

// OpenProject @ 142d2b4c0

bool __thiscall FDesktopPlatformWindows::OpenProject(FDesktopPlatformWindows *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  BOOL BVar1;
  longlong lVar2;
  FString local_88;
  SHELLEXECUTEINFOW local_78;
  
  local_88.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_88.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  FPaths::MakePlatformFilename(&local_88);
  local_78.lpVerb = L"open";
  local_78.lpFile = L"";
  if (local_88.Data.ArrayNum != 0) {
    local_78.lpFile = (LPCWSTR)local_88.Data.AllocatorInstance.Data;
  }
  local_78.hwnd = (HWND)0x0;
  local_78.hInstApp = (HINSTANCE)0x0;
  local_78.lpIDList = (void *)0x0;
  local_78.lpClass = L"Unreal.ProjectFile";
  local_78.lpParameters = (LPCWSTR)0x0;
  local_78.lpDirectory = (LPCWSTR)0x0;
  local_78.cbSize = 0x70;
  local_78.fMask = 1;
  local_78.hkeyClass = (HKEY)0x0;
  local_78.dwHotKey = 0;
  local_78._92_4_ = 0;
  local_78.nShow = 1;
  local_78._52_4_ = 0;
  local_78.u.hIcon = (HANDLE)0x0;
  local_78.hProcess = (HANDLE)0x0;
  BVar1 = ShellExecuteExW(&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return BVar1 != 0;
}

// RegisterEngineInstallation @ 142d30ec0

bool __thiscall
FDesktopPlatformWindows::RegisterEngineInstallation
          (FDesktopPlatformWindows *this,FString *param_1,FString *param_2)

{
  int iVar1;
  char cVar2;
  LSTATUS LVar3;
  FGuid *this_00;
  wchar_t *lpData;
  ForAnyElementType lpValueName;
  int iVar4;
  bool bVar5;
  HKEY local_res8;
  FString local_28;
  FGuid local_18;
  
  bVar5 = false;
  cVar2 = (**(code **)(*(longlong *)this + 0xc0))();
  if (cVar2 == '\0') {
    return false;
  }
  iVar4 = 0;
  LVar3 = RegCreateKeyExW((HKEY)0xffffffff80000001,InstallationsSubKey,0,(LPWSTR)0x0,0,0xf003f,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_res8,(LPDWORD)0x0);
  if (LVar3 == 0) {
    this_00 = FGuid::NewGuid(&local_18);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_28,DigitsWithHyphensInBraces);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == 0) {
      lpData = L"";
    }
    else {
      lpData = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar4 = iVar1 + -1;
    }
    lpValueName.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      lpValueName.Data = local_28.Data.AllocatorInstance.Data;
    }
    LVar3 = RegSetValueExW(local_res8,(LPCWSTR)lpValueName.Data,0,1,(BYTE *)lpData,iVar4 * 2 + 2);
    RegCloseKey(local_res8);
    bVar5 = false;
    if (LVar3 == 0) {
      iVar4 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(param_2,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
      bVar5 = true;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// RunUnrealBuildTool @ 142d31950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformWindows::RunUnrealBuildTool
          (FDesktopPlatformWindows *this,FText *param_1,FString *param_2,FString *param_3,
          FFeedbackContext *param_4,int *param_5)

{
  bool bVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  *param_5 = 1;
  FDesktopPlatformBase::GetUnrealBuildToolExecutableFilename
            ((FDesktopPlatformBase *)this,&local_18,param_2);
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,FVar4.Data);
  if (lVar3 < 0) {
    FOutputDevice::LogfImpl
              ((FOutputDevice *)param_4,Error,L"Couldn\'t find UnrealBuildTool at \'%s\'");
  }
  else {
    FOutputDevice::LogfImpl((FOutputDevice *)param_4,L"Running %s %s");
    bVar1 = FFeedbackContextMarkup::PipeProcessOutput(param_1,&local_18,param_3,param_4,param_5);
    if ((bVar1) && (*param_5 == 0)) {
      bVar1 = true;
      goto LAB_142d319d4;
    }
  }
  bVar1 = false;
LAB_142d319d4:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SaveFileDialog @ 142d31b50

bool __thiscall
FDesktopPlatformWindows::SaveFileDialog
          (FDesktopPlatformWindows *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  int local_18 [6];
  
  local_18[0] = 0;
  bVar1 = FileDialogShared(this,true,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           local_18);
  return bVar1;
}

// UpdateFileAssociations @ 142d35db0

bool __thiscall FDesktopPlatformWindows::UpdateFileAssociations(FDesktopPlatformWindows *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  FRegistryKey *this_00;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  LSTATUS LVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  HKEY local_res10;
  TIndirectArray<FRegistryRootedKey,TSizedDefaultAllocator<32>_> local_28;
  ulonglong uVar13;
  
  uVar11 = 0;
  local_28.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Array.ArrayNum = 0;
  local_28.Array.ArrayMax = 0;
  GetRequiredRegistrySettings(this,&local_28);
  uVar13 = uVar11;
  if (0 < local_28.Array.ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < local_28.Array.ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      puVar1 = *(undefined8 **)(local_28.Array.AllocatorInstance.Data + uVar11);
      if ((FRegistryKey *)puVar1[3] == (FRegistryKey *)0x0) {
        if (*(int *)(puVar1 + 2) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)puVar1[1];
        }
        LVar9 = RegOpenKeyExW((HKEY)*puVar1,pwVar10,0,0x20019,&local_res10);
        if (LVar9 == 0) {
          RegCloseKey(local_res10);
          if (*(int *)(puVar1 + 2) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)puVar1[1];
          }
          LVar9 = RegDeleteKeyExW((HKEY)*puVar1,pwVar10,0,0);
          if (LVar9 != 0) goto LAB_142d35e5e;
        }
      }
      else {
        bVar6 = FRegistryKey::Write((FRegistryKey *)puVar1[3],(HKEY__ *)*puVar1,
                                    (FString *)(puVar1 + 1),true);
        if (!bVar6) {
LAB_142d35e5e:
          bVar6 = false;
          iVar4 = local_28.Array.ArrayNum;
          FVar5.Data = local_28.Array.AllocatorInstance.Data;
          goto joined_r0x000142d35ee7;
        }
      }
      uVar11 = uVar11 + 8;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < local_28.Array.ArrayNum);
  }
  bVar6 = true;
  iVar4 = local_28.Array.ArrayNum;
  FVar5.Data = local_28.Array.AllocatorInstance.Data;
joined_r0x000142d35ee7:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)FVar5.Data;
    if (pvVar2 != (void *)0x0) {
      this_00 = *(FRegistryKey **)((longlong)pvVar2 + 0x18);
      if (this_00 != (FRegistryKey *)0x0) {
        FRegistryKey::~FRegistryKey(this_00);
        ::operator_delete(this_00,0xa0);
      }
      if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 8));
      }
      ::operator_delete(pvVar2,0x20);
    }
    FVar5.Data = FVar5.Data + 8;
  }
  uVar13 = (ulonglong)local_28.Array._8_8_ >> 0x20;
  local_28.Array._8_8_ = local_28.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_28,0,&local_28.Array.ArrayMax);
  }
  if (local_28.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Array.AllocatorInstance.Data);
  }
  return bVar6;
}

// VerifyFileAssociations @ 142d35fc0

bool __thiscall FDesktopPlatformWindows::VerifyFileAssociations(FDesktopPlatformWindows *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  FRegistryKey *this_00;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  LSTATUS LVar9;
  wchar_t *lpSubKey;
  ulonglong uVar10;
  uint uVar11;
  HKEY local_res10;
  TIndirectArray<FRegistryRootedKey,TSizedDefaultAllocator<32>_> local_28;
  ulonglong uVar12;
  
  uVar10 = 0;
  local_28.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Array.ArrayNum = 0;
  local_28.Array.ArrayMax = 0;
  GetRequiredRegistrySettings(this,&local_28);
  uVar12 = uVar10;
  if (0 < local_28.Array.ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < local_28.Array.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      puVar1 = *(undefined8 **)(local_28.Array.AllocatorInstance.Data + uVar10);
      if ((FRegistryKey *)puVar1[3] == (FRegistryKey *)0x0) {
        if (*(int *)(puVar1 + 2) == 0) {
          lpSubKey = L"";
        }
        else {
          lpSubKey = (wchar_t *)puVar1[1];
        }
        bVar6 = true;
        LVar9 = RegOpenKeyExW((HKEY)*puVar1,lpSubKey,0,0x20019,&local_res10);
        if (LVar9 == 0) {
          RegCloseKey(local_res10);
          bVar6 = false;
        }
      }
      else {
        bVar6 = FRegistryKey::IsUpToDate
                          ((FRegistryKey *)puVar1[3],(HKEY__ *)*puVar1,(FString *)(puVar1 + 1),true)
        ;
      }
      if (bVar6 == false) {
        bVar6 = false;
        iVar4 = local_28.Array.ArrayNum;
        FVar5.Data = local_28.Array.AllocatorInstance.Data;
        goto joined_r0x000142d360dc;
      }
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < local_28.Array.ArrayNum);
  }
  bVar6 = true;
  iVar4 = local_28.Array.ArrayNum;
  FVar5.Data = local_28.Array.AllocatorInstance.Data;
joined_r0x000142d360dc:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)FVar5.Data;
    if (pvVar2 != (void *)0x0) {
      this_00 = *(FRegistryKey **)((longlong)pvVar2 + 0x18);
      if (this_00 != (FRegistryKey *)0x0) {
        FRegistryKey::~FRegistryKey(this_00);
        ::operator_delete(this_00,0xa0);
      }
      if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 8));
      }
      ::operator_delete(pvVar2,0x20);
    }
    FVar5.Data = FVar5.Data + 8;
  }
  uVar12 = (ulonglong)local_28.Array._8_8_ >> 0x20;
  local_28.Array._8_8_ = local_28.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_28,0,&local_28.Array.ArrayMax);
  }
  if (local_28.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Array.AllocatorInstance.Data);
  }
  return bVar6;
}

