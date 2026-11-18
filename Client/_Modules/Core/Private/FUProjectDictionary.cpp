// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FUProjectDictionary @ 141919350

FUProjectDictionary * __thiscall
FUProjectDictionary::FUProjectDictionary(FUProjectDictionary *this,FString *param_1)

{
  (this->RootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDir).Data.ArrayNum = 0;
  (this->RootDir).Data.ArrayMax = 0;
  (this->ProjectRootDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectRootDirs).ArrayNum = 0;
  (this->ProjectRootDirs).ArrayMax = 0;
  *(undefined8 *)&this->ShortProjectNameDictionary = 0;
  *(undefined8 *)&(this->ShortProjectNameDictionary).field_0x8 = 0;
  *(undefined8 *)&(this->ShortProjectNameDictionary).field_0x20 = 0;
  *(undefined4 *)&(this->ShortProjectNameDictionary).field_0x28 = 0;
  *(undefined4 *)&(this->ShortProjectNameDictionary).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShortProjectNameDictionary).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShortProjectNameDictionary).field_0x34 = 0;
  *(undefined8 *)&(this->ShortProjectNameDictionary).field_0x40 = 0;
  *(undefined4 *)&(this->ShortProjectNameDictionary).field_0x48 = 0;
  ::FString::operator=(&this->RootDir,param_1);
  Refresh(this);
  return this;
}

// GetDefault @ 1419462c0

/* WARNING: Enum "Type": Some values do not have unique names */

FUProjectDictionary * __cdecl FUProjectDictionary::GetDefault(void)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 _Src;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_68 [12];
  uint uStack_5c;
  undefined1 *local_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  int iStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  undefined4 uStack_1c;
  
  iVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar3 = FGenericPlatformMisc::RootDir();
    ::FString::FString((FString *)local_68,pwVar3);
    _Src = local_68._0_8_;
    DefaultDictionary.RootDir.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DefaultDictionary.RootDir.Data.ArrayMax = 0;
    DefaultDictionary.ProjectRootDirs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DefaultDictionary.ProjectRootDirs.ArrayNum = 0;
    DefaultDictionary.ProjectRootDirs.ArrayMax = 0;
    DefaultDictionary.ShortProjectNameDictionary._0_8_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._8_8_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._32_8_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._40_4_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._44_4_ = 0x80;
    DefaultDictionary.ShortProjectNameDictionary._48_4_ = 0xffffffff;
    DefaultDictionary.ShortProjectNameDictionary._52_4_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._64_8_ = 0;
    DefaultDictionary.ShortProjectNameDictionary._72_4_ = 0;
    DefaultDictionary.RootDir.Data.ArrayNum = local_68._8_4_;
    if (local_68._8_4_ != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68._8_4_,0,(ForAnyElementType *)&DefaultDictionary,local_68._8_4_,
                 &DefaultDictionary.RootDir.Data.ArrayMax);
      memcpy(DefaultDictionary.RootDir.Data.AllocatorInstance.Data,(void *)_Src,
             (longlong)(int)local_68._8_4_ * 2);
    }
    Refresh(&DefaultDictionary);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    atexit(`FUProjectDictionary::GetDefault'::__l2::
           _dynamic_atexit_destructor_for__DefaultDictionary__);
    _Init_thread_footer(&::_TSS0);
  }
  if (bHaveLoggedProjects == false) {
    if (5 < (byte)LogUProjectInfo._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogUProjectInfo);
    }
    uStack_34 = 1;
    iStack_38 = iVar5;
    iStack_24 = 0;
    if (DefaultDictionary.ShortProjectNameDictionary._40_4_ != 0) {
      puVar6 = (uint *)&DefaultDictionary.ShortProjectNameDictionary.field_0x10;
      if (DefaultDictionary.ShortProjectNameDictionary._32_8_ != 0) {
        puVar6 = (uint *)DefaultDictionary.ShortProjectNameDictionary._32_8_;
      }
      uVar2 = *puVar6;
      iVar5 = 0;
      iStack_38 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)iStack_38;
        iVar5 = iVar5 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = DefaultDictionary.ShortProjectNameDictionary._40_4_;
        if ((int)(DefaultDictionary.ShortProjectNameDictionary._40_4_ + -1 +
                 (DefaultDictionary.ShortProjectNameDictionary._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
            iStack_38) goto LAB_1419463bc;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_34 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_24 = iVar5 + -1 + (int)lVar4;
      if ((int)DefaultDictionary.ShortProjectNameDictionary._40_4_ < iStack_24) {
        iStack_24 = DefaultDictionary.ShortProjectNameDictionary._40_4_;
      }
    }
LAB_1419463bc:
    local_40 = 0x154f0b440;
    local_30 = 0x154f0b450;
    uStack_28 = 0xffffffff;
    uStack_1c = iStack_4c;
    uStack_5c = uStack_34;
    local_68._8_4_ = iStack_38;
    uStack_50 = 0xffffffff;
    local_68._0_8_ = &DefaultDictionary.ShortProjectNameDictionary;
    local_48 = CONCAT44(iStack_4c,iVar5);
    local_58 = &DefaultDictionary.ShortProjectNameDictionary.field_0x10;
    local_20 = iVar5;
    iStack_4c = iStack_24;
    if (iStack_24 < (int)DefaultDictionary.ShortProjectNameDictionary._40_4_) {
      do {
        if (5 < (byte)LogUProjectInfo._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogUProjectInfo);
        }
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
      } while (iStack_4c < *(int *)(local_58 + 0x18));
    }
    bHaveLoggedProjects = true;
  }
  return &DefaultDictionary;
}

// GetProjectPathForGame @ 14194a680

FString * __thiscall
FUProjectDictionary::GetProjectPathForGame
          (FUProjectDictionary *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  uint uVar1;
  FString *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  pFVar2 = ::FString::ToLower(pFVar2,&local_28);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_38,pwVar4);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar5.Data);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->ShortProjectNameDictionary,uVar1,&local_38);
  pFVar2 = (FString *)0x0;
  if (iVar3 != -1) {
    pFVar2 = (FString *)(*(longlong *)&this->ShortProjectNameDictionary + (longlong)iVar3 * 0x28);
  }
  pFVar6 = pFVar2 + 1;
  if (pFVar2 == (FString *)0x0) {
    pFVar6 = (FString *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pFVar6 == (FString *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    ::FString::FString(__return_storage_ptr__,pFVar6);
  }
  return __return_storage_ptr__;
}

// GetProjectPaths @ 14194a790

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FUProjectDictionary::GetProjectPaths
          (FUProjectDictionary *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&this->ShortProjectNameDictionary,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRelativeProjectPathForGame @ 14194ac10

FString * __thiscall
FUProjectDictionary::GetRelativeProjectPathForGame
          (FUProjectDictionary *this,FString *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar3 = ::FString::FString(&local_28,param_1);
  pFVar3 = ::FString::ToLower(pFVar3,&local_38);
  pwVar7 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_48,pwVar4);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar5.Data);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->ShortProjectNameDictionary,uVar1,&local_48);
  puVar6 = (undefined8 *)0x0;
  if (iVar2 != -1) {
    puVar6 = (undefined8 *)(*(longlong *)&this->ShortProjectNameDictionary + (longlong)iVar2 * 0x28)
    ;
  }
  puVar9 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (puVar9 == (undefined8 *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"");
  }
  else {
    local_58.Data.ArrayNum = *(int *)(puVar9 + 1);
    lVar8 = (longlong)local_58.Data.ArrayNum;
    _Src = (void *)*puVar9;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&local_58,pwVar7);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// IsForeignProject @ 141951af0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FUProjectDictionary::IsForeignProject(FUProjectDictionary *this,FString *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  FPaths::ConvertRelativePathToFull(&local_a8,param_1);
  FVar15.Data = (FScriptContainerElement *)0x0;
  uVar6 = 0;
  local_88 = &this->ShortProjectNameDictionary;
  uVar10 = *(uint *)&(this->ShortProjectNameDictionary).field_0x28;
  local_78 = &(this->ShortProjectNameDictionary).field_0x10;
  uVar14 = 0;
  uStack_7c = 1;
  pFVar8 = FVar15.Data;
  uStack_80 = uVar14;
  local_68 = uVar14;
  if (uVar10 != 0) {
    puVar13 = *(uint **)&(this->ShortProjectNameDictionary).field_0x20;
    pFVar8 = (FScriptContainerElement *)(ulonglong)uVar10;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_78;
    }
    uVar5 = *puVar13;
    pFVar11 = FVar15.Data;
    pFVar12 = FVar15.Data;
    local_68 = uVar6;
    uStack_80 = uVar6;
    while (uVar5 == 0) {
      iVar7 = (int)pFVar11;
      local_68 = (int)pFVar12 + 0x20;
      pFVar12 = (FScriptContainerElement *)(ulonglong)local_68;
      uStack_80 = iVar7 + 1;
      pFVar11 = (FScriptContainerElement *)(ulonglong)uStack_80;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_80)
      goto LAB_141951b9d;
      uVar5 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_7c = -uVar5 & uVar5;
    uVar1 = (ulonglong)uStack_7c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = (local_68 - 1) + (int)lVar2;
    if ((int)uVar10 < (int)uVar5) {
      uVar5 = uVar10;
    }
    pFVar8 = (FScriptContainerElement *)(ulonglong)uVar5;
  }
LAB_141951b9d:
  uStack_6c = (uint)pFVar8;
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,uStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = uStack_6c;
  TStack_50.BaseBitIndex = local_68;
  uStack_64 = uStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = uStack_6c;
  if ((int)uStack_6c < (int)uVar10) {
    do {
      iVar7 = *(int *)(*(longlong *)local_58 + 0x18 + (longlong)(int)pFVar8 * 0x28);
      if (iVar7 == local_a8.Data.ArrayNum) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)
                              (*(longlong *)local_58 + (longlong)(int)pFVar8 * 0x28 + 0x10),
                             (wchar_t *)local_a8.Data.AllocatorInstance.Data);
          bVar16 = iVar7 == 0;
          goto LAB_141951c1d;
        }
LAB_141951d85:
        bVar16 = false;
        goto LAB_141951e86;
      }
      bVar16 = iVar7 + local_a8.Data.ArrayNum == 1;
LAB_141951c1d:
      if (bVar16) goto LAB_141951d85;
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      pFVar8 = (FScriptContainerElement *)(ulonglong)(uint)TStack_50.CurrentBitIndex;
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  uVar10 = 0;
  uVar5 = local_a8.Data.ArrayNum - 1;
  if (local_a8.Data.ArrayNum == 0) {
    uVar5 = uVar10;
  }
  if ((((int)uVar5 < 0) || (local_a8.Data.ArrayNum < (int)uVar5)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Count >= 0 && Count <= this->Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x55b,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  pFVar8 = local_a8.Data.AllocatorInstance.Data + (longlong)(int)uVar5 * 2;
  do {
    if (pFVar8 == local_a8.Data.AllocatorInstance.Data) {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      goto LAB_141951cd0;
    }
    pFVar11 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(wchar_t *)pFVar11 != L'/') && (*(wchar_t *)pFVar11 != L'\\'));
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = 0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  uVar5 = (uint)((longlong)pFVar8 - (longlong)local_a8.Data.AllocatorInstance.Data >> 1);
  if (uVar5 != 0xffffffff) {
    uVar6 = local_a8.Data.ArrayNum - 1;
    if (local_a8.Data.ArrayNum == 0) {
      uVar6 = uVar10;
    }
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
    }
    uVar5 = uVar14;
    if (0 < (int)uVar6) {
      uVar5 = uVar6;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar9.Data = local_a8.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_98,(wchar_t *)FVar9.Data,uVar5);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    uVar6 = local_98.Data.ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = local_98.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
LAB_141951cd0:
  uVar5 = uVar6 - 1;
  if (uVar6 == 0) {
    uVar5 = uVar10;
  }
  if (((int)uVar5 < 0) || ((int)uVar6 < (int)uVar5)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Count >= 0 && Count <= this->Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x55b,L"");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
    uVar6 = local_b8.Data.ArrayNum;
  }
  pFVar8 = local_b8.Data.AllocatorInstance.Data + (longlong)(int)uVar5 * 2;
  do {
    if (pFVar8 == local_b8.Data.AllocatorInstance.Data) goto LAB_141951d47;
    pFVar11 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(wchar_t *)pFVar11 != L'/') && (*(wchar_t *)pFVar11 != L'\\'));
  iVar7 = (int)((longlong)pFVar8 - (longlong)local_b8.Data.AllocatorInstance.Data >> 1);
  if (iVar7 != -1) {
    uVar10 = uVar6 - 1;
    if (uVar6 == 0) {
      uVar10 = uVar14;
    }
    ::FString::RemoveAt(&local_b8,iVar7,uVar10 - iVar7,No);
    FVar15.Data = local_b8.Data.AllocatorInstance.Data;
    uVar10 = local_b8.Data.ArrayNum;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
  }
LAB_141951d47:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pFVar8 = (this->ProjectRootDirs).AllocatorInstance.Data;
  pFVar11 = pFVar8 + (longlong)(this->ProjectRootDirs).ArrayNum * 0x10;
  do {
    if (pFVar8 == pFVar11) {
      bVar16 = true;
LAB_141951e79:
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
LAB_141951e86:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      return bVar16;
    }
    uVar6 = *(uint *)(pFVar8 + 8);
    if (uVar6 == uVar10) {
      if (1 < (int)uVar6) {
        iVar7 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar8,(wchar_t *)FVar15.Data);
        bVar16 = iVar7 == 0;
        goto LAB_141951e63;
      }
LAB_141951eb6:
      bVar16 = false;
      goto LAB_141951e79;
    }
    bVar16 = uVar6 + uVar10 == 1;
LAB_141951e63:
    if (bVar16) goto LAB_141951eb6;
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// Refresh @ 141961180

/* WARNING: Removing unreachable block (ram,0x000141961aa1) */
/* WARNING: Removing unreachable block (ram,0x000141961aae) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUProjectDictionary::Refresh(FUProjectDictionary *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  FUProjectDictionary *pFVar5;
  FString *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  IFileManager *pIVar11;
  FString *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  void *pvVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FUProjectDictionary *local_res8;
  FScriptContainerElement *local_res10;
  FString *local_res18;
  FString *local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *in_stack_fffffffffffffe68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined4 uVar25;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_178;
  TArray<FString,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_128;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_118;
  FString *local_108;
  ulonglong local_100;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e8;
  FScriptContainerElement *local_d8;
  FString local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c0;
  undefined1 local_b8 [16];
  TPairInitializer<FString_const_&,FString_const_&> local_a8;
  FScriptContainerElement *local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_90;
  FString local_80;
  FString local_70 [3];
  
  iVar9 = (this->ProjectRootDirs).ArrayNum;
  pTVar1 = &this->ProjectRootDirs;
  bVar4 = false;
  piVar2 = &(this->ProjectRootDirs).ArrayMax;
  pFVar23 = (pTVar1->AllocatorInstance).Data;
  local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res8 = this;
  local_c0 = pTVar1;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar23,iVar9);
    (this->ProjectRootDirs).ArrayNum = 0;
    if (*piVar2 != 0) {
      in_stack_fffffffffffffe68 =
           (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           ((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar23,iVar9);
    (this->ProjectRootDirs).ArrayNum = 0;
  }
  local_a8.Value = (FString *)&this->ShortProjectNameDictionary;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)local_a8.Value);
  local_108 = (FString *)0x0;
  local_100 = 0;
  pIVar11 = IFileManager::Get();
  pcVar3 = *(code **)((longlong)*pIVar11 + 0x80);
  pFVar12 = ::FString::FString((FString *)local_b8,L"*.uprojectdirs");
  iVar10 = (this->RootDir).Data.ArrayNum;
  iVar8 = (pFVar12->Data).ArrayNum;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  local_178.ArrayNum = iVar10;
  if ((iVar10 == 0) && (iVar9 != -1)) {
    pFVar23 = (this->RootDir).Data.AllocatorInstance.Data;
    iVar8 = iVar9 + 2;
LAB_14196127b:
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar8 == 0) {
      local_178.ArrayMax = 0;
      goto LAB_1419612d4;
    }
  }
  else {
    pFVar23 = (this->RootDir).Data.AllocatorInstance.Data;
    iVar8 = iVar9 + 1;
    if (iVar10 == 0) goto LAB_14196127b;
  }
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar21 = iVar10 + iVar8;
  if ((int)uVar21 < iVar10) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  in_stack_fffffffffffffe68 = &local_178;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar21,0,&in_stack_fffffffffffffe68->AllocatorInstance,iVar10,&local_178.ArrayMax);
  if (iVar10 != 0) {
    memcpy(local_178.AllocatorInstance.Data,pFVar23,(longlong)iVar10 * 2);
  }
LAB_1419612d4:
  ::FString::PathAppend
            ((FString *)&local_178,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar9);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_178.ArrayNum != 0) {
    FVar18.Data = local_178.AllocatorInstance.Data;
  }
  (*pcVar3)(pIVar11,&local_108,FVar18.Data,1,
            (ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pFVar5 = local_res8;
  FPaths::ConvertRelativePathToFull(&local_d0,&local_res8->RootDir);
  FPaths::NormalizeDirectoryName(&local_d0);
  FVar18.Data = local_d0.Data.AllocatorInstance.Data;
  iVar9 = local_d0.Data.ArrayNum;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar21 = (2 - (uint)(iVar9 != 0)) + iVar9;
  local_f8.ArrayNum = iVar9;
  if ((int)uVar21 < iVar9) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  pTVar24 = &local_f8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar21,0,&pTVar24->AllocatorInstance,iVar9,&local_f8.ArrayMax);
  if (iVar9 != 0) {
    memcpy(local_f8.AllocatorInstance.Data,FVar18.Data,(longlong)iVar9 * 2);
  }
  ::FString::PathAppend((FString *)&local_f8,L"",0);
  uVar13 = (ulonglong)(int)local_100;
  local_res20 = local_108 + uVar13;
  local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,(int)local_100);
  uVar15 = uVar13;
  pFVar12 = local_108;
  while( true ) {
    pFVar6 = local_res20;
    local_res18 = pFVar12;
    if ((int)uVar13 != (int)uVar15) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar12 == pFVar6) break;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    pIVar11 = IFileManager::Get();
    iVar9 = (pFVar12->Data).ArrayNum;
    iVar10 = (pFVar5->RootDir).Data.ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    local_178.ArrayNum = iVar10;
    if ((iVar10 == 0) && (iVar8 != -1)) {
      iVar9 = iVar8 + 2;
      pFVar23 = (pFVar5->RootDir).Data.AllocatorInstance.Data;
LAB_14196144f:
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar9 != 0) goto LAB_14196145b;
      local_178.ArrayMax = 0;
    }
    else {
      iVar9 = iVar8 + 1;
      pFVar23 = (pFVar5->RootDir).Data.AllocatorInstance.Data;
      if (iVar10 == 0) goto LAB_14196144f;
LAB_14196145b:
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar21 = iVar9 + iVar10;
      if ((int)uVar21 < iVar10) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      pTVar24 = &local_178;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar21,0,&pTVar24->AllocatorInstance,iVar10,&local_178.ArrayMax);
      if (iVar10 != 0) {
        memcpy(local_178.AllocatorInstance.Data,pFVar23,(longlong)iVar10 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_178,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar8);
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_178.ArrayNum != 0) {
      FVar18.Data = local_178.AllocatorInstance.Data;
    }
    bVar7 = FFileHelper::LoadANSITextFileToStrings((wchar_t *)FVar18.Data,pIVar11,&local_168);
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    if (bVar7) {
      iVar9 = local_168.ArrayNum;
      pFVar23 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x10;
      FVar18.Data = local_168.AllocatorInstance.Data;
      while( true ) {
        if (local_168.ArrayNum != iVar9) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        pFVar12 = local_res18;
        if (FVar18.Data == pFVar23) break;
        ::FString::TrimStart((FString *)FVar18.Data,&local_158);
        if (local_158.Data.ArrayNum < 2) {
LAB_141961589:
          bVar7 = false;
        }
        else {
          ::FString::FString((FString *)&local_e8,";");
          bVar4 = true;
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_e8.ArrayNum != 0) {
            FVar16.Data = local_e8.AllocatorInstance.Data;
          }
          iVar10 = local_e8.ArrayNum + -1;
          if (local_e8.ArrayNum == 0) {
            iVar10 = 0;
          }
          bVar7 = ::FString::StartsWith(&local_158,(wchar_t *)FVar16.Data,iVar10,IgnoreCase);
          if (bVar7) goto LAB_141961589;
          bVar7 = true;
        }
        if ((bVar4) &&
           (bVar4 = false, local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
        iVar10 = local_158.Data.ArrayNum;
        FVar16.Data = local_158.Data.AllocatorInstance.Data;
        if (bVar7) {
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = local_158.Data.ArrayNum;
          if (local_158.Data.ArrayNum == 0) {
            local_148.ArrayNum = 0;
            local_148.ArrayMax = 0;
          }
          else {
            pTVar24 = &local_148;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_158.Data.ArrayNum,0,&pTVar24->AllocatorInstance,
                       local_158.Data.ArrayNum,&local_148.ArrayMax);
            memcpy(local_148.AllocatorInstance.Data,FVar16.Data,(longlong)iVar10 * 2);
          }
          UE4Paths_Private::ConvertRelativePathToFullInternal<FString_const_&>
                    (&local_138,&pFVar5->RootDir,(FString *)&local_148);
          if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
          FPaths::NormalizeDirectoryName(&local_138);
          iVar10 = local_f8.ArrayNum + -1;
          FVar16.Data = local_f8.AllocatorInstance.Data;
          if (local_f8.ArrayNum == 0) {
            iVar10 = 0;
            FVar16.Data = (FScriptContainerElement *)L"";
          }
          bVar7 = ::FString::StartsWith(&local_138,(wchar_t *)FVar16.Data,iVar10,IgnoreCase);
          if (bVar7) {
LAB_1419616c1:
            TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                      (&pFVar5->ProjectRootDirs,&local_138);
          }
          else {
            iVar10 = local_138.Data.ArrayNum;
            if (iVar10 == local_d0.Data.ArrayNum) {
              if (iVar10 < 2) goto LAB_1419616c1;
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_138.Data.AllocatorInstance.Data,
                                  (wchar_t *)local_d0.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
            }
            else {
              bVar7 = iVar10 + local_d0.Data.ArrayNum == 1;
            }
            if (bVar7) goto LAB_1419616c1;
            if (2 < (byte)LogUProjectInfo._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUProjectInfo);
            }
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    uVar13 = local_100 & 0xffffffff;
    pFVar12 = pFVar12 + 1;
    uVar15 = (ulonglong)local_res10 & 0xffffffff;
  }
  uVar15 = (ulonglong)local_c0->ArrayNum;
  pFVar23 = (local_c0->AllocatorInstance).Data;
  local_178.AllocatorInstance.Data = pFVar23 + uVar15 * 0x10;
  local_res20 = (FString *)CONCAT44(local_res20._4_4_,local_c0->ArrayNum);
  do {
    FVar18.Data = local_178.AllocatorInstance.Data;
    local_res10 = pFVar23;
    if (local_c0->ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar23 == FVar18.Data) {
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>(local_108,(int)local_100);
      if (local_108 != (FString *)0x0) {
        FMemory::Free(local_108);
      }
      return;
    }
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    pIVar11 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar11 + 0x80);
    pFVar12 = ::FString::FString(&local_80,L"*");
    iVar10 = (pFVar12->Data).ArrayNum;
    iVar8 = *(int *)(local_res10 + 8);
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar9 + 1;
    local_128.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar10 != 0)) {
      pvVar20 = *(void **)local_res10;
      iVar10 = iVar9 + 2;
LAB_1419617e9:
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar10 != 0) goto LAB_1419617f4;
      local_128.ArrayMax = 0;
    }
    else {
      pvVar20 = *(void **)local_res10;
      if (iVar8 == 0) goto LAB_1419617e9;
LAB_1419617f4:
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar21 = iVar8 + iVar10;
      if ((int)uVar21 < iVar8) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      pTVar24 = &local_128;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar21,0,&pTVar24->AllocatorInstance,iVar8,&local_128.ArrayMax);
      if (iVar8 != 0) {
        memcpy(local_128.AllocatorInstance.Data,pvVar20,(longlong)iVar8 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_128,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar9);
    pTVar24 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
              CONCAT71((int7)((ulonglong)pTVar24 >> 8),1);
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_128.ArrayNum != 0) {
      FVar18.Data = local_128.AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar11,&local_148,FVar18.Data,0,pTVar24);
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar23 = local_res10;
    uVar15 = (ulonglong)local_148.ArrayNum;
    local_98 = local_148.AllocatorInstance.Data + uVar15 * 0x10;
    local_res18 = (FString *)CONCAT44(local_res18._4_4_,local_148.ArrayNum);
    FVar18.Data = local_148.AllocatorInstance.Data;
    while( true ) {
      pFVar19 = local_98;
      local_d8 = FVar18.Data;
      if (local_148.ArrayNum != (int)uVar15) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (FVar18.Data == pFVar19) break;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      pIVar11 = IFileManager::Get();
      iVar10 = *(int *)(pFVar23 + 8);
      pcVar3 = *(code **)((longlong)*pIVar11 + 0x80);
      iVar9 = *(int *)(FVar18.Data + 8) + -1;
      if (*(int *)(FVar18.Data + 8) == 0) {
        iVar9 = 0;
      }
      iVar8 = iVar9 + 1;
      local_118.ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar8 != 0)) {
        iVar8 = iVar9 + 2;
        pvVar20 = *(void **)pFVar23;
LAB_141961928:
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar8 != 0) goto LAB_141961933;
        local_118.ArrayMax = 0;
      }
      else {
        pvVar20 = *(void **)pFVar23;
        if (iVar10 == 0) goto LAB_141961928;
LAB_141961933:
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar21 = iVar10 + iVar8;
        if ((int)uVar21 < iVar10) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        pTVar24 = &local_118;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar21,0,&pTVar24->AllocatorInstance,iVar10,&local_118.ArrayMax);
        if (iVar10 != 0) {
          memcpy(local_118.AllocatorInstance.Data,pvVar20,(longlong)iVar10 * 2);
        }
      }
      pFVar19 = local_d8;
      ::FString::PathAppend((FString *)&local_118,*(wchar_t **)local_d8,iVar9);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_e8,&local_118,0xc - (uint)(local_118.ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_e8,L"*.uproject",10);
      pTVar24 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                ((ulonglong)pTVar24 & 0xffffffffffffff00);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_e8.ArrayNum != 0) {
        FVar18.Data = local_e8.AllocatorInstance.Data;
      }
      (*pcVar3)(pIVar11,&local_138,FVar18.Data,1,pTVar24);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      uVar15 = (ulonglong)local_138.Data.ArrayNum;
      pFVar22 = local_138.Data.AllocatorInstance.Data + uVar15 * 0x10;
      local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,local_138.Data.ArrayNum);
      FVar18.Data = local_138.Data.AllocatorInstance.Data;
      while( true ) {
        if (local_138.Data.ArrayNum != (int)uVar15) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (FVar18.Data == pFVar22) break;
        pFVar12 = FPaths::GetCleanFilename(local_70,(FString *)FVar18.Data);
        uVar25 = (undefined4)((ulonglong)pTVar24 >> 0x20);
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        lVar17 = (longlong)local_158.Data.ArrayNum;
        _Src = (pFVar12->Data).AllocatorInstance.Data;
        if (local_158.Data.ArrayNum == 0) {
          local_158.Data.ArrayMax = 0;
        }
        else {
          pFVar12 = &local_158;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,
                     local_158.Data.ArrayNum,&local_158.Data.ArrayMax);
          uVar25 = (undefined4)((ulonglong)pFVar12 >> 0x20);
          memcpy(local_158.Data.AllocatorInstance.Data,_Src,lVar17 * 2);
        }
        if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
        }
        pTVar24 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)CONCAT44(uVar25,1);
        iVar9 = ::FString::Find(&local_158,L".",1,CaseSensitive,FromEnd,-1);
        if (iVar9 != -1) {
          iVar10 = local_158.Data.ArrayNum + -1;
          if (local_158.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          iVar8 = iVar10;
          if (iVar9 < iVar10) {
            iVar8 = iVar9;
          }
          iVar9 = 0;
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          ::FString::RemoveAt(&local_158,iVar9,iVar10 - iVar9,Default);
        }
        uVar21 = *(uint *)(pFVar23 + 8);
        iVar9 = *(int *)(pFVar19 + 8) + -1;
        if (*(int *)(pFVar19 + 8) == 0) {
          iVar9 = 0;
        }
        iVar10 = iVar9 + 1;
        if ((uVar21 == 0) && (iVar10 != 0)) {
          iVar10 = iVar9 + 2;
          pvVar20 = *(void **)pFVar23;
LAB_141961b61:
          local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar10 != 0) goto LAB_141961b6d;
          local_168.ArrayMax = 0;
          local_168.ArrayNum = uVar21;
        }
        else {
          pvVar20 = *(void **)pFVar23;
          if (uVar21 == 0) goto LAB_141961b61;
LAB_141961b6d:
          local_168.ArrayNum = uVar21;
          local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar14 = uVar21 + iVar10;
          if ((int)uVar14 < (int)uVar21) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          pTVar24 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_168;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar14,0,(ForAnyElementType *)pTVar24,uVar21,&local_168.ArrayMax);
          if (uVar21 != 0) {
            memcpy(local_168.AllocatorInstance.Data,pvVar20,(longlong)(int)uVar21 * 2);
          }
        }
        pFVar19 = local_d8;
        ::FString::PathAppend((FString *)&local_168,*(wchar_t **)local_d8,iVar9);
        iVar9 = *(int *)(FVar18.Data + 8) + -1;
        if (*(int *)(FVar18.Data + 8) == 0) {
          iVar9 = 0;
        }
        if ((local_168.ArrayNum != 0) || (iVar10 = 1, iVar9 + 1 == 0)) {
          iVar10 = 0;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_90,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_168,
                   iVar10 + iVar9 + 1);
        ::FString::PathAppend((FString *)&local_90,*(wchar_t **)FVar18.Data,iVar9);
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        local_b8._0_8_ = &local_158;
        local_b8._8_8_ = &local_90;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)local_a8.Value,&local_a8,(bool *)local_b8);
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        uVar15 = (ulonglong)local_res10 & 0xffffffff;
        FVar18.Data = FVar18.Data + 0x10;
      }
      DestructItems<FString,int>
                ((FString *)local_138.Data.AllocatorInstance.Data,local_138.Data.ArrayNum);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      FVar18.Data = pFVar19 + 0x10;
      uVar15 = (ulonglong)local_res18 & 0xffffffff;
    }
    DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    pFVar23 = pFVar23 + 0x10;
    uVar15 = (ulonglong)local_res20 & 0xffffffff;
  } while( true );
}

