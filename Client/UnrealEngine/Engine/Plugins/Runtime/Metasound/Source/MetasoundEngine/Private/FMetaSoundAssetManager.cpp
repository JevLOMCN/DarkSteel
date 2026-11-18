// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 49

// FMetaSoundAssetManager @ 14b34a020

FMetaSoundAssetManager * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FMetaSoundAssetManager(FMetaSoundAssetManager *this)

{
  this->_padding_ = (longlong)&___7IMetaSoundAssetManager_Frontend_Metasound__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__Metasound__Frontend__IMetaSoundAssetManager__;
  (this->LoadingDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->LoadingDependencies).ArrayNum = 0;
  (this->LoadingDependencies).ArrayMax = 0;
  FStreamableManager::FStreamableManager(&this->StreamableManager);
  this->AsyncLoadIDCounter = 0;
  *(undefined8 *)&this->ClassInfoMap = 0;
  *(undefined8 *)&(this->ClassInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ClassInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ClassInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ClassInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ClassInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ClassInfoMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TagDataMapCriticalSection,4000);
  this->bLogActiveAssetsOnShutdown = true;
  return this;
}

// ~FMetaSoundAssetManager @ 14b3513f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::~FMetaSoundAssetManager(FMetaSoundAssetManager *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  ulonglong uVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_128;
  undefined1 local_127 [3];
  int local_124;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0 [2];
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar15 = 0;
  this->_padding_ = (longlong)&_vftable__for__Metasound__Frontend__IMetaSoundAssetManager__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  if (this->bLogActiveAssetsOnShutdown != false) {
    lpCriticalSection = &this->TagDataMapCriticalSection;
    local_88._0_8_ = (void *)0x0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->ClassInfoMap;
    if ((TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
         *)local_88 != this_00) {
      TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      if ((void *)local_88._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      local_88._0_8_ = *(undefined8 *)&this_00->field_0x0;
      puVar1 = &(this->ClassInfoMap).field_0x10;
      *(undefined8 *)&this_00->field_0x0 = 0;
      local_88._8_8_ = *(undefined8 *)&(this->ClassInfoMap).field_0x8;
      *(undefined8 *)&(this->ClassInfoMap).field_0x8 = 0;
      if (local_88 + 0x10 != puVar1) {
        if (*(longlong *)&(this->ClassInfoMap).field_0x20 == 0) {
          local_88._16_8_ = *(undefined8 *)puVar1;
          local_88._24_8_ = *(undefined8 *)&(this->ClassInfoMap).field_0x18;
        }
        if (local_68 != (uint *)0x0) {
          FMemory::Free(local_68);
        }
        local_68 = *(uint **)&(this->ClassInfoMap).field_0x20;
        *(undefined8 *)&(this->ClassInfoMap).field_0x20 = 0;
        local_60 = *(uint *)&(this->ClassInfoMap).field_0x28;
        local_5c = *(undefined4 *)&(this->ClassInfoMap).field_0x2c;
        *(undefined8 *)&(this->ClassInfoMap).field_0x28 = 0;
      }
      local_58 = *(undefined4 *)&(this->ClassInfoMap).field_0x30;
      local_54 = *(int *)&(this->ClassInfoMap).field_0x34;
      *(undefined4 *)&(this->ClassInfoMap).field_0x34 = 0;
      *(undefined4 *)&(this->ClassInfoMap).field_0x30 = 0xffffffff;
      if (*(longlong *)&(this->ClassInfoMap).field_0x40 == 0) {
        local_50 = *(undefined4 *)&(this->ClassInfoMap).field_0x38;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      local_48 = *(void **)&(this->ClassInfoMap).field_0x40;
      *(undefined8 *)&(this->ClassInfoMap).field_0x40 = 0;
      local_40 = *(undefined4 *)&(this->ClassInfoMap).field_0x48;
      *(undefined4 *)&(this->ClassInfoMap).field_0x48 = 0;
    }
    if (*(int *)&(this->ClassInfoMap).field_0x8 != *(int *)&(this->ClassInfoMap).field_0x34) {
      TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00);
      TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->ClassInfoMap).field_0x8);
      *(undefined4 *)&(this->ClassInfoMap).field_0x8 = 0;
      if (*(int *)&(this->ClassInfoMap).field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->ClassInfoMap).field_0xc);
      }
      *(undefined4 *)&(this->ClassInfoMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ClassInfoMap).field_0x34 = 0;
      *(undefined4 *)&(this->ClassInfoMap).field_0x28 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_88._8_4_ != local_54) {
      if (3 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      uVar16 = local_60;
      uStack_114 = 1;
      local_100 = 0;
      uStack_104 = local_100;
      if (local_60 != 0) {
        puVar11 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar11 = local_68;
        }
        uVar12 = *puVar11;
        local_100 = 0;
        uVar15 = 0;
        while (uVar12 == 0) {
          lVar9 = (longlong)(int)uVar15;
          local_100 = local_100 + 0x20;
          uVar15 = uVar15 + 1;
          uStack_104 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14b351681;
          uVar12 = puVar11[lVar9 + 1];
        }
        uStack_114 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_114 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_124 = (int)lVar9;
        uStack_104 = (local_100 - 1) + local_124;
        if ((int)local_60 < (int)uStack_104) {
          uStack_104 = local_60;
        }
      }
LAB_14b351681:
      iStack_f8 = local_88._8_4_ - local_54;
      local_120 = (longlong *)local_88;
      local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uStack_108 = 0xffffffff;
      TStack_e8.CurrentBitIndex = uStack_104;
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      TStack_e8._padding_ = CONCAT44(uStack_114,uVar15);
      uVar12 = local_60 & 0xffffffe0;
      uStack_fc = local_94;
      TStack_e8._28_4_ = local_94;
      TStack_e8.BaseBitIndex = local_100;
      uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
      iVar10 = (int)local_60 >> 5;
      bVar8 = (byte)local_60;
      uStack_118 = uVar15;
      local_f0 = local_120;
      TStack_e8.Array = local_110;
      if (((int)local_60 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar16 != local_60) {
        puVar11 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar11 = local_68;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar11[iVar10];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar10;
          uVar12 = uVar12 + 0x20;
          iVar10 = iVar10 + 1;
          uVar16 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14b35178c;
          uVar15 = puVar11[lVar9 + 1];
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar16 = (int)lVar9 + -1 + uVar12;
        if ((int)local_60 < (int)uVar16) {
          uVar16 = local_60;
        }
      }
LAB_14b35178c:
      while( true ) {
        plVar6 = local_f0;
        if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
          `TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_128);
        }
        if (((TStack_e8.CurrentBitIndex == uVar16) &&
            (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar6 == (longlong *)local_88)) break;
        lVar13 = (longlong)TStack_e8.CurrentBitIndex * 0x38 + *plVar6;
        iVar10 = *(int *)(lVar13 + 0x28);
        lVar9 = *(longlong *)(lVar13 + 0x20);
        lVar14 = (longlong)iVar10 * 0x40 + lVar9;
        while( true ) {
          if (*(int *)(lVar13 + 0x28) != iVar10) {
            `TCheckedPointerIterator<Metasound::Frontend::FMetaSoundAssetClassInfo_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_127);
          }
          if (lVar9 == lVar14) break;
          if (3 < (byte)LogMetaSound._0_1_) {
            FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(lVar9 + 0x30),local_c0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
            }
          }
          lVar9 = lVar9 + 0x40;
        }
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      }
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TagDataMapCriticalSection);
  *(undefined4 *)&(this->ClassInfoMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ClassInfoMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassInfoMap);
  FStreamableManager::~FStreamableManager(&this->StreamableManager);
  DestructItems<FMetaSoundAsyncAssetDependencies,int>
            ((FMetaSoundAsyncAssetDependencies *)(this->LoadingDependencies).AllocatorInstance.Data,
             (this->LoadingDependencies).ArrayNum);
  pFVar4 = (this->LoadingDependencies).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  return;
}

// operator() @ 14b354f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Metasound::Engine::FMetaSoundAssetManager::AddOrLoadAndUpdateFromObjectAsync'::__l2::<lambda_1>::
operator()(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68._0_8_ = *param_1;
  local_68._32_8_ = *(undefined8 *)this;
  local_68._72_8_ = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  local_68._64_8_ = *(undefined8 *)((longlong)this + 0x20);
  local_68._48_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_68._56_8_ = *(undefined8 *)((longlong)this + 0x18);
  if (local_68._32_8_ != 0) {
    *(undefined8 *)this = 0;
  }
  local_68._8_8_ = param_2;
  local_68[0x10] = param_3;
  Metasound::Engine::FMetaSoundAssetManager::OnPackageLoaded((FPackageLoadedArgs *)local_68);
  if (local_68._32_8_ != 0) {
    plVar1 = (longlong *)(local_68 + 0x30);
    if ((longlong *)local_68._72_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_68._72_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// operator() @ 14b35c920

void __thiscall
`Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets'::__l2::<lambda_1>::
operator()(void *this,UClass *param_1)

{
  longlong lVar1;
  int iVar2;
  FAssetData *pFVar3;
  FAssetData *pFVar4;
  undefined1 local_res8 [8];
  FAssetData *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UClass **)(lVar1 + 0x30) = param_1;
  local_18 = (FAssetData *)0x0;
  local_10 = 0;
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x4b8))
            (*(longlong **)((longlong)this + 8),&local_18,*(undefined8 *)this);
  iVar2 = (int)local_10;
  pFVar4 = local_18 + (int)local_10;
  pFVar3 = local_18;
  while( true ) {
    if ((int)local_10 != iVar2) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (*(code *)**(undefined8 **)((longlong)this + 0x10))
              ((*(undefined8 **)((longlong)this + 0x10))[1],pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  DestructItems<FAssetData,int>(local_18,(int)local_10);
  if (local_18 != (FAssetData *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// operator() @ 14b35d110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::
operator()(void *this,FAssetData *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_60 = *(longlong *)((longlong)this + 8);
  lStack_58 = *(longlong *)((longlong)this + 0x10);
  plVar2 = *(longlong **)this;
  local_68 = *(longlong *)((longlong)this + 0x18);
  local_48[0] = (code *)0x0;
  pcVar1 = *(code **)(*plVar2 + 0x20);
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = local_60;
  local_20[2] = lStack_58;
  local_20[3] = local_68;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
                  ::Call;
  }
  (*pcVar1)(plVar2,param_1,local_48);
  if (local_48[0] != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// operator() @ 14b35d200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories'::__l2::<lambda_2>::
operator()(void *this,FAssetData *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  IMetasoundUObjectRegistry *pIVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  FMetasoundAssetBase *this_00;
  INodeClassRegistry *pIVar10;
  FName *pFVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *this_01;
  FTopLevelAssetPath local_1c8;
  FMetaSoundAssetKey local_1b8;
  undefined1 local_198 [24];
  undefined8 uStack_180;
  void *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ForElementType<FSetElementId> local_160;
  ulonglong local_150;
  <lambda_1> local_148;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_140;
  FString local_f0;
  FNodeClassRegistryKey local_e0;
  undefined1 local_b8 [32];
  FMetasoundFrontendVersionNumber local_98;
  byte local_8e;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  local_140.Hash.InlineData[0] = '\0';
  local_140.Hash.InlineData[1] = '\0';
  local_140.Hash.InlineData[2] = '\0';
  local_140.Hash.InlineData[3] = '\0';
  local_140.Hash._padding_ = 0;
  local_140.HashSize = 0;
  local_140._76_4_ = 0;
  local_140.Elements._16_8_ = 0;
  local_140.Elements._24_8_ = 0;
  local_140.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_140.Elements._48_8_ = _UNK_150631d98;
  local_140.Elements._0_8_ = 0;
  local_140.Elements._8_8_ = 0;
  local_140.Elements._32_8_ = 0;
  local_140.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar7 = FAssetData::FastGetAsset(param_1,false,&local_140);
  if (pUVar7 == (UObject *)0x0) {
    Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
              ((FMetaSoundAssetClassInfo *)local_b8,param_1);
    if ((local_8e & 1) == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6979144095893554377>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                         ,0x4c9,"ClassInfo.bIsValid");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      FMetaSoundAssetKey::FMetaSoundAssetKey
                (&local_1b8,(FMetasoundFrontendClassName *)(local_b8 + 8),&local_98);
      Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_e0,&local_1b8);
      pIVar10 = Metasound::Frontend::INodeClassRegistry::Get();
      cVar4 = (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10,&local_e0);
      if (cVar4 != '\0') {
        pIVar10 = Metasound::Frontend::INodeClassRegistry::Get();
        (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10,&local_e0);
        local_1c8.PackageName.ComparisonIndex.Value = 0;
        local_1c8.PackageName.Number = 0;
        local_1c8.AssetName.ComparisonIndex.Value = 0;
        local_1c8.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_1c8,param_1->PackageName,param_1->AssetName);
        lVar2 = *(longlong *)this;
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x168);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        uVar5 = ::GetTypeHash(&local_1b8);
        if (*(int *)(lVar2 + 0x120) != *(int *)(lVar2 + 0x14c)) {
          lVar12 = *(longlong *)(lVar2 + 0x158);
          if (*(longlong *)(lVar2 + 0x158) == 0) {
            lVar12 = lVar2 + 0x150;
          }
          uVar5 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 0x160) - 1U & uVar5) * 4);
          if (uVar5 != 0xffffffff) {
            do {
              pFVar11 = (FName *)((longlong)(int)uVar5 * 0x38 +
                                 *(longlong *)
                                  &((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                     *)(lVar2 + 0x118))->Elements);
              if ((((*pFVar11 == local_1b8.ClassName.Namespace) &&
                   (pFVar11[1] == local_1b8.ClassName.Name)) &&
                  (pFVar11[2] == local_1b8.ClassName.Variant)) &&
                 ((pFVar11[3].ComparisonIndex.Value == local_1b8.Version.Major &&
                  (pFVar11[3].Number == local_1b8.Version.Minor)))) {
                if (uVar5 != 0xffffffff) {
                  this_01 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                             *)(pFVar11 + 4);
                  if (pFVar11 == (FName *)0x0) {
                    this_01 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                               *)0x0;
                  }
                  if (this_01 !=
                      (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    local_148.InAssetPath = &local_1c8;
                    iVar6 = TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                            ::
                            RemoveAllSwap<_Metasound::Engine::AssetSubsystemPrivate::RemoveClassInfo_::__l5::<lambda_1>_>
                                      (this_01,&local_148,No);
                    if (0 < iVar6) {
                      if (((1 < iVar6) && (local_1c8.PackageName == (FName)0x0)) &&
                         (3 < (byte)LogMetaSound._0_1_)) {
                        FMetaSoundAssetKey::ToString(&local_1b8,&local_f0);
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((this_01->ArrayNum == 0) &&
                         (*(int *)(lVar2 + 0x120) != *(int *)(lVar2 + 0x14c))) {
                        uVar5 = ::GetTypeHash(&local_1b8);
                        TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<FMetaSoundAssetKey>
                                  ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                    *)(lVar2 + 0x118),uVar5,&local_1b8);
                      }
                    }
                  }
                }
                break;
              }
              uVar5 = pFVar11[6].ComparisonIndex.Value;
            } while (uVar5 != 0xffffffff);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  else {
    pIVar8 = Metasound::IMetasoundUObjectRegistry::Get();
    local_198._16_8_ = 0;
    uStack_180 = 0;
    local_160.InlineData[0] = '\0';
    local_160.InlineData[1] = '\0';
    local_160.InlineData[2] = '\0';
    local_160.InlineData[3] = '\0';
    local_160._padding_ = 0;
    pcVar1 = *(code **)((longlong)*pIVar8 + 0x50);
    local_150 = 0;
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_8_ = 0;
    local_178 = (void *)0x0;
    local_170 = ___xmm_00000000ffffffff0000008000000000;
    uStack_168 = _UNK_150631d98;
    local_160.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar9 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                       (&local_78,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_198);
    pUVar7 = FAssetData::FastGetAsset(param_1,true,pTVar9);
    local_150 = local_150 & 0xffffffff00000000;
    if (local_160.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_160.SecondaryData);
    }
    iVar6 = SUB84(local_198._8_8_,4);
    local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
    }
    uVar5 = local_170._4_4_;
    uStack_168 = 0xffffffff;
    local_170 = (ulonglong)local_170._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_170 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
    }
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_198._0_8_);
    }
    this_00 = (FMetasoundAssetBase *)(*pcVar1)(pIVar8,pUVar7);
    if ((this_00 == (FMetasoundAssetBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetaSoundAsset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                           ,0x4c1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMetasoundAssetBase::UnregisterGraphWithFrontend(this_00);
    (**(code **)(**(longlong **)this + 0xc0))(*(longlong **)this,param_1);
  }
  return;
}

// AddOrLoadAndUpdateFromObjectAsync @ 14b364760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::AddOrLoadAndUpdateFromObjectAsync
          (FMetaSoundAssetManager *this,FAssetData *param_1,
          TFunction<void___cdecl(FMetaSoundAssetKey,UObject_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  FSoftObjectPath *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  FString *pFVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStackY_138 [32];
  FString local_108;
  FName local_f8;
  undefined1 local_f0 [16];
  FNameEntryId local_e0;
  uint uStack_dc;
  FMetasoundFrontendVersionNumber FStack_d8;
  FString local_d0;
  FName local_b8;
  FName FStack_b0;
  bool local_a8;
  FMetasoundFrontendVersionNumber FStack_a0;
  FSoftObjectPath local_98;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8 = (FName)((ulonglong)local_f8 & 0xffffffff00000000);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetaSoundAssetSubsystem::AddOrLoadAndUpdateFromObjectAsync");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId273,
               "UMetaSoundAssetSubsystem::AddOrLoadAndUpdateFromObjectAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
               ,0x111);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId273);
  }
  if ((param_1->PackageFlags & 0x20) == 0) {
    FAssetData::GetSoftObjectPath(param_1,&local_98);
    pUVar3 = FSoftObjectPath::ResolveObject(&local_98);
    if (pUVar3 == (UObject *)0x0) {
      if (6 < (byte)LogMetaSound._0_1_) {
        this_00 = FAssetData::GetSoftObjectPath(param_1,(FSoftObjectPath *)local_f0);
        FSoftObjectPath::ToString(this_00,&local_108);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if ((void *)CONCAT44(uStack_dc,local_e0.Value) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(uStack_dc,local_e0.Value));
        }
      }
      local_78 = *(longlong *)param_2;
      local_50 = *(longlong **)&param_2->field_0x28;
      *(undefined8 *)&param_2->field_0x28 = 0;
      local_58 = *(undefined8 *)&param_2->field_0x20;
      local_68 = *(longlong *)&param_2->field_0x10;
      uStack_60 = *(undefined8 *)&param_2->field_0x18;
      if (local_78 != 0) {
        *(undefined8 *)param_2 = 0;
      }
      local_f0._0_4_ = 0;
      local_f0._4_4_ = 0;
      local_f0._8_4_ = 0;
      local_f0._12_4_ = 0;
      local_e0.Value = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
                 (FWriteAccessScope *)&local_b8);
      FStack_a0 = (FMetasoundFrontendVersionNumber)((longlong)local_f0 + 8);
      puVar5 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)(local_f0 + 8));
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`Metasound::Engine::FMetaSoundAssetManager::AddOrLoadAndUpdateFromObjectAsync'::`2'::<lambda_1>_>
                   ::_vftable_;
        puVar5[4] = local_78;
        puVar5[9] = local_50;
        local_50 = (longlong *)0x0;
        puVar5[6] = local_68;
        puVar5[7] = uStack_60;
        puVar5[8] = local_58;
        if (puVar5[4] != 0) {
          local_78 = 0;
        }
      }
      if (local_a8 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_b0,(FDestructionSentinel *)&local_b8);
      }
      local_f8 = local_98.AssetPath.PackageName;
      bVar10 = local_98.AssetPath.PackageName != (FName)0x0;
      if (bVar10) {
        pFVar7 = ::FName::ToString(&local_f8,(FString *)&local_b8);
      }
      else {
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar7 = &local_d0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
      }
      local_108.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      if ((bVar10) && (local_b8 != (FName)0x0)) {
        FMemory::Free((void *)local_b8);
      }
      if ((!bVar10) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      LoadPackageAsync(&local_108,
                       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                        *)local_f0,0,PKG_None,-1);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_78 != 0) {
        plVar8 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar8 = local_50;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    else {
      if (6 < (byte)LogMetaSound._0_1_) {
        FSoftObjectPath::ToString(&local_98,&local_108);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      AddOrUpdateFromObjectInternal(this,(FMetaSoundAssetKey *)local_f0,pUVar3);
      local_b8.ComparisonIndex.Value = local_f0._0_4_;
      local_b8.Number = local_f0._4_4_;
      FStack_b0.ComparisonIndex.Value = local_f0._8_4_;
      FStack_b0.Number = local_f0._12_4_;
      FStack_a0 = FStack_d8;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar8 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_2->field_0x28;
      }
      uVar4 = (**(code **)(*plVar8 + 8))();
      (*pcVar1)(uVar4,&local_b8,pUVar3);
      if (*(longlong *)param_2 != 0) {
        plVar8 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar8 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
        *(undefined8 *)param_2 = 0;
      }
    }
    if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  else if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
    *(undefined8 *)param_2 = 0;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// AddOrUpdateFromAssetData @ 14b364bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::AddOrUpdateFromAssetData
          (FMetaSoundAssetManager *this,FAssetData *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FSoftObjectPath *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FString *pFVar5;
  bool bVar6;
  bool bVar7;
  FName local_res10;
  FString local_e8;
  undefined1 local_d8 [16];
  FNameEntryId local_c8;
  uint uStack_c4;
  FString local_b8;
  void *local_a8;
  FMRSWRecursiveAccessDetector *local_a0;
  bool local_98;
  undefined1 *local_90;
  FSoftObjectPath local_88;
  FMetaSoundAssetClassInfo local_68;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetaSoundAssetSubsystem::AddOrUpdateAsset_AssetData");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId314,"UMetaSoundAssetSubsystem::AddOrUpdateAsset_AssetData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
               ,0x13a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
  }
  if ((param_1->PackageFlags & 0x20) == 0) {
    FAssetData::GetSoftObjectPath(param_1,&local_88);
    pUVar2 = FSoftObjectPath::ResolveObject(&local_88);
    if (pUVar2 == (UObject *)0x0) {
      Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(&local_68,param_1);
      if ((local_68._padding_._2_1_ & 1) == 0) {
        if (5 < (byte)LogMetaSound._0_1_) {
          this_00 = FAssetData::GetSoftObjectPath(param_1,(FSoftObjectPath *)local_d8);
          FSoftObjectPath::ToString(this_00,&local_e8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if ((void *)CONCAT44(uStack_c4,local_c8.Value) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(uStack_c4,local_c8.Value));
          }
        }
        local_d8._0_4_ = 0;
        local_d8._4_4_ = 0;
        local_d8._8_4_ = 0;
        local_d8._12_4_ = 0;
        local_c8.Value = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                   (FWriteAccessScope *)&local_a8);
        local_90 = local_d8 + 8;
        puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(local_d8 + 8));
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[2] = uVar4;
          *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`Metasound::Engine::FMetaSoundAssetManager::AddOrUpdateFromAssetData'::`33'::<lambda_1>_>
                     ::_vftable_;
        }
        if (local_98 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_a0,(FDestructionSentinel *)&local_a8);
        }
        local_res10 = local_88.AssetPath.PackageName;
        bVar7 = local_88.AssetPath.PackageName != (FName)0x0;
        if (bVar7) {
          pFVar5 = ::FName::ToString(&local_res10,(FString *)&local_a8);
        }
        else {
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5 = &local_b8;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
        }
        local_e8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_e8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        if ((bVar7) && (local_a8 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a8);
        }
        if ((!bVar7) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        LoadPackageAsync(&local_e8,
                         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                          *)local_d8,0,PKG_None,-1);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      else {
        AssetSubsystemPrivate::AddClassInfo
                  ((FMetaSoundAssetKey *)local_d8,&this->TagDataMapCriticalSection,
                   &this->ClassInfoMap,&local_68);
      }
    }
    else {
      if (6 < (byte)LogMetaSound._0_1_) {
        FSoftObjectPath::ToString(&local_88,&local_e8);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      AddOrUpdateFromObjectInternal(this,(FMetaSoundAssetKey *)local_d8,pUVar2);
    }
    if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// AddOrUpdateFromObject @ 14b364f10

FMetaSoundAssetKey * __thiscall
Metasound::Engine::FMetaSoundAssetManager::AddOrUpdateFromObject
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *__return_storage_ptr__,UObject *param_1)

{
  FName FVar1;
  FMetasoundFrontendVersionNumber FVar2;
  UPackage *pUVar3;
  FMetaSoundAssetKey *pFVar4;
  
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if ((pUVar3 != (UPackage *)0x0) && (((uint)pUVar3->PackageFlagsPrivate & 0x20) == 0)) {
    AddOrUpdateFromObjectInternal(this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  pFVar4 = FMetaSoundAssetKey::GetInvalid();
  FVar1 = (pFVar4->ClassName).Name;
  (__return_storage_ptr__->ClassName).Namespace = (pFVar4->ClassName).Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar1;
  FVar2 = pFVar4->Version;
  (__return_storage_ptr__->ClassName).Variant = (pFVar4->ClassName).Variant;
  __return_storage_ptr__->Version = FVar2;
  return __return_storage_ptr__;
}

// AddOrUpdateFromObjectInternal @ 14b364f90

FMetaSoundAssetKey * __thiscall
Metasound::Engine::FMetaSoundAssetManager::AddOrUpdateFromObjectInternal
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *__return_storage_ptr__,UObject *param_1)

{
  bool bVar1;
  code *pcVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  bool bVar5;
  UPackage *pUVar6;
  IMetasoundUObjectRegistry *pIVar7;
  longlong lVar8;
  FMetaSoundAssetKey *pFVar9;
  UClass *pUVar10;
  IMetaSoundDocumentInterface *pIVar11;
  FMetaSoundAssetClassInfo *pFVar12;
  bool bVar13;
  FMetaSoundAssetClassInfo local_58;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundAssetManager::AddOrUpdateFromObjectInternal");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId252,"FMetaSoundAssetManager::AddOrUpdateFromObjectInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
               ,0xfc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId252);
  }
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if ((pUVar6 == (UPackage *)0x0) || (((uint)pUVar6->PackageFlagsPrivate & 0x20) != 0)) {
    pFVar9 = FMetaSoundAssetKey::GetInvalid();
    FVar3 = (pFVar9->ClassName).Name;
    (__return_storage_ptr__->ClassName).Namespace = (pFVar9->ClassName).Namespace;
    (__return_storage_ptr__->ClassName).Name = FVar3;
    FVar4 = pFVar9->Version;
    (__return_storage_ptr__->ClassName).Variant = (pFVar9->ClassName).Variant;
    __return_storage_ptr__->Version = FVar4;
  }
  else {
    pIVar7 = IMetasoundUObjectRegistry::Get();
    lVar8 = (**(code **)((longlong)*pIVar7 + 0x48))(pIVar7,param_1);
    if ((lVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetaSoundAsset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                           ,0x105,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FMetaSoundAssetKey *)(*pcVar2)();
      return pFVar9;
    }
    if (param_1 == (UObject *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptInterface.GetObject() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                         ,0x108,L"");
      pIVar11 = (IMetaSoundDocumentInterface *)0x0;
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FMetaSoundAssetKey *)(*pcVar2)();
        return pFVar9;
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      pUVar10 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
      pIVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar10);
    }
    if (param_1 == (UObject *)0x0) {
      pIVar11 = (IMetaSoundDocumentInterface *)0x0;
    }
    pFVar12 = Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(&local_58,pIVar11);
    AssetSubsystemPrivate::AddClassInfo
              (__return_storage_ptr__,&this->TagDataMapCriticalSection,&this->ClassInfoMap,pFVar12);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 14b365280

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::AddReferencedObjects
          (FMetaSoundAssetManager *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->LoadingDependencies).AllocatorInstance.Data;
  lVar2 = this->_padding_;
  lVar3 = (longlong)iVar1 * 0x30 + lVar2;
  while( true ) {
    if (*(int *)&(this->LoadingDependencies).AllocatorInstance.Data != iVar1) {
      `TCheckedPointerIterator<FMetaSoundAsyncAssetDependencies,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar2 + 8,0,0);
    lVar2 = lVar2 + 0x30;
  }
  return;
}

// ContainsKey @ 14b36a300

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::ContainsKey
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  
  lpCriticalSection = &this->TagDataMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = ::GetTypeHash(param_1);
    iVar2 = TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMetaSoundAssetKey>
                      ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ClassInfoMap,uVar1,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2 != -1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ContainsKey @ 14b36a380

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::ContainsKey
          (FMetaSoundAssetManager *this,FNodeClassRegistryKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetaSoundAssetKey *pFVar4;
  FMetaSoundAssetKey local_28;
  
  bVar2 = FMetaSoundAssetKey::IsValidType(param_1->Type);
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x40);
    pFVar4 = FMetaSoundAssetKey::FMetaSoundAssetKey(&local_28,param_1);
    uVar3 = (*pcVar1)(this,pFVar4);
    return (bool)uVar3;
  }
  return false;
}

// DepthFirstVisit_AssetKey @ 14b397d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::Engine::FMetaSoundAssetManager::DepthFirstVisit_AssetKey
          (FMetaSoundAssetKey *param_1,
          TFunctionRef<TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>___cdecl(FMetaSoundAssetKey_const_&)>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FName *_Dst;
  ForElementType<FSetElementId> FVar6;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  undefined1 local_128 [16];
  FMetaSoundAssetKey local_118;
  FMetaSoundAssetKey local_f8;
  FName FStack_d8;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_128._0_8_ = (param_1->ClassName).Namespace;
  local_128._8_8_ = (param_1->ClassName).Name;
  local_118.ClassName.Namespace = (param_1->ClassName).Variant;
  local_118.ClassName.Name.ComparisonIndex.Value = (param_1->Version).Major;
  local_118.ClassName.Name.Number = (param_1->Version).Minor;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,4,1,0,&local_138,1,&local_12c);
  *(undefined8 *)local_138.Data = local_128._0_8_;
  *(undefined4 *)(local_138.Data + 8) = local_128._8_4_;
  *(undefined4 *)(local_138.Data + 0xc) = local_128._12_4_;
  *(FName *)(local_138.Data + 0x10) = local_118.ClassName.Namespace;
  *(FName *)(local_138.Data + 0x18) = local_118.ClassName.Name;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_f8.ClassName.Name = (FName)local_128._0_8_;
  local_f8.ClassName.Variant = (FName)local_128._8_8_;
  local_f8.Version = (FMetasoundFrontendVersionNumber)local_118.ClassName.Namespace;
  FStack_d8 = local_118.ClassName.Name;
joined_r0x00014b397df0:
  do {
    if (local_130 == 0) {
      local_80 = 0;
      if (local_88 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88);
      }
      iVar3 = SUB84(local_c8._8_8_,4);
      local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
      }
      local_94 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      if (0x80 < local_9c) {
        local_9c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
      }
      if ((FName *)local_138.Data != (FName *)0x0) {
        FMemory::Free(local_138.Data);
      }
      return;
    }
    if ((local_130 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Dst = (FName *)(local_138.Data + (longlong)(local_130 + -1) * 0x20);
    local_118.ClassName.Namespace = *_Dst;
    local_118.ClassName.Name = _Dst[1];
    local_118.ClassName.Variant = _Dst[2];
    local_118.Version = *(FMetasoundFrontendVersionNumber *)(_Dst + 3);
    iVar3 = (local_130 - (local_130 + -1)) + -1;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar3 << 5);
    }
    local_130 = local_130 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&local_138,local_130,&local_12c);
    uVar4 = ::GetTypeHash(&local_118);
    if (local_c8._8_4_ != local_94) {
      FVar6 = (ForElementType<FSetElementId>)local_90;
      if (local_88 != (ForElementType<FSetElementId>)0x0) {
        FVar6 = local_88;
      }
      iVar3 = *(int *)((longlong)FVar6 + (ulonglong)(local_80 - 1U & uVar4) * 4);
      if (iVar3 != -1) {
        do {
          lVar5 = (longlong)iVar3;
          if ((((*(FName *)(local_c8._0_8_ + lVar5 * 0x28) == local_118.ClassName.Namespace) &&
               (*(FName *)(local_c8._0_8_ + lVar5 * 0x28 + 8) == local_118.ClassName.Name)) &&
              (*(FName *)(local_c8._0_8_ + lVar5 * 0x28 + 0x10) == local_118.ClassName.Variant)) &&
             ((*(uint *)(local_c8._0_8_ + lVar5 * 0x28 + 0x18) == local_118.Version.Major &&
              (*(uint *)(local_c8._0_8_ + lVar5 * 0x28 + 0x1c) == local_118.Version.Minor)))) {
            if (iVar3 != -1) goto joined_r0x00014b397df0;
            break;
          }
          iVar3 = *(int *)(local_c8._0_8_ + lVar5 * 0x28 + 0x20);
        } while (iVar3 != -1);
      }
    }
    (**(code **)param_2)(&local_78,*(undefined8 *)&param_2->field_0x8,&local_118);
    TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>::Array
              (&local_78,(TArray<FMetaSoundAssetKey,TSizedDefaultAllocator<32>_> *)local_128);
    local_78.HashSize = 0;
    if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FMetaSoundAssetKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMetaSoundAssetKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_78.Elements);
    lVar5 = (longlong)(int)local_128._8_4_;
    if (local_128._8_4_ != 0) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,4,local_128._8_4_,&local_138,&local_130,&local_12c);
      memmove(local_138.Data + (longlong)iVar3 * 0x20,(void *)local_128._0_8_,lVar5 << 5);
      local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
    }
    TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>::
    Emplace<FMetaSoundAssetKey_const_&>
              ((TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>
                *)local_c8,&local_f8,(bool *)&local_118);
    if ((FName)local_128._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
  } while( true );
}

// FindAsset @ 14b3a5f30

FMetasoundAssetBase * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAsset
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *param_1)

{
  UObject *pUVar1;
  FMetasoundAssetBase *pFVar2;
  TStringOverload<FUtf8String> local_58;
  FName local_48;
  FName FStack_40;
  FTopLevelAssetPath local_38;
  FSoftObjectPath local_28;
  
  (**(code **)(this->_padding_ + 0x58))(this,&local_48,param_1);
  if (local_48 != (FName)0x0) {
    local_38.PackageName = local_48;
    local_38.AssetName = FStack_40;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_58.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.String.Data.ArrayNum = 0;
    local_58.String.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,&local_38,&local_58);
    pUVar1 = FSoftObjectPath::ResolveObject(&local_28);
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pUVar1 != (UObject *)0x0) {
      pFVar2 = (FMetasoundAssetBase *)(**(code **)(this->_padding_ + 0x70))(this,pUVar1);
      return pFVar2;
    }
  }
  return (FMetasoundAssetBase *)0x0;
}

// FindAssetAsDocumentInterface @ 14b3a5ff0

TScriptInterface<IMetaSoundDocumentInterface> * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAssetAsDocumentInterface
          (FMetaSoundAssetManager *this,
          TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,
          FMetaSoundAssetKey *param_1)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  TStringOverload<FUtf8String> local_58;
  FName local_48;
  FName FStack_40;
  FTopLevelAssetPath local_38;
  FSoftObjectPath local_28;
  
  (**(code **)(this->_padding_ + 0x58))(this,&local_48);
  if (local_48 != (FName)0x0) {
    local_38.PackageName = local_48;
    local_38.AssetName = FStack_40;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_58.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.String.Data.ArrayNum = 0;
    local_58.String.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,&local_38,&local_58);
    this_00 = FSoftObjectPath::ResolveObject(&local_28);
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    if (this_00 != (UObject *)0x0) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
      *(UObject **)__return_storage_ptr__ = this_00;
      pUVar1 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
      pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
      *(void **)&__return_storage_ptr__->field_0x8 = pvVar2;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// FindAssetClassInfo @ 14b3a60d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundAssetClassInfo * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAssetClassInfo
          (FMetaSoundAssetManager *this,FMetaSoundAssetClassInfo *__return_storage_ptr__,
          FTopLevelAssetPath *param_1)

{
  byte *pbVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar2;
  byte bVar3;
  FNameEntryId FVar4;
  FName FVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UObject *this_00;
  UClass *pUVar10;
  IMetaSoundDocumentInterface *pIVar11;
  FName *pFVar12;
  FAssetRegistryModule *pFVar13;
  undefined1 *puVar14;
  undefined1 auStackY_128 [32];
  FTopLevelAssetPath local_e8;
  FMetaSoundAssetKey local_d8;
  FSoftObjectPath local_b8;
  FAssetData local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e8.PackageName = param_1->PackageName;
  local_e8.AssetName = param_1->AssetName;
  local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.PackageName.Number = 0;
  local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.AssetName.Number = 0;
  local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubPathString.Data.ArrayNum = 0;
  local_b8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_b8,&local_e8);
  this_00 = FSoftObjectPath::ResolveObject(&local_b8);
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
    }
    pUVar10 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
    pIVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar10);
    Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(__return_storage_ptr__,pIVar11);
    goto LAB_14b3a6424;
  }
  local_98.PackageName.ComparisonIndex.Value = 0;
  local_98.PackageName.Number = 0;
  local_98.PackagePath.ComparisonIndex.Value = 0;
  local_98.PackagePath.Number = 0;
  local_98.AssetName.ComparisonIndex.Value = 0;
  local_98.AssetName.Number = 0;
  local_98.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_98.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_98.AssetClass.ComparisonIndex.Value = 0;
  local_98.AssetClass.Number = 0;
  local_98.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_98.AssetClassPath.PackageName.Number = 0;
  local_98.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_98.AssetClassPath.AssetName.Number = 0;
  local_98.ChunkArrayRegistryHandle.Index = -1;
  local_98.PackageFlags = 0;
  local_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_98.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_98.ChunkIDs.ArrayNum = 0;
  local_98.ChunkIDs.ArrayMax = 2;
  pFVar12 = ::FName::FName(&local_e8.PackageName,"AssetRegistry");
  pFVar13 = FModuleManager::GetModuleChecked<FAssetRegistryModule>(*pFVar12);
  iVar8 = (**(code **)(*(longlong *)&pFVar13->field_0x8 + 8))
                    (&pFVar13->field_0x8,&local_b8,&local_98);
  if (iVar8 == 1) {
    local_d8.ClassName.Namespace.ComparisonIndex.Value = 0;
    local_d8.ClassName.Namespace.Number = 0;
    local_d8.ClassName.Name.ComparisonIndex.Value = 0;
    local_d8.ClassName.Name.Number = 0;
    local_d8.ClassName.Variant.ComparisonIndex.Value = 0;
    local_d8.ClassName.Variant.Number = 0;
    local_d8.Version.Major = 1;
    local_d8.Version.Minor = 0;
    bVar7 = Frontend::FMetaSoundAssetClassInfo::TryGetAssetKey(&local_98,&local_d8);
    if (bVar7) {
      lpCriticalSection = &this->TagDataMapCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar9 = ::GetTypeHash(&local_d8);
      if (*(int *)&(this->ClassInfoMap).field_0x8 != *(int *)&(this->ClassInfoMap).field_0x34) {
        puVar14 = *(undefined1 **)&(this->ClassInfoMap).field_0x40;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->ClassInfoMap).field_0x38;
        }
        uVar9 = *(uint *)(puVar14 +
                         (ulonglong)(*(int *)&(this->ClassInfoMap).field_0x48 - 1U & uVar9) * 4);
        if (uVar9 != 0xffffffff) {
          do {
            pFVar12 = (FName *)((longlong)(int)uVar9 * 0x38 + *(longlong *)&this->ClassInfoMap);
            if ((((*pFVar12 == local_d8.ClassName.Namespace) &&
                 (pFVar12[1] == local_d8.ClassName.Name)) &&
                (pFVar12[2] == local_d8.ClassName.Variant)) &&
               ((pFVar12[3].ComparisonIndex.Value == local_d8.Version.Major &&
                (pFVar12[3].Number == local_d8.Version.Minor)))) {
              if ((uVar9 != 0xffffffff) &&
                 (local_e8.PackageName.ComparisonIndex.Value = 0, local_e8.PackageName.Number = 0,
                 pFVar12 != (FName *)0x0)) {
                FVar4.Value = pFVar12[5].ComparisonIndex.Value;
                FVar5 = pFVar12[4];
                local_e8.AssetName.ComparisonIndex.Value = FVar4.Value;
                if (FVar4.Value == 0) {
                  local_e8.AssetName.ComparisonIndex.Value = 0;
                  local_e8.AssetName.Number = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40,8,FVar4.Value,0,(ForAnyElementType *)&local_e8,FVar4.Value,
                             (int *)&local_e8.AssetName.Number);
                  ConstructItems<Metasound::Frontend::FMetaSoundAssetClassInfo,Metasound::Frontend::FMetaSoundAssetClassInfo,int>
                            ((void *)local_e8.PackageName,(FMetaSoundAssetClassInfo *)FVar5,
                             FVar4.Value);
                }
                goto LAB_14b3a62be;
              }
              break;
            }
            uVar9 = pFVar12[6].ComparisonIndex.Value;
          } while (uVar9 != 0xffffffff);
        }
      }
      local_e8.PackageName.ComparisonIndex.Value = 0;
      local_e8.PackageName.Number = 0;
      local_e8.AssetName.ComparisonIndex.Value = 0;
      local_e8.AssetName.Number = 0;
LAB_14b3a62be:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (local_e8.AssetName.ComparisonIndex.Value == 1) {
        bVar2 = *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 2);
        __return_storage_ptr__->_padding_ =
             (longlong)&___7FMetaSoundClassInfo_Frontend_Metasound__6B_;
        lVar6 = *(longlong *)((longlong)local_e8.PackageName + 0x10);
        __return_storage_ptr__->_padding_ = *(longlong *)((longlong)local_e8.PackageName + 8);
        __return_storage_ptr__->_padding_ = lVar6;
        __return_storage_ptr__->_padding_ = *(longlong *)((longlong)local_e8.PackageName + 0x18);
        __return_storage_ptr__->_padding_ = *(longlong *)((longlong)local_e8.PackageName + 0x20);
        *(undefined2 *)&__return_storage_ptr__->_padding_ =
             *(undefined2 *)((longlong)local_e8.PackageName + 0x28);
        bVar3 = *(byte *)((longlong)local_e8.PackageName + 0x2a);
        __return_storage_ptr__->_padding_ =
             (longlong)&___7FMetaSoundAssetClassInfo_Frontend_Metasound__6B_;
        pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 2);
        *pbVar1 = *pbVar1 ^ (bVar2 ^ bVar3) & 1;
        FVar5 = *(FName *)((longlong)local_e8.PackageName + 0x38);
        (__return_storage_ptr__->AssetPath).PackageName =
             *(FName *)((longlong)local_e8.PackageName + 0x30);
        (__return_storage_ptr__->AssetPath).AssetName = FVar5;
        if (local_e8.PackageName != (FName)0x0) {
          FMemory::Free((void *)local_e8.PackageName);
        }
        goto LAB_14b3a6404;
      }
      if (local_e8.PackageName != (FName)0x0) {
        FMemory::Free((void *)local_e8.PackageName);
      }
    }
    Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(__return_storage_ptr__,&local_98);
  }
  else {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    Frontend::FMetaSoundClassInfo::FMetaSoundClassInfo
              ((FMetaSoundClassInfo *)__return_storage_ptr__);
    __return_storage_ptr__->_padding_ =
         (longlong)&___7FMetaSoundAssetClassInfo_Frontend_Metasound__6B_;
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  }
LAB_14b3a6404:
  if (local_98.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_98.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_98.TagsAndValues);
LAB_14b3a6424:
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindAssetClassInfoInternal @ 14b3a6460

TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAssetClassInfoInternal
          (FMetaSoundAssetManager *this,
          TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundAssetKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMetaSoundAssetClassInfo *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  lpCriticalSection = &this->TagDataMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = ::GetTypeHash(param_1);
  iVar3 = TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetaSoundAssetKey>
                    ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ClassInfoMap,uVar2,param_1);
  if (iVar3 == -1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14b3a6515:
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x38 + *(longlong *)&this->ClassInfoMap;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    if (lVar4 == 0) goto LAB_14b3a6515;
    iVar3 = *(int *)(lVar4 + 0x28);
    pFVar1 = *(FMetaSoundAssetClassInfo **)(lVar4 + 0x20);
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<Metasound::Frontend::FMetaSoundAssetClassInfo,Metasound::Frontend::FMetaSoundAssetClassInfo,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar1,iVar3);
      goto LAB_14b3a651a;
    }
  }
  __return_storage_ptr__->ArrayMax = 0;
LAB_14b3a651a:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// FindAssetPath @ 14b3a6550

FTopLevelAssetPath * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAssetPath
          (FMetaSoundAssetManager *this,FTopLevelAssetPath *__return_storage_ptr__,
          FMetaSoundAssetKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTopLevelAssetPath *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lpCriticalSection = &this->TagDataMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = ::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetaSoundAssetKey>
                    ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ClassInfoMap,uVar6,param_1);
  if (iVar7 != -1) {
    lVar9 = (longlong)iVar7 * 0x38 + *(longlong *)&this->ClassInfoMap;
    plVar10 = (longlong *)(lVar9 + 0x20);
    if (lVar9 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      iVar7 = (int)plVar10[1];
      if (iVar7 != 0) {
        uVar6 = 0;
        if ((int)(iVar7 - 1U) < iVar7) {
          uVar6 = ~(iVar7 - 1U) >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FTopLevelAssetPath *)(*pcVar2)();
            return pFVar8;
          }
        }
        puVar1 = (uint *)((longlong)(int)plVar10[1] * 0x40 + -0x10 + *plVar10);
        uVar6 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        (__return_storage_ptr__->PackageName).ComparisonIndex.Value = *puVar1;
        (__return_storage_ptr__->PackageName).Number = uVar6;
        (__return_storage_ptr__->AssetName).ComparisonIndex.Value = uVar3;
        (__return_storage_ptr__->AssetName).Number = uVar4;
        goto LAB_14b3a6634;
      }
    }
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
LAB_14b3a6634:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// FindAssetPaths @ 14b3a6670

TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindAssetPaths
          (FMetaSoundAssetManager *this,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetaSoundAssetKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lpCriticalSection = &this->TagDataMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = ::GetTypeHash(param_1);
  iVar6 = TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetaSoundAssetKey>
                    ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ClassInfoMap,uVar5,param_1);
  plVar7 = (longlong *)0x0;
  if (iVar6 != -1) {
    lVar10 = (longlong)iVar6 * 0x38 + *(longlong *)&this->ClassInfoMap;
    plVar11 = (longlong *)(lVar10 + 0x20);
    if (lVar10 == 0) {
      plVar11 = plVar7;
    }
    if (plVar11 != (longlong *)0x0) {
      lVar10 = *plVar11;
      lVar2 = plVar11[1];
      puVar12 = (undefined8 *)(lVar10 + 0x30);
      lVar9 = (longlong)(int)lVar2 * 0x40 + lVar10;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      while( true ) {
        iVar6 = (int)plVar7;
        if ((int)plVar11[1] != (int)lVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Metasound::Frontend::FMetaSoundAssetClassInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
          iVar6 = (int)local_40;
        }
        iVar3 = local_40._4_4_;
        if (lVar10 == lVar9) break;
        local_38 = *puVar12;
        uStack_30 = puVar12[1];
        if ((local_48.Data <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < local_48.Data + (longlong)local_40._4_4_ * 0x10))
        {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pTVar8 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar8;
          }
          iVar6 = (int)local_40;
        }
        if (iVar6 == local_40._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&local_48,(int *)((longlong)&local_40 + 4));
        }
        lVar10 = lVar10 + 0x40;
        local_40 = CONCAT44(local_40._4_4_,iVar6 + 1U);
        puVar12 = puVar12 + 8;
        *(undefined8 *)(local_48.Data + (longlong)iVar6 * 0x10) = local_38;
        *(undefined8 *)(local_48.Data + (longlong)iVar6 * 0x10 + 8) = uStack_30;
        plVar7 = (longlong *)(ulonglong)(iVar6 + 1U);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
      __return_storage_ptr__->ArrayNum = iVar6;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      __return_storage_ptr__->ArrayMax = iVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// FindLoadingDependencies @ 14b3a7e30

FMetaSoundAsyncAssetDependencies * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindLoadingDependencies
          (FMetaSoundAssetManager *this,int param_1)

{
  FMetaSoundAsyncAssetDependencies *pFVar1;
  FMetaSoundAsyncAssetDependencies *pFVar2;
  
  pFVar1 = (FMetaSoundAsyncAssetDependencies *)(this->LoadingDependencies).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->LoadingDependencies).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FMetaSoundAsyncAssetDependencies *)0x0;
    }
    if (pFVar1->LoadID == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindLoadingDependencies @ 14b3a7e60

FMetaSoundAsyncAssetDependencies * __thiscall
Metasound::Engine::FMetaSoundAssetManager::FindLoadingDependencies
          (FMetaSoundAssetManager *this,UObject *param_1)

{
  UObject *pUVar1;
  FMetaSoundAsyncAssetDependencies *pFVar2;
  FMetaSoundAsyncAssetDependencies *pFVar3;
  bool bVar4;
  
  pFVar2 = (FMetaSoundAsyncAssetDependencies *)(this->LoadingDependencies).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->LoadingDependencies).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FMetaSoundAsyncAssetDependencies *)0x0;
    }
    pUVar1 = (pFVar2->MetaSound).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar4 = param_1 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar1 == param_1;
    }
    if (bVar4) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetAsAsset @ 14b3ad0f0

FMetasoundAssetBase * __thiscall
Metasound::Engine::FMetaSoundAssetManager::GetAsAsset(FMetaSoundAssetManager *this,UObject *param_1)

{
  IMetasoundUObjectRegistry *pIVar1;
  FMetasoundAssetBase *pFVar2;
  
  pIVar1 = IMetasoundUObjectRegistry::Get();
                    /* WARNING: Could not recover jumptable at 0x00014b3ad110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FMetasoundAssetBase *)
           (**(code **)((longlong)*pIVar1 + 0x50))
                     (pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x50));
  return pFVar2;
}

// GetAsAsset @ 14b3ad120

FMetasoundAssetBase * __thiscall
Metasound::Engine::FMetaSoundAssetManager::GetAsAsset(FMetaSoundAssetManager *this,UObject *param_1)

{
  IMetasoundUObjectRegistry *pIVar1;
  FMetasoundAssetBase *pFVar2;
  
  pIVar1 = IMetasoundUObjectRegistry::Get();
                    /* WARNING: Could not recover jumptable at 0x00014b3ad140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FMetasoundAssetBase *)
           (**(code **)((longlong)*pIVar1 + 0x48))
                     (pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x48));
  return pFVar2;
}

// GetAssetKey @ 14b3ad150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetaSoundAssetKey * __thiscall
Metasound::Engine::FMetaSoundAssetManager::GetAssetKey
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *__return_storage_ptr__,
          FSoftObjectPath *param_1)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  FAssetRegistryModule *pFVar4;
  undefined1 auStack_d8 [32];
  FMetaSoundAssetKey local_b8;
  FName local_98;
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  pFVar3 = ::FName::FName(&local_98,"AssetRegistry");
  pFVar4 = FModuleManager::GetModuleChecked<FAssetRegistryModule>(*pFVar3);
  iVar2 = (**(code **)(*(longlong *)&pFVar4->field_0x8 + 8))(&pFVar4->field_0x8,param_1,&local_90);
  if (iVar2 == 1) {
    local_b8.ClassName.Namespace.ComparisonIndex.Value = 0;
    local_b8.ClassName.Namespace.Number = 0;
    local_b8.ClassName.Name.ComparisonIndex.Value = 0;
    local_b8.ClassName.Name.Number = 0;
    local_b8.ClassName.Variant.ComparisonIndex.Value = 0;
    local_b8.ClassName.Variant.Number = 0;
    local_b8.Version.Major = 1;
    local_b8.Version.Minor = 0;
    bVar1 = Frontend::FMetaSoundAssetClassInfo::TryGetAssetKey(&local_90,&local_b8);
    if (bVar1) {
      (__return_storage_ptr__->ClassName).Namespace = local_b8.ClassName.Namespace;
      (__return_storage_ptr__->ClassName).Name = local_b8.ClassName.Name;
      (__return_storage_ptr__->ClassName).Variant = local_b8.ClassName.Variant;
      __return_storage_ptr__->Version = local_b8.Version;
      goto LAB_14b3ad22e;
    }
  }
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Namespace.Number = 0;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Name.Number = 0;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Variant.Number = 0;
  (__return_storage_ptr__->Version).Major = 1;
  (__return_storage_ptr__->Version).Minor = 0;
LAB_14b3ad22e:
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return __return_storage_ptr__;
}

// GetReferencerName @ 14b3bfde0

FString * __thiscall
Metasound::Engine::FMetaSoundAssetManager::GetReferencerName
          (FMetaSoundAssetManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMetaSoundAssetManager");
  return __return_storage_ptr__;
}

// GetRegistrationOptions @ 14b3bfe40

FMetaSoundAssetRegistrationOptions * __thiscall
Metasound::Engine::FMetaSoundAssetManager::GetRegistrationOptions
          (FMetaSoundAssetManager *this,FMetaSoundAssetRegistrationOptions *__return_storage_ptr__)

{
  UObject *pUVar1;
  int iVar2;
  undefined4 uVar3;
  UClass *this_00;
  TArrayView<FGuid_const_,int> *pTVar4;
  TArrayView<FGuid_const_,int> local_18;
  
  __return_storage_ptr__->bForceReregister = true;
  __return_storage_ptr__->bRegisterDependencies = true;
  __return_storage_ptr__->bAutoUpdate = true;
  __return_storage_ptr__->bAutoUpdateLogWarningOnDroppedConnection = false;
  (__return_storage_ptr__->PageOrder).DataPtr = (FGuid *)0x0;
  (__return_storage_ptr__->PageOrder).ArrayNum = 0;
  this_00 = UMetaSoundSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    __return_storage_ptr__->bAutoUpdateLogWarningOnDroppedConnection = (bool)pUVar1[1].field_0x10;
    pTVar4 = UMetaSoundSettings::GetPageOrder(&local_18);
    iVar2 = pTVar4->ArrayNum;
    uVar3 = *(undefined4 *)&pTVar4->field_0xc;
    (__return_storage_ptr__->PageOrder).DataPtr = pTVar4->DataPtr;
    (__return_storage_ptr__->PageOrder).ArrayNum = iVar2;
    *(undefined4 *)&(__return_storage_ptr__->PageOrder).field_0xc = uVar3;
  }
  return __return_storage_ptr__;
}

// IsAssetClass @ 14b3c7ed0

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::IsAssetClass
          (FMetaSoundAssetManager *this,FMetasoundFrontendClassMetadata *param_1)

{
  code *pcVar1;
  EMetasoundFrontendClassType EVar2;
  undefined1 uVar3;
  FMetaSoundAssetKey *pFVar4;
  FMetaSoundAssetKey local_28;
  
  EVar2 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (Graph < EVar2) {
    return false;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  pFVar4 = FMetaSoundAssetKey::FMetaSoundAssetKey(&local_28,param_1);
  uVar3 = (*pcVar1)(this,pFVar4);
  return (bool)uVar3;
}

// IsInitialAssetScanComplete @ 14b3c82f0

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::IsInitialAssetScanComplete(FMetaSoundAssetManager *this)

{
  return (bool)AssetSubsystemPrivate::InitialAssetScanComplete;
}

// OnPackageLoaded @ 14b3caa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Metasound::Engine::FMetaSoundAssetManager::OnPackageLoaded(FPackageLoadedArgs *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  IMetaSoundAssetManager *pIVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FString local_68;
  FString local_58;
  FMetaSoundAssetKey local_48;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FMetasoundFrontendVersionNumber FStack_10;
  
  pIVar4 = Frontend::IMetaSoundAssetManager::Get();
  if (pIVar4 != (IMetaSoundAssetManager *)0x0) {
    if (param_1->Result == Succeeded) {
      if ((param_1->Package == (UPackage *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PackageLoadedArgs.Package",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                             ,0x268,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar5 = UPackage::FindAssetInPackage(param_1->Package,RF_NoFlags);
      if (pUVar5 != (UObject *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,&local_48,pUVar5);
        bVar3 = FMetaSoundAssetKey::IsValid(&local_48);
        if ((bVar3) && (*(void **)&param_1->OnUpdatedAssetLoaded != (void *)0x0)) {
          local_28 = local_48.ClassName.Namespace;
          FStack_20 = local_48.ClassName.Name;
          local_18 = local_48.ClassName.Variant;
          FStack_10 = local_48.Version;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnUpdatedAssetLoaded);
          plVar1 = *(longlong **)&(param_1->OnUpdatedAssetLoaded).field_0x28;
          pcVar2 = *(code **)&param_1->OnUpdatedAssetLoaded;
          plVar7 = (longlong *)&(param_1->OnUpdatedAssetLoaded).field_0x10;
          if (plVar1 != (longlong *)0x0) {
            plVar7 = plVar1;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar6,&local_28,pUVar5);
        }
      }
    }
    else if (param_1->Result == Canceled) {
      if (6 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&param_1->PackageName,&local_58);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_1->PackageName,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// OnReferencedAssetsLoaded @ 14b3cacb0

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::OnReferencedAssetsLoaded
          (FMetaSoundAssetManager *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  IMetasoundUObjectRegistry *pIVar5;
  longlong *plVar6;
  FStreamableHandle *this_00;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FScriptContainerElement *local_res18;
  int *local_res20;
  longlong local_78;
  FScriptContainerElement **local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  
  local_res18 = (this->LoadingDependencies).AllocatorInstance.Data;
  pFVar8 = local_res18 + (longlong)(this->LoadingDependencies).ArrayNum * 0x30;
  for (; local_res10[0] = param_1, local_res18 != pFVar8; local_res18 = local_res18 + 0x30) {
    if (*(int *)local_res18 == param_1) {
      if (local_res18 != (FScriptContainerElement *)0x0) goto LAB_14b3cad17;
      goto LAB_14b3cacf7;
    }
  }
  local_res18 = (FScriptContainerElement *)0x0;
LAB_14b3cacf7:
  local_res20 = local_res10;
  bVar3 = `Metasound::Engine::FMetaSoundAssetManager::OnReferencedAssetsLoaded'::__l3::<lambda_1>::
          operator()(&local_res20);
  if (!bVar3) {
    return;
  }
LAB_14b3cad17:
  if ((*(longlong *)(local_res18 + 0x20) != 0) && (*(longlong *)(local_res18 + 8) != 0)) {
    pIVar5 = IMetasoundUObjectRegistry::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,*(undefined8 *)(local_res18 + 8));
    if (plVar6 == (longlong *)0x0) {
      local_70 = &local_res18;
      bVar3 = `Metasound::Engine::FMetaSoundAssetManager::OnReferencedAssetsLoaded'::__l12::
              <lambda_2>::operator()(&local_70);
      if (!bVar3) goto LAB_14b3caf45;
    }
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    this_00 = TSharedPtr<FStreamableHandle,1>::operator->
                        ((TSharedPtr<FStreamableHandle,1> *)(local_res18 + 0x20));
    FStreamableHandle::GetLoadedAssets(this_00,&local_58);
    iVar2 = local_58.ArrayNum;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    pFVar8 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar7.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar7.Data == pFVar8) break;
      if (*(longlong *)FVar7.Data != 0) {
        local_78 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5);
        if (local_78 == 0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6979144095893553725>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                             ,0x23d,"AssetDependencyBase");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_60._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar4 + 1);
          *(longlong *)(local_68.Data + (longlong)iVar4 * 8) = local_78;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_68);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
LAB_14b3caf45:
  RemoveLoadingDependencies(this,local_res10[0]);
  return;
}

// RebuildDenyListCache @ 14b3cf490

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RebuildDenyListCache
          (FMetaSoundAssetManager *this,UAssetManager *param_1)

{
  return;
}

// RegisterAssetClassesInDirectories @ 14b3cf4a0

/* WARNING: Removing unreachable block (ram,0x00014b3cf5d0) */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories
          (FMetaSoundAssetManager *this,
          TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *this_00;
  TArrayView<FGuid_const_,int> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  code *local_88;
  FMetaSoundAssetManager **local_80;
  TArrayView<FGuid_const_,int> local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  FGuid *pFStack_60;
  ulonglong uStack_58;
  FMetaSoundAssetManager *local_50;
  undefined8 local_48;
  FGuid *pFStack_40;
  ulonglong local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetaSoundAssetDirectory_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    ::FString::FString(&local_98,(FString *)pFVar8);
    if (((local_a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10)) &&
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
    iVar5 = local_a8.ArrayNum;
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
    local_a8.ArrayNum = iVar5 + 1;
    pFVar7 = local_a8.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = local_98.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 0x10;
  }
  local_68 = 0x10101;
  pFStack_60 = (FGuid *)0x0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  this_00 = UMetaSoundSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    local_68 = CONCAT13(pUVar2[1].field_0x10,(undefined3)local_68);
    pTVar6 = UMetaSoundSettings::GetPageOrder(&local_78);
    pFStack_60 = pTVar6->DataPtr;
    uStack_58 = *(ulonglong *)&pTVar6->ArrayNum;
  }
  local_48 = CONCAT44(uStack_64,local_68);
  local_80 = &local_50;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
             ::Call;
  pFStack_40 = pFStack_60;
  local_38 = uStack_58;
  local_50 = this;
  SearchAndIterateDirectoryAssets
            (this,&local_a8,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_88);
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// ReloadMetaSoundAssets @ 14b3d3760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::ReloadMetaSoundAssets(FMetaSoundAssetManager *this)

{
  undefined1 *puVar1;
  FName *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  FMetasoundAssetBase *this_00;
  ulonglong uVar10;
  UClass *this_01;
  TArrayView<FGuid_const_,int> *pTVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  undefined1 auStackY_2c8 [32];
  undefined1 local_294;
  undefined1 local_293 [3];
  uint local_290;
  undefined8 local_288;
  int local_280;
  uint uStack_27c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  uint local_270;
  uint uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  uint local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  int iStack_218;
  undefined4 uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined4 local_208;
  FGuid *local_200;
  ulonglong uStack_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  FSoftObjectPath local_1c0;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  int local_18c;
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_188;
  IMetasoundUObjectRegistry *local_180;
  FMetasoundAssetBase *local_178;
  LPCRITICAL_SECTION local_170;
  TStringOverload<FUtf8String> local_168;
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FSparseArrayAllocationInfo local_f8;
  FTopLevelAssetPath local_e8;
  TArrayView<FGuid_const_,int> local_d8 [2];
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_170 = (LPCRITICAL_SECTION)&this->TagDataMapCriticalSection;
  if (local_170 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_170);
  local_180 = IMetasoundUObjectRegistry::Get();
  local_5c = 0x80;
  puVar1 = &(this->ClassInfoMap).field_0x10;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_240 = &this->ClassInfoMap;
  local_68 = (ForElementType<unsigned_int>)0x0;
  TStack_238._padding_._0_4_ = 0;
  local_60 = 0;
  local_54 = 0;
  TStack_238.BaseBitIndex = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_58 = -1;
  uVar14 = *(uint *)&(this->ClassInfoMap).field_0x28;
  local_288 = 1;
  TStack_238._padding_._4_4_ = 1;
  TStack_238.CurrentBitIndex = TStack_238.BaseBitIndex;
  if (uVar14 != 0) {
    puVar24 = *(uint **)&(this->ClassInfoMap).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    TStack_238._padding_._4_4_ = *puVar24;
    TStack_238.BaseBitIndex = 0;
    TStack_238._padding_._0_4_ = 0;
    while (TStack_238._padding_._4_4_ == 0) {
      lVar15 = (longlong)(int)(uint)TStack_238._padding_;
      TStack_238.BaseBitIndex = TStack_238.BaseBitIndex + 0x20;
      TStack_238._padding_._0_4_ = (uint)TStack_238._padding_ + 1;
      TStack_238._padding_._4_4_ = 1;
      TStack_238.CurrentBitIndex = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <
          (int)(uint)TStack_238._padding_) goto LAB_14b3d389f;
      TStack_238._padding_._4_4_ = puVar24[lVar15 + 1];
    }
    TStack_238._padding_._4_4_ = -TStack_238._padding_._4_4_ & TStack_238._padding_._4_4_;
    uVar18 = (ulonglong)TStack_238._padding_._4_4_ * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1a0 = (int)lVar15;
    TStack_238.CurrentBitIndex = (TStack_238.BaseBitIndex - 1U) + local_1a0;
    if ((int)uVar14 < TStack_238.CurrentBitIndex) {
      TStack_238.CurrentBitIndex = uVar14;
    }
  }
LAB_14b3d389f:
  iStack_218 = *(int *)&(this->ClassInfoMap).field_0x8 - *(int *)&(this->ClassInfoMap).field_0x34;
  uVar13 = *(uint *)&(this->ClassInfoMap).field_0x28;
  iVar23 = (int)uVar13 >> 5;
  bVar12 = (byte)uVar13 & 0x1f;
  uStack_27c = 1 << bVar12;
  uVar25 = -1 << bVar12;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_238.UnvisitedBitMask = 0xffffffff;
  TStack_238._28_4_ = local_ac;
  uStack_130 = CONCAT44(uStack_214,iStack_218);
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150.BaseBitIndex = TStack_238.BaseBitIndex;
  TStack_150._28_4_ = local_ac;
  local_280 = iVar23;
  pTStack_278 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_270 = uVar25;
  uStack_26c = uVar13;
  uStack_268 = uVar19;
  TStack_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_188 = local_240;
  local_158 = local_240;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_150._padding_._0_4_ = (uint)TStack_238._padding_;
  TStack_150._padding_._4_4_ = TStack_238._padding_._4_4_;
  TStack_150.CurrentBitIndex = TStack_238.CurrentBitIndex;
  if ((((int)uVar13 < 0) || ((int)uVar14 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = local_288;
  uVar14 = *(uint *)&(this->ClassInfoMap).field_0x28;
  if (uVar13 != uVar14) {
    puVar20 = *(undefined1 **)&(this->ClassInfoMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar25 = uVar25 & *(uint *)(puVar20 + (longlong)iVar23 * 4);
    while (uVar25 == 0) {
      uStack_268 = uVar19 + 0x20;
      local_280 = iVar23 + 1;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < local_280)
      goto LAB_14b3d39fd;
      uVar25 = *(uint *)(puVar20 + (longlong)iVar23 * 4 + 4);
      local_270 = 0xffffffff;
      iVar23 = local_280;
      uVar19 = uStack_268;
    }
    uStack_27c = -uVar25 & uVar25;
    uVar18 = (ulonglong)uStack_27c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_19c = (int)lVar15;
    uStack_26c = local_19c + -1 + uVar19;
    if ((int)uVar14 < (int)uStack_26c) {
LAB_14b3d39fd:
      uStack_26c = uVar14;
    }
  }
  uStack_1e8 = CONCAT44(uStack_27c,local_280);
  uStack_1d8 = CONCAT44(uStack_26c,local_270);
  uStack_1d0 = CONCAT44(uStack_264,uStack_268);
  pTStack_1e0 = pTStack_278;
  local_210 = pTStack_278;
  local_290 = uStack_26c;
  uVar14 = uStack_26c;
  while( true ) {
    pTVar6 = local_158;
    if (*(int *)&local_158->field_0x8 - *(int *)&local_158->field_0x34 != (int)uStack_130) {
      local_294 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_294);
    }
    if (((TStack_150.CurrentBitIndex == uVar14) && (TStack_150.Array == local_210)) &&
       (pTVar6 == local_188)) break;
    lVar15 = *(longlong *)pTVar6 + (longlong)TStack_150.CurrentBitIndex * 0x38;
    iVar23 = *(int *)(lVar15 + 0x28);
    if (iVar23 != 0) {
      puVar22 = (ulonglong *)0x0;
      uVar13 = 0;
      if ((int)(iVar23 - 1U) < iVar23) {
        uVar13 = ~(iVar23 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1c0.AssetPath.PackageName.Number = 0;
      local_1c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1c0.AssetPath.AssetName.Number = 0;
      local_1c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar2 = (FName *)((longlong)*(int *)(lVar15 + 0x28) * 0x40 + -0x10 +
                        *(longlong *)(lVar15 + 0x20));
      local_e8.PackageName = *pFVar2;
      local_e8.AssetName = pFVar2[1];
      local_1c0.SubPathString.Data.ArrayNum = 0;
      local_1c0.SubPathString.Data.ArrayMax = 0;
      local_168.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.String.Data.ArrayNum = 0;
      local_168.String.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_1c0,&local_e8,&local_168);
      pUVar9 = FSoftObjectPath::ResolveObject(&local_1c0);
      if (local_1c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.SubPathString.Data.AllocatorInstance.Data);
      }
      if (((pUVar9 != (UObject *)0x0) &&
          (this_00 = (FMetasoundAssetBase *)
                     (**(code **)((longlong)*local_180 + 0x50))(local_180,pUVar9),
          local_178 = this_00, this_00 != (FMetasoundAssetBase *)0x0)) &&
         (bVar7 = FMetasoundAssetBase::IsRegistered(this_00), bVar7)) {
        uVar14 = (uint)uVar5;
        if (local_54 == 0) {
          iVar23 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar14,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                              (int *)(local_88 + 0xc));
          iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),uVar14);
          FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68;
          }
          bVar12 = (byte)iVar8 & 0x1f;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0x1f;
            bVar12 = bVar12 - 0x20;
          }
          puVar24 = (uint *)((longlong)FVar17 + (longlong)(iVar8 >> 5) * 4);
          *puVar24 = *puVar24 & ~(uVar14 << (bVar12 & 0x1f));
          iVar8 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar8 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
          iVar23 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar8 * 0x10) = 0xffffffff;
          }
        }
        local_58 = iVar8;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_f8,iVar23);
        if (local_f8.Pointer != (ulonglong *)0x0) {
          *(FMetasoundAssetBase **)local_f8.Pointer = this_00;
          *(undefined4 *)((longlong)local_f8.Pointer + 8) = 0xffffffff;
          puVar22 = local_f8.Pointer;
        }
        uVar18 = *puVar22;
        uVar13 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
          FVar16.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_48.Data;
          }
          for (iVar23 = *(int *)(FVar16.Data + (ulonglong)(local_40 - 1 & uVar13) * 4); iVar23 != -1
              ; iVar23 = *(int *)(local_88._0_8_ + (longlong)iVar23 * 0x10 + 8)) {
            if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar23 * 0x10) == uVar18) {
              if (iVar23 != -1) {
                *(ulonglong *)(local_88._0_8_ + (longlong)iVar23 * 0x10) = uVar18;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88,local_f8.Index,uVar14);
                goto LAB_14b3d4026;
              }
              break;
            }
          }
        }
        uVar19 = local_88._8_4_ - local_54;
        uVar25 = uVar14;
        if (3 < uVar19) {
          uVar18 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_198 = (undefined4)lVar15;
          uVar25 = uVar14 << ((byte)lVar15 & 0x1f);
        }
        if (((int)uVar19 < 1) || ((int)uVar25 <= (int)local_40)) {
          uVar13 = local_40 - 1 & uVar13;
          *(uint *)((longlong)puVar22 + 0xc) = uVar13;
          FVar16.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_48.Data;
          }
          uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar13;
          *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar16.Data + uVar18 * 4);
          *(int *)(FVar16.Data + uVar18 * 4) = local_f8.Index;
        }
        else {
          local_40 = uVar25;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar25 != 0) {
            uVar13 = uVar25;
            if (uVar25 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar13 = 0;
                goto LAB_14b3d3e0b;
              }
            }
            else {
LAB_14b3d3e0b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar13,4);
            }
            if (0 < (int)uVar25) {
              uVar18 = 0;
              uVar21 = (ulonglong)uVar25;
              do {
                FVar16.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar16.Data = local_48.Data;
                }
                uVar10 = (longlong)(int)uVar25 - 1U & uVar18;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(FVar16.Data + uVar10 * 4) = 0xffffffff;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
            local_260 = 0;
            uStack_24c = 0;
            iStack_248 = 0;
            uStack_25c = uVar14;
            if (local_60 != 0) {
              FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_68;
              }
              uVar14 = *(uint *)FVar17;
              iStack_248 = 0;
              local_260 = 0;
              while (uVar14 == 0) {
                iStack_248 = iStack_248 + 0x20;
                lVar15 = (longlong)(int)local_260;
                local_260 = local_260 + 1;
                if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_260) goto LAB_14b3d3f1e;
                uVar14 = ((uint *)((longlong)FVar17 + 4))[lVar15];
              }
              uStack_25c = -uVar14 & uVar14;
              uVar18 = (ulonglong)uStack_25c * 2 + 1;
              lVar15 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_194 = (int)lVar15;
              uStack_24c = local_194 + -1 + iStack_248;
              if ((int)local_60 < (int)uStack_24c) {
LAB_14b3d3f1e:
                uStack_24c = local_60;
              }
            }
            local_250 = 0xffffffff;
            local_240 = (TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
                         *)local_88;
            TStack_238._padding_._0_4_ = local_260;
            TStack_238._padding_._4_4_ = uStack_25c;
            TStack_238.UnvisitedBitMask = 0xffffffff;
            TStack_238.CurrentBitIndex = uStack_24c;
            TStack_238._28_4_ = uStack_244;
            TStack_238.BaseBitIndex = iStack_248;
            TStack_238.Array = pTStack_258;
            if ((int)uStack_24c < (int)local_60) {
              do {
                puVar22 = (ulonglong *)
                          ((longlong)TStack_238.CurrentBitIndex * 0x10 + *(longlong *)local_240);
                uVar14 = ((uint)(*puVar22 >> 0x14) & 0xffff ^ (uint)(*puVar22 >> 4)) * -0x7a143595;
                uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_40 - 1;
                *(uint *)((longlong)puVar22 + 0xc) = uVar14;
                FVar16.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar16.Data = local_48.Data;
                }
                uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
                *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar16.Data + uVar18 * 4);
                *(int *)(FVar16.Data + uVar18 * 4) = TStack_238.CurrentBitIndex;
                TStack_238.UnvisitedBitMask =
                     TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
              } while (TStack_238.CurrentBitIndex < (TStack_238.Array)->NumBits);
            }
          }
        }
LAB_14b3d4026:
        FMetasoundAssetBase::UnregisterGraphWithFrontend(local_178);
        uVar14 = local_290;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  iVar23 = 0;
  local_208 = 0x10101;
  local_200 = (FGuid *)0x0;
  uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
  this_01 = UMetaSoundSettings::StaticClass();
  lpCriticalSection = local_170;
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar9 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar9 != (UObject *)0x0) {
    local_208 = CONCAT13(pUVar9[1].field_0x10,(undefined3)local_208);
    pTVar11 = UMetaSoundSettings::GetPageOrder(local_d8);
    local_200 = pTVar11->DataPtr;
    uStack_1f8 = *(ulonglong *)&pTVar11->ArrayNum;
  }
  uVar14 = local_60;
  uStack_1d8._4_4_ = 0;
  uStack_1d0._0_4_ = iVar23;
  if (local_60 == 0) {
LAB_14b3d4132:
    uVar13 = (uint)local_288;
  }
  else {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_68;
    }
    uVar13 = *(uint *)FVar17;
    while (uVar13 == 0) {
      lVar15 = (longlong)iVar23;
      uStack_1d0._0_4_ = (int)uStack_1d0 + 0x20;
      iVar23 = iVar23 + 1;
      uStack_1d8._4_4_ = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14b3d4132;
      uVar13 = ((uint *)((longlong)FVar17 + 4))[lVar15];
    }
    uVar13 = -uVar13 & uVar13;
    uVar18 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_190 = (int)lVar15;
    uStack_1d8._4_4_ = (int)uStack_1d0 + -1 + local_190;
    if ((int)local_60 < (int)uStack_1d8._4_4_) {
      uStack_1d8._4_4_ = local_60;
    }
  }
  local_1f0 = (longlong *)local_88;
  pTStack_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_1c8 = local_88._8_4_ - local_54;
  uVar25 = local_60 & 0xffffffe0;
  uStack_1d8._0_4_ = 0xffffffff;
  uStack_1e8 = CONCAT44(uVar13,iVar23);
  uStack_1d0._4_4_ = local_8c;
  TStack_120._padding_ = uStack_1e8;
  iVar23 = (int)local_60 >> 5;
  uStack_100 = CONCAT44(uStack_1c4,local_1c8);
  bVar12 = (byte)local_60;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_1d8._4_4_;
  TStack_120.BaseBitIndex = (int)uStack_1d0;
  TStack_120._28_4_ = local_8c;
  local_128 = local_1f0;
  TStack_120.Array = pTStack_1e0;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_60) {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_68;
    }
    uVar14 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar23 * 4);
    while (uVar14 == 0) {
      lVar15 = (longlong)iVar23;
      uVar25 = uVar25 + 0x20;
      iVar23 = iVar23 + 1;
      uVar14 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14b3d4254;
      uVar14 = ((uint *)((longlong)FVar17 + 4))[lVar15];
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_18c = (int)lVar15;
    uVar14 = (uVar25 - 1) + local_18c;
    if ((int)local_60 < (int)uVar14) {
      uVar14 = local_60;
    }
  }
LAB_14b3d4254:
  while( true ) {
    plVar3 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      local_293[0] = 0;
      `TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_293);
    }
    if (((TStack_120.CurrentBitIndex == uVar14) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    plVar3 = *(longlong **)(*plVar3 + (longlong)TStack_120.CurrentBitIndex * 0x10);
    if ((plVar3 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetToReregister",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_208);
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// RemoveAsset @ 14b3d4550

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RemoveAsset
          (FMetaSoundAssetManager *this,FAssetData *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetaSoundAssetKey local_68;
  undefined1 local_48 [32];
  FMetasoundFrontendVersionNumber local_28;
  byte local_1e;
  FTopLevelAssetPath local_18;
  
  Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
            ((FMetaSoundAssetClassInfo *)local_48,param_1);
  if ((local_1e & 1) != 0) {
    pIVar1 = Frontend::IDocumentBuilderRegistry::Get();
    if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_48 + 8,&local_18,1);
    }
    FMetaSoundAssetKey::FMetaSoundAssetKey
              (&local_68,(FMetasoundFrontendClassName *)(local_48 + 8),&local_28);
    AssetSubsystemPrivate::RemoveClassInfo
              (&this->TagDataMapCriticalSection,&this->ClassInfoMap,&local_68,&local_18);
  }
  return;
}

// RemoveAsset @ 14b3d45e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RemoveAsset
          (FMetaSoundAssetManager *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FMetasoundFrontendVersionNumber *pFVar9;
  FName *pFVar10;
  undefined1 *puVar11;
  TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  <lambda_1> local_res18;
  FTopLevelAssetPath local_58;
  FString local_48;
  FMetaSoundAssetKey local_38;
  
  pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if ((pUVar5 == (UPackage *)0x0) || (((uint)pUVar5->PackageFlagsPrivate & 0x20) == 0)) {
    pTVar12 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *)
              0x0;
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                         ,0x3aa,L"");
      pTVar7 = pTVar12;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      pUVar6 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
      pTVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    }
    if (param_1 == (UObject *)0x0) {
      pTVar7 = pTVar12;
    }
    lVar8 = (**(code **)((pTVar7->AllocatorInstance).Data + 0x18))(pTVar7);
    local_58.PackageName.ComparisonIndex.Value = 0;
    local_58.PackageName.Number = 0;
    local_58.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_58,param_1);
    pFVar9 = FMetasoundFrontendClassMetadata::GetVersion
                       ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x88));
    FMetaSoundAssetKey::FMetaSoundAssetKey
              (&local_38,(FMetasoundFrontendClassName *)(lVar8 + 0x88),pFVar9);
    lpCriticalSection = &this->TagDataMapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = ::GetTypeHash(&local_38);
    if (*(int *)&(this->ClassInfoMap).field_0x8 != *(int *)&(this->ClassInfoMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->ClassInfoMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->ClassInfoMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->ClassInfoMap).field_0x48 - 1U & uVar3) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          pFVar10 = (FName *)((longlong)(int)uVar3 * 0x38 +
                             *(longlong *)&(this->ClassInfoMap).field_0x0);
          if ((((*pFVar10 == local_38.ClassName.Namespace) &&
               (pFVar10[1] == local_38.ClassName.Name)) &&
              (pFVar10[2] == local_38.ClassName.Variant)) &&
             ((pFVar10[3].ComparisonIndex.Value == local_38.Version.Major &&
              (pFVar10[3].Number == local_38.Version.Minor)))) {
            if (uVar3 != 0xffffffff) {
              pTVar7 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                        *)(pFVar10 + 4);
              if (pFVar10 == (FName *)0x0) {
                pTVar7 = pTVar12;
              }
              if (pTVar7 != (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                             *)0x0) {
                local_res18.InAssetPath = &local_58;
                iVar4 = TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                        ::
                        RemoveAllSwap<_Metasound::Engine::AssetSubsystemPrivate::RemoveClassInfo_::__l5::<lambda_1>_>
                                  (pTVar7,&local_res18,No);
                if (0 < iVar4) {
                  if (((1 < iVar4) && (local_58.PackageName == (FName)0x0)) &&
                     (3 < (byte)LogMetaSound._0_1_)) {
                    FMetaSoundAssetKey::ToString(&local_38,&local_48);
                    UE::Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_48.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((pTVar7->ArrayNum == 0) &&
                     (*(int *)&(this->ClassInfoMap).field_0x8 !=
                      *(int *)&(this->ClassInfoMap).field_0x34)) {
                    uVar3 = ::GetTypeHash(&local_38);
                    TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FMetaSoundAssetKey>
                              ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)&this->ClassInfoMap,uVar3,&local_38);
                  }
                }
              }
            }
            break;
          }
          uVar3 = pFVar10[6].ComparisonIndex.Value;
        } while (uVar3 != 0xffffffff);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveLoadingDependencies @ 14b3d4f10

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RemoveLoadingDependencies
          (FMetaSoundAssetManager *this,int param_1)

{
  TArray<FMetaSoundAsyncAssetDependencies,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (this->LoadingDependencies).ArrayNum;
  this_00 = &this->LoadingDependencies;
  bVar2 = false;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((this_00->AllocatorInstance).Data + lVar6) == param_1) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar5 < (this->LoadingDependencies).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TArray<FMetaSoundAsyncAssetDependencies,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar5);
      }
      else {
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      }
      iVar7 = (this->LoadingDependencies).ArrayNum;
    } while ((int)uVar5 < iVar7);
    if (bVar2) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,&this_00->AllocatorInstance,iVar7,&(this->LoadingDependencies).ArrayMax);
    }
  }
  return;
}

// RenameAsset @ 14b3d5640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RenameAsset
          (FMetaSoundAssetManager *this,FAssetData *param_1,FString *param_2)

{
  TMap<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  UObject *pUVar6;
  longlong lVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *this_01;
  FTopLevelAssetPath local_1a8;
  FMetaSoundAssetKey local_198;
  undefined1 local_178 [24];
  undefined8 uStack_160;
  void *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ForElementType<FSetElementId> local_140;
  ulonglong local_130;
  <lambda_1> local_128 [2];
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TStringView<wchar_t> local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  FMetasoundFrontendVersionNumber local_c8;
  byte local_be;
  FMetaSoundAssetKey local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  
  local_140.InlineData[0] = '\0';
  local_140.InlineData[1] = '\0';
  local_140.InlineData[2] = '\0';
  local_140.InlineData[3] = '\0';
  local_140._padding_ = 0;
  local_178._16_8_ = 0;
  uStack_160 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x70);
  local_150 = ___xmm_00000000ffffffff0000008000000000;
  uStack_148 = _UNK_150631d98;
  local_130 = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (void *)0x0;
  local_140.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                     (&local_88,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_178);
  pUVar6 = FAssetData::FastGetAsset(param_1,true,pTVar5);
  local_130 = local_130 & 0xffffffff00000000;
  if (local_140.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_140.SecondaryData);
  }
  iVar4 = SUB84(local_178._8_8_,4);
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
  }
  uVar3 = local_150._4_4_;
  uStack_148 = 0xffffffff;
  local_150 = (ulonglong)local_150._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_150 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),0);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  lVar7 = (*pcVar1)(this,pUVar6);
  if ((lVar7 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaSoundAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                         ,0x3d3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
            ((FMetaSoundAssetClassInfo *)local_e8,param_1);
  if ((local_be & 1) == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6979144095893554134>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                       ,0x3d6,"ClassInfo.bIsValid");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FMetaSoundAssetKey::FMetaSoundAssetKey
              (&local_198,(FMetasoundFrontendClassName *)(local_e8 + 8),&local_c8);
    local_118 = (param_2->Data).AllocatorInstance.Data;
    iVar4 = (param_2->Data).ArrayNum;
    local_1a8.PackageName.ComparisonIndex.Value = 0;
    local_1a8.PackageName.Number = 0;
    local_1a8.AssetName.ComparisonIndex.Value = 0;
    local_1a8.AssetName.Number = 0;
    iStack_110 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_110 = 0;
    }
    local_108._12_4_ = uStack_10c;
    local_108.Size = iStack_110;
    local_108.DataPtr = (wchar_t *)local_118;
    FTopLevelAssetPath::TrySetPath(&local_1a8,&local_108);
    this_00 = &this->ClassInfoMap;
    lpCriticalSection = &this->TagDataMapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = ::GetTypeHash(&local_198);
    if (*(int *)&(this->ClassInfoMap).field_0x8 != *(int *)&(this->ClassInfoMap).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ClassInfoMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ClassInfoMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar9 + (ulonglong)(*(int *)&(this->ClassInfoMap).field_0x48 - 1U & uVar3)
                                 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          pFVar8 = (FName *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&this_00->field_0x0);
          if ((((*pFVar8 == local_198.ClassName.Namespace) &&
               (pFVar8[1] == local_198.ClassName.Name)) &&
              (pFVar8[2] == local_198.ClassName.Variant)) &&
             ((pFVar8[3].ComparisonIndex.Value == local_198.Version.Major &&
              (pFVar8[3].Number == local_198.Version.Minor)))) {
            if (uVar3 != 0xffffffff) {
              this_01 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                         *)(pFVar8 + 4);
              if (pFVar8 == (FName *)0x0) {
                this_01 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                           *)0x0;
              }
              if (this_01 !=
                  (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                local_128[0].InAssetPath = &local_1a8;
                iVar4 = TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                        ::
                        RemoveAllSwap<_Metasound::Engine::AssetSubsystemPrivate::RemoveClassInfo_::__l5::<lambda_1>_>
                                  (this_01,local_128,No);
                if (0 < iVar4) {
                  if (((1 < iVar4) && (local_1a8.PackageName == (FName)0x0)) &&
                     (3 < (byte)LogMetaSound._0_1_)) {
                    FMetaSoundAssetKey::ToString(&local_198,&local_f8);
                    UE::Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((this_01->ArrayNum == 0) &&
                     (*(int *)&(this->ClassInfoMap).field_0x8 !=
                      *(int *)&(this->ClassInfoMap).field_0x34)) {
                    uVar3 = ::GetTypeHash(&local_198);
                    TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FMetaSoundAssetKey>
                              ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)this_00,uVar3,&local_198);
                  }
                }
              }
            }
            break;
          }
          uVar3 = pFVar8[6].ComparisonIndex.Value;
        } while (uVar3 != 0xffffffff);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AssetSubsystemPrivate::AddClassInfo
              (&local_a8,lpCriticalSection,this_00,(FMetaSoundAssetClassInfo *)local_e8);
  }
  return;
}

// RequestAsyncLoadReferencedAssets @ 14b3d5a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::RequestAsyncLoadReferencedAssets
          (FMetaSoundAssetManager *this,FMetasoundAssetBase *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this_00;
  UObject *pUVar5;
  TSharedPtr<FStreamableHandle,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  <lambda_1> local_48;
  TSharedPtr<FStreamableHandle,1> local_38;
  FSourceLocation local_28;
  
  this_00 = (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
            (**(code **)(param_1->_padding_ + 0x30))(param_1);
  if (0 < *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34) {
    pUVar5 = (UObject *)(**(code **)(param_1->_padding_ + 0x50))(param_1);
    if (pUVar5 == (UObject *)0x0) {
      if ((byte)LogMetaSound._0_1_ < 2) {
        return;
      }
      FMetasoundAssetBase::GetOwningAssetName(param_1,(FString *)&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)local_38.Object;
    }
    else {
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
                (this_00,&local_68);
      pFVar8 = (this->LoadingDependencies).AllocatorInstance.Data;
      pFVar7 = pFVar8 + (longlong)(this->LoadingDependencies).ArrayNum * 0x30;
      for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 0x30) {
        if ((*(UObject **)(pFVar8 + 8) != (UObject *)0x0) && (*(UObject **)(pFVar8 + 8) == pUVar5))
        {
          if ((*(int *)(pFVar8 + 0x18) == local_68.ArrayNum) &&
             (bVar3 = CompareItems<FSoftObjectPath,int>
                                (*(FSoftObjectPath **)(pFVar8 + 0x10),
                                 (FSoftObjectPath *)local_68.AllocatorInstance.Data,
                                 *(int *)(pFVar8 + 0x18)), bVar3)) goto LAB_14b3d5bca;
          break;
        }
      }
      iVar2 = this->AsyncLoadIDCounter;
      piVar1 = &(this->LoadingDependencies).ArrayMax;
      this->AsyncLoadIDCounter = iVar2 + 1;
      iVar4 = (this->LoadingDependencies).ArrayNum;
      local_48.__this = this;
      local_48.AsyncLoadID = iVar2;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(this->LoadingDependencies).AllocatorInstance,piVar1);
      }
      pFVar8 = (this->LoadingDependencies).AllocatorInstance.Data;
      (this->LoadingDependencies).ArrayNum = iVar4 + 1;
      pFVar8 = pFVar8 + (longlong)iVar4 * 0x30;
      DefaultConstructItems<FMetaSoundAsyncAssetDependencies,int>(pFVar8,1);
      *(int *)pFVar8 = iVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(UObject **)(pFVar8 + 8) = pUVar5;
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(pFVar8 + 0x10),&local_68);
      local_28.Impl._Line = 0x431;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
      ;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_28.Impl._Function =
           "void __cdecl Metasound::Engine::FMetaSoundAssetManager::RequestAsyncLoadReferencedAssets(class FMetasoundAssetBase &)"
      ;
      local_28.Impl._Column = 0x3c;
      pTVar6 = FStreamableManager::
               RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,_Metasound::Engine::FMetaSoundAssetManager::RequestAsyncLoadReferencedAssets_::__l8::<lambda_1>_&,void>
                         (&this->StreamableManager,&local_38,&local_68,&local_48,0,false,false,
                          &local_58,&local_28);
      if ((TSharedPtr<FStreamableHandle,1> *)(pFVar8 + 0x20) != pTVar6) {
        ((TSharedPtr<FStreamableHandle,1> *)(pFVar8 + 0x20))->Object = pTVar6->Object;
        pTVar6->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar8 + 0x28),&pTVar6->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
LAB_14b3d5bca:
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    }
    if ((FStreamableHandle *)local_68.AllocatorInstance.Data != (FStreamableHandle *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// SearchAndIterateDirectoryAssets @ 14b3dea80

/* WARNING: Removing unreachable block (ram,0x00014b3debff) */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets
          (FMetaSoundAssetManager *this,TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(FAssetData_const_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UAssetManager *pUVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  FString local_b8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FString *local_98;
  undefined8 local_90;
  FString *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TDelegateBase<FNotThreadSafeDelegateMode> local_68;
  code *local_50;
  ForAnyElementType **local_48;
  ForAnyElementType *local_40;
  UAssetManager *local_38;
  TFunctionRef<void___cdecl(FAssetData_const_&)> *local_30;
  
  if (param_1->ArrayNum != 0) {
    pUVar5 = UAssetManager::Get();
    iVar1 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_98 = (FString *)0x0;
    local_90 = 0;
    local_88 = (FString *)0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68._0_8_ = 0;
    local_68._8_8_ = 0;
    local_68._16_4_ = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDirectoryPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar8 == pFVar9) break;
      if (*(int *)(pFVar8 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)pFVar8;
      }
      ::FString::FString(&local_b8,pwVar7);
      if (((local_a8.Data <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < local_a8.Data + (longlong)local_a0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
      pFVar6 = local_a8.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = local_b8.Data.AllocatorInstance.Data;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = local_b8.Data.ArrayNum;
      *(int *)(pFVar6 + 0xc) = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      pFVar8 = pFVar8 + 0x10;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`Metasound::IMetasoundUObjectRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
    }
    local_40 = &local_a8;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets'::__l2::<lambda_1>,void,UClass_&>
               ::Call;
    local_38 = pUVar5;
    local_30 = param_2;
    (**(code **)(::Registry._padding_ + 0x30))(&::Registry,&local_50,1);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_68)
    ;
    DestructItems<FString,int>(local_88,(int)local_80);
    if (local_88 != (FString *)0x0) {
      FMemory::Free(local_88);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
}

// SetLogActiveAssetsOnShutdown @ 14b3e0020

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::SetLogActiveAssetsOnShutdown
          (FMetaSoundAssetManager *this,bool param_1)

{
  this->bLogActiveAssetsOnShutdown = param_1;
  return;
}

// TryGetAssetIDFromClassName @ 14b3e3470

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::TryGetAssetIDFromClassName
          (FMetaSoundAssetManager *this,FMetasoundFrontendClassName *param_1,FGuid *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FName::ToString(&param_1->Name,&local_18);
  bVar1 = FGuid::Parse(pFVar2,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// TryLoadAsset @ 14b3e3620

FMetasoundAssetBase * __thiscall
Metasound::Engine::FMetaSoundAssetManager::TryLoadAsset
          (FMetaSoundAssetManager *this,FSoftObjectPath *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IMetasoundUObjectRegistry *pIVar1;
  UObject *pUVar2;
  FMetasoundAssetBase *pFVar3;
  
  pIVar1 = IMetasoundUObjectRegistry::Get();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x50);
  pUVar2 = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b3e3663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundAssetBase *)(*UNRECOVERED_JUMPTABLE)(pIVar1,pUVar2);
  return pFVar3;
}

// TryLoadAssetFromKey @ 14b3e3670

FMetasoundAssetBase * __thiscall
Metasound::Engine::FMetaSoundAssetManager::TryLoadAssetFromKey
          (FMetaSoundAssetManager *this,FMetaSoundAssetKey *param_1)

{
  FMetasoundAssetBase *pFVar1;
  FName local_48;
  FName FStack_40;
  FTopLevelAssetPath local_38;
  FSoftObjectPath local_28;
  
  (**(code **)(this->_padding_ + 0x58))(this,&local_48,param_1);
  pFVar1 = (FMetasoundAssetBase *)0x0;
  if (local_48 != (FName)0x0) {
    local_38.PackageName = local_48;
    local_38.AssetName = FStack_40;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,&local_38);
    pFVar1 = (FMetasoundAssetBase *)(**(code **)(this->_padding_ + 0x98))(this,&local_28);
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// TryLoadReferencedAssets @ 14b3e36f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Engine::FMetaSoundAssetManager::TryLoadReferencedAssets
          (FMetaSoundAssetManager *this,FMetasoundAssetBase *param_1,
          TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_128;
  FNodeClassRegistryKey local_120;
  int local_f8;
  longlong *local_f0;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FMetaSoundAssetKey local_88;
  undefined4 local_4c;
  
  piVar1 = &param_2->ArrayMax;
  local_res10 = true;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  plVar11 = (longlong *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  iVar10 = (int)plVar11[5];
  iStack_e0 = 0;
  uStack_dc = 1;
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar10 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar2;
    }
    uVar15 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    iStack_e0 = 0;
    local_c8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iStack_e0) goto LAB_14b3e37e0;
      uVar15 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStack_dc = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_cc = local_c8 + -1 + local_res20;
    if (iVar10 < iStack_cc) {
      iStack_cc = iVar10;
    }
  }
LAB_14b3e37e0:
  uVar15 = *(uint *)(plVar11 + 5);
  uStack_c4 = local_4c;
  iStack_c0 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
  uVar16 = uVar15 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_f0 = plVar11;
  local_e8 = plVar11;
  local_d8 = pTVar2;
  local_b8 = plVar11;
  TStack_b0.Array = pTVar2;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  plVar7 = local_f0;
  uVar4 = *(uint *)(plVar11 + 5);
  if (uVar15 != uVar4) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14) goto LAB_14b3e38f0;
      uVar15 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f8 = (int)lVar12;
    uVar15 = local_f8 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14b3e38f0:
  while( true ) {
    plVar11 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b0.CurrentBitIndex == uVar15) && (TStack_b0.Array == pTVar2)) &&
       (plVar11 == plVar7)) break;
    local_120.Type = Invalid;
    local_120.Version.Major = 1;
    local_120.Version.Minor = 0;
    local_120.ClassName.Namespace.ComparisonIndex.Value = 0;
    local_120.ClassName.Namespace.Number = 0;
    local_120.ClassName.Name.ComparisonIndex.Value = 0;
    local_120.ClassName.Name.Number = 0;
    local_120.ClassName.Variant.ComparisonIndex.Value = 0;
    local_120.ClassName.Variant.Number = 0;
    Frontend::FNodeClassRegistryKey::Parse
              ((FString *)(*plVar11 + (longlong)TStack_b0.CurrentBitIndex * 0x18),&local_120);
    pcVar6 = *(code **)(this->_padding_ + 0xa0);
    FMetaSoundAssetKey::FMetaSoundAssetKey(&local_88,&local_120);
    local_128 = (*pcVar6)(this,&local_88);
    if (local_128 == 0) {
      if (1 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_res10 = false;
    }
    else {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,piVar1);
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar10 + 1;
      *(longlong *)(pFVar5 + (longlong)iVar10 * 8) = local_128;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return local_res10;
}

// UnregisterAssetClassesInDirectories @ 14b3e4770

/* WARNING: Removing unreachable block (ram,0x00014b3e48a0) */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories
          (FMetaSoundAssetManager *this,
          TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FMetaSoundAssetManager *local_res10;
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  code *local_38;
  FMetaSoundAssetManager **local_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetaSoundAssetDirectory_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    ::FString::FString(&local_48,(FString *)pFVar6);
    if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar4 + 1;
    pFVar5 = local_58.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar6 = pFVar6 + 0x10;
  }
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
             ::Call;
  local_res10 = this;
  SearchAndIterateDirectoryAssets
            (this,&local_58,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_38);
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// WaitUntilAsyncLoadReferencedAssetsComplete @ 14b3e66d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FMetaSoundAssetManager::WaitUntilAsyncLoadReferencedAssetsComplete
          (FMetaSoundAssetManager *this,FMetasoundAssetBase *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStreamableHandle *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Type TVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108;
  char local_107;
  undefined8 local_100;
  FMetasoundAssetBase *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  FMetasoundAssetBase *local_d8;
  FString local_d0;
  FString local_c0;
  TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator> local_a8
  ;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_d8 = param_1;
  TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::
  Emplace<FMetasoundAssetBase_*>(&local_a8,(FMetasoundAssetBase **)local_e0,(bool *)&local_d8);
  local_f8 = param_1;
  if (((local_118.Data <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 < local_118.Data + (longlong)local_110._4_4_ * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar6 + 1);
  *(FMetasoundAssetBase **)(local_118.Data + (longlong)iVar6 * 8) = local_f8;
  iVar6 = iVar6 + 1;
  while( true ) {
    if (iVar6 == 0) {
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FMetasoundAssetBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      return;
    }
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_110;
    }
    iVar8 = iVar6 + -1;
    plVar2 = *(longlong **)(local_118.Data + (longlong)iVar8 * 8);
    iVar7 = (iVar6 - iVar8) + -1;
    if (iVar7 != 0) {
      memmove(local_118.Data + (longlong)iVar8 * 8,local_118.Data + (longlong)iVar8 * 8 + 8,
              (longlong)iVar7 << 3);
      iVar6 = (int)local_110;
    }
    local_110 = CONCAT44(local_110._4_4_,iVar6 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_118,iVar6 + -1,(int *)((longlong)&local_110 + 4));
    lVar10 = (**(code **)(*plVar2 + 0x50))(plVar2);
    if (lVar10 != 0) break;
LAB_14b3e6b39:
    iVar6 = (int)local_110;
  }
  do {
    pFVar12 = (this->LoadingDependencies).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (longlong)(this->LoadingDependencies).ArrayNum * 0x30;
joined_r0x00014b3e68f6:
    if (pFVar12 == pFVar11) {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_f0);
      iVar6 = (int)local_e8;
      puVar1 = local_f0 + iVar6;
      puVar13 = local_f0;
      while( true ) {
        if ((int)local_e8 != iVar6) {
          local_108 = 0;
          `TCheckedPointerIterator<FMetasoundAssetBase_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_108);
        }
        if (puVar13 == puVar1) break;
        local_100 = *puVar13;
        TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::
        Emplace<FMetasoundAssetBase_*_const_&>
                  (&local_a8,(FMetasoundAssetBase **)(local_e0 + 4),(bool *)&local_100);
        if (local_107 == '\0') {
          if (((local_118.Data <= (FScriptContainerElement *)&local_100) &&
              ((FScriptContainerElement *)&local_100 <
               local_118.Data + (longlong)local_110._4_4_ * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_110;
          if ((int)local_110 == local_110._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)((longlong)&local_110 + 4));
          }
          local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
          *(undefined8 *)(local_118.Data + (longlong)iVar8 * 8) = local_100;
        }
        puVar13 = puVar13 + 1;
      }
      if (local_f0 != (undefined8 *)0x0) {
        FMemory::Free(local_f0);
      }
      goto LAB_14b3e6b39;
    }
    if ((*(longlong *)(pFVar12 + 8) == 0) || (*(longlong *)(pFVar12 + 8) != lVar10)) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar12 + 0x28);
    this_00 = *(FStreamableHandle **)(pFVar12 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FStreamableHandle *)0x0) {
      if (5 < (byte)LogMetaSound._0_1_) {
        FMetasoundAssetBase::GetOwningAssetName(param_1,&local_d0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      TVar9 = FStreamableHandle::WaitUntilComplete(this_00,0.0,true);
      if (TVar9 == Complete) {
        OnReferencedAssetsLoaded(this,*(int *)pFVar12);
      }
      else {
        if (1 < (byte)LogMetaSound._0_1_) {
          FMetasoundAssetBase::GetOwningAssetName(param_1,&local_c0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        RemoveLoadingDependencies(this,*(int *)pFVar12);
      }
      FStreamableHandle::CancelHandle(this_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  } while( true );
  pFVar12 = pFVar12 + 0x30;
  goto joined_r0x00014b3e68f6;
}

// operator() @ 150565050

bool __thiscall
`Metasound::Engine::FMetaSoundAssetManager::OnReferencedAssetsLoaded'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6979144095893553704>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6979144095893553704>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505652e0

bool __thiscall
`Metasound::Engine::FMetaSoundAssetManager::OnReferencedAssetsLoaded'::__l12::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6979144095893553712>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(**(longlong **)this + 8),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6979144095893553712>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150565351;
    }
  }
  bVar2 = false;
LAB_150565351:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

