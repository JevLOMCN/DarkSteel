// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 7

// Call @ 144565350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  FIndexedCacheStorageManager *pFVar5;
  FCacheStorageMetaData *pFVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  int iStackX_20;
  wchar_t *in_stack_fffffffffffffea8;
  wchar_t *in_stack_fffffffffffffeb0;
  FString *pFStack_128;
  undefined8 uStack_120;
  FString FStack_118;
  FString *pFStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  FString FStack_f0;
  FString FStack_e0;
  FString *pFStack_d0;
  FScriptContainerElement *pFStack_c8;
  int *piStack_c0;
  FString FStack_b8;
  FString FStack_a8;
  FString **ppFStack_98;
  FString **ppFStack_90;
  int *piStack_88;
  FString FStack_80;
  code *pcStack_70;
  FString *pFStack_68;
  FString aFStack_60 [2];
  
  piVar14 = *(int **)param_1;
  uStack_f8 = *(uint *)((longlong)param_1 + 8);
  uVar9 = (ulonglong)(int)uStack_f8;
  uStackX_18 = 0;
  piStack_88 = piVar14 + uVar9;
  do {
    piVar2 = piStack_88;
    uVar15 = uStackX_18;
    piStack_c0 = piVar14;
    if (*(int *)((longlong)param_1 + 8) != (int)uVar9) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (piVar14 == piVar2) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
      return;
    }
    iVar19 = *piVar14;
    iStackX_20 = iVar19;
    pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
    if (pFVar6 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      pFStack_c8 = (FScriptContainerElement *)0x0;
      iVar13 = 0;
    }
    else {
      Experimental::FCacheStorageMetaData::MountCacheStorage(pFVar6,&FStack_e0);
      pFStack_c8 = FStack_e0.Data.AllocatorInstance.Data;
      iVar13 = FStack_e0.Data.ArrayNum;
    }
    _Src = pFStack_c8;
    FStack_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_e0.Data.ArrayNum = 0;
    FStack_e0.Data.ArrayMax = 0;
    if (iVar19 == 0) {
      uVar15 = uVar15 | 1;
      uStackX_18 = uVar15;
      pFVar7 = FPaths::ProjectPersistentDownloadDir(aFStack_60);
    }
    else {
      uVar15 = uVar15 | 2;
      FStack_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_f0.Data.ArrayNum = iVar13;
      uStackX_18 = uVar15;
      if (iVar13 == 0) {
        FStack_f0.Data.ArrayMax = 0;
      }
      else {
        in_stack_fffffffffffffea8 = (wchar_t *)&FStack_f0;
        in_stack_fffffffffffffeb0 =
             (wchar_t *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),iVar13);
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar13,0,(ForAnyElementType *)in_stack_fffffffffffffea8,iVar13,
                   &FStack_f0.Data.ArrayMax);
        memcpy(FStack_f0.Data.AllocatorInstance.Data,_Src,(longlong)iVar13 * 2);
      }
      pFVar7 = &FStack_f0;
    }
    FStack_118.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_118.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    FStack_118.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (((uVar15 & 2) != 0) &&
       (uVar15 = uVar15 & 0xfffffffd, uStackX_18 = uVar15,
       FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
    }
    if (((uVar15 & 1) != 0) &&
       (uStackX_18 = uVar15 & 0xfffffffe,
       aFStack_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(aFStack_60[0].Data.AllocatorInstance.Data);
    }
    if (FStack_118.Data.ArrayNum < 2) {
      if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
      }
      pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
      pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
      if (pFVar6 == (FCacheStorageMetaData *)0x0) {
        if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
          Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
        }
      }
      else {
        Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar6);
      }
      if (_Src == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(_Src);
      return;
    }
    bVar3 = ::FString::EndsWith(&FStack_118,L"/",1,IgnoreCase);
    if (!bVar3) {
      ::FString::AppendChars(&FStack_118,L"/",1);
    }
    pFStack_128 = (FString *)0x0;
    uStack_120 = 0;
    pFStack_108 = (FString *)0x0;
    uStack_100 = 0;
    ::FString::PrintfImpl(&FStack_80,L"%s/cache_%02d");
    pIVar8 = IFileManager::Get();
    FVar11.Data = FStack_118.Data.AllocatorInstance.Data;
    lVar17 = (longlong)FStack_118.Data.ArrayNum;
    FStack_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_b8.Data.ArrayNum = FStack_118.Data.ArrayNum;
    pcVar1 = *(code **)((longlong)*pIVar8 + 0xc0);
    if (FStack_118.Data.ArrayNum == 0) {
      FStack_b8.Data.ArrayMax = 0;
    }
    else {
      in_stack_fffffffffffffea8 = (wchar_t *)&FStack_b8;
      in_stack_fffffffffffffeb0 =
           (wchar_t *)
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),FStack_118.Data.ArrayNum);
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_118.Data.ArrayNum,0,(ForAnyElementType *)in_stack_fffffffffffffea8,
                 FStack_118.Data.ArrayNum,&FStack_b8.Data.ArrayMax);
      memcpy(FStack_b8.Data.AllocatorInstance.Data,FVar11.Data,lVar17 * 2);
    }
    FVar11.Data = FStack_80.Data.AllocatorInstance.Data;
    FStack_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = FStack_80.Data.ArrayNum;
    FStack_a8.Data.ArrayNum = iVar13;
    if (iVar13 == 0) {
      FStack_a8.Data.ArrayMax = 0;
    }
    else {
      in_stack_fffffffffffffea8 = (wchar_t *)&FStack_a8;
      in_stack_fffffffffffffeb0 =
           (wchar_t *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),iVar13);
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar13,0,(ForAnyElementType *)in_stack_fffffffffffffea8,iVar13,
                 &FStack_a8.Data.ArrayMax);
      memcpy(FStack_a8.Data.AllocatorInstance.Data,FVar11.Data,(longlong)iVar13 * 2);
    }
    ppFStack_98 = &pFStack_128;
    ppFStack_90 = &pFStack_108;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (FStack_118.Data.ArrayNum != 0) {
      FVar11.Data = FStack_118.Data.AllocatorInstance.Data;
    }
    pFStack_68 = &FStack_b8;
    pcStack_70 = TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
                 ::Call;
    (*pcVar1)(pIVar8,FVar11.Data,&pcStack_70);
    if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
    }
    if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    }
    uVar18 = 0;
    pFStack_d0 = (FString *)0x0;
    uVar9 = uVar18;
    if (0 < (int)uStack_120) {
      do {
        pFVar7 = pFStack_d0;
        uVar16 = (uint)uVar18;
        uVar15 = ~uVar16 >> 0x1f;
        if ((byte)LogConsoleResponse._0_1_ < 4) {
          pFVar7 = (FString *)(longlong)(int)uVar16;
        }
        else {
          uVar4 = 0;
          if ((int)uVar16 < (int)uStack_100) {
            uVar4 = uVar15;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((longlong)&(pFStack_108->Data).ArrayNum + uVar9) == 0) {
            in_stack_fffffffffffffeb0 = L"";
          }
          else {
            in_stack_fffffffffffffeb0 =
                 *(wchar_t **)((longlong)&(pFStack_108->Data).AllocatorInstance.Data + uVar9);
          }
          uVar4 = 0;
          if ((int)uVar16 < (int)uStack_120) {
            uVar4 = uVar15;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((longlong)&(pFStack_128->Data).ArrayNum + uVar9) == 0) {
            in_stack_fffffffffffffea8 = L"";
          }
          else {
            in_stack_fffffffffffffea8 =
                 *(wchar_t **)((longlong)&(pFStack_128->Data).AllocatorInstance.Data + uVar9);
          }
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        }
        pIVar8 = IFileManager::Get();
        pwVar12 = (wchar_t *)(longlong)(int)uStack_120;
        pcVar1 = *(code **)((longlong)*pIVar8 + 0x40);
        uVar4 = 0;
        if ((int)uVar16 < (int)uStack_120) {
          uVar4 = uVar15;
        }
        if ((uVar4 == 0) &&
           (in_stack_fffffffffffffea8 = (wchar_t *)pFVar7,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           in_stack_fffffffffffffeb0 = pwVar12, bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pFStack_128[(longlong)pFVar7].Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)pFStack_128[(longlong)pFVar7].Data.AllocatorInstance.Data;
        }
        pwVar10 = (wchar_t *)(longlong)(int)uStack_100;
        uVar4 = 0;
        if ((int)uVar16 < (int)uStack_100) {
          uVar4 = uVar15;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , in_stack_fffffffffffffea8 = (wchar_t *)pFVar7, in_stack_fffffffffffffeb0 = pwVar10,
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((longlong)&(pFStack_108->Data).ArrayNum + uVar9) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)((longlong)&(pFStack_108->Data).AllocatorInstance.Data + uVar9);
        }
        in_stack_fffffffffffffeb0 =
             (wchar_t *)((ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
        in_stack_fffffffffffffea8 =
             (wchar_t *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00);
        (*pcVar1)(pIVar8,pwVar10,pwVar12,1,in_stack_fffffffffffffea8,in_stack_fffffffffffffeb0,0,0,0
                 );
        pFStack_d0 = (FString *)((longlong)&(pFStack_d0->Data).AllocatorInstance.Data + 1);
        uVar18 = (ulonglong)(uVar16 + 1);
        uVar9 = uVar9 + 0x10;
        iVar19 = iStackX_20;
      } while ((int)(uVar16 + 1) < (int)uStack_120);
    }
    if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>(pFStack_108,(int)uStack_100);
    if (pFStack_108 != (FString *)0x0) {
      FMemory::Free(pFStack_108);
    }
    DestructItems<FString,int>(pFStack_128,(int)uStack_120);
    if (pFStack_128 != (FString *)0x0) {
      FMemory::Free(pFStack_128);
    }
    if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
    }
    pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
    if (pFVar6 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar6);
    }
    if (pFStack_c8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFStack_c8);
    }
    piVar14 = piStack_c0 + 1;
    uVar9 = (ulonglong)uStack_f8;
  } while( true );
}

// Call @ 144565360

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  return *(char *)(*(longlong *)param_1 + 0x24) != '\x02';
}

// Call @ 144565380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  return *(char *)(*(longlong *)param_1 + 0x24) != '\x02';
}

// Call @ 1445653a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Experimental::GetIniParameters'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::
Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 144565460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  FIndexedCacheStorageManager *pFVar7;
  FCacheStorageMetaData *pFVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  ForAnyElementType _Src;
  int iVar11;
  int *piVar12;
  undefined4 auStackX_8 [2];
  undefined1 auStackX_10 [8];
  int *piStackX_18;
  FString FStack_78;
  FString FStack_68;
  code *pcStack_58;
  undefined1 *puStack_50;
  FString FStack_48;
  
  bVar5 = false;
  bVar4 = false;
  auStackX_8[0] = 0;
  piVar12 = *(int **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  piStackX_18 = piVar12 + iVar1;
  while( true ) {
    piVar6 = piStackX_18;
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (piVar12 == piVar6) {
      if ((byte)LogConsoleResponse._0_1_ < 4) {
        return;
      }
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
    iVar2 = *piVar12;
    pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
    if (pFVar8 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      _Src.Data = (FScriptContainerElement *)0x0;
      iVar11 = 0;
    }
    else {
      Experimental::FCacheStorageMetaData::MountCacheStorage(pFVar8,&FStack_68);
      _Src.Data = FStack_68.Data.AllocatorInstance.Data;
      iVar11 = FStack_68.Data.ArrayNum;
    }
    FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_68.Data.ArrayNum = 0;
    FStack_68.Data.ArrayMax = 0;
    if (iVar2 == 0) {
      bVar5 = true;
      pFVar9 = FPaths::ProjectPersistentDownloadDir(&FStack_48);
    }
    else {
      bVar4 = true;
      FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_78.Data.ArrayNum = iVar11;
      if (iVar11 != 0) {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&FStack_78,iVar11,&FStack_78.Data.ArrayMax);
        memcpy(FStack_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 2);
      }
      pFVar9 = &FStack_78;
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if ((bVar4) &&
       (bVar4 = false, FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if ((bVar5) &&
       (bVar5 = false, FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (iVar11 < 2) break;
    pIVar10 = IFileManager::Get();
    puStack_50 = auStackX_10;
    pcStack_58 = TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
                 ::Call;
    (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,pFVar3,&pcStack_58);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
    if (pFVar8 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar8);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
    piVar12 = piVar12 + 1;
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
  pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
  if (pFVar8 == (FCacheStorageMetaData *)0x0) {
    if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
      Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else {
    Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar8);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

// Call @ 144565470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  bool bVar1;
  
  bVar1 = ``Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::
          operator()'::__l6::<lambda_1>::operator()(param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 144565480

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  if ((param_3->bIsValid) && (3 < (byte)LogConsoleResponse._0_1_)) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u__10llu__s_c_150d6fae0,
               (FLogCategoryBase *)&LogConsoleResponse);
  }
  return true;
}

