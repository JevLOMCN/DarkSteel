// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 23

// PreUnloadOnlineSubsystem @ 14eb24ee0

void __thiscall FOnlineSubsystemModule::PreUnloadOnlineSubsystem(FOnlineSubsystemModule *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *pTVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  lpCriticalSection = &this->OnlineSubsystemsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = &this->OnlineSubsystems;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              *)pTVar5);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              *)pTVar5;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x20 + *local_48;
      if (*(longlong *)(lVar6 + 8) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)(**(longlong **)(lVar6 + 8) + 0x148))();
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ShutdownOnlineSubsystem @ 14eb25090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineSubsystemModule::ShutdownOnlineSubsystem(FOnlineSubsystemModule *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *this_00;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  FModuleManager *this_01;
  FString *this_02;
  FName *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FName FVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  FName local_res8;
  FName local_res10;
  FString local_168;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  *local_128;
  char local_120;
  char local_11f;
  FString local_118;
  FString local_108;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  this_01 = FModuleManager::Get();
  lpCriticalSection = &this->OnlineSubsystemsLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->OnlineSubsystems;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              *)this_00);
  iVar13 = 1;
  local_c0 = 0;
  stack0xffffffffffffff18 = local_98._16_16_;
  local_f8 = (longlong *)local_98._0_8_;
  auStack_f0._0_8_ = local_98._8_8_;
  local_d8 = local_78;
  pTStack_d0 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  local_c8 = (TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar11 = (longlong)(int)uVar7 * 0x20 + *local_f8;
      if ((*(longlong *)(lVar11 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(lVar11 + 8) + 0x150))();
      uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
      uVar7 = (ulonglong)uStack_dc;
    } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_c8->HashSize < iVar5)) || (iVar5 < local_c8->HashSize)) {
        local_c8->HashSize = iVar5;
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_c8);
      }
    }
  }
  bVar4 = 1 < *(int *)&(this->OnlineSubsystems).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->OnlineSubsystems).field_0x8);
  puVar1 = &(this->OnlineSubsystems).field_0xc;
  *(undefined4 *)&(this->OnlineSubsystems).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->OnlineSubsystems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnlineSubsystems).field_0x34 = 0;
  iVar5 = *(int *)&(this->OnlineSubsystems).field_0x2c;
  *(undefined4 *)&(this->OnlineSubsystems).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->OnlineSubsystems).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OnlineSubsystems).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->OnlineSubsystems).field_0x48 = 1;
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
              *)&this->OnlineFactories);
  local_11f = '\0';
  stack0xfffffffffffffeb8 = local_68._16_16_;
  local_158 = (longlong *)local_68._0_8_;
  auStack_150._0_8_ = local_68._8_8_;
  local_138 = local_48;
  pTStack_130 = pTStack_40;
  uVar7 = local_68._24_8_ >> 0x20;
  uVar12 = local_68._28_4_;
  local_128 = (TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
               *)&this->OnlineFactories;
  if ((int)uVar12 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      plVar3 = local_158;
      if (5 < (byte)LogOnline._0_1_) {
        ::FName::ToString((FName *)(*local_158 + (longlong)(int)uVar7 * 0x18),&local_b8);
        ::FString::PrintfImpl(&local_118,L"Unloading online subsystem: %s");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      this_02 = ::FName::ToString((FName *)(*plVar3 + (longlong)(int)uVar12 * 0x18),&local_a8);
      ::FString::FString(&local_168,L"OnlineSubsystem");
      iVar5 = local_168.Data.ArrayNum + -1;
      FVar8.Data = local_168.Data.AllocatorInstance.Data;
      if (local_168.Data.ArrayNum == 0) {
        iVar5 = 0;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      bVar4 = ::FString::StartsWith(this_02,(wchar_t *)FVar8.Data,iVar5,CaseSensitive);
      if (bVar4) {
        if ((this_02->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(this_02->Data).AllocatorInstance.Data;
        }
        pFVar6 = ::FName::FName(&local_res10,pwVar9);
LAB_14eb25465:
        FVar10 = *pFVar6;
      }
      else {
        pFVar6 = TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
                 ::Find((TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
                         *)&this->ModuleRedirects,this_02);
        if (pFVar6 != (FName *)0x0) goto LAB_14eb25465;
        ::FString::ConcatFF(&local_108,&local_168,this_02);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar8.Data = local_108.Data.AllocatorInstance.Data;
        }
        pFVar6 = ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
        FVar10 = *pFVar6;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_130,uVar12);
      local_120 = '\x01';
      FModuleManager::UnloadModule(this_01,FVar10,true,true);
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar7 = (ulonglong)uStack_13c;
      uVar12 = uStack_13c;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if ((local_120 != '\0') && (local_11f != '\0')) {
      uVar12 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      if (3 < uVar12) {
        uVar7 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_128->HashSize < iVar13)) || (iVar13 < local_128->HashSize)) {
        local_128->HashSize = iVar13;
        TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  return;
}

// GetOnlineSubsystem @ 14eb25550

/* WARNING: Enum "Type": Some values do not have unique names */

IOnlineSubsystem * __thiscall
FOnlineSubsystemModule::GetOnlineSubsystem(FOnlineSubsystemModule *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IOnlineFactory *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  IOnlineSubsystem *pIVar9;
  TSharedPtr<IOnlineSubsystem,1> *pTVar10;
  IOnlineFactory **ppIVar11;
  FString *pFVar12;
  IModuleInterface *pIVar13;
  IOnlineSubsystem **ppIVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  longlong lVar17;
  FName local_res10;
  TPairInitializer<FName_const_&,TSharedPtr<IOnlineSubsystem,1>_const_&> local_res18;
  FName local_118;
  FName local_110;
  IOnlineSubsystem *local_108;
  FSharedReferencer<1> FStack_100;
  FName local_f8;
  FName local_f0;
  undefined8 local_e8;
  FSharedReferencer<1> local_e0;
  FString local_d8;
  FString local_c8;
  FName *local_b8;
  IOnlineSubsystem **local_b0;
  FDestructionSentinel local_a8;
  FString local_90;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pIVar9 = (IOnlineSubsystem *)0x0;
  local_res18.Key._0_4_ = 0;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_res10 = param_1;
  ParseOnlineSubsystemName(this,&local_110,&local_res10,&local_118);
  local_108 = (IOnlineSubsystem *)0x0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_118 == (FName)0x0) goto LAB_14eb25a70;
  lpCriticalSection = &this->OnlineSubsystemsLock;
  bVar4 = false;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pIVar9 = (IOnlineSubsystem *)(*pcVar2)();
    return pIVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
            ::Find((TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
                    *)&this->OnlineSubsystems,local_110);
  if (pTVar10 != (TSharedPtr<IOnlineSubsystem,1> *)0x0) {
    pIVar9 = pTVar10->Object;
    local_e0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  local_e8 = 0;
  local_108 = pIVar9;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_100,&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  if (local_108 == (IOnlineSubsystem *)0x0) {
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    bVar5 = IOnlineSubsystem::IsEnabled(&local_118,&local_f0);
    if (bVar5) {
      ppIVar11 = TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
                 ::Find((TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
                         *)&this->OnlineFactories,local_118);
      if (ppIVar11 == (IOnlineFactory **)0x0) {
        pFVar12 = ::FName::ToString(&local_118,&local_90);
        pIVar13 = LoadSubsystemModule(pFVar12,&this->ModuleRedirects);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if ((pIVar13 == (IModuleInterface *)0x0) ||
           (ppIVar11 = TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
                       ::Find((TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
                               *)&this->OnlineFactories,local_118),
           ppIVar11 == (IOnlineFactory **)0x0)) goto LAB_14eb2593f;
      }
      pIVar1 = *ppIVar11;
      if (pIVar1 != (IOnlineFactory *)0x0) {
        ppIVar14 = (IOnlineSubsystem **)
                   (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_80,local_f8);
        if (&local_108 != ppIVar14) {
          local_108 = *ppIVar14;
          *ppIVar14 = (IOnlineSubsystem *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_100,(FSharedReferencer<1> *)(ppIVar14 + 1));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        if (local_108 == (IOnlineSubsystem *)0x0) {
          uVar16 = ::GetTypeHash(local_110.ComparisonIndex.Value);
          if (*(int *)&(this->OnlineSubsystemFailureNotes).Elements.field_0x8 !=
              *(int *)&(this->OnlineSubsystemFailureNotes).Elements.field_0x34) {
            FVar15 = (this->OnlineSubsystemFailureNotes).Hash.SecondaryData;
            if (FVar15 == (ForElementType<FSetElementId>)0x0) {
              FVar15 = (ForElementType<FSetElementId>)&(this->OnlineSubsystemFailureNotes).Hash;
            }
            iVar7 = *(int *)((longlong)FVar15 +
                            (ulonglong)
                            ((this->OnlineSubsystemFailureNotes).HashSize - 1U &
                            local_110.Number + uVar16) * 4);
            if (iVar7 != -1) {
              lVar17 = *(longlong *)&(this->OnlineSubsystemFailureNotes).Elements;
              do {
                if (*(FName *)(lVar17 + (longlong)iVar7 * 0x10) == local_110) goto LAB_14eb2593f;
                iVar7 = *(int *)(lVar17 + 8 + (longlong)iVar7 * 0x10);
              } while (iVar7 != -1);
            }
          }
          if (4 < (byte)LogOnline._0_1_) {
            if (local_f8 == FOnlineSubsystemImpl::DefaultInstanceName) {
              pFVar12 = ::FName::ToString(&local_118,&local_50);
              if ((pFVar12->Data).ArrayNum == 0) {
                bVar3 = true;
                bVar5 = false;
              }
              else {
                bVar3 = true;
                bVar5 = false;
              }
            }
            else {
              ::FName::ToString(&local_110,&local_60);
              bVar3 = false;
              bVar5 = true;
            }
            ::FString::PrintfImpl(&local_c8,L"Unable to create OnlineSubsystem instance %s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if ((bVar5) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
            {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if ((bVar3) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
            {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    (&this->OnlineSubsystemFailureNotes,(FName *)&local_res18.Value,
                     (bool *)&local_110);
        }
        else {
          if (4 < (byte)LogOnline._0_1_) {
            ::FName::ToString(&local_res10,&local_70);
            ::FString::PrintfImpl(&local_d8,L"Created online subsystem instance for: %s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
          local_b8 = &local_110;
          local_b0 = &local_108;
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IOnlineSubsystem,1>_const_&>_>
                    ((TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                      *)&this->OnlineSubsystems,&local_res18,(bool *)&local_b8);
          bVar4 = true;
        }
      }
    }
  }
LAB_14eb2593f:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FOnlineSubsystemDelegates::OnOnlineSubsystemCreated,(FWriteAccessScope *)&local_a8);
    bVar4 = false;
    FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._28_4_ =
         FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._28_4_ + 1;
    uVar16 = FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._16_4_ - 1;
    if (-1 < (int)uVar16) {
      lVar17 = (longlong)(int)uVar16 << 4;
      bVar4 = false;
      do {
        uVar8 = 0;
        if ((int)uVar16 < (int)FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._16_4_) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pIVar9 = (IOnlineSubsystem *)(*pcVar2)();
          return pIVar9;
        }
        if (((*(int *)(lVar17 + 8 + FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._8_8_) == 0)
            || (*(longlong **)(lVar17 + FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._8_8_)
                == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)
                                   (lVar17 + FOnlineSubsystemDelegates::OnOnlineSubsystemCreated.
                                             _8_8_) + 0x68))(), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar17 = lVar17 + -0x10;
        uVar16 = uVar16 - 1;
      } while (-1 < (int)uVar16);
    }
    FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._28_4_ =
         FOnlineSubsystemDelegates::OnOnlineSubsystemCreated._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FOnlineSubsystemDelegates::OnOnlineSubsystemCreated,false);
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
  }
LAB_14eb25a70:
  pIVar9 = local_108;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_100.ReferenceController);
  return pIVar9;
}

// GetNativeSubsystem @ 14eb25aa0

IOnlineSubsystem * __thiscall
FOnlineSubsystemModule::GetNativeSubsystem(FOnlineSubsystemModule *this,bool param_1)

{
  bool bVar1;
  IOnlineSubsystem *pIVar2;
  
  if (this->NativePlatformService == (FName)0x0) {
    return (IOnlineSubsystem *)0x0;
  }
  if ((!param_1) && (bVar1 = IOnlineSubsystem::IsLoaded(&this->NativePlatformService), !bVar1)) {
    return (IOnlineSubsystem *)0x0;
  }
  pIVar2 = IOnlineSubsystem::Get(&this->NativePlatformService);
  return pIVar2;
}

// GetSubsystemByConfig @ 14eb25ae0

IOnlineSubsystem * __thiscall
FOnlineSubsystemModule::GetSubsystemByConfig
          (FOnlineSubsystemModule *this,FString *param_1,bool param_2)

{
  bool bVar1;
  FName *pFVar2;
  IOnlineSubsystem *pIVar3;
  
  pFVar2 = TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
           ::Find((TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
                   *)&this->ConfigDefinedSubsystems,param_1);
  if ((pFVar2 == (FName *)0x0) || (*pFVar2 == (FName)0x0)) {
    return (IOnlineSubsystem *)0x0;
  }
  if ((!param_2) && (bVar1 = IOnlineSubsystem::IsLoaded(pFVar2), !bVar1)) {
    return (IOnlineSubsystem *)0x0;
  }
  pIVar3 = IOnlineSubsystem::Get(pFVar2);
  return pIVar3;
}

// DestroyOnlineSubsystem @ 14eb25b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSubsystemModule::DestroyOnlineSubsystem(FOnlineSubsystemModule *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  IOnlineSubsystem *pIVar2;
  bool bVar3;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TSharedPtr<IOnlineSubsystem,1> local_50;
  FString local_40;
  FString local_30;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res10 = param_1;
  ParseOnlineSubsystemName(this,&local_res20,&local_res10,&local_res18);
  if (local_res18 != (FName)0x0) {
    lpCriticalSection = &this->OnlineSubsystemsLock;
    local_50.Object = (IOnlineSubsystem *)0x0;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
    ::RemoveAndCopyValue(&this->OnlineSubsystems,local_res20,&local_50);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pIVar2 = local_50.Object;
    if (local_50.Object == (IOnlineSubsystem *)0x0) {
      if (2 < (byte)LogOnline._0_1_) {
        ::FName::ToString(&local_res20,&local_30);
        ::FString::PrintfImpl
                  (&local_40,L"OnlineSubsystem instance %s not found, unable to destroy.");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((local_50.Object == (IOnlineSubsystem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(pIVar2->_padding_ + 0x150))(pIVar2);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                (&this->OnlineSubsystemFailureNotes,local_res20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  return;
}

// IsOnlineSubsystemLoaded @ 14eb25cf0

bool __thiscall
FOnlineSubsystemModule::IsOnlineSubsystemLoaded(FOnlineSubsystemModule *this,FName param_1)

{
  bool bVar1;
  FModuleManager *this_00;
  TMap<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_> *pTVar2;
  FName FVar3;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  undefined1 local_38 [8];
  FString local_30;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  local_res10 = param_1;
  ParseOnlineSubsystemName(this,(FName *)local_38,&local_res10,&local_res18);
  if (local_res18 != (FName)0x0) {
    this_00 = FModuleManager::Get();
    pTVar2 = (TMap<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
              *)::FName::ToString(&local_res18,&local_30);
    FVar3 = GetOnlineModuleName((FString *)local_38,pTVar2);
    bVar1 = FModuleManager::IsModuleLoaded(this_00,*(FName *)FVar3);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// RegisterPlatformService @ 14eb25db0

void __thiscall
FOnlineSubsystemModule::RegisterPlatformService
          (FOnlineSubsystemModule *this,FName param_1,IOnlineFactory *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TPairInitializer<FName_const_&,IOnlineFactory_*_const_&> local_res8;
  IOnlineFactory *local_res18;
  IOnlineFactory ***local_18;
  IOnlineFactory **local_10;
  
  local_res8.Value = (IOnlineFactory **)param_1;
  local_res18 = param_2;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->OnlineFactories).field_0x8 != *(int *)&(this->OnlineFactories).field_0x34) {
    puVar4 = *(undefined1 **)&(this->OnlineFactories).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->OnlineFactories).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->OnlineFactories).field_0x48 - 1U &
                              param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->OnlineFactories).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = &local_res18;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,IOnlineFactory_*_const_&>_>
            ((TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
              *)&this->OnlineFactories,&local_res8,(bool *)&local_18);
  return;
}

// UnregisterPlatformService @ 14eb25e60

void __thiscall
FOnlineSubsystemModule::UnregisterPlatformService(FOnlineSubsystemModule *this,FName param_1)

{
  TMap<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
  *this_00;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  this_00 = &this->OnlineFactories;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->OnlineFactories).field_0x8 == *(int *)&(this->OnlineFactories).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->OnlineFactories).field_0x40;
  puVar1 = &(this->OnlineFactories).field_0x38;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar3 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->OnlineFactories).field_0x48 - 1U &
                            param_1.Number + uVar2) * 4);
  if (iVar3 == -1) {
    return;
  }
  while (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) != param_1) {
    iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
    if (iVar3 == -1) {
      return;
    }
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  puVar4 = *(undefined1 **)&(this->OnlineFactories).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar3 = *(int *)(puVar4 + ((longlong)*(int *)&(this->OnlineFactories).field_0x48 - 1U &
                            (longlong)(int)(uVar2 + param_1.Number)) * 4);
  if (iVar3 == -1) {
    return;
  }
  do {
    if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == param_1) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
                       *)this_00,iVar3);
      return;
    }
    iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
  } while (iVar3 != -1);
  return;
}

// StartupModule @ 14eb25f40

void __thiscall FOnlineSubsystemModule::StartupModule(FOnlineSubsystemModule *this)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  FOnlineSubsystemModule *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  bool local_res8 [8];
  FName local_res10;
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"OnlineSubsystem",L"AdditionalModulesToLoad",&local_58,&GEngineIni);
  iVar1 = local_58.ArrayNum;
  uVar3 = (ulonglong)local_58.ArrayNum;
  pFVar9 = local_58.AllocatorInstance.Data + uVar3 * 0x10;
  FVar8.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar8.Data == pFVar9) break;
    pFVar4 = FModuleManager::Get();
    if (*(int *)(FVar8.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar8.Data;
    }
    bVar2 = FModuleManager::ModuleExists(pFVar4,pwVar7,(FString *)0x0);
    if (bVar2) {
      pFVar4 = FModuleManager::Get();
      if (*(int *)(FVar8.Data + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)FVar8.Data;
      }
      pFVar5 = ::FName::FName(&local_res18,pwVar7);
      FModuleManager::LoadModule(pFVar4,*pFVar5,None);
    }
    uVar3 = local_58._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  ProcessConfigDefinedModuleRedirects(this);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"OnlineSubsystem",L"NativePlatformService",&local_48,&GEngineIni);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res10,(wchar_t *)FVar8.Data);
  this->NativePlatformService = *pFVar5;
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"OnlineSubsystem",L"bLoadNativeOSSBeforeDefault",local_res8,&GEngineIni);
  if (local_res8[0] == false) {
    LoadDefaultSubsystem(this);
    ProcessConfigDefinedSubsystems(this);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
        _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName);
    (**(code **)(pFVar6->_padding_ + 0x58))(pFVar6,1);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
        _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName);
    (**(code **)(pFVar6->_padding_ + 0x58))(pFVar6,1);
    LoadDefaultSubsystem(this);
    ProcessConfigDefinedSubsystems(this);
  }
  bPostStartupModule = true;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// PreUnloadCallback @ 14eb26240

void __thiscall FOnlineSubsystemModule::PreUnloadCallback(FOnlineSubsystemModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eb26243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// ShutdownModule @ 14eb26250

void __thiscall FOnlineSubsystemModule::ShutdownModule(FOnlineSubsystemModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eb26253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// SupportsDynamicReloading @ 14eb26260

bool __thiscall FOnlineSubsystemModule::SupportsDynamicReloading(FOnlineSubsystemModule *this)

{
  return false;
}

// SupportsAutomaticShutdown @ 14eb26270

bool __thiscall FOnlineSubsystemModule::SupportsAutomaticShutdown(FOnlineSubsystemModule *this)

{
  return true;
}

// ~FOnlineSubsystemModule @ 14eb35600

void __thiscall FOnlineSubsystemModule::~FOnlineSubsystemModule(FOnlineSubsystemModule *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7FOnlineSubsystemModule__6B_;
  *(undefined4 *)&(this->InstanceNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceNames);
  *(undefined4 *)&(this->ModuleRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModuleRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModuleRedirects);
  (this->OnlineSubsystemFailureNotes).HashSize = 0;
  FVar2 = (this->OnlineSubsystemFailureNotes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnlineSubsystemFailureNotes).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnlineSubsystemsLock);
  *(undefined4 *)&(this->OnlineSubsystems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnlineSubsystems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnlineSubsystems);
  *(undefined4 *)&(this->OnlineFactories).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnlineFactories).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,IOnlineFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,IOnlineFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,IOnlineFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnlineFactories);
  *(undefined4 *)&(this->ConfigDefinedSubsystems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConfigDefinedSubsystems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConfigDefinedSubsystems);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// DoesInstanceExist @ 14ebef450

bool __thiscall
FOnlineSubsystemModule::DoesInstanceExist(FOnlineSubsystemModule *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<IOnlineSubsystem,1> *pTVar4;
  IOnlineSubsystem *pIVar5;
  IOnlineSubsystem *pIVar6;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  FName local_28 [2];
  
  pIVar5 = (IOnlineSubsystem *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  local_res10 = param_1;
  ParseOnlineSubsystemName(this,local_28,&local_res10,&local_res18);
  if (local_res18 == (FName)0x0) {
    return false;
  }
  lpCriticalSection = &this->OnlineSubsystemsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
                   *)&this->OnlineSubsystems,local_28[0]);
  pIVar6 = pIVar5;
  if (pTVar4 != (TSharedPtr<IOnlineSubsystem,1> *)0x0) {
    pIVar6 = (IOnlineSubsystem *)(pTVar4->SharedReferenceCount).ReferenceController;
    pIVar5 = pTVar4->Object;
    if (pIVar6 != (IOnlineSubsystem *)0x0) {
      LOCK();
      *(int *)&(pIVar6->OnlineNotificationHandler).Object =
           *(int *)&(pIVar6->OnlineNotificationHandler).Object + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar6);
  return pIVar5 != (IOnlineSubsystem *)0x0;
}

// EnumerateOnlineSubsystems @ 14ebf0da0

void __thiscall
FOnlineSubsystemModule::EnumerateOnlineSubsystems
          (FOnlineSubsystemModule *this,TFunction<void___cdecl(IOnlineSubsystem_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *pTVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  longlong local_c8;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lpCriticalSection = &this->OnlineSubsystemsLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iStack_b8 = 0;
  puVar1 = &(this->OnlineSubsystems).field_0x10;
  iVar4 = *(int *)&(this->OnlineSubsystems).field_0x28;
  pTVar2 = &this->OnlineSubsystems;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->OnlineSubsystems).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ebf0e8f;
      uVar12 = puVar15[lVar10 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_a4 = (int)lVar10 + -1 + local_a0;
    if (iVar4 < iStack_a4) {
      iStack_a4 = iVar4;
    }
  }
LAB_14ebf0e8f:
  uStack_9c = local_44;
  iStack_98 = *(int *)&(this->OnlineSubsystems).field_0x8 -
              *(int *)&(this->OnlineSubsystems).field_0x34;
  uVar12 = *(uint *)&(this->OnlineSubsystems).field_0x28;
  uStack_a8 = 0xffffffff;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar2;
  local_b0 = puVar1;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->OnlineSubsystems).field_0x28;
  if (uVar12 != uVar5) {
    puVar14 = *(undefined1 **)&(this->OnlineSubsystems).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ebf0fa0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ebf0fa0:
  while( true ) {
    pTVar7 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar12) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)((longlong)TStack_88.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar7);
    if (lVar10 != 0) {
      local_c8 = lVar10;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar6)(uVar9,&local_c8);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LoadDefaultSubsystem @ 14ec0d1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineSubsystemModule::LoadDefaultSubsystem(FOnlineSubsystemModule *this)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"OnlineSubsystem",L"DefaultPlatformService",&local_28,&GEngineIni);
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(local_res10,(wchar_t *)FVar4.Data);
    bVar1 = TryLoadSubsystemAndSetDefault(this,*pFVar3);
    if (bVar1) goto LAB_14ec0d2d3;
  }
  bVar1 = TryLoadSubsystemAndSetDefault(this,NULL_SUBSYSTEM);
  if ((!bVar1) && (4 < (byte)LogOnline._0_1_)) {
    ::FString::PrintfImpl(&local_18,L"Failed to load any Online Subsystem Modules");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_14ec0d2d3:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ParseOnlineSubsystemName @ 14ec0dd20

FName __thiscall
FOnlineSubsystemModule::ParseOnlineSubsystemName
          (FOnlineSubsystemModule *this,FName *param_1,FName *param_2,FName *param_3)

{
  TMap<FName,FOnlineSubsystemModule::FInstanceNameEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>_>
  *this_00;
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  FString *pFVar6;
  FName *pFVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  int iVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FName local_res8;
  FName *local_res10;
  FName *in_stack_00000028;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar2 = *param_2;
  this_00 = &this->InstanceNames;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->InstanceNames).field_0x8 != *(int *)&(this->InstanceNames).field_0x34) {
    puVar8 = *(undefined1 **)&(this->InstanceNames).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->InstanceNames).field_0x38;
    }
    iVar10 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&(this->InstanceNames).field_0x48 - 1U &
                               FVar2.Number + uVar3) * 4);
    if (iVar10 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x28;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x28) == FVar2) {
          pFVar5 = (FName *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar5 = (FName *)0x0;
          }
          if (pFVar5 != (FName *)0x0) {
            *param_3 = *pFVar5;
            *in_stack_00000028 = pFVar5[1];
            goto LAB_14ec0e008;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x20);
      } while (iVar10 != -1);
    }
  }
  *param_3 = this->DefaultPlatformService;
  *in_stack_00000028 = FOnlineSubsystemImpl::DefaultInstanceName;
  if (*param_2 != (FName)0x0) {
    ::FName::ToString(param_2,&local_68);
    for (FVar11.Data = local_68.Data.AllocatorInstance.Data;
        FVar11.Data != local_68.Data.AllocatorInstance.Data + (longlong)local_68.Data.ArrayNum * 2;
        FVar11.Data = FVar11.Data + 2) {
      if (*(wchar_t *)FVar11.Data == L':') {
        iVar10 = (int)((longlong)FVar11.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1);
        if (iVar10 != -1) {
          if (0 < iVar10) {
            iVar4 = local_68.Data.ArrayNum + -1;
            if (local_68.Data.ArrayNum == 0) {
              iVar4 = 0;
            }
            if (iVar10 < iVar4) {
              iVar4 = iVar10;
            }
            iVar12 = 0;
            if (0 < iVar4) {
              iVar12 = iVar4;
            }
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar11.Data = local_68.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)FVar11.Data,iVar12);
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar11.Data = local_58.Data.AllocatorInstance.Data;
            }
            pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
            *param_3 = *pFVar5;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          iVar4 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          if (iVar10 + 1 < iVar4) {
            pFVar6 = ::FString::RightChop(&local_68,&local_58,iVar10 + 1);
            if ((pFVar6->Data).ArrayNum == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
            }
            pFVar5 = ::FName::FName(&local_res8,pwVar9);
            *in_stack_00000028 = *pFVar5;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_14ec0de30;
        }
        break;
      }
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar11.Data = local_68.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
    *param_3 = *pFVar5;
LAB_14ec0de30:
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  local_res10 = param_2;
  TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
              *)this_00,(TKeyInitializer<FName_const_&> *)&local_res8,(bool *)&local_res10);
  pFVar5 = (FName *)(*(longlong *)&this_00->field_0x0 +
                    ((longlong)(int)local_res8.ComparisonIndex.Value * 5 + 1) * 8);
  *pFVar5 = *param_3;
  pFVar5[1] = *in_stack_00000028;
  ::FName::ToString(in_stack_00000028,&local_48);
  ::FName::ToString(param_3,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s:%s");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
  pFVar5[2] = *pFVar7;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14ec0e008:
  *param_1 = pFVar5[2];
  return (FName)param_1;
}

// ProcessConfigDefinedModuleRedirects @ 14ec0e1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSubsystemModule::ProcessConfigDefinedModuleRedirects(FOnlineSubsystemModule *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  TPairInitializer<FString_&&,FName_&&> local_res18;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  FName *local_40;
  TArrayView<FString_const_,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"OnlineSubsystem",L"ModuleRedirects",&local_68,&GEngineIni);
  if (local_68.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_68._8_8_ & 0xffffffff);
  }
  iStack_50 = local_68.ArrayNum;
  if (local_78.ArrayMax < local_68.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_68.ArrayNum,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    iStack_50 = local_68.ArrayNum;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((iStack_50 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_38.DataPtr = (FString *)local_58;
  ParseOnlineSubsystemConfigPairs(&local_38,&local_78);
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  iVar2 = local_78.ArrayNum;
  pFVar6 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x20;
  pFVar5 = local_78.AllocatorInstance.Data + 0x18;
  while( true ) {
    if (local_78.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 + -0x18 == pFVar6) break;
    if (5 < (byte)LogOnline._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    if (*(int *)pFVar5 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar5 + -8);
    }
    local_48 = pFVar5 + -0x18;
    local_40 = ::FName::FName((FName *)&local_res18.Value,pwVar4);
    TSet<TTuple<FString,FName>,TDefaultMapHashableKeyFuncs<FString,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,FName_&&>_>
              ((TSet<TTuple<FString,FName>,TDefaultMapHashableKeyFuncs<FString,FName,0>,FDefaultSetAllocator>
                *)&this->ModuleRedirects,&local_res18,(bool *)&local_48);
    pFVar5 = pFVar5 + 0x20;
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((TTuple<FString,FString> *)local_78.AllocatorInstance.Data != (TTuple<FString,FString> *)0x0)
  {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// ProcessConfigDefinedSubsystems @ 14ec0e3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineSubsystemModule::ProcessConfigDefinedSubsystems(FOnlineSubsystemModule *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  TPairInitializer<FString_&&,FName_&&> local_res18;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  FName *local_40;
  TArrayView<FString_const_,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"OnlineSubsystem",L"ConfigDefinedPlatformServices",&local_68,&GEngineIni);
  if (local_68.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_68._8_8_ & 0xffffffff);
  }
  iStack_50 = local_68.ArrayNum;
  if (local_78.ArrayMax < local_68.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_68.ArrayNum,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    iStack_50 = local_68.ArrayNum;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((iStack_50 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_38.DataPtr = (FString *)local_58;
  ParseOnlineSubsystemConfigPairs(&local_38,&local_78);
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  iVar2 = local_78.ArrayNum;
  pFVar6 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x20;
  pFVar5 = local_78.AllocatorInstance.Data + 0x18;
  while( true ) {
    if (local_78.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 + -0x18 == pFVar6) break;
    if (5 < (byte)LogOnline._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    if (*(int *)pFVar5 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar5 + -8);
    }
    local_48 = pFVar5 + -0x18;
    local_40 = ::FName::FName((FName *)&local_res18.Value,pwVar4);
    TSet<TTuple<FString,FName>,TDefaultMapHashableKeyFuncs<FString,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,FName_&&>_>
              ((TSet<TTuple<FString,FName>,TDefaultMapHashableKeyFuncs<FString,FName,0>,FDefaultSetAllocator>
                *)&this->ConfigDefinedSubsystems,&local_res18,(bool *)&local_48);
    pFVar5 = pFVar5 + 0x20;
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((TTuple<FString,FString> *)local_78.AllocatorInstance.Data != (TTuple<FString,FString> *)0x0)
  {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// ReloadDefaultSubsystem @ 14ec0fb80

void __thiscall FOnlineSubsystemModule::ReloadDefaultSubsystem(FOnlineSubsystemModule *this)

{
  undefined1 *puVar1;
  TMap<FName,FOnlineSubsystemModule::FInstanceNameEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  (**(code **)(this->_padding_ + 0x68))();
  this_00 = &this->InstanceNames;
  bVar3 = 1 < *(int *)&(this->InstanceNames).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InstanceNames).field_0xc;
  *(undefined4 *)&(this->InstanceNames).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InstanceNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceNames).field_0x34 = 0;
  iVar2 = *(int *)&(this->InstanceNames).field_0x2c;
  *(undefined4 *)&(this->InstanceNames).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InstanceNames).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InstanceNames).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->InstanceNames).field_0x48 = 1;
    TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FOnlineSubsystemModule::FInstanceNameEntry>,TDefaultMapHashableKeyFuncs<FName,FOnlineSubsystemModule::FInstanceNameEntry,0>,FDefaultSetAllocator>
              *)this_00);
  }
  LoadDefaultSubsystem(this);
  return;
}

// TryLoadSubsystemAndSetDefault @ 14ec1a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemModule::TryLoadSubsystemAndSetDefault(FOnlineSubsystemModule *this,FName param_1)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  IModuleInterface *pIVar5;
  longlong lVar6;
  undefined1 *puVar7;
  bool bVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar8 = false;
  local_res10 = param_1;
  ::FName::ToString(&local_res10,&local_38);
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  bVar2 = IOnlineSubsystem::IsEnabled(&local_res10,local_res18);
  if (bVar2) {
    pIVar5 = LoadSubsystemModule(&local_38,&this->ModuleRedirects);
    FVar1 = local_res10;
    if (pIVar5 == (IModuleInterface *)0x0) {
      if ((byte)LogOnline._0_1_ < 3) goto LAB_14ec1a52e;
      ::FString::PrintfImpl
                (&local_28,L"TryLoadSubsystemAndSetDefault: LoadSubsystemModule([%s]) failed");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    else {
      uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      if (*(int *)&(this->OnlineFactories).field_0x8 != *(int *)&(this->OnlineFactories).field_0x34)
      {
        puVar7 = *(undefined1 **)&(this->OnlineFactories).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->OnlineFactories).field_0x38;
        }
        iVar4 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->OnlineFactories).field_0x48 - 1U &
                                  FVar1.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this->OnlineFactories + (longlong)iVar4 * 0x18) == FVar1) {
              lVar6 = (**(code **)(this->_padding_ + 0x50))(this,local_res10);
              if (lVar6 != 0) {
                if (4 < (byte)LogOnline._0_1_) {
                  ::FString::PrintfImpl
                            (&local_28,
                             L"TryLoadSubsystemAndSetDefault: Loaded subsystem for type [%s]");
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_28.Data.AllocatorInstance.Data);
                  }
                }
                bVar8 = true;
                this->DefaultPlatformService = local_res10;
              }
              goto LAB_14ec1a52e;
            }
            iVar4 = *(int *)(*(longlong *)&this->OnlineFactories + 0x10 + (longlong)iVar4 * 0x18);
          } while (iVar4 != -1);
        }
      }
      if ((byte)LogOnline._0_1_ < 3) goto LAB_14ec1a52e;
      ::FString::PrintfImpl
                (&local_28,L"TryLoadSubsystemAndSetDefault: OnlineFactories does not contain [%s]");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
  }
  else {
    if ((byte)LogOnline._0_1_ < 5) goto LAB_14ec1a52e;
    ::FString::PrintfImpl(&local_28,L"TryLoadSubsystemAndSetDefault: [%s] disabled");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14ec1a52e:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

