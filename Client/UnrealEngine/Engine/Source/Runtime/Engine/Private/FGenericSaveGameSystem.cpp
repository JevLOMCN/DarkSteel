// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// DeleteGame @ 14836a780

bool __thiscall
FGenericSaveGameSystem::DeleteGame
          (FGenericSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  IFileManager *pIVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  void *local_18 [2];
  
  pIVar3 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x38);
  puVar4 = (undefined8 *)(**(code **)((longlong)*this + 0x78))(this,local_18,param_2);
  if (*(int *)(puVar4 + 1) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)*puVar4;
  }
  uVar2 = (*pcVar1)(pIVar3,pwVar5,1,0,!param_1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return (bool)uVar2;
}

// DoesSaveGameExist @ 14836d5c0

bool __thiscall
FGenericSaveGameSystem::DoesSaveGameExist(FGenericSaveGameSystem *this,wchar_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)((longlong)*this + 0x18))();
  return iVar1 == 0;
}

// DoesSaveGameExistWithResult @ 14836d5e0

ESaveExistsResult __thiscall
FGenericSaveGameSystem::DoesSaveGameExistWithResult
          (FGenericSaveGameSystem *this,wchar_t *param_1,int param_2)

{
  code *pcVar1;
  IFileManager *pIVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  void *local_18 [2];
  
  pIVar2 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x110);
  puVar3 = (undefined8 *)(**(code **)((longlong)*this + 0x78))(this,local_18,param_1);
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)*puVar3;
  }
  lVar4 = (*pcVar1)(pIVar2,pwVar5);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return (ESaveExistsResult)(lVar4 < 0);
}

// DoesSaveSystemSupportMultipleUsers @ 14836d670

bool __thiscall
FGenericSaveGameSystem::DoesSaveSystemSupportMultipleUsers(FGenericSaveGameSystem *this)

{
  return false;
}

// GetSaveGameNames @ 148387ce0

bool __thiscall
FGenericSaveGameSystem::GetSaveGameNames
          (FGenericSaveGameSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FString *pFVar12;
  undefined1 local_res20 [8];
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58 = (FString *)0x0;
  local_50 = 0;
  pFVar6 = FPaths::ProjectSavedDir();
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar6->Data).ArrayNum;
  pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
  uVar10 = (0xc - (uint)((pFVar6->Data).ArrayNum != 0)) + iVar1;
  local_48.Data.ArrayNum = iVar1;
  if ((int)uVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar9,(longlong)iVar1 * 2);
  }
  ::FString::PathAppend(&local_48,L"SaveGames/",10);
  pIVar7 = IFileManager::Get();
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar7 + 0x78))(pIVar7,&local_58,FVar11.Data,L"*.sav");
  iVar1 = (int)local_50;
  pFVar12 = local_58 + (int)local_50;
  pFVar6 = local_58;
  while( true ) {
    if ((int)local_50 != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar6 == pFVar12) break;
    pFVar8 = (FScriptContainerElement *)FPaths::GetBaseFilename(&local_38,pFVar6,true);
    pFVar9 = (param_1->AllocatorInstance).Data;
    if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
    *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  return true;
}

// GetSaveGamePath @ 148387f40

FString * __thiscall
FGenericSaveGameSystem::GetSaveGamePath
          (FGenericSaveGameSystem *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FPaths::ProjectSavedDir();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%sSaveGames/%s.sav");
  return __return_storage_ptr__;
}

// LoadGame @ 148394730

bool __thiscall
FGenericSaveGameSystem::LoadGame
          (FGenericSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  void *local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x78))(this,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar2;
  }
  bVar1 = FFileHelper::LoadFileToArray(param_4,pwVar3,0);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar1;
}

// PlatformHasNativeUI @ 148399330

bool __thiscall FGenericSaveGameSystem::PlatformHasNativeUI(FGenericSaveGameSystem *this)

{
  return false;
}

// SaveGame @ 1483a2880

bool __thiscall
FGenericSaveGameSystem::SaveGame
          (FGenericSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  TArrayView<unsigned_char_const_,__int64> local_28;
  void *local_18 [2];
  
  pIVar6 = IFileManager::Get();
  puVar7 = (undefined8 *)(**(code **)((longlong)*this + 0x78))(this,local_18,param_2);
  if (*(int *)(puVar7 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar7;
  }
  iVar1 = param_4->ArrayNum;
  pFVar2 = (param_4->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_28.DataPtr = (uchar *)pFVar2;
  local_28.ArrayNum = (longlong)iVar1;
  bVar4 = FFileHelper::SaveArrayToFile(&local_28,pwVar8,pIVar6,0);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar4;
}

