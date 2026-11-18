// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FScanPathContext @ 142b7ad00

/* WARNING: Removing unreachable block (ram,0x000142b7b572) */
/* WARNING: Removing unreachable block (ram,0x000142b7b64b) */
/* WARNING: Removing unreachable block (ram,0x000142b7b199) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

FScanPathContext * __thiscall
UE::AssetRegistry::Impl::FScanPathContext::FScanPathContext
          (FScanPathContext *this,FEventContext *param_1,FClassInheritanceContext *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,EScanFlags param_5,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_6)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  EPackageLocationFilter EVar8;
  int iVar9;
  int iVar10;
  IFileManager *pIVar11;
  TStringView<wchar_t> *pTVar12;
  FScanPathContext *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  int *piVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  EFlexNameType local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res20;
  FString local_188;
  FScriptContainerElement *local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FPackagePath local_120 [2];
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  pTVar5 = param_6;
  piVar19 = &(this->PackageFiles).ArrayMax;
  this->EventContext = param_1;
  (this->PackageDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar20 = &(this->LocalFiles).ArrayMax;
  (this->PackageDirs).ArrayNum = 0;
  (this->PackageDirs).ArrayMax = 0;
  (this->LocalDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalDirs).ArrayNum = 0;
  (this->LocalDirs).ArrayMax = 0;
  (this->PackageFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageFiles).ArrayNum = 0;
  (this->LocalFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalFiles).ArrayNum = 0;
  (this->LocalPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPaths).ArrayNum = 0;
  (this->LocalPaths).ArrayMax = 0;
  *piVar19 = 0;
  *piVar20 = 0;
  this->OutFoundAssets = param_6;
  this->InheritanceContext = param_2;
  this->NumFoundAssets = 0;
  this->Status = TickActiveGatherActive;
  this->bForceRescan = (bool)((byte)param_5 & 1);
  this->bIgnoreDenyListScanFilters = (bool)((byte)(param_5 >> 1) & 1);
  this->bIgnoreInvalidPathWarning = (bool)((byte)(param_5 >> 3) & 1);
  local_res20 = param_3;
  if (param_6 != (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(param_6->AllocatorInstance).Data,param_6->ArrayNum);
    pTVar5->ArrayNum = 0;
    if (pTVar5->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
    }
  }
  bVar4 = false;
  if ((this->bIgnoreDenyListScanFilters != false) && (this->bForceRescan == false)) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    this->bForceRescan = true;
    bVar4 = true;
  }
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = 0;
  local_170.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar2 = param_4->ArrayNum;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar20 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&(this->LocalFiles).AllocatorInstance,(this->LocalFiles).ArrayNum,
               piVar20);
  }
  uVar2 = param_4->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar19 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&(this->PackageFiles).AllocatorInstance,(this->PackageFiles).ArrayNum,
               piVar19);
  }
  local_res10 = param_4->ArrayNum;
  uVar14 = (ulonglong)(int)local_res10;
  pFVar18 = (param_4->AllocatorInstance).Data;
  local_178 = pFVar18 + uVar14 * 0x10;
  pFVar16 = local_178;
  while( true ) {
    piVar20 = &(this->PackageFiles).ArrayMax;
    piVar19 = &(this->LocalFiles).ArrayMax;
    if (param_4->ArrayNum != (int)uVar14) {
      param_6._0_1_ = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_6);
      pFVar16 = local_178;
    }
    if (pFVar18 == pFVar16) break;
    if (*(int *)(pFVar18 + 8) < 2) {
LAB_142b7b29d:
      uVar14 = (ulonglong)local_res10;
      pFVar18 = pFVar18 + 0x10;
    }
    else {
      local_108 = *(wchar_t **)pFVar18;
      iStack_100 = *(int *)(pFVar18 + 8) + -1;
      local_b8._12_4_ = uStack_fc;
      local_b8.Size = iStack_100;
      local_b8.DataPtr = local_108;
      bVar6 = FPackageName::TryConvertToMountedPath
                        (&local_b8,&local_170,&local_188,(FString *)0x0,(FString *)0x0,&local_130,
                         local_res18,(EErrorCode *)0x0);
      if (bVar6) {
        local_f8 = local_188.Data.AllocatorInstance.Data;
        iStack_f0 = local_188.Data.ArrayNum + -1;
        if (local_188.Data.ArrayNum == 0) {
          iStack_f0 = 0;
        }
        local_a8._12_4_ = uStack_ec;
        local_a8.Size = iStack_f0;
        local_a8.DataPtr = (wchar_t *)local_188.Data.AllocatorInstance.Data;
        bVar6 = FPackageName::IsTempPackage(&local_a8);
        if (!bVar6) {
          if (local_130.Data.ArrayNum < 2) {
            pIVar11 = IFileManager::Get();
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_170.Data.ArrayNum != 0) {
              FVar15.Data = local_170.Data.AllocatorInstance.Data;
            }
            cVar7 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar15.Data);
            if (cVar7 == '\0') {
              local_e8 = local_170.Data.AllocatorInstance.Data;
              iStack_e0 = local_170.Data.ArrayNum + -1;
              if (local_170.Data.ArrayNum == 0) {
                iStack_e0 = 0;
              }
              local_98._12_4_ = uStack_dc;
              local_98.Size = iStack_e0;
              local_98.DataPtr = (wchar_t *)local_170.Data.AllocatorInstance.Data;
              FPackagePath::FromLocalPath(local_120,&local_98);
              EVar8 = FPackageName::InternalDoesPackageExistEx(local_120,Any,false,local_120);
              pFVar16 = local_178;
              if (EVar8 == None) goto LAB_142b7b29d;
              pTVar12 = FPackagePath::GetExtensionString(local_120,&local_68,Header);
              local_58 = pTVar12->DataPtr;
              uStack_50 = *(undefined8 *)&pTVar12->Size;
              ::FString::AssignRange(&local_130,pTVar12->DataPtr,(int)*(undefined8 *)&pTVar12->Size)
              ;
            }
          }
          ::FString::ConcatFF(&local_160,&local_170,&local_130);
          pFVar16 = (this->LocalFiles).AllocatorInstance.Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 < pFVar16 + (longlong)*piVar19 * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar13 = (FScanPathContext *)(*pcVar3)();
            return pFVar13;
          }
          iVar9 = (this->LocalFiles).ArrayNum;
          if (iVar9 == *piVar19) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->LocalFiles).AllocatorInstance,piVar19);
          }
          (this->LocalFiles).ArrayNum = iVar9 + 1;
          pFVar16 = (this->LocalFiles).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar16 = 0;
          *(FScriptContainerElement **)pFVar16 = local_160.Data.AllocatorInstance.Data;
          *(int *)(pFVar16 + 8) = local_160.Data.ArrayNum;
          *(int *)(pFVar16 + 0xc) = local_160.Data.ArrayMax;
          local_160.Data.ArrayNum = 0;
          local_160.Data.ArrayMax = 0;
          local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar16 = (this->PackageFiles).AllocatorInstance.Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 < pFVar16 + (longlong)*piVar20 * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar13 = (FScanPathContext *)(*pcVar3)();
            return pFVar13;
          }
          iVar9 = (this->PackageFiles).ArrayNum;
          if (iVar9 == *piVar20) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->PackageFiles).AllocatorInstance,piVar20);
          }
          FVar15.Data = local_188.Data.AllocatorInstance.Data;
          pFVar16 = (this->PackageFiles).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          (this->PackageFiles).ArrayNum = iVar9 + 1;
          *(undefined8 *)&pFVar16->field_0x0 = 0;
          lVar21 = (longlong)local_188.Data.ArrayNum;
          *(int *)&pFVar16[8].field_0x0 = local_188.Data.ArrayNum;
          if (local_188.Data.ArrayNum == 0) {
            *(int *)(pFVar16 + 0xc) = 0;
            pFVar16 = local_178;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,
                       local_188.Data.ArrayNum,(int *)(pFVar16 + 0xc));
            memcpy(*(void **)&pFVar16->field_0x0,FVar15.Data,lVar21 * 2);
            pFVar16 = local_178;
          }
          goto LAB_142b7b29d;
        }
        pFVar16 = local_178;
        if (this->bIgnoreInvalidPathWarning != false) goto LAB_142b7b29d;
        if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b7af72;
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        pFVar18 = pFVar18 + 0x10;
        uVar14 = (ulonglong)local_res10;
        bVar4 = true;
        pFVar16 = local_178;
      }
      else {
        pFVar16 = local_178;
        if (this->bIgnoreInvalidPathWarning != false) goto LAB_142b7b29d;
        if (2 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
LAB_142b7af72:
        pFVar18 = pFVar18 + 0x10;
        uVar14 = (ulonglong)local_res10;
        bVar4 = true;
        pFVar16 = local_178;
      }
    }
  }
  uVar2 = local_res20->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar19 = &(this->LocalDirs).ArrayMax;
  pTVar1 = &this->LocalDirs;
  if (*piVar19 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&pTVar1->AllocatorInstance,(this->LocalDirs).ArrayNum,piVar19);
  }
  uVar2 = local_res20->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar19 = &(this->PackageDirs).ArrayMax;
  if ((this->PackageDirs).ArrayMax < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,(ForAnyElementType *)this,(this->PackageDirs).ArrayNum,piVar19);
  }
  iVar9 = local_res20->ArrayNum;
  pFVar18 = (local_res20->AllocatorInstance).Data;
  pFVar16 = pFVar18 + (longlong)iVar9 * 0x10;
  do {
    while( true ) {
      if (local_res20->ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar18 == pFVar16) {
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          ::FDebug::DumpStackTraceToLog(Warning);
        }
        return this;
      }
      if (1 < *(int *)(pFVar18 + 8)) break;
LAB_142b7b650:
      pFVar18 = pFVar18 + 0x10;
    }
    local_d8 = *(wchar_t **)pFVar18;
    iStack_d0 = *(int *)(pFVar18 + 8) + -1;
    local_88._12_4_ = uStack_cc;
    local_88.Size = iStack_d0;
    local_88.DataPtr = local_d8;
    bVar6 = FPackageName::TryConvertToMountedPath
                      (&local_88,&local_170,&local_188,(FString *)0x0,(FString *)0x0,&local_130,
                       local_res18,(EErrorCode *)0x0);
    if (bVar6) {
      local_c8 = local_188.Data.AllocatorInstance.Data;
      iStack_c0 = local_188.Data.ArrayNum + -1;
      if (local_188.Data.ArrayNum == 0) {
        iStack_c0 = 0;
      }
      local_78._12_4_ = uStack_bc;
      local_78.Size = iStack_c0;
      local_78.DataPtr = (wchar_t *)local_188.Data.AllocatorInstance.Data;
      bVar6 = FPackageName::IsTempPackage(&local_78);
      if (!bVar6) {
        ::FString::ConcatFF(&local_150,&local_170,&local_130);
        pFVar17 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             pFVar17 + (longlong)(this->LocalDirs).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FScanPathContext *)(*pcVar3)();
          return pFVar13;
        }
        iVar10 = (this->LocalDirs).ArrayNum;
        if (iVar10 == (this->LocalDirs).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirs).ArrayMax);
        }
        (this->LocalDirs).ArrayNum = iVar10 + 1;
        pFVar17 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar17 = 0;
        *(FScriptContainerElement **)pFVar17 = local_150.Data.AllocatorInstance.Data;
        *(int *)(pFVar17 + 8) = local_150.Data.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_150.Data.ArrayMax;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::FString::ConcatFF(&local_140,&local_188,&local_130);
        pFVar17 = (this->PackageDirs).AllocatorInstance.Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_140) &&
            ((FScriptContainerElement *)&local_140 < pFVar17 + (longlong)*piVar19 * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FScanPathContext *)(*pcVar3)();
          return pFVar13;
        }
        iVar10 = (this->PackageDirs).ArrayNum;
        if (iVar10 == *piVar19) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar19);
        }
        (this->PackageDirs).ArrayNum = iVar10 + 1;
        pFVar17 = (this->PackageDirs).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar17 = 0;
        *(FScriptContainerElement **)pFVar17 = local_140.Data.AllocatorInstance.Data;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar17 + 8) = local_140.Data.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_140.Data.ArrayMax;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        goto LAB_142b7b650;
      }
      if (this->bIgnoreInvalidPathWarning != false) goto LAB_142b7b650;
      if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b7b406;
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_ScanPathsSynchr_1509aa1c0,
                 (FLogCategoryBase *)&LogAssetRegistry);
      pFVar18 = pFVar18 + 0x10;
      bVar4 = true;
    }
    else {
      if (this->bIgnoreInvalidPathWarning != false) goto LAB_142b7b650;
      if (2 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
LAB_142b7b406:
      bVar4 = true;
      pFVar18 = pFVar18 + 0x10;
    }
  } while( true );
}

// ~FScanPathContext @ 142b7d9b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::Impl::FScanPathContext::~FScanPathContext(FScanPathContext *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->LocalPaths).AllocatorInstance.Data,(this->LocalPaths).ArrayNum);
  pFVar1 = (this->LocalPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalFiles).AllocatorInstance.Data,(this->LocalFiles).ArrayNum);
  pFVar1 = (this->LocalFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PackageFiles).AllocatorInstance.Data,(this->PackageFiles).ArrayNum);
  pFVar1 = (this->PackageFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalDirs).AllocatorInstance.Data,(this->LocalDirs).ArrayNum);
  pFVar1 = (this->LocalDirs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PackageDirs).AllocatorInstance.Data,(this->PackageDirs).ArrayNum);
  pFVar1 = (this->PackageDirs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

