// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// operator() @ 14173dbd0

/* WARNING: Removing unreachable block (ram,0x00014173de76) */

void __thiscall
`FLocalizationResourceTextSource::LoadLocalizedResources'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a0;
  FScriptContainerElement *local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  
  if (0 < *(int *)(*(longlong *)this + 0x10)) {
    FLocalizationResourceTextSource::GetChunkedLocalizationTargets(&local_80);
    FVar12.Data = local_80.AllocatorInstance.Data;
    local_a0 = param_1;
    iVar11 = local_80.ArrayNum;
    if (local_80.ArrayNum != 0) {
      iVar11 = 0;
      bVar4 = ``FLocalizationResourceTextSource::LoadLocalizedResources'::__l2::<lambda_1>::
              operator()'::__l5::<lambda_1>::operator()
                        (&local_a0,(FString *)local_80.AllocatorInstance.Data);
      bVar4 = !bVar4;
      iVar9 = 0;
      do {
        iVar6 = iVar9;
        do {
          iVar6 = iVar6 + 1;
          if (local_80.ArrayNum <= iVar6) break;
          bVar5 = ``FLocalizationResourceTextSource::LoadLocalizedResources'::__l2::<lambda_1>::
                  operator()'::__l5::<lambda_1>::operator()
                            (&local_a0,(FString *)(FVar12.Data + (longlong)iVar6 * 0x10));
        } while (bVar4 == !bVar5);
        iVar13 = iVar6 - iVar9;
        if (bVar4 == false) {
          DestructItems<FString,int>((FString *)(FVar12.Data + (longlong)iVar9 * 0x10),iVar13);
        }
        else {
          if (iVar11 != iVar9) {
            memmove(FVar12.Data + (longlong)iVar11 * 0x10,FVar12.Data + (longlong)iVar9 * 0x10,
                    (longlong)iVar13 << 4);
          }
          iVar11 = iVar11 + iVar13;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar9 = iVar6;
      } while (iVar6 < local_80.ArrayNum);
    }
    local_80.ArrayNum = iVar11;
    iVar11 = local_80.ArrayNum;
    local_98 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
    FVar12.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      pFVar8 = local_98;
      if (local_80.ArrayNum != iVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar12.Data == pFVar8) break;
      lVar2 = *(longlong *)this;
      piVar10 = *(int **)(lVar2 + 8);
      iVar9 = *(int *)(lVar2 + 0x10);
      piVar1 = piVar10 + iVar9;
      while( true ) {
        if (*(int *)(lVar2 + 0x10) != iVar9) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (piVar10 == piVar1) break;
        TextLocalizationResourceUtil::GetLocalizationTargetNameForChunkId
                  (&local_60,(FString *)FVar12.Data,*piVar10);
        pTVar7 = &FPaths::ProjectContentDir(&local_50)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_70,pTVar7,0xe - (uint)(pTVar7->ArrayNum != 0));
        ::FString::PathAppend((FString *)&local_70,L"Localization",0xc);
        iVar13 = 0;
        iVar6 = local_60.Data.ArrayNum + -1;
        if (local_60.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        if ((local_70.ArrayNum == 0) && (iVar6 + 1 != 0)) {
          iVar13 = 1;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_90,&local_70,iVar13 + iVar6 + 1)
        ;
        ::FString::PathAppend
                  ((FString *)&local_90,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar6);
        pTVar7 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
        if (((pTVar7 <= &local_90) && (&local_90 < pTVar7 + param_1->ArrayMax)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(FScriptContainerElement **)pFVar8 = local_90.AllocatorInstance.Data;
        *(int *)(pFVar8 + 8) = local_90.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_90.ArrayMax;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        piVar10 = piVar10 + 1;
      }
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14173df20

void __thiscall
`FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::<lambda_1>::operator()
          (void *this,FTextLocalizationResource *param_1,FString *param_2,FString *param_3,
          FString *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar3 = TextLocalizationResourceUtil::GetDisabledLocalizationTargets();
  if (0 < pTVar3->ArrayNum) {
    FPaths::GetBaseFilename((FString *)&local_78,param_4,true);
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    pFVar8 = pFVar10 + (longlong)pTVar3->ArrayNum * 0x10;
    FVar5.Data = local_78.AllocatorInstance.Data;
    iVar6 = local_78.ArrayNum;
    for (; pFVar10 != pFVar8; pFVar10 = pFVar10 + 0x10) {
      iVar1 = *(int *)(pFVar10 + 8);
      local_78.AllocatorInstance.Data = FVar5.Data;
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_14173e214;
        iVar6 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar10,(wchar_t *)FVar5.Data);
        bVar11 = iVar6 == 0;
        iVar6 = local_78.ArrayNum;
      }
      else {
        bVar11 = iVar1 + iVar6 == 1;
      }
      FVar5.Data = local_78.AllocatorInstance.Data;
      if (bVar11) goto LAB_14173e214;
    }
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
    }
  }
  pTVar4 = &::operator/((FString *)&local_58,param_2,param_3)->Data;
  iVar1 = (param_4->Data).ArrayNum;
  iVar7 = 2;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((pTVar4->ArrayNum != 0) || (iVar1 = 2, iVar6 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar4,iVar6 + iVar1);
  ::FString::PathAppend
            ((FString *)&local_38,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar6);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  FTextLocalizationResource::LoadFromFile(param_1,(FString *)&local_38,param_5);
  iVar6 = (param_2->Data).ArrayNum;
  iVar1 = PlatformLocalizationFolderName.Data.ArrayNum + -1;
  if (PlatformLocalizationFolderName.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  local_78.ArrayNum = iVar6;
  if ((iVar6 == 0) && (iVar1 != -1)) {
    pFVar10 = (param_2->Data).AllocatorInstance.Data;
    iVar2 = iVar1 + 2;
LAB_14173e08f:
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar2 == 0) {
      local_78.ArrayMax = 0;
      goto LAB_14173e0dd;
    }
  }
  else {
    pFVar10 = (param_2->Data).AllocatorInstance.Data;
    iVar2 = iVar1 + 1;
    if (iVar6 == 0) goto LAB_14173e08f;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar9 = iVar6 + iVar2;
  if ((int)uVar9 < iVar6) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar9,0,&local_78.AllocatorInstance,iVar6,&local_78.ArrayMax);
  if (iVar6 != 0) {
    memcpy(local_78.AllocatorInstance.Data,pFVar10,(longlong)iVar6 * 2);
  }
LAB_14173e0dd:
  ::FString::PathAppend
            ((FString *)&local_78,
             (wchar_t *)PlatformLocalizationFolderName.Data.AllocatorInstance.Data,iVar1);
  iVar6 = PlatformName.Data.ArrayNum + -1;
  if (PlatformName.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((local_78.ArrayNum != 0) || (iVar1 = 2, iVar6 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,&local_78,iVar6 + iVar1);
  ::FString::PathAppend
            ((FString *)&local_58,(wchar_t *)PlatformName.Data.AllocatorInstance.Data,iVar6);
  iVar1 = (param_3->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((local_58.ArrayNum != 0) || (iVar1 = 2, iVar6 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_68,&local_58,iVar1 + iVar6);
  ::FString::PathAppend
            ((FString *)&local_68,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar6);
  iVar1 = (param_4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((local_68.ArrayNum != 0) || (iVar6 == -1)) {
    iVar7 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_68,iVar6 + iVar7);
  ::FString::PathAppend
            ((FString *)&local_48,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar6);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  bVar11 = FPaths::FileExists((FString *)&local_48);
  if (bVar11) {
    FTextLocalizationResource::LoadFromFile(param_1,(FString *)&local_48,param_5);
  }
  FVar5.Data = local_38.AllocatorInstance.Data;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
    FVar5.Data = local_38.AllocatorInstance.Data;
  }
LAB_14173e214:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetChunkedLocalizationTargets @ 14175be80

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FLocalizationResourceTextSource::GetChunkedLocalizationTargets
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"/Script/UnrealEd.ProjectPackagingSettings",L"LocalizationTargetsToChunk",
             __return_storage_ptr__,&GGameIni);
  this = TextLocalizationResourceUtil::GetDisabledLocalizationTargets();
  if (this->ArrayNum < 1) {
    return __return_storage_ptr__;
  }
  iVar1 = __return_storage_ptr__->ArrayNum;
  if (iVar1 == 0) {
    return __return_storage_ptr__;
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this,(FString *)pFVar2);
  bVar4 = !bVar4;
  iVar6 = iVar8;
  do {
    iVar3 = iVar6;
    do {
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) break;
      bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (this,(FString *)(pFVar2 + (longlong)iVar3 * 0x10));
    } while (bVar4 == !bVar5);
    iVar7 = iVar3 - iVar6;
    if (bVar4 == false) {
      DestructItems<FString,int>((FString *)(pFVar2 + (longlong)iVar6 * 0x10),iVar7);
    }
    else {
      if (iVar8 != iVar6) {
        memmove(pFVar2 + (longlong)iVar8 * 0x10,pFVar2 + (longlong)iVar6 * 0x10,(longlong)iVar7 << 4
               );
      }
      iVar8 = iVar8 + iVar7;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar6 = iVar3;
    if (iVar1 <= iVar3) {
      __return_storage_ptr__->ArrayNum = iVar8;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetLocalizedCultureNames @ 14175eee0

void __thiscall
FLocalizationResourceTextSource::GetLocalizedCultureNames
          (FLocalizationResourceTextSource *this,ELocalizationLoadFlags param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if ((param_1 & Editor) != None) {
    pTVar5 = FPaths::GetEditorLocalizationPaths();
    if (&local_28 == pTVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,&local_28.AllocatorInstance,&local_28.ArrayNum,
                         &local_28.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_28.AllocatorInstance.Data + (longlong)iVar4 * 0x10,
                 (FString *)(pTVar5->AllocatorInstance).Data,iVar1);
    }
  }
  if ((param_1 & Game) != None) {
    pTVar5 = FPaths::GetGameLocalizationPaths();
    if (&local_28 == pTVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,&local_28.AllocatorInstance,&local_28.ArrayNum,
                         &local_28.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_28.AllocatorInstance.Data + (longlong)iVar4 * 0x10,
                 (FString *)(pTVar5->AllocatorInstance).Data,iVar1);
    }
  }
  if ((param_1 & Engine) != None) {
    pTVar5 = FPaths::GetEngineLocalizationPaths();
    if (&local_28 == pTVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,&local_28.AllocatorInstance,&local_28.ArrayNum,
                         &local_28.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_28.AllocatorInstance.Data + (longlong)iVar4 * 0x10,
                 (FString *)(pTVar5->AllocatorInstance).Data,iVar1);
    }
  }
  if ((param_1 & Additional) != None) {
    TMulticastDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FCoreDelegates::GatherAdditionalLocResPathsCallback,&local_28);
  }
  TextLocalizationResourceUtil::GetLocalizedCultureNames(&local_18,&local_28);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<TSizedDefaultAllocator<32>_>
            (param_2,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetNativeCultureName @ 14175fd30

bool __thiscall
FLocalizationResourceTextSource::GetNativeCultureName
          (FLocalizationResourceTextSource *this,ELocalizedTextSourceCategory param_1,
          FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString local_18;
  
  TextLocalizationResourceUtil::GetNativeCultureName(&local_18,param_1);
  if (local_18.Data.ArrayNum < 2) {
    bVar2 = false;
  }
  else if (param_2 == &local_18) {
    bVar2 = true;
  }
  else {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayMax = local_18.Data.ArrayMax;
    (param_2->Data).ArrayNum = local_18.Data.ArrayNum;
    bVar2 = true;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadLocalizedResources @ 14176b9b0

void __thiscall
FLocalizationResourceTextSource::LoadLocalizedResources
          (FLocalizationResourceTextSource *this,ELocalizationLoadFlags param_1,
          TArrayView<FString_const_,int> *param_2,FTextLocalizationResource *param_3,
          FTextLocalizationResource *param_4)

{
  code *pcVar1;
  FString *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  bool local_res10 [8];
  FLocalizationResourceTextSource *local_res18;
  ForAnyElementType local_138;
  int local_130 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  ForAnyElementType local_e8;
  int local_e0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<FString_const_,int> local_88;
  TArrayView<FString_const_,int> local_78;
  TArrayView<FString_const_,int> local_68;
  TArrayView<FString_const_,int> local_58 [2];
  
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_res18 = this;
  if ((param_1 & (ForceLocalizedGame|Game)) != None) {
    pTVar7 = FPaths::GetGameLocalizationPaths();
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = pTVar7->ArrayNum;
    pFVar12 = (pTVar7->AllocatorInstance).Data;
    local_f8.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_f8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,0,&local_f8.AllocatorInstance,iVar5,&local_f8.ArrayMax);
      ConstructItems<FString,FString,int>(local_f8.AllocatorInstance.Data,(FString *)pFVar12,iVar5);
    }
    `FLocalizationResourceTextSource::LoadLocalizedResources'::__l2::<lambda_1>::operator()
              (&local_res18,&local_f8);
    lVar10 = (longlong)local_f8.ArrayNum;
    if (local_f8.ArrayNum != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_f8.ArrayNum,&local_e8,local_e0,local_e0 + 1);
      memmove(local_e8.Data + (longlong)iVar5 * 0x10,local_f8.AllocatorInstance.Data,lVar10 << 4);
      local_f8.ArrayNum = 0;
    }
    DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  if ((param_1 & Editor) != None) {
    pTVar7 = FPaths::GetEditorLocalizationPaths();
    if ((&local_128 == pTVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar5,&local_128.AllocatorInstance,&local_128.ArrayNum,
                         &local_128.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_128.AllocatorInstance.Data + (longlong)iVar6 * 0x10,
                 (FString *)(pTVar7->AllocatorInstance).Data,iVar5);
    }
    pTVar7 = FPaths::GetToolTipLocalizationPaths();
    if ((&local_128 == pTVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar5,&local_128.AllocatorInstance,&local_128.ArrayNum,
                         &local_128.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_128.AllocatorInstance.Data + (longlong)iVar6 * 0x10,
                 (FString *)(pTVar7->AllocatorInstance).Data,iVar5);
    }
    local_res10[0] = false;
    bVar4 = FConfigCacheIni::GetBool
                      (GConfig,L"Internationalization",L"ShouldUseLocalizedPropertyNames",
                       local_res10,&GEditorSettingsIni);
    if (!bVar4) {
      FConfigCacheIni::GetBool
                (GConfig,L"Internationalization",L"ShouldUseLocalizedPropertyNames",local_res10,
                 &GEngineIni);
    }
    if (local_res10[0] == false) {
      pTVar8 = FPaths::GetPropertyNameLocalizationPaths();
      pTVar7 = &local_d8;
    }
    else {
      pTVar8 = FPaths::GetPropertyNameLocalizationPaths();
      pTVar7 = &local_128;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator+=(pTVar7,pTVar8);
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  if ((param_1 & Engine) != None) {
    pTVar7 = FPaths::GetEngineLocalizationPaths();
    if ((&local_108 == pTVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar5,&local_108.AllocatorInstance,&local_108.ArrayNum,
                         &local_108.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10,
                 (FString *)(pTVar7->AllocatorInstance).Data,iVar5);
    }
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if ((param_1 & Additional) != None) {
    TMulticastDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FCoreDelegates::GatherAdditionalLocResPathsCallback,&local_c8);
  }
  iVar5 = local_e0[0];
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  if (local_e0[0] != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_e0[0],&local_138,local_130,local_130 + 1);
    ConstructItems<FString,FString,int>
              (local_138.Data + (longlong)iVar6 * 0x10,(FString *)local_e8.Data,iVar5);
  }
  iVar5 = local_128.ArrayNum;
  if (local_128.ArrayNum != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_128.ArrayNum,&local_138,local_130,local_130 + 1);
    ConstructItems<FString,FString,int>
              (local_138.Data + (longlong)iVar6 * 0x10,(FString *)local_128.AllocatorInstance.Data,
               iVar5);
  }
  iVar5 = local_108.ArrayNum;
  if (local_108.ArrayNum != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_108.ArrayNum,&local_138,local_130,local_130 + 1);
    ConstructItems<FString,FString,int>
              (local_138.Data + (longlong)iVar6 * 0x10,(FString *)local_108.AllocatorInstance.Data,
               iVar5);
  }
  iVar5 = local_c8.ArrayNum;
  if (local_c8.ArrayNum != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_c8.ArrayNum,&local_138,local_130,local_130 + 1);
    ConstructItems<FString,FString,int>
              (local_138.Data + (longlong)iVar6 * 0x10,(FString *)local_c8.AllocatorInstance.Data,
               iVar5);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  if ((param_1 & Native) != None) {
    DestructItems<FString,int>((FString *)0x0,0);
    FVar11.Data = local_138.Data;
    iVar5 = local_130[0];
    local_118.ArrayNum = local_130[0];
    if ((local_130[0] != 0) || (local_118.ArrayMax != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_130[0],local_118.ArrayMax,&local_118.AllocatorInstance,local_130[0],
                 &local_118.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_118.AllocatorInstance.Data,(FString *)FVar11.Data,iVar5);
    }
    iVar5 = local_d8.ArrayNum;
    uVar9 = (ulonglong)local_d8.ArrayNum;
    if (0 < local_d8.ArrayNum) {
      pFVar12 = local_d8.AllocatorInstance.Data + uVar9 * 0x10;
      FVar11.Data = local_d8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar11.Data == pFVar12) break;
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (&local_118,(FString *)FVar11.Data);
        uVar9 = local_d8._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 0x10;
      }
    }
  }
  iVar5 = local_130[0];
  local_a8 = local_138.Data;
  local_b8 = (FString *)0x0;
  iStack_b0 = 0;
  pFVar2 = param_2->DataPtr;
  uVar3._0_4_ = param_2->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_2->field_0xc;
  if ((local_130[0] < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_a0 = iVar5;
  iVar5 = local_118.ArrayNum;
  local_98 = local_118.AllocatorInstance.Data;
  if ((local_118.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78._12_4_ = uStack_ac;
  local_78.ArrayNum = iStack_b0;
  local_68._12_4_ = uStack_9c;
  local_68.ArrayNum = iStack_a0;
  local_78.DataPtr = local_b8;
  iStack_90 = iVar5;
  local_58[0]._12_4_ = uStack_8c;
  local_58[0].ArrayNum = iVar5;
  local_68.DataPtr = (FString *)local_a8;
  local_58[0].DataPtr = (FString *)local_98;
  local_88.DataPtr = pFVar2;
  local_88._8_8_ = uVar3;
  LoadLocalizedResourcesFromPaths
            (this,local_58,&local_68,&local_78,param_1,&local_88,param_3,param_4);
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_138.Data,local_130[0]);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e8.Data,local_e0[0]);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  return;
}

// LoadLocalizedResourcesFromPaths @ 14176c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths
          (FLocalizationResourceTextSource *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2,TArrayView<FString_const_,int> *param_3,
          ELocalizationLoadFlags param_4,TArrayView<FString_const_,int> *param_5,
          FTextLocalizationResource *param_6,FTextLocalizationResource *param_7)

{
  code *pcVar1;
  TArrayView<FString_const_,int> *pTVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  IFileManager *pIVar8;
  FString *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  FString *pFVar22;
  FString *pFVar23;
  bool bVar24;
  undefined1 auStackY_308 [32];
  undefined1 local_2c8 [4];
  int local_2c4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  FString *local_2a0;
  TArrayView<FString_const_,int> *local_298;
  FString local_290;
  FTextLocalizationResource *local_280;
  FString *local_278;
  longlong local_270;
  TArrayView<FString_const_,int> *local_268;
  FString local_260;
  FTextLocalizationMetaDataResource local_250;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_218;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_208;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1f8;
  FString local_1e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FScopedBootTiming local_188;
  wchar_t local_168 [128];
  void *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_280 = param_7;
  local_298 = param_5;
  bVar24 = -1 < CpuChannel->Enabled;
  local_268 = param_2;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId154,"LoadLocalizedResourcesFromPaths",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\LocalizationResourceTextSource.cpp"
               ,0x9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId154);
  }
  FScopedBootTiming::FScopedBootTiming(&local_188,"LoadLocalizedResourcesFromPaths");
  iVar5 = (**(code **)(this->_padding_ + 8))(this);
  iVar5 = -iVar5;
  local_2a0 = (FString *)CONCAT44(local_2a0._4_4_,param_5->ArrayNum + iVar5);
  piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_2c4 = iVar5;
  if ((*piVar19 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FPaths::GetPlatformLocalizationFolderName(&PlatformLocalizationFolderName);
    atexit(`FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::
           _dynamic_atexit_destructor_for__PlatformLocalizationFolderName__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar19 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    local_68 = (void *)0x0;
    local_60 = local_168;
    local_58 = 7;
    pwVar14 = FGenericPlatformString::Convert<char,wchar_t>(local_168,8,"Windows",8);
    if ((pwVar14 == (wchar_t *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FString::FString(&PlatformName,local_60);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    atexit(`FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::
           _dynamic_atexit_destructor_for__PlatformName__);
    _Init_thread_footer(&::_TSS1);
  }
  if (((param_4 & Native) != None) && (0 < param_1->ArrayNum)) {
    pFVar23 = param_1->DataPtr;
    pFVar22 = pFVar23 + param_1->ArrayNum;
    for (; pFVar23 != pFVar22; pFVar23 = pFVar23 + 1) {
      pIVar8 = IFileManager::Get();
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,pwVar14);
      if (cVar3 != '\0') {
        pFVar9 = FPaths::GetBaseFilename(&local_1c8,pFVar23,true);
        ::FString::ConcatFC(&local_1e8,pFVar9,L".locmeta");
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        iVar5 = (pFVar23->Data).ArrayNum;
        local_250.NativeCulture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.NativeCulture.Data.ArrayNum = 0;
        local_250.NativeCulture.Data.ArrayMax = 0;
        local_250.NativeLocRes.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar18 = local_1e8.Data.ArrayNum + -1;
        if (local_1e8.Data.ArrayNum == 0) {
          iVar18 = 0;
        }
        local_250.NativeLocRes.Data.ArrayNum = 0;
        local_250.NativeLocRes.Data.ArrayMax = 0;
        local_250.CompiledCultures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.CompiledCultures.ArrayNum = 0;
        local_250.CompiledCultures.ArrayMax = 0;
        local_250.bIsUGC = false;
        iVar6 = iVar18 + 1;
        local_2b0.Data.ArrayNum = iVar5;
        if ((iVar5 == 0) && (iVar6 != 0)) {
          pFVar17 = (pFVar23->Data).AllocatorInstance.Data;
          iVar6 = iVar18 + 2;
LAB_14176c5c6:
          local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar6 != 0) goto LAB_14176c5d0;
          local_2b0.Data.ArrayMax = 0;
        }
        else {
          pFVar17 = (pFVar23->Data).AllocatorInstance.Data;
          if (iVar5 == 0) goto LAB_14176c5c6;
LAB_14176c5d0:
          local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar21 = iVar5 + iVar6;
          if ((int)uVar21 < iVar5) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar21,0,(ForAnyElementType *)&local_2b0,iVar5,&local_2b0.Data.ArrayMax);
          if (iVar5 != 0) {
            memcpy(local_2b0.Data.AllocatorInstance.Data,pFVar17,(longlong)iVar5 * 2);
          }
        }
        ::FString::PathAppend(&local_2b0,(wchar_t *)local_1e8.Data.AllocatorInstance.Data,iVar18);
        bVar4 = FTextLocalizationMetaDataResource::LoadFromFile(&local_250,&local_2b0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        param_5 = local_298;
        if ((bVar4) && (1 < local_250.NativeCulture.Data.ArrayNum)) {
          pFVar9 = local_298->DataPtr;
          pFVar15 = pFVar9 + local_298->ArrayNum;
          iVar5 = local_250.NativeCulture.Data.ArrayNum;
          for (; pFVar9 != pFVar15; pFVar9 = pFVar9 + 1) {
            iVar18 = (pFVar9->Data).ArrayNum;
            if (iVar18 == iVar5) {
              if (iVar18 < 2) goto LAB_14176c6f0;
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_250.NativeCulture.Data.AllocatorInstance.Data);
              bVar4 = iVar5 == 0;
              iVar5 = local_250.NativeCulture.Data.ArrayNum;
            }
            else {
              bVar4 = iVar18 + iVar5 == 1;
            }
            if (bVar4) goto LAB_14176c6f0;
          }
          pFVar9 = FPaths::GetCleanFilename(&local_1b8,&local_250.NativeLocRes);
          `FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::<lambda_1>::
          operator()(local_2c8,param_6,pFVar23,&local_250.NativeCulture,pFVar9,(int)local_2a0);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
LAB_14176c6f0:
        DestructItems<FString,int>
                  ((FString *)local_250.CompiledCultures.AllocatorInstance.Data,
                   local_250.CompiledCultures.ArrayNum);
        if (local_250.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.CompiledCultures.AllocatorInstance.Data);
        }
        if (local_250.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.NativeLocRes.Data.AllocatorInstance.Data);
        }
        if (local_250.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.NativeCulture.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      iVar5 = local_2c4;
    }
  }
  if (0 < local_268->ArrayNum) {
    iVar18 = param_5->ArrayNum;
    uVar21 = 0;
    if (0 < iVar18) {
      local_270 = 0;
      do {
        pTVar2 = local_268;
        lVar20 = local_270;
        uVar12 = 0;
        if ((int)uVar21 < iVar18) {
          uVar12 = ~uVar21 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar23 = pTVar2->DataPtr;
        local_2a0 = (FString *)((longlong)&(param_5->DataPtr->Data).AllocatorInstance.Data + lVar20)
        ;
        pFVar22 = pFVar23 + pTVar2->ArrayNum;
        local_278 = pFVar22;
        if (pFVar23 != pFVar22) {
          do {
            pIVar8 = IFileManager::Get();
            if ((pFVar23->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
            }
            cVar3 = (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,pwVar14);
            if (cVar3 != '\0') {
              pFVar9 = FPaths::GetBaseFilename(&local_1a8,pFVar23,true);
              ::FString::ConcatFC(&local_290,pFVar9,L".locres");
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              pTVar10 = TextLocalizationResourceUtil::GetDisabledLocalizationTargets();
              if (0 < pTVar10->ArrayNum) {
                FPaths::GetBaseFilename(&local_260,&local_290,true);
                pFVar17 = (pTVar10->AllocatorInstance).Data;
                pFVar16 = pFVar17 + (longlong)pTVar10->ArrayNum * 0x10;
                uVar13 = local_260.Data._8_8_;
                for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x10) {
                  iVar18 = *(int *)(pFVar17 + 8);
                  if (iVar18 == (int)uVar13) {
                    if (1 < iVar18) {
                      iVar18 = FGenericPlatformStricmp::Stricmp
                                         (*(wchar_t **)pFVar17,
                                          (wchar_t *)local_260.Data.AllocatorInstance.Data);
                      bVar4 = iVar18 == 0;
                      uVar13 = local_260.Data._8_8_;
                      goto LAB_14176c8a9;
                    }
LAB_14176c970:
                    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_260.Data.AllocatorInstance.Data);
                    }
                    goto LAB_14176cb44;
                  }
                  bVar4 = iVar18 + (int)uVar13 == 1;
LAB_14176c8a9:
                  if (bVar4) goto LAB_14176c970;
                }
                if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.Data.AllocatorInstance.Data);
                }
              }
              pTVar11 = &::operator/(&local_198,pFVar23,local_2a0)->Data;
              iVar18 = local_290.Data.ArrayNum + -1;
              if (local_290.Data.ArrayNum == 0) {
                iVar18 = 0;
              }
              if ((pTVar11->ArrayNum != 0) || (iVar6 = 1, iVar18 + 1 == 0)) {
                iVar6 = 0;
              }
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_1d8,pTVar11,iVar6 + iVar18 + 1);
              ::FString::PathAppend
                        ((FString *)&local_1d8,(wchar_t *)local_290.Data.AllocatorInstance.Data,
                         iVar18);
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              FTextLocalizationResource::LoadFromFile
                        (local_280,(FString *)&local_1d8,iVar5 + uVar21);
              iVar18 = (pFVar23->Data).ArrayNum;
              iVar6 = PlatformLocalizationFolderName.Data.ArrayNum + -1;
              if (PlatformLocalizationFolderName.Data.ArrayNum == 0) {
                iVar6 = 0;
              }
              iVar7 = iVar6 + 1;
              local_2c0.ArrayNum = iVar18;
              if ((iVar18 == 0) && (iVar7 != 0)) {
                iVar7 = iVar6 + 2;
                pFVar17 = (pFVar23->Data).AllocatorInstance.Data;
LAB_14176c997:
                local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (iVar7 != 0) goto LAB_14176c9a1;
                local_2c0.ArrayMax = 0;
              }
              else {
                pFVar17 = (pFVar23->Data).AllocatorInstance.Data;
                if (iVar18 == 0) goto LAB_14176c997;
LAB_14176c9a1:
                local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                uVar12 = iVar18 + iVar7;
                if ((int)uVar12 < iVar18) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar12,0,&local_2c0.AllocatorInstance,iVar18,&local_2c0.ArrayMax);
                if (iVar18 != 0) {
                  memcpy(local_2c0.AllocatorInstance.Data,pFVar17,(longlong)iVar18 * 2);
                }
              }
              ::FString::PathAppend
                        ((FString *)&local_2c0,
                         (wchar_t *)PlatformLocalizationFolderName.Data.AllocatorInstance.Data,iVar6
                        );
              iVar18 = PlatformName.Data.ArrayNum + -1;
              if (PlatformName.Data.ArrayNum == 0) {
                iVar18 = 0;
              }
              if ((local_2c0.ArrayNum != 0) || (iVar6 = 1, iVar18 + 1 == 0)) {
                iVar6 = 0;
              }
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_208,&local_2c0,iVar6 + iVar18 + 1);
              ::FString::PathAppend
                        ((FString *)&local_208,(wchar_t *)PlatformName.Data.AllocatorInstance.Data,
                         iVar18);
              pFVar22 = local_2a0;
              iVar6 = (local_2a0->Data).ArrayNum;
              iVar18 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar18 = 0;
              }
              if ((local_208.ArrayNum != 0) || (iVar6 = 1, iVar18 + 1 == 0)) {
                iVar6 = 0;
              }
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_218,&local_208,iVar6 + iVar18 + 1);
              ::FString::PathAppend
                        ((FString *)&local_218,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data,
                         iVar18);
              iVar18 = local_290.Data.ArrayNum + -1;
              if (local_290.Data.ArrayNum == 0) {
                iVar18 = 0;
              }
              if ((local_218.ArrayNum != 0) || (iVar6 = 1, iVar18 + 1 == 0)) {
                iVar6 = 0;
              }
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_1f8,&local_218,iVar6 + iVar18 + 1);
              ::FString::PathAppend
                        ((FString *)&local_1f8,(wchar_t *)local_290.Data.AllocatorInstance.Data,
                         iVar18);
              if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.AllocatorInstance.Data);
              }
              if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.AllocatorInstance.Data);
              }
              if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c0.AllocatorInstance.Data);
              }
              bVar4 = FPaths::FileExists((FString *)&local_1f8);
              if (bVar4) {
                FTextLocalizationResource::LoadFromFile
                          (local_280,(FString *)&local_1f8,iVar5 + uVar21);
              }
              if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.AllocatorInstance.Data);
              }
              pFVar22 = local_278;
              if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.AllocatorInstance.Data);
                pFVar22 = local_278;
              }
LAB_14176cb44:
              if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_290.Data.AllocatorInstance.Data);
              }
            }
            pFVar23 = pFVar23 + 1;
            lVar20 = local_270;
            iVar5 = local_2c4;
          } while (pFVar23 != pFVar22);
        }
        local_270 = lVar20 + 0x10;
        uVar21 = uVar21 + 1;
        iVar18 = local_298->ArrayNum;
        param_5 = local_298;
        iVar5 = local_2c4;
      } while ((int)uVar21 < iVar18);
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_188);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

