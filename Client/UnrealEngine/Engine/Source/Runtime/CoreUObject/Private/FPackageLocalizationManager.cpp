// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// ConditionalUpdateCache @ 141e925a0

void __thiscall
FPackageLocalizationManager::ConditionalUpdateCache(FPackageLocalizationManager *this)

{
  IPackageLocalizationCache *pIVar1;
  
  if ((PackageLocalizationInternal::GEnableLocalizationPackageRemapping) &&
     (pIVar1 = (this->ActiveCache).Object, pIVar1 != (IPackageLocalizationCache *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141e925b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// FindLocalizedPackageName @ 141e9b510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FName __thiscall
FPackageLocalizationManager::FindLocalizedPackageName
          (FPackageLocalizationManager *this,FName param_1)

{
  IPackageLocalizationCache *pIVar1;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FInternationalization *pFVar6;
  FName FVar7;
  FString *pFVar8;
  FName in_R8;
  longlong lVar9;
  FName local_res18;
  FName local_res20;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (!PackageLocalizationInternal::GEnableLocalizationPackageRemapping) {
    *(FName *)param_1 = in_R8;
    return param_1;
  }
  local_res18 = in_R8;
  PerformLazyInitialization(this);
  pIVar1 = (this->ActiveCache).Object;
  if (pIVar1 == (IPackageLocalizationCache *)0x0) {
    if (2 < (byte)LogPackageLocalizationManager._0_1_) {
      ::FName::ToString(&local_res18,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = FInternationalization::Get();
    if (((pFVar6->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    this_00 = (pFVar6->CurrentLanguage).Object;
    pTVar2 = (pFVar6->CurrentLanguage).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    pFVar8 = FCulture::GetName(this_00);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = (pFVar8->Data).ArrayNum;
    lVar9 = (longlong)local_60;
    _Src = (pFVar8->Data).AllocatorInstance.Data;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,_Src,lVar9 * 2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_res20 = FindLocalizedPackageNameNoCache(this,(FName)local_70,(FString *)local_res18);
    local_res20 = *(FName *)local_res20;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  else {
    pFVar5 = (FName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_78,local_res18);
    local_res20 = *pFVar5;
  }
  if ((5 < (byte)LogPackageLocalizationManager._0_1_) && (local_res20 != (FName)0x0)) {
    ::FName::ToString(&local_res18,&local_38);
    ::FName::ToString(&local_res20,&local_48);
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  *(FName *)param_1 = local_res20;
  return param_1;
}

// FindLocalizedPackageNameForCulture @ 141e9b870

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FPackageLocalizationManager::FindLocalizedPackageNameForCulture
          (FPackageLocalizationManager *this,FName param_1,FString *param_2)

{
  IPackageLocalizationCache *pIVar1;
  FName local_res18;
  FName local_38;
  FString local_30;
  FString local_20;
  
  if (!PackageLocalizationInternal::GEnableLocalizationPackageRemapping) {
    *(FString **)param_1 = param_2;
    return param_1;
  }
  local_res18 = (FName)param_2;
  PerformLazyInitialization(this);
  pIVar1 = (this->ActiveCache).Object;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  if (pIVar1 == (IPackageLocalizationCache *)0x0) {
    if (2 < (byte)LogPackageLocalizationManager._0_1_) {
      ::FName::ToString(&local_res18,&local_30);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    local_38 = FindLocalizedPackageNameNoCache(this,(FName)&local_30,(FString *)local_res18);
  }
  else {
    local_38 = (FName)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_30,local_res18);
  }
  local_38 = *(FName *)local_38;
  if ((5 < (byte)LogPackageLocalizationManager._0_1_) && (local_38 != (FName)0x0)) {
    ::FName::ToString(&local_res18,&local_20);
    ::FName::ToString(&local_38,&local_30);
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  *(FName *)param_1 = local_38;
  return param_1;
}

// FindLocalizedPackageNameNoCache @ 141e9b9f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FName __thiscall
FPackageLocalizationManager::FindLocalizedPackageNameNoCache
          (FPackageLocalizationManager *this,FName param_1,FString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FInternationalization *this_00;
  ulonglong uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FString *in_R9;
  FName local_res18;
  undefined1 local_c8 [4];
  int local_c4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_90;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_80;
  uint local_70;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  
  if (!PackageLocalizationInternal::GEnableLocalizationPackageRemapping) {
    *(FString **)param_1 = param_2;
    return param_1;
  }
  FVar9.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_c4 = 0;
  local_res18 = (FName)param_2;
  ::FName::ToString(&local_res18,(FString *)&local_80);
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  FPackageName::QueryRootContentPaths(&local_c0,false,false,false);
  iVar8 = local_c0.ArrayNum;
  pFVar12 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x10;
  FVar10.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if (local_c0.ArrayNum != iVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (FVar10.Data == pFVar12) goto LAB_141e9bb6b;
    if (*(int *)(FVar10.Data + 8) == 0) {
      pwVar6 = L"";
      iVar1 = 0;
    }
    else {
      pwVar6 = *(wchar_t **)FVar10.Data;
      iVar1 = *(int *)(FVar10.Data + 8) + -1;
    }
    bVar3 = ::FString::StartsWith((FString *)&local_80,pwVar6,iVar1,IgnoreCase);
    if (bVar3) break;
    FVar10.Data = FVar10.Data + 0x10;
  }
  if ((FScriptContainerElement *)&local_b0 != FVar10.Data) {
    iVar8 = *(int *)(FVar10.Data + 8);
                    /* WARNING: Load size is inaccurate */
    FVar9.Data = *FVar10.Data;
    local_a8 = CONCAT44(local_a8._4_4_,iVar8);
    if (((iVar8 != 0) || (local_a8._4_4_ != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_a8._4_4_,&local_b0,iVar8,(int *)((longlong)&local_a8 + 4)),
       iVar8 != 0)) {
      memcpy(local_b0.Data,FVar9.Data,(longlong)iVar8 * 2);
    }
  }
  iVar8 = *(int *)(FVar10.Data + 8) + -1;
  if (*(int *)(FVar10.Data + 8) == 0) {
    iVar8 = 0;
  }
  ::FString::RightChop((FString *)&local_80,(FString *)&local_58,iVar8);
  local_c4 = local_58.ArrayNum;
  FVar9.Data = local_58.AllocatorInstance.Data;
  iVar7 = local_58.ArrayNum;
LAB_141e9bb6b:
  DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if ((1 < (int)local_a8) && (1 < iVar7)) {
    this_00 = FInternationalization::Get();
    FInternationalization::GetPrioritizedCultureNames(this_00,&local_a0,in_R9);
    uVar4 = (ulonglong)local_a0.ArrayNum;
    pFVar12 = local_a0.AllocatorInstance.Data + uVar4 * 0x10;
    local_70 = local_a0.ArrayNum;
    FVar10.Data = local_a0.AllocatorInstance.Data;
    do {
      if (local_a0.ArrayNum != (uint)uVar4) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_c8);
      }
      if (FVar10.Data == pFVar12) {
        *(undefined8 *)param_1 = 0;
        goto LAB_141e9bec2;
      }
      FCulture::CultureNameToVerseIdentifier(&local_68,(FString *)FVar10.Data);
      iVar8 = *(int *)(FVar10.Data + 8);
      if (iVar8 == local_68.Data.ArrayNum) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar10.Data,
                             (wchar_t *)local_68.Data.AllocatorInstance.Data);
          bVar3 = iVar8 == 0;
          goto LAB_141e9bc1c;
        }
      }
      else {
        bVar3 = iVar8 + local_68.Data.ArrayNum == 1;
LAB_141e9bc1c:
        FVar2.Data = local_b0.Data;
        if (!bVar3) {
          iVar8 = (int)local_a8;
          lVar11 = (longlong)(int)local_a8;
          local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.ArrayNum = (int)local_a8;
          uVar5 = (int)local_a8 + 5 + (uint)((int)local_a8 == 0);
          if ((int)uVar5 < (int)local_a8) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar5,0,&local_c0.AllocatorInstance,(int)local_a8,&local_c0.ArrayMax);
          if (iVar8 != 0) {
            memcpy(local_c0.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
          }
          ::FString::PathAppend((FString *)&local_c0,L"L10N",4);
          iVar8 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar8 = 0;
          }
          if ((local_c0.ArrayNum != 0) || (iVar7 = 2, iVar8 == -1)) {
            iVar7 = 1;
          }
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_58,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_c0,
                     iVar8 + iVar7);
          ::FString::PathAppend
                    ((FString *)&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
          iVar8 = local_c4 + -1;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_48,&local_58,local_c4 + (uint)(local_58.ArrayNum == 0));
          ::FString::PathAppend((FString *)&local_48,(wchar_t *)FVar9.Data,iVar8);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
          if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.AllocatorInstance.Data);
          }
          bVar3 = FPackageName::DoesPackageExist((FString *)&local_48,(FString *)0x0,true);
          if (bVar3) {
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_48.ArrayNum != 0) {
              FVar10.Data = local_48.AllocatorInstance.Data;
            }
            ::FName::FName((FName *)param_1,(wchar_t *)FVar10.Data);
            local_38.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
            goto LAB_141e9beaa;
          }
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
        }
      }
      FVar2.Data = local_b0.Data;
      iVar8 = (int)local_a8;
      lVar11 = (longlong)(int)local_a8;
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = (int)local_a8;
      uVar5 = (int)local_a8 + 5 + (uint)((int)local_a8 == 0);
      if ((int)uVar5 < (int)local_a8) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar5,0,&local_90.AllocatorInstance,(int)local_a8,&local_90.ArrayMax);
      if (iVar8 != 0) {
        memcpy(local_90.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
      }
      ::FString::PathAppend((FString *)&local_90,L"L10N",4);
      iVar8 = *(int *)(FVar10.Data + 8) + -1;
      if (*(int *)(FVar10.Data + 8) == 0) {
        iVar8 = 0;
      }
      if ((local_90.ArrayNum != 0) || (iVar7 = 2, iVar8 == -1)) {
        iVar7 = 1;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_80,&local_90,iVar7 + iVar8);
      ::FString::PathAppend((FString *)&local_80,*(wchar_t **)FVar10.Data,iVar8);
      iVar8 = local_c4;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_38,&local_80,local_c4 + (uint)(local_80.ArrayNum == 0));
      ::FString::PathAppend((FString *)&local_38,(wchar_t *)FVar9.Data,iVar8 + -1);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      bVar3 = FPackageName::DoesPackageExist((FString *)&local_38,(FString *)0x0,true);
      if (bVar3) goto LAB_141e9bede;
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_70;
      FVar10.Data = FVar10.Data + 0x10;
    } while( true );
  }
  *(undefined8 *)param_1 = 0;
LAB_141e9bf08:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return param_1;
LAB_141e9bede:
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.ArrayNum != 0) {
    FVar10.Data = local_38.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar10.Data);
LAB_141e9beaa:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141e9bec2:
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  goto LAB_141e9bf08;
}

// Get @ 141e9f130

FPackageLocalizationManager * __cdecl FPackageLocalizationManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPackageLocalizationManager::Get'::__l2::
             _dynamic_atexit_destructor_for__PackageLocalizationManager__);
      _Init_thread_footer(&::_TSS0);
      return &PackageLocalizationManager;
    }
  }
  return &PackageLocalizationManager;
}

// InitializeFromCache @ 141ea6110

void __thiscall
FPackageLocalizationManager::InitializeFromCache
          (FPackageLocalizationManager *this,TSharedRef<IPackageLocalizationCache,1> *param_1)

{
  TSharedPtr<IPackageLocalizationCache,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  IPackageLocalizationCache *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ActiveCache;
  if (pTVar1 != (TSharedPtr<IPackageLocalizationCache,1> *)&local_18) {
    pTVar1->Object = local_18;
    local_18 = (IPackageLocalizationCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveCache).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if (PackageLocalizationInternal::GEnableLocalizationPackageRemapping != false) {
    if (pTVar1->Object == (IPackageLocalizationCache *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x10))();
  }
  this->bIsInitialized = (atomic<bool>)0x1;
  return;
}

// InitializeFromDefaultCache @ 141ea61c0

void __thiscall
FPackageLocalizationManager::InitializeFromDefaultCache(FPackageLocalizationManager *this)

{
  TSharedPtr<IPackageLocalizationCache,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar4 = ::operator_new(200);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDefaultPackageLocalizationCache___00_SharedPointerInternals__6B_
    ;
    memset(pTVar4 + 1,0,0xb8);
    FPackageLocalizationCache::FPackageLocalizationCache((FPackageLocalizationCache *)(pTVar4 + 1));
    local_18 = pTVar4 + 1;
    pTVar4[1]._padding_ = (longlong)&___7FDefaultPackageLocalizationCache__6B_;
    if (local_18 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ActiveCache;
  local_10.ReferenceController = pTVar4;
  if (pTVar1 != (TSharedPtr<IPackageLocalizationCache,1> *)&local_18) {
    pTVar1->Object = (IPackageLocalizationCache *)local_18;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveCache).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if (PackageLocalizationInternal::GEnableLocalizationPackageRemapping != false) {
    if (pTVar1->Object == (IPackageLocalizationCache *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x10))();
  }
  this->bIsInitialized = (atomic<bool>)0x1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// InitializeFromLazyCallback @ 141ea6330

void __thiscall
FPackageLocalizationManager::InitializeFromLazyCallback
          (FPackageLocalizationManager *this,
          TFunction<void___cdecl(FPackageLocalizationManager_&)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->LazyInitFunc;
  uVar3 = *(undefined8 *)&(this->LazyInitFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->LazyInitFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->LazyInitFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->LazyInitFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->LazyInitFunc).field_0x28;
  *(undefined8 *)&this->LazyInitFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LazyInitFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->LazyInitFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->LazyInitFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->LazyInitFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->LazyInitFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActiveCache != (TSharedPtr<IPackageLocalizationCache,1> *)&local_18) {
    (this->ActiveCache).Object = (IPackageLocalizationCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveCache).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  LOCK();
  this->bIsInitialized = (atomic<bool>)0x0;
  UNLOCK();
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// InvalidateRootSourcePath @ 141ea89e0

void __thiscall
FPackageLocalizationManager::InvalidateRootSourcePath
          (FPackageLocalizationManager *this,FString *param_1)

{
  IPackageLocalizationCache *pIVar1;
  
  pIVar1 = (this->ActiveCache).Object;
  if (pIVar1 != (IPackageLocalizationCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ea89ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))();
    return;
  }
  return;
}

// PerformLazyInitialization @ 141eafcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageLocalizationManager::PerformLazyInitialization(FPackageLocalizationManager *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (PackageLocalizationInternal::GEnableLocalizationPackageRemapping) {
    if ((this->bIsInitialized == (atomic<bool>)0x0) && (*(longlong *)&this->LazyInitFunc != 0)) {
      LOCK();
      bVar7 = (this->InitializationMutex).State == (atomic<unsigned_char>)0x0;
      if (bVar7) {
        (this->InitializationMutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar7) {
        UE::FMutex::LockSlow(&this->InitializationMutex);
      }
      if ((this->ActiveCache).Object == (IPackageLocalizationCache *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->LazyInitFunc);
        plVar3 = *(longlong **)&(this->LazyInitFunc).field_0x28;
        pcVar4 = *(code **)&this->LazyInitFunc;
        plVar6 = (longlong *)&(this->LazyInitFunc).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar6 = plVar3;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar4)(uVar5,this);
        if (((this->ActiveCache).Object == (IPackageLocalizationCache *)0x0) &&
           (2 < (byte)LogPackageLocalizationManager._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
        }
        LOCK();
        pFVar1 = &this->InitializationMutex;
        aVar2 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) == 0) {
          return;
        }
      }
      else {
        LOCK();
        pFVar1 = &this->InitializationMutex;
        aVar2 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) == 0) {
          return;
        }
      }
      UE::FMutex::WakeWaitingThread(&this->InitializationMutex);
    }
  }
  else if (3 < (byte)LogPackageLocalizationManager._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
    return;
  }
  return;
}

