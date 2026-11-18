// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FEnginePackageLocalizationCache @ 147d778b0

FEnginePackageLocalizationCache * __thiscall
FEnginePackageLocalizationCache::FEnginePackageLocalizationCache
          (FEnginePackageLocalizationCache *this)

{
  FName FVar1;
  code *pcVar2;
  IAssetRegistry *pIVar3;
  bool bVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  FEnginePackageLocalizationCache *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
  *pTVar7;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *this_01;
  FName local_res8 [4];
  
  FPackageLocalizationCache::FPackageLocalizationCache((FPackageLocalizationCache *)this);
  this->bIsScanningPath = false;
  this->_padding_ = (longlong)&___7FEnginePackageLocalizationCache__6B_;
  pFVar5 = ::FName::FName(local_res8,L"AssetRegistry");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FEnginePackageLocalizationCache *)(*pcVar2)();
      return pFVar6;
    }
  }
  pTVar7 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar3 + 0x2f8))(pIVar3);
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::
  AddRaw<FEnginePackageLocalizationCache>
            (pTVar7,(FEnginePackageLocalizationCache *)(local_res8 + 1),(pmf_c97c5567)this);
  pTVar7 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar3 + 0x308))(pIVar3);
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::
  AddRaw<FEnginePackageLocalizationCache>
            (pTVar7,(FEnginePackageLocalizationCache *)(local_res8 + 2),(pmf_c97c5567)this);
  this_01 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *)(**(code **)((longlong)*pIVar3 + 0x318))(pIVar3);
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FEnginePackageLocalizationCache>
            (this_01,(FEnginePackageLocalizationCache *)(local_res8 + 3),(pmf_2c0a35bb)this);
  return this;
}

// ~FEnginePackageLocalizationCache @ 147d7b170

void __thiscall
FEnginePackageLocalizationCache::~FEnginePackageLocalizationCache
          (FEnginePackageLocalizationCache *this)

{
  IAssetRegistry *pIVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  
  this->_padding_ = (longlong)&___7FEnginePackageLocalizationCache__6B_;
  pIVar1 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton != (IAssetRegistry *)0x0) {
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton
                         + 0x2f8))(UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar1 + 0x308))(pIVar1);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar1 + 0x318))(pIVar1);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
  }
  FPackageLocalizationCache::~FPackageLocalizationCache((FPackageLocalizationCache *)this);
  return;
}

// FindAssetGroupPackages @ 147d9c4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147d9c6ff) */

void __thiscall
FEnginePackageLocalizationCache::FindAssetGroupPackages
          (FEnginePackageLocalizationCache *this,FName param_1,FTopLevelAssetPath *param_2)

{
  FTopLevelAssetPath *pFVar1;
  void *_Src;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FAssetData *this_00;
  ForAnyElementType FVar13;
  FAssetData *pFVar14;
  FScriptContainerElement *pFVar15;
  FName local_res10 [2];
  undefined1 auStackY_288 [32];
  undefined1 local_238;
  undefined1 local_237 [7];
  FString local_230;
  ForAnyElementType local_220;
  undefined8 local_218;
  undefined1 local_210 [4];
  FName local_20c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_200;
  FAssetData *local_1f0;
  undefined8 local_1e8;
  TPairInitializer<FName_const_&,FName_const_&> local_1e0;
  FName local_1d0;
  FName *local_1c8;
  FName *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FARFilter local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1e0.Value = (FName *)UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_res10[0] = param_1;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  FPackageName::QueryRootContentPaths(&local_200,false,false,false);
  iVar5 = local_200.ArrayNum;
  pFVar15 = local_200.AllocatorInstance.Data + (longlong)local_200.ArrayNum * 0x10;
  FVar13.Data = local_200.AllocatorInstance.Data;
  while( true ) {
    if (local_200.ArrayNum != iVar5) {
      local_238 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_238)
      ;
    }
    if (FVar13.Data == pFVar15) {
      DestructItems<FString,int>((FString *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      FARFilter::FARFilter(&local_198);
      iVar5 = (int)local_218;
      uVar9 = (ulonglong)(int)local_218;
      pFVar15 = local_220.Data + uVar9 * 0x10;
      local_198.bRecursivePaths = true;
      FVar13.Data = local_220.Data;
      while( true ) {
        if ((int)uVar9 != iVar5) {
          local_237[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_237);
        }
        if (FVar13.Data == pFVar15) {
          local_198.bIncludeOnlyOnDiskAssets = true;
          if (((local_198.ClassPaths.AllocatorInstance.Data <= param_2) &&
              (param_2 < (FTopLevelAssetPath *)
                         (local_198.ClassPaths.AllocatorInstance.Data +
                         (longlong)local_198.ClassPaths.ArrayMax * 0x10))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_198.ClassPaths.ArrayNum == local_198.ClassPaths.ArrayMax) {
            local_198.ClassPaths.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_198.ClassPaths.AllocatorInstance,
                            &local_198.ClassPaths.ArrayMax);
          }
          uVar7 = (param_2->PackageName).Number;
          uVar3 = (param_2->AssetName).ComparisonIndex.Value;
          uVar4 = (param_2->AssetName).Number;
          pFVar1 = (FTopLevelAssetPath *)
                   ((longlong)local_198.ClassPaths.AllocatorInstance.Data +
                   (longlong)local_198.ClassPaths.ArrayNum * 0x10);
          (pFVar1->PackageName).ComparisonIndex.Value = (param_2->PackageName).ComparisonIndex.Value
          ;
          (pFVar1->PackageName).Number = uVar7;
          (pFVar1->AssetName).ComparisonIndex.Value = uVar3;
          (pFVar1->AssetName).Number = uVar4;
          local_198.bRecursiveClasses = false;
          local_1f0 = (FAssetData *)0x0;
          local_1e8 = 0;
          local_198.ClassPaths.ArrayNum = local_198.ClassPaths.ArrayNum + 1;
          (**(code **)((longlong)*local_1e0.Value + 0x50))(local_1e0.Value,&local_198,&local_1f0,1);
          iVar5 = (int)local_1e8;
          pFVar14 = local_1f0 + (int)local_1e8;
          this_00 = local_1f0;
          while( true ) {
            if ((int)local_1e8 != iVar5) {
              `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_210);
            }
            if (this_00 == pFVar14) break;
            pFVar10 = ::FName::ToString(&this_00->PackageName,&local_1a8);
            pFVar10 = FPackageName::GetSourcePackagePath(&local_1b8,pFVar10);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            ::FName::FName(&local_1d0,pwVar12);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            local_1c8 = &local_1d0;
            local_1c0 = local_res10;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                      ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&this->_padding_,&local_1e0,(bool *)&local_1c8);
            this_00 = this_00 + 1;
          }
          DestructItems<FAssetData,int>(local_1f0,(int)local_1e8);
          if (local_1f0 != (FAssetData *)0x0) {
            FMemory::Free(local_1f0);
          }
          FARFilter::~FARFilter(&local_198);
          DestructItems<FString,int>((FString *)local_220.Data,(int)local_218);
          if (local_220.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data);
          }
          return;
        }
        if (*(int *)(FVar13.Data + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)FVar13.Data;
        }
        ::FName::FName(&local_20c,pwVar12);
        if (((local_198.PackagePaths.AllocatorInstance.Data <= &local_20c) &&
            (&local_20c <
             (FName *)(local_198.PackagePaths.AllocatorInstance.Data +
                      (longlong)local_198.PackagePaths.ArrayMax * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) break;
        if (local_198.PackagePaths.ArrayNum == local_198.PackagePaths.ArrayMax) {
          local_198.PackagePaths.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_198.PackagePaths.AllocatorInstance,
                          &local_198.PackagePaths.ArrayMax);
        }
        FVar13.Data = FVar13.Data + 0x10;
        *(FName *)(local_198.PackagePaths.AllocatorInstance.Data +
                  (longlong)local_198.PackagePaths.ArrayNum * 8) = local_20c;
        uVar9 = local_218 & 0xffffffff;
        local_198.PackagePaths.ArrayNum = local_198.PackagePaths.ArrayNum + 1;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = *(int *)(FVar13.Data + 8);
    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Data.ArrayNum = iVar8;
    if (iVar8 == 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,6,0,(ForAnyElementType *)&local_230,0,&local_230.Data.ArrayMax);
    }
    else {
      _Src = *(void **)FVar13.Data;
      uVar7 = iVar8 + 5;
      if ((int)uVar7 < iVar8) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,0,(ForAnyElementType *)&local_230,iVar8,&local_230.Data.ArrayMax);
      memcpy(local_230.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
    }
    ::FString::PathAppend(&local_230,L"L10N",4);
    if (((local_220.Data <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 < local_220.Data + (longlong)local_218._4_4_ * 0x10))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) break;
    iVar8 = (int)local_218;
    if ((int)local_218 == local_218._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_220,(int *)((longlong)&local_218 + 4));
    }
    local_218 = CONCAT44(local_218._4_4_,iVar8 + 1);
    pFVar11 = local_220.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_230.Data.AllocatorInstance.Data;
    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = local_230.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_230.Data.ArrayMax;
    local_230.Data.ArrayNum = 0;
    local_230.Data.ArrayMax = 0;
    FVar13.Data = FVar13.Data + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// FindLocalizedPackages @ 147d9cb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEnginePackageLocalizationCache::FindLocalizedPackages
          (FEnginePackageLocalizationCache *this,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar7;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  int iVar12;
  FName *pFVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ForElementType<FSetElementId> FVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  FAssetData *pFVar20;
  undefined8 *puVar21;
  FAssetData *this_01;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 local_res10 [8];
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  FName local_154;
  FName local_148;
  FAssetData *local_140;
  undefined8 local_138;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  IAssetRegistry *local_120;
  FName *local_118;
  FName *local_110;
  undefined4 local_108;
  undefined4 local_104;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    local_120 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    local_res18 = (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)param_2;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = *(int *)&param_1->field_0x28;
    puVar1 = &param_1->field_0x10;
    iVar18 = 0;
    iVar24 = 0;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar26 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uVar23 = *puVar26;
      iVar22 = iVar24;
      iVar12 = iVar18;
      while (uVar23 == 0) {
        lVar14 = (longlong)iVar12;
        iVar22 = iVar22 + 0x20;
        iVar12 = iVar12 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147d9cc2e;
        uVar23 = puVar26[lVar14 + 1];
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_12c = (int)lVar14;
      iVar10 = iVar22 + -1 + local_12c;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_147d9cc2e:
    uVar23 = (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34) *
             *(int *)(*(longlong *)param_1 + 0x18 + (longlong)iVar10 * 0x28);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (0 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar23,&local_168,0,(int *)((longlong)&local_160 + 4));
    }
    iVar3 = *(int *)&param_1->field_0x28;
    uStack_f4 = 1;
    iStack_e4 = iVar24;
    local_e0 = iVar24;
    if (iVar3 != 0) {
      puVar26 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uVar23 = *puVar26;
      local_e0 = iVar18;
      iVar24 = iVar18;
      while (uVar23 == 0) {
        lVar14 = (longlong)iVar24;
        local_e0 = local_e0 + 0x20;
        iVar24 = iVar24 + 1;
        iStack_e4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_147d9cd0d;
        uVar23 = puVar26[lVar14 + 1];
      }
      uStack_f4 = -uVar23 & uVar23;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_128 = (int)lVar14;
      iStack_e4 = local_e0 + -1 + local_128;
      if (iVar3 < iStack_e4) {
        iStack_e4 = iVar3;
      }
    }
LAB_147d9cd0d:
    uVar23 = *(uint *)&param_1->field_0x28;
    uStack_dc = local_44;
    uVar19 = uVar23 & 0xffffffe0;
    iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    uStack_e8 = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uStack_f4,iVar24);
    TStack_c8.CurrentBitIndex = iStack_e4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar23 >> 5;
    TStack_c8._28_4_ = local_44;
    TStack_c8.BaseBitIndex = local_e0;
    uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
    local_100 = param_1;
    iStack_f8 = iVar24;
    local_f0 = puVar1;
    local_d0 = param_1;
    TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&param_1->field_0x28;
    if (uVar23 != uVar4) {
      puVar25 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar25 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar10 * 4);
      while (uVar23 == 0) {
        lVar14 = (longlong)iVar10;
        uVar19 = uVar19 + 0x20;
        iVar10 = iVar10 + 1;
        uVar23 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_147d9ce0d;
        uVar23 = *(uint *)(puVar25 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_124 = (int)lVar14;
      uVar23 = local_124 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar23) {
        uVar23 = uVar4;
      }
    }
LAB_147d9ce0d:
    while( true ) {
      pTVar8 = local_d0;
      if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_c8.CurrentBitIndex == uVar23) &&
          (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10)) &&
         (pTVar8 == param_1)) break;
      lVar14 = *(longlong *)pTVar8;
      iVar3 = *(int *)(lVar14 + 0x18 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
      lVar14 = lVar14 + (longlong)TStack_c8.CurrentBitIndex * 0x28;
      puVar17 = *(undefined8 **)(lVar14 + 0x10);
      puVar21 = puVar17 + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(lVar14 + 0x18) != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (puVar17 == puVar21) break;
        if (*(int *)(puVar17 + 1) == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)*puVar17;
        }
        ::FName::FName(&local_154,pwVar15);
        if (((local_168.Data <= &local_154) &&
            (&local_154 < (FName *)(local_168.Data + (longlong)local_160._4_4_ * 8))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar24 = (int)local_160;
        if ((int)local_160 == local_160._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_168,(int *)((longlong)&local_160 + 4));
        }
        puVar17 = puVar17 + 2;
        local_160 = CONCAT44(local_160._4_4_,iVar24 + 1);
        *(FName *)(local_168.Data + (longlong)iVar24 * 8) = local_154;
      }
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    local_140 = (FAssetData *)0x0;
    local_138 = 0;
    local_110 = (FName *)local_168.Data;
    local_108 = (int)local_160;
    local_104 = local_160._4_4_;
    local_160 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    (**(code **)((longlong)*local_120 + 0x28))(local_120,&local_110,&local_140,1,1);
    this_00 = local_res18;
    iVar3 = (int)local_138;
    pFVar20 = local_140 + (int)local_138;
    this_01 = local_140;
    while( true ) {
      if ((int)local_138 != iVar3) {
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (this_01 == pFVar20) break;
      pFVar11 = ::FName::ToString(&this_01->PackageName,&local_90);
      pFVar11 = FPackageName::GetSourcePackagePath(&local_a0,pFVar11);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_148,pwVar15);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      FVar7 = local_148;
      uVar23 = ::GetTypeHash(local_148.ComparisonIndex.Value);
      uVar23 = uVar23 + FVar7.Number;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        FVar5 = (this_00->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&this_00->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        uVar19 = *(uint *)((longlong)FVar16 + (ulonglong)(this_00->HashSize - 1U & uVar23) * 4);
        if (uVar19 != 0xffffffff) {
          do {
            pFVar13 = (FName *)((longlong)(int)uVar19 * 0x20 + *(longlong *)&this_00->Elements);
            if (*pFVar13 == local_148) {
              if (pFVar13 != (FName *)0x0) goto LAB_147d9d0ec;
              break;
            }
            uVar19 = pFVar13[3].ComparisonIndex.Value;
          } while (uVar19 != 0xffffffff);
        }
      }
      local_118 = &local_148;
      TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                (this_00,(uint)&local_130,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar23,
                 (bool *)&local_118);
      pFVar13 = (FName *)((longlong)local_130 * 0x20 + *(longlong *)&this_00->Elements);
LAB_147d9d0ec:
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1),&this_01->PackageName);
      if (5 < (byte)LogPackageLocalizationCache._0_1_) {
        ::FName::ToString(&local_148,local_70);
        ::FName::ToString(&this_01->PackageName,&local_80);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
        }
      }
      this_01 = this_01 + 1;
    }
    DestructItems<FAssetData,int>(local_140,(int)local_138);
    if (local_140 != (FAssetData *)0x0) {
      FMemory::Free(local_140);
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  return;
}

// HandleAssetAdded @ 147daa9a0

void __thiscall
FEnginePackageLocalizationCache::HandleAssetAdded
          (FEnginePackageLocalizationCache *this,FAssetData *param_1)

{
  longlong *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->bIsScanningPath == false) {
    ::FName::ToString(&param_1->PackageName,&local_28);
    lpCriticalSection = &this->_padding_;
    if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (int)this->_padding_;
    lVar5 = this->_padding_;
    lVar6 = (longlong)iVar1 * 0x20 + lVar5;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar5 == lVar6) break;
      lVar3 = this->_padding_;
      if ((*(longlong *)(lVar5 + 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = FPackageLocalizationCultureCache::AddPackage
                        (*(FPackageLocalizationCultureCache **)(lVar5 + 0x10),&local_28);
      *(byte *)&this->_padding_ = bVar4 | (byte)lVar3;
      lVar5 = lVar5 + 0x20;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleAssetRemoved @ 147daaac0

void __thiscall
FEnginePackageLocalizationCache::HandleAssetRemoved
          (FEnginePackageLocalizationCache *this,FAssetData *param_1)

{
  longlong *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  ::FName::ToString(&param_1->PackageName,&local_28);
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (int)this->_padding_;
  lVar5 = this->_padding_;
  lVar6 = (longlong)iVar1 * 0x20 + lVar5;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar6) break;
    lVar3 = this->_padding_;
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = FPackageLocalizationCultureCache::RemovePackage
                      (*(FPackageLocalizationCultureCache **)(lVar5 + 0x10),&local_28);
    *(byte *)&this->_padding_ = bVar4 | (byte)lVar3;
    lVar5 = lVar5 + 0x20;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleAssetRenamed @ 147daabc0

void __thiscall
FEnginePackageLocalizationCache::HandleAssetRenamed
          (FEnginePackageLocalizationCache *this,FAssetData *param_1,FString *param_2)

{
  longlong *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  ::FName::ToString(&param_1->PackageName,&local_38);
  FPackageName::ObjectPathToPackageName(&local_48,param_2);
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (int)this->_padding_;
  lVar6 = this->_padding_;
  lVar7 = (longlong)iVar1 * 0x20 + lVar6;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar6 == lVar7) break;
    lVar3 = this->_padding_;
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = FPackageLocalizationCultureCache::RemovePackage
                      (*(FPackageLocalizationCultureCache **)(lVar6 + 0x10),&local_48);
    bVar5 = bVar4 | (byte)lVar3;
    *(byte *)&this->_padding_ = bVar5;
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = FPackageLocalizationCultureCache::AddPackage
                      (*(FPackageLocalizationCultureCache **)(lVar6 + 0x10),&local_38);
    *(byte *)&this->_padding_ = bVar4 | bVar5;
    lVar6 = lVar6 + 0x20;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

