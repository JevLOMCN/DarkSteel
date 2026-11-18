// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// FPackageLocalizationCache @ 141e85ac0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FPackageLocalizationCache * __thiscall
FPackageLocalizationCache::FPackageLocalizationCache(FPackageLocalizationCache *this)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FPackageLocalizationCache *pFVar5;
  FString *pFVar6;
  TSharedPtr<FPackageLocalizationCultureCache,1> *pTVar7;
  longlong lVar8;
  FPackageLocalizationCache *local_res8 [4];
  FString local_58;
  TSharedPtr<FPackageLocalizationCultureCache,1> local_48;
  
  this->_padding_ = (longlong)&___7FPackageLocalizationCache__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LocalizedCachesCS,4000);
  (this->CurrentCultureCache).Object = (FPackageLocalizationCultureCache *)0x0;
  (this->CurrentCultureCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AllCultureCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllCultureCaches).ArrayNum = 0;
  (this->AllCultureCaches).ArrayMax = 0;
  (this->AssetClassesToAssetGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetClassesToAssetGroups).ArrayNum = 0;
  (this->AssetClassesToAssetGroups).ArrayMax = 0;
  *(undefined8 *)&this->PackageNameToAssetGroup = 0;
  *(undefined8 *)&(this->PackageNameToAssetGroup).field_0x8 = 0;
  *(undefined8 *)&(this->PackageNameToAssetGroup).field_0x20 = 0;
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x28 = 0;
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x34 = 0;
  *(undefined8 *)&(this->PackageNameToAssetGroup).field_0x40 = 0;
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x48 = 0;
  local_res8[0] = this;
  `FPackageLocalizationCache::FPackageLocalizationCache'::__l3::<lambda_1>::operator()
            (local_res8,L"game",&GGameIni);
  `FPackageLocalizationCache::FPackageLocalizationCache'::__l3::<lambda_1>::operator()
            (local_res8,L"engine",&GEngineIni);
  this->bPackageNameToAssetGroupDirty = true;
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPackageLocalizationCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = (pFVar4->CurrentLanguage).Object;
  pTVar1 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPackageLocalizationCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = FCulture::GetName(this_00);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  lVar8 = (longlong)local_58.Data.ArrayNum;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar7 = FindOrAddCacheForCulture_NoLock(this,&local_48,&local_58);
  if (&this->CurrentCultureCache != pTVar7) {
    (this->CurrentCultureCache).Object = pTVar7->Object;
    pTVar7->Object = (FPackageLocalizationCultureCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentCultureCache).SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pFVar4 = FInternationalization::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FPackageLocalizationCache>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar4->CultureChangedEvent,(FPackageLocalizationCache *)(local_res8 + 1),
             (pmf_09a80f9b)this);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FPackageLocalizationCache>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)&FPackageName::OnContentPathMountedEvent,
             (FPackageLocalizationCache *)(local_res8 + 2),(pmf_11bcabc9)this);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FPackageLocalizationCache>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)&FPackageName::OnContentPathDismountedEvent,
             (FPackageLocalizationCache *)(local_res8 + 3),(pmf_11bcabc9)this);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FPackageLocalizationCache @ 141e87ca0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FPackageLocalizationCache::~FPackageLocalizationCache(FPackageLocalizationCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  
  this->_padding_ = (longlong)&___7FPackageLocalizationCache__6B_;
  bVar3 = FInternationalization::IsAvailable();
  if (bVar3) {
    pFVar4 = FInternationalization::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->CultureChangedEvent,
               this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPackageName::OnContentPathMountedEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPackageName::OnContentPathDismountedEvent,this);
  *(undefined4 *)&(this->PackageNameToAssetGroup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PackageNameToAssetGroup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageNameToAssetGroup);
  pFVar2 = (this->AssetClassesToAssetGroups).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int>
            ((TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_> *)
             (this->AllCultureCaches).AllocatorInstance.Data,(this->AllCultureCaches).ArrayNum);
  pFVar2 = (this->AllCultureCaches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentCultureCache).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LocalizedCachesCS);
  this->_padding_ = (longlong)&___7IPackageLocalizationCache__6B_;
  return;
}

// operator() @ 141e8c070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPackageLocalizationCache::FPackageLocalizationCache'::__l3::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FString *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FName *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FConfigSection *pFVar10;
  bool bVar11;
  int iVar12;
  FConfigSection *pFVar13;
  FString *pFVar14;
  UClass *pUVar15;
  longlong lVar16;
  FName *pFVar17;
  ForAnyElementType FVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  uint local_res20 [2];
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  FName local_168;
  FString local_160;
  FTopLevelAssetPath local_150;
  FName local_140;
  FName FStack_138;
  FName local_130;
  FConfigSection *local_128;
  int iStack_120;
  uint uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  FConfigSection *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20[0] = 0;
  bVar9 = false;
  bVar8 = false;
  pFVar13 = FConfigCacheIni::GetSection
                      (GConfig,L"Internationalization.AssetGroupClasses",false,param_2);
  if (pFVar13 != (FConfigSection *)0x0) {
    iVar12 = (int)pFVar13->_padding_;
    iStack_120 = 0;
    uStack_11c = 1;
    plVar1 = &pFVar13->_padding_;
    local_108 = 0;
    iStack_10c = 0;
    if (iVar12 != 0) {
      plVar22 = (longlong *)pFVar13->_padding_;
      if ((longlong *)pFVar13->_padding_ == (longlong *)0x0) {
        plVar22 = plVar1;
      }
      uVar21 = (uint)*plVar22;
      iStack_120 = 0;
      local_108 = 0;
      while (uVar21 == 0) {
        lVar16 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        iStack_10c = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
        goto LAB_141e8c15d;
        uVar21 = *(uint *)((longlong)plVar22 + lVar16 * 4 + 4);
      }
      uStack_11c = -uVar21 & uVar21;
      uVar2 = (ulonglong)uStack_11c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iStack_10c = local_108 + -1 + (int)lVar16;
      local_f8 = (int)lVar16;
      if (iVar12 < iStack_10c) {
        iStack_10c = iVar12;
      }
    }
LAB_141e8c15d:
    uVar21 = (uint)pFVar13->_padding_;
    iStack_104 = iStack_10c;
    uVar20 = uVar21 & 0xffffffe0;
    iStack_100 = (int)pFVar13->_padding_ - *(int *)((longlong)&pFVar13->_padding_ + 4);
    uStack_110 = 0xffffffff;
    local_128 = pFVar13;
    local_118 = plVar1;
    local_f0 = pFVar13;
    TStack_e8._padding_ = CONCAT44(uStack_11c,iStack_120);
    iVar19 = (int)uVar21 >> 5;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    TStack_e8.CurrentBitIndex = iStack_10c;
    TStack_e8.BaseBitIndex = local_108;
    TStack_e8._28_4_ = iStack_10c;
    uStack_c8 = CONCAT44(uStack_fc,iStack_100);
    if ((((int)uVar21 < 0) || (iVar12 < (int)uVar21)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = (uint)pFVar13->_padding_;
    if (uVar21 != uVar3) {
      plVar22 = (longlong *)pFVar13->_padding_;
      if ((longlong *)pFVar13->_padding_ == (longlong *)0x0) {
        plVar22 = plVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)plVar22 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_141e8c270;
        uVar21 = *(uint *)((longlong)plVar22 + lVar16 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_f4 = (int)lVar16;
      uVar21 = (int)lVar16 + -1 + uVar20;
      if ((int)uVar3 < (int)uVar21) {
        uVar21 = uVar3;
      }
    }
LAB_141e8c270:
    while( true ) {
      pFVar10 = local_f0;
      if ((int)local_f0->_padding_ - *(int *)((longlong)&local_f0->_padding_ + 4) != (int)uStack_c8)
      {
        local_res20[0] = local_res20[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_e8.CurrentBitIndex == uVar21) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
         (pFVar10 == pFVar13)) break;
      lVar4 = pFVar10->_padding_;
      lVar16 = lVar4 + (longlong)TStack_e8.CurrentBitIndex * 0x28;
      local_168 = *(FName *)(lVar4 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
      if (*(char *)(lVar16 + 0x1d) == '\0') {
        iVar12 = *(int *)(lVar16 + 0x10);
        pFVar5 = (((FString *)(lVar16 + 8))->Data).AllocatorInstance.Data;
        bVar8 = true;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.Data.ArrayNum = iVar12;
        if (iVar12 == 0) {
          local_160.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,(ForAnyElementType *)&local_160,iVar12,&local_160.Data.ArrayMax);
          memcpy(local_160.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar12 * 2);
        }
        pFVar14 = &local_160;
      }
      else {
        bVar9 = true;
        pFVar14 = FConfigValue::ExpandValue(&local_a8,(FString *)(lVar16 + 8));
      }
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = (pFVar14->Data).ArrayNum;
      lVar16 = (longlong)local_170;
      pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
      if (local_170 == 0) {
        local_16c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_170,0,&local_178,local_170,&local_16c);
        memcpy(local_178.Data,pFVar5,lVar16 * 2);
      }
      if ((bVar8) &&
         (bVar8 = false, local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if ((bVar9) &&
         (bVar9 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_b8 = local_178.Data;
      iStack_b0 = local_170 + -1;
      if (local_170 == 0) {
        iStack_b0 = 0;
      }
      pUVar15 = Z_Construct_UClass_UStruct_NoRegister();
      local_98._12_4_ = uStack_ac;
      local_98.Size = iStack_b0;
      local_98.DataPtr = (wchar_t *)local_b8;
      UClass::TryConvertShortTypeNameToPathName
                (&local_150,pUVar15,&local_98,Fatal,L"ReadAssetGroupClassSettings");
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      lVar16 = *(longlong *)this;
      pFVar6 = *(FName **)(lVar16 + 0x50);
      for (pFVar17 = pFVar6; pFVar17 != pFVar6 + (longlong)*(int *)(lVar16 + 0x58) * 3;
          pFVar17 = pFVar17 + 3) {
        if ((*pFVar17 == local_150.PackageName) && (pFVar17[1] == local_150.AssetName)) {
          if (((byte)LogPackageLocalizationCache._0_1_ < 3) || (pFVar17[2] == local_150.AssetName))
          goto LAB_141e8c660;
          ::FName::ToString(&local_168,&local_68);
          ::FName::ToString(pFVar17 + 2,&local_78);
          FTopLevelAssetPath::ToString(&local_150,&local_88);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          FVar18.Data = local_68.Data.AllocatorInstance.Data;
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
            FVar18.Data = local_68.Data.AllocatorInstance.Data;
          }
          goto LAB_141e8c656;
        }
      }
      local_130 = local_168;
      local_140 = local_150.PackageName;
      FStack_138 = local_150.AssetName;
      if (((pFVar6 <= &local_140) && (&local_140 < pFVar6 + (longlong)*(int *)(lVar16 + 0x5c) * 3))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = *(int *)(lVar16 + 0x58);
      if (iVar12 == *(int *)(lVar16 + 0x5c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,(ForAnyElementType *)(lVar16 + 0x50),(int *)(lVar16 + 0x5c));
      }
      *(int *)(lVar16 + 0x58) = iVar12 + 1;
      lVar16 = *(longlong *)(lVar16 + 0x50);
      pFVar6 = (FName *)(lVar16 + (longlong)iVar12 * 0x18);
      *pFVar6 = local_140;
      pFVar6[1] = FStack_138;
      *(FName *)(lVar16 + 0x10 + (longlong)iVar12 * 0x18) = local_130;
      if (4 < (byte)LogPackageLocalizationCache._0_1_) {
        ::FName::ToString(&local_168,&local_48);
        FTopLevelAssetPath::ToString(&local_150,&local_58);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
        FVar18.Data = local_48.Data.AllocatorInstance.Data;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          FVar18.Data = local_48.Data.AllocatorInstance.Data;
        }
LAB_141e8c656:
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
      }
LAB_141e8c660:
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
  }
  return;
}

// ConditionalUpdateCache @ 141e92470

void __thiscall FPackageLocalizationCache::ConditionalUpdateCache(FPackageLocalizationCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FPackageLocalizationCultureCache *this_00;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->AllCultureCaches).ArrayNum;
    pFVar4 = (this->AllCultureCaches).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->AllCultureCaches).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        ConditionalUpdatePackageNameToAssetGroupCache_NoLock(this);
                    /* WARNING: Could not recover jumptable at 0x000141e92546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      if (*(longlong *)(pFVar4 + 0x10) == 0) {
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
      this_00 = *(FPackageLocalizationCultureCache **)(pFVar4 + 0x10);
      if (this_00 == (FPackageLocalizationCultureCache *)0x0) break;
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      FPackageLocalizationCultureCache::ConditionalUpdateCache_NoLock(this_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      pFVar4 = pFVar4 + 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConditionalUpdatePackageNameToAssetGroupCache_NoLock @ 141e92c90

void __thiscall
FPackageLocalizationCache::ConditionalUpdatePackageNameToAssetGroupCache_NoLock
          (FPackageLocalizationCache *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->bPackageNameToAssetGroupDirty != false) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->PackageNameToAssetGroup);
    iVar2 = (this->AssetClassesToAssetGroups).ArrayNum;
    pFVar4 = (this->AssetClassesToAssetGroups).AllocatorInstance.Data;
    pFVar3 = pFVar4 + 0x10;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->AssetClassesToAssetGroups).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<FTopLevelAssetPath,FName>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      (**(code **)(this->_padding_ + 0x30))(this,*(undefined8 *)pFVar3,pFVar4);
      pFVar4 = pFVar4 + 0x18;
      pFVar3 = pFVar3 + 0x18;
    }
    this->bPackageNameToAssetGroupDirty = false;
  }
  return;
}

// FindLocalizedPackageName @ 141e9b1d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FName __thiscall
FPackageLocalizationCache::FindLocalizedPackageName(FPackageLocalizationCache *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPackageLocalizationCultureCache *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<FName,FName> *pTVar3;
  FInternationalization *this_01;
  FString *pFVar4;
  FName FVar5;
  FName in_R8;
  FName local_res8;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  TSharedPtr<FPackageLocalizationCultureCache,1> local_40;
  TSharedRef<FCulture,1> local_30;
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ConditionalUpdatePackageNameToAssetGroupCache_NoLock(this);
  if (0 < *(int *)&(this->PackageNameToAssetGroup).field_0x8 -
          *(int *)&(this->PackageNameToAssetGroup).field_0x34) {
    pTVar3 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                     *)&this->PackageNameToAssetGroup,in_R8);
    if (pTVar3 == (TTuple<FName,FName> *)0x0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pTVar3->field_0x8;
      local_res8.Number = *(uint *)&pTVar3->field_0xc;
    }
    if (local_res8 != (FName)0x0) {
      this_01 = FInternationalization::Get();
      FInternationalization::GetCurrentAssetGroupCulture(this_01,&local_30,&local_res8);
      pFVar4 = FCulture::GetName(local_30.Object);
      FindOrAddCacheForCulture_NoLock(this,&local_40,pFVar4);
      if (local_40.Object == (FPackageLocalizationCultureCache *)0x0) {
        local_res20 = 0;
        FVar5 = (FName)&local_res20;
      }
      else {
        if (local_40.Object == (FPackageLocalizationCultureCache *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            FVar5 = (FName)(*pcVar1)();
            return FVar5;
          }
        }
        FVar5 = FPackageLocalizationCultureCache::FindLocalizedPackageName
                          (local_40.Object,(FName)local_50);
      }
      *(undefined8 *)param_1 = *(undefined8 *)FVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.SharedReferenceCount.ReferenceController);
      goto LAB_141e9b32b;
    }
  }
  this_00 = (this->CurrentCultureCache).Object;
  if (this_00 == (FPackageLocalizationCultureCache *)0x0) {
    local_58 = 0;
    FVar5 = (FName)&local_58;
  }
  else {
    FVar5 = FPackageLocalizationCultureCache::FindLocalizedPackageName(this_00,(FName)local_48);
  }
  *(undefined8 *)param_1 = *(undefined8 *)FVar5;
LAB_141e9b32b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return param_1;
}

// FindLocalizedPackageNameForCulture @ 141e9b790

FName __thiscall
FPackageLocalizationCache::FindLocalizedPackageNameForCulture
          (FPackageLocalizationCache *this,FName param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FString *in_R9;
  undefined8 local_res8;
  undefined1 local_38 [8];
  TSharedPtr<FPackageLocalizationCultureCache,1> local_30;
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindOrAddCacheForCulture_NoLock(this,&local_30,in_R9);
  if (local_30.Object == (FPackageLocalizationCultureCache *)0x0) {
    local_res8 = 0;
    FVar3 = (FName)&local_res8;
  }
  else {
    if (local_30.Object == (FPackageLocalizationCultureCache *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    FVar3 = FPackageLocalizationCultureCache::FindLocalizedPackageName
                      (local_30.Object,(FName)local_38);
  }
  *(undefined8 *)param_1 = *(undefined8 *)FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return param_1;
}

// FindOrAddCacheForCulture_NoLock @ 141e9d030

TSharedPtr<FPackageLocalizationCultureCache,1> * __thiscall
FPackageLocalizationCache::FindOrAddCacheForCulture_NoLock
          (FPackageLocalizationCache *this,
          TSharedPtr<FPackageLocalizationCultureCache,1> *__return_storage_ptr__,FString *param_1)

{
  TArray<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FPackageLocalizationCultureCache,1> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FPackageLocalizationCultureCache *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FPackageLocalizationCultureCache *local_50;
  TReferenceControllerBase<1> *local_48;
  
  if ((param_1->Data).ArrayNum < 2) {
    __return_storage_ptr__->Object = (FPackageLocalizationCultureCache *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar9 = (this->AllCultureCaches).AllocatorInstance.Data;
    pFVar12 = pFVar9 + (longlong)(this->AllCultureCaches).ArrayNum * 0x20;
    pTVar1 = &this->AllCultureCaches;
    for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 0x20) {
      iVar5 = *(int *)(pFVar9 + 8);
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar5 == iVar3) {
        if (iVar5 < 2) goto LAB_141e9d14a;
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar14 = iVar5 == 0;
      }
      else {
        bVar14 = iVar5 + iVar3 == 1;
      }
      if (bVar14) {
LAB_141e9d14a:
        __return_storage_ptr__->Object = *(FPackageLocalizationCultureCache **)(pFVar9 + 0x10);
        pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + 0x18);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
    }
    pTVar6 = ::operator_new(0x110);
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      lpCriticalSection = (FPackageLocalizationCultureCache *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPackageLocalizationCultureCache___00_SharedPointerInternals__6B_
      ;
      FPackageLocalizationCultureCache::FPackageLocalizationCultureCache
                ((FPackageLocalizationCultureCache *)(pTVar6 + 1),this,param_1);
      lpCriticalSection = (FPackageLocalizationCultureCache *)(pTVar6 + 1);
      if ((lpCriticalSection == (FPackageLocalizationCultureCache *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FPackageLocalizationCultureCache,1> *)(*pcVar4)();
        return pTVar7;
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    FPackageName::QueryRootContentPaths(&local_70,false,false,false);
    uVar8 = (ulonglong)local_70.ArrayNum;
    pFVar9 = local_70.AllocatorInstance.Data + uVar8 * 0x10;
    local_res20 = local_70.ArrayNum;
    uVar10 = uVar8;
    FVar13.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar13.Data == pFVar9) break;
      if (lpCriticalSection == (FPackageLocalizationCultureCache *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (!bVar14) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FPackageLocalizationCultureCache,1> *)(*pcVar4)();
        return pTVar7;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&lpCriticalSection->PendingSourceRootPathsToSearch,(FString *)FVar13.Data);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar8 = local_70._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x10;
      uVar10 = (ulonglong)local_res20;
    }
    ::FString::FString(&local_60,param_1);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    local_50 = lpCriticalSection;
    local_48 = pTVar11;
    if (((pFVar9 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 <
         pFVar9 + (longlong)(this->AllCultureCaches).ArrayMax * 0x20)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FPackageLocalizationCultureCache,1> *)(*pcVar4)();
      return pTVar7;
    }
    iVar5 = (this->AllCultureCaches).ArrayNum;
    piVar2 = &(this->AllCultureCaches).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->AllCultureCaches).ArrayNum = iVar5 + 1;
    pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_60.Data.AllocatorInstance.Data;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = local_60.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_60.Data.ArrayMax;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    *(FPackageLocalizationCultureCache **)(pFVar9 + 0x10) = local_50;
    *(TReferenceControllerBase<1> **)(pFVar9 + 0x18) = local_48;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    local_50 = (FPackageLocalizationCultureCache *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    __return_storage_ptr__->Object = lpCriticalSection;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// HandleContentPathDismounted @ 141ea3ed0

void __thiscall
FPackageLocalizationCache::HandleContentPathDismounted
          (FPackageLocalizationCache *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->AllCultureCaches).ArrayNum;
  pFVar5 = (this->AllCultureCaches).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AllCultureCaches).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    if (*(longlong *)(pFVar5 + 0x10) == 0) {
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
    FPackageLocalizationCultureCache::RemoveRootSourcePath
              (*(FPackageLocalizationCultureCache **)(pFVar5 + 0x10),param_1);
    pFVar5 = pFVar5 + 0x20;
  }
  this->bPackageNameToAssetGroupDirty = true;
                    /* WARNING: Could not recover jumptable at 0x000141ea3f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// HandleContentPathMounted @ 141ea3fb0

void __thiscall
FPackageLocalizationCache::HandleContentPathMounted
          (FPackageLocalizationCache *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->AllCultureCaches).ArrayNum;
    pFVar4 = (this->AllCultureCaches).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->AllCultureCaches).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        this->bPackageNameToAssetGroupDirty = true;
                    /* WARNING: Could not recover jumptable at 0x000141ea4088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      if (*(longlong *)(pFVar4 + 0x10) == 0) {
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
      lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(pFVar4 + 0x10);
      if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) break;
      EnterCriticalSection(lpCriticalSection_00);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lpCriticalSection_00 + 2),param_1);
      LeaveCriticalSection(lpCriticalSection_00);
      pFVar4 = pFVar4 + 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleCultureChanged @ 141ea40a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FPackageLocalizationCache::HandleCultureChanged(FPackageLocalizationCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FPackageLocalizationCultureCache,1> *pTVar1;
  int *piVar2;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  int iVar5;
  FPackageLocalizationCultureCache *this_01;
  bool bVar6;
  FInternationalization *pFVar7;
  FString *pFVar8;
  TSharedPtr<FPackageLocalizationCultureCache,1> *pTVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  TSharedRef<FCulture,1> *pTVar12;
  undefined1 local_res8 [8];
  FString local_78;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FPackageLocalizationCultureCache,1> local_58;
  TSharedPtr<FPackageLocalizationCultureCache,1> local_48;
  TSharedPtr<FPackageLocalizationCultureCache,1> local_38;
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->CurrentCultureCache;
  local_58.Object = (FPackageLocalizationCultureCache *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_58) {
    pTVar1->Object = (FPackageLocalizationCultureCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentCultureCache).SharedReferenceCount,&local_58.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int>
            ((TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_> *)
             (this->AllCultureCaches).AllocatorInstance.Data,(this->AllCultureCaches).ArrayNum);
  piVar2 = &(this->AllCultureCaches).ArrayMax;
  (this->AllCultureCaches).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->AllCultureCaches).AllocatorInstance,0,piVar2);
  }
  pFVar7 = FInternationalization::Get();
  if ((pFVar7->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (pFVar7->CurrentLanguage).Object;
  pTVar3 = (pFVar7->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FCulture::GetName(this_00);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  lVar11 = (longlong)local_78.Data.ArrayNum;
  _Src = (pFVar8->Data).AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar9 = FindOrAddCacheForCulture_NoLock(this,&local_38,&local_78);
  if (pTVar1 != pTVar9) {
    pTVar1->Object = pTVar9->Object;
    pTVar9->Object = (FPackageLocalizationCultureCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentCultureCache).SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar7 = FInternationalization::Get();
  FInternationalization::GetCurrentCultures(pFVar7,&local_68,true,false,true);
  iVar5 = local_68.ArrayNum;
  pTVar12 = (TSharedRef<FCulture,1> *)
            (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10);
  FVar10.Data = local_68.AllocatorInstance.Data;
  do {
    if (local_68.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FCulture,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TSharedRef<FCulture,1> *)FVar10.Data == pTVar12) {
      ConditionalUpdatePackageNameToAssetGroupCache_NoLock(this);
      DestructItems<TSharedRef<FCulture,1>,int>
                ((TSharedRef<FCulture,1> *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if ((TSharedRef<FCulture,1> *)local_68.AllocatorInstance.Data != (TSharedRef<FCulture,1> *)0x0
         ) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    pFVar8 = FCulture::GetName(((TSharedRef<FCulture,1> *)FVar10.Data)->Object);
    FindOrAddCacheForCulture_NoLock(this,&local_48,pFVar8);
    this_01 = local_48.Object;
    if (local_48.Object != (FPackageLocalizationCultureCache *)0x0) {
      if (local_48.Object == (FPackageLocalizationCultureCache *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (this_01 == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_01);
      FPackageLocalizationCultureCache::ConditionalUpdateCache_NoLock(this_01);
      LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

// InvalidateRootSourcePath @ 141ea88b0

void __thiscall
FPackageLocalizationCache::InvalidateRootSourcePath
          (FPackageLocalizationCache *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->LocalizedCachesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->AllCultureCaches).ArrayNum;
    pFVar4 = (this->AllCultureCaches).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->AllCultureCaches).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,TSharedPtr<FPackageLocalizationCultureCache,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        this->bPackageNameToAssetGroupDirty = true;
                    /* WARNING: Could not recover jumptable at 0x000141ea89c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      if (*(longlong *)(pFVar4 + 0x10) == 0) {
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
      FPackageLocalizationCultureCache::RemoveRootSourcePath
                (*(FPackageLocalizationCultureCache **)(pFVar4 + 0x10),param_1);
      if (*(longlong *)(pFVar4 + 0x10) == 0) {
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
      lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(pFVar4 + 0x10);
      if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) break;
      EnterCriticalSection(lpCriticalSection_00);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lpCriticalSection_00 + 2),param_1);
      LeaveCriticalSection(lpCriticalSection_00);
      pFVar4 = pFVar4 + 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

