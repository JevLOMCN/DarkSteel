// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 119

// GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_> @ 142b74ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSoftObjectPath * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::
GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
          (FAssetRegistryImpl *this,FSoftObjectPath *__return_storage_ptr__,
          TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FSoftObjectPath *param_2,FEventContext *param_3,FClassInheritanceContext *param_4
          )

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  FAssetDataTagMap *this_00;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FSoftObjectPath *pFVar6;
  UClass *pUVar7;
  FAssetData *pFVar8;
  FValueId *pFVar9;
  FString *pFVar10;
  FCachedAssetKey *pFVar11;
  FAssetData **ppFVar12;
  FUtf8String *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ForElementType<FSoftObjectPath> FVar16;
  int iVar17;
  size_t _Size;
  ForElementType<FSoftObjectPath> FVar18;
  int iVar19;
  int iVar20;
  FAssetData *pFVar21;
  FAssetData *pFVar22;
  undefined1 auStackY_288 [32];
  FString local_238;
  ForAnyElementType local_228;
  int local_220;
  int local_21c;
  FAssetTagValueRef_u_0 local_218;
  FString local_210;
  FString local_200;
  FSoftObjectPath local_1f0;
  FSoftObjectPath local_1d0;
  FAssetData *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FString local_198;
  FAssetRegistryImpl *local_188;
  FSoftObjectPath *local_180;
  FString *local_178;
  FTopLevelAssetPath local_168;
  FString local_158;
  TStringView<wchar_t> local_148;
  FCachedAssetKey local_138;
  FString local_128;
  FUtf8String local_118;
  FUtf8String local_108;
  FUtf8String local_f8;
  FUtf8String local_e8;
  FString local_d8;
  FCachedAssetKey local_c8;
  FSoftObjectPath local_b8;
  ForElementType<FSoftObjectPath> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar21 = (FAssetData *)0x0;
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,param_2);
  pUVar5 = FSoftObjectPath::ResolveObject(param_2);
  if (pUVar5 != (UObject *)0x0) {
    pFVar6 = FSoftObjectPath::ConstructFromObject(&local_b8,pUVar5);
    FSoftObjectPath::operator=(__return_storage_ptr__,pFVar6);
    if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar7 = UObjectRedirector::GetPrivateStaticClass();
    iVar20 = (int)pUVar7->_padding_;
    if (*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar20) {
      return __return_storage_ptr__;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar7->_padding_) {
      return __return_storage_ptr__;
    }
    if (*(UObject **)(pUVar5 + 1) == (UObject *)0x0) {
      return __return_storage_ptr__;
    }
    local_1f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1f0.AssetPath.PackageName.Number = 0;
    local_1f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1f0.AssetPath.AssetName.Number = 0;
    local_1f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.SubPathString.Data.ArrayNum = 0;
    local_1f0.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_1f0,*(UObject **)(pUVar5 + 1));
    FSoftObjectPath::operator=(__return_storage_ptr__,&local_1f0);
    if (local_1f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  local_178 = &local_210;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.ArrayNum = 0;
  local_210.Data.ArrayMax = 0;
  local_188 = this;
  local_180 = __return_storage_ptr__;
  pFVar8 = `UE::AssetRegistry::FAssetRegistryImpl::
           GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>'
           ::__l2::<lambda_1>::operator()(&local_188);
  local_1d0.SubPathString.Data.ArrayNum = (__return_storage_ptr__->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_1d0.SubPathString.Data.ArrayNum;
  pFVar1 = &__return_storage_ptr__->SubPathString;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_1d0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.AssetPath.PackageName = (__return_storage_ptr__->AssetPath).PackageName;
  local_1d0.AssetPath.AssetName = (__return_storage_ptr__->AssetPath).AssetName;
  iVar20 = 0;
  if (local_1d0.SubPathString.Data.ArrayNum == 0) {
    local_1d0.SubPathString.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_1d0.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_1d0.SubPathString,local_1d0.SubPathString.Data.ArrayNum,
               &local_1d0.SubPathString.Data.ArrayMax);
    memcpy(local_1d0.SubPathString.Data.AllocatorInstance.Data,pFVar2,_Size);
  }
  local_98.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
  local_50 = 1;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
            (0x20,8,1,0,&local_98,1,&local_4c);
  FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
  if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar16 = local_98.SecondaryData;
  }
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)FVar16,&local_1d0,1);
  if (local_1d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pFVar8 != (FAssetData *)0x0) {
    while( true ) {
      local_168.PackageName = (pFVar8->AssetClassPath).PackageName;
      local_168.AssetName = (pFVar8->AssetClassPath).AssetName;
      bVar4 = FAssetData::IsRedirectorClassName(&local_168);
      if (!bVar4) break;
      if ((*(byte *)&(pFVar8->TagsAndValues).field0_0x0 & 1) == 0) {
        this_00 = (pFVar8->TagsAndValues).field0_0x0.Loose;
        if (this_00 == (FAssetDataTagMap *)0x0) break;
        local_218.Loose =
             TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                       ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                        this_00,AssetRegistry::Impl::DestinationObjectFName);
      }
      else {
        pFVar9 = FixedTagPrivate::FMapHandle::FindValue
                           ((FMapHandle *)&pFVar8->TagsAndValues,
                            AssetRegistry::Impl::DestinationObjectFName);
        if (pFVar9 == (FValueId *)0x0) break;
        local_218.Bits =
             ((ulonglong)*(ushort *)&(pFVar8->TagsAndValues).field0_0x0 & 0xfffffffffffffffc |
             0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar9;
      }
      if (local_218.Loose == (FString *)0x0) break;
      pFVar10 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_218.Fixed,&local_158);
      pFVar22 = pFVar21;
      iVar17 = iVar20;
      if (&local_d8 != pFVar10) {
        pFVar22 = (FAssetData *)(pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar17 = (pFVar10->Data).ArrayNum;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      iStack_1a0 = iVar20;
      if (iVar17 != 0) {
        iStack_1a0 = iVar17 + -1;
      }
      local_148._12_4_ = uStack_19c;
      local_148.Size = iStack_1a0;
      local_1a8 = pFVar22;
      local_148.DataPtr = (wchar_t *)pFVar22;
      FSoftObjectPath::SetPath(__return_storage_ptr__,&local_148);
      FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar16 = local_98.SecondaryData;
      }
      FVar18 = (ForElementType<FSoftObjectPath>)((longlong)local_50 * 0x20 + (longlong)FVar16);
      for (; FVar16 != FVar18; FVar16 = (ForElementType<FSoftObjectPath>)((longlong)FVar16 + 0x20))
      {
        bVar4 = FSoftObjectPath::operator==((FSoftObjectPath *)FVar16,__return_storage_ptr__);
        if (bVar4) {
          if (pFVar22 != (FAssetData *)0x0) {
            FMemory::Free(pFVar22);
          }
          goto LAB_142b74f48;
        }
      }
      pFVar11 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                          (&local_c8,__return_storage_ptr__);
      local_138.OuterPath = pFVar11->OuterPath;
      local_138.ObjectName = pFVar11->ObjectName;
      ppFVar12 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                 ::Find(&(this->State).CachedAssets,&local_138);
      pFVar8 = pFVar21;
      if (ppFVar12 != (FAssetData **)0x0) {
        pFVar8 = *ppFVar12;
      }
      FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar16 = local_98.SecondaryData;
      }
      if ((ulonglong)FVar16 <= __return_storage_ptr__) {
        FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        if ((__return_storage_ptr__ <
             (FSoftObjectPath *)((longlong)local_4c * 0x20 + (longlong)FVar16)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FSoftObjectPath *)(*pcVar3)();
          return pFVar6;
        }
      }
      if (local_50 == local_4c) {
        local_50 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                             (0x820,&local_98,&local_4c);
      }
      FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar16 = local_98.SecondaryData;
      }
      lVar14 = (longlong)local_50;
      local_50 = local_50 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(lVar14 * 0x20 + (longlong)FVar16),__return_storage_ptr__);
      if (pFVar22 != (FAssetData *)0x0) {
        FMemory::Free(pFVar22);
      }
      if (pFVar8 == (FAssetData *)0x0) break;
    }
  }
LAB_142b74f48:
  FVar15.Data = local_210.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_210.Data.ArrayNum;
  if (1 < local_210.Data.ArrayNum) {
    iVar17 = 0;
    if (((__return_storage_ptr__->AssetPath).PackageName == (FName)0x0) ||
       ((__return_storage_ptr__->SubPathString).Data.ArrayNum < 2)) {
      local_228.Data = (FScriptContainerElement *)0x0;
      local_220 = local_210.Data.ArrayNum;
      if (local_210.Data.ArrayNum == 0) {
        local_21c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_210.Data.ArrayNum,0,&local_228,local_210.Data.ArrayNum,&local_21c);
        memcpy(local_228.Data,FVar15.Data,lVar14 * 2);
      }
      iVar19 = local_220 + -1;
      if (local_220 == 0) {
        iVar19 = iVar20;
      }
      pFVar13 = FUtf8String::ConstructFromPtrSize(&local_f8,(wchar_t *)local_228.Data,iVar19);
      pFVar8 = pFVar21;
      iVar20 = iVar17;
      if (&local_e8 != pFVar13) {
        pFVar8 = (FAssetData *)(pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar17 = (pFVar13->Data).ArrayNum;
        iVar20 = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (pFVar1 != &local_e8) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
        (__return_storage_ptr__->SubPathString).Data.ArrayNum = iVar17;
        (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar20;
        pFVar8 = pFVar21;
      }
      FVar15.Data = local_228.Data;
      if (pFVar8 != (FAssetData *)0x0) {
        FMemory::Free(pFVar8);
        FVar15.Data = local_228.Data;
      }
    }
    else {
      iVar20 = (__return_storage_ptr__->SubPathString).Data.ArrayNum;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      iVar19 = iVar20 + -1;
      if (iVar20 == 0) {
        iVar19 = iVar17;
      }
      pFVar10 = ::FString::ConstructFromPtrSize
                          (&local_128,(uchar *)(pFVar1->Data).AllocatorInstance.Data,iVar19);
      if (&local_238 != pFVar10) {
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        local_238.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_238.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_198,&local_238,L".");
      ::FString::ConcatFF(&local_200,&local_198,&local_210);
      iVar20 = local_200.Data.ArrayNum;
      FVar15.Data = local_200.Data.AllocatorInstance.Data;
      bVar4 = local_200.Data.ArrayNum == 0;
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
      iVar20 = iVar20 + -1;
      if (bVar4) {
        iVar20 = iVar17;
      }
      pFVar13 = FUtf8String::ConstructFromPtrSize(&local_118,(wchar_t *)FVar15.Data,iVar20);
      pFVar8 = pFVar21;
      iVar20 = iVar17;
      if (&local_108 != pFVar13) {
        pFVar8 = (FAssetData *)(pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar17 = (pFVar13->Data).ArrayNum;
        iVar20 = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (pFVar1 != &local_108) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
        (__return_storage_ptr__->SubPathString).Data.ArrayNum = iVar17;
        (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar20;
        pFVar8 = pFVar21;
      }
      if (pFVar8 != (FAssetData *)0x0) {
        FMemory::Free(pFVar8);
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      FVar15.Data = local_238.Data.AllocatorInstance.Data;
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
        FVar15.Data = local_238.Data.AllocatorInstance.Data;
      }
    }
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
  }
  FVar16 = (ForElementType<FSoftObjectPath>)&local_98;
  if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar16 = local_98.SecondaryData;
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar16,local_50);
  if (local_98.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_> @ 142b75240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSoftObjectPath * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::
GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
          (FAssetRegistryImpl *this,FSoftObjectPath *__return_storage_ptr__,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FSoftObjectPath *param_2,FEventContext *param_3,FClassInheritanceContext *param_4
          )

{
  FUtf8String *pFVar1;
  FAssetDataTagMap *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FSoftObjectPath *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FAssetData *pFVar9;
  FValueId *pFVar10;
  FString *pFVar11;
  FCachedAssetKey *pFVar12;
  FAssetData **ppFVar13;
  FUtf8String *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ForElementType<FSoftObjectPath> FVar17;
  FScriptContainerElement *pFVar18;
  size_t _Size;
  ForElementType<FSoftObjectPath> FVar19;
  int iVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_3f8 [32];
  FString local_3a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_398;
  TArray<FString,TSizedDefaultAllocator<32>_> local_388;
  ForAnyElementType local_378;
  int local_370;
  int local_36c;
  FAssetTagValueRef_u_0 local_368;
  FString local_360;
  FString local_350;
  TArray<FString,TSizedDefaultAllocator<32>_> local_340;
  undefined1 local_330 [16];
  FSoftObjectPath local_320;
  FSoftObjectPath local_300;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  *local_2e0;
  FAssetRegistryImpl *local_2d8;
  FSoftObjectPath *local_2d0;
  FString *local_2c8;
  FString local_2c0;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FString local_298;
  FString local_288;
  FScanPathContext local_278;
  FCachedAssetKey local_208;
  FString local_1f8;
  FUtf8String local_1e8;
  FUtf8String local_1d8;
  FUtf8String local_1c8;
  FUtf8String local_1b8;
  FTopLevelAssetPath local_1a8;
  FString local_198;
  TStringView<wchar_t> local_188;
  FCachedAssetKey local_178;
  FCachedAssetKey local_168;
  FCachedAssetKey local_158;
  FSoftObjectPath local_148;
  FString local_128;
  FScanPathContext local_118;
  ForElementType<FSoftObjectPath> local_a8;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_2e0 = param_1;
  if (((param_3 == (FEventContext *)0x0) || (param_4 == (FClassInheritanceContext *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bNeedsScanning || (EventContext && InheritanceContext)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0xed2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSoftObjectPath *)(*pcVar3)();
    return pFVar6;
  }
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,param_2);
  pUVar7 = FSoftObjectPath::ResolveObject(param_2);
  if (pUVar7 != (UObject *)0x0) {
    pFVar6 = FSoftObjectPath::ConstructFromObject(&local_148,pUVar7);
    FSoftObjectPath::operator=(__return_storage_ptr__,pFVar6);
    if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar8 = UObjectRedirector::GetPrivateStaticClass();
    iVar21 = (int)pUVar8->_padding_;
    if (*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar21) {
      return __return_storage_ptr__;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar21 * 8) !=
        &pUVar8->_padding_) {
      return __return_storage_ptr__;
    }
    if (*(UObject **)(pUVar7 + 1) == (UObject *)0x0) {
      return __return_storage_ptr__;
    }
    local_320.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_320.AssetPath.PackageName.Number = 0;
    local_320.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_320.AssetPath.AssetName.Number = 0;
    local_320.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.SubPathString.Data.ArrayNum = 0;
    local_320.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_320,*(UObject **)(pUVar7 + 1));
    FSoftObjectPath::operator=(__return_storage_ptr__,&local_320);
    if (local_320.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  local_2c8 = &local_360;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  local_2d8 = this;
  local_2d0 = __return_storage_ptr__;
  pFVar9 = `UE::AssetRegistry::FAssetRegistryImpl::
           GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>'
           ::__l2::<lambda_1>::operator()(&local_2d8);
  if (pFVar9 == (FAssetData *)0x0) {
    FSoftObjectPath::ToString(__return_storage_ptr__,&local_2c0);
    local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.ArrayNum = 1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_398.AllocatorInstance,1,&local_398.ArrayMax);
    ConstructItems<FString,FString,int>(local_398.AllocatorInstance.Data,&local_2c0,1);
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    AssetRegistry::Impl::FScanPathContext::FScanPathContext
              (&local_118,param_3,param_4,&local_340,&local_398,IgnoreInvalidPathWarning,
               (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0);
    FVar16.Data = local_340.AllocatorInstance.Data;
    DestructItems<FString,int>((FString *)local_340.AllocatorInstance.Data,local_340.ArrayNum);
    if (FVar16.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar16.Data);
    }
    DestructItems<FString,int>((FString *)local_398.AllocatorInstance.Data,local_398.ArrayNum);
    if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.AllocatorInstance.Data);
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    ScanPathsSynchronous(this,param_1,&local_118);
    pFVar9 = `UE::AssetRegistry::FAssetRegistryImpl::
             GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>'
             ::__l2::<lambda_1>::operator()(&local_2d8);
    AssetRegistry::Impl::FScanPathContext::~FScanPathContext(&local_118);
  }
  local_300.SubPathString.Data.ArrayNum = (__return_storage_ptr__->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_300.SubPathString.Data.ArrayNum;
  pFVar1 = &__return_storage_ptr__->SubPathString;
  pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
  local_300.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.AssetPath.PackageName = (__return_storage_ptr__->AssetPath).PackageName;
  local_300.AssetPath.AssetName = (__return_storage_ptr__->AssetPath).AssetName;
  if (local_300.SubPathString.Data.ArrayNum == 0) {
    local_300.SubPathString.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_300.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_300.SubPathString,local_300.SubPathString.Data.ArrayNum,
               &local_300.SubPathString.Data.ArrayMax);
    memcpy(local_300.SubPathString.Data.AllocatorInstance.Data,pFVar18,_Size);
  }
  local_a8.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
  local_60 = 1;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
            (0x20,8,1,0,&local_a8,1,&local_5c);
  FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
  if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar17 = local_a8.SecondaryData;
  }
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)FVar17,&local_300,1);
  if (local_300.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.SubPathString.Data.AllocatorInstance.Data);
  }
  while (pFVar18 = (FScriptContainerElement *)0x0, pFVar9 != (FAssetData *)0x0) {
    local_1a8.PackageName = (pFVar9->AssetClassPath).PackageName;
    local_1a8.AssetName = (pFVar9->AssetClassPath).AssetName;
    bVar5 = FAssetData::IsRedirectorClassName(&local_1a8);
    if (!bVar5) break;
    iVar21 = 0;
    if ((*(byte *)&(pFVar9->TagsAndValues).field0_0x0 & 1) == 0) {
      this_00 = (pFVar9->TagsAndValues).field0_0x0.Loose;
      if (this_00 == (FAssetDataTagMap *)0x0) break;
      local_368.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)this_00,
                      AssetRegistry::Impl::DestinationObjectFName);
    }
    else {
      pFVar10 = FixedTagPrivate::FMapHandle::FindValue
                          ((FMapHandle *)&pFVar9->TagsAndValues,
                           AssetRegistry::Impl::DestinationObjectFName);
      if (pFVar10 == (FValueId *)0x0) break;
      local_368.Bits =
           ((ulonglong)*(ushort *)&(pFVar9->TagsAndValues).field0_0x0 & 0xfffffffffffffffc |
           0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar10;
    }
    if (local_368.Loose == (FString *)0x0) break;
    pFVar11 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_368.Fixed,&local_198);
    if (&local_128 != pFVar11) {
      pFVar18 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar21 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (iVar21 == 0) {
      iStack_2a0 = 0;
    }
    else {
      iStack_2a0 = iVar21 + -1;
    }
    local_188._12_4_ = uStack_29c;
    local_188.Size = iStack_2a0;
    local_2a8 = pFVar18;
    local_188.DataPtr = (wchar_t *)pFVar18;
    FSoftObjectPath::SetPath(__return_storage_ptr__,&local_188);
    FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_a8.SecondaryData;
    }
    FVar19 = (ForElementType<FSoftObjectPath>)((longlong)local_60 * 0x20 + (longlong)FVar17);
    for (; FVar17 != FVar19; FVar17 = (ForElementType<FSoftObjectPath>)((longlong)FVar17 + 0x20)) {
      bVar5 = FSoftObjectPath::operator==((FSoftObjectPath *)FVar17,__return_storage_ptr__);
      if (bVar5) {
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        goto LAB_142b75a01;
      }
    }
    pFVar12 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                        (&local_168,__return_storage_ptr__);
    local_178.OuterPath = pFVar12->OuterPath;
    local_178.ObjectName = pFVar12->ObjectName;
    ppFVar13 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
               ::Find(&(this->State).CachedAssets,&local_178);
    if (ppFVar13 == (FAssetData **)0x0) {
      pFVar9 = (FAssetData *)0x0;
    }
    else {
      pFVar9 = *ppFVar13;
    }
    if (pFVar9 == (FAssetData *)0x0) {
      FSoftObjectPath::ToString(__return_storage_ptr__,&local_298);
      local_388.ArrayNum = 1;
      local_388.AllocatorInstance.Data = (FScriptContainerElement *)pFVar9;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_388.AllocatorInstance,1,&local_388.ArrayMax);
      ConstructItems<FString,FString,int>(local_388.AllocatorInstance.Data,&local_298,1);
      local_330._0_8_ = pFVar9;
      local_330._8_8_ = pFVar9;
      AssetRegistry::Impl::FScanPathContext::FScanPathContext
                (&local_278,param_3,param_4,(TArray<FString,TSizedDefaultAllocator<32>_> *)local_330
                 ,&local_388,None,(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0);
      uVar4 = local_330._0_8_;
      DestructItems<FString,int>((FString *)local_330._0_8_,local_330._8_4_);
      if ((FAssetData *)uVar4 != (FAssetData *)0x0) {
        FMemory::Free((void *)uVar4);
      }
      DestructItems<FString,int>((FString *)local_388.AllocatorInstance.Data,local_388.ArrayNum);
      if ((FAssetData *)local_388.AllocatorInstance.Data != (FAssetData *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      ScanPathsSynchronous(this,local_2e0,&local_278);
      pFVar12 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                          (&local_158,__return_storage_ptr__);
      local_208.OuterPath = pFVar12->OuterPath;
      local_208.ObjectName = pFVar12->ObjectName;
      ppFVar13 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                 ::Find(&(this->State).CachedAssets,&local_208);
      if (ppFVar13 == (FAssetData **)0x0) {
        pFVar9 = (FAssetData *)0x0;
      }
      else {
        pFVar9 = *ppFVar13;
      }
      DestructItems<FString,int>
                ((FString *)local_278.LocalPaths.AllocatorInstance.Data,
                 local_278.LocalPaths.ArrayNum);
      if (local_278.LocalPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.LocalPaths.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_278.LocalFiles.AllocatorInstance.Data,
                 local_278.LocalFiles.ArrayNum);
      if (local_278.LocalFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.LocalFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_278.PackageFiles.AllocatorInstance.Data,
                 local_278.PackageFiles.ArrayNum);
      if (local_278.PackageFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.PackageFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_278.LocalDirs.AllocatorInstance.Data,local_278.LocalDirs.ArrayNum)
      ;
      if (local_278.LocalDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.LocalDirs.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_278.PackageDirs.AllocatorInstance.Data,
                 local_278.PackageDirs.ArrayNum);
      if (local_278.PackageDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.PackageDirs.AllocatorInstance.Data);
      }
    }
    FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_a8.SecondaryData;
    }
    if ((ulonglong)FVar17 <= __return_storage_ptr__) {
      FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar17 = local_a8.SecondaryData;
      }
      if ((__return_storage_ptr__ <
           (FSoftObjectPath *)((longlong)local_5c * 0x20 + (longlong)FVar17)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSoftObjectPath *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (local_60 == local_5c) {
      local_60 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                           (0x820,&local_a8,&local_5c);
    }
    FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_a8.SecondaryData;
    }
    lVar15 = (longlong)local_60;
    local_60 = local_60 + 1;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(lVar15 * 0x20 + (longlong)FVar17),__return_storage_ptr__);
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
  }
LAB_142b75a01:
  FVar16.Data = local_360.Data.AllocatorInstance.Data;
  pFVar18 = (FScriptContainerElement *)0x0;
  lVar15 = (longlong)local_360.Data.ArrayNum;
  if (1 < local_360.Data.ArrayNum) {
    if (((__return_storage_ptr__->AssetPath).PackageName == (FName)0x0) ||
       ((__return_storage_ptr__->SubPathString).Data.ArrayNum < 2)) {
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = local_360.Data.ArrayNum;
      if (local_360.Data.ArrayNum == 0) {
        local_36c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_360.Data.ArrayNum,0,&local_378,local_360.Data.ArrayNum,&local_36c);
        memcpy(local_378.Data,FVar16.Data,lVar15 * 2);
      }
      iVar21 = 0;
      iVar20 = local_370 + -1;
      if (local_370 == 0) {
        iVar20 = iVar21;
      }
      pFVar14 = FUtf8String::ConstructFromPtrSize(&local_1c8,(wchar_t *)local_378.Data,iVar20);
      pFVar22 = pFVar18;
      if (&local_1b8 != pFVar14) {
        pFVar18 = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar22 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar14->Data).ArrayNum;
        iVar21 = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (pFVar1 != &local_1b8) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = pFVar18;
        (__return_storage_ptr__->SubPathString).Data.ArrayNum = (int)pFVar22;
        (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar21;
        pFVar18 = (FScriptContainerElement *)0x0;
      }
      FVar16.Data = local_378.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
        FVar16.Data = local_378.Data;
      }
    }
    else {
      iVar20 = (__return_storage_ptr__->SubPathString).Data.ArrayNum;
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Data.ArrayNum = 0;
      local_3a8.Data.ArrayMax = 0;
      iVar21 = iVar20 + -1;
      if (iVar20 == 0) {
        iVar21 = 0;
      }
      pFVar11 = ::FString::ConstructFromPtrSize
                          (&local_1f8,(uchar *)(pFVar1->Data).AllocatorInstance.Data,iVar21);
      if (&local_3a8 != pFVar11) {
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        local_3a8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_3a8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_288,&local_3a8,L".");
      ::FString::ConcatFF(&local_350,&local_288,&local_360);
      iVar20 = local_350.Data.ArrayNum;
      FVar16.Data = local_350.Data.AllocatorInstance.Data;
      bVar5 = local_350.Data.ArrayNum == 0;
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      local_350.Data.ArrayMax = 0;
      iVar21 = 0;
      iVar20 = iVar20 + -1;
      if (bVar5) {
        iVar20 = iVar21;
      }
      pFVar14 = FUtf8String::ConstructFromPtrSize(&local_1e8,(wchar_t *)FVar16.Data,iVar20);
      pFVar22 = pFVar18;
      if (&local_1d8 != pFVar14) {
        pFVar18 = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar22 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar14->Data).ArrayNum;
        iVar21 = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (pFVar1 != &local_1d8) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = pFVar18;
        (__return_storage_ptr__->SubPathString).Data.ArrayNum = (int)pFVar22;
        (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar21;
        pFVar18 = (FScriptContainerElement *)0x0;
      }
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      if (FVar16.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar16.Data);
      }
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
      FVar16.Data = local_3a8.Data.AllocatorInstance.Data;
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
        FVar16.Data = local_3a8.Data.AllocatorInstance.Data;
      }
    }
    if (FVar16.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar16.Data);
    }
  }
  FVar17 = (ForElementType<FSoftObjectPath>)&local_a8;
  if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar17 = local_a8.SecondaryData;
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar17,local_60);
  if (local_a8.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FAssetRegistryImpl @ 142b7a0f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetRegistryImpl * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryImpl(FAssetRegistryImpl *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->AssetCollisionEvent).field_0x38 = 2;
  *(undefined8 *)&(this->AssetCollisionEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetCollisionEvent).field_0x30 = 0;
  FAssetRegistryState::FAssetRegistryState(&this->State);
  *(undefined8 *)&(this->CachedVerseFiles).Elements = 0;
  *(undefined8 *)&(this->CachedVerseFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedVerseFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedVerseFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedVerseFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedVerseFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedVerseFiles).Elements.field_0x34 = 0;
  (this->CachedVerseFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedVerseFiles).HashSize = 0;
  *(undefined8 *)&this->CachedVerseFilesByPath = 0;
  *(undefined8 *)&(this->CachedVerseFilesByPath).field_0x8 = 0;
  *(undefined8 *)&(this->CachedVerseFilesByPath).field_0x20 = 0;
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x28 = 0;
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x34 = 0;
  *(undefined8 *)&(this->CachedVerseFilesByPath).field_0x40 = 0;
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x48 = 0;
  FAssetRegistrySerializationOptions::FAssetRegistrySerializationOptions
            (&this->SerializationOptions,ForGame);
  FAssetRegistrySerializationOptions::FAssetRegistrySerializationOptions
            (&this->DevelopmentSerializationOptions,ForGame);
  *(undefined8 *)&(this->CachedEmptyPackages).Elements = 0;
  *(undefined8 *)&(this->CachedEmptyPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedEmptyPackages).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedEmptyPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedEmptyPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedEmptyPackages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedEmptyPackages).Elements.field_0x34 = 0;
  (this->CachedEmptyPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedEmptyPackages).HashSize = 0;
  *(undefined8 *)&this->CachedBPInheritanceMap = 0;
  *(undefined8 *)&(this->CachedBPInheritanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBPInheritanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBPInheritanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x48 = 0;
  *(undefined8 *)&(this->CachedParsedFilterRules).Rules = 0;
  *(undefined8 *)&(this->CachedParsedFilterRules).Rules.field_0x8 = 0;
  *(undefined8 *)&(this->CachedParsedFilterRules).Rules.field_0x20 = 0;
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x28 = 0;
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x34 = 0;
  *(undefined8 *)&(this->CachedParsedFilterRules).Rules.field_0x40 = 0;
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x48 = 0;
  (this->CachedParsedFilterRules).ClassesFingerprint = 0;
  (this->CachedParsedFilterRules).bContainsAnyUnresolvedRule = false;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).InheritanceMap = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x8 = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x20 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x28 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x34 = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x40 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x48 = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x8 = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x20 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x28 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x34 = 0;
  *(undefined8 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x40 = 0;
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x48 = 0;
  (this->TempCachedInheritanceBuffer).SavedAllClassesVersionNumber = 0xffffffffffffffff;
  (this->TempCachedInheritanceBuffer).bDirty = true;
  FPathTree::FPathTree(&this->CachedPathTree);
  (this->GlobalGatherer).Ptr = (FAssetDataGatherer *)0x0;
  *(undefined8 *)&(this->BackgroundResults).Assets = 0;
  *(undefined8 *)&(this->BackgroundResults).Assets.field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundResults).Assets.field_0x20 = 0;
  *(undefined4 *)&(this->BackgroundResults).Assets.field_0x28 = 0;
  *(undefined4 *)&(this->BackgroundResults).Assets.field_0x2c = 0x80;
  *(undefined4 *)&(this->BackgroundResults).Assets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BackgroundResults).Assets.field_0x34 = 0;
  *(undefined8 *)&(this->BackgroundResults).Assets.field_0x40 = 0;
  *(undefined4 *)&(this->BackgroundResults).Assets.field_0x48 = 0;
  *(undefined8 *)&(this->BackgroundResults).AssetsForGameThread = 0;
  *(undefined8 *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundResults).AssetsForGameThread.field_0x20 = 0;
  *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x28 = 0;
  *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x2c = 0x80;
  *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x34 = 0;
  *(undefined8 *)&(this->BackgroundResults).AssetsForGameThread.field_0x40 = 0;
  *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x48 = 0;
  (this->BackgroundResults).Paths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackgroundResults).Paths.IndexMask = 0xffffffff;
  (this->BackgroundResults).Paths.Front = 0;
  (this->BackgroundResults).Paths.AfterBack = 0;
  *(undefined8 *)&(this->BackgroundResults).Dependencies = 0;
  *(undefined8 *)&(this->BackgroundResults).Dependencies.field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundResults).Dependencies.field_0x20 = 0;
  *(undefined4 *)&(this->BackgroundResults).Dependencies.field_0x28 = 0;
  *(undefined4 *)&(this->BackgroundResults).Dependencies.field_0x2c = 0x80;
  *(undefined4 *)&(this->BackgroundResults).Dependencies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BackgroundResults).Dependencies.field_0x34 = 0;
  *(undefined8 *)&(this->BackgroundResults).Dependencies.field_0x40 = 0;
  *(undefined4 *)&(this->BackgroundResults).Dependencies.field_0x48 = 0;
  *(undefined8 *)&(this->BackgroundResults).DependenciesForGameThread = 0;
  *(undefined8 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x20 = 0;
  *(undefined4 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x28 = 0;
  *(undefined4 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x2c = 0x80;
  *(undefined4 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x34 = 0;
  *(undefined8 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x40 = 0;
  *(undefined4 *)&(this->BackgroundResults).DependenciesForGameThread.field_0x48 = 0;
  (this->BackgroundResults).CookedPackageNamesWithoutAssetData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BackgroundResults).CookedPackageNamesWithoutAssetData.IndexMask = 0xffffffff;
  (this->BackgroundResults).CookedPackageNamesWithoutAssetData.Front = 0;
  (this->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack = 0;
  (this->BackgroundResults).VerseFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackgroundResults).VerseFiles.IndexMask = 0xffffffff;
  (this->BackgroundResults).VerseFiles.Front = 0;
  (this->BackgroundResults).VerseFiles.AfterBack = 0;
  (this->BackgroundResults).BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackgroundResults).BlockedFiles.ArrayNum = 0;
  (this->BackgroundResults).BlockedFiles.ArrayMax = 0;
  *(undefined8 *)&this->DeferredAssets = 0;
  *(undefined8 *)&(this->DeferredAssets).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredAssets).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredAssets).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredAssets).field_0x34 = 0;
  *(undefined8 *)&(this->DeferredAssets).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredAssets).field_0x48 = 0;
  *(undefined8 *)&this->DeferredAssetsForGameThread = 0;
  *(undefined8 *)&(this->DeferredAssetsForGameThread).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredAssetsForGameThread).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x34 = 0;
  *(undefined8 *)&(this->DeferredAssetsForGameThread).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x48 = 0;
  *(undefined8 *)&this->DeferredDependencies = 0;
  *(undefined8 *)&(this->DeferredDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->DeferredDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredDependencies).field_0x48 = 0;
  *(undefined8 *)&this->DeferredDependenciesForGameThread = 0;
  *(undefined8 *)&(this->DeferredDependenciesForGameThread).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredDependenciesForGameThread).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x34 = 0;
  *(undefined8 *)&(this->DeferredDependenciesForGameThread).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x48 = 0;
  *(undefined8 *)&(this->GameThreadRequestedClasses).Elements = 0;
  *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x34 = 0;
  (this->GameThreadRequestedClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GameThreadRequestedClasses).HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->GameThreadRequestedClassesLock,4000);
  this->bGameThreadRequestedClassesShouldRetry = (atomic<bool>)0x0;
  this->bGameThreadRequestedClassesShouldProcess = (atomic<bool>)0x0;
  *(undefined8 *)&this->TagSizeByClass = 0;
  *(undefined8 *)&(this->TagSizeByClass).field_0x8 = 0;
  *(undefined8 *)&(this->TagSizeByClass).field_0x20 = 0;
  *(undefined4 *)&(this->TagSizeByClass).field_0x28 = 0;
  *(undefined4 *)&(this->TagSizeByClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagSizeByClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagSizeByClass).field_0x34 = 0;
  *(undefined8 *)&(this->TagSizeByClass).field_0x40 = 0;
  *(undefined4 *)&(this->TagSizeByClass).field_0x48 = 0;
  *(undefined8 *)&(this->PersistentMountPoints).Elements = 0;
  *(undefined8 *)&(this->PersistentMountPoints).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PersistentMountPoints).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PersistentMountPoints).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PersistentMountPoints).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentMountPoints).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PersistentMountPoints).Elements.field_0x34 = 0;
  (this->PersistentMountPoints).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PersistentMountPoints).HashSize = 0;
  this->HighestPending = 0;
  this->InitialSearchStartTime = 0.0;
  this->AdditionalMountSearchStartTime = 0.0;
  this->bInitialSearchStarted = false;
  this->bInitializationComplete = false;
  this->bInitialSearchCompleted = (atomic<bool>)0x0;
  this->bAdditionalMountSearchInProgress = (atomic<bool>)0x0;
  *(undefined8 *)&(this->ClassGeneratorNames).Elements = 0;
  *(undefined8 *)&(this->ClassGeneratorNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClassGeneratorNames).Elements.field_0x20 = 0;
  this->bPreloadingComplete = false;
  this->bForceCompletionEvenIfClassNotLoaded = false;
  this->bForceCompletionEvenIfNotOnGameThread = false;
  this->bProcessedAnyAssetsAfterRetryDeferred = true;
  this->MaxSecondsPerFrame = 0.04;
  *(undefined4 *)&(this->ClassGeneratorNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClassGeneratorNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassGeneratorNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassGeneratorNames).Elements.field_0x34 = 0;
  (this->ClassGeneratorNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClassGeneratorNames).HashSize = 0;
  (this->PackageRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRedirects).ArrayNum = 0;
  (this->PackageRedirects).ArrayMax = 0;
  (this->AsyncConsumer).ReferenceCount = 0;
  (this->AsyncConsumer).Consumed = (FEvent *)0x0;
  (this->GatherDependencyDataScratchPad).Ptr = (FGatherDependencyDataScratchpad *)0x0;
  return this;
}

// ~FAssetRegistryImpl @ 142b7d380

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::FAssetRegistryImpl::~FAssetRegistryImpl(FAssetRegistryImpl *this)

{
  FGatherDependencyDataScratchpad *this_00;
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FEvent *pFVar3;
  FScriptContainerElement *pFVar4;
  FAssetDataGatherer *pFVar5;
  
  this_00 = (this->GatherDependencyDataScratchPad).Ptr;
  if (this_00 != (FGatherDependencyDataScratchpad *)0x0) {
    (this_00->ModifiedDependNodes).HashSize = 0;
    FVar1 = (this_00->ModifiedDependNodes).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this_00->ModifiedDependNodes).Elements);
    *(undefined4 *)&(this_00->CachedDepToRedirect).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->CachedDepToRedirect).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->CachedDepToRedirect);
    *(undefined4 *)&(this_00->AssetNameToConstructDataMap).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->AssetNameToConstructDataMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0xf0);
  }
  pFVar3 = (this->AsyncConsumer).Consumed;
  if (pFVar3 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar3);
    (this->AsyncConsumer).Consumed = (FEvent *)0x0;
  }
  DestructItems<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,int>
            ((FAssetRegistryPackageRedirect *)(this->PackageRedirects).AllocatorInstance.Data,
             (this->PackageRedirects).ArrayNum);
  pFVar4 = (this->PackageRedirects).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->ClassGeneratorNames).HashSize = 0;
  FVar1 = (this->ClassGeneratorNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClassGeneratorNames).Elements);
  (this->PersistentMountPoints).HashSize = 0;
  FVar1 = (this->PersistentMountPoints).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PersistentMountPoints).Elements);
  *(undefined4 *)&(this->TagSizeByClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TagSizeByClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagSizeByClass);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GameThreadRequestedClassesLock);
  (this->GameThreadRequestedClasses).HashSize = 0;
  FVar1 = (this->GameThreadRequestedClasses).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GameThreadRequestedClasses).Elements);
  *(undefined4 *)&(this->DeferredDependenciesForGameThread).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DeferredDependenciesForGameThread).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredDependenciesForGameThread);
  *(undefined4 *)&(this->DeferredDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DeferredDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredDependencies);
  *(undefined4 *)&(this->DeferredAssetsForGameThread).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DeferredAssetsForGameThread).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredAssetsForGameThread);
  *(undefined4 *)&(this->DeferredAssets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DeferredAssets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredAssets);
  AssetDataGather::FResults::~FResults(&this->BackgroundResults);
  pFVar5 = (this->GlobalGatherer).Ptr;
  if (pFVar5 != (FAssetDataGatherer *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
  }
  *(undefined4 *)&(this->CachedPathTree).ChildPathToParentPath.field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedPathTree).ChildPathToParentPath.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CachedPathTree).ChildPathToParentPath);
  *(undefined4 *)&(this->CachedPathTree).ParentPathToChildPaths.field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedPathTree).ParentPathToChildPaths.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPathTree);
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap);
  *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TempCachedInheritanceBuffer);
  *(undefined4 *)&(this->CachedParsedFilterRules).Rules.field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedParsedFilterRules).Rules.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedParsedFilterRules);
  *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedBPInheritanceMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedBPInheritanceMap);
  (this->CachedEmptyPackages).HashSize = 0;
  FVar1 = (this->CachedEmptyPackages).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedEmptyPackages).Elements);
  FAssetRegistrySerializationOptions::~FAssetRegistrySerializationOptions
            (&this->DevelopmentSerializationOptions);
  FAssetRegistrySerializationOptions::~FAssetRegistrySerializationOptions
            (&this->SerializationOptions);
  *(undefined4 *)&(this->CachedVerseFilesByPath).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedVerseFilesByPath).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedVerseFilesByPath);
  (this->CachedVerseFiles).HashSize = 0;
  FVar1 = (this->CachedVerseFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedVerseFiles).Elements);
  FAssetRegistryState::~FAssetRegistryState(&this->State);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetCollisionEvent).field_0x28,
             *(int *)&(this->AssetCollisionEvent).field_0x30);
  pvVar2 = *(void **)&(this->AssetCollisionEvent).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7d712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// operator() @ 142b7e7e0

FAssetData * __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::
GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FCachedAssetKey *pFVar4;
  FAssetData **ppFVar5;
  FString *pFVar6;
  FSoftObjectPath *pFVar7;
  FAssetData *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCachedAssetKey local_58;
  FString local_48;
  FSoftObjectPath local_38;
  
  lVar1 = *(longlong *)this;
  pFVar4 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                     ((FCachedAssetKey *)&local_38,*(FSoftObjectPath **)((longlong)this + 8));
  local_58.OuterPath = pFVar4->OuterPath;
  local_58.ObjectName = pFVar4->ObjectName;
  ppFVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                    *)(lVar1 + 0x40),&local_58);
  if ((ppFVar5 != (FAssetData **)0x0) && (*ppFVar5 != (FAssetData *)0x0)) {
    return *ppFVar5;
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  pFVar8 = (FAssetData *)0x0;
  if ((*plVar2 != 0) && (1 < (int)plVar2[3])) {
    iVar10 = 0;
    iVar9 = (int)plVar2[3] + -1;
    if ((int)plVar2[3] == 0) {
      iVar9 = iVar10;
    }
    iVar11 = 0;
    pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_58,(uchar *)plVar2[2],iVar9);
    pFVar8 = (FAssetData *)0x0;
    if (&local_48 != pFVar6) {
      pFVar8 = (FAssetData *)(pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar6->Data).ArrayNum;
      iVar10 = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.OuterPath != (FName)0x0) {
      FMemory::Free((void *)local_58.OuterPath);
    }
    pFVar6 = *(FString **)((longlong)this + 0x10);
    if (pFVar6 == &local_48) {
      if (pFVar8 != (FAssetData *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    else {
      pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
      (pFVar6->Data).ArrayNum = iVar11;
      (pFVar6->Data).ArrayMax = iVar10;
    }
    local_58.OuterPath = **(FName **)((longlong)this + 8);
    local_58.ObjectName = (*(FName **)((longlong)this + 8))[1];
    pFVar7 = FSoftObjectPath::ConstructFromAssetPath(&local_38,(FTopLevelAssetPath *)&local_58);
    FSoftObjectPath::operator=(*(FSoftObjectPath **)((longlong)this + 8),pFVar7);
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    lVar1 = *(longlong *)this;
    pFVar4 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                       ((FCachedAssetKey *)&local_38,*(FSoftObjectPath **)((longlong)this + 8));
    local_58.OuterPath = pFVar4->OuterPath;
    local_58.ObjectName = pFVar4->ObjectName;
    ppFVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
              ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                      *)(lVar1 + 0x40),&local_58);
    pFVar8 = (FAssetData *)0x0;
    if (ppFVar5 != (FAssetData **)0x0) {
      pFVar8 = *ppFVar5;
    }
  }
  return pFVar8;
}

// operator() @ 142b7e990

FAssetData * __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::
GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FCachedAssetKey *pFVar4;
  FAssetData **ppFVar5;
  FString *pFVar6;
  FSoftObjectPath *pFVar7;
  FAssetData *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCachedAssetKey local_58;
  FString local_48;
  FSoftObjectPath local_38;
  
  lVar1 = *(longlong *)this;
  pFVar4 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                     ((FCachedAssetKey *)&local_38,*(FSoftObjectPath **)((longlong)this + 8));
  local_58.OuterPath = pFVar4->OuterPath;
  local_58.ObjectName = pFVar4->ObjectName;
  ppFVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                    *)(lVar1 + 0x40),&local_58);
  if ((ppFVar5 != (FAssetData **)0x0) && (*ppFVar5 != (FAssetData *)0x0)) {
    return *ppFVar5;
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  pFVar8 = (FAssetData *)0x0;
  if ((*plVar2 != 0) && (1 < (int)plVar2[3])) {
    iVar10 = 0;
    iVar9 = (int)plVar2[3] + -1;
    if ((int)plVar2[3] == 0) {
      iVar9 = iVar10;
    }
    iVar11 = 0;
    pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_58,(uchar *)plVar2[2],iVar9);
    pFVar8 = (FAssetData *)0x0;
    if (&local_48 != pFVar6) {
      pFVar8 = (FAssetData *)(pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar6->Data).ArrayNum;
      iVar10 = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.OuterPath != (FName)0x0) {
      FMemory::Free((void *)local_58.OuterPath);
    }
    pFVar6 = *(FString **)((longlong)this + 0x10);
    if (pFVar6 == &local_48) {
      if (pFVar8 != (FAssetData *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    else {
      pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
      (pFVar6->Data).ArrayNum = iVar11;
      (pFVar6->Data).ArrayMax = iVar10;
    }
    local_58.OuterPath = **(FName **)((longlong)this + 8);
    local_58.ObjectName = (*(FName **)((longlong)this + 8))[1];
    pFVar7 = FSoftObjectPath::ConstructFromAssetPath(&local_38,(FTopLevelAssetPath *)&local_58);
    FSoftObjectPath::operator=(*(FSoftObjectPath **)((longlong)this + 8),pFVar7);
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    lVar1 = *(longlong *)this;
    pFVar4 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                       ((FCachedAssetKey *)&local_38,*(FSoftObjectPath **)((longlong)this + 8));
    local_58.OuterPath = pFVar4->OuterPath;
    local_58.ObjectName = pFVar4->ObjectName;
    ppFVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
              ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                      *)(lVar1 + 0x40),&local_58);
    pFVar8 = (FAssetData *)0x0;
    if (ppFVar5 != (FAssetData **)0x0) {
      pFVar8 = *ppFVar5;
    }
  }
  return pFVar8;
}

// operator() @ 142b7efc0

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>::operator()
          (void *this,FName param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  FString *pFVar4;
  FName local_res10 [3];
  FString local_18;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  local_res10[0] = param_1;
  pFVar4 = ::FName::ToString(local_res10,&local_18);
  iVar3 = *(int *)(lVar2 + 0x20);
  if (iVar3 == *(int *)(lVar2 + 0x24)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(lVar2 + 0x18),(int *)(lVar2 + 0x24));
  }
  *(int *)(lVar2 + 0x20) = iVar3 + 1;
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  *puVar1 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar1 + 1) = (pFVar4->Data).ArrayNum;
  *(int *)((longlong)puVar1 + 0xc) = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142b7f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::CachePathsFromState'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  FAssetDataTagMap *pFVar1;
  FName FVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [8];
  FName FStack_2f0;
  FTopLevelAssetPath local_2e8;
  undefined4 local_2d8;
  FTopLevelAssetPath local_2c8;
  FAssetRegistryExportPath local_2b8;
  FAssetRegistryExportPath local_290;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2d8 = 0;
  bVar5 = false;
  if (*(char *)(*(longlong *)((longlong)this + 8) + 6) != '\0') {
    if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar1 = (param_1->TagsAndValues).field0_0x0.Loose;
      if (pFVar1 != (FAssetDataTagMap *)0x0) {
        uVar7 = (uint)pFVar1->_padding_;
        goto LAB_142b7f263;
      }
    }
    else {
      uVar7 = (uint)(param_1->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142b7f263:
      bVar5 = false;
      if (uVar7 != 0) goto LAB_142b7f2ca;
    }
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    ::FName::AppendString(&param_1->PackageName,&local_268);
    bVar10 = true;
    FStack_2f0.ComparisonIndex.Value =
         (uint)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_2f8 = (undefined1  [8])local_268.Base;
    bVar6 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)local_2f8);
    bVar5 = true;
    if (!bVar6) {
      bVar5 = true;
      goto LAB_142b7f2cd;
    }
  }
LAB_142b7f2ca:
  bVar10 = bVar5;
  bVar5 = false;
LAB_142b7f2cd:
  if (bVar10) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  if (!bVar5) {
    FStack_2f0 = *(FName *)((longlong)this + 0x10);
    local_2f8 = *(undefined1 (*) [8])this;
    local_2e8.AssetName = (FName)local_2f8;
    local_2e8.PackageName =
         (FName)UE::Core::Private::Function::
                TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
                ::Call;
    FPathTree::CachePath
              ((FPathTree *)((longlong)local_2f8 + 0x7b8),param_1->PackagePath,
               (TFunctionRef<void___cdecl(FName)> *)&local_2e8);
    FVar2 = (param_1->AssetClassPath).AssetName;
    lVar3 = *(longlong *)this;
    uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar4 = (param_1->AssetClassPath).PackageName;
    uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar8 = uVar8 + FVar4.Number;
    if (*(int *)(lVar3 + 0xc90) != *(int *)(lVar3 + 0xcbc)) {
      lVar9 = *(longlong *)(lVar3 + 0xcc8);
      if (*(longlong *)(lVar3 + 0xcc8) == 0) {
        lVar9 = lVar3 + 0xcc0;
      }
      iVar11 = *(int *)(lVar9 + (ulonglong)
                                (*(int *)(lVar3 + 0xcd0) - 1U &
                                (uVar8 * 0x40 + -0x61c88647 + uVar7 + FVar2.Number + (uVar8 >> 2) ^
                                uVar8)) * 4);
      if (iVar11 != -1) {
        lVar3 = *(longlong *)(lVar3 + 0xc88);
        do {
          lVar9 = (longlong)iVar11;
          if ((*(FName *)(lVar3 + lVar9 * 0x18) == (param_1->AssetClassPath).PackageName) &&
             (*(FName *)(lVar3 + 8 + lVar9 * 0x18) == (param_1->AssetClassPath).AssetName)) {
            if (iVar11 == -1) {
              return;
            }
            FAssetData::GetTagValueRef<FAssetRegistryExportPath>
                      (param_1,&local_2b8,FBlueprintTags::GeneratedClassPath);
            FAssetData::GetTagValueRef<FAssetRegistryExportPath>
                      (param_1,&local_290,FBlueprintTags::ParentClassPath);
            if (local_2b8.Package == (FName)0x0 &&
                (local_2b8.ClassPath.PackageName == (FName)0x0 && local_2b8.Object == (FName)0x0)) {
              return;
            }
            if (local_290.Package == (FName)0x0 &&
                (local_290.ClassPath.PackageName == (FName)0x0 && local_290.Object == (FName)0x0)) {
              return;
            }
            lVar3 = *(longlong *)this;
            local_2e8.PackageName.ComparisonIndex.Value = 0;
            local_2e8.PackageName.Number = 0;
            local_2e8.AssetName.ComparisonIndex.Value = 0;
            local_2e8.AssetName.Number = 0;
            FTopLevelAssetPath::TrySetPath(&local_2e8,local_290.Package,local_290.Object);
            local_2f8._0_4_ = 0;
            local_2f8._4_4_ = 0;
            FStack_2f0.ComparisonIndex.Value = 0;
            FStack_2f0.Number = 0;
            FTopLevelAssetPath::TrySetPath
                      ((FTopLevelAssetPath *)local_2f8,local_2b8.Package,local_2b8.Object);
            local_2c8.PackageName = local_2e8.PackageName;
            local_2c8.AssetName = local_2e8.AssetName;
            TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
            ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
                      ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                        *)(lVar3 + 0x640),(FTopLevelAssetPath *)local_2f8,&local_2c8);
            *(undefined1 *)(*(longlong *)this + 0x7a0) = 1;
            return;
          }
          iVar11 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
        } while (iVar11 != -1);
      }
    }
  }
  return;
}

// operator() @ 142b80040

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  ForElementType<FAssetData_*> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FAssetData_*> FVar6;
  FAssetData *local_res10 [3];
  
  FVar1 = *(ForElementType<FAssetData_*> *)this;
  FVar6 = *(ForElementType<FAssetData_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FAssetData_*> *)((longlong)FVar1 + 8) == (ForElementType<FAssetData_*>)0x0) {
    FVar6 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 <
      (FAssetData **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x14) * 8))) {
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
  iVar5 = *(int *)((longlong)FVar1 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
                      (0x808,(ForElementType<FAssetData_*> *)FVar1,(int *)((longlong)FVar1 + 0x14));
  }
  *(int *)((longlong)FVar1 + 0x10) = iVar5 + 1;
  FVar6 = *(ForElementType<FAssetData_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FAssetData_*> *)((longlong)FVar1 + 8) == (ForElementType<FAssetData_*>)0x0) {
    FVar6 = FVar1;
  }
  *(FAssetData **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b80100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [16];
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.Base = local_148;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  ::FName::ToString(&param_1->PackageName,&local_168);
  lVar10 = (longlong)local_168.CurPos - (longlong)local_168.Base;
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  pwVar4 = local_168.Base;
  iVar9 = (int)(lVar10 >> 1);
  *local_168.CurPos = L'\0';
  plVar2 = *(longlong **)this;
  local_198 = local_168.Base;
  uVar3._4_4_ = uStack_18c;
  uVar3._0_4_ = iVar9;
  lVar10 = plVar2[1];
  puVar8 = (undefined8 *)*plVar2;
  puVar11 = puVar8 + (longlong)(int)lVar10 * 2;
  iStack_190 = iVar9;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (puVar8 == puVar11) {
      lVar10 = *(longlong *)this;
      iVar1 = *(int *)(lVar10 + 0x28);
      puVar8 = *(undefined8 **)(lVar10 + 0x20);
      puVar11 = puVar8 + (longlong)iVar1 * 2;
      goto LAB_142b80240;
    }
    local_198 = (wchar_t *)*puVar8;
    local_188.DataPtr = pwVar4;
    iStack_190 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      iStack_190 = 0;
    }
    local_178._12_4_ = uStack_18c;
    local_178.Size = iStack_190;
    local_188._8_8_ = uVar3;
    local_178.DataPtr = local_198;
    bVar5 = FPathViews::IsParentPathOf(&local_178,&local_188);
    if (bVar5) break;
    puVar8 = puVar8 + 2;
  }
LAB_142b8028d:
  bVar5 = true;
LAB_142b80293:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return bVar5;
LAB_142b80240:
  if (*(int *)(lVar10 + 0x28) != iVar1) {
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
  }
  if (puVar8 == puVar11) {
    bVar5 = false;
    goto LAB_142b80293;
  }
  iVar7 = *(int *)(puVar8 + 1) + -1;
  if (*(int *)(puVar8 + 1) == 0) {
    iVar7 = 0;
  }
  if (iVar9 == iVar7) {
    if ((iVar9 != 0) && (iVar7 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar4,(wchar_t *)*puVar8,(longlong)iVar7);
      if (iVar6 != 0) goto LAB_142b80287;
    }
    if (iVar9 == iVar7) goto LAB_142b8028d;
  }
LAB_142b80287:
  puVar8 = puVar8 + 2;
  goto LAB_142b80240;
}

// operator() @ 142b802e0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

FSetManageReferencesNodeData * __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l2::<lambda_1>::operator()
          (void *this,FDependsNode *param_1)

{
  FSetManageReferencesNodeData *pFVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>
  *pTVar3;
  FSetManageReferencesNodeData *pFVar4;
  uint uVar5;
  FDependsNode *local_res10 [3];
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_res10[0] = param_1;
  pTVar3 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
           ::FindOrAddImpl<FDependsNode_*_const_&>
                     (*(TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                        **)this,uVar5 >> 0x10 ^ uVar5,local_res10);
  if (pTVar3->Ptr != (FSetManageReferencesNodeData *)0x0) {
    return pTVar3->Ptr;
  }
  pFVar4 = ::operator_new(0x40);
  if (pFVar4 != (FSetManageReferencesNodeData *)0x0) {
    pFVar4->ManagedInEarlierRound = None;
    pFVar4->bModifiedByRound = false;
    *(undefined3 *)&pFVar4->field_0x5 = 0;
    pFVar4->ManagedInThisRound = None;
    pFVar4->bDirectManagedInThisRound = false;
    *(undefined3 *)&pFVar4->field_0xd = 0;
    (pFVar4->DirectManagedAssetsThisRound).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DirectManagedAssetsThisRound).ArrayNum = 0;
    (pFVar4->DirectManagedAssetsThisRound).ArrayMax = 0;
    pFVar4->DebugInstigator[0] = (FDependsNode *)0x0;
    pFVar4->DebugInstigator[1] = (FDependsNode *)0x0;
    pFVar4->bModifiedByCurrentManager = false;
    *(undefined3 *)&pFVar4->field_0x31 = 0;
    pFVar4->VisitedByCurrentManager = None;
    *(undefined8 *)&pFVar4->CurrentManagerProperties = 0;
  }
  pFVar1 = pTVar3->Ptr;
  if (pFVar1 != pFVar4) {
    pTVar3->Ptr = pFVar4;
    if (pFVar1 != (FSetManageReferencesNodeData *)0x0) {
      pFVar2 = (pFVar1->DirectManagedAssetsThisRound).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x40);
      pFVar4 = pTVar3->Ptr;
    }
    return pFVar4;
  }
  return pFVar1;
}

// operator() @ 142b803b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>::operator()
          (void *this,FName param_1)

{
  longlong lVar1;
  FName *pFVar2;
  FName local_res10;
  undefined1 auStack_298 [32];
  bool local_278 [16];
  TStringView<wchar_t> local_268;
  FName local_258;
  TStringView<wchar_t> local_250;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  local_res10 = param_1;
  ::FName::AppendString(&local_res10,&local_238);
  local_268.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_268.DataPtr = local_238.Base;
  FPathViews::GetMountPointNameFromPath(&local_250,&local_268,local_278,false);
  if ((local_250.Size != 0) && (local_278[0] == false)) {
    lVar1 = *(longlong *)this;
    pFVar2 = ::FName::FName((FName *)&local_268,local_250.Size,local_250.DataPtr,FNAME_Add);
    local_268.DataPtr = *(wchar_t **)pFVar2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0xc08),
               &local_258,(bool *)&local_268);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}

// operator() @ 142b809b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>::
operator()(void *this,ELoadResult param_1,FAssetRegistryState *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  PSRWLOCK SRWLock;
  FEventContext local_98;
  
  SRWLock = (PSRWLOCK)(*(longlong *)((longlong)this + 8) + 0xd30);
  local_98.ProgressUpdateData.bIsSet = false;
  local_98.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.PathEvents.ArrayNum = 0;
  local_98.PathEvents.ArrayMax = 0;
  local_98.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0xd38);
  local_98.AssetEvents.ArrayNum = 0;
  local_98.AssetEvents.ArrayMax = 0;
  local_98.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.VerseEvents.ArrayNum = 0;
  local_98.VerseEvents.ArrayMax = 0;
  local_98.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.RequiredLoads.ArrayNum = 0;
  local_98.RequiredLoads.ArrayMax = 0;
  local_98.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.BlockedFiles.ArrayNum = 0;
  local_98.BlockedFiles.ArrayMax = 0;
  local_98.bFileLoadedEventBroadcast = false;
  local_98.bScanStartedEventBroadcast = false;
  local_98.bHasSentFileLoadedEventBroadcast = false;
  local_98.bKnownGathersCompleteEventBroadcast = false;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  lVar2 = *(longlong *)this;
  UE::AssetRegistry::FAssetRegistryImpl::LoadPremadeAssetRegistry
            ((FAssetRegistryImpl *)(*(longlong *)((longlong)this + 8) + 0x30),&local_98,param_1,
             param_2);
  if (*(int *)(lVar2 + 0xce8) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferenceCount >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2e4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar2 + 0xcf0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Consumed != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(**(longlong **)(lVar2 + 0xcf0) + 0x10))();
  piVar1 = (int *)(lVar2 + 0xce8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(lVar2 + 0xcf0));
    *(undefined8 *)(lVar2 + 0xcf0) = 0;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  UAssetRegistryImpl::Broadcast(*(UAssetRegistryImpl **)((longlong)this + 8),&local_98,false);
  DestructItems<FString,int>
            ((FString *)local_98.BlockedFiles.AllocatorInstance.Data,local_98.BlockedFiles.ArrayNum)
  ;
  if (local_98.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.RequiredLoads.AllocatorInstance.Data,
             local_98.RequiredLoads.ArrayNum);
  if (local_98.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_98.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.AssetEvents.AllocatorInstance.Data,local_98.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.PathEvents.AllocatorInstance.Data,local_98.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.PathEvents.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142b80bc0

/* WARNING: Removing unreachable block (ram,0x000142b80dde) */
/* WARNING: Removing unreachable block (ram,0x000142b80dec) */

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::InitRedirectors'::__l9::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  ForAnyElementType *pFVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  ForAnyElementType local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  ::FName::ToString(&param_1->PackageName,&local_58);
  (**(code **)(*(longlong *)**(undefined8 **)this + 8))();
  ::FString::PrintfImpl(&local_38,L"/%s/");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::Replace(&local_58,&local_48,(wchar_t *)FVar7.Data,L"/Game/",IgnoreCase);
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  lVar1 = *(longlong *)((longlong)this + 8);
  pFVar8 = (ForAnyElementType *)(lVar1 + 0xcd8);
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_48.Data.ArrayNum;
  local_20 = CONCAT44(local_20._4_4_,iVar5);
  if (iVar5 == 0) {
    local_20 = local_48.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_28,iVar5,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  FVar7.Data = local_58.Data.AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_58.Data.ArrayNum;
  local_10 = CONCAT44(local_10._4_4_,iVar5);
  if (iVar5 == 0) {
    local_10 = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_18,iVar5,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  if (((pFVar8->Data <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar8->Data + (longlong)*(int *)(lVar1 + 0xce4) * 0x20)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(lVar1 + 0xce0);
  if (iVar5 == *(int *)(lVar1 + 0xce4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,pFVar8,(int *)(lVar1 + 0xce4));
  }
  *(int *)(lVar1 + 0xce0) = iVar5 + 1;
  pFVar6 = pFVar8->Data + (longlong)iVar5 * 0x20;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_28.Data;
  *(undefined4 *)(pFVar6 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar6 + 0xc) = local_20._4_4_;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x10) = local_18.Data;
  *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_10;
  *(undefined4 *)(pFVar6 + 0x1c) = local_10._4_4_;
  local_10 = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 142b81210

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses'::__l13::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FTopLevelAssetPath local_18;
  
  FAssetData::GetTagValueRef<FString>(param_1,&local_48,FBlueprintTags::GeneratedClassPath);
  FAssetData::GetTagValueRef<FString>(param_1,&local_58,FBlueprintTags::ParentClassPath);
  if ((1 < local_48.Data.ArrayNum) && (1 < local_58.Data.ArrayNum)) {
    pFVar6 = FPackageName::ExportTextPathToObjectPath((FString *)&local_28,&local_48);
    local_78.PackageName.ComparisonIndex.Value = 0;
    local_78.PackageName.Number = 0;
    local_78.AssetName.ComparisonIndex.Value = 0;
    local_78.AssetName.Number = 0;
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar9 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar7 = 0;
    }
    local_38.Size = iVar7;
    FTopLevelAssetPath::TrySetPath(&local_78,&local_38);
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    pFVar6 = FPackageName::ExportTextPathToObjectPath((FString *)&local_18,&local_58);
    local_68.PackageName.ComparisonIndex.Value = 0;
    local_68.PackageName.Number = 0;
    local_68.AssetName.ComparisonIndex.Value = 0;
    local_68.AssetName.Number = 0;
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar9 = (pFVar6->Data).ArrayNum;
    local_28.Size = iVar9 + -1;
    if (iVar9 == 0) {
      local_28.Size = 0;
    }
    local_38.Size = local_28.Size;
    local_28._12_4_ = local_38._12_4_;
    local_28.DataPtr = local_38.DataPtr;
    FTopLevelAssetPath::TrySetPath(&local_68,&local_28);
    if (local_18.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_18.PackageName);
    }
    FVar3 = local_78.AssetName;
    lVar1 = *(longlong *)this;
    uVar4 = ::GetTypeHash(local_78.AssetName.ComparisonIndex);
    FVar2 = local_78.PackageName;
    uVar5 = ::GetTypeHash(local_78.PackageName.ComparisonIndex);
    uVar5 = uVar5 + FVar2.Number;
    if (*(int *)(lVar1 + 0x648) != *(int *)(lVar1 + 0x674)) {
      lVar8 = *(longlong *)(lVar1 + 0x680);
      if (*(longlong *)(lVar1 + 0x680) == 0) {
        lVar8 = lVar1 + 0x678;
      }
      iVar9 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar1 + 0x688) - 1U &
                               (uVar5 * 0x40 + FVar3.Number + uVar4 + (uVar5 >> 2) + 0x9e3779b9 ^
                               uVar5)) * 4);
      if (iVar9 != -1) {
        lVar1 = *(longlong *)(lVar1 + 0x640);
        do {
          lVar8 = (longlong)iVar9;
          if ((*(FName *)(lVar1 + lVar8 * 0x28) == local_78.PackageName) &&
             (*(FName *)(lVar1 + 8 + lVar8 * 0x28) == local_78.AssetName)) {
            if (iVar9 != -1) goto LAB_142b81409;
            break;
          }
          iVar9 = *(int *)(lVar1 + 0x20 + lVar8 * 0x28);
        } while (iVar9 != -1);
      }
    }
    local_18.PackageName = local_68.PackageName;
    local_18.AssetName = local_68.AssetName;
    TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
    ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
              ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                *)(*(longlong *)this + 0x640),&local_78,&local_18);
    *(undefined1 *)(*(longlong *)this + 0x7a0) = 1;
  }
LAB_142b81409:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 142b81450

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted'::__l13::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FAssetData *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FAssetData **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b81500

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles'::__l13::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  ForElementType<FAssetData_const_*> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FAssetData_const_*> FVar6;
  FAssetData *local_res10 [3];
  
  FVar1 = *(ForElementType<FAssetData_const_*> *)this;
  FVar6 = *(ForElementType<FAssetData_const_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FAssetData_const_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<FAssetData_const_*>)0x0) {
    FVar6 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 <
      (FAssetData **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x14) * 8))) {
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
  iVar5 = *(int *)((longlong)FVar1 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
                      (0x808,(ForElementType<FAssetData_const_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x14));
  }
  *(int *)((longlong)FVar1 + 0x10) = iVar5 + 1;
  FVar6 = *(ForElementType<FAssetData_const_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FAssetData_const_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<FAssetData_const_*>)0x0) {
    FVar6 = FVar1;
  }
  *(FAssetData **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b815c0

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l2::<lambda_2>::operator()
          (void *this,FName param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  FString *pFVar4;
  FName local_res10 [3];
  FString local_18;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  local_res10[0] = param_1;
  pFVar4 = ::FName::ToString(local_res10,&local_18);
  iVar3 = *(int *)(lVar2 + 0x20);
  if (iVar3 == *(int *)(lVar2 + 0x24)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(lVar2 + 0x18),(int *)(lVar2 + 0x24));
  }
  *(int *)(lVar2 + 0x20) = iVar3 + 1;
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  *puVar1 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar1 + 1) = (pFVar4->Data).ArrayNum;
  *(int *)((longlong)puVar1 + 0xc) = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  *(undefined4 *)(puVar1 + 2) = 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142b817c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::
operator()(void *this,ELoadResult param_1,FAssetRegistryState *param_2)

{
  longlong *plVar1;
  undefined1 auStack_328 [32];
  undefined1 local_308 [16];
  TUniqueFunction<void___cdecl(void)> local_2f8;
  undefined1 local_2c8 [688];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2f8._0_8_ = 0;
  local_2f8._40_8_ = 0;
  local_2c8[0] = param_1;
  FAssetRegistryState::FAssetRegistryState((FAssetRegistryState *)(local_2c8 + 8),param_2);
  local_2c8._640_8_ = *(undefined8 *)this;
  local_2c8._680_8_ = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  local_2c8._672_8_ = *(undefined8 *)((longlong)this + 0x20);
  local_2c8._656_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_2c8._664_8_ = *(undefined8 *)((longlong)this + 0x18);
  if (local_2c8._640_8_ != 0) {
    *(undefined8 *)this = 0;
  }
  Async<__UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_2>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_308,TaskGraph,(<lambda_1> *)local_2c8,&local_2f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_308._8_8_);
  if (local_2c8._640_8_ != 0) {
    plVar1 = (longlong *)(local_2c8 + 0x290);
    if ((longlong *)local_2c8._680_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_2c8._680_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FAssetRegistryState::~FAssetRegistryState((FAssetRegistryState *)(local_2c8 + 8));
  return;
}

// operator() @ 142b819a0

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()
          (void *this,FResults *param_1)

{
  uint uVar1;
  uint uVar2;
  FName *pFVar3;
  int iVar4;
  FName local_res8;
  FName local_res10;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x18);
  ``UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()'::
  __l2::<lambda_1>::operator()
            (&local_28,
             *(TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **)this
             ,&param_1->Assets);
  ``UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()'::
  __l2::<lambda_1>::operator()
            (&local_28,
             *(TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **)this
             ,&param_1->AssetsForGameThread);
  uVar1 = (param_1->VerseFiles).AfterBack;
  uVar2 = (param_1->VerseFiles).Front;
  for (iVar4 = 0; iVar4 != uVar1 - uVar2; iVar4 = iVar4 + 1) {
    pFVar3 = TRingBuffer<FName,TSizedDefaultAllocator<32>_>::operator[](&param_1->VerseFiles,iVar4);
    local_res10 = *pFVar3;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               &local_res8,(bool *)&local_res10);
  }
  return;
}

// operator() @ 142b81a40

/* WARNING: Removing unreachable block (ram,0x000142b81bc4) */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l23::<lambda_3>::operator()
          (void *this,TTuple<FName,FAssetTagValueRef> *param_1)

{
  FName FVar1;
  TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar2;
  TOptional<FAssetDataTagMap> *this_00;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TTuple<FName,FString> *pTVar6;
  FAssetDataTagMap *pFVar7;
  FString local_48;
  FString local_38;
  FAssetDataTagMap local_28;
  
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar1.Number = *(uint *)&param_1->field_0x4;
  if ((char)(*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
              ((longlong)this + 8))[1].Pairs.ArrayNum == '\0') {
    bVar4 = FAssetDataTagMapSharedView::Contains
                      ((FAssetDataTagMapSharedView *)(*(longlong *)this + 0x38),FVar1);
    if (!bVar4) {
      this_00 = *(TOptional<FAssetDataTagMap> **)((longlong)this + 8);
      pFVar7 = FAssetDataTagMapSharedView::CopyMap
                         ((FAssetDataTagMapSharedView *)(*(longlong *)this + 0x38),&local_28);
      TOptional<FAssetDataTagMap>::Emplace<FAssetDataTagMap>(this_00,pFVar7);
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_);
      if ((TTuple<FName,FString> *)local_28._padding_ != (TTuple<FName,FString> *)0x0) {
        FMemory::Free((void *)local_28._padding_);
      }
      pTVar2 = *(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                ((longlong)this + 8);
      if (((char)pTVar2[1].Pairs.ArrayNum == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&param_1->field_0x8,&local_38);
      pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
               AllocateMemoryForEmplace<FName_const_&>(pTVar2,(FName *)param_1);
      *(undefined8 *)pTVar6 = *(undefined8 *)param_1;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(FScriptContainerElement **)&pTVar6->field_0x8 = local_38.Data.AllocatorInstance.Data;
      *(int *)&pTVar6->field_0x10 = local_38.Data.ArrayNum;
      *(int *)&pTVar6->field_0x14 = local_38.Data.ArrayMax;
    }
  }
  else {
    pFVar5 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                       (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                         ((longlong)this + 8),FVar1);
    if (pFVar5 == (FString *)0x0) {
      pTVar2 = *(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                ((longlong)this + 8);
      if (((char)pTVar2[1].Pairs.ArrayNum == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&param_1->field_0x8,&local_48);
      pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
               AllocateMemoryForEmplace<FName_const_&>(pTVar2,(FName *)param_1);
      *(undefined8 *)pTVar6 = *(undefined8 *)param_1;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(FScriptContainerElement **)&pTVar6->field_0x8 = local_48.Data.AllocatorInstance.Data;
      *(int *)&pTVar6->field_0x10 = local_48.Data.ArrayNum;
      *(int *)&pTVar6->field_0x14 = local_48.Data.ArrayMax;
    }
  }
  return;
}

// operator() @ 142b81ca0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l91::<lambda_3>::operator()
          (void *this,FDependsNode *param_1,FDependsNode *param_2,EDependencyCategory param_3,
          EDependencyProperty param_4,EManageSearchColorBit param_5)

{
  int *piVar1;
  FDependsNode *pFVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  EManageSearchColorBit EVar8;
  int iVar9;
  FSetManageReferencesNodeData *pFVar10;
  EDependencyProperty EVar11;
  EManageSearchColorBit EVar12;
  EManageSearchColorBit EVar13;
  EManageSearchColorBit EVar14;
  FDependsNode *local_res18 [2];
  FDependsNode *local_80;
  EManageSearchColorBit EStack_78;
  undefined4 uStack_74;
  FDependsNode *local_70;
  FDependsNode *local_68;
  FDependsNode *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  EDependencyCategory local_48;
  EDependencyProperty local_47;
  
  local_res18[0] = param_2;
  pFVar10 = SetManageReferences'::__l2::<lambda_1>::operator()
                      (*(void **)((longlong)this + 0x20),param_2);
  EVar8 = param_5 & ~pFVar10->VisitedByCurrentManager;
  if (EVar8 != None) {
    EVar14 = pFVar10->ManagedInEarlierRound & EVar8;
    EVar8 = ~pFVar10->ManagedInEarlierRound & EVar8;
    pFVar2 = *(FDependsNode **)this;
    if ((pFVar10->bDirectManagedInThisRound == false) || (local_4c = 4, param_1 == pFVar2)) {
      local_4c = 0;
    }
    local_4c = param_1 == pFVar2 | local_4c;
    local_60 = local_res18[0];
    local_58 = pFVar2->bScriptPath;
    local_54 = param_1->bScriptPath;
    local_50 = local_res18[0]->bScriptPath;
    local_47 = param_4;
    EVar13 = None;
    local_70 = pFVar2;
    local_68 = param_1;
    local_48 = param_3;
    EVar12 = None;
    if (EVar8 != None) {
      lVar3 = *(longlong *)((longlong)this + 8);
      if ((*(longlong *)(lVar3 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),&local_70);
      EVar13 = None;
      EVar12 = None;
      if ((((iVar9 != 0) && (EVar13 = None, EVar12 = EVar8, iVar9 != 1)) &&
          (EVar13 = EVar8, iVar9 != 2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                             ,0x27bf,L""), EVar13 = None, EVar12 = None, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (EVar14 != None) {
      lVar3 = *(longlong *)((longlong)this + 8);
      local_4c = local_4c | 2;
      if ((*(longlong *)(lVar3 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),&local_70);
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          EVar12 = EVar12 | EVar14;
        }
        else if (iVar9 == 2) {
          EVar12 = EVar12 | EVar14;
          EVar13 = EVar13 | EVar14;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                             ,0x27d4,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
    if (EVar12 != None) {
      pFVar10->VisitedByCurrentManager = pFVar10->VisitedByCurrentManager | EVar12;
      pFVar10->bModifiedByCurrentManager = true;
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((pFVar4->Data <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      *(FDependsNode **)(pFVar4->Data + (longlong)iVar9 * 8) = local_res18[0];
      EVar11 = None;
      if (param_1 == pFVar2) {
        EVar11 = Direct;
      }
      pFVar10->CurrentManagerProperties =
           pFVar10->CurrentManagerProperties | EVar11 | ((byte)EVar12 & 1) << 4;
      if ((EVar12 & 4) != None) {
        if (pFVar10->DebugInstigator[0] == (FDependsNode *)0x0) {
          pFVar10->DebugInstigator[0] = param_1;
        }
        if (pFVar10->DebugInstigator[1] == (FDependsNode *)0x0) {
          pFVar10->DebugInstigator[1] = param_1;
        }
      }
    }
    if (EVar13 != None) {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
      local_80 = local_res18[0];
      EStack_78 = EVar13;
      if (((pFVar4->Data <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      pFVar5 = pFVar4->Data;
      *(FDependsNode **)(pFVar5 + (longlong)iVar9 * 0x10) = local_80;
      *(ulonglong *)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = CONCAT44(uStack_74,EStack_78);
    }
  }
  return;
}

// operator() @ 142b82070

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (!param_4) {
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar4 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar4 = plVar1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(FDependsNode **)(*plVar1 + (longlong)iVar2 * 0x18) == param_1) {
            return;
          }
          iVar2 = *(int *)(*plVar1 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    uVar3 = *(uint *)&param_1->field_0xa0;
    param_1->bAllowShrinking = 0;
    FDependsNode::RemoveReferencer(param_1,*(FDependsNode **)this);
    *(uint *)&param_1->field_0xa0 =
         ((uVar3 >> 6 & 0xff) << 6 ^ *(uint *)&param_1->field_0xa0) & 0x40 ^
         *(uint *)&param_1->field_0xa0;
  }
  return;
}

// operator() @ 142b82200

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_4>::operator()
          (void *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  FDependsNode *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)((longlong)this + 8);
  iVar12 = 0;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar11 + 0x10)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar10 = *(longlong *)(lVar11 + 8);
  if (*(longlong *)(lVar11 + 8) == 0) {
    lVar10 = lVar11;
  }
  puVar5 = *(undefined8 **)(lVar10 + (longlong)param_1 * 8);
  this_00 = (FDependsNode *)*puVar5;
  FDependsNode::ClearDependencies(this_00,All);
  FDependsNode::SetIsDependencyListSorted(this_00,All,*(bool *)this);
  iVar4 = *(int *)(puVar5 + 6);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar5 + 3);
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)puVar5[5];
    if ((TBitArray<FDefaultBitArrayAllocator> *)puVar5[5] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    iVar16 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      iVar16 = iVar16 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b8231c;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar8 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res18;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_142b8231c:
  uVar15 = *(uint *)(puVar5 + 6);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(puVar5 + 2) - *(int *)((longlong)puVar5 + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)(puVar5 + 6);
  if (uVar15 != uVar8) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)puVar5[5];
    if ((TBitArray<FDefaultBitArrayAllocator> *)puVar5[5] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b82420;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_142b82420:
  while( true ) {
    if (*(int *)(puVar5 + 2) - *(int *)((longlong)puVar5 + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TPropertyCombinationSet<3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) && (TStack_60.Array == pTVar1)) break;
    FDependsNode::AddPackageDependencySet
              (this_00,*(FDependsNode **)(puVar5[1] + (longlong)TStack_60.CurrentBitIndex * 0x18),
               (TPropertyCombinationSet<3> *)
               (puVar5[1] + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  puVar13 = (undefined8 *)puVar5[0xb];
  iVar12 = *(int *)(puVar5 + 0xc);
  puVar2 = puVar13 + iVar12;
  while( true ) {
    if (*(int *)(puVar5 + 0xc) != iVar12) {
      `TCheckedPointerIterator<FDependsNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar13 == puVar2) break;
    FDependsNode::AddDependency(this_00,(FDependsNode *)*puVar13,SearchableName,None);
    puVar13 = puVar13 + 1;
  }
  return;
}

// operator() @ 142b825c0

void __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_5>::operator()
          (void *this,int param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FDependsNode *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FDependsNode **)(*plVar2 + (longlong)param_1 * 8);
  this_00->bAllowShrinking = 1;
  FDependsNode::SetIsReferencersSorted(this_00,*(bool *)((longlong)this + 8));
  return;
}

// AddAssetData @ 142b82d40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddAssetData
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetData *param_2)

{
  int *piVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FNameEntryId FVar10;
  ForElementType<FSetElementId> FVar11;
  FAssetData *this_00;
  FString local_78;
  FString local_68;
  FTopLevelAssetPath local_58;
  FTopLevelAssetPath local_48;
  FTopLevelAssetPath local_38;
  undefined1 local_28 [16];
  
  FAssetRegistryState::AddAssetData(&this->State,param_2);
  iVar6 = (param_1->AssetEvents).ArrayNum;
  piVar1 = &(param_1->AssetEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(param_1->AssetEvents).AllocatorInstance,piVar1);
  }
  (param_1->AssetEvents).ArrayNum = iVar6 + 1;
  this_00 = (FAssetData *)((param_1->AssetEvents).AllocatorInstance.Data + (longlong)iVar6 * 0x70);
  FAssetData::FAssetData(this_00,param_2);
  this_00[1].PackageName.ComparisonIndex.Value = 0;
  FVar2 = (param_2->AssetClassPath).AssetName;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_2->AssetClassPath).PackageName;
  uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar8 = uVar8 + FVar3.Number;
  if (*(int *)&(this->ClassGeneratorNames).Elements.field_0x8 !=
      *(int *)&(this->ClassGeneratorNames).Elements.field_0x34) {
    FVar11 = (this->ClassGeneratorNames).Hash.SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&(this->ClassGeneratorNames).Hash;
    }
    iVar6 = *(int *)((longlong)FVar11 +
                    (ulonglong)
                    ((this->ClassGeneratorNames).HashSize - 1U &
                    (uVar8 * 0x40 + uVar7 + FVar2.Number + -0x61c88647 + (uVar8 >> 2) ^ uVar8)) * 4)
    ;
    if (iVar6 != -1) {
      lVar4 = *(longlong *)&(this->ClassGeneratorNames).Elements;
      do {
        lVar9 = (longlong)iVar6;
        if ((*(FName *)(lVar4 + lVar9 * 0x18) == (param_2->AssetClassPath).PackageName) &&
           (*(FName *)(lVar4 + 8 + lVar9 * 0x18) == (param_2->AssetClassPath).AssetName)) {
          if (iVar6 == -1) {
            return;
          }
          FAssetData::GetTagValueRef<FString>(param_2,&local_68,FBlueprintTags::GeneratedClassPath);
          FAssetData::GetTagValueRef<FString>(param_2,&local_78,FBlueprintTags::ParentClassPath);
          if ((1 < local_68.Data.ArrayNum) && (1 < local_78.Data.ArrayNum)) {
            uVar7 = local_68.Data.ArrayNum - 1;
            if (local_68.Data.ArrayNum == 0) {
              uVar7 = 0;
            }
            if ((uVar7 != 4) ||
               (iVar6 = FGenericPlatformStricmp::Strnicmp
                                  (L"None",(wchar_t *)local_68.Data.AllocatorInstance.Data,4),
               iVar6 != 0)) {
              uVar7 = local_78.Data.ArrayNum - 1;
              if (local_78.Data.ArrayNum == 0) {
                uVar7 = 0;
              }
              if ((uVar7 != 4) ||
                 (iVar6 = FGenericPlatformStricmp::Strnicmp
                                    (L"None",(wchar_t *)local_78.Data.AllocatorInstance.Data,4),
                 iVar6 != 0)) {
                local_48.PackageName = (FName)local_68.Data.AllocatorInstance.Data;
                local_38.PackageName.ComparisonIndex.Value = 0;
                local_38.PackageName.Number = 0;
                local_28._8_4_ = local_68.Data.ArrayNum - 1;
                if (local_68.Data.ArrayNum == 0) {
                  local_28._8_4_ = 0;
                }
                local_38.AssetName.ComparisonIndex.Value = 0;
                local_38.AssetName.Number = 0;
                local_48.AssetName.ComparisonIndex.Value = local_28._8_4_;
                local_28._0_8_ = local_68.Data.AllocatorInstance.Data;
                local_28._12_4_ = local_48.AssetName.Number;
                FTopLevelAssetPath::TrySetPath(&local_38,(TStringView<wchar_t> *)local_28);
                local_48.PackageName.ComparisonIndex.Value = 0;
                local_48.PackageName.Number = 0;
                local_48.AssetName.ComparisonIndex.Value = 0;
                local_48.AssetName.Number = 0;
                FTopLevelAssetPath::TrySetPath(&local_48,param_2->PackageName,local_38.AssetName);
                local_58.PackageName.ComparisonIndex.Value = 0;
                local_58.PackageName.Number = 0;
                local_58.AssetName.ComparisonIndex.Value = 0;
                local_58.AssetName.Number = 0;
                FVar10.Value = local_78.Data.ArrayNum - 1;
                if (local_78.Data.ArrayNum == 0) {
                  FVar10.Value = 0;
                }
                local_28._8_4_ = FVar10.Value;
                local_28._0_8_ = local_78.Data.AllocatorInstance.Data;
                FTopLevelAssetPath::TrySetPath(&local_58,(TStringView<wchar_t> *)local_28);
                if ((local_48.PackageName == (FName)0x0) || (local_58.PackageName == (FName)0x0)) {
                  local_28._0_8_ = &local_68;
                  local_28._8_8_ = &local_78;
                  bVar5 = `UE::AssetRegistry::FAssetRegistryImpl::AddAssetData'::__l12::<lambda_1>::
                          operator()(local_28);
                  if (!bVar5) goto LAB_142b82feb;
                }
                local_28._0_4_ = local_58.PackageName.ComparisonIndex.Value;
                local_28._4_4_ = local_58.PackageName.Number;
                local_28._8_4_ = local_58.AssetName.ComparisonIndex.Value;
                local_28._12_4_ = local_58.AssetName.Number;
                TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
                          ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                            *)&this->CachedBPInheritanceMap,&local_48,(FTopLevelAssetPath *)local_28
                          );
                (this->TempCachedInheritanceBuffer).bDirty = true;
              }
            }
          }
LAB_142b82feb:
          if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if ((FName)local_68.Data.AllocatorInstance.Data == (FName)0x0) {
            return;
          }
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          return;
        }
        iVar6 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}

// AddAssetPath @ 142b83030

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath
          (FAssetRegistryImpl *this,FEventContext *param_1,FName param_2)

{
  bool bVar1;
  FAssetRegistryImpl *local_28;
  FEventContext *local_20;
  code *local_18;
  FAssetRegistryImpl **local_10;
  
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  bVar1 = FPathTree::CachePath
                    (&this->CachedPathTree,param_2,(TFunctionRef<void___cdecl(FName)> *)&local_18);
  return bVar1;
}

// AddCachedBPClassParent @ 142b83080

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddCachedBPClassParent
          (FAssetRegistryImpl *this,FTopLevelAssetPath *param_1,FTopLevelAssetPath *param_2)

{
  FTopLevelAssetPath local_18;
  
  local_18.PackageName = param_2->PackageName;
  local_18.AssetName = param_2->AssetName;
  TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
  ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
            ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
              *)&this->CachedBPInheritanceMap,param_1,&local_18);
  return;
}

// AddEmptyPackage @ 142b830b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddEmptyPackage(FAssetRegistryImpl *this,FName param_1)

{
  FName local_res8;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->CachedEmptyPackages,&local_res8,(bool *)local_res10);
  return;
}

// AddNonOverlappingTags @ 142b830e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddNonOverlappingTags
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetData *param_2,FAssetData *param_3)

{
  int *piVar1;
  int iVar2;
  FAssetData *this_00;
  <lambda_1> local_38;
  TOptional<FAssetDataTagMap> local_28;
  
  local_28.bIsSet = false;
  local_38.ModifiedTags = &local_28;
  local_38.ExistingAssetData = param_2;
  FAssetDataTagMapSharedView::
  ForEach<_UE::AssetRegistry::Utils::AddNonOverlappingTags_::__l2::<lambda_1>_>
            (&param_3->TagsAndValues,&local_38);
  if (local_28.bIsSet != false) {
    FAssetRegistryState::SetTagsOnExistingAsset(&this->State,param_2,&local_28.TypedValue);
    iVar2 = (param_1->AssetEvents).ArrayNum;
    piVar1 = &(param_1->AssetEvents).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,&(param_1->AssetEvents).AllocatorInstance,piVar1);
    }
    (param_1->AssetEvents).ArrayNum = iVar2 + 1;
    this_00 = (FAssetData *)((param_1->AssetEvents).AllocatorInstance.Data + (longlong)iVar2 * 0x70)
    ;
    FAssetData::FAssetData(this_00,param_2);
    this_00[1].PackageName.ComparisonIndex.Value = 2;
    if (local_28.bIsSet != false) {
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)local_28.TypedValue._padding_,
                 (int)local_28.TypedValue._padding_);
      if ((TTuple<FName,FString> *)local_28.TypedValue._padding_ != (TTuple<FName,FString> *)0x0) {
        FMemory::Free((void *)local_28.TypedValue._padding_);
      }
    }
  }
  return;
}

// AddPath @ 142b831f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddPath
          (FAssetRegistryImpl *this,FEventContext *param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res8;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  TStringView<wchar_t> local_28;
  
  bVar2 = false;
  if ((this->GlobalGatherer).Ptr != (FAssetDataGatherer *)0x0) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.Size = param_2->Size;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_38 = (undefined1  [8])0x0;
    uStack_30._0_4_ = 0;
    uStack_30._4_4_ = 0;
    local_48 = (undefined1  [8])0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    bVar1 = FPackageName::TryConvertLongPackageNameToFilename
                      (&local_28,(FString *)local_48,(TStringView<wchar_t> *)local_38);
    if (bVar1) {
      local_38 = local_48;
      local_28.Size = (int)local_40 + -1;
      if ((int)local_40 == 0) {
        local_28.Size = 0;
      }
      uStack_30._0_4_ = local_28.Size;
      local_28.DataPtr = (wchar_t *)local_48;
      local_28._12_4_ = uStack_30._4_4_;
      bVar2 = FAssetDataGatherer::IsOnDenyList((this->GlobalGatherer).Ptr,&local_28);
    }
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if (bVar2 != false) {
      return false;
    }
  }
  pFVar3 = ::FName::FName(&local_res8,(int)*(undefined8 *)&param_2->Size,param_2->DataPtr,FNAME_Add)
  ;
  local_40 = local_38;
  local_48 = (undefined1  [8])
             Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
             ::Call;
  local_38 = (undefined1  [8])this;
  uStack_30 = param_1;
  bVar2 = FPathTree::CachePath
                    (&this->CachedPathTree,*pFVar3,(TFunctionRef<void___cdecl(FName)> *)local_48);
  return bVar2;
}

// AddVerseFile @ 142b83540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AddVerseFile
          (FAssetRegistryImpl *this,FEventContext *param_1,FName param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TStringView<wchar_t> *pTVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  uint uVar10;
  FName local_res18;
  undefined1 auStack_538 [32];
  FName *local_518;
  FName local_510;
  longlong local_508;
  longlong local_500;
  undefined8 local_4f8;
  char local_4e8;
  FName local_4e0;
  int local_4d8;
  undefined1 local_4d4 [12];
  TStringView<wchar_t> local_4c8;
  wchar_t *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  FName local_4a8 [2];
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  wchar_t *local_478;
  undefined8 uStack_470;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [256];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_538;
  local_4e8 = '\0';
  local_res18 = param_2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->CachedVerseFiles,(FName *)local_4d4,(bool *)&local_res18);
  if (local_4e8 == '\0') {
    local_468.Base = local_448;
    local_468.CurPos = local_448;
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    local_468.End = (wchar_t *)&local_248;
    ::FName::AppendString(&local_res18,&local_468);
    local_4c8.DataPtr = local_468.Base;
    local_4c8.Size = (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1);
    pTVar7 = FPathViews::GetPath(&local_488,&local_4c8);
    local_478 = pTVar7->DataPtr;
    uStack_470 = *(undefined8 *)&pTVar7->Size;
    pFVar8 = ::FName::FName(local_4a8,(int)*(undefined8 *)&pTVar7->Size,local_478,FNAME_Add);
    local_4e0 = *pFVar8;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    local_248.Base = local_228;
    local_248.bIsDynamic = false;
    local_248.bIsExternal = false;
    local_248.CurPos = local_228;
    local_248.End = (wchar_t *)local_28;
    ::FName::AppendString(&local_4e0,&local_248);
    local_4b8 = local_248.Base;
    iStack_4b0 = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
    local_498._12_4_ = uStack_4ac;
    local_498.Size = iStack_4b0;
    local_498.DataPtr = local_248.Base;
    AddPath(this,param_1,&local_498);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
    FVar2 = local_4e0;
    this_00 = &this->CachedVerseFilesByPath;
    uVar5 = ::GetTypeHash(local_4e0.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar2.Number;
    if (*(int *)&(this->CachedVerseFilesByPath).field_0x8 !=
        *(int *)&(this->CachedVerseFilesByPath).field_0x34) {
      puVar9 = *(undefined1 **)&(this->CachedVerseFilesByPath).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->CachedVerseFilesByPath).field_0x38;
      }
      uVar10 = *(uint *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->CachedVerseFilesByPath).field_0x48 - 1U & uVar5)
                                  * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar8 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*pFVar8 == local_4e0) {
            if (pFVar8 != (FName *)0x0) goto LAB_142b83754;
            break;
          }
          uVar10 = pFVar8[3].ComparisonIndex.Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    local_4d4._4_8_ = &local_4e0;
    local_518 = (FName *)0x0;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_4d8,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar5,
               (bool *)(local_4d4 + 4));
    pFVar8 = (FName *)((longlong)local_4d8 * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_142b83754:
    FVar2 = pFVar8[1];
    if (((ulonglong)FVar2 <= &local_res18) &&
       (&local_res18 < (FName *)((longlong)FVar2 + (longlong)(int)pFVar8[2].Number * 8))) {
      local_500 = (longlong)(int)pFVar8[2].ComparisonIndex.Value;
      local_4f8 = 8;
      local_518 = &local_res18;
      local_510 = FVar2;
      local_508 = (longlong)(int)pFVar8[2].Number;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = pFVar8[2].ComparisonIndex.Value;
    if (uVar5 == pFVar8[2].Number) {
      uVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)(pFVar8 + 1),(int *)&pFVar8[2].Number);
    }
    pFVar8[2].ComparisonIndex.Value = uVar5 + 1;
    piVar1 = &(param_1->VerseEvents).ArrayMax;
    *(FName *)((longlong)pFVar8[1] + (longlong)(int)uVar5 * 8) = local_res18;
    iVar6 = (param_1->VerseEvents).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(param_1->VerseEvents).AllocatorInstance,piVar1);
    }
    (param_1->VerseEvents).ArrayNum = iVar6 + 1;
    pFVar8 = (FName *)((param_1->VerseEvents).AllocatorInstance.Data + (longlong)iVar6 * 0xc);
    *pFVar8 = local_res18;
    pFVar8[1].ComparisonIndex.Value = 0;
  }
  return;
}

// AppendState @ 142b83a10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AppendState
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetRegistryState *param_2,
          EAppendMode param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAssetData *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  FModuleManager *this_00;
  FName *pFVar8;
  FAssetData *pFVar9;
  FAssetRegistryAppendResult *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FAssetRegistryAppendResult local_48;
  
  pFVar10 = &local_48;
  if (!param_4) {
    pFVar10 = (FAssetRegistryAppendResult *)0x0;
  }
  local_48.AddedAssets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.AddedAssets.ArrayNum = 0;
  local_48.AddedAssets.ArrayMax = 0;
  local_48.UpdatedAssets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.UpdatedAssets.ArrayNum = 0;
  local_48.UpdatedAssets.ArrayMax = 0;
  if (bIsEngineModuleAvaliable) {
    bVar6 = true;
  }
  else {
    this_00 = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_res8,L"Engine");
    bVar6 = FModuleManager::IsModuleLoaded(this_00,*pFVar8);
    bIsEngineModuleAvaliable = bVar6;
  }
  Utils::UpdateSerializationOptions
            (&this->SerializationOptions,&this->CachedParsedFilterRules,(bool)(bVar6 ^ 1));
  FAssetRegistryState::InitializeFromExisting
            (&this->State,&param_2->CachedAssets,&param_2->CachedDependsNodes,
             &param_2->CachedPackageData,&this->SerializationOptions,param_3,pFVar10);
  CachePathsFromState(this,param_1,param_2);
  FPathTree::Shrink(&this->CachedPathTree);
  if (pFVar10 != (FAssetRegistryAppendResult *)0x0) {
    pFVar11 = (pFVar10->AddedAssets).AllocatorInstance.Data;
    iVar3 = (pFVar10->AddedAssets).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pFVar10->AddedAssets).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (pFVar11 == pFVar2) break;
      iVar7 = (param_1->AssetEvents).ArrayNum;
      piVar1 = &(param_1->AssetEvents).ArrayMax;
      pFVar4 = *(FAssetData **)pFVar11;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&(param_1->AssetEvents).AllocatorInstance,piVar1);
      }
      pFVar5 = (param_1->AssetEvents).AllocatorInstance.Data;
      (param_1->AssetEvents).ArrayNum = iVar7 + 1;
      pFVar9 = (FAssetData *)(pFVar5 + (longlong)iVar7 * 0x70);
      FAssetData::FAssetData(pFVar9,pFVar4);
      pFVar11 = pFVar11 + 8;
      pFVar9[1].PackageName.ComparisonIndex.Value = 0;
    }
    pFVar11 = (pFVar10->UpdatedAssets).AllocatorInstance.Data;
    iVar3 = (pFVar10->UpdatedAssets).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pFVar10->UpdatedAssets).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (pFVar11 == pFVar2) break;
      iVar7 = (param_1->AssetEvents).ArrayNum;
      piVar1 = &(param_1->AssetEvents).ArrayMax;
      pFVar4 = *(FAssetData **)pFVar11;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&(param_1->AssetEvents).AllocatorInstance,piVar1);
      }
      pFVar5 = (param_1->AssetEvents).AllocatorInstance.Data;
      (param_1->AssetEvents).ArrayNum = iVar7 + 1;
      pFVar9 = (FAssetData *)(pFVar5 + (longlong)iVar7 * 0x70);
      FAssetData::FAssetData(pFVar9,pFVar4);
      pFVar11 = pFVar11 + 8;
      pFVar9[1].PackageName.ComparisonIndex.Value = 2;
    }
  }
  if (local_48.UpdatedAssets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.UpdatedAssets.AllocatorInstance.Data);
  }
  if (local_48.AddedAssets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AddedAssets.AllocatorInstance.Data);
  }
  return;
}

// AssetSearchDataGathered @ 142b84d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::AssetSearchDataGathered
          (FAssetRegistryImpl *this,FEventContext *param_1,
          TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
          *param_2,TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                   *param_3,FInterruptionContext *param_4,
          TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *param_5,
          EDeferFlag param_6)

{
  FNumberlessPair *pFVar1;
  FNumberedPair *pFVar2;
  undefined8 *puVar3;
  FAssetData *this_00;
  ForElementType<int> FVar4;
  FAssetData *pFVar5;
  FName FVar6;
  FName FVar7;
  FAssetDataTagMap *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FAssetData **ppFVar13;
  long64 *plVar14;
  long64 lVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  FAssetData *pFVar19;
  uint uVar20;
  longlong lVar21;
  FNumberlessPair *pFVar22;
  FNumberedPair *pFVar23;
  undefined8 *puVar24;
  int iVar25;
  FAssetTagValueRef_u_0 FVar26;
  bool bVar27;
  undefined1 auStackY_258 [32];
  bool local_228;
  undefined1 local_226 [6];
  longlong local_220;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_218;
  FString local_210;
  FString local_200;
  FEventContext *local_1f0;
  FName local_1e8 [2];
  longlong *local_1d8;
  undefined1 auStack_1d0 [16];
  uint uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_1b0;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *local_1a8;
  undefined2 local_1a0;
  FAssetRegistryImpl *local_198;
  FNameEntryId local_190;
  undefined4 uStack_18c;
  FName local_178;
  FValueId local_170;
  FName local_168;
  FName FStack_160;
  TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> local_158;
  undefined8 local_148;
  FAssetTagValueRef_u_0 local_140;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> local_138;
  FName local_128;
  FAssetTagValueRef_u_0 local_120;
  undefined8 local_118;
  FAssetTagValueRef_u_0 local_110;
  FAssetRegistryImpl *local_108;
  FEventContext *local_100;
  code *local_f8;
  FAssetRegistryImpl **local_f0;
  FString local_e8;
  FCachedAssetKey local_d8;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_a0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_218 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)param_5;
  bVar27 = -1 < CpuChannel->Enabled;
  local_1f0 = param_1;
  local_198 = this;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7517,"AssetSearchDataGathered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1d5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7517);
  }
  CollectCodeGeneratorClasses(this);
  lVar21 = 0;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.ArrayNum = 0;
  local_210.Data.ArrayMax = 0;
  local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Data.ArrayNum = 0;
  local_200.Data.ArrayMax = 0;
  if ((0 < *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34) &&
     (this->bVerifyMountPointAfterGather != false)) {
    Utils::InitializeMountPoints(param_5);
  }
  bVar11 = false;
  local_98._0_8_ = 0;
  local_228 = false;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_220 = 0;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_c8,
             (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
              *)param_2);
  local_1a0 = 0;
  stack0xfffffffffffffe38 = local_c8._16_16_;
  local_1d8 = (longlong *)local_c8._0_8_;
  auStack_1d0._0_8_ = local_c8._8_8_;
  local_1b8 = local_a8;
  pTStack_1b0 = pTStack_a0;
  uVar16 = local_c8._24_8_ >> 0x20;
  uVar20 = local_c8._28_4_;
  local_1a8 = (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
               *)param_2;
  if ((int)uVar20 < *(int *)(local_c8._16_8_ + 0x18)) {
    do {
      if (bVar11 != false) break;
      this_00 = *(FAssetData **)(*local_1d8 + 8 + (longlong)(int)uVar16 * 0x18);
      *(undefined8 *)(*local_1d8 + 8 + (longlong)(int)uVar20 * 0x18) = 0;
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_1b0,uVar20);
      local_1a0 = CONCAT11(local_1a0._1_1_,1);
      bVar10 = ShouldSkipGatheredAsset(this,this_00);
      if (bVar10) {
        if (this_00 != (FAssetData *)0x0) {
          FVar4 = (this_00->ChunkIDs).AllocatorInstance.SecondaryData;
          if (FVar4 != (ForElementType<int>)0x0) {
            FMemory::Free((void *)FVar4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((this_00->TaggedAssetBundles).SharedReferenceCount.ReferenceController);
          FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&this_00->TagsAndValues);
          ::operator_delete(this_00,0x68);
        }
        lVar21 = lVar21 + 1;
        local_220 = lVar21;
        if (lVar21 == (lVar21 / 10) * 10) {
          local_228 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(param_4);
          bVar11 = local_228;
        }
      }
      else {
        local_1e8[0] = this_00->PackagePath;
        pFVar19 = this_00;
        if (this->bVerifyMountPointAfterGather == false) {
LAB_142b85063:
          this->bProcessedAnyAssetsAfterRetryDeferred = true;
          local_168 = this_00->PackageName;
          FStack_160 = this_00->AssetName;
          local_d8.OuterPath = local_168;
          local_d8.ObjectName = FStack_160;
          ppFVar13 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                     ::Find(&(this->State).CachedAssets,&local_d8);
          if ((ppFVar13 == (FAssetData **)0x0) || (pFVar5 = *ppFVar13, pFVar5 == (FAssetData *)0x0))
          {
            if (this->bVerboseLogging != false) {
              FVar6 = (this_00->AssetClassPath).AssetName;
              uVar20 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
              FVar7 = (this_00->AssetClassPath).PackageName;
              uVar12 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
              uVar12 = uVar12 + FVar7.Number;
              plVar14 = TMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
                        ::FindOrAddImpl<FTopLevelAssetPath_const_&>
                                  ((TMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
                                    *)&this->TagSizeByClass,
                                   uVar12 * 0x40 + uVar20 + FVar6.Number +
                                   (uVar12 >> 2) + 0x9e3779b9 ^ uVar12,&this_00->AssetClassPath);
              if ((*(byte *)&(this_00->TagsAndValues).field0_0x0 & 1) == 0) {
                pFVar8 = (this_00->TagsAndValues).field0_0x0.Loose;
                param_5 = (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                           *)local_218;
                lVar21 = local_220;
                if (pFVar8 != (FAssetDataTagMap *)0x0) {
                  iVar25 = (int)pFVar8->_padding_;
                  puVar24 = (undefined8 *)pFVar8->_padding_;
                  FVar26.Loose = (FString *)(puVar24 + 1);
                  puVar3 = puVar24 + (longlong)iVar25 * 3;
                  while( true ) {
                    if ((int)pFVar8->_padding_ != iVar25) {
                      local_226[0] = 0;
                      `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_226);
                    }
                    param_5 = (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                               *)local_218;
                    this = local_198;
                    lVar21 = local_220;
                    if (puVar24 == puVar3) break;
                    local_118 = *puVar24;
                    local_110 = FVar26;
                    lVar15 = FAssetTagValueRef::GetResourceSize
                                       ((FAssetTagValueRef *)&local_110.Fixed);
                    *plVar14 = *plVar14 + lVar15;
                    puVar24 = puVar24 + 3;
                    FVar26.Loose = (FString *)(FVar26.Bits + 0x18);
                  }
                }
              }
              else if ((*(byte *)&(this_00->TagsAndValues).field0_0x0 & 2) == 0) {
                FixedTagPrivate::FMapHandle::GetNumberedView
                          ((FMapHandle *)&this_00->TagsAndValues,&local_138);
                pFVar2 = local_138.DataPtr + local_138.ArrayNum;
                for (pFVar23 = local_138.DataPtr;
                    param_5 = (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                               *)local_218, lVar21 = local_220, pFVar23 != pFVar2;
                    pFVar23 = pFVar23 + 1) {
                  local_170 = pFVar23->Value;
                  local_178 = pFVar23->Key;
                  local_120.Bits =
                       ((ulonglong)*(ushort *)&(this_00->TagsAndValues).field0_0x0 &
                        0xfffffffffffffffc | 0xfffffffe00000000) << 0x1e |
                       (ulonglong)(uint)local_170;
                  local_128 = local_178;
                  lVar15 = FAssetTagValueRef::GetResourceSize((FAssetTagValueRef *)&local_120.Fixed)
                  ;
                  *plVar14 = *plVar14 + lVar15;
                }
              }
              else {
                FixedTagPrivate::FMapHandle::GetNumberlessView
                          ((FMapHandle *)&this_00->TagsAndValues,&local_158);
                pFVar1 = local_158.DataPtr + local_158.ArrayNum;
                param_5 = (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                           *)local_218;
                lVar21 = local_220;
                if (local_158.DataPtr != pFVar1) {
                  uStack_18c = 0;
                  pFVar22 = local_158.DataPtr;
                  do {
                    local_190.Value = (uint)(*pFVar22).Key;
                    local_148 = CONCAT44(uStack_18c,local_190.Value);
                    local_140.Bits =
                         ((ulonglong)*(ushort *)&(this_00->TagsAndValues).field0_0x0 &
                          0xfffffffffffffffc | 0xfffffffe00000000) << 0x1e |
                         (ulonglong)*pFVar22 >> 0x20;
                    lVar15 = FAssetTagValueRef::GetResourceSize
                                       ((FAssetTagValueRef *)&local_140.Fixed);
                    *plVar14 = *plVar14 + lVar15;
                    pFVar22 = pFVar22 + 1;
                    param_5 = (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                               *)local_218;
                    lVar21 = local_220;
                  } while (pFVar22 != pFVar1);
                }
              }
            }
            pFVar19 = (FAssetData *)0x0;
            AddAssetData(this,local_1f0,this_00);
          }
          else {
            if ((pFVar5 == this_00) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExistingAssetData == nullptr || ExistingAssetData != BackgroundResult.Get()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                    ,0x1db3,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            UpdateAssetData(this,local_1f0,pFVar5,this_00,false);
          }
          local_100 = local_1f0;
          local_f0 = &local_108;
          local_f8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
                     ::Call;
          local_108 = this;
          FPathTree::CachePath
                    (&this->CachedPathTree,local_1e8[0],
                     (TFunctionRef<void___cdecl(FName)> *)&local_f8);
          if (pFVar19 != (FAssetData *)0x0) goto LAB_142b8518b;
        }
        else {
          ::FName::ToString(local_1e8,&local_210);
          if ((*(int *)&(((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)param_5)
                        ->Elements).field_0xc == -1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar25 = local_210.Data.ArrayNum + -1;
          if (local_210.Data.ArrayNum == 0) {
            iVar25 = 0;
          }
          if (iVar25 < 2) {
LAB_142b850fa:
            if (local_210.Data.ArrayNum == 0) {
              pwVar18 = L"";
              iVar25 = 0;
            }
            else {
              iVar25 = local_210.Data.ArrayNum + -1;
              pwVar18 = (wchar_t *)local_210.Data.AllocatorInstance.Data;
            }
            uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar18);
            iVar25 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>
                               ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                param_5,uVar20,&local_210);
          }
          else {
            iVar25 = ::FString::Find(&local_210,L"/",1,CaseSensitive,FromStart,1);
            if (iVar25 == -1) {
              goto LAB_142b850fa;
            }
            ::FString::Reset(&local_200,iVar25);
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_210.Data.ArrayNum != 0) {
              FVar17.Data = local_210.Data.AllocatorInstance.Data;
            }
            ::FString::AppendChars(&local_200,(wchar_t *)FVar17.Data,iVar25);
            if (local_200.Data.ArrayNum == 0) {
              pwVar18 = L"";
              iVar25 = 0;
            }
            else {
              iVar25 = local_200.Data.ArrayNum + -1;
              pwVar18 = (wchar_t *)local_200.Data.AllocatorInstance.Data;
            }
            uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar18);
            iVar25 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>
                               ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                param_5,uVar20,&local_200);
          }
          if (iVar25 != -1) goto LAB_142b85063;
          if (3 < (byte)LogAssetRegistry._0_1_) {
            FAssetData::GetObjectPathString(this_00,&local_e8);
            Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
LAB_142b8518b:
          FVar4 = (pFVar19->ChunkIDs).AllocatorInstance.SecondaryData;
          if (FVar4 != (ForElementType<int>)0x0) {
            FMemory::Free((void *)FVar4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar19->TaggedAssetBundles).SharedReferenceCount.ReferenceController);
          FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&pFVar19->TagsAndValues);
          ::operator_delete(pFVar19,0x68);
        }
        lVar21 = lVar21 + 1;
        bVar11 = local_228;
        local_220 = lVar21;
        if (lVar21 == (lVar21 / 10) * 10) {
          local_228 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(param_4);
          bVar11 = local_228;
        }
      }
      uStack_1c0 = uStack_1c0 & ~auStack_1d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1d0);
      uVar16 = (ulonglong)uStack_1bc;
      uVar20 = uStack_1bc;
    } while ((int)uStack_1bc < *(int *)(auStack_1d0._8_8_ + 0x18));
    iVar25 = 1;
    if (((char)local_1a0 != '\0') && (local_1a0._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34;
      if (3 < uVar20) {
        uVar16 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar25 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_1a8->HashSize < iVar25)) || (iVar25 < local_1a8->HashSize)) {
        local_1a8->HashSize = iVar25;
        TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
        ::Rehash(local_1a8);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CachePathsFromState @ 142b87830

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::CachePathsFromState
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetRegistryState *param_2)

{
  bool bVar1;
  code *local_48;
  FAssetRegistryImpl **local_40;
  FAssetRegistryImpl *local_38;
  FAssetRegistrySerializationOptions *local_30;
  FEventContext *local_28;
  FScopedBootTiming local_20;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6487,"FAssetRegistryImpl::CachePathsFromState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1957);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6487);
  }
  FScopedBootTiming::FScopedBootTiming(&local_20,"FAssetRegistryImpl::CachePathsFromState");
  CollectCodeGeneratorClasses(this);
  local_30 = &this->SerializationOptions;
  local_40 = &local_38;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::CachePathsFromState'::__l2::<lambda_1>,void,FAssetData_const_&>
             ::Call;
  local_38 = this;
  local_28 = param_1;
  FAssetRegistryState::EnumerateAllAssets
            (param_2,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_48,AllowAll);
  FScopedBootTiming::~FScopedBootTiming(&local_20);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ClassRequiresGameThreadProcessing @ 142b881e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ClassRequiresGameThreadProcessing
          (FAssetRegistryImpl *this,UClass *param_1)

{
  return true;
}

// ClearGathererCache @ 142b887c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::FAssetRegistryImpl::ClearGathererCache(FAssetRegistryImpl *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  FAssetDataGatherer *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  atomic<unsigned_int> aVar13;
  atomic<unsigned_int> aVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  pFVar8 = (this->GlobalGatherer).Ptr;
  if (pFVar8 == (FAssetDataGatherer *)0x0) {
    return;
  }
  lpCriticalSection = &pFVar8->TickLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
  (pFVar8->TickLock).OwnerThreadId = aVar13;
  if ((pFVar8->bCacheWriteEnabled == (atomic<bool>)0x0) &&
     (pFVar8->bCacheReadEnabled == (atomic<bool>)0x0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  LOCK();
  pFVar8->bCacheWriteEnabled = (atomic<bool>)0x0;
  UNLOCK();
  LOCK();
  pFVar8->bCacheReadEnabled = (atomic<bool>)0x0;
  UNLOCK();
  iVar5 = pFVar8->CacheInUseCount;
  aVar13 = (pFVar8->TickLock).OwnerThreadId;
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar13 != aVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (pFVar8->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar10 = __real_3a83126f;
  if (bVar11) {
    while (0 < iVar5) {
      FWindowsPlatformProcess::Sleep(fVar10);
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("SynchObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x53,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
      (pFVar8->TickLock).OwnerThreadId = aVar13;
      iVar5 = pFVar8->CacheInUseCount;
      aVar13 = (pFVar8->TickLock).OwnerThreadId;
      aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar13 != aVar14) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLockedOnCurrentThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x2b,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (pFVar8->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("SynchObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x53,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
    pTVar3 = &pFVar8->NewCachedAssetDataMap;
    (pFVar8->TickLock).OwnerThreadId = aVar13;
    bVar11 = 1 < *(int *)&(pFVar8->NewCachedAssetDataMap).field_0x48;
    if (!bVar11) {
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                        *)pTVar3);
    }
    puVar1 = &(pFVar8->NewCachedAssetDataMap).field_0xc;
    *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
    }
    *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x34 = 0;
    iVar5 = *(int *)&(pFVar8->NewCachedAssetDataMap).field_0x2c;
    *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar8->NewCachedAssetDataMap).field_0x10
                 ,0);
    }
    if (bVar11) {
      *(undefined4 *)&(pFVar8->NewCachedAssetDataMap).field_0x48 = 1;
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                *)pTVar3);
    }
    pTVar3 = &pFVar8->DiskCachedAssetDataMap;
    bVar11 = 1 < *(int *)&(pFVar8->DiskCachedAssetDataMap).field_0x48;
    if (!bVar11) {
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                        *)pTVar3);
    }
    puVar1 = &(pFVar8->DiskCachedAssetDataMap).field_0xc;
    *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
    }
    *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x34 = 0;
    iVar5 = *(int *)&(pFVar8->DiskCachedAssetDataMap).field_0x2c;
    *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pFVar8->DiskCachedAssetDataMap).field_0x10,0);
    }
    if (bVar11) {
      *(undefined4 *)&(pFVar8->DiskCachedAssetDataMap).field_0x48 = 1;
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                *)pTVar3);
    }
    pFVar16 = (pFVar8->NewCachedAssetData).AllocatorInstance.Data;
    iVar5 = (pFVar8->NewCachedAssetData).ArrayNum;
    pFVar15 = pFVar16 + (longlong)iVar5 * 8;
    while( true ) {
      if ((pFVar8->NewCachedAssetData).ArrayNum != iVar5) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FDiskCachedAssetData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (pFVar16 == pFVar15) break;
      pvVar6 = *(void **)pFVar16;
      if (pvVar6 != (void *)0x0) {
        FPackageDependencyData::~FPackageDependencyData
                  ((FPackageDependencyData *)((longlong)pvVar6 + 0x30));
        DestructItems<FAssetData,int>
                  (*(FAssetData **)((longlong)pvVar6 + 0x20),*(int *)((longlong)pvVar6 + 0x28));
        if (*(void **)((longlong)pvVar6 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar6 + 0x20));
        }
        ::operator_delete(pvVar6,0x110);
      }
      pFVar16 = pFVar16 + 8;
    }
    piVar2 = &(pFVar8->NewCachedAssetData).ArrayMax;
    (pFVar8->NewCachedAssetData).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pFVar8->NewCachedAssetData).AllocatorInstance,0,piVar2);
    }
    iVar5 = (pFVar8->DiskCachedAssetBlocks).ArrayNum;
    pFVar15 = (pFVar8->DiskCachedAssetBlocks).AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((pFVar8->DiskCachedAssetBlocks).ArrayNum != iVar5) {
        auStackX_10[0] = 0;
        `TCheckedPointerIterator<TTuple<int,FDiskCachedAssetData_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_10);
      }
      if (pFVar15 == pFVar16) break;
      lVar7 = *(longlong *)(pFVar15 + 8);
      if (lVar7 != 0) {
        lVar17 = *(longlong *)(lVar7 + -8);
        if (lVar17 != 0) {
          puVar18 = (undefined8 *)(lVar17 * 0x110 + 0x20 + lVar7);
          do {
            puVar4 = puVar18 + -0x22;
            lVar17 = lVar17 + -1;
            FPackageDependencyData::~FPackageDependencyData
                      ((FPackageDependencyData *)(puVar18 + -0x20));
            DestructItems<FAssetData,int>((FAssetData *)*puVar4,*(int *)(puVar18 + -0x21));
            if ((void *)*puVar4 != (void *)0x0) {
              FMemory::Free((void *)*puVar4);
            }
            puVar18 = puVar4;
          } while (lVar17 != 0);
        }
        operator_delete__((longlong *)(lVar7 + -8),*(longlong *)(lVar7 + -8) * 0x110 + 8);
      }
      pFVar15 = pFVar15 + 0x10;
    }
    piVar2 = &(pFVar8->DiskCachedAssetBlocks).ArrayMax;
    (pFVar8->DiskCachedAssetBlocks).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar8->DiskCachedAssetBlocks).AllocatorInstance,0,piVar2);
    }
    aVar13 = (pFVar8->TickLock).OwnerThreadId;
    aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar13 != aVar14) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLockedOnCurrentThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x2b,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pFVar8->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CollectCodeGeneratorClasses @ 142b88b90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses(FAssetRegistryImpl *this)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  UClass *pUVar5;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FName *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  FTopLevelAssetPath local_res8;
  FLLMScope local_res18 [2];
  ELLMTagSet local_res20 [8];
  FAssetRegistryImpl *local_b8;
  FScriptContainerElement *local_b0;
  FMemScope local_a8;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_a0;
  FTopLevelAssetPath local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68 [2];
  
  FLLMScope::FLLMScope(local_res18,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,AssetRegistry,true);
  uVar4 = GetRegisteredNativeClassesVersionNumber();
  if (this->SavedGeneratorClassesVersionNumber != uVar4) {
    this->SavedGeneratorClassesVersionNumber = uVar4;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    GetClassPathBlueprintCore(&local_78);
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_res8);
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    local_88.PackageName = local_78.PackageName;
    local_88.AssetName = local_78.AssetName;
    pUVar5 = (UClass *)StaticFindObject(pUVar5,&local_88,None);
    if (pUVar5 == (UClass *)0x0) {
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_res8);
    }
    else {
      GetDerivedClasses(pUVar5,&local_a0,true);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_res8);
      UStruct::GetStructPathName((UStruct *)pUVar5,&local_88);
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      Emplace<FTopLevelAssetPath>(&this->ClassGeneratorNames,&local_res8,(bool *)&local_88);
      iVar3 = local_a0.ArrayNum;
      uVar7 = (ulonglong)local_a0.ArrayNum;
      pFVar9 = local_a0.AllocatorInstance.Data + uVar7 * 8;
      FVar10.Data = local_a0.AllocatorInstance.Data;
      local_b0 = pFVar9;
      while( true ) {
        if ((int)uVar7 != iVar3) {
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8.AssetName);
        }
        if (FVar10.Data == pFVar9) break;
        UStruct::GetStructPathName(*(UStruct **)FVar10.Data,&local_88);
        TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
        Emplace<FTopLevelAssetPath_const_&>
                  (&this->ClassGeneratorNames,(FTopLevelAssetPath *)&local_res18[2].TagSet,
                   (bool *)&local_88);
        if ((char)local_res8.PackageName.ComparisonIndex.Value == '\0') {
          local_68[0].PackageName = local_88.PackageName;
          local_68[0].AssetName = local_88.AssetName;
          local_b8 = this;
          pTVar6 = TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                   ::Find((TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                           *)&(this->State).CachedAssetsByClass,local_68);
          if (pTVar6 != (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar8 = (FName *)(pTVar6->AllocatorInstance).Data;
            iVar2 = pTVar6->ArrayNum;
            pFVar1 = pFVar8 + iVar2;
            while( true ) {
              if (pTVar6->ArrayNum != iVar2) {
                `TCheckedPointerIterator<FAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res8.AssetName);
              }
              pFVar9 = local_b0;
              if (pFVar8 == pFVar1) break;
              local_res8.AssetName = *pFVar8;
              Core::Private::Function::
              TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses'::__l13::<lambda_1>,bool,FAssetData_const_*>
              ::Call(&local_b8,(FAssetData **)&local_res8.AssetName);
              pFVar8 = pFVar8 + 1;
            }
          }
        }
        uVar7 = local_a0._8_8_ & 0xffffffff;
        FVar10.Data = FVar10.Data + 8;
      }
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// CompileFilter @ 142b88de0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::CompileFilter
          (FAssetRegistryImpl *this,FClassInheritanceContext *param_1,FARFilter *param_2,
          FARCompiledFilter *param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this_01;
  FName *pFVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FName FVar11;
  FString *pFVar12;
  UClass *pUVar13;
  FTopLevelAssetPath *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  uint uVar18;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_02;
  bool bVar19;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [6];
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  FName local_108;
  undefined1 local_100 [32];
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_e0;
  FName *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FTopLevelAssetPath local_b8;
  undefined1 local_a8 [16];
  TArrayView<FName_const_,int> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FTopLevelAssetPath local_58;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4240,"FAssetRegistryImpl::CompileFilter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1090);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4240);
  }
  FARCompiledFilter::Clear(param_3);
  local_d8 = (FName *)(param_2->PackageNames).AllocatorInstance.Data;
  iStack_d0 = (param_2->PackageNames).ArrayNum;
  if ((iStack_d0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98._12_4_ = uStack_cc;
  local_98.ArrayNum = iStack_d0;
  local_98.DataPtr = local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&param_3->PackageNames,&local_98);
  this_00 = &param_3->PackagePaths;
  local_100._24_8_ = this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reserve
            (this_00,(param_2->PackagePaths).ArrayNum);
  pFVar15 = (param_2->PackagePaths).AllocatorInstance.Data;
  iVar10 = (param_2->PackagePaths).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar10 * 8;
  while( true ) {
    if ((param_2->PackagePaths).ArrayNum != iVar10) {
      local_128 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if (pFVar15 == pFVar16) break;
    FVar11 = FPathTree::NormalizePackagePath((FName)local_a8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (this_00,&local_108,(bool *)FVar11);
    pFVar15 = pFVar15 + 8;
  }
  iVar10 = (param_2->SoftObjectPaths).ArrayNum;
  this_01 = &param_3->SoftObjectPaths;
  pFVar16 = (param_2->SoftObjectPaths).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(int *)&(param_3->SoftObjectPaths).Elements.field_0x8 -
          *(int *)&(param_3->SoftObjectPaths).Elements.field_0x34;
  uVar18 = uVar8 + iVar10;
  if (uVar8 < uVar18) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_01,uVar18);
    iVar9 = 1;
    if (3 < uVar18) {
      uVar2 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_108.Number = (uint)lVar4;
      iVar9 = 1 << ((byte)lVar4 & 0x1f);
    }
    iVar3 = (param_3->SoftObjectPaths).HashSize;
    if ((iVar3 == 0) || (iVar3 < iVar9)) {
      (param_3->SoftObjectPaths).HashSize = iVar9;
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash(this_01)
      ;
    }
  }
  pFVar15 = pFVar16 + (longlong)iVar10 * 0x20;
  for (; pFVar16 != pFVar15; pFVar16 = pFVar16 + 0x20) {
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
    Emplace<FSoftObjectPath_const_&>(this_01,(FSoftObjectPath *)local_100,(bool *)pFVar16);
  }
  if (((param_2->ClassNames).ArrayNum != 0) &&
     (local_100._16_8_ = param_2,
     bVar7 = `UE::AssetRegistry::FAssetRegistryImpl::CompileFilter'::__l7::<lambda_1>::operator()
                       (local_100 + 0x10), !bVar7)) {
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Reserve
              (&param_3->ClassPaths,(param_2->ClassNames).ArrayNum);
    pFVar17 = (FName *)(param_2->ClassNames).AllocatorInstance.Data;
    iVar10 = (param_2->ClassNames).ArrayNum;
    pFVar1 = pFVar17 + iVar10;
    while( true ) {
      if ((param_2->ClassNames).ArrayNum != iVar10) {
        local_127 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_127);
      }
      if (pFVar17 == pFVar1) break;
      local_110 = *pFVar17;
      if (local_110 == (FName)0x0) {
LAB_142b8912e:
        pFVar17 = pFVar17 + 1;
      }
      else {
        pFVar12 = ::FName::ToString(&local_110,&local_78);
        local_c8 = (pFVar12->Data).AllocatorInstance.Data;
        iVar9 = (pFVar12->Data).ArrayNum;
        iStack_c0 = iVar9 + -1;
        if (iVar9 == 0) {
          iStack_c0 = 0;
        }
        pUVar13 = Z_Construct_UClass_UStruct_NoRegister();
        local_88._12_4_ = uStack_bc;
        local_88.Size = iStack_c0;
        local_88.DataPtr = (wchar_t *)local_c8;
        UClass::TryConvertShortTypeNameToPathName
                  (&local_b8,pUVar13,&local_88,Warning,L"Compiling Asset Registry Filter");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_b8.PackageName == (FName)0x0) {
          if (1 < (byte)LogAssetRegistry._0_1_) {
            ::FName::ToString(&local_110,&local_68);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_142b8912e;
        }
        TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
        Emplace<FTopLevelAssetPath_const_&>
                  (&param_3->ClassPaths,(FTopLevelAssetPath *)(local_100 + 4),(bool *)&local_b8);
        pFVar17 = pFVar17 + 1;
      }
    }
  }
  iVar10 = (param_2->ClassPaths).ArrayNum;
  this_02 = &param_3->ClassPaths;
  pFVar16 = (param_2->ClassPaths).AllocatorInstance.Data;
  local_e0 = this_02;
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(int *)&(param_3->ClassPaths).Elements.field_0x8 -
          *(int *)&(param_3->ClassPaths).Elements.field_0x34;
  uVar18 = uVar8 + iVar10;
  if (uVar8 < uVar18) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
    }
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_02,uVar18);
    iVar9 = 1;
    if (3 < uVar18) {
      uVar2 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_100._8_4_ = (undefined4)lVar4;
      iVar9 = 1 << ((byte)lVar4 & 0x1f);
    }
    iVar3 = (param_3->ClassPaths).HashSize;
    if ((iVar3 == 0) || (iVar3 < iVar9)) {
      (param_3->ClassPaths).HashSize = iVar9;
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Rehash
                (this_02);
    }
  }
  pFVar15 = pFVar16 + (longlong)iVar10 * 0x10;
  for (; pFVar16 != pFVar15; pFVar16 = pFVar16 + 0x10) {
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
    Emplace<FTopLevelAssetPath_const_&>
              (this_02,(FTopLevelAssetPath *)(local_100 + 0xc),(bool *)pFVar16);
  }
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
               *)&param_3->TagsAndValues,
              (TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
               *)&param_2->TagsAndValues);
  param_3->bIncludeOnlyOnDiskAssets = param_2->bIncludeOnlyOnDiskAssets;
  param_3->WithoutPackageFlags = param_2->WithoutPackageFlags;
  param_3->WithPackageFlags = param_2->WithPackageFlags;
  if (param_2->bRecursivePaths != false) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId4286,"FAssetRegistryImpl::CompileFilter::AddPaths",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                 ,0x10be);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4286);
    }
    uVar6 = local_100._24_8_;
    pFVar17 = (FName *)(param_2->PackagePaths).AllocatorInstance.Data;
    iVar10 = (param_2->PackagePaths).ArrayNum;
    pFVar1 = pFVar17 + iVar10;
    while( true ) {
      if ((param_2->PackagePaths).ArrayNum != iVar10) {
        local_126[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_126);
      }
      this_02 = local_e0;
      if (pFVar17 == pFVar1) break;
      FPathTree::GetSubPaths
                (&this->CachedPathTree,*pFVar17,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)uVar6,true);
      pFVar17 = pFVar17 + 1;
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (param_2->bRecursiveClasses != false) {
    if ((*(int *)&(param_2->RecursiveClassPathsExclusionSet).Elements.field_0x8 -
         *(int *)&(param_2->RecursiveClassPathsExclusionSet).Elements.field_0x34 < 1) ||
       ((param_2->ClassPaths).ArrayNum != 0)) {
      GetSubClasses(this,param_1,&param_2->ClassPaths,&param_2->RecursiveClassPathsExclusionSet,
                    this_02);
    }
    else {
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.ArrayNum = 0;
      local_120.ArrayMax = 0;
      pFVar14 = GetClassPathObject(&local_58);
      if (((local_120.AllocatorInstance.Data <= pFVar14) &&
          (pFVar14 < (FTopLevelAssetPath *)
                     (local_120.AllocatorInstance.Data + (longlong)local_120.ArrayMax * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_120.ArrayNum;
      if (local_120.ArrayNum == local_120.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_120.AllocatorInstance,&local_120.ArrayMax);
      }
      local_120.ArrayNum = iVar10 + 1;
      FVar11 = pFVar14->AssetName;
      *(FName *)&local_120.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
           pFVar14->PackageName;
      *(FName *)(local_120.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) = FVar11;
      GetSubClasses(this,param_1,&local_120,&param_2->RecursiveClassPathsExclusionSet,this_02);
      if ((FTopLevelAssetPath *)local_120.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalClearGameThreadRequestedClasses @ 142b897f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ConditionalClearGameThreadRequestedClasses
          (FAssetRegistryImpl *this,FTickContext *param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  
  if ((*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 ==
       *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34) &&
     (this->bGameThreadRequestedClassesShouldProcess != (atomic<bool>)0x0)) {
    lpCriticalSection = &this->GameThreadRequestedClassesLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->GameThreadRequestedClasses;
    bVar3 = 1 < (this->GameThreadRequestedClasses).HashSize;
    if (!bVar3) {
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    puVar1 = &(this->GameThreadRequestedClasses).Elements.field_0xc;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->GameThreadRequestedClasses).Elements.field_0x2c;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->GameThreadRequestedClasses).Elements.field_0x10,0);
    }
    if (bVar3) {
      (this->GameThreadRequestedClasses).HashSize = 1;
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
    this->bGameThreadRequestedClassesShouldProcess = (atomic<bool>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ConditionalLoadPremadeAssetRegistry @ 142b89910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ConditionalLoadPremadeAssetRegistry
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FEventContext *param_2)

{
  FAsyncConsumer *pFVar1;
  int iVar2;
  FEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar2 = (this->AsyncConsumer).ReferenceCount;
  if (iVar2 != 0) {
    (this->AsyncConsumer).ReferenceCount = iVar2 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1->Lock);
    if ((this->AsyncConsumer).Consumed == (FEvent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Consumed != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x2d2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->AsyncConsumer).Consumed;
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)param_1->Lock);
    pFVar1 = &this->AsyncConsumer;
    pFVar1->ReferenceCount = pFVar1->ReferenceCount + -1;
    if (pFVar1->ReferenceCount == 0) {
      if ((this->AsyncConsumer).Consumed == (FEvent *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2da,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FGenericPlatformProcess::ReturnSynchEventToPool((this->AsyncConsumer).Consumed);
      (this->AsyncConsumer).Consumed = (FEvent *)0x0;
    }
  }
  return;
}

// ConditionalRetryGatherAssetsForGameThread @ 142b899f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ConditionalRetryGatherAssetsForGameThread
          (FAssetRegistryImpl *this,FTickContext *param_1)

{
  undefined1 *puVar1;
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  *this_00;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1->bIsInGameThread == false) &&
     (this->bGameThreadRequestedClassesShouldRetry != (atomic<bool>)0x0)) {
    iVar12 = 0;
    puVar1 = &(this->BackgroundResults).AssetsForGameThread.field_0x10;
    this->bGameThreadRequestedClassesShouldRetry = (atomic<bool>)0x0;
    iVar14 = 0;
    iVar4 = *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x28;
    uVar7 = 1;
    iVar8 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->BackgroundResults).AssetsForGameThread.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b89acd;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = local_res18 + -1 + iVar14;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
    }
LAB_142b89acd:
    uVar11 = *(uint *)&(this->BackgroundResults).AssetsForGameThread.field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 -
                         *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(this->BackgroundResults).AssetsForGameThread.field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(this->BackgroundResults).AssetsForGameThread.field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142b89bd0;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_142b89bd0:
    while( true ) {
      if (*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 -
          *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar2 = (FName *)(*(longlong *)&(this->BackgroundResults).AssetsForGameThread +
                        (longlong)TStack_60.CurrentBitIndex * 0x18);
      TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
      ::Emplace<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
                ((TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                  *)&this->BackgroundResults,pFVar2,
                 (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)(pFVar2 + 1));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    this_00 = &(this->BackgroundResults).AssetsForGameThread;
    bVar6 = 1 < *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x48;
    if (!bVar6) {
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8)
    ;
    puVar1 = &(this->BackgroundResults).AssetsForGameThread.field_0xc;
    *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x34 = 0;
    *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x30 = 0xffffffff;
    iVar4 = *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x2c;
    *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->BackgroundResults).AssetsForGameThread.field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->BackgroundResults).AssetsForGameThread.field_0x48 = 1;
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  return;
}

// ConsumeOrDeferPreloadedPremade @ 142b8a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade
          (FAssetRegistryImpl *this,UAssetRegistryImpl *param_1,FEventContext *param_2)

{
  bool bVar1;
  EConsumeResult EVar2;
  FEvent *pFVar3;
  undefined ***pppuVar4;
  code **ppcVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118 [40];
  longlong *local_f0;
  code *local_e8;
  undefined1 local_d8 [16];
  code *local_c8;
  code *local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FAssetRegistryImpl *local_a0;
  UAssetRegistryImpl *local_98;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78;
  FAssetRegistryImpl *local_70;
  FEventContext *local_68;
  undefined ***local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar1) && (bVar1 = FTaskGraphInterface::IsRunning(), bVar1)) {
    local_a8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_1>,0,0>
                ::_vftable_;
    local_b8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
                  ::Call;
    local_e8 = Core::Private::Function::
               TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
               ::Call;
    local_90 = (undefined ***)0x0;
    local_c0 = (code *)0x0;
    local_a0 = this;
    local_98 = param_1;
    Core::Private::Function::
    TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_a8,(FFunctionStorage *)local_d8);
    if (((this->AsyncConsumer).Consumed != (FEvent *)0x0) &&
       (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Consumed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2c0,L""), bVar1)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    (this->AsyncConsumer).ReferenceCount = (this->AsyncConsumer).ReferenceCount + 1;
    (this->AsyncConsumer).Consumed = pFVar3;
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x40,0x10);
    *local_30 = (code *)&Core::Private::Function::
                         TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>,0,1>
                         ::_vftable_;
    ppcVar5 = local_30 + 2;
    *ppcVar5 = local_e8;
    local_30[7] = local_c0;
    local_c0 = (code *)0x0;
    local_30[4] = (code *)local_d8._0_8_;
    local_30[5] = (code *)local_d8._8_8_;
    local_30[6] = local_c8;
    if (*ppcVar5 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    if (ppcVar5 != (code **)0x0) {
      local_58[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
                    ::Call;
    }
    Premade::FPreloader::ConsumeInternal
              (&Premade::GPreloader,
               (TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
                *)local_58,
               (TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
                *)local_b8);
    if (local_58[0] != (code *)0x0) {
      ppcVar5 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar5 = local_30;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_e8 != (code *)0x0) {
      pcVar6 = (code *)local_d8;
      if (local_c0 != (code *)0x0) {
        pcVar6 = local_c0;
      }
      (**(code **)(*(longlong *)pcVar6 + 0x10))();
    }
    if (local_b8[0] == (code *)0x0) {
      return;
    }
    pppuVar8 = &local_a8;
    pppuVar4 = local_90;
  }
  else {
    local_60 = (undefined ***)0x0;
    local_78 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`10'::<lambda_3>,0,0>
                ::_vftable_;
    local_88[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l10::<lambda_3>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
                  ::Call;
    local_118._0_8_ = 0;
    local_f0 = (longlong *)0x0;
    local_70 = this;
    local_68 = param_2;
    EVar2 = Premade::FPreloader::ConsumeInternal
                      (&Premade::GPreloader,
                       (TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
                        *)local_88,
                       (TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
                        *)local_118);
    if (local_118._0_8_ != 0) {
      plVar7 = (longlong *)(local_118 + 0x10);
      if (local_f0 != (longlong *)0x0) {
        plVar7 = local_f0;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((EVar2 == Deferred) &&
       (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result != EConsumeResult::Deferred",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x1ae,L""), bVar1)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_88[0] == (code *)0x0) {
      return;
    }
    pppuVar8 = &local_78;
    pppuVar4 = local_60;
  }
  if (pppuVar4 != (undefined ***)0x0) {
    pppuVar8 = pppuVar4;
  }
  (*(code *)(*pppuVar8)[2])();
  return;
}

// CookedPackageNamesWithoutAssetDataGathered @ 142b8a830

/* WARNING: Removing unreachable block (ram,0x000142b8aa80) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::CookedPackageNamesWithoutAssetDataGathered
          (FAssetRegistryImpl *this,FEventContext *param_1,
          TRingBuffer<FString,TSizedDefaultAllocator<32>_> *param_2,FInterruptionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_30;
  undefined8 local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8026,"CookedPackageNamesWithoutAssetDataGathered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1f5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8026);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetBool
                (GConfig,L"AssetRegistry",L"LoadCookedPackagesWithoutAssetData",
                 &ShouldProcessCookedPackages.bShouldProcess,&GEngineIni);
    }
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = param_2->Front;
  uVar2 = param_2->AfterBack;
  if (ShouldProcessCookedPackages.bShouldProcess == false) {
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange(param_2,uVar1,uVar2);
    param_2->Front = 0;
    param_2->AfterBack = 0;
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate(param_2,0);
  }
  else {
    iVar6 = uVar2 - uVar1;
    while (0 < iVar6) {
      if ((uVar2 == uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PopCount <= static_cast<SizeType>(Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3ec,
                             L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((int)(param_2->AfterBack - param_2->Front) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3e3,
                             L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar7 = (ulonglong)(param_2->IndexMask & param_2->Front);
      local_30 = *(undefined8 *)(pFVar3 + uVar7 * 0x10);
      *(undefined8 *)(pFVar3 + uVar7 * 0x10) = 0;
      local_28 = CONCAT44(*(undefined4 *)(pFVar3 + uVar7 * 0x10 + 0xc),
                          *(undefined4 *)(pFVar3 + uVar7 * 0x10 + 8));
      *(undefined8 *)(pFVar3 + uVar7 * 0x10 + 8) = 0;
      TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
                (param_2,param_2->Front,param_2->Front + 1);
      param_2->Front = param_2->Front + 1;
      pFVar3 = (param_1->RequiredLoads).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 <
           pFVar3 + (longlong)(param_1->RequiredLoads).ArrayMax * 0x10)) &&
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
      iVar6 = (param_1->RequiredLoads).ArrayNum;
      if (iVar6 == (param_1->RequiredLoads).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(param_1->RequiredLoads).AllocatorInstance,
                           &(param_1->RequiredLoads).ArrayMax);
      }
      lVar8 = (longlong)iVar6;
      (param_1->RequiredLoads).ArrayNum = iVar6 + 1;
      pFVar3 = (param_1->RequiredLoads).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar8 * 0x10) = 0;
      *(undefined8 *)(pFVar3 + lVar8 * 0x10) = local_30;
      *(undefined4 *)(pFVar3 + lVar8 * 0x10 + 8) = (undefined4)local_28;
      *(undefined4 *)(pFVar3 + lVar8 * 0x10 + 0xc) = local_28._4_4_;
      local_28 = 0;
      local_30 = 0;
      if (2 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      uVar2 = param_2->AfterBack;
      uVar1 = param_2->Front;
      iVar6 = uVar2 - uVar1;
    }
    if (0.0 < param_3->TickStartTime) {
      param_3->OutInterrupted = true;
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopySerializationOptions @ 142b8ab90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::CopySerializationOptions
          (FAssetRegistryImpl *this,FAssetRegistrySerializationOptions *param_1,
          ESerializationTarget param_2)

{
  longlong lVar1;
  
  lVar1 = 0x350;
  if (param_2 != ForGame) {
    lVar1 = 0x4a0;
  }
  FAssetRegistrySerializationOptions::operator=
            (param_1,(FAssetRegistrySerializationOptions *)
                     ((this->State).CachedAssets.Hash.InlineData + lVar1 + -0x78));
  return;
}

// DependencyDataGathered @ 142b8b480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered
          (FAssetRegistryImpl *this,
          TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
          *param_1,TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                   *param_2,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          FInterruptionContext *param_4,
          TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *param_5)

{
  TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *this_00;
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> FVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *pTVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  FDependsNode *pFVar7;
  code *pcVar8;
  FGatherDependencyDataScratchpad *pFVar9;
  FName *pFVar10;
  FDependsNode *pFVar11;
  FAssetRegistryImpl *pFVar12;
  longlong *plVar13;
  bool bVar14;
  int iVar15;
  TPropertyCombinationSet<3> TVar16;
  FAssetPackageData *this_01;
  FName *pFVar17;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar18;
  FName FVar19;
  FPackageDependencyData *pFVar20;
  ForAnyElementType FVar21;
  FCoreRedirectObjectName *pFVar22;
  UPackage *pUVar23;
  TPropertyCombinationSet<3> *pTVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined ***pppuVar27;
  undefined1 *puVar28;
  uint uVar29;
  int iVar30;
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> FVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  TBitArray<FDefaultBitArrayAllocator> *pTVar36;
  ForAnyElementType FVar37;
  FName *pFVar38;
  FScriptContainerElement *pFVar39;
  FGatherDependencyDataScratchpad *pFVar40;
  undefined1 *puVar41;
  uint uVar42;
  undefined8 *puVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auStackY_de8 [32];
  bool local_d98;
  bool local_d97;
  <lambda_1> local_d94 [4];
  int local_d90;
  bool local_d8c;
  bool local_d8b;
  char local_d8a;
  undefined1 local_d89;
  undefined1 local_d88;
  undefined1 local_d87;
  undefined1 local_d86;
  undefined1 local_d85;
  undefined1 local_d84;
  undefined1 local_d83;
  undefined1 local_d82 [2];
  uint **local_d80;
  uint local_d78;
  FName local_d70;
  FDependsNode *local_d68;
  FName *local_d60;
  FName local_d58;
  FGatherDependencyDataScratchpad *local_d50;
  EParallelForFlags local_d48;
  FDependsNode *local_d40;
  longlong local_d38;
  FName *local_d30;
  int local_d28;
  undefined1 local_d24 [12];
  FGatherDependencyDataScratchpad *local_d18;
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> local_d10;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *local_d08;
  FDependsNode *local_d00;
  FString local_cf8;
  FGatherDependencyDataScratchpad *local_ce8;
  int iStack_ce0;
  uint uStack_cdc;
  TBitArray<FDefaultBitArrayAllocator> *local_cd8;
  undefined4 uStack_cd0;
  int iStack_ccc;
  int local_cc8;
  undefined4 uStack_cc4;
  int iStack_cc0;
  undefined4 uStack_cbc;
  FString local_cb8;
  undefined8 local_ca8;
  FName local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  FAssetRegistryImpl *local_c80;
  TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  *local_c78;
  longlong *local_c68;
  undefined1 auStack_c60 [16];
  uint uStack_c50;
  uint uStack_c4c;
  longlong local_c48;
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  *pTStack_c40;
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  *local_c38;
  char local_c30;
  char local_c2f;
  undefined8 local_c28;
  int local_c20;
  int local_c1c;
  FName local_c18;
  FName *local_c10;
  int local_c08;
  int local_c04;
  FName local_c00;
  undefined4 local_bf8;
  undefined1 local_bf4 [4];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_bf0;
  FAssetIdentifier local_be0;
  FAssetIdentifier local_bc0;
  undefined1 local_ba0 [8];
  FGatherDependencyDataScratchpad *local_b98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b90;
  undefined8 uStack_b70;
  FGatherDependencyDataScratchpad *local_b68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b60;
  undefined8 uStack_b40;
  FAssetIdentifier local_b38;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_b18;
  undefined1 local_b10;
  TArrayView<std::nullptr_t,int> local_b08;
  code *local_af8;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> **local_af0;
  undefined1 local_ae8 [8];
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> *local_ae0;
  TArrayView<std::nullptr_t,int> local_ad8;
  code *local_ac8;
  undefined1 *local_ac0;
  FCoreRedirectObjectName local_ab8;
  undefined1 local_aa0 [32];
  longlong local_a80;
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  *pTStack_a78;
  FCoreRedirectObjectName local_a70 [2];
  undefined4 local_a3c;
  undefined4 local_a1c;
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> local_a18;
  uint local_a08;
  uint local_a04;
  FDependencyQuery local_a00;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  code *local_9b8 [2];
  undefined **local_9a8;
  FDependsNode *local_9a0;
  undefined8 *local_998;
  undefined ***local_990;
  undefined1 local_988 [96];
  void *local_928;
  undefined4 local_920;
  ForAnyElementType local_918;
  ForAnyElementType local_8e0;
  int local_8d8;
  ForAnyElementType local_8d0;
  int local_8c8;
  FDependsNodeReservations local_8c0;
  bool local_8b0;
  bool local_8af;
  TStringBuilderBase<wchar_t> local_8a8;
  wchar_t local_888 [1035];
  wchar_t local_72 [5];
  uint local_68 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_de8;
  local_d08 = param_5;
  bVar44 = -1 < CpuChannel->Enabled;
  local_d18 = (FGatherDependencyDataScratchpad *)param_3;
  local_d10 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)param_2;
  local_c80 = this;
  local_c78 = param_1;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7711,"DependencyDataGathered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1e1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7711);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    GetScriptPackageNameCoreUObject();
    GetScriptPackageNameEngine();
    GetScriptPackageNameBlueprintGraph();
    GetScriptPackageNameUnrealEd();
    ScriptPackagesToSkip.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ScriptPackagesToSkip.ArrayNum = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,4,0,&ScriptPackagesToSkip.AllocatorInstance,4,&ScriptPackagesToSkip.ArrayMax);
    FVar37 = ScriptPackagesToSkip.AllocatorInstance;
    *(undefined8 *)ScriptPackagesToSkip.AllocatorInstance.Data = local_9e0;
    *(undefined8 *)(FVar37.Data + 8) = uStack_9d8;
    *(undefined8 *)(FVar37.Data + 0x10) = local_9d0;
    *(undefined8 *)(FVar37.Data + 0x18) = uStack_9c8;
    atexit(`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::
           _dynamic_atexit_destructor_for__ScriptPackagesToSkip__);
    _Init_thread_footer(&::_TSS0);
  }
  FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_d94);
  local_d8a = this->bVerifyMountPointAfterGather;
  local_cb8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cb8.Data.ArrayNum = 0;
  local_cb8.Data.ArrayMax = 0;
  local_cf8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cf8.Data.ArrayNum = 0;
  local_cf8.Data.ArrayMax = 0;
  if ((bool)local_d8a != false) {
    Utils::InitializeMountPoints(param_5);
  }
  pFVar40 = (this->GatherDependencyDataScratchPad).Ptr;
  this_00 = &pFVar40->ModifiedDependNodes;
  local_d50 = pFVar40;
  local_d24._4_8_ = this_00;
  local_d00 = (FDependsNode *)&pFVar40->CachedDepToRedirect;
  TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
             *)pFVar40,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&pFVar40->CachedDepToRedirect,
             *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  uVar29 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if ((uint)(*(int *)&(pFVar40->ModifiedDependNodes).Elements.field_0x8 -
            *(int *)&(pFVar40->ModifiedDependNodes).Elements.field_0x34) < uVar29) {
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar29);
    if (uVar29 < 4) {
      iVar15 = 1;
    }
    else {
      uVar25 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_bf8 = (undefined4)lVar26;
      iVar15 = 1 << ((byte)lVar26 & 0x1f);
    }
    iVar30 = (pFVar40->ModifiedDependNodes).HashSize;
    if ((iVar30 == 0) || (iVar30 < iVar15)) {
      (pFVar40->ModifiedDependNodes).HashSize = iVar15;
      TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
             *)&(this->State).CachedPackageData,
            *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
             *)&(this->State).CachedDependsNodes,
            *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_d98 = false;
  local_d78 = 0;
  local_d48 = (EParallelForFlags)
              (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 < 0x401);
  bVar45 = -1 < CpuChannel->Enabled;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7751,"DependencyGatheredData_GatherPackages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1e47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7751);
  }
  if ((this->PerformanceMode == MostlyStatic) ||
     ((this->PerformanceMode == BulkLoading && (AssetRegistry::Impl::bDeferReferencerSort == false))
     )) {
    local_d97 = true;
  }
  else {
    local_d97 = false;
  }
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_aa0,
             (TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
              *)param_1);
  local_c2f = '\0';
  stack0xfffffffffffff3a8 = local_aa0._16_16_;
  local_c68 = (longlong *)local_aa0._0_8_;
  auStack_c60._0_8_ = local_aa0._8_8_;
  local_c48 = local_a80;
  pTStack_c40 = pTStack_a78;
  uVar25 = local_aa0._24_8_ >> 0x20;
  local_c38 = (TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
               *)param_1;
  if ((int)local_aa0._28_4_ < *(int *)(local_aa0._16_8_ + 0x18)) {
    uVar33 = (ulonglong)local_aa0._28_4_;
LAB_142b8b741:
    plVar13 = local_c68;
    iVar15 = (int)uVar33;
    lVar26 = *(longlong *)((longlong)(int)uVar25 * 0xf0 + *local_c68);
    uVar29 = ::GetTypeHash((FNameEntryId)(uint)lVar26);
    if (*(int *)&(this->DeferredAssets).field_0x8 != *(int *)&(this->DeferredAssets).field_0x34) {
      puVar41 = *(undefined1 **)&(this->DeferredAssets).field_0x40;
      puVar28 = &(this->DeferredAssets).field_0x38;
      if (puVar41 != (undefined1 *)0x0) {
        puVar28 = puVar41;
      }
      iVar30 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->DeferredAssets).field_0x48 - 1U &
                       uVar29 + (int)((ulonglong)lVar26 >> 0x20)) * 4);
      if (iVar30 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->DeferredAssets + (longlong)iVar30 * 0x18) == lVar26)
          goto LAB_142b8b9d7;
          iVar30 = *(int *)(*(longlong *)&this->DeferredAssets + 0x10 + (longlong)iVar30 * 0x18);
        } while (iVar30 != -1);
      }
    }
    lVar26 = *(longlong *)((longlong)iVar15 * 0xf0 + *plVar13);
    uVar29 = ::GetTypeHash((FNameEntryId)(uint)lVar26);
    if (*(int *)&(this->DeferredAssetsForGameThread).field_0x8 !=
        *(int *)&(this->DeferredAssetsForGameThread).field_0x34) {
      puVar41 = *(undefined1 **)&(this->DeferredAssetsForGameThread).field_0x40;
      puVar28 = &(this->DeferredAssetsForGameThread).field_0x38;
      if (puVar41 != (undefined1 *)0x0) {
        puVar28 = puVar41;
      }
      iVar30 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->DeferredAssetsForGameThread).field_0x48 - 1U &
                       uVar29 + (int)((ulonglong)lVar26 >> 0x20)) * 4);
      if (iVar30 != -1) {
        do {
          if (*(longlong *)
               (*(longlong *)&this->DeferredAssetsForGameThread + (longlong)iVar30 * 0x18) == lVar26
             ) goto LAB_142b8b9d7;
          iVar30 = *(int *)(*(longlong *)&this->DeferredAssetsForGameThread + 0x10 +
                           (longlong)iVar30 * 0x18);
        } while (iVar30 != -1);
      }
    }
    FPackageDependencyData::FPackageDependencyData
              ((FPackageDependencyData *)local_988,
               (FPackageDependencyData *)(*plVar13 + 8 + (longlong)iVar15 * 0xf0));
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::RemoveByIndex(pTStack_c40,iVar15);
    local_d70.ComparisonIndex.Value = local_988._0_4_;
    local_d70.Number = local_988._4_4_;
    local_c30 = '\x01';
    if (local_8b0 != false) {
      this_01 = FAssetRegistryState::CreateOrGetAssetPackageData
                          (&this->State,(FName)local_988._0_8_);
      FAssetPackageData::operator=(this_01,(FAssetPackageData *)(local_988 + 8));
    }
    FVar19 = local_d70;
    local_d8c = false;
    uVar29 = ::GetTypeHash(local_d70.ComparisonIndex.Value);
    pFVar40 = local_d50;
    if (*(int *)&(local_d50->AssetNameToConstructDataMap).field_0x8 !=
        *(int *)&(local_d50->AssetNameToConstructDataMap).field_0x34) {
      puVar41 = *(undefined1 **)&(local_d50->AssetNameToConstructDataMap).field_0x40;
      puVar28 = &(local_d50->AssetNameToConstructDataMap).field_0x38;
      if (puVar41 != (undefined1 *)0x0) {
        puVar28 = puVar41;
      }
      uVar29 = *(uint *)(puVar28 +
                        (ulonglong)
                        (*(int *)&(local_d50->AssetNameToConstructDataMap).field_0x48 - 1U &
                        uVar29 + FVar19.Number) * 4);
      if (uVar29 != 0xffffffff) {
        do {
          pFVar17 = (FName *)((longlong)(int)uVar29 * 0x78 +
                             *(longlong *)&local_d50->AssetNameToConstructDataMap);
          if (*pFVar17 == FVar19) {
            pFVar38 = pFVar17 + 1;
            if (pFVar17 == (FName *)0x0) {
              pFVar38 = (FName *)0x0;
            }
            local_d30 = pFVar38;
            if (pFVar38 != (FName *)0x0) goto LAB_142b8bbc9;
            break;
          }
          uVar29 = pFVar17[0xe].ComparisonIndex.Value;
        } while (uVar29 != 0xffffffff);
      }
    }
    if (local_d8a == '\0') {
LAB_142b8babf:
      local_be0.PackageName = local_d70;
      local_ca8 = 0;
      local_be0.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
      local_be0.PrimaryAssetType.Name.Number = 0;
      local_be0.ObjectName.ComparisonIndex.Value = 0;
      local_be0.ObjectName.Number = 0;
      local_be0.ValueName.ComparisonIndex.Value = 0;
      local_be0.ValueName.Number = 0;
      FVar19 = (FName)FAssetRegistryState::CreateOrFindDependsNode
                                (&this->State,&local_be0,&local_d8c);
      local_c18 = FVar19;
      if ((local_d8c == false) &&
         (pFVar20 = TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                    ::Find((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                            *)local_c78,local_d70), pFVar20 != (FPackageDependencyData *)0x0)) {
        FDependsNode::Reserve((FDependsNode *)FVar19,&pFVar20->DependsNodeReservations);
      }
      if (local_8af != false) {
        FDependsNode::Reserve((FDependsNode *)FVar19,&local_8c0);
        *(uint *)((longlong)FVar19 + 0xa0) = *(uint *)((longlong)FVar19 + 0xa0) & 0xffffffbf;
        FDependsNode::SetIsReferencersSorted((FDependsNode *)FVar19,local_d97);
        TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
        Emplace<FDependsNode_*_const_&>
                  (&pFVar40->ModifiedDependNodes,(FDependsNode **)local_bf4,(bool *)&local_c18);
        local_c10 = &local_d70;
        TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
                    *)pFVar40,(TKeyInitializer<FName_const_&> *)local_d24,(bool *)&local_c10);
        pFVar38 = (FName *)(*(longlong *)&pFVar40->AssetNameToConstructDataMap + 8 +
                           (longlong)(int)local_d24._0_4_ * 0x78);
        *(FName *)&pFVar38->ComparisonIndex = FVar19;
        local_d30 = pFVar38;
        if (pFVar38 != (FName *)0x0) {
LAB_142b8bbc9:
          local_d30 = pFVar38;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d18,
                     (FName *)local_ba0,(bool *)&local_d70);
          TSet<TTuple<FDependsNode_*,TPropertyCombinationSet<3>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>,FDefaultSetAllocator>
          ::Reserve((TSet<TTuple<FDependsNode_*,TPropertyCombinationSet<3>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>,FDefaultSetAllocator>
                     *)(pFVar38 + 1),local_8d8);
          iVar15 = local_8d8;
          pFVar17 = (FName *)(local_8e0.Data + (longlong)local_8d8 * 0xc);
          FVar37.Data = local_8e0.Data;
          iVar30 = local_d90;
          local_d60 = pFVar17;
          while( true ) {
            if (local_8d8 != iVar15) {
              local_d89 = 0;
              `TCheckedPointerIterator<FPackageDependencyData::FPackageDependency,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_d89);
            }
            pFVar10 = local_d30;
            if ((FName *)FVar37.Data == pFVar17) break;
            FVar19 = *(FName *)FVar37.Data;
            local_d58 = FVar19;
            if (((((FName *)((longlong)FVar37.Data + 8))->ComparisonIndex).Value & 1) != 0) {
              for (FVar21.Data = ScriptPackagesToSkip.AllocatorInstance.Data;
                  (FName *)FVar21.Data !=
                  (FName *)(ScriptPackagesToSkip.AllocatorInstance.Data +
                           (longlong)ScriptPackagesToSkip.ArrayNum * 8);
                  FVar21.Data = FVar21.Data + 8) {
                if (*(FName *)FVar21.Data == FVar19) goto LAB_142b8c047;
              }
            }
            local_ca0.ComparisonIndex.Value = 0;
            local_ca0.Number = 0;
            uVar29 = ::GetTypeHash(FVar19.ComparisonIndex.Value);
            pFVar17 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      ::FindOrAddImpl<FName_const_&,FName>
                                ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                  *)local_d00,FVar19.Number + uVar29,&local_d58,&local_ca0);
            FVar19 = *pFVar17;
            if (FVar19 == (FName)0x0) {
              local_c90 = 0;
              local_ab8.ObjectName.ComparisonIndex.Value = 0;
              local_ab8.ObjectName.Number = 0;
              local_ab8.OuterName.ComparisonIndex.Value = 0;
              local_ab8.OuterName.Number = 0;
              local_c98 = 0;
              local_ab8.PackageName = local_d58;
              pFVar22 = FCoreRedirects::GetRedirectedName(local_a70,Type_Package,&local_ab8,None);
              FVar19 = pFVar22->PackageName;
              *pFVar17 = FVar19;
            }
            pFVar17 = local_d60;
            local_d58 = FVar19;
            if (local_d70 != FVar19) {
              local_d8b = false;
              local_bc0.ObjectName.ComparisonIndex.Value = 0;
              local_bc0.ObjectName.Number = 0;
              local_c88 = 0;
              local_bc0.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
              local_bc0.PrimaryAssetType.Name.Number = 0;
              local_bc0.ValueName.ComparisonIndex.Value = 0;
              local_bc0.ValueName.Number = 0;
              local_bc0.PackageName = FVar19;
              local_d68 = FAssetRegistryState::CreateOrFindDependsNode
                                    (&this->State,&local_bc0,&local_d8b);
              TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
              Emplace<FDependsNode_*_const_&>
                        ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>
                          *)local_d24._4_8_,(FDependsNode **)(local_ba0 + 4),(bool *)&local_d68);
              if ((local_d8b == false) &&
                 (pFVar20 = TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                            ::Find((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                                    *)local_c78,local_d58), pFVar20 != (FPackageDependencyData *)0x0
                 )) {
                FDependsNode::Reserve(local_d68,&pFVar20->DependsNodeReservations);
              }
              if ((local_d68->bScriptPath != 0) &&
                 (bVar14 = FDependsNode::IsScriptDependenciesInitialized(local_d68), !bVar14)) {
                FDependsNode::SetIsScriptDependenciesInitialized(local_d68,true);
                local_c00 = local_d58;
                local_8a8.Base = local_888;
                local_8a8.bIsDynamic = false;
                local_8a8.bIsExternal = false;
                local_8a8.CurPos = local_888;
                local_8a8.End = local_72;
                ::FName::AppendString(&local_c00,&local_8a8);
                if (local_8a8.End < local_8a8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_8a8,1);
                }
                *local_8a8.CurPos = L'\0';
                pUVar23 = FindPackage((UObject *)0x0,local_8a8.Base);
                if (pUVar23 != (UPackage *)0x0) {
                  FAssetRegistryState::CreateOrGetAssetPackageData(&this->State,local_d58);
                }
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8a8);
              }
              uVar29 = ((uint)((ulonglong)local_d68 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_d68 >> 4)) * -0x7a143595;
              uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
              pTVar24 = TMapBase<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
                        ::FindOrAddImpl<FDependsNode_*_const_&>
                                  ((TMapBase<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
                                    *)(pFVar38 + 1),uVar29 >> 0x10 ^ uVar29,&local_d68);
              bVar3 = (byte)(((FName *)((longlong)FVar37.Data + 8))->ComparisonIndex).Value;
              TVar16 = *pTVar24;
              if ((uint)TVar16 < 8) {
                iVar30 = 1;
                local_d80 = (uint **)((longlong)
                                      &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                       ::__l5::Values + (ulonglong)(uint)TVar16 * 4);
              }
              else {
                switch(TVar16) {
                case (TPropertyCombinationSet<3>)0x8:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l10::Values;
                  break;
                case (TPropertyCombinationSet<3>)0x9:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l11::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xa:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l12::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xb:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l13::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xc:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l14::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xd:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l15::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xe:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l16::Values;
                  break;
                case (TPropertyCombinationSet<3>)0xf:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l17::Values;
                  break;
                case (TPropertyCombinationSet<3>)0x10:
                  iVar30 = 2;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l18::Values;
                  break;
                case (TPropertyCombinationSet<3>)0x11:
                  iVar30 = 3;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l19::Values;
                  break;
                case (TPropertyCombinationSet<3>)0x12:
                  iVar30 = 3;
                  local_d80 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l20::Values;
                  break;
                default:
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                      ,0x2ca,L"");
                  if (bVar14) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
              }
              bVar14 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddNonRedundant
                                 ((uint *)local_d80,iVar30,
                                  (uint)(byte)((bVar3 >> 2 & 1) << 2 | (bVar3 >> 1 & 1) * '\x02') |
                                  bVar3 & 1,local_68,&local_d28);
              pFVar17 = local_d60;
              if (bVar14) {
                TVar16 = (TPropertyCombinationSet<3>)
                         FPropertyCombinationPack3::Pack(local_68,local_d28);
                *pTVar24 = TVar16;
                pFVar17 = local_d60;
              }
            }
LAB_142b8c047:
            FVar37.Data = (FScriptContainerElement *)&((FName *)((longlong)FVar37.Data + 8))->Number
            ;
          }
          uVar25 = (ulonglong)local_8c8;
          local_d30 = (FName *)(local_8d0.Data + uVar25 * 0x20);
          pFVar39 = local_8d0.Data + 0x18;
          local_d60 = (FName *)CONCAT44(local_d60._4_4_,local_8c8);
          local_d90 = iVar30;
          while( true ) {
            pFVar17 = local_d30;
            if (local_8c8 != (int)uVar25) {
              local_d88 = 0;
              `TCheckedPointerIterator<FPackageDependencyData::FSearchableNamesDependency,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_d88);
            }
            if ((FName *)(pFVar39 + -0x18) == pFVar17) break;
            uVar29 = pFVar10[0xc].ComparisonIndex.Value;
            uVar42 = *(int *)pFVar39 + uVar29;
            if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
            }
            puVar35 = &pFVar10[0xc].Number;
            if ((int)pFVar10[0xc].Number < (int)uVar42) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar42,(ForAnyElementType *)(pFVar10 + 0xb),uVar29,(int *)puVar35);
            }
            pFVar38 = (FName *)(((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar39 + -8))->
                               AllocatorInstance).Data;
            iVar15 = *(int *)pFVar39;
            pFVar17 = pFVar38 + iVar15;
            while( true ) {
              if (*(int *)pFVar39 != iVar15) {
                local_d87 = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_d87);
              }
              if (pFVar38 == pFVar17) break;
              local_b38.PackageName = *(FName *)(pFVar39 + -0x18);
              local_b38.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
              local_b38.PrimaryAssetType.Name.Number = 0;
              local_b38.ObjectName = *(FName *)(pFVar39 + -0x10);
              local_b38.ValueName = *pFVar38;
              local_d40 = FAssetRegistryState::CreateOrFindDependsNode
                                    (&this->State,&local_b38,(bool *)0x0);
              TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
              Emplace<FDependsNode_*_const_&>
                        ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>
                          *)local_d24._4_8_,(FDependsNode **)&local_c28,(bool *)&local_d40);
              if ((((ulonglong)pFVar10[0xb] <= &local_d40) &&
                  (&local_d40 <
                   (FDependsNode **)((longlong)pFVar10[0xb] + (longlong)(int)*puVar35 * 8))) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar29 = pFVar10[0xc].ComparisonIndex.Value;
              if (uVar29 == *puVar35) {
                uVar29 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)(pFVar10 + 0xb),(int *)puVar35);
                pFVar10[0xc].ComparisonIndex.Value = uVar29;
              }
              pFVar38 = pFVar38 + 1;
              pFVar10[0xc].ComparisonIndex.Value = uVar29 + 1;
              *(FDependsNode **)((longlong)pFVar10[0xb] + (longlong)(int)uVar29 * 8) = local_d40;
            }
            pFVar39 = pFVar39 + 0x20;
            uVar25 = (ulonglong)local_d60 & 0xffffffff;
          }
        }
      }
      DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>
                ((FSearchableNamesDependency *)local_8d0.Data,local_8c8);
      if ((FSearchableNamesDependency *)local_8d0.Data != (FSearchableNamesDependency *)0x0) {
        FMemory::Free(local_8d0.Data);
      }
      if ((FName *)local_8e0.Data != (FName *)0x0) {
        FMemory::Free(local_8e0.Data);
      }
      if (local_918.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.Data);
      }
      local_920 = 0;
      if (local_928 != (void *)0x0) {
        FMemory::Free(local_928);
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_988 + 0x20));
    }
    else {
      ::FName::ToString(&local_d70,&local_cf8);
      pTVar18 = TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>::operator*
                          (local_d08);
      bVar14 = Utils::IsPathMounted(&local_cf8,pTVar18,&local_cb8);
      if (bVar14) goto LAB_142b8babf;
      if (3 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      FPackageDependencyData::~FPackageDependencyData((FPackageDependencyData *)local_988);
    }
    local_d78 = local_d78 + 1;
    uVar29 = local_d78 & 0x800003ff;
    if ((int)uVar29 < 0) {
      uVar29 = (uVar29 - 1 | 0xfffffc00) + 1;
    }
    if (uVar29 == 0) {
      local_d98 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(param_4);
    }
    goto LAB_142b8ba0a;
  }
LAB_142b8c2ba:
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x8 !=
      *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x34) {
    local_a18.SecondaryData = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0;
    iVar15 = 0;
    local_a08 = 0;
    local_a04 = 1;
    uVar29 = *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x8 -
             *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x34;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if (1 < (int)uVar29) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_>
                (8,8,uVar29,&local_a18,0,(int *)&local_a04);
    }
    iVar30 = *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x28;
    local_cd8 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(pFVar40->AssetNameToConstructDataMap).field_0x10;
    local_cc8 = 0;
    uStack_cdc = 1;
    iStack_ccc = 0;
    if (iVar30 != 0) {
      puVar35 = *(uint **)&(pFVar40->AssetNameToConstructDataMap).field_0x20;
      if (puVar35 == (uint *)0x0) {
        puVar35 = (uint *)local_cd8;
      }
      uVar29 = *puVar35;
      iVar15 = 0;
      while (uVar29 == 0) {
        lVar26 = (longlong)iVar15;
        local_cc8 = local_cc8 + 0x20;
        iVar15 = iVar15 + 1;
        iStack_ccc = iVar30;
        if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142b8c3b1;
        uVar29 = puVar35[lVar26 + 1];
      }
      uStack_cdc = -uVar29 & uVar29;
      uVar25 = (ulonglong)uStack_cdc * 2 + 1;
      lVar26 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_c20 = (int)lVar26;
      iStack_ccc = local_c20 + -1 + local_cc8;
      if (iVar30 < iStack_ccc) {
        iStack_ccc = iVar30;
      }
    }
LAB_142b8c3b1:
    uStack_cc4 = local_a3c;
    iStack_cc0 = *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x8 -
                 *(int *)&(pFVar40->AssetNameToConstructDataMap).field_0x34;
    uVar29 = *(uint *)&(pFVar40->AssetNameToConstructDataMap).field_0x28;
    TStack_b90._padding_ = CONCAT44(uStack_cdc,iVar15);
    uStack_cd0 = 0xffffffff;
    puVar41 = &(pFVar40->AssetNameToConstructDataMap).field_0x10;
    TStack_b90.CurrentBitIndex = iStack_ccc;
    TStack_b90.UnvisitedBitMask = 0xffffffff;
    uVar42 = uVar29 & 0xffffffe0;
    iVar30 = (int)uVar29 >> 5;
    TStack_b90._28_4_ = local_a3c;
    TStack_b90.BaseBitIndex = local_cc8;
    uStack_b70 = CONCAT44(uStack_cbc,iStack_cc0);
    local_ce8 = pFVar40;
    iStack_ce0 = iVar15;
    local_b98 = pFVar40;
    TStack_b90.Array = local_cd8;
    if (((int)uVar29 < 0) &&
       (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar45)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar9 = local_d50;
    uVar4 = *(uint *)&(pFVar40->AssetNameToConstructDataMap).field_0x28;
    if (uVar29 != uVar4) {
      puVar28 = *(undefined1 **)&(pFVar40->AssetNameToConstructDataMap).field_0x20;
      puVar34 = puVar41;
      if (puVar28 != (undefined1 *)0x0) {
        puVar34 = puVar28;
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar30 * 4);
      while (uVar29 == 0) {
        lVar26 = (longlong)iVar30;
        uVar42 = uVar42 + 0x20;
        iVar30 = iVar30 + 1;
        uVar29 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
        goto LAB_142b8c4e0;
        uVar29 = *(uint *)(puVar34 + lVar26 * 4 + 4);
      }
      uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_c1c = (int)lVar26;
      uVar29 = local_c1c + -1 + uVar42;
      if ((int)uVar4 < (int)uVar29) {
        uVar29 = uVar4;
      }
    }
LAB_142b8c4e0:
    while( true ) {
      pFVar40 = local_b98;
      if (*(int *)&(local_b98->AssetNameToConstructDataMap).field_0x8 -
          *(int *)&(local_b98->AssetNameToConstructDataMap).field_0x34 != (int)uStack_b70) {
        local_d86 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_d86);
      }
      if (((TStack_b90.CurrentBitIndex == uVar29) &&
          (TStack_b90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar41)) &&
         (pFVar40 == pFVar9)) break;
      local_d38 = (longlong)TStack_b90.CurrentBitIndex * 0x78 +
                  *(longlong *)&pFVar40->AssetNameToConstructDataMap + 8;
      FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)&local_a18;
      if (local_a18.SecondaryData !=
          (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
        FVar31 = local_a18.SecondaryData;
      }
      if ((ulonglong)FVar31 <= &local_d38) {
        FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)&local_a18;
        if (local_a18.SecondaryData !=
            (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
          FVar31 = local_a18.SecondaryData;
        }
        if ((&local_d38 < (longlong *)((longlong)FVar31 + (longlong)(int)local_a04 * 8)) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar45)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_a08 == local_a04) {
        local_a08 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_>
                              (0x808,&local_a18,(int *)&local_a04);
      }
      lVar26 = (longlong)(int)local_a08;
      FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)&local_a18;
      if (local_a18.SecondaryData !=
          (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
        FVar31 = local_a18.SecondaryData;
      }
      local_a08 = local_a08 + 1;
      *(longlong *)((longlong)FVar31 + lVar26 * 8) = local_d38;
      TStack_b90.UnvisitedBitMask = TStack_b90.UnvisitedBitMask & ~TStack_b90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b90);
    }
    bVar45 = -1 < CpuChannel->Enabled;
    if (bVar45) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId7928,"DependencyGatheredData_RemoveReferencers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                 ,0x1ef8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7928);
    }
    uVar29 = local_a08;
    FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)&local_a18;
    if (local_a18.SecondaryData !=
        (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
      FVar31 = local_a18.SecondaryData;
    }
    FVar1 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)
            ((longlong)FVar31 + (longlong)(int)local_a08 * 8);
    while( true ) {
      if (local_a08 != uVar29) {
        local_d85 = 0;
        `TCheckedPointerIterator<UE::AssetRegistry::DependsNode::FConstructData_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_d85);
      }
      pFVar12 = local_c80;
      if (FVar31 == FVar1) break;
      local_a00.RequiredUnions.ArrayMax = 1;
      local_a00.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_a00.RequiredUnions.ArrayNum = 0;
      local_9a0 = (FDependsNode *)**(undefined8 **)FVar31;
      local_998 = *(undefined8 **)FVar31 + 1;
      local_a00.Required = None;
      local_a00.Excluded = None;
      local_990 = (undefined ***)0x0;
      local_9a8 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::`109'::<lambda_3>,1,0>
                   ::_vftable_;
      local_9b8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                     ::Call;
      FDependsNode::IterateOverDependencies
                (local_9a0,
                 (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                  *)local_9b8,All,&local_a00);
      if (local_9b8[0] != (code *)0x0) {
        pppuVar27 = &local_9a8;
        if (local_990 != (undefined ***)0x0) {
          pppuVar27 = local_990;
        }
        (*(code *)(*pppuVar27)[2])();
      }
      if (local_a00.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_a00.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)
               ((longlong)FVar31 + 8);
    }
    if (bVar45) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((pFVar12->PerformanceMode == MostlyStatic) ||
       ((pFVar12->PerformanceMode == BulkLoading &&
        (AssetRegistry::Impl::bDeferDependencySort == false)))) {
      local_ae8[0] = 1;
    }
    else {
      local_ae8[0] = 0;
    }
    local_ae0 = &local_a18;
    local_ad8.DataPtr = (void **)0x0;
    local_ad8.ArrayNum = 0;
    local_ac8 = Core::Private::Function::
                TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_4>,void,int>
                ::Call;
    local_ac0 = local_ae8;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"DependencyGatheredData_AddDependencies",local_a08,0x400,
               (TFunctionRef<void___cdecl(int)> *)&local_ac8,local_d94[0],local_d48,&local_ad8);
    bVar45 = -1 < CpuChannel->Enabled;
    if (bVar45) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId7983,"DependencyGatheredData_AddReferencers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                 ,0x1f2f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7983);
    }
    uVar25 = (ulonglong)(int)local_a08;
    local_d60 = (FName *)CONCAT44(local_d60._4_4_,local_a08);
    FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)&local_a18;
    if (local_a18.SecondaryData !=
        (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
      FVar31 = local_a18.SecondaryData;
    }
    local_d10 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)
                ((longlong)FVar31 + uVar25 * 8);
    uVar33 = uVar25;
    while( true ) {
      FVar1 = local_d10;
      if ((int)uVar25 != (int)uVar33) {
        local_d84 = 0;
        `TCheckedPointerIterator<UE::AssetRegistry::DependsNode::FConstructData_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_d84);
      }
      this = local_c80;
      iVar15 = 0;
      if (FVar31 == FVar1) break;
      pTVar5 = *(TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> **)FVar31
      ;
      iVar30 = *(int *)((longlong)&pTVar5->field0_0x0 + 0x30);
      local_cd8 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)&pTVar5->field0_0x0 + 0x18);
      local_cc8 = 0;
      uStack_cdc = 1;
      local_d00 = *(FDependsNode **)&pTVar5->field0_0x0;
      local_d18 = (FGatherDependencyDataScratchpad *)((longlong)&pTVar5->field0_0x0 + 8);
      iStack_ccc = 0;
      if (iVar30 != 0) {
        pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)&pTVar5->field0_0x0 + 0x28);
        pTVar36 = local_cd8;
        if (pTVar6 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar36 = pTVar6;
        }
        uVar29 = *(uint *)(pTVar36->AllocatorInstance).InlineData;
        iVar15 = 0;
        while (uVar29 == 0) {
          lVar26 = (longlong)iVar15;
          local_cc8 = local_cc8 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_ccc = iVar30;
          if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142b8c981;
          uVar29 = *(uint *)((pTVar36->AllocatorInstance).InlineData + lVar26 * 4 + 4);
        }
        uStack_cdc = -uVar29 & uVar29;
        uVar25 = (ulonglong)uStack_cdc * 2 + 1;
        lVar26 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_c08 = (int)lVar26;
        iStack_ccc = local_cc8 + -1 + local_c08;
        if (iVar30 < iStack_ccc) {
          iStack_ccc = iVar30;
        }
      }
LAB_142b8c981:
      uVar29 = *(uint *)((longlong)&pTVar5->field0_0x0 + 0x30);
      pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)&pTVar5->field0_0x0 + 0x18);
      uStack_cc4 = local_a1c;
      iStack_cc0 = *(int *)((longlong)&pTVar5->field0_0x0 + 0x10) -
                   *(int *)((longlong)&pTVar5->field0_0x0 + 0x3c);
      uVar42 = uVar29 & 0xffffffe0;
      TStack_b60._padding_ = CONCAT44(uStack_cdc,iVar15);
      uStack_cd0 = 0xffffffff;
      TStack_b60.CurrentBitIndex = iStack_ccc;
      TStack_b60.UnvisitedBitMask = 0xffffffff;
      iVar30 = (int)uVar29 >> 5;
      TStack_b60._28_4_ = local_a1c;
      TStack_b60.BaseBitIndex = local_cc8;
      uStack_b40 = CONCAT44(uStack_cbc,iStack_cc0);
      local_d08 = pTVar5;
      local_ce8 = local_d18;
      iStack_ce0 = iVar15;
      local_b68 = local_d18;
      TStack_b60.Array = local_cd8;
      if (((int)uVar29 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar11 = local_d00;
      pFVar40 = local_d18;
      uVar4 = *(uint *)((longlong)&pTVar5->field0_0x0 + 0x30);
      if (uVar29 != uVar4) {
        pTVar36 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)&pTVar5->field0_0x0 + 0x28);
        pTVar32 = pTVar6;
        if (pTVar36 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar32 = pTVar36;
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) &
                 *(uint *)((pTVar32->AllocatorInstance).InlineData + (longlong)iVar30 * 4);
        while (uVar29 == 0) {
          lVar26 = (longlong)iVar30;
          uVar42 = uVar42 + 0x20;
          iVar30 = iVar30 + 1;
          uVar29 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_142b8caa0;
          uVar29 = *(uint *)((pTVar32->AllocatorInstance).InlineData + lVar26 * 4 + 4);
        }
        uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_c04 = (int)lVar26;
        uVar29 = (uVar42 - 1) + local_c04;
        if ((int)uVar4 < (int)uVar29) {
          uVar29 = uVar4;
        }
      }
LAB_142b8caa0:
      while( true ) {
        pFVar9 = local_b68;
        if (*(int *)&(local_b68->AssetNameToConstructDataMap).field_0x8 -
            *(int *)&(local_b68->AssetNameToConstructDataMap).field_0x34 != (int)uStack_b40) {
          local_d83 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TPropertyCombinationSet<3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_d83);
        }
        pTVar5 = local_d08;
        if (((TStack_b60.CurrentBitIndex == uVar29) && (TStack_b60.Array == pTVar6)) &&
           (pFVar9 == pFVar40)) break;
        pFVar7 = *(FDependsNode **)
                  (*(longlong *)&pFVar9->AssetNameToConstructDataMap +
                  (longlong)TStack_b60.CurrentBitIndex * 0x18);
        FDependsNode::SetIsReferencersSorted(pFVar7,false);
        FDependsNode::AddReferencer(pFVar7,pFVar11);
        TStack_b60.UnvisitedBitMask = TStack_b60.UnvisitedBitMask & ~TStack_b60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b60);
      }
      puVar43 = *(undefined8 **)((longlong)&local_d08[1].field0_0x0 + 8);
      iVar15 = *(int *)((longlong)&local_d08[1].field0_0x0 + 0x10);
      puVar2 = puVar43 + iVar15;
      while( true ) {
        if (*(int *)((longlong)&pTVar5[1].field0_0x0 + 0x10) != iVar15) {
          local_d82[0] = 0;
          `TCheckedPointerIterator<FDependsNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_d82);
        }
        if (puVar43 == puVar2) break;
        pFVar7 = (FDependsNode *)*puVar43;
        FDependsNode::SetIsReferencersSorted(pFVar7,false);
        FDependsNode::AddReferencer(pFVar7,pFVar11);
        puVar43 = puVar43 + 1;
      }
      uVar25 = (ulonglong)local_a08;
      FVar31 = (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)
               ((longlong)FVar31 + 8);
      uVar33 = (ulonglong)local_d60 & 0xffffffff;
    }
    if (bVar45) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::Array
              ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
               local_d24._4_8_,&local_bf0);
    if ((this->PerformanceMode == MostlyStatic) ||
       ((this->PerformanceMode == BulkLoading &&
        (AssetRegistry::Impl::bDeferReferencerSort == false)))) {
      local_b10 = 1;
    }
    else {
      local_b10 = 0;
    }
    local_b18 = &local_bf0;
    local_af8 = Core::Private::Function::
                TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_5>,void,int>
                ::Call;
    local_af0 = &local_b18;
    local_b08.DataPtr = (void **)0x0;
    local_b08.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"DependencyGatheredData_SortNodes",local_bf0.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_af8,local_d94[0],local_d48,&local_b08);
    if (local_bf0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bf0.AllocatorInstance.Data);
    }
    if (local_a18.SecondaryData !=
        (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
      FMemory::Free((void *)local_a18.SecondaryData);
    }
  }
  pFVar40 = (this->GatherDependencyDataScratchPad).Ptr;
  TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
           *)pFVar40);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&pFVar40->CachedDepToRedirect);
  if (*(int *)&(pFVar40->ModifiedDependNodes).Elements.field_0x8 !=
      *(int *)&(pFVar40->ModifiedDependNodes).Elements.field_0x34) {
    TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::UnhashElements
              (&pFVar40->ModifiedDependNodes);
    iVar15 = *(int *)&(pFVar40->ModifiedDependNodes).Elements.field_0xc;
    *(undefined4 *)&(pFVar40->ModifiedDependNodes).Elements.field_0x8 = 0;
    if (iVar15 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&pFVar40->ModifiedDependNodes,0,
                 (int *)&(pFVar40->ModifiedDependNodes).Elements.field_0xc);
    }
    *(undefined4 *)&(pFVar40->ModifiedDependNodes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar40->ModifiedDependNodes).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar40->ModifiedDependNodes).Elements.field_0x28 = 0;
  }
  if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
  }
  if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
  }
  FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_d94);
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_142b8b9d7:
  pFVar17 = (FName *)((longlong)iVar15 * 0xf0 + *plVar13);
  TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  ::Emplace<FName,FPackageDependencyData>
            ((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
              *)local_d10,pFVar17,(FPackageDependencyData *)(pFVar17 + 1));
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::RemoveByIndex(pTStack_c40,iVar15);
  local_c30 = '\x01';
LAB_142b8ba0a:
  uStack_c50 = uStack_c50 & ~auStack_c60._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c60);
  uVar25 = (ulonglong)uStack_c4c;
  if ((*(int *)(auStack_c60._8_8_ + 0x18) <= (int)uStack_c4c) ||
     (uVar33 = uVar25, local_d98 != false)) goto LAB_142b8ba43;
  goto LAB_142b8b741;
LAB_142b8ba43:
  pFVar40 = local_d50;
  if ((local_c30 != '\0') && (local_c2f != '\0')) {
    uVar29 = *(int *)&(local_c38->Elements).field_0x8 - *(int *)&(local_c38->Elements).field_0x34;
    if (uVar29 < 4) {
      iVar15 = 1;
    }
    else {
      uVar25 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_c28._4_4_ = (undefined4)lVar26;
      iVar15 = 1 << ((byte)lVar26 & 0x1f);
    }
    if (((0 < (int)uVar29) && (local_c38->HashSize < iVar15)) || (iVar15 < local_c38->HashSize)) {
      local_c38->HashSize = iVar15;
      TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
      ::Rehash(local_c38);
      pFVar40 = local_d50;
    }
  }
  goto LAB_142b8c2ba;
}

// EnumerateAllDiskAssets @ 142b8eea0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::EnumerateAllDiskAssets
          (FAssetRegistryImpl *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,EEnumerateAssetsFlags param_3)

{
  TFunctionRef<bool___cdecl(FAssetData_const_&)> local_18;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (param_1,&this->CachedEmptyPackages);
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  FAssetRegistryState::EnumerateAllAssets(&this->State,param_1,&local_18,param_3);
  return;
}

// EnumerateAssetsByPathNoTags @ 142b8f8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::EnumerateAssetsByPathNoTags
          (FAssetRegistryImpl *this,FName param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FName local_res10 [3];
  undefined1 auStackY_4b8 [32];
  bool local_468 [8];
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_460;
  code *local_458;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> **local_450;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> local_448;
  FClassInheritanceContext local_438;
  undefined1 local_418 [32];
  void *local_3f8;
  undefined4 local_3f0;
  uint local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  ForElementType<FSetElementId> local_3d8;
  int local_3d0;
  FARFilter local_3c8;
  FARCompiledFilter local_278;
  ulonglong local_38;
  
  if (param_1 == (FName)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_res10[0] = param_1;
  FARFilter::FARFilter(&local_3c8);
  local_3c8.bRecursivePaths = param_3;
  if (((local_3c8.PackagePaths.AllocatorInstance.Data <= local_res10) &&
      (local_res10 <
       (FName *)(local_3c8.PackagePaths.AllocatorInstance.Data +
                (longlong)local_3c8.PackagePaths.ArrayMax * 8))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_3c8.PackagePaths.ArrayNum == local_3c8.PackagePaths.ArrayMax) {
    local_3c8.PackagePaths.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_3c8.PackagePaths.AllocatorInstance,&local_3c8.PackagePaths.ArrayMax
                   );
  }
  *(FName *)((longlong)local_3c8.PackagePaths.AllocatorInstance.Data +
            (longlong)local_3c8.PackagePaths.ArrayNum * 8) = local_res10[0];
  local_3c8.bIncludeOnlyOnDiskAssets = param_4;
  local_438.Buffer = (FClassInheritanceBuffer *)0x0;
  local_438.StackBuffer = (FClassInheritanceBuffer *)0x0;
  local_438.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_438.bInheritanceMapUpToDate = false;
  local_438.bCodeGeneratorClassesUpToDate = false;
  local_3c8.PackagePaths.ArrayNum = local_3c8.PackagePaths.ArrayNum + 1;
  FARCompiledFilter::FARCompiledFilter(&local_278);
  CompileFilter(this,&local_438,&local_3c8,&local_278);
  local_418._0_8_ = (FScriptContainerElement *)0x0;
  local_418._8_8_ = 0;
  local_3f8 = (void *)0x0;
  local_3f0 = 0;
  local_3ec = 0x80;
  local_3e8 = 0xffffffff;
  local_3e4 = 0;
  local_3d8 = (ForElementType<FSetElementId>)0x0;
  local_3d0 = 0;
  if (!param_4) {
    local_450 = &local_460;
    local_458 = Core::Private::Function::
                TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::EnumerateAssetsByPathNoTags'::__l8::<lambda_1>,bool,UObject_const_*,FAssetData_&&>
                ::Call;
    local_460 = param_2;
    Utils::EnumerateMemoryAssetsHelper
              (&local_278,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_418,
               local_468,(TFunctionRef<bool___cdecl(UObject_const_*,FAssetData_&&)> *)&local_458,
               true);
    if (local_468[0] != false) goto LAB_142b8fa7c;
  }
  local_448._0_8_ = *(undefined8 *)param_2;
  local_448._8_8_ = *(undefined8 *)&param_2->field_0x8;
  EnumerateDiskAssets(this,&local_278,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_418,
                      &local_448,None);
LAB_142b8fa7c:
  local_3d0 = 0;
  if (local_3d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8);
  }
  iVar2 = SUB84(local_418._8_8_,4);
  local_418._8_8_ = local_418._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_418,0,(int *)(local_418 + 0xc));
  }
  local_3f0 = 0;
  local_3e4 = 0;
  local_3e8 = 0xffffffff;
  if (0x80 < local_3ec) {
    local_3ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_418 + 0x10),0);
  }
  if (local_3f8 != (void *)0x0) {
    FMemory::Free(local_3f8);
  }
  if ((FScriptContainerElement *)local_418._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_418._0_8_);
  }
  FARCompiledFilter::~FARCompiledFilter(&local_278);
  FARFilter::~FARFilter(&local_3c8);
  return;
}

// EnumerateDiskAssets @ 142b8fb40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::EnumerateDiskAssets
          (FAssetRegistryImpl *this,FARCompiledFilter *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_3,EEnumerateAssetsFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> local_18;
  
  if ((((((*(int *)&(param_1->TagsAndValues).field_0x8 !=
           *(int *)&(param_1->TagsAndValues).field_0x34 ||
          *(int *)&(param_1->ClassPaths).Elements.field_0x8 !=
          *(int *)&(param_1->ClassPaths).Elements.field_0x34) ||
         *(int *)&(param_1->SoftObjectPaths).Elements.field_0x8 !=
         *(int *)&(param_1->SoftObjectPaths).Elements.field_0x34) ||
        *(int *)&(param_1->PackagePaths).Elements.field_0x8 !=
        *(int *)&(param_1->PackagePaths).Elements.field_0x34) ||
       *(int *)&(param_1->PackageNames).Elements.field_0x8 !=
       *(int *)&(param_1->PackageNames).Elements.field_0x34) || param_1->WithPackageFlags != 0) ||
      param_1->WithoutPackageFlags != 0) {
    bVar2 = Utils::IsFilterValid(param_1);
    if (bVar2) goto LAB_142b8fbe3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!InFilter.IsEmpty() && Utils::IsFilterValid(InFilter)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0xc68,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142b8fbe3:
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (param_2,&this->CachedEmptyPackages);
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  FAssetRegistryState::EnumerateAssets(&this->State,param_1,param_2,&local_18,param_4);
  return;
}

// GetAllocatedSize @ 142b92a00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetAllocatedSize
          (FAssetRegistryImpl *this,bool param_1,ulong64 *param_2,ulong64 *param_3,ulong64 *param_4)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulong64 *puVar5;
  uint uVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  uint local_138;
  undefined4 uStack_104;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  ulonglong uVar20;
  
  uVar11 = FAssetRegistryState::GetAllocatedSize(&this->State,param_1);
  uVar20 = 0;
  uVar24 = 0;
  uVar26 = 0;
  *param_2 = uVar11;
  if ((((param_1) && (4 < (byte)LogAssetRegistry._0_1_)) &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_)) &&
     ((Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_ &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_)))) {
    AssetDataGather::FResults::GetAllocatedSize(&this->BackgroundResults);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    if (4 < (byte)LogAssetRegistry._0_1_) {
      FPathTree::GetAllocatedSize(&this->CachedPathTree);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (4 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
  }
  uVar2 = *(uint *)&(this->CachedBPInheritanceMap).field_0x48;
  uVar13 = uVar20;
  if (1 < uVar2) {
    uVar13 = (longlong)(int)uVar2 << 2;
  }
  uVar2 = (this->ClassGeneratorNames).HashSize;
  uVar19 = uVar20;
  if (1 < uVar2) {
    uVar19 = (longlong)(int)uVar2 << 2;
  }
  uVar2 = (this->CachedEmptyPackages).HashSize;
  uVar15 = uVar20;
  if (1 < uVar2) {
    uVar15 = (longlong)(int)uVar2 << 2;
  }
  *param_3 = (longlong)*(int *)&(this->CachedEmptyPackages).Elements.field_0xc * 0x10 +
             ((*(int *)&(this->CachedEmptyPackages).Elements.field_0x2c + 0x1fU >> 5) << 2) + uVar15
             + uVar19 + ((*(int *)&(this->ClassGeneratorNames).Elements.field_0x2c + 0x1fU >> 5) <<
                        2) +
               (longlong)*(int *)&(this->ClassGeneratorNames).Elements.field_0xc * 0x18 +
             uVar13 + ((*(int *)&(this->CachedBPInheritanceMap).field_0x2c + 0x1fU >> 5) << 2) +
             (longlong)*(int *)&(this->CachedBPInheritanceMap).field_0xc * 0x28;
  uVar2 = *(uint *)&(this->CachedParsedFilterRules).Rules.field_0x48;
  uVar13 = uVar20;
  if (1 < uVar2) {
    uVar13 = (longlong)(int)uVar2 << 2;
  }
  iVar16 = *(int *)&(this->CachedParsedFilterRules).Rules.field_0x2c;
  iVar3 = *(int *)&(this->CachedParsedFilterRules).Rules.field_0xc;
  uVar11 = AssetDataGather::FResults::GetAllocatedSize(&this->BackgroundResults);
  uVar12 = FPathTree::GetAllocatedSize(&this->CachedPathTree);
  puVar5 = param_4;
  *param_4 = uVar12 + uVar13 + ((iVar16 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x28 + uVar11;
  if ((this->bIsTempCachingEnabled != false) && (this->bIsTempCachingAlwaysEnabled == false)) {
    uVar2 = *(uint *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x48;
    uVar13 = uVar20;
    if (1 < uVar2) {
      uVar13 = (longlong)(int)uVar2 << 2;
    }
    uVar2 = *(uint *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x48;
    uVar19 = uVar20;
    if (1 < uVar2) {
      uVar19 = (longlong)(int)uVar2 << 2;
    }
    *param_3 = *param_3 +
               uVar19 + uVar13 + ((*(int *)&(this->TempCachedInheritanceBuffer).
                                            ReverseInheritanceMap.field_0x2c + 0x1fU >> 5) << 2) +
                        ((longlong)
                         *(int *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.
                                  field_0xc +
                        (longlong)
                        *(int *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0xc) *
                        0x28 + (ulonglong)
                               ((*(int *)&(this->TempCachedInheritanceBuffer).InheritanceMap.
                                          field_0x2c + 0x1fU >> 5) << 2);
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  if ((this->GlobalGatherer).Ptr != (FAssetDataGatherer *)0x0) {
    *puVar5 = *puVar5 + 0x2e0;
    uVar11 = FAssetDataGatherer::GetAllocatedSize((this->GlobalGatherer).Ptr);
    *puVar5 = *puVar5 + uVar11;
    if ((param_1) && (4 < (byte)LogAssetRegistry._0_1_)) {
      FAssetDataGatherer::GetAllocatedSize((this->GlobalGatherer).Ptr);
      Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_AssetRegistry_G_1509a9ea8,
                 (FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  uVar2 = *(uint *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x48;
  uVar13 = uVar20;
  if (1 < uVar2) {
    uVar13 = (longlong)(int)uVar2 << 2;
  }
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(this->SerializationOptions).CookFilterlistTagsByClass.field_0x10;
  uVar18 = 0;
  *param_3 = *param_3 +
             (longlong)*(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0xc *
             0x68 + uVar13 + ((*(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.
                                        field_0x2c + 0x1fU >> 5) << 2);
  uVar9 = 1;
  uVar2 = *(uint *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x28;
  local_138 = 1;
  uVar6 = local_138;
  local_138 = 1;
  uVar10 = uVar18;
  uVar17 = uVar18;
  uVar22 = uVar26;
  if (uVar2 != 0) {
    puVar23 = *(uint **)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)TStack_c0.Array;
    }
    uVar9 = *puVar23;
    uVar13 = uVar20;
    uVar19 = uVar20;
    uVar22 = uVar24;
    uVar17 = uVar24;
    while (uVar9 == 0) {
      iVar16 = (int)uVar13;
      uVar22 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)uVar22;
      uVar17 = iVar16 + 1;
      uVar13 = (ulonglong)uVar17;
      uVar9 = 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_142b92f15;
      uVar9 = puVar23[(longlong)iVar16 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar13 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    uVar10 = (uVar22 - 1) + local_res20;
    if ((int)uVar2 < (int)uVar10) {
LAB_142b92f15:
      uVar10 = uVar2;
    }
  }
  puVar25 = &(this->SerializationOptions).CookFilterlistTagsByClass.field_0x10;
  local_res8 = *(uint *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x28;
  local_res18 = local_res8 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar9,uVar17);
  TStack_c0.CurrentBitIndex = uVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_res8 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = uVar22;
  uStack_a0 = CONCAT44(uStack_104,
                       *(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x8 -
                       *(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x34);
  if ((((int)local_res8 < 0) || ((int)uVar2 < (int)local_res8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x28;
  if (local_res8 != uVar2) {
    puVar21 = *(undefined1 **)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar25;
    }
    uVar9 = -1 << ((byte)local_res8 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    uVar22 = local_res18;
    while (uVar9 == 0) {
      lVar14 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      local_res8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142b93050;
      uVar9 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res8 = (uVar22 - 1) + (int)lVar14;
    if ((int)uVar2 < (int)local_res8) {
      local_res8 = uVar2;
    }
  }
LAB_142b93050:
  while( true ) {
    if (*(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x8 -
        *(int *)&(this->SerializationOptions).CookFilterlistTagsByClass.field_0x34 != (int)uStack_a0
       ) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == local_res8) &&
       (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) break;
    lVar14 = (longlong)TStack_c0.CurrentBitIndex * 0x68 +
             *(longlong *)&(this->SerializationOptions).CookFilterlistTagsByClass;
    uVar13 = uVar20;
    if (1 < *(uint *)(lVar14 + 0x58)) {
      uVar13 = (longlong)(int)*(uint *)(lVar14 + 0x58) << 2;
    }
    *param_3 = *param_3 +
               (longlong)*(int *)(lVar14 + 0x1c) * 0x10 +
               ((*(int *)(lVar14 + 0x3c) + 0x1fU >> 5) << 2) + uVar13;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  uVar2 = (this->SerializationOptions).AssetBundlesDenyList.HashSize;
  uVar13 = uVar20;
  if (1 < uVar2) {
    uVar13 = (longlong)(int)uVar2 << 2;
  }
  TStack_90.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x10;
  pTVar1 = &(this->SerializationOptions).AssetBundlesDenyList;
  *param_3 = *param_3 +
             uVar13 + ((*(int *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.
                                 field_0x2c + 0x1fU >> 5) << 2) +
             (longlong)*(int *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0xc
             * 0x18;
  uVar2 = *(uint *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x28;
  uVar9 = uVar18;
  if (uVar2 != 0) {
    puVar23 = *(uint **)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)TStack_90.Array;
    }
    local_138 = *puVar23;
    uVar13 = uVar20;
    uVar18 = uVar24;
    uVar26 = uVar24;
    while (local_138 == 0) {
      iVar16 = (int)uVar13;
      uVar18 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uVar18;
      uVar26 = iVar16 + 1;
      uVar13 = (ulonglong)uVar26;
      local_138 = uVar6;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_142b931a9;
      local_138 = puVar23[(longlong)iVar16 + 1];
    }
    local_138 = -local_138 & local_138;
    uVar20 = (ulonglong)local_138 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar9 = (uVar18 - 1) + (int)lVar14;
    if ((int)uVar2 < (int)uVar9) {
LAB_142b931a9:
      uVar9 = uVar2;
    }
  }
  puVar25 = &(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x10;
  uVar24 = *(uint *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x28;
  TStack_90._padding_ = CONCAT44(local_138,uVar26);
  uVar26 = uVar24 & 0xffffffe0;
  TStack_90.CurrentBitIndex = uVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar24 >> 5;
  TStack_90._28_4_ = uVar10;
  TStack_90.BaseBitIndex = uVar18;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x8
                       - *(int *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.
                                  field_0x34);
  local_98 = pTVar1;
  if ((((int)uVar24 < 0) || ((int)uVar2 < (int)uVar24)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x28;
  if (uVar24 != uVar2) {
    puVar21 = *(undefined1 **)&(this->SerializationOptions).AssetBundlesDenyList.Elements.field_0x20
    ;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar25;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar24 == 0) {
      lVar14 = (longlong)iVar16;
      uVar26 = uVar26 + 0x20;
      iVar16 = iVar16 + 1;
      uVar24 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142b932c0;
      uVar24 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar24 = (uVar26 - 1) + (int)lVar14;
    if ((int)uVar2 < (int)uVar24) {
      uVar24 = uVar2;
    }
  }
LAB_142b932c0:
  while( true ) {
    pTVar7 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (((TStack_90.CurrentBitIndex == uVar24) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) && (pTVar7 == pTVar1))
    break;
    *param_3 = *param_3 +
               (longlong)
               *(int *)(*(longlong *)&pTVar7->Elements + 0xc +
                       (longlong)TStack_90.CurrentBitIndex * 0x18) * 2;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// GetAncestorClassNames @ 142b938e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetAncestorClassNames
          (FAssetRegistryImpl *this,FClassInheritanceContext *param_1,FTopLevelAssetPath *param_2,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  FName FVar2;
  FClassInheritanceBuffer *this_00;
  FName FVar3;
  longlong lVar4;
  FTopLevelAssetPath *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  
  AssetRegistry::Impl::FClassInheritanceContext::ConditionalUpdate(param_1);
  FVar2 = param_2->AssetName;
  this_00 = param_1->Buffer;
  uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = param_2->PackageName;
  uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar3.Number;
  if (*(int *)&(((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)&this_00->InheritanceMap)->Elements).field_0x8 ==
      *(int *)&(((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)&this_00->InheritanceMap)->Elements).field_0x34) {
    return false;
  }
  FVar13 = (((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
              *)&this_00->InheritanceMap)->Hash).SecondaryData;
  if (FVar13 == (ForElementType<FSetElementId>)0x0) {
    FVar13 = (ForElementType<FSetElementId>)
             &((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                *)&this_00->InheritanceMap)->Hash;
  }
  iVar11 = *(int *)((longlong)FVar13 +
                   (ulonglong)
                   (((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)&this_00->InheritanceMap)->HashSize - 1U &
                   (uVar10 * 0x40 + -0x61c88647 + uVar9 + FVar2.Number + (uVar10 >> 2) ^ uVar10)) *
                   4);
  if (iVar11 == -1) {
    return false;
  }
  lVar4 = *(longlong *)
           &((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
              *)&this_00->InheritanceMap)->Elements;
  while ((lVar12 = (longlong)iVar11, *(FName *)(lVar4 + lVar12 * 0x28) != FVar3 ||
         (*(FName *)(lVar4 + 8 + lVar12 * 0x28) != FVar2))) {
    iVar11 = *(int *)(lVar4 + 0x20 + lVar12 * 0x28);
    if (iVar11 == -1) {
      return false;
    }
  }
  if (iVar11 == -1) {
    return false;
  }
  uVar9 = 0;
  do {
    if (param_2 == (FTopLevelAssetPath *)0x0) {
      return true;
    }
    param_2 = TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
              ::Find((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                      *)this_00,param_2);
    if (param_2 != (FTopLevelAssetPath *)0x0) {
      if (param_2->PackageName == (FName)0x0) {
        param_2 = (FTopLevelAssetPath *)0x0;
      }
      else {
        pFVar5 = (FTopLevelAssetPath *)(param_3->AllocatorInstance).Data;
        if (((pFVar5 <= param_2) && (param_2 < pFVar5 + param_3->ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar11 = param_3->ArrayNum;
        if (iVar11 == param_3->ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar11 + 1;
        FVar2 = param_2->AssetName;
        pFVar1 = (FName *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 0x10);
        *pFVar1 = param_2->PackageName;
        pFVar1[1] = FVar2;
      }
    }
    uVar9 = uVar9 + 1;
    if (0xffff < uVar9) {
      if (uVar9 == 0x10000) {
        if (1 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        return false;
      }
      return true;
    }
  } while( true );
}

// GetAndScanRedirectedObjectPath @ 142b93e00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSoftObjectPath * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetAndScanRedirectedObjectPath
          (FAssetRegistryImpl *this,FSoftObjectPath *__return_storage_ptr__,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FSoftObjectPath *param_2,FEventContext *param_3,FClassInheritanceContext *param_4
          )

{
  GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
            (this,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// GetCachedEmptyPackages @ 142b96b70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetCachedEmptyPackages(FAssetRegistryImpl *this)

{
  return &this->CachedEmptyPackages;
}

// GetCachedPathTree @ 142b96c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPathTree * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetCachedPathTree(FAssetRegistryImpl *this)

{
  return &this->CachedPathTree;
}

// GetCurrentAllClassesVersionNumber @ 142b96cb0

ulong64 __cdecl UE::AssetRegistry::FAssetRegistryImpl::GetCurrentAllClassesVersionNumber(void)

{
  FUObjectHashTables *pFVar1;
  
  pFVar1 = FUObjectHashTables::Get();
  return (ulong64)pFVar1->AllClassesVersion;
}

// GetCurrentGeneratorClassesVersionNumber @ 142b96cc0

ulong64 __cdecl UE::AssetRegistry::FAssetRegistryImpl::GetCurrentGeneratorClassesVersionNumber(void)

{
  FUObjectHashTables *pFVar1;
  
  pFVar1 = FUObjectHashTables::Get();
  return (ulong64)pFVar1->NativeClassesVersion;
}

// GetRedirectedObjectPath @ 142b983b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSoftObjectPath * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetRedirectedObjectPath
          (FAssetRegistryImpl *this,FSoftObjectPath *__return_storage_ptr__,
          TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FSoftObjectPath *param_2)

{
  GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
            (this,__return_storage_ptr__,param_1,param_2,(FEventContext *)0x0,
             (FClassInheritanceContext *)0x0);
  return __return_storage_ptr__;
}

// GetState @ 142b98e40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetRegistryState * __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetState(FAssetRegistryImpl *this)

{
  return &this->State;
}

// GetSubClasses @ 142b98e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetSubClasses
          (FAssetRegistryImpl *this,FClassInheritanceContext *param_1,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_3,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                   *param_4)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [8];
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_b0;
  FTopLevelAssetPath local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b0 = param_4;
  AssetRegistry::Impl::FClassInheritanceContext::ConditionalUpdate(param_1);
  iVar1 = param_2->ArrayNum;
  pFVar2 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 2;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar2 == pFVar3) break;
    local_a8.PackageName = *pFVar2;
    local_a8.AssetName = pFVar2[1];
    GetSubClasses_Recursive
              (this,param_1,&local_a8,local_b0,
               (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                *)local_98,param_3);
    pFVar2 = pFVar2 + 2;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// GetSubClasses_Recursive @ 142b98fd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetSubClasses_Recursive
          (FAssetRegistryImpl *this,FClassInheritanceContext *param_1,FTopLevelAssetPath *param_2,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_3,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                   *param_4,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_5)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<FSetElementId> FVar9;
  FName *pFVar10;
  FName *pFVar11;
  int iVar12;
  FTopLevelAssetPath local_res18;
  FTopLevelAssetPath local_48;
  
  FVar1 = param_2->AssetName;
  FVar2 = param_2->PackageName;
  local_res18.PackageName = (FName)param_2;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar2.Number;
  if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34) {
    FVar9 = (param_5->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&param_5->Hash;
    }
    iVar12 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     (param_5->HashSize - 1U &
                     (uVar6 * 0x40 + -0x61c88647 + uVar5 + FVar1.Number + (uVar6 >> 2) ^ uVar6)) * 4
                     );
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&param_5->Elements;
      do {
        lVar7 = (longlong)iVar12;
        if ((*(FName *)(lVar3 + lVar7 * 0x18) == FVar2) &&
           (*(FName *)(lVar3 + 8 + lVar7 * 0x18) == FVar1)) {
          if (iVar12 != -1) {
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
      } while (iVar12 != -1);
    }
  }
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar4 = local_res18.PackageName;
  uVar6 = uVar6 + FVar2.Number;
  if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
    FVar9 = (param_4->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&param_4->Hash;
    }
    iVar12 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     (param_4->HashSize - 1U &
                     (uVar6 * 0x40 + -0x61c88647 + uVar5 + FVar1.Number + (uVar6 >> 2) ^ uVar6)) * 4
                     );
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&param_4->Elements;
      do {
        lVar7 = (longlong)iVar12;
        if ((*(FName *)(lVar3 + lVar7 * 0x18) == FVar2) &&
           (*(FName *)(lVar3 + 8 + lVar7 * 0x18) == FVar1)) {
          if (iVar12 != -1) {
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
      } while (iVar12 != -1);
    }
  }
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
  Emplace<FTopLevelAssetPath_const_&>(param_3,&local_res18,(bool *)local_res18.PackageName);
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
  Emplace<FTopLevelAssetPath_const_&>(param_4,&local_res18,(bool *)FVar4);
  local_48.PackageName = *(FName *)FVar4;
  local_48.AssetName = *(FName *)((longlong)FVar4 + 8);
  pTVar8 = TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                   *)&param_1->Buffer->ReverseInheritanceMap,&local_48);
  if (pTVar8 != (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar12 = pTVar8->ArrayNum;
    pFVar10 = (FName *)(pTVar8->AllocatorInstance).Data;
    pFVar11 = pFVar10 + (longlong)iVar12 * 2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar12) {
        `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar10 == pFVar11) break;
      local_48.PackageName = *pFVar10;
      local_48.AssetName = pFVar10[1];
      GetSubClasses_Recursive(this,param_1,&local_48,param_3,param_4,param_5);
      pFVar10 = pFVar10 + 2;
    }
  }
  return;
}

// GetVerseFilesByPath @ 142b994c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::GetVerseFilesByPath
          (FAssetRegistryImpl *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2
          ,bool param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  FName *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStackY_268 [32];
  uint local_230;
  uint uStack_22c;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  int local_210;
  uint uStack_20c;
  uint uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  undefined1 local_168 [12];
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  FSparseArrayAllocationInfo local_138;
  undefined1 local_128 [24];
  longlong lStack_110;
  longlong lStack_108;
  int local_100;
  undefined4 uStack_fc;
  undefined1 *local_f8;
  longlong lStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  TRangedForIterator local_c8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar18 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x20);
  for (lVar19 = 0x3f; 0x2fUL >> lVar19 == 0; lVar19 = lVar19 + -1) {
  }
  uVar22 = 1 << ((byte)lVar19 & 0x1f);
  local_1c8 = (undefined4)lVar19;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar22)) {
    local_50 = uVar22;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar22 != 0) {
      uVar17 = uVar22;
      if (uVar22 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar17 = 0;
          goto LAB_142b995c8;
        }
      }
      else {
LAB_142b995c8:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
      }
      if (0 < (int)uVar22) {
        uVar25 = (ulonglong)uVar22;
        uVar24 = uVar18;
        do {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar11 = uVar24 & (longlong)(int)uVar22 - 1U;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar16.Data + uVar11 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_50 != 0) {
      local_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_230 = 0;
      uStack_22c = 1;
      uStack_21c = 0;
      uStack_218 = 0;
      if (local_70 != 0) {
        FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_78;
        }
        uVar22 = *(uint *)FVar15;
        uVar24 = uVar18;
        while (uVar22 == 0) {
          uStack_218 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uStack_218;
          iVar8 = (int)uVar18;
          local_230 = iVar8 + 1;
          uVar18 = (ulonglong)local_230;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_230)
          goto LAB_142b996f1;
          uVar22 = ((uint *)((longlong)FVar15 + 4))[iVar8];
        }
        uStack_22c = -uVar22 & uVar22;
        uVar18 = (ulonglong)uStack_22c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1c4 = (int)lVar19;
        uStack_21c = local_1c4 + -1 + uStack_218;
        uVar18 = (ulonglong)uStack_21c;
        if ((int)local_70 < (int)uStack_21c) {
LAB_142b996f1:
          uVar18 = (ulonglong)local_70;
          uStack_21c = local_70;
        }
      }
      local_1b8 = (longlong *)local_98;
      local_1b0._padding_ = CONCAT44(uStack_22c,local_230);
      local_1b0.CurrentBitIndex = uStack_21c;
      local_1b0.UnvisitedBitMask = 0xffffffff;
      local_1b0._28_4_ = uStack_214;
      local_1b0.BaseBitIndex = uStack_218;
      if ((int)uVar18 < (int)local_70) {
        do {
          puVar20 = (undefined8 *)((longlong)(int)uVar18 * 0x10 + *local_1b8);
          uVar2 = *puVar20;
          uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
          uVar22 = local_50 - 1 & uVar22 + (int)((ulonglong)uVar2 >> 0x20);
          *(uint *)((longlong)puVar20 + 0xc) = uVar22;
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
          *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(FVar16.Data + uVar24 * 4);
          *(int *)(FVar16.Data + uVar24 * 4) = (int)uVar18;
          local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
          uVar18 = (ulonglong)(uint)local_1b0.CurrentBitIndex;
        } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
      }
    }
  }
  if (local_64 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                       (int *)(local_98 + 0xc));
    uVar22 = local_70;
    if (local_70 == 0) {
      iVar10 = 0;
LAB_142b99844:
      if ((int)local_6c < (int)(local_70 + 1)) {
        uVar17 = local_6c + 0x1f >> 5;
        uVar23 = local_70 + 0x20 >> 5;
        if (uVar23 < 5) {
          iVar9 = 4;
        }
        else {
          uVar18 = (ulonglong)uVar23;
          if (uVar17 < 5) {
            uVar17 = 0;
          }
          if (uVar17 == 0) {
            uVar24 = 4;
            if (4 < uVar18) {
              uVar24 = uVar18;
            }
          }
          else {
            uVar24 = ((ulonglong)uVar23 * 3 >> 3) + 0x10 + uVar18;
          }
          uVar12 = FMemory::QuantizeSize(uVar24 * 4,0);
          iVar9 = (int)(uVar12 >> 2);
          if (iVar9 < (int)uVar23) {
            iVar9 = 0x7fffffff;
          }
        }
        local_6c = iVar9 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
      }
      local_70 = local_70 + 1;
      uVar23 = (int)local_70 >> 0x1f & 0x1f;
      uVar17 = local_70 + uVar23;
      iVar9 = (uVar17 & 0x1f) - uVar23;
      if (iVar9 != 0) {
        FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_78;
        }
        puVar1 = (uint *)((longlong)FVar15 + (longlong)((int)uVar17 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
    else {
      iVar10 = (int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5;
      if (iVar10 != (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5)
      goto LAB_142b99844;
      local_70 = local_70 + 1;
    }
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    puVar1 = (uint *)((longlong)FVar15 + (longlong)iVar10 * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar22 & 0x1f));
    iVar10 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar10 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
    iVar8 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar10 * 0x10) = 0xffffffff;
    }
  }
  local_68 = iVar10;
  pFVar21 = (FName *)0x0;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_138,iVar8);
  if (local_138.Pointer != (FName *)0x0) {
    *(FName *)local_138.Pointer = param_1;
    (((FName *)((longlong)local_138.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
    pFVar21 = local_138.Pointer;
  }
  FVar3 = *pFVar21;
  uVar22 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar22 = uVar22 + FVar3.Number;
  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
    FVar16.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar16.Data = local_58.Data;
    }
    for (iVar8 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar22) * 4); iVar8 != -1;
        iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
      if (*(FName *)(local_98._0_8_ + (longlong)iVar8 * 0x10) == *pFVar21) {
        if (iVar8 != -1) {
          *(FName *)(local_98._0_8_ + (longlong)iVar8 * 0x10) = *pFVar21;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,local_138.Index,1);
          goto LAB_142b99d44;
        }
        break;
      }
    }
  }
  uVar23 = 1;
  uVar17 = local_98._8_4_ - local_64;
  if (3 < uVar17) {
    uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar23 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar23 <= (int)local_50)) {
    uVar22 = local_50 - 1 & uVar22;
    pFVar21[1].Number = uVar22;
    FVar16.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar16.Data = local_58.Data;
    }
    uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
    pFVar21[1].ComparisonIndex.Value = *(uint *)(FVar16.Data + uVar18 * 4);
    *(int *)(FVar16.Data + uVar18 * 4) = local_138.Index;
    goto LAB_142b99d44;
  }
  local_50 = uVar23;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar23 != 0) {
    uVar22 = uVar23;
    if (uVar23 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar22 = 0;
        goto LAB_142b99b18;
      }
    }
    else {
LAB_142b99b18:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar22,4);
    }
    if (0 < (int)uVar23) {
      uVar24 = (ulonglong)uVar23;
      uVar18 = 0;
      do {
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar25 = uVar18 & (longlong)(int)uVar23 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar16.Data + uVar25 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_50 != 0) {
    local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_210 = 0;
    uStack_20c = 1;
    uStack_1fc = 0;
    iStack_1f8 = 0;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar22 = *(uint *)FVar15;
      local_210 = 0;
      iStack_1f8 = 0;
      while (uVar22 == 0) {
        iStack_1f8 = iStack_1f8 + 0x20;
        lVar19 = (longlong)local_210;
        local_210 = local_210 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_210)
        goto LAB_142b99c52;
        uVar22 = ((uint *)((longlong)FVar15 + 4))[lVar19];
      }
      uStack_20c = -uVar22 & uVar22;
      uVar18 = (ulonglong)uStack_20c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1c0 = (int)lVar19;
      uStack_1fc = iStack_1f8 + -1 + local_1c0;
      if ((int)local_70 < (int)uStack_1fc) {
LAB_142b99c52:
        uStack_1fc = local_70;
      }
    }
    local_190 = (longlong *)local_98;
    local_188._padding_ = CONCAT44(uStack_20c,local_210);
    local_188.CurrentBitIndex = uStack_1fc;
    local_188.UnvisitedBitMask = 0xffffffff;
    local_188._28_4_ = uStack_1f4;
    local_188.BaseBitIndex = iStack_1f8;
    if ((int)uStack_1fc < (int)local_70) {
      do {
        puVar20 = (undefined8 *)((longlong)(int)uStack_1fc * 0x10 + *local_190);
        uVar2 = *puVar20;
        uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar22 = local_50 - 1 & uVar22 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar20 + 0xc) = uVar22;
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(FVar16.Data + uVar18 * 4);
        *(uint *)(FVar16.Data + uVar18 * 4) = uStack_1fc;
        local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
        uStack_1fc = local_188.CurrentBitIndex;
      } while (local_188.CurrentBitIndex < (local_188.Array)->NumBits);
    }
  }
LAB_142b99d44:
  if (param_3) {
    FPathTree::GetSubPaths
              (&this->CachedPathTree,param_1,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,true);
  }
  bVar6 = false;
  local_1e8._padding_._0_4_ = 0;
  local_1e8._padding_._4_4_ = 1;
  local_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_1e8.UnvisitedBitMask = 0xffffffff;
  local_1e8.CurrentBitIndex = 0;
  local_1e8.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
  }
  unique0x10000887 =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(local_1e8._padding_._4_4_,(undefined4)local_1e8._padding_);
  local_168._0_8_ = local_98;
  uStack_150 = CONCAT44(local_1e8.CurrentBitIndex,local_1e8.UnvisitedBitMask);
  local_148 = CONCAT44(local_1e8._28_4_,local_1e8.BaseBitIndex);
  local_100 = local_98._8_4_ - local_64;
  local_128._16_8_ = local_1e8.Array;
  uStack_140._4_4_ = uStack_fc;
  uStack_140._0_4_ = local_100;
  local_158 = local_1e8.Array;
  local_128._0_8_ = local_168._0_8_;
  local_128._8_8_ = unique0x10000887;
  lStack_110 = uStack_150;
  lStack_108 = local_148;
  pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_128,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
  local_f8 = local_98;
  lStack_f0 = pTVar13->_padding_;
  pTStack_e8 = pTVar13->Array;
  lStack_e0._0_4_ = pTVar13->UnvisitedBitMask;
  lStack_e0._4_4_ = pTVar13->CurrentBitIndex;
  lStack_d8 = *(longlong *)&pTVar13->BaseBitIndex;
  local_d0 = local_98._8_4_ - local_64;
  local_c8._44_4_ = uStack_cc;
  local_c8.InitialNum = local_d0;
  local_c8._padding_ = (longlong)local_f8;
  local_c8._padding_ = lStack_f0;
  local_c8._padding_ = (longlong)pTStack_e8;
  local_c8._padding_ = lStack_e0;
  local_c8._padding_ = lStack_d8;
  bVar5 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_168,&local_c8);
  bVar26 = false;
  if (bVar5) {
    do {
      pTVar14 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->CachedVerseFilesByPath,
                       *(FName *)(*(longlong *)local_168._0_8_ + (longlong)uStack_150._4_4_ * 0x10))
      ;
      bVar6 = bVar26;
      if (pTVar14 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar6 = true;
        if (param_2 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) break;
        if ((param_2 == pTVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = pTVar14->ArrayNum;
        bVar6 = true;
        if (iVar8 != 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,iVar8,&param_2->AllocatorInstance,&param_2->ArrayNum,
                              &param_2->ArrayMax);
          memcpy((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8,
                 (pTVar14->AllocatorInstance).Data,(longlong)iVar8 << 3);
        }
      }
      uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 & ~uStack_15c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_168 + 8));
      bVar5 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_168,&local_c8);
      bVar26 = bVar6;
    } while (bVar5);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar26 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar26) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return bVar6;
}

// HasAssets @ 142b9a0f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::HasAssets
          (FAssetRegistryImpl *this,FName param_1,bool param_2)

{
  undefined1 local_res8 [8];
  FAssetRegistryImpl *local_28;
  undefined1 *local_20;
  code *local_18;
  FAssetRegistryImpl **local_10;
  
  local_res8[0] = FAssetRegistryState::HasAssets(&this->State,param_1,true);
  if ((!(bool)local_res8[0]) && (param_2)) {
    local_20 = local_res8;
    local_10 = &local_28;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::HasAssets'::__l5::<lambda_1>,bool,FName>
               ::Call;
    local_28 = this;
    FPathTree::EnumerateSubPaths
              (&this->CachedPathTree,param_1,(TFunctionRef<bool___cdecl(FName)> *)&local_18,true);
  }
  return (bool)local_res8[0];
}

// HasSerializedDiscoveryCache @ 142b9a390

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::HasSerializedDiscoveryCache(FAssetRegistryImpl *this)

{
  bool bVar1;
  
  bVar1 = FAssetDataGatherer::HasSerializedDiscoveryCache((this->GlobalGatherer).Ptr);
  return bVar1;
}

// InitRedirectors @ 142b9a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::InitRedirectors
          (FAssetRegistryImpl *this,FEventContext *param_1,FClassInheritanceContext *param_2,
          bool *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  IPluginManager *pIVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  TSharedRef<IPlugin,1> *pTVar8;
  TSharedRef<IPlugin,1> *pTVar9;
  undefined1 auStackY_228 [32];
  bool local_1f8 [8];
  FString local_1f0;
  TSharedRef<IPlugin,1> *local_1e0;
  int local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  TSharedRef<IPlugin,1> *local_1a8;
  FAssetRegistryImpl *local_1a0;
  code *local_198;
  TSharedRef<IPlugin,1> **local_190;
  FString local_188;
  FString local_178;
  wchar_t local_168 [128];
  void *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  *param_3 = false;
  pIVar4 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,&local_1e0);
  iVar2 = local_1d8;
  pTVar9 = local_1e0 + local_1d8;
  pTVar8 = local_1e0;
  while( true ) {
    if (local_1d8 != iVar2) {
      local_1f8[1] = false;
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1f8 + 1);
    }
    if (pTVar8 == pTVar9) break;
    (**(code **)(*(longlong *)pTVar8->Object + 8))();
    local_68 = (void *)0x0;
    local_60 = local_168;
    local_58 = 7;
    pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(local_168,8,"Windows",8);
    if ((pwVar5 == (wchar_t *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FPaths::GeneratedConfigDir(&local_188);
    ::FString::PrintfImpl(&local_1b8,L"%s%s/%s.ini");
    FConfigCacheIni::NormalizeConfigIniPath(&local_1f0,&local_1b8);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    pFVar6 = FConfigCacheIni::NormalizeConfigIniPath(&local_178,&local_1f0);
    if (&local_1f0 != pFVar6) {
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      local_1f0.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_1f0.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_1f8[0] = false;
    bVar3 = FConfigCacheIni::GetBool
                      (GConfig,L"PluginSettings",L"RemapPluginContentToGame",local_1f8,&local_1f0);
    if ((bVar3) && (local_1f8[0] != false)) {
      (**(code **)(*(longlong *)pTVar8->Object + 8))();
      ::FString::PrintfImpl(&local_1c8,L"/%s/");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_1c8.Data.ArrayNum != 0) {
        FVar7.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_1d0,(wchar_t *)FVar7.Data);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      local_190 = &local_1a8;
      local_198 = Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::InitRedirectors'::__l9::<lambda_1>,bool,FAssetData_const_&>
                  ::Call;
      local_1a8 = pTVar8;
      local_1a0 = this;
      EnumerateAssetsByPathNoTags
                (this,local_1d0,(TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_198,true,
                 false);
      *param_3 = true;
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    pTVar8 = pTVar8 + 1;
  }
  DestructItems<TSharedRef<IPlugin,1>,int>(local_1e0,local_1d8);
  if (local_1e0 != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free(local_1e0);
  }
  return;
}

// Initialize @ 142b9a7e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::Initialize
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FInitializeContext *param_2)

{
  EPerformanceMode EVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  wchar_t *pwVar6;
  FTelemetryRouter *this_00;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool local_res8 [8];
  undefined1 local_res20 [8];
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  double local_a8;
  undefined1 local_a0;
  TMemoryView<void_const_> local_98;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FGuid local_78;
  TStringView<wchar_t> local_68 [3];
  
  if (this->bInitializationComplete == false) {
    QueryPerformanceCounter(&local_b8);
    dVar5 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bInitialSearchCompleted = (atomic<bool>)0x1;
    this->bAdditionalMountSearchInProgress = (atomic<bool>)0x0;
    this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
    this->GatherStatus = TickActiveGatherActive;
    this->PerformanceMode = MostlyStatic;
    this->bSearchAllAssets = false;
    bVar10 = 5 < (byte)LogAssetRegistry._0_1_;
    this->StoreGatherResultsTimeSeconds = 0.0;
    this->bVerboseLogging = bVar10;
    param_2->bUpdateDiskCacheAfterLoad = false;
    this->bIsTempCachingEnabled = false;
    this->bIsTempCachingAlwaysEnabled = false;
    (this->TempCachedInheritanceBuffer).bDirty = true;
    this->SavedGeneratorClassesVersionNumber = 0xffffffffffffffff;
    this->SavedAllClassesVersionNumber = 0xffffffffffffffff;
    this->bVerifyMountPointAfterGather = false;
    CollectCodeGeneratorClasses(this);
    Utils::InitializeSerializationOptionsFromIni
              (&this->SerializationOptions,&this->CachedParsedFilterRules,(ITargetPlatform *)0x0,
               ForGame,true);
    Utils::InitializeSerializationOptionsFromIni
              (&this->DevelopmentSerializationOptions,(FFilterTagRules *)0x0,(ITargetPlatform *)0x0,
               ForDevelopment,true);
    uVar7 = 0;
    pwVar6 = FCommandLine::Get();
    bVar10 = FParse::Bool(pwVar6,L"AssetGatherAll=",local_res8);
    if ((bVar10) && (local_res8[0] != false)) {
      bVar10 = TryConstructGathererIfNeeded(this);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TryConstructGathererIfNeeded()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x46f,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar10 = FAssetDataGatherer::IsAsyncEnabled((this->GlobalGatherer).Ptr);
      if (bVar10) {
        EVar1 = this->PerformanceMode;
        if (EVar1 != BulkLoading) {
          this->PerformanceMode = BulkLoading;
          if (((EVar1 == MostlyStatic) != (AssetRegistry::Impl::bDeferDependencySort == false)) ||
             ((EVar1 == MostlyStatic) != (AssetRegistry::Impl::bDeferReferencerSort == false))) {
            FAssetRegistryState::SetDependencyNodeSorting
                      (&this->State,AssetRegistry::Impl::bDeferDependencySort == false,
                       AssetRegistry::Impl::bDeferReferencerSort == false);
          }
        }
        SearchAllAssets(this,&param_2->Events,&param_2->InheritanceContext,false);
        uVar7 = 1;
      }
      else {
        param_2->bNeedsSearchAllAssetsAtStartSynchronous = false;
      }
    }
    ConsumeOrDeferPreloadedPremade(this,param_2->UARI,&param_2->Events);
    QueryPerformanceCounter(&local_b0);
    dVar4 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (4 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    this_00 = FTelemetryRouter::Get();
    local_98.Data = &local_a8;
    local_78 = Telemetry::AssetRegistry::FStartupTelemetry::TelemetryID;
    local_98.Size = 0x10;
    local_a8 = dVar4 - dVar5;
    local_a0 = uVar7;
    FTelemetryRouter::ProvideTelemetryInternal(this_00,&local_78,&local_98);
    FPackageName::QueryRootContentPaths(&param_2->RootContentPaths,false,false,true);
    iVar2 = (param_2->RootContentPaths).ArrayNum;
    pFVar8 = (param_2->RootContentPaths).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((param_2->RootContentPaths).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar8 == pFVar9) break;
      local_88 = *(wchar_t **)pFVar8;
      iStack_80 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        iStack_80 = 0;
      }
      local_68[0]._12_4_ = uStack_7c;
      local_68[0].Size = iStack_80;
      local_68[0].DataPtr = local_88;
      AddPath(this,&param_2->Events,local_68);
      pFVar8 = pFVar8 + 0x10;
    }
    InitRedirectors(this,&param_2->Events,&param_2->InheritanceContext,
                    &param_2->bRedirectorsNeedSubscribe);
    this->bInitializationComplete = true;
  }
  return;
}

// IsGathering @ 142b9c740

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UE::AssetRegistry::FAssetRegistryImpl::IsGathering(FAssetRegistryImpl *this)

{
  if ((this->bInitialSearchCompleted != (atomic<bool>)0x0) &&
     (this->bAdditionalMountSearchInProgress == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// IsLoadingAssets @ 142b9c780

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UE::AssetRegistry::FAssetRegistryImpl::IsLoadingAssets(FAssetRegistryImpl *this)

{
  return this->bInitialSearchCompleted == (atomic<bool>)0x0;
}

// LoadPremadeAssetRegistry @ 142b9d620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::LoadPremadeAssetRegistry
          (FAssetRegistryImpl *this,FEventContext *param_1,ELoadResult param_2,
          FAssetRegistryState *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  IPluginManager *pIVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  IFileManager *pIVar7;
  ForAnyElementType FVar8;
  TSharedRef<IPlugin,1> *pTVar9;
  TSharedRef<IPlugin,1> *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_428 [32];
  FEngineTrackedActivityScope local_3f6;
  undefined1 local_3f5 [5];
  FAssetRegistryLoadOptions local_3f0;
  undefined1 local_3e8 [16];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3d8;
  FScopedBootTiming local_3c8;
  FArchiveState local_3a8;
  undefined8 local_318;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> TStack_310;
  FScopedBootTiming local_2f8;
  FScopedBootTiming local_2e0;
  FAssetRegistryState local_2c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_428;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId965,"LoadPremadeAssetRegistry",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x3c5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId965);
  }
  FScopedBootTiming::FScopedBootTiming(&local_2e0,"LoadPremadeAssetRegistry");
  ::FString::FString((FString *)local_3e8,"Loading premade asset registry");
  FEngineTrackedActivityScope::FEngineTrackedActivityScope(&local_3f6,(FString *)local_3e8);
  if ((TSharedRef<IPlugin,1> *)local_3e8._0_8_ != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free((void *)local_3e8._0_8_);
  }
  if ((this->SerializationOptions).bSerializeAssetRegistry != false) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId972,"LoadPremadeAssetRegistry_Main",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                 ,0x3cc);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId972);
    }
    FScopedBootTiming::FScopedBootTiming(&local_3c8,"LoadPremadeAssetRegistry_Main");
    if (param_2 == Succeeded) {
      iVar1 = (this->State).NumAssets;
      if (iVar1 == 0) {
        FAssetRegistryState::operator=(&this->State,param_3);
        CachePathsFromState(this,param_1,&this->State);
      }
      else if (iVar1 < param_3->NumAssets) {
        FAssetRegistryState::FAssetRegistryState(&local_2c8,&this->State);
        FAssetRegistryState::operator=(&this->State,param_3);
        CachePathsFromState(this,param_1,&this->State);
        AppendState(this,param_1,&local_2c8,Append,false);
        FAssetRegistryState::~FAssetRegistryState(&local_2c8);
      }
      else {
        AppendState(this,param_1,param_3,OnlyUpdateNew,false);
      }
      local_3e8._8_8_ = &local_3f0;
      local_3e8._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>,void,FName>
           ::Call;
      local_3f0 = (FAssetRegistryLoadOptions)this;
      FAssetRegistryState::EnumerateAllPaths
                (&this->State,(TFunctionRef<void___cdecl(FName)> *)local_3e8);
      (this->State).bCookedGlobalAssetRegistryState = true;
    }
    else if (1 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    FScopedBootTiming::~FScopedBootTiming(&local_3c8);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1018,"LoadPremadeAssetRegistry_Plugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x3fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1018);
  }
  FScopedBootTiming::FScopedBootTiming(&local_2f8,"LoadPremadeAssetRegistry_Plugins");
  this_00 = FPlatformFileManager::Get();
  this_01 = (FPakPlatformFile *)FPlatformFileManager::FindPlatformFile(this_00,L"PakFile");
  pIVar5 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar5 + 200))(pIVar5,local_3e8);
  uVar2 = local_3e8._8_4_;
  pTVar10 = (TSharedRef<IPlugin,1> *)(local_3e8._0_8_ + (longlong)(int)local_3e8._8_4_ * 0x10);
  pTVar9 = (TSharedRef<IPlugin,1> *)local_3e8._0_8_;
  while( true ) {
    if (local_3e8._8_4_ != uVar2) {
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3f5);
    }
    if (pTVar9 == pTVar10) break;
    cVar3 = (**(code **)(*(longlong *)pTVar9->Object + 0x68))();
    if (cVar3 != '\0') {
      local_3a8._padding_ = 0;
      local_3a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_3a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_3a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_3a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_3a8._40_8_ = 0;
      local_3a8.ArSerializingDefaults = 0;
      local_3a8.ArPortFlags = 0;
      local_3a8.ArMaxSerializeSize = 0;
      local_3a8.ArUEVer.FileVersionUE4 = 0;
      local_3a8.ArUEVer.FileVersionUE5 = 0;
      local_3a8.ArLicenseeUEVer = 0;
      local_3a8.ArEngineVer.Major = 0;
      local_3a8.ArEngineVer.Minor = 0;
      local_3a8.ArEngineVer.Patch = 0;
      local_3a8.ArEngineVer._6_2_ = 0;
      local_3a8.ArEngineVer.Changelist = 0;
      local_3a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_3a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_3a8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_3a8.SerializedProperty = (FProperty *)0x0;
      local_3a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_3a8.bCustomVersionsAreReset = false;
      local_3a8._129_7_ = 0;
      local_3a8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_3a8);
      local_3a8._padding_ = (longlong)&___7FArrayReader__6B_;
      local_318 = 0;
      TStack_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_310.ArrayNum = 0;
      TStack_310.ArrayMax = 0;
      FArchiveState::SetIsLoading(&local_3a8,true);
      (**(code **)(local_3a8._padding_ + 0x108))(&local_3a8,0);
      pTVar6 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
               (**(code **)(*(longlong *)pTVar9->Object + 0x20))(pTVar9->Object,&local_3c8);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_3d8,pTVar6,0x13 - (uint)(pTVar6->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_3d8,L"AssetRegistry.bin",0x11);
      if (local_3c8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Message.Data.AllocatorInstance.Data);
      }
      if (this_01 == (FPakPlatformFile *)0x0) {
        pIVar7 = IFileManager::Get();
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_3d8.ArrayNum != 0) {
          FVar8.Data = local_3d8.AllocatorInstance.Data;
        }
        cVar3 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,FVar8.Data);
      }
      else {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_3d8.ArrayNum != 0) {
          FVar8.Data = local_3d8.AllocatorInstance.Data;
        }
        cVar3 = FPakPlatformFile::FindFileInPakFiles
                          (this_01,(wchar_t *)FVar8.Data,(TRefCountPtr<FPakFile> *)0x0,
                           (FPakEntry *)0x0);
      }
      if (cVar3 != '\0') {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_3d8.ArrayNum != 0) {
          FVar8.Data = local_3d8.AllocatorInstance.Data;
        }
        bVar4 = FFileHelper::LoadFileToArray(&TStack_310,(wchar_t *)FVar8.Data,0);
        if (bVar4) {
          local_318 = 0;
          FAssetRegistryState::FAssetRegistryState(&local_2c8);
          local_3f0.bLoadDependencies = true;
          local_3f0.bLoadPackageData = true;
          local_3f0._2_2_ = 0;
          local_3f0.ParallelWorkers = 0;
          FAssetRegistryState::Load(&local_2c8,(FArchive *)&local_3a8,&local_3f0,(Type *)0x0);
          AppendState(this,param_1,&local_2c8,Append,false);
          FAssetRegistryState::~FAssetRegistryState(&local_2c8);
        }
      }
      if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.AllocatorInstance.Data);
      }
      if (TStack_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_310.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_3a8);
    }
    pTVar9 = pTVar9 + 1;
  }
  DestructItems<TSharedRef<IPlugin,1>,int>((TSharedRef<IPlugin,1> *)local_3e8._0_8_,local_3e8._8_4_)
  ;
  if ((TSharedRef<IPlugin,1> *)local_3e8._0_8_ != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free((void *)local_3e8._0_8_);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_2f8);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this->bPreloadingComplete = true;
  FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_3f6);
  FScopedBootTiming::~FScopedBootTiming(&local_2e0);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// LogSearchDiagnostics @ 142b9db50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(FAssetRegistryImpl *this,double param_1)

{
  TMap<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  TMap<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  FTelemetryRouter *this_01;
  longlong lVar9;
  FTopLevelAssetPath *this_02;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  float fVar16;
  undefined1 auStack_3e8 [32];
  double local_3c8;
  double local_3c0;
  double local_3b8;
  int local_3b0;
  int local_3a8;
  int local_3a0;
  int local_398;
  undefined1 local_388;
  undefined1 local_387 [7];
  TMap<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
  *local_380;
  int iStack_378;
  uint uStack_374;
  undefined1 *local_370;
  undefined4 uStack_368;
  int iStack_364;
  int local_360;
  int iStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  int local_350;
  LARGE_INTEGER local_348;
  FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>
  local_340;
  TMap<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
  *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_330;
  undefined8 uStack_310;
  TMemoryView<void_const_> local_308;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  FGuid local_2b8;
  FString local_2a8;
  FAssetGatherDiagnostics local_298;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_3e8;
  FAssetDataGatherer::GetDiagnostics((this->GlobalGatherer).Ptr,&local_298);
  fVar16 = local_298.GatherTimeSeconds + local_298.DiscoveryTimeSeconds;
  fVar3 = this->StoreGatherResultsTimeSeconds;
  QueryPerformanceCounter(&local_348);
  local_2d0 = local_298.NumCachedDirectories;
  local_2cc = local_298.NumUncachedDirectories;
  local_2c8 = local_298.NumCachedAssetFiles;
  local_2f0 = (double)(fVar16 + fVar3);
  local_2c4 = local_298.NumUncachedAssetFiles;
  local_2e0 = (double)local_298.GatherTimeSeconds;
  local_2f8 = ((double)local_348.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) - param_1;
  local_2e8 = (double)local_298.DiscoveryTimeSeconds;
  local_2d8 = (double)this->StoreGatherResultsTimeSeconds;
  this_01 = FTelemetryRouter::Get();
  local_308.Data = &local_2f8;
  local_308.Size = 0x38;
  local_2b8 = Telemetry::AssetRegistry::FGatherTelemetry::TelemetryID;
  FTelemetryRouter::ProvideTelemetryInternal(this_01,&local_2b8,&local_308);
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.End = (wchar_t *)local_58;
  local_398 = local_298.NumUncachedAssetFiles;
  local_3a0 = local_298.NumCachedAssetFiles;
  local_3a8 = local_298.NumUncachedDirectories;
  local_3b0 = local_298.NumCachedDirectories;
  local_3b8 = (double)local_298.WallTimeSeconds;
  local_3c0 = (double)this->StoreGatherResultsTimeSeconds;
  local_3c8 = (double)local_298.GatherTimeSeconds;
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_278,
             L"AssetRegistryGather time %.4fs: AssetDataDiscovery %0.4fs, AssetDataGather %0.4fs, StoreResults %0.4fs. Wall time %0.4fs.\n\tNumCachedDirectories %d. NumUncachedDirectories %d. NumCachedFiles %d. NumUncachedFiles %d."
            );
  iVar10 = 0;
  uVar8 = 1;
  if (4 < (byte)LogAssetRegistry._0_1_) {
    if (local_278.End < local_278.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,1);
    }
    *local_278.CurPos = L'\0';
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  if (this->bVerboseLogging != false) {
    if (5 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    local_340.Predicate.Predicate =
         (TDereferenceWrapper<__int64,_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>
          )&local_388;
    this_00 = &this->TagSizeByClass;
    TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>
              ((TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>
                *)this_00,&local_340);
    puVar1 = &(this->TagSizeByClass).field_0x10;
    iVar4 = *(int *)&(this->TagSizeByClass).field_0x28;
    local_360 = 0;
    iStack_364 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->TagSizeByClass).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        local_360 = local_360 + 0x20;
        iVar10 = iVar10 + 1;
        iStack_364 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142b9de1d;
        uVar13 = puVar15[lVar9 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_350 = (int)lVar9;
      iStack_364 = local_360 + -1 + local_350;
      if (iVar4 < iStack_364) {
        iStack_364 = iVar4;
      }
    }
LAB_142b9de1d:
    iStack_358 = *(int *)&(this->TagSizeByClass).field_0x8 -
                 *(int *)&(this->TagSizeByClass).field_0x34;
    uVar13 = *(uint *)&(this->TagSizeByClass).field_0x28;
    uStack_368 = 0xffffffff;
    TStack_330._padding_ = CONCAT44(uVar8,iVar10);
    uVar12 = uVar13 & 0xffffffe0;
    TStack_330.CurrentBitIndex = iStack_364;
    TStack_330.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar13 >> 5;
    TStack_330._28_4_ = iStack_364;
    TStack_330.BaseBitIndex = local_360;
    uStack_310 = CONCAT44(uStack_354,iStack_358);
    local_380 = this_00;
    iStack_378 = iVar10;
    uStack_374 = uVar8;
    local_370 = puVar1;
    iStack_35c = iStack_364;
    local_338 = this_00;
    TStack_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)&(this->TagSizeByClass).field_0x28;
    if (uVar13 != uVar8) {
      puVar14 = *(undefined1 **)&(this->TagSizeByClass).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_142b9df40;
        uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar13 = (int)lVar9 + -1 + uVar12;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_142b9df40:
    while( true ) {
      pTVar6 = local_338;
      if (*(int *)(&local_338->field_0x0 + 8) - *(int *)(&local_338->field_0x0 + 0x34) !=
          (int)uStack_310) {
        `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_387);
      }
      if ((((TStack_330.CurrentBitIndex == uVar13) &&
           (TStack_330.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
          (pTVar6 == this_00)) ||
         (this_02 = (FTopLevelAssetPath *)
                    ((longlong)TStack_330.CurrentBitIndex * 0x20 + *(longlong *)&pTVar6->field_0x0),
         (longlong)this_02[1].PackageName < 1000000)) break;
      if (5 < (byte)LogAssetRegistry._0_1_) {
        FTopLevelAssetPath::ToString(this_02,&local_2a8);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
      }
      TStack_330.UnvisitedBitMask = TStack_330.UnvisitedBitMask & ~TStack_330._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_330);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// OnAdditionalMountSearchCompleted @ 142b9e320

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnAdditionalMountSearchCompleted
          (FAssetRegistryImpl *this,FEventContext *param_1)

{
  EPerformanceMode EVar1;
  bool bVar2;
  bool bVar3;
  
  EVar1 = this->PerformanceMode;
  if (EVar1 == MostlyStatic) goto LAB_142b9e380;
  if ((EVar1 != BulkLoading) || (AssetRegistry::Impl::bDeferDependencySort)) {
    bVar2 = false;
    if (EVar1 == BulkLoading) goto LAB_142b9e351;
LAB_142b9e35e:
    bVar3 = false;
  }
  else {
    bVar2 = true;
LAB_142b9e351:
    if (AssetRegistry::Impl::bDeferReferencerSort) goto LAB_142b9e35e;
    bVar3 = true;
  }
  this->PerformanceMode = MostlyStatic;
  if ((!bVar2) || (!bVar3)) {
    FAssetRegistryState::SetDependencyNodeSorting(&this->State,true,true);
  }
LAB_142b9e380:
  LogSearchDiagnostics(this,this->AdditionalMountSearchStartTime);
  FMiscTrace::OutputEndRegion(L"Asset Registry - Additional Mount Search");
  FAssetDataGatherer::UpdateCacheForSaving((this->GlobalGatherer).Ptr);
  FAssetDataGatherer::OnAdditionalMountSearchCompleted((this->GlobalGatherer).Ptr);
  Shrink(this);
  param_1->bKnownGathersCompleteEventBroadcast = true;
  this->bAdditionalMountSearchInProgress = (atomic<bool>)0x0;
  return;
}

// OnAssetCollision_Private @ 142b9e3f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FAssetData_&,FAssetData_&,FAssetData_*_&),FDefaultTSDelegateUserPolicy>
* __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnAssetCollision_Private(FAssetRegistryImpl *this)

{
  return &this->AssetCollisionEvent;
}

// OnContentPathDismounted @ 142b9e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted
          (FAssetRegistryImpl *this,FEventContext *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  FAssetDataGatherer *this_01;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FName FVar7;
  FEventContext *pFVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar18;
  ForElementType<unsigned_int> FVar19;
  ForAnyElementType FVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  ForElementType<FSetElementId> FVar23;
  FName *pFVar24;
  undefined1 *puVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined8 *puVar28;
  FName FVar29;
  ulonglong uVar30;
  wchar_t *pwVar31;
  int iVar32;
  longlong lVar33;
  uint *puVar34;
  undefined1 auStackY_2c8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296 [2];
  int local_294;
  uint local_290;
  uint local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  FAssetData **local_268;
  undefined8 local_260;
  FName local_258;
  TBitArray<FDefaultBitArrayAllocator> *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  FAssetData ***local_228;
  FAssetRegistryImpl *local_220;
  FName *local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FEventContext *local_1f0;
  FString *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  FAssetData *local_1d8;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FSparseArrayAllocationInfo local_178;
  FAssetData **local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FAssetRegistryImpl *local_158;
  FEventContext *local_150;
  code *local_148;
  FAssetRegistryImpl **local_140;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [40];
  int local_100;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  TArrayView<FAssetData_*,int> local_e8;
  FName local_d8;
  FName local_d0 [2];
  longlong local_c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this_01 = (this->GlobalGatherer).Ptr;
  local_220 = this;
  local_1f0 = param_1;
  local_1e8 = param_3;
  if (this_01 != (FAssetDataGatherer *)0x0) {
    local_138 = (param_4->Data).AllocatorInstance.Data;
    iVar12 = (param_4->Data).ArrayNum;
    iStack_130 = iVar12 + -1;
    if (iVar12 == 0) {
      iStack_130 = 0;
    }
    local_f8._12_4_ = uStack_12c;
    local_f8.Size = iStack_130;
    local_f8.DataPtr = (wchar_t *)local_138;
    FAssetDataGatherer::RemoveMountPoint(this_01,&local_f8);
  }
  iVar32 = (param_3->Data).ArrayNum;
  iVar12 = iVar32 + -1;
  if (iVar32 == 0) {
    iVar12 = 0;
  }
  pFVar14 = ::FName::FName(local_d0,iVar12,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                           FNAME_Add);
  FVar29 = *pFVar14;
  uVar11 = ::GetTypeHash(FVar29.ComparisonIndex.Value);
  if (*(int *)&(this->PersistentMountPoints).Elements.field_0x8 !=
      *(int *)&(this->PersistentMountPoints).Elements.field_0x34) {
    FVar23 = (this->PersistentMountPoints).Hash.SecondaryData;
    if (FVar23 == (ForElementType<FSetElementId>)0x0) {
      FVar23 = (ForElementType<FSetElementId>)&(this->PersistentMountPoints).Hash;
    }
    iVar12 = *(int *)((longlong)FVar23 +
                     (ulonglong)
                     ((this->PersistentMountPoints).HashSize - 1U & FVar29.Number + uVar11) * 4);
    if (iVar12 != -1) {
      lVar2 = *(longlong *)&(this->PersistentMountPoints).Elements;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar12 * 0x10) == FVar29) {
          return;
        }
        iVar12 = *(int *)(lVar2 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar31 = L"";
  }
  else {
    pwVar31 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_258,pwVar31);
  pFVar14 = (FName *)0x0;
  local_6c = 0x80;
  local_268 = (FAssetData **)0x0;
  local_260 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_68 = -1;
  FPathTree::GetSubPaths
            (&this->CachedPathTree,local_258,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,true);
  if (local_64 == 0) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                        (int *)(local_98 + 0xc));
    uVar11 = local_70;
    if (local_70 == 0) {
      iVar32 = 0;
LAB_142b9e6ed:
      if (local_6c < (int)(local_70 + 1)) {
        uVar22 = local_6c + 0x1fU >> 5;
        uVar26 = local_70 + 0x20 >> 5;
        if (uVar26 < 5) {
          local_6c = 4;
        }
        else {
          uVar30 = (ulonglong)uVar26;
          if (uVar22 < 5) {
            uVar22 = 0;
          }
          if (uVar22 == 0) {
            uVar16 = 4;
            if (4 < uVar30) {
              uVar16 = uVar30;
            }
          }
          else {
            uVar16 = ((ulonglong)uVar26 * 3 >> 3) + 0x10 + uVar30;
          }
          uVar15 = FMemory::QuantizeSize(uVar16 * 4,0);
          local_6c = (int)(uVar15 >> 2);
          if (local_6c < (int)uVar26) {
            local_6c = 0x7fffffff;
          }
        }
        local_6c = local_6c << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
      }
      local_70 = local_70 + 1;
      uVar26 = (int)local_70 >> 0x1f & 0x1f;
      uVar22 = local_70 + uVar26;
      iVar13 = (uVar22 & 0x1f) - uVar26;
      if (iVar13 != 0) {
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_78;
        }
        puVar34 = (uint *)((longlong)FVar19 + (longlong)((int)uVar22 >> 5) * 4);
        *puVar34 = *puVar34 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
      }
    }
    else {
      iVar32 = (int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5;
      if (iVar32 != (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5)
      goto LAB_142b9e6ed;
      local_70 = local_70 + 1;
    }
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_78;
    }
    puVar34 = (uint *)((longlong)FVar19 + (longlong)iVar32 * 4);
    *puVar34 = *puVar34 & ~(1 << ((byte)uVar11 & 0x1f));
    iVar32 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar32 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
    iVar12 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar32 * 0x10) = 0xffffffff;
    }
  }
  local_68 = iVar32;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_178,iVar12);
  pFVar24 = pFVar14;
  if (local_178.Pointer != (FName *)0x0) {
    *(FName *)local_178.Pointer = local_258;
    (((FName *)((longlong)local_178.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
    pFVar24 = local_178.Pointer;
  }
  FVar29 = *pFVar24;
  uVar11 = ::GetTypeHash(FVar29.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar29.Number;
  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
    FVar20.Data = (FScriptContainerElement *)local_60;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FVar20.Data = local_58.Data;
    }
    for (iVar12 = *(int *)((longlong)FVar20.Data + (ulonglong)(local_50 - 1 & uVar11) * 4);
        iVar12 != -1; iVar12 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0x10 + 8)) {
      if (*(FName *)(local_98._0_8_ + (longlong)iVar12 * 0x10) == *pFVar24) {
        if (iVar12 != -1) {
          *(FName *)(local_98._0_8_ + (longlong)iVar12 * 0x10) = *pFVar24;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,local_178.Index,1);
          goto LAB_142b9ebce;
        }
        break;
      }
    }
  }
  uVar26 = 1;
  uVar22 = local_98._8_4_ - local_64;
  if (3 < uVar22) {
    uVar30 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_1e0 = (undefined4)lVar2;
    uVar26 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar26 <= (int)local_50)) {
    uVar11 = local_50 - 1 & uVar11;
    pFVar24[1].Number = uVar11;
    FVar20.Data = (FScriptContainerElement *)local_60;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FVar20.Data = local_58.Data;
    }
    uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
    pFVar24[1].ComparisonIndex.Value = *(uint *)((longlong)FVar20.Data + uVar30 * 4);
    *(int *)((longlong)FVar20.Data + uVar30 * 4) = local_178.Index;
    goto LAB_142b9ebce;
  }
  local_50 = uVar26;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar26 != 0) {
    uVar11 = uVar26;
    if (uVar26 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_142b9e9b7;
      }
    }
    else {
LAB_142b9e9b7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar26) {
      uVar30 = (ulonglong)uVar26;
      pFVar24 = pFVar14;
      do {
        FVar20.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_58.Data;
        }
        uVar16 = (ulonglong)pFVar24 & (longlong)(int)uVar26 - 1U;
        pFVar24 = (FName *)((longlong)&(pFVar24->ComparisonIndex).Value + 1);
        *(undefined4 *)((longlong)FVar20.Data + uVar16 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_288 = 0;
    uStack_284 = 1;
    uStack_274 = 0;
    uStack_270 = 0;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar11 = *(uint *)FVar19;
      pFVar24 = pFVar14;
      while (uVar11 == 0) {
        uStack_270 = (int)pFVar24 + 0x20;
        pFVar24 = (FName *)(ulonglong)uStack_270;
        iVar12 = (int)pFVar14;
        local_288 = iVar12 + 1;
        pFVar14 = (FName *)(ulonglong)local_288;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_288)
        goto LAB_142b9eae0;
        uVar11 = ((uint *)((longlong)FVar19 + 4))[iVar12];
      }
      uStack_284 = -uVar11 & uVar11;
      uVar30 = (ulonglong)uStack_284 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_1dc = (int)lVar2;
      uStack_274 = local_1dc + -1 + uStack_270;
      pFVar14 = (FName *)(ulonglong)uStack_274;
      if ((int)local_70 < (int)uStack_274) {
LAB_142b9eae0:
        pFVar14 = (FName *)(ulonglong)local_70;
        uStack_274 = local_70;
      }
    }
    local_278 = 0xffffffff;
    local_1d0 = (longlong *)local_98;
    local_1c8._padding_ = CONCAT44(uStack_284,local_288);
    local_1c8.CurrentBitIndex = uStack_274;
    local_1c8.UnvisitedBitMask = 0xffffffff;
    local_1c8._28_4_ = uStack_26c;
    local_1c8.BaseBitIndex = uStack_270;
    local_1c8.Array = pTStack_280;
    if ((int)pFVar14 < (int)local_70) {
      do {
        puVar28 = (undefined8 *)((longlong)(int)pFVar14 * 0x10 + *local_1d0);
        uVar3 = *puVar28;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar11 = local_50 - 1 & uVar11 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar28 + 0xc) = uVar11;
        FVar20.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_58.Data;
        }
        uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar28 + 1) = *(undefined4 *)((longlong)FVar20.Data + uVar30 * 4);
        *(int *)((longlong)FVar20.Data + uVar30 * 4) = (int)pFVar14;
        local_1c8.UnvisitedBitMask = local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
        pFVar14 = (FName *)(ulonglong)(uint)local_1c8.CurrentBitIndex;
      } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
    }
  }
LAB_142b9ebce:
  local_248._padding_._0_4_ = 0;
  local_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_248._padding_._4_4_ = 1;
  local_248.UnvisitedBitMask = 0xffffffff;
  local_248.CurrentBitIndex = 0;
  local_248.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
  }
  TStack_1a0._padding_ = CONCAT44(local_248._padding_._4_4_,(undefined4)local_248._padding_);
  local_1a8 = (longlong *)local_98;
  TStack_1a0.CurrentBitIndex = local_248.CurrentBitIndex;
  TStack_1a0.UnvisitedBitMask = local_248.UnvisitedBitMask;
  TStack_1a0._28_4_ = local_248._28_4_;
  TStack_1a0.BaseBitIndex = local_248.BaseBitIndex;
  local_100 = local_98._8_4_ - local_64;
  local_128._16_8_ = local_248.Array;
  uStack_180 = CONCAT44(uStack_fc,local_100);
  TStack_1a0.Array = local_248.Array;
  local_128._0_8_ = local_1a8;
  local_128._8_8_ = TStack_1a0._padding_;
  local_128._24_8_ = TStack_1a0._16_8_;
  local_128._32_8_ = TStack_1a0._24_8_;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_128,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
  local_c0 = pTVar17->_padding_;
  local_250 = pTVar17->Array;
  local_b0._0_4_ = pTVar17->UnvisitedBitMask;
  local_b0._4_4_ = pTVar17->CurrentBitIndex;
  uStack_a8 = *(undefined8 *)&pTVar17->BaseBitIndex;
  local_294 = local_b0._4_4_;
  pTStack_b8 = local_250;
  do {
    plVar9 = local_1a8;
    iVar12 = local_294;
    if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_1a0.CurrentBitIndex == iVar12) && (TStack_1a0.Array == local_250)) &&
       (plVar9 == (longlong *)local_98)) {
      pwVar31 = L"";
      iVar12 = (int)local_260;
      local_168 = local_268;
      if (((int)local_260 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = local_1f0;
      iStack_160 = iVar12;
      local_e8._12_4_ = uStack_15c;
      local_e8.ArrayNum = iVar12;
      local_e8.DataPtr = local_168;
      RemoveAssetDatas(this,local_1f0,&local_e8);
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_268 != (FAssetData **)0x0) {
        FMemory::Free(local_268);
      }
      if ((local_1e8->Data).ArrayNum != 0) {
        pwVar31 = (wchar_t *)(local_1e8->Data).AllocatorInstance.Data;
      }
      pFVar14 = ::FName::FName(&local_d8,pwVar31);
      local_140 = &local_158;
      local_150 = pFVar8;
      local_148 = Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l2::<lambda_2>,void,FName>
                  ::Call;
      local_158 = this;
      FPathTree::RemovePath
                (&this->CachedPathTree,*pFVar14,(TFunctionRef<void___cdecl(FName)> *)&local_148);
      return;
    }
    FVar29 = *(FName *)(*plVar9 + (longlong)TStack_1a0.CurrentBitIndex * 0x10);
    local_228 = &local_268;
    local_208 = FVar29;
    local_200 = FVar29;
    pTVar18 = TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(this->State).CachedAssetsByPath,FVar29);
    if (pTVar18 != (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar27 = (pTVar18->AllocatorInstance).Data;
      iVar12 = pTVar18->ArrayNum;
      pFVar1 = pFVar27 + (longlong)iVar12 * 8;
      while( true ) {
        if (pTVar18->ArrayNum != iVar12) {
          local_297 = 0;
          `TCheckedPointerIterator<FAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_297);
        }
        if (pFVar27 == pFVar1) break;
        local_1d8 = *(FAssetData **)pFVar27;
        bVar10 = Core::Private::Function::
                 TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted'::__l13::<lambda_1>,bool,FAssetData_*>
                 ::Call(&local_228,&local_1d8);
        if (!bVar10) break;
        pFVar27 = pFVar27 + 8;
      }
    }
    uVar11 = ::GetTypeHash(FVar29.ComparisonIndex.Value);
    if (*(int *)&(this->CachedVerseFilesByPath).field_0x8 !=
        *(int *)&(this->CachedVerseFilesByPath).field_0x34) {
      puVar4 = *(undefined1 **)&(this->CachedVerseFilesByPath).field_0x40;
      puVar25 = &(this->CachedVerseFilesByPath).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar25 = puVar4;
      }
      uVar11 = *(uint *)(puVar25 +
                        (ulonglong)
                        (*(int *)&(this->CachedVerseFilesByPath).field_0x48 - 1U &
                        FVar29.Number + uVar11) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          pFVar14 = (FName *)((longlong)(int)uVar11 * 0x20 +
                             *(longlong *)&this->CachedVerseFilesByPath);
          if (*pFVar14 == FVar29) {
            local_218 = pFVar14 + 1;
            if (pFVar14 == (FName *)0x0) {
              local_218 = (FName *)0x0;
            }
            if (local_218 != (FName *)0x0) {
              local_290 = local_218[1].ComparisonIndex.Value;
              uVar30 = (ulonglong)(int)local_290;
              FVar29 = *local_218;
              local_210 = (FName)((longlong)FVar29 + uVar30 * 8);
              goto LAB_142b9edf8;
            }
            break;
          }
          uVar11 = pFVar14[3].ComparisonIndex.Value;
        } while (uVar11 != 0xffffffff);
      }
    }
LAB_142b9effc:
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  } while( true );
LAB_142b9edf8:
  while( true ) {
    FVar7 = local_210;
    if (local_218[1].ComparisonIndex.Value != (uint)uVar30) {
      local_296[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_296);
    }
    if (FVar29 == FVar7) break;
    this_00 = &this->CachedVerseFiles;
    lVar2 = *(longlong *)FVar29;
    if (*(int *)&(this->CachedVerseFiles).Elements.field_0x8 !=
        *(int *)&(this->CachedVerseFiles).Elements.field_0x34) {
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      FVar23 = (ForElementType<FSetElementId>)&(this->CachedVerseFiles).Hash;
      FVar5 = (this->CachedVerseFiles).Hash.SecondaryData;
      FVar21 = FVar23;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = FVar5;
      }
      uVar11 = *(uint *)((longlong)FVar21 +
                        ((longlong)(this->CachedVerseFiles).HashSize - 1U &
                        (longlong)(int)((int)((ulonglong)lVar2 >> 0x20) + uVar11)) * 4);
      if (uVar11 != 0xffffffff) {
LAB_142b9ee80:
        lVar33 = (longlong)(int)uVar11 * 0x10;
        if (*(longlong *)(lVar33 + *(longlong *)&this_00->Elements) != lVar2)
        goto code_r0x000142b9ee91;
        if (((int)uVar11 < 0) ||
           (*(int *)&(this->CachedVerseFiles).Elements.field_0x28 <= (int)uVar11)) {
LAB_142b9ef0e:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Elements.IsValidIndex(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                             );
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          if ((*(int *)&(this->CachedVerseFiles).Elements.field_0x28 <= (int)uVar11) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar4 = *(undefined1 **)&(this->CachedVerseFiles).Elements.field_0x20;
          puVar25 = &(this->CachedVerseFiles).Elements.field_0x10;
          if (puVar4 != (undefined1 *)0x0) {
            puVar25 = puVar4;
          }
          uVar22 = uVar11;
          if ((int)uVar11 < 0) {
            uVar22 = uVar11 + 0x1f;
          }
          if ((*(uint *)(puVar25 + (longlong)((int)uVar22 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
          goto LAB_142b9ef0e;
        }
        FVar5 = (this->CachedVerseFiles).Hash.SecondaryData;
        lVar33 = *(longlong *)&this_00->Elements + lVar33;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar23 = FVar5;
        }
        puVar34 = (uint *)((longlong)FVar23 + (longlong)*(int *)(lVar33 + 0xc) * 4);
        while( true ) {
          uVar22 = *puVar34;
          if ((uVar22 == 0xffffffff) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NextElementIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2b5,L"Corrupt hash"), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar22 == uVar11) break;
          puVar34 = (uint *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)uVar22 * 0x10);
        }
        *puVar34 = *(uint *)(lVar33 + 8);
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_00,uVar11,1);
        this = local_220;
      }
    }
    FVar29 = (FName)((longlong)FVar29 + 8);
    uVar30 = (ulonglong)local_290;
  }
  local_1f8 = local_208;
  if (*(int *)&(this->CachedVerseFilesByPath).field_0x8 !=
      *(int *)&(this->CachedVerseFilesByPath).field_0x34) {
    uVar11 = ::GetTypeHash(local_208.ComparisonIndex.Value);
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->CachedVerseFilesByPath,local_200.Number + uVar11,&local_1f8);
  }
  goto LAB_142b9effc;
code_r0x000142b9ee91:
  uVar11 = *(uint *)(lVar33 + *(longlong *)&this_00->Elements + 8);
  if (uVar11 == 0xffffffff) goto code_r0x000142b9ee99;
  goto LAB_142b9ee80;
code_r0x000142b9ee99:
  FVar29 = (FName)((longlong)FVar29 + 8);
  uVar30 = (ulonglong)local_290;
  goto LAB_142b9edf8;
}

// OnContentPathMounted @ 142b9f3a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnContentPathMounted
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FEventContext *param_2,FClassInheritanceContext *param_3,FString *param_4,
          FString *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FAssetDataGatherer *this_00;
  double dVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TStringView<wchar_t> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FScanPathContext local_98;
  
  iVar5 = (param_5->Data).ArrayNum;
  pFVar1 = (param_5->Data).AllocatorInstance.Data;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar5 = iVar6;
  if (1 < iVar6) {
    iVar5 = 1;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  local_b8.ArrayNum = iVar6;
  if ((iVar7 == 1) &&
     (iVar5 = wcsncmp(L"/",(wchar_t *)(pFVar1 + ((longlong)iVar6 - (longlong)iVar7) * 2),1),
     iVar5 == 0)) {
    if (iVar6 + -1 < iVar6) {
      iVar6 = iVar6 + -1;
    }
    local_b8.ArrayNum = 0;
    if (0 < iVar6) {
      local_b8.ArrayNum = iVar6;
    }
  }
  local_b8.ArrayMax = local_c8._12_4_;
  local_c8.Size = local_b8.ArrayNum;
  local_c8.DataPtr = (wchar_t *)pFVar1;
  local_b8.AllocatorInstance.Data = pFVar1;
  AddPath(this,param_2,&local_c8);
  this_00 = (this->GlobalGatherer).Ptr;
  if ((this_00 != (FAssetDataGatherer *)0x0) && (this->bSearchAllAssets != false)) {
    bVar4 = FAssetDataGatherer::IsSynchronous(this_00);
    if (bVar4) {
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      ::FString::FString((FString *)&local_c8,param_6);
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
      ConstructItems<FString,FString,int>(local_b8.AllocatorInstance.Data,(FString *)&local_c8,1);
      AssetRegistry::Impl::FScanPathContext::FScanPathContext
                (&local_98,param_2,param_3,&local_b8,&local_a8,None,
                 (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0);
      DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.DataPtr);
      }
      FVar3.Data = local_a8.AllocatorInstance.Data;
      DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      ScanPathsSynchronous(this,param_1,&local_98);
      AssetRegistry::Impl::FScanPathContext::~FScanPathContext(&local_98);
    }
    else {
      if ((this->bInitialSearchCompleted != (atomic<bool>)0x0) &&
         (this->bAdditionalMountSearchInProgress == (atomic<bool>)0x0)) {
        FMiscTrace::OutputBeginRegion(L"Asset Registry - Additional Mount Search",(wchar_t *)0x0);
        dVar2 = FWindowsPlatformTime::Seconds();
        this->AdditionalMountSearchStartTime = dVar2;
        this->bAdditionalMountSearchInProgress = (atomic<bool>)0x1;
        ((this->GlobalGatherer).Ptr)->bIsAdditionalMountSearchInProgress = (atomic<bool>)0x1;
      }
      local_c8.DataPtr = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      iVar5 = (param_4->Data).ArrayNum;
      local_a8.AllocatorInstance.Data = (param_6->Data).AllocatorInstance.Data;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      iVar5 = (param_6->Data).ArrayNum;
      local_a8.ArrayNum = iVar5 + -1;
      if (iVar5 == 0) {
        local_a8.ArrayNum = 0;
      }
      local_c8.Size = iVar6;
      FAssetDataGatherer::AddMountPoint
                ((this->GlobalGatherer).Ptr,(TStringView<wchar_t> *)&local_a8,&local_c8);
      local_c8.DataPtr = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
      iVar5 = (param_6->Data).ArrayNum;
      local_c8.Size = iVar5 + -1;
      if (iVar5 == 0) {
        local_c8.Size = 0;
      }
      FAssetDataGatherer::SetIsOnAllowList((this->GlobalGatherer).Ptr,&local_c8,true);
    }
  }
  return;
}

// OnInitialSearchCompleted @ 142b9fcf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnInitialSearchCompleted
          (FAssetRegistryImpl *this,FEventContext *param_1)

{
  EPerformanceMode EVar1;
  bool bVar2;
  bool bVar3;
  
  EVar1 = this->PerformanceMode;
  if (EVar1 == MostlyStatic) goto LAB_142b9fd50;
  if ((EVar1 != BulkLoading) || (AssetRegistry::Impl::bDeferDependencySort)) {
    bVar2 = false;
    if (EVar1 == BulkLoading) goto LAB_142b9fd21;
LAB_142b9fd2e:
    bVar3 = false;
  }
  else {
    bVar2 = true;
LAB_142b9fd21:
    if (AssetRegistry::Impl::bDeferReferencerSort) goto LAB_142b9fd2e;
    bVar3 = true;
  }
  this->PerformanceMode = MostlyStatic;
  if ((!bVar2) || (!bVar3)) {
    FAssetRegistryState::SetDependencyNodeSorting(&this->State,true,true);
  }
LAB_142b9fd50:
  LogSearchDiagnostics(this,this->InitialSearchStartTime);
  FMiscTrace::OutputEndRegion(L"Asset Registry Scan");
  FAssetDataGatherer::UpdateCacheForSaving((this->GlobalGatherer).Ptr);
  FAssetDataGatherer::OnInitialSearchCompleted((this->GlobalGatherer).Ptr);
  Shrink(this);
  param_1->bFileLoadedEventBroadcast = true;
  param_1->bKnownGathersCompleteEventBroadcast = true;
  this->bInitialSearchCompleted = (atomic<bool>)0x1;
  this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
  return;
}

// OnPluginLoadingComplete @ 142b9fe60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::OnPluginLoadingComplete
          (FAssetRegistryImpl *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName FStackX_8;
  FString FStack_68;
  FScriptContainerElement *pFStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> TStack_48;
  TObjectIterator<UPackage> TStack_38;
  
  if ((this->GlobalGatherer).Ptr == (FAssetDataGatherer *)0x0) {
    return;
  }
  FStackX_8 = (FName)((ulonglong)FStackX_8 & 0xffffffff00000000);
  FAssetDataGatherer::SetInitialPluginsLoaded((this->GlobalGatherer).Ptr);
  bVar2 = FAssetDataGatherer::IsGatheringDependencies((this->GlobalGatherer).Ptr);
  if (bVar2) {
    TStack_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_38.ObjectArray.ArrayNum = 0;
    TStack_38.ObjectArray.ArrayMax = 0;
    TStack_38.Index = 0xffffffff;
    EVar3 = GetAsyncLoadingInternalFlagsExclusion();
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    GetObjectsOfClass(pUVar5,&TStack_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UPackage>::Advance(&TStack_38);
    while( true ) {
      lVar6 = (longlong)TStack_38.Index;
      if (TStack_38.Index < 0) break;
      if (TStack_38.ObjectArray.ArrayNum <= TStack_38.Index) break;
      uVar4 = 0;
      if (TStack_38.Index < TStack_38.ObjectArray.ArrayNum) {
        uVar4 = (uint)~TStack_38.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar6 = *(longlong *)(TStack_38.ObjectArray.AllocatorInstance.Data + lVar6 * 8);
      if (lVar6 != 0) {
        FStackX_8 = *(FName *)(lVar6 + 0x18);
        ::FName::ToString(&FStackX_8,&FStack_68);
        pFStack_58 = FStack_68.Data.AllocatorInstance.Data;
        iStack_50 = FStack_68.Data.ArrayNum + -1;
        if (FStack_68.Data.ArrayNum == 0) {
          iStack_50 = 0;
        }
        TStack_48._12_4_ = uStack_4c;
        TStack_48.Size = iStack_50;
        TStack_48.DataPtr = (wchar_t *)FStack_68.Data.AllocatorInstance.Data;
        bVar2 = FPackageName::IsScriptPackage(&TStack_48);
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          FAssetRegistryState::CreateOrGetAssetPackageData(&this->State,*(FName *)(lVar6 + 0x18));
        }
      }
      TObjectIterator<UPackage>::Advance(&TStack_38);
    }
    if (TStack_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_38.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// PathDataGathered @ 142ba0d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::PathDataGathered
          (FAssetRegistryImpl *this,FEventContext *param_1,
          TRingBuffer<FString,TSizedDefaultAllocator<32>_> *param_2,FInterruptionContext *param_3,
          TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FName local_res8;
  FString local_68;
  FString local_58;
  FAssetRegistryImpl *local_48;
  FEventContext *local_40;
  code *local_38;
  FAssetRegistryImpl **local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7669,"PathDataGathered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1df5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7669);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if ((0 < (int)(param_2->AfterBack - param_2->Front)) &&
     (this->bVerifyMountPointAfterGather != false)) {
    Utils::InitializeMountPoints(param_4);
  }
  FPathTree::EnsureAdditionalCapacity(&this->CachedPathTree,param_2->AfterBack - param_2->Front);
  uVar1 = param_2->AfterBack;
  uVar2 = param_2->Front;
  iVar5 = uVar1 - uVar2;
  do {
    if (iVar5 < 1) {
LAB_142ba0fae:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((uVar1 == uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PopCount <= static_cast<SizeType>(Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x3ec,
                           L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)(param_2->AfterBack - param_2->Front) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = (param_2->AllocatorInstance).Data +
             (ulonglong)(param_2->IndexMask & param_2->Front) * 0x10;
                    /* WARNING: Load size is inaccurate */
    local_68.Data.AllocatorInstance.Data = *pFVar7;
    *(undefined8 *)pFVar7 = 0;
    local_68.Data.ArrayNum = *(int *)(pFVar7 + 8);
    local_68.Data.ArrayMax = *(int *)(pFVar7 + 0xc);
    *(undefined8 *)(pFVar7 + 8) = 0;
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
              (param_2,param_2->Front,param_2->Front + 1);
    param_2->Front = param_2->Front + 1;
    if (this->bVerifyMountPointAfterGather == false) {
LAB_142ba0f2f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
      local_30 = &local_48;
      local_38 = Core::Private::Function::
                 TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
                 ::Call;
      local_48 = this;
      local_40 = param_1;
      FPathTree::CachePath
                (&this->CachedPathTree,*pFVar6,(TFunctionRef<void___cdecl(FName)> *)&local_38);
    }
    else {
      if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = Utils::IsPathMounted
                        (&local_68,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)param_4,
                         &local_58);
      if (bVar4) goto LAB_142ba0f2f;
      if (3 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    bVar4 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(param_3);
    if (bVar4) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_142ba0fae;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar1 = param_2->AfterBack;
    uVar2 = param_2->Front;
    iVar5 = uVar1 - uVar2;
  } while( true );
}

// PrioritizeSearchPath @ 142ba1680

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::PrioritizeSearchPath
          (FAssetRegistryImpl *this,FString *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataGatherer *pFVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  FString FStack_98;
  FString FStack_88;
  FScriptContainerElement *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> TStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  pFVar1 = (this->GlobalGatherer).Ptr;
  if (pFVar1 == (FAssetDataGatherer *)0x0) {
    return;
  }
  FStack_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_98.Data.ArrayNum = 0;
  FStack_98.Data.ArrayMax = 0;
  ::FString::FString(&FStack_88,L"");
  bVar3 = FPackageName::TryConvertLongPackageNameToFilename(param_1,&FStack_98,&FStack_88);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFStack_78 = FStack_98.Data.AllocatorInstance.Data;
    iVar8 = 0;
    iStack_70 = FStack_98.Data.ArrayNum + -1;
    if (FStack_98.Data.ArrayNum == 0) {
      iStack_70 = iVar8;
    }
    TStack_68._12_4_ = uStack_6c;
    TStack_68.Size = iStack_70;
    TStack_68.DataPtr = (wchar_t *)FStack_98.Data.AllocatorInstance.Data;
    pFVar6 = FAssetDataGatherer::NormalizeLocalPath(&FStack_58,&TStack_68);
    if (&FStack_98 != pFVar6) {
      if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
      }
      FStack_98.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_98.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      FStack_98.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    iVar7 = FStack_98.Data.ArrayNum + -1;
    if (FStack_98.Data.ArrayNum == 0) {
      iVar7 = iVar8;
    }
    if (iVar7 != 0) {
      AssetDataGather::Private::FAssetDataDiscovery::PrioritizeSearchPath
                ((pFVar1->Discovery).Ptr,&FStack_98,High);
      lpCriticalSection = &pFVar1->ResultsLock;
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SynchObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
      (pFVar1->ResultsLock).OwnerThreadId = aVar4;
      aVar4 = (pFVar1->ResultsLock).OwnerThreadId;
      aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar4 != aVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x1698,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar1->bIsIdle != false) {
        pFVar1->bIsIdle = false;
        pFVar1->bFirstTickAfterIdle = true;
        pFVar1->bDiscoveryIsComplete = false;
        pFVar1->bIsComplete = false;
      }
      FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_38.Data.ArrayNum = 0;
      FStack_38.Data.ArrayMax = 0;
      iVar7 = FStack_98.Data.ArrayNum + -1;
      if (FStack_98.Data.ArrayNum == 0) {
        iVar7 = iVar8;
      }
      pFVar6 = ::FString::ConstructFromPtrSize
                         (&FStack_48,(wchar_t *)FStack_98.Data.AllocatorInstance.Data,iVar7);
      if (&FStack_38 != pFVar6) {
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
        FStack_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        FStack_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      aVar4 = (pFVar1->ResultsLock).OwnerThreadId;
      uStack_28 = 0;
      uStack_20 = 3;
      uStack_1c = 0;
      aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar4 != aVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x165a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      for (pFVar6 = &FStack_38; pFVar6 != (FString *)&stack0xffffffffffffffe8; pFVar6 = pFVar6 + 2)
      {
        AssetDataGather::Private::FFilesToSearch::RetryLaterRetryFiles((pFVar1->FilesToSearch).Ptr);
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      aVar4 = (pFVar1->ResultsLock).OwnerThreadId;
      aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar4 != aVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x2b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pFVar1->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessGameThreadRequestedClasses @ 142ba1780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ProcessGameThreadRequestedClasses(FAssetRegistryImpl *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_00;
  undefined8 *puVar3;
  FName *pFVar4;
  ForElementType<FSetElementId> FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UScriptStruct *pUVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar20;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  int local_160;
  uint uStack_15c;
  undefined1 *puStack_158;
  undefined4 local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int *local_140;
  FTopLevelAssetPath local_138;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  int local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->bGameThreadRequestedClassesShouldProcess != (atomic<bool>)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->GameThreadRequestedClassesLock;
    local_88._0_8_ = (void *)0x0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_138.PackageName = (FName)this;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    this_00 = &this->GameThreadRequestedClasses;
    if ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
        local_88 != this_00) {
      if ((void *)local_88._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      local_88._0_8_ = *(undefined8 *)&this_00->Elements;
      puVar1 = &(this->GameThreadRequestedClasses).Elements.field_0x10;
      *(undefined8 *)&this_00->Elements = 0;
      local_88._8_8_ = *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x8;
      *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x8 = 0;
      if (local_88 + 0x10 != puVar1) {
        if (*(longlong *)&(this->GameThreadRequestedClasses).Elements.field_0x20 == 0) {
          local_88._16_8_ = *(undefined8 *)puVar1;
          local_88._24_8_ = *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x18;
        }
        if (local_68 != (uint *)0x0) {
          FMemory::Free(local_68);
        }
        local_68 = *(uint **)&(this->GameThreadRequestedClasses).Elements.field_0x20;
        *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x20 = 0;
        local_60 = *(uint *)&(this->GameThreadRequestedClasses).Elements.field_0x28;
        local_5c = *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x2c;
        *(undefined8 *)&(this->GameThreadRequestedClasses).Elements.field_0x28 = 0;
      }
      local_58 = *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30;
      local_54 = *(int *)&(this->GameThreadRequestedClasses).Elements.field_0x34;
      *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30 = 0xffffffff;
      if ((this->GameThreadRequestedClasses).Hash.SecondaryData ==
          (ForElementType<FSetElementId>)0x0) {
        local_50 = *(undefined4 *)(this->GameThreadRequestedClasses).Hash.InlineData;
      }
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      local_48 = (this->GameThreadRequestedClasses).Hash.SecondaryData;
      (this->GameThreadRequestedClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40 = (this->GameThreadRequestedClasses).HashSize;
      (this->GameThreadRequestedClasses).HashSize = 0;
    }
    bVar10 = 1 < (this->GameThreadRequestedClasses).HashSize;
    if (!bVar10) {
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    puVar1 = &(this->GameThreadRequestedClasses).Elements.field_0xc;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x34 = 0;
    iVar19 = *(int *)&(this->GameThreadRequestedClasses).Elements.field_0x2c;
    *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x28 = 0;
    if ((iVar19 < 0) || (0x80 < iVar19)) {
      *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->GameThreadRequestedClasses).Elements.field_0x10,0);
    }
    if (bVar10) {
      (this->GameThreadRequestedClasses).HashSize = 1;
      if (((this->GameThreadRequestedClasses).Hash.SecondaryData !=
           (ForElementType<FSetElementId>)0x0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->GameThreadRequestedClasses).Hash.SecondaryData,0,0
                     ,4),
         (this->GameThreadRequestedClasses).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
         )) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->GameThreadRequestedClasses).Hash.SecondaryData,0,0,4
                  );
      }
      FVar5 = (this->GameThreadRequestedClasses).Hash.SecondaryData;
      FVar18 = (ForElementType<FSetElementId>)&(this->GameThreadRequestedClasses).Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = FVar5;
      }
      *(undefined4 *)FVar18 = 0xffffffff;
      if ((this->GameThreadRequestedClasses).HashSize != 0) {
        iVar19 = *(int *)&(this->GameThreadRequestedClasses).Elements.field_0x28;
        puStack_158 = &(this->GameThreadRequestedClasses).Elements.field_0x10;
        uStack_15c = 1;
        local_160 = 0;
        iStack_14c = 0;
        iStack_148 = 0;
        if (iVar19 != 0) {
          puVar20 = *(uint **)&(this->GameThreadRequestedClasses).Elements.field_0x20;
          if (puVar20 == (uint *)0x0) {
            puVar20 = (uint *)puStack_158;
          }
          uVar11 = *puVar20;
          iStack_148 = 0;
          local_160 = 0;
          while (uVar11 == 0) {
            iStack_148 = iStack_148 + 0x20;
            lVar17 = (longlong)local_160;
            local_160 = local_160 + 1;
            if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < local_160)
            goto LAB_142ba1a5f;
            uVar11 = puVar20[lVar17 + 1];
          }
          uStack_15c = -uVar11 & uVar11;
          uVar16 = (ulonglong)uStack_15c * 2 + 1;
          lVar17 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_f8 = (int)lVar17;
          iStack_14c = local_f8 + -1 + iStack_148;
          if (iVar19 < iStack_14c) {
LAB_142ba1a5f:
            iStack_14c = iVar19;
          }
        }
        local_150 = 0xffffffff;
        local_e0._padding_ = CONCAT44(uStack_15c,local_160);
        local_e0.CurrentBitIndex = iStack_14c;
        local_e0.UnvisitedBitMask = 0xffffffff;
        local_e0._28_4_ = uStack_144;
        local_e0.BaseBitIndex = iStack_148;
        local_e8 = this_00;
        local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_158;
        if (iStack_14c < iVar19) {
          piVar2 = &(this->GameThreadRequestedClasses).HashSize;
          iVar19 = iStack_14c;
          local_140 = piVar2;
          do {
            uVar6 = *(undefined8 *)(*(longlong *)&local_e8->Elements + 8 + (longlong)iVar19 * 0x18);
            puVar3 = (undefined8 *)(*(longlong *)&local_e8->Elements + (longlong)iVar19 * 0x18);
            uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
            uVar7 = *puVar3;
            uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
            uVar12 = uVar12 + (int)((ulonglong)uVar7 >> 0x20);
            uVar11 = ((uVar12 >> 2) + uVar11 + (int)((ulonglong)uVar6 >> 0x20) +
                      uVar12 * 0x40 + -0x61c88647 ^ uVar12) & *piVar2 - 1U;
            *(uint *)((longlong)puVar3 + 0x14) = uVar11;
            FVar5 = (this->GameThreadRequestedClasses).Hash.SecondaryData;
            FVar18 = (ForElementType<FSetElementId>)&(this->GameThreadRequestedClasses).Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = FVar5;
            }
            uVar16 = (longlong)(this->GameThreadRequestedClasses).HashSize - 1U &
                     (longlong)(int)uVar11;
            *(undefined4 *)(puVar3 + 2) = *(undefined4 *)((longlong)FVar18 + uVar16 * 4);
            *(int *)((longlong)FVar18 + uVar16 * 4) = iVar19;
            local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
            iVar19 = local_e0.CurrentBitIndex;
          } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
          lpCriticalSection = (LPCRITICAL_SECTION)((longlong)local_138.PackageName + 0xb88);
          this = (FAssetRegistryImpl *)local_138.PackageName;
        }
      }
    }
    *(atomic<bool> *)((longlong)this + 0xbb1) = (atomic<bool>)0x0;
    LeaveCriticalSection(lpCriticalSection);
    uVar11 = local_60;
    iStack_120 = 0;
    uStack_11c = 1;
    local_108 = 0;
    uStack_10c = 0;
    if (local_60 != 0) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      uVar12 = *puVar20;
      local_108 = 0;
      iStack_120 = 0;
      while (uVar12 == 0) {
        lVar17 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        uStack_10c = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_120)
        goto LAB_142ba1bf1;
        uVar12 = puVar20[lVar17 + 1];
      }
      uStack_11c = -uVar12 & uVar12;
      uVar16 = (ulonglong)uStack_11c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uStack_10c = local_108 + -1 + (int)lVar17;
      local_140 = (int *)CONCAT44(local_140._4_4_,(int)lVar17);
      if ((int)local_60 < (int)uStack_10c) {
        uStack_10c = local_60;
      }
    }
LAB_142ba1bf1:
    local_128 = (longlong *)local_88;
    uVar12 = local_60 & 0xffffffe0;
    local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    iStack_100 = local_88._8_4_ - local_54;
    uStack_110 = 0xffffffff;
    TStack_b8.CurrentBitIndex = uStack_10c;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_11c,iStack_120);
    iVar19 = (int)local_60 >> 5;
    TStack_b8._28_4_ = uStack_10c;
    TStack_b8.BaseBitIndex = local_108;
    uStack_98 = CONCAT44(uStack_fc,iStack_100);
    bVar15 = (byte)local_60;
    uStack_104 = uStack_10c;
    local_c0 = local_128;
    TStack_b8.Array = local_118;
    if (((int)local_60 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (uVar11 != local_60) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      uVar11 = -1 << (bVar15 & 0x1f) & puVar20[iVar19];
      while (uVar11 == 0) {
        lVar17 = (longlong)iVar19;
        uVar12 = uVar12 + 0x20;
        iVar19 = iVar19 + 1;
        uVar11 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142ba1ced;
        uVar11 = puVar20[lVar17 + 1];
      }
      uVar16 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar11 = (int)lVar17 + -1 + uVar12;
      if ((int)local_60 < (int)uVar11) {
        uVar11 = local_60;
      }
    }
LAB_142ba1ced:
    while( true ) {
      plVar9 = local_c0;
      if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
        `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (((TStack_b8.CurrentBitIndex == uVar11) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar9 == (longlong *)local_88)) break;
      pFVar4 = (FName *)(*plVar9 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
      local_138.PackageName = *pFVar4;
      local_138.AssetName = pFVar4[1];
      pUVar13 = Z_Construct_UClass_UClass_NoRegister();
      pUVar13 = (UClass *)StaticFindObject(pUVar13,&local_138,ExactClass);
      if ((pUVar13 != (UClass *)0x0) &&
         (pUVar14 = UClass::GetSparseClassDataStruct(pUVar13), pUVar14 != (UScriptStruct *)0x0)) {
        UClass::GetSparseClassData(pUVar13,ArchetypeIfNull);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    *(atomic<bool> *)((longlong)this + 0xbb0) = (atomic<bool>)0x1;
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

// ReadScriptPackages @ 142ba2220

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UE::AssetRegistry::FAssetRegistryImpl::ReadScriptPackages(FAssetRegistryImpl *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName local_res8;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TObjectIterator<UPackage> local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FAssetDataGatherer::SetInitialPluginsLoaded((this->GlobalGatherer).Ptr);
  bVar2 = FAssetDataGatherer::IsGatheringDependencies((this->GlobalGatherer).Ptr);
  if (bVar2) {
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    EVar3 = GetAsyncLoadingInternalFlagsExclusion();
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    GetObjectsOfClass(pUVar5,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UPackage>::Advance(&local_38);
    while( true ) {
      lVar6 = (longlong)local_38.Index;
      if (local_38.Index < 0) break;
      if (local_38.ObjectArray.ArrayNum <= local_38.Index) break;
      uVar4 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar6 = *(longlong *)(local_38.ObjectArray.AllocatorInstance.Data + lVar6 * 8);
      if (lVar6 != 0) {
        local_res8 = *(FName *)(lVar6 + 0x18);
        ::FName::ToString(&local_res8,&local_68);
        local_58 = local_68.Data.AllocatorInstance.Data;
        iStack_50 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iStack_50 = 0;
        }
        local_48._12_4_ = uStack_4c;
        local_48.Size = iStack_50;
        local_48.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
        bVar2 = FPackageName::IsScriptPackage(&local_48);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          FAssetRegistryState::CreateOrGetAssetPackageData(&this->State,*(FName *)(lVar6 + 0x18));
        }
      }
      TObjectIterator<UPackage>::Advance(&local_38);
    }
    if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// RefreshNativeClasses @ 142ba2470

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RefreshNativeClasses(FAssetRegistryImpl *this)

{
  CollectCodeGeneratorClasses(this);
  (this->TempCachedInheritanceBuffer).bDirty = true;
  return;
}

// RemoveAssetData @ 142ba3890

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetData
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAssetData *local_res18 [2];
  undefined4 uStack_1c;
  TArrayView<FAssetData_*,int> local_18;
  
  local_res18[0] = param_2;
  if (param_2 != (FAssetData *)0x0) {
    local_18.DataPtr = local_res18;
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = 1;
    bVar2 = RemoveAssetDatas(this,param_1,&local_18);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8470630944661839993>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x2079,"AssetData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// RemoveAssetDatas @ 142ba3910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetDatas
          (FAssetRegistryImpl *this,FEventContext *param_1,TArrayView<FAssetData_*,int> *param_2)

{
  uint *puVar1;
  FAssetData *pFVar2;
  FName FVar3;
  FName FVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  FAssetDataTagMap *this_00;
  TArray<TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FValueId *pFVar12;
  FString *pFVar13;
  ulong64 uVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> FVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  FAssetData *this_01;
  uint uVar19;
  ulonglong uVar20;
  FAssetData **ppFVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStackY_158 [32];
  FTopLevelAssetPath local_120;
  FString local_110;
  FAssetTagValueRef_u_0 local_100;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  FAssetData **local_d8;
  TArray<TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *local_d0;
  TArrayView<FAssetData_*,int> *local_c8;
  TArrayView<FAssetData_*,int> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar20 = 0;
  ppFVar21 = param_2->DataPtr;
  uVar19 = param_2->ArrayNum;
  local_c8 = param_2;
  local_d8 = ppFVar21 + (int)uVar19;
  if (ppFVar21 != ppFVar21 + (int)uVar19) {
    local_d0 = &param_1->AssetEvents;
    uVar22 = uVar20;
    do {
      pTVar7 = local_d0;
      iVar8 = local_d0->ArrayNum;
      pFVar2 = *ppFVar21;
      if (iVar8 == local_d0->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&local_d0->AllocatorInstance,&local_d0->ArrayMax);
      }
      pTVar7->ArrayNum = iVar8 + 1;
      this_01 = (FAssetData *)((pTVar7->AllocatorInstance).Data + (longlong)iVar8 * 0x70);
      FAssetData::FAssetData(this_01,pFVar2);
      this_01[1].PackageName.ComparisonIndex.Value = 1;
      FVar3 = (pFVar2->AssetClassPath).AssetName;
      uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      FVar4 = (pFVar2->AssetClassPath).PackageName;
      uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      uVar10 = uVar10 + FVar4.Number;
      if (*(int *)&(this->ClassGeneratorNames).Elements.field_0x8 !=
          *(int *)&(this->ClassGeneratorNames).Elements.field_0x34) {
        FVar5 = (this->ClassGeneratorNames).Hash.SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&(this->ClassGeneratorNames).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar5;
        }
        iVar8 = *(int *)((longlong)FVar17 +
                        (ulonglong)
                        ((this->ClassGeneratorNames).HashSize - 1U &
                        (uVar10 * 0x40 + -0x61c88647 + uVar9 + FVar3.Number + (uVar10 >> 2) ^ uVar10
                        )) * 4);
        if (iVar8 != -1) {
          lVar6 = *(longlong *)&(this->ClassGeneratorNames).Elements;
          do {
            lVar11 = (longlong)iVar8;
            if ((*(FName *)(lVar6 + lVar11 * 0x18) == (pFVar2->AssetClassPath).PackageName) &&
               (*(FName *)(lVar6 + 8 + lVar11 * 0x18) == (pFVar2->AssetClassPath).AssetName)) {
              if (iVar8 != -1) {
                if ((*(byte *)&(pFVar2->TagsAndValues).field0_0x0 & 1) == 0) {
                  this_00 = (pFVar2->TagsAndValues).field0_0x0.Loose;
                  if (this_00 != (FAssetDataTagMap *)0x0) {
                    local_100.Loose =
                         TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                                   ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                     *)this_00,FBlueprintTags::GeneratedClassPath);
                    goto LAB_142ba3ada;
                  }
LAB_142ba3af6:
                  local_100.Loose = (FString *)0x0;
LAB_142ba3afb:
                  uVar9 = (uint)uVar22 | 2;
                  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_f8.Data.ArrayNum = 0;
                  local_f8.Data.ArrayMax = 0;
                  pFVar13 = &local_f8;
                }
                else {
                  pFVar12 = FixedTagPrivate::FMapHandle::FindValue
                                      ((FMapHandle *)&pFVar2->TagsAndValues,
                                       FBlueprintTags::GeneratedClassPath);
                  if (pFVar12 == (FValueId *)0x0) goto LAB_142ba3af6;
                  local_100.Bits =
                       ((ulonglong)*(ushort *)&(pFVar2->TagsAndValues).field0_0x0 &
                       0xfffffffffffffffc) << 0x1e | (ulonglong)(uint)*pFVar12 | 0x8000000000000000;
LAB_142ba3ada:
                  if (local_100.Loose == (FString *)0x0) goto LAB_142ba3afb;
                  uVar9 = (uint)uVar22 | 1;
                  pFVar13 = FAssetTagValueRef::AsString
                                      ((FAssetTagValueRef *)&local_100.Fixed,&local_98);
                }
                uVar22 = (ulonglong)uVar9;
                local_110.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
                (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_110.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                local_110.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                (pFVar13->Data).ArrayNum = 0;
                (pFVar13->Data).ArrayMax = 0;
                if (((uVar9 & 2) != 0) &&
                   (uVar22 = (ulonglong)(uVar9 & 0xfffffffd),
                   local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                if (((uVar22 & 1) != 0) &&
                   (uVar22 = (ulonglong)((uint)uVar22 & 0xfffffffe),
                   local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if ((1 < local_110.Data.ArrayNum) &&
                   (((local_110.Data.ArrayNum == 0 || (local_110.Data.ArrayNum != 5)) ||
                    (iVar8 = FGenericPlatformStricmp::Strnicmp
                                       (L"None",(wchar_t *)local_110.Data.AllocatorInstance.Data,4),
                    iVar8 != 0)))) {
                  pFVar13 = FPackageName::ExportTextPathToObjectPath
                                      ((FString *)&local_b8,&local_110);
                  local_120.PackageName.ComparisonIndex.Value = 0;
                  local_120.PackageName.Number = 0;
                  local_120.AssetName.ComparisonIndex.Value = 0;
                  local_120.AssetName.Number = 0;
                  local_e8.DataPtr = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                  iVar8 = (pFVar13->Data).ArrayNum;
                  iStack_a0 = iVar8 + -1;
                  if (iVar8 == 0) {
                    iStack_a0 = 0;
                  }
                  local_e8._12_4_ = uStack_9c;
                  local_e8.Size = iStack_a0;
                  local_a8 = (FScriptContainerElement *)local_e8.DataPtr;
                  FTopLevelAssetPath::TrySetPath(&local_120,&local_e8);
                  if (local_b8.DataPtr != (FAssetData **)0x0) {
                    FMemory::Free(local_b8.DataPtr);
                  }
                  if (local_120.PackageName == (FName)0x0) {
                    local_e8.DataPtr = (wchar_t *)&local_110;
                    bVar23 = `UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetDatas'::__l16::
                             <lambda_1>::operator()(&local_e8);
                    if (!bVar23) goto LAB_142ba3c76;
                  }
                  FVar3 = local_120.AssetName;
                  if (*(int *)&(this->CachedBPInheritanceMap).field_0x8 !=
                      *(int *)&(this->CachedBPInheritanceMap).field_0x34) {
                    uVar9 = ::GetTypeHash(local_120.AssetName.ComparisonIndex);
                    FVar4 = local_120.PackageName;
                    uVar10 = ::GetTypeHash(local_120.PackageName.ComparisonIndex.Value);
                    uVar10 = uVar10 + FVar4.Number;
                    TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FTopLevelAssetPath>
                              ((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                                *)&this->CachedBPInheritanceMap,
                               (uVar10 >> 2) + uVar10 * 0x40 + FVar3.Number + uVar9 + -0x61c88647 ^
                               uVar10,&local_120);
                  }
                  (this->TempCachedInheritanceBuffer).bDirty = true;
                }
LAB_142ba3c76:
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            iVar8 = *(int *)(lVar6 + 0x10 + lVar11 * 0x18);
          } while (iVar8 != -1);
        }
      }
      ppFVar21 = ppFVar21 + 1;
    } while (ppFVar21 != local_d8);
  }
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = uVar19;
  local_68.MaxBits = 0x80;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  if (0x80 < (int)uVar19) {
    uVar9 = uVar19 + 0x1f >> 5;
    if (uVar9 < 5) {
      iVar8 = 4;
    }
    else {
      uVar14 = FMemory::QuantizeSize((ulonglong)uVar9 << 2,0);
      iVar8 = (int)(uVar14 >> 2);
      if (iVar8 < (int)uVar9) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&local_68.AllocatorInstance,0,iVar8,4);
    local_68.MaxBits = iVar8 << 5;
  }
  iVar8 = local_88.NumBits;
  uVar9 = local_68.NumBits & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  if (uVar9 != 0) {
    FVar16 = (ForElementType<unsigned_int>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_68.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar16 +
                     (longlong)((int)(local_68.NumBits + (local_68.NumBits >> 0x1f & 0x1fU)) >> 5) *
                     4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar9 & 0x1fU);
  }
  local_88.NumBits = uVar19;
  if (local_88.MaxBits < (int)uVar19) {
    uVar19 = uVar19 + 0x1f >> 5;
    if (uVar19 < 5) {
      iVar18 = 4;
    }
    else {
      uVar14 = FMemory::QuantizeSize((ulonglong)uVar19 << 2,0);
      iVar18 = (int)(uVar14 >> 2);
      if (iVar18 < (int)uVar19) {
        iVar18 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&local_88.AllocatorInstance,iVar8 + 0x1fU >> 5,iVar18,4);
    local_88.MaxBits = iVar18 << 5;
  }
  uVar19 = local_88.NumBits & 0x8000001f;
  if ((int)uVar19 < 0) {
    uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
  }
  if (uVar19 != 0) {
    FVar16 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_88.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar16 +
                     (longlong)((int)(local_88.NumBits + (local_88.NumBits >> 0x1f & 0x1fU)) >> 5) *
                     4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar19 & 0x1fU);
  }
  local_b8.DataPtr = local_c8->DataPtr;
  local_b8.ArrayNum = local_c8->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&local_c8->field_0xc;
  FAssetRegistryState::RemoveAssetDatas(&this->State,&local_b8,true,&local_68,&local_88);
  FVar16 = (ForElementType<unsigned_int>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar16 = local_68.AllocatorInstance.SecondaryData;
  }
  FVar15 = FVar16;
  if (local_68.NumBits + 0x1fU >> 5 == 0) {
LAB_142ba3eab:
    iVar18 = -1;
LAB_142ba3eb0:
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    return iVar18 != -1;
  }
LAB_142ba3e83:
  if (*(int *)FVar15 == 0) goto code_r0x000142ba3e88;
  puVar1 = (uint *)((longlong)FVar16 + uVar20 * 4);
  iVar8 = 0;
  bVar23 = *puVar1 != 0;
  if (bVar23) {
    for (; (*puVar1 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
    }
  }
  iVar18 = 0x20;
  if (bVar23) {
    iVar18 = iVar8;
  }
  iVar18 = iVar18 + (int)uVar20 * 0x20;
  if (iVar18 < local_68.NumBits) goto LAB_142ba3eb0;
  goto LAB_142ba3eab;
code_r0x000142ba3e88:
  uVar19 = (int)uVar20 + 1;
  uVar20 = (ulonglong)uVar19;
  FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
  if ((int)(local_68.NumBits + 0x1fU >> 5) <= (int)uVar19) goto LAB_142ba3eab;
  goto LAB_142ba3e83;
}

// RemoveAssetPath @ 142ba3f10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath
          (FAssetRegistryImpl *this,FEventContext *param_1,FName param_2,bool param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char local_res20 [8];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (!param_3) {
    local_28._0_8_ = local_res20;
    local_18._8_8_ = local_28;
    local_18._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l5::<lambda_1>,bool,FAssetData_const_&>
         ::Call;
    local_res20[0] = param_3;
    EnumerateAssetsByPathNoTags
              (this,param_2,(TFunctionRef<bool___cdecl(FAssetData_const_&)> *)local_18,true,param_3)
    ;
    cVar1 = local_res20[0];
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    if (*(int *)&(this->CachedVerseFilesByPath).field_0x8 !=
        *(int *)&(this->CachedVerseFilesByPath).field_0x34) {
      puVar4 = *(undefined1 **)&(this->CachedVerseFilesByPath).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->CachedVerseFilesByPath).field_0x38;
      }
      iVar3 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->CachedVerseFilesByPath).field_0x48 - 1U &
                                param_2.Number + uVar2) * 4);
      if (iVar3 != -1) {
        do {
          if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->CachedVerseFilesByPath) ==
              param_2) goto LAB_142ba3fdb;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 +
                          *(longlong *)&this->CachedVerseFilesByPath);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142ba3fdb:
    if (iVar3 != -1 || cVar1 != '\0') {
      return false;
    }
  }
  local_28._8_8_ = local_18;
  local_28._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l2::<lambda_2>,void,FName>
       ::Call;
  local_18._0_8_ = this;
  local_18._8_8_ = param_1;
  FPathTree::RemovePath(&this->CachedPathTree,param_2,(TFunctionRef<void___cdecl(FName)> *)local_28)
  ;
  return true;
}

// RemoveEmptyPackage @ 142ba45a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemoveEmptyPackage(FAssetRegistryImpl *this,FName param_1)

{
  int iVar1;
  
  iVar1 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                    (&this->CachedEmptyPackages,param_1);
  return 0 < iVar1;
}

// RemovePackageData @ 142ba45c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData
          (FAssetRegistryImpl *this,FEventContext *param_1,FName param_2)

{
  FAssetRegistryState *this_00;
  longlong *plVar1;
  FAssetIdentifier *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FDependsNode *this_01;
  FDependsNode *this_02;
  ulonglong uVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 *puVar11;
  FName *pFVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_> local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  FAssetIdentifier local_c0;
  longlong *local_a0;
  FAssetData *local_98;
  code *local_90;
  longlong **local_88;
  FAssetData **local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<FAssetData_*,int> local_68;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_a0 = &local_58;
  local_88 = &local_a0;
  this_00 = &this->State;
  local_90 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData'::__l2::<lambda_1>,bool,FAssetData_*>
             ::Call;
  local_44 = 1;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FAssetRegistryState::EnumerateMutableAssetsByPackageName
            (this_00,param_2,(TFunctionRef<bool___cdecl(FAssetData_*)> *)&local_90);
  if (0 < (int)local_48) {
    local_c0.ObjectName.ComparisonIndex.Value = 0;
    local_c0.ObjectName.Number = 0;
    local_c0.ValueName.ComparisonIndex.Value = 0;
    local_c0.ValueName.Number = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_c0.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
    local_c0.PrimaryAssetType.Name.Number = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_c0.PackageName = param_2;
    uVar6 = ::GetTypeHash(&local_c0);
    if (*(int *)&(this->State).CachedDependsNodes.field_0x8 !=
        *(int *)&(this->State).CachedDependsNodes.field_0x34) {
      puVar11 = *(undefined1 **)&(this->State).CachedDependsNodes.field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->State).CachedDependsNodes.field_0x38;
      }
      uVar6 = *(uint *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->State).CachedDependsNodes.field_0x48 - 1U & uVar6) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          pFVar12 = (FName *)((longlong)(int)uVar6 * 0x30 +
                             *(longlong *)&(this->State).CachedDependsNodes);
          if ((((*pFVar12 == local_c0.PackageName) && (pFVar12[1] == local_c0.PrimaryAssetType.Name)
               ) && (pFVar12[2] == local_c0.ObjectName)) && (pFVar12[3] == local_c0.ValueName)) {
            if (uVar6 != 0xffffffff) {
              pFVar7 = pFVar12 + 4;
              if (pFVar12 == (FName *)0x0) {
                pFVar7 = (FName *)0x0;
              }
              if ((pFVar7 != (FName *)0x0) && (*pFVar7 != (FName)0x0)) {
                FDependsNode::GetPackageReferencers((FDependsNode *)*pFVar7,&local_e0);
              }
            }
            break;
          }
          uVar6 = pFVar12[5].ComparisonIndex.Value;
        } while (uVar6 != 0xffffffff);
      }
    }
    uVar6 = local_48;
    uVar8 = (ulonglong)(int)local_48;
    plVar9 = &local_58;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    plVar1 = plVar9 + uVar8;
    while( true ) {
      if ((uint)uVar8 != uVar6) {
        local_e8 = 0;
        `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e8);
      }
      if (plVar9 == plVar1) break;
      local_98 = (FAssetData *)*plVar9;
      if (local_98 == (FAssetData *)0x0) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8470630944661839993>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2079,"AssetData");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        local_78 = &local_98;
        uStack_70 = 1;
        local_68._12_4_ = uStack_6c;
        local_68.ArrayNum = 1;
        local_68.DataPtr = local_78;
        RemoveAssetDatas(this,param_1,&local_68);
      }
      uVar8 = (ulonglong)local_48;
      plVar9 = plVar9 + 1;
    }
    if (local_e0.ArrayNum != 0) {
      this_01 = FAssetRegistryState::CreateOrFindDependsNode(this_00,&local_c0,(bool *)0x0);
      iVar4 = local_e0.ArrayNum;
      uVar8 = (ulonglong)local_e0.ArrayNum;
      pFVar2 = (FAssetIdentifier *)(local_e0.AllocatorInstance.Data + uVar8 * 0x24);
      FVar10.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_e7);
        }
        if ((FAssetIdentifier *)FVar10.Data == pFVar2) break;
        this_02 = FAssetRegistryState::CreateOrFindDependsNode
                            (this_00,(FAssetIdentifier *)FVar10.Data,(bool *)0x0);
        if (this_02 != (FDependsNode *)0x0) {
          FDependsNode::AddPackageDependencySet
                    (this_02,this_01,(TPropertyCombinationSet<3> *)((longlong)FVar10.Data + 0x20));
          FDependsNode::AddReferencer(this_01,this_02);
        }
        uVar8 = local_e0._8_8_ & 0xffffffff;
        FVar10.Data = (FScriptContainerElement *)
                      &(((FAssetIdentifier *)((longlong)FVar10.Data + 0x20))->PackageName).Number;
      }
    }
    if ((FAssetIdentifier *)local_e0.AllocatorInstance.Data != (FAssetIdentifier *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// RemoveVerseFile @ 142ba4b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RemoveVerseFile
          (FAssetRegistryImpl *this,FEventContext *param_1,FName param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TStringView<wchar_t> *pTVar7;
  FName *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FName FVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FName local_res18;
  undefined1 auStackY_328 [32];
  uint uStack_2ac;
  FName local_2a8;
  TStringView<wchar_t> local_2a0;
  FName local_290;
  TStringView<wchar_t> local_288;
  wchar_t *local_278;
  undefined8 uStack_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_res18 = param_2;
  iVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                    (&this->CachedVerseFiles,param_2);
  if (iVar5 == 0) {
    return;
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  ::FName::AppendString(&local_res18,&local_268);
  local_2a0.DataPtr = local_268.Base;
  local_2a0.Size = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
  pTVar7 = FPathViews::GetPath(&local_288,&local_2a0);
  local_278 = pTVar7->DataPtr;
  uStack_270 = *(undefined8 *)&pTVar7->Size;
  pFVar8 = ::FName::FName(&local_290,(int)*(undefined8 *)&pTVar7->Size,local_278,FNAME_Add);
  FVar2 = *pFVar8;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  pTVar9 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->CachedVerseFilesByPath,FVar2);
  if (pTVar9 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8470630944661840135>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2107,"FilePathsArray");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar8 = (FName *)(pTVar9->AllocatorInstance).Data;
    if (((pFVar8 <= &local_res18) && (&local_res18 < pFVar8 + pTVar9->ArrayMax)) &&
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
    iVar5 = pTVar9->ArrayNum;
    if (iVar5 != 0) {
      pFVar8 = (FName *)(pTVar9->AllocatorInstance).Data;
      iVar14 = 0;
      bVar4 = *pFVar8 != local_res18;
      lVar13 = 0;
      FVar10 = local_res18;
      iVar11 = 0;
      do {
        iVar12 = iVar11;
        do {
          lVar13 = lVar13 + 1;
          iVar12 = iVar12 + 1;
          if (iVar5 <= lVar13) break;
        } while (bVar4 == (pFVar8[lVar13] != FVar10));
        if (bVar4 != false) {
          if (iVar14 != iVar11) {
            memmove(pFVar8 + iVar14,pFVar8 + iVar11,(longlong)(iVar12 - iVar11) << 3);
            FVar10 = local_res18;
          }
          iVar14 = iVar14 + (iVar12 - iVar11);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar11 = iVar12;
      } while (lVar13 < iVar5);
      pTVar9->ArrayNum = iVar14;
      if (iVar14 != 0) goto LAB_142ba4df1;
    }
    local_2a8 = FVar2;
    if (*(int *)&(this->CachedVerseFilesByPath).field_0x8 !=
        *(int *)&(this->CachedVerseFilesByPath).field_0x34) {
      uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      uStack_2ac = FVar2.Number;
      TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)&this->CachedVerseFilesByPath,uStack_2ac + uVar6,&local_2a8);
    }
    RemoveAssetPath(this,param_1,FVar2,false);
  }
LAB_142ba4df1:
  iVar5 = (param_1->VerseEvents).ArrayNum;
  piVar1 = &(param_1->VerseEvents).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(param_1->VerseEvents).AllocatorInstance,piVar1);
  }
  (param_1->VerseEvents).ArrayNum = iVar5 + 1;
  pFVar8 = (FName *)((param_1->VerseEvents).AllocatorInstance.Data + (longlong)iVar5 * 0xc);
  *pFVar8 = local_res18;
  pFVar8[1].ComparisonIndex.Value = 1;
  return;
}

// RequestGameThreadProcessClass @ 142ba4e70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::RequestGameThreadProcessClass
          (FAssetRegistryImpl *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->GameThreadRequestedClassesLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
    Emplace<FTopLevelAssetPath_const_&>
              (&this->GameThreadRequestedClasses,(FTopLevelAssetPath *)&stack0x00000008,
               (bool *)param_1);
    this->bGameThreadRequestedClassesShouldProcess = (atomic<bool>)0x1;
                    /* WARNING: Could not recover jumptable at 0x000142ba4eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ResolveRedirect @ 142ba6d10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ResolveRedirect
          (FAssetRegistryImpl *this,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *_Str1;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FString *local_res10;
  FString local_58;
  FString local_48;
  
  local_res10 = param_1;
  iVar1 = ::FString::Find(param_1,L".",1,CaseSensitive,FromStart,-1);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pwVar8 = L"";
  if (iVar1 != -1) {
    iVar2 = (param_1->Data).ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if (iVar2 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_48,pwVar9,iVar1);
    param_1 = &local_58;
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
  }
  iVar1 = (this->PackageRedirects).ArrayNum;
  pFVar6 = (this->PackageRedirects).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->PackageRedirects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar4 = *(int *)(pFVar6 + 8);
    if (iVar4 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)pFVar6;
    }
    if ((param_1->Data).ArrayNum == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar2 = wcscmp(_Str1,pwVar9);
    if (iVar2 == 0) {
      if (*(int *)(pFVar6 + 0x18) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(pFVar6 + 0x10);
      }
      if (iVar4 != 0) {
        pwVar8 = *(wchar_t **)pFVar6;
      }
      pFVar3 = ::FString::Replace(local_res10,&local_48,pwVar8,pwVar9,IgnoreCase);
      if (param_2 != pFVar3) {
        pFVar6 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
LAB_142ba6ea1:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return bVar5;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  bVar5 = false;
  goto LAB_142ba6ea1;
}

// ScanModifiedAssetFiles @ 142ba8150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142ba8603) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FEventContext *param_2,FClassInheritanceContext *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,EScanFlags param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  FAssetData *pFVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  FAssetRegistryImpl *this_00;
  FEventContext *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FName *pFVar12;
  FCachedAssetKey *pFVar13;
  FAssetData **ppFVar14;
  FString *pFVar15;
  FAssetPathParts *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  undefined8 *puVar20;
  ForAnyElementType this_01;
  FAssetData *this_02;
  int iVar21;
  FSoftObjectPath *pFVar22;
  int iVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  FSoftObjectPath *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_b58 [32];
  undefined1 local_b08;
  undefined1 local_b07;
  undefined1 local_b06;
  undefined1 local_b05;
  undefined1 local_b04 [4];
  ForAnyElementType local_b00;
  undefined8 local_af8;
  ForAnyElementType local_af0;
  undefined8 local_ae8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_ae0;
  FName local_ac8;
  FName FStack_ac0;
  FAssetRegistryImpl *local_ab8;
  FEventContext *local_ab0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_aa8;
  FSoftObjectPath local_a98;
  undefined8 *local_a78;
  code **local_a70;
  FAssetData *local_a68 [2];
  FAssetData **local_a58;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  wchar_t *local_a48;
  int iStack_a40;
  undefined4 uStack_a3c;
  code *local_a38;
  undefined8 **local_a30;
  code *local_a28;
  code ***local_a20;
  FScanPathContext local_a18;
  FName local_9a8;
  FName local_9a0;
  FString local_998;
  FCachedAssetKey local_988;
  TArrayView<FAssetData_*,int> local_978;
  FString local_968;
  TStringView<wchar_t> local_958;
  FCachedAssetKey local_948;
  FName local_938;
  FCachedAssetKey local_930;
  FName local_920;
  FName FStack_918;
  FString local_910;
  FName local_900;
  FName FStack_8f8;
  FName local_8f0;
  FName FStack_8e8;
  FAssetPathParts local_8e0;
  undefined8 local_8c0;
  undefined8 *local_8b8;
  int local_8b0;
  undefined4 local_8ac;
  TStringBuilderBase<wchar_t> local_8a8;
  wchar_t local_888 [1035];
  wchar_t local_72 [5];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  if (0 < param_4->ArrayNum) {
    local_ae0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ae0.ArrayNum = 0;
    local_ae0.ArrayMax = 0;
    local_aa8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_aa8.ArrayNum = 0;
    local_aa8.ArrayMax = 0;
    local_ab8 = this;
    local_ab0 = param_2;
    AssetRegistry::Impl::FScanPathContext::FScanPathContext
              (&local_a18,param_2,param_3,&local_aa8,param_4,param_5 | ForceRescan,&local_ae0);
    FVar25.Data = local_aa8.AllocatorInstance.Data;
    DestructItems<FString,int>((FString *)local_aa8.AllocatorInstance.Data,local_aa8.ArrayNum);
    if (FVar25.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar25.Data);
    }
    ScanPathsSynchronous(this,param_1,&local_a18);
    uVar3 = param_4->ArrayNum;
    local_af0.Data = (FScriptContainerElement *)0x0;
    local_ae8 = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&local_af0,0,(int *)((longlong)&local_ae8 + 4));
    }
    iVar10 = param_4->ArrayNum;
    pFVar27 = (param_4->AllocatorInstance).Data;
    pFVar18 = pFVar27 + (longlong)iVar10 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar10) {
        local_b08 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_b08);
      }
      this_00 = local_ab8;
      if (pFVar27 == pFVar18) break;
      pFVar11 = (FScriptContainerElement *)
                FPackageName::FilenameToLongPackageName(&local_998,(FString *)pFVar27);
      if (((local_af0.Data <= pFVar11) &&
          (pFVar11 < local_af0.Data + (longlong)local_ae8._4_4_ * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_ae8;
      if ((int)local_ae8 == local_ae8._4_4_) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_af0,(int *)((longlong)&local_ae8 + 4));
      }
      local_ae8 = CONCAT44(local_ae8._4_4_,iVar9 + 1);
      pFVar17 = local_af0.Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar17 = 0;
      *(undefined8 *)pFVar17 = *(undefined8 *)pFVar11;
      *(undefined8 *)pFVar11 = 0;
      *(int *)(pFVar17 + 8) = *(int *)(pFVar11 + 8);
      *(int *)(pFVar17 + 0xc) = *(int *)(pFVar11 + 0xc);
      *(undefined8 *)(pFVar11 + 8) = 0;
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
      pFVar27 = pFVar27 + 0x10;
    }
    uVar3 = param_4->ArrayNum;
    local_b00.Data = (FScriptContainerElement *)0x0;
    local_af8 = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3,&local_b00,0,(int *)((longlong)&local_af8 + 4));
    }
    uVar24 = (ulonglong)(int)local_ae8;
    pFVar27 = local_af0.Data + uVar24 * 0x10;
    local_ab8 = (FAssetRegistryImpl *)CONCAT44(local_ab8._4_4_,(int)local_ae8);
    FVar25.Data = local_af0.Data;
    while( true ) {
      if ((int)local_ae8 != (int)uVar24) {
        local_b07 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_b07);
      }
      pFVar7 = local_ab0;
      if (FVar25.Data == pFVar27) break;
      local_a78 = &local_8c0;
      local_a30 = &local_a78;
      local_8b8 = (undefined8 *)0x0;
      local_8b0 = 0;
      local_8ac = 1;
      local_a38 = Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles'::__l13::<lambda_1>,bool,FAssetData_const_*>
                  ::Call;
      if (*(int *)(FVar25.Data + 8) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *(wchar_t **)FVar25.Data;
      }
      pFVar12 = ::FName::FName(&local_9a8,pwVar19);
      local_a70 = &local_a38;
      local_a28 = Core::Private::Function::
                  TFunctionRefCaller<`FAssetRegistryState::EnumerateAssetsByPackageName'::__l2::<lambda_1>,bool,FAssetData_*>
                  ::Call;
      local_a20 = &local_a70;
      FAssetRegistryState::EnumerateMutableAssetsByPackageName
                (&this_00->State,*pFVar12,(TFunctionRef<bool___cdecl(FAssetData_*)> *)&local_a28);
      if (0 < local_8b0) {
        uVar3 = local_8b0 + (int)local_af8;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        if (local_af8._4_4_ < (int)uVar3) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,uVar3,&local_b00,(int)local_af8,(int *)((longlong)&local_af8 + 4));
        }
        iVar10 = local_8b0;
        puVar20 = &local_8c0;
        if (local_8b8 != (undefined8 *)0x0) {
          puVar20 = local_8b8;
        }
        puVar2 = puVar20 + local_8b0;
        while( true ) {
          if (local_8b0 != iVar10) {
            local_b06 = 0;
            `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_b06);
          }
          if (puVar20 == puVar2) break;
          FAssetData::GetSoftObjectPath((FAssetData *)*puVar20,&local_a98);
          if (((local_b00.Data <= &local_a98) &&
              (&local_a98 < (FSoftObjectPath *)(local_b00.Data + (longlong)local_af8._4_4_ * 0x20)))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_af8;
          if ((int)local_af8 == local_af8._4_4_) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_b00,(int *)((longlong)&local_af8 + 4));
          }
          local_af8 = CONCAT44(local_af8._4_4_,iVar9 + 1);
          pFVar18 = local_b00.Data + (longlong)iVar9 * 0x20;
          *(FName *)&pFVar18->field_0x0 = local_a98.AssetPath.PackageName;
          *(FName *)(pFVar18 + 8) = local_a98.AssetPath.AssetName;
          *(undefined8 *)(pFVar18 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar18 + 0x10) =
               local_a98.SubPathString.Data.AllocatorInstance.Data;
          local_a98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar18 + 0x18) = local_a98.SubPathString.Data.ArrayNum;
          *(int *)(pFVar18 + 0x1c) = local_a98.SubPathString.Data.ArrayMax;
          local_a98.SubPathString.Data.ArrayNum = 0;
          local_a98.SubPathString.Data.ArrayMax = 0;
          puVar20 = puVar20 + 1;
        }
        uVar24 = (ulonglong)local_ab8 & 0xffffffff;
      }
      if (local_8b8 != (undefined8 *)0x0) {
        FMemory::Free(local_8b8);
      }
      FVar25.Data = FVar25.Data + 0x10;
    }
    iVar10 = (int)local_af8;
    pFVar26 = (FSoftObjectPath *)(local_b00.Data + (longlong)(int)local_af8 * 0x20);
    FVar25.Data = local_b00.Data;
    while( true ) {
      if ((int)local_af8 != iVar10) {
        local_b05 = 0;
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_b05);
      }
      iVar9 = local_ae0.ArrayNum;
      if ((FSoftObjectPath *)FVar25.Data == pFVar26) break;
      pFVar22 = (FSoftObjectPath *)
                (local_ae0.AllocatorInstance.Data + (longlong)local_ae0.ArrayNum * 0x20);
      for (this_01.Data = local_ae0.AllocatorInstance.Data;
          (FSoftObjectPath *)this_01.Data != pFVar22; this_01.Data = this_01.Data + 0x20) {
        bVar8 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)this_01.Data,(FSoftObjectPath *)FVar25.Data);
        if (bVar8) goto LAB_142ba870f;
      }
      pFVar13 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                          (&local_930,(FSoftObjectPath *)FVar25.Data);
      local_988.OuterPath = pFVar13->OuterPath;
      local_988.ObjectName = pFVar13->ObjectName;
      ppFVar14 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                 ::Find(&(this_00->State).CachedAssets,&local_988);
      if ((ppFVar14 != (FAssetData **)0x0) && (*ppFVar14 != (FAssetData *)0x0)) {
        local_a58 = local_a68;
        uStack_a50 = 1;
        local_978._12_4_ = uStack_a4c;
        local_978.ArrayNum = 1;
        local_a68[0] = *ppFVar14;
        local_978.DataPtr = local_a58;
        RemoveAssetDatas(this_00,pFVar7,&local_978);
      }
LAB_142ba870f:
      FVar25.Data = FVar25.Data + 0x20;
    }
    uVar24 = (ulonglong)local_ae0.ArrayNum;
    pFVar26 = (FSoftObjectPath *)(local_ae0.AllocatorInstance.Data + uVar24 * 0x20);
    FVar25.Data = local_ae0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar24 != iVar9) {
        local_b04[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b04);
      }
      if ((FSoftObjectPath *)FVar25.Data == pFVar26) break;
      local_920 = (((FSoftObjectPath *)FVar25.Data)->AssetPath).PackageName;
      FStack_918 = (((FSoftObjectPath *)FVar25.Data)->AssetPath).AssetName;
      pFVar27 = (FScriptContainerElement *)0x0;
      local_ac8.ComparisonIndex.Value = 0;
      local_ac8.Number = 0;
      FStack_ac0.ComparisonIndex.Value = 0;
      FStack_ac0.Number = 0;
      if ((((FSoftObjectPath *)FVar25.Data)->AssetPath).AssetName != (FName)0x0) {
        iVar10 = (((FSoftObjectPath *)FVar25.Data)->SubPathString).Data.ArrayNum;
        iVar21 = 0;
        iVar23 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar23 = iVar21;
        }
        pFVar15 = ::FString::ConstructFromPtrSize
                            (&local_968,
                             (uchar *)(((FSoftObjectPath *)FVar25.Data)->SubPathString).Data.
                                      AllocatorInstance.Data,iVar23);
        if (&local_910 != pFVar15) {
          pFVar27 = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar21 = (pFVar15->Data).ArrayNum;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
        }
        if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_968.Data.AllocatorInstance.Data);
        }
        if (pFVar27 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar27);
        }
        if (iVar21 < 2) {
          local_ac8 = (((FSoftObjectPath *)FVar25.Data)->AssetPath).PackageName;
          FStack_8f8 = (((FSoftObjectPath *)FVar25.Data)->AssetPath).AssetName;
          FStack_ac0 = (((FSoftObjectPath *)FVar25.Data)->AssetPath).AssetName;
          local_900 = local_ac8;
          local_8f0 = local_ac8;
          FStack_8e8 = FStack_8f8;
        }
        else {
          local_8a8.Base = local_888;
          local_8a8.bIsDynamic = false;
          local_8a8.bIsExternal = false;
          local_8a8.CurPos = local_888;
          local_8a8.End = local_72;
          FSoftObjectPath::ToString((FSoftObjectPath *)FVar25.Data,&local_8a8);
          local_a48 = local_8a8.Base;
          iStack_a40 = (int)((longlong)local_8a8.CurPos - (longlong)local_8a8.Base >> 1);
          local_958._12_4_ = uStack_a3c;
          local_958.Size = iStack_a40;
          local_958.DataPtr = local_8a8.Base;
          pFVar16 = AssetRegistry::Private::SplitIntoOuterPathAndAssetName(&local_8e0,&local_958);
          iVar10 = (pFVar16->OuterPath).Size;
          iVar21 = (pFVar16->InnermostName).Size;
          pwVar19 = (pFVar16->OuterPath).DataPtr;
          pwVar6 = (pFVar16->InnermostName).DataPtr;
          if (((iVar10 == 0) || (iVar21 == 0)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Parts.OuterPath.IsEmpty() && !Parts.InnermostName.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\AssetDataMap.h"
                                 ,0x1d0,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar12 = ::FName::FName(&local_9a0,iVar10,pwVar19,FNAME_Find);
          local_ac8 = *pFVar12;
          pFVar12 = ::FName::FName(&local_938,iVar21,pwVar6,FNAME_Add);
          FStack_ac0 = *pFVar12;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8a8);
        }
      }
      local_948.OuterPath = local_ac8;
      local_948.ObjectName = FStack_ac0;
      ppFVar14 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                 ::Find(&(this_00->State).CachedAssets,&local_948);
      pFVar7 = local_ab0;
      if ((ppFVar14 != (FAssetData **)0x0) && (pFVar4 = *ppFVar14, pFVar4 != (FAssetData *)0x0)) {
        piVar1 = &(local_ab0->AssetEvents).ArrayMax;
        iVar10 = (local_ab0->AssetEvents).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&(local_ab0->AssetEvents).AllocatorInstance,piVar1);
        }
        (pFVar7->AssetEvents).ArrayNum = iVar10 + 1;
        this_02 = (FAssetData *)
                  ((pFVar7->AssetEvents).AllocatorInstance.Data + (longlong)iVar10 * 0x70);
        FAssetData::FAssetData(this_02,pFVar4);
        this_02[1].PackageName.ComparisonIndex.Value = 3;
      }
      uVar24 = local_ae0._8_8_ & 0xffffffff;
      FVar25.Data = FVar25.Data + 0x20;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b00.Data,(int)local_af8);
    if ((FSoftObjectPath *)local_b00.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_b00.Data);
    }
    DestructItems<FString,int>((FString *)local_af0.Data,(int)local_ae8);
    if (local_af0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_af0.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.LocalPaths.AllocatorInstance.Data,local_a18.LocalPaths.ArrayNum)
    ;
    if (local_a18.LocalPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.LocalPaths.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.LocalFiles.AllocatorInstance.Data,local_a18.LocalFiles.ArrayNum)
    ;
    if (local_a18.LocalFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.LocalFiles.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.PackageFiles.AllocatorInstance.Data,
               local_a18.PackageFiles.ArrayNum);
    if (local_a18.PackageFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.PackageFiles.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.LocalDirs.AllocatorInstance.Data,local_a18.LocalDirs.ArrayNum);
    if (local_a18.LocalDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.LocalDirs.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.PackageDirs.AllocatorInstance.Data,
               local_a18.PackageDirs.ArrayNum);
    if (local_a18.PackageDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.PackageDirs.AllocatorInstance.Data);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_ae0.AllocatorInstance.Data,local_ae0.ArrayNum);
    if ((FSoftObjectPath *)local_ae0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_ae0.AllocatorInstance.Data);
    }
  }
  return;
}

// ScanPathsSynchronous @ 142ba9580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FScanPathContext *param_2)

{
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  *pTVar1;
  wchar_t **ppwVar2;
  bool bVar3;
  FAssetDataGatherer *this_00;
  FClassInheritanceContext *this_01;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  FAssetRegistryImpl *pFVar8;
  FScanPathContext *pFVar9;
  FScanPathContext *pFVar10;
  FDelegateHandle FVar11;
  bool bVar12;
  EGatherStatus EVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FName *pFVar19;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar20;
  ulonglong uVar21;
  void *pvVar22;
  size_t sVar23;
  FCachedAssetKey *pFVar24;
  FAssetData **ppFVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  wchar_t *pwVar30;
  ForAnyElementType FVar31;
  int iVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  EDeferFlag EVar35;
  uint *puVar36;
  int iVar37;
  EDeferFlag EVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  wchar_t **ppwVar41;
  EDeferFlag EVar42;
  undefined1 auStackY_10b8 [32];
  undefined1 local_1068;
  undefined1 local_1067;
  undefined1 local_1066;
  undefined1 local_1065;
  undefined1 local_1064;
  FIdentityFunctor local_1063 [3];
  TArray<FName,TSizedDefaultAllocator<32>_> local_1060;
  uint local_1050;
  undefined1 local_104c [4];
  FAssetRegistryImpl *local_1048;
  FScanPathContext *local_1040;
  longlong *local_1038;
  undefined8 uStack_1030;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  int local_1010;
  undefined4 uStack_100c;
  FLLMScope local_1008 [2];
  FScanPathContext *local_1000;
  FDelegateHandle local_ff8;
  FScriptContainerElement *local_fe8;
  FName local_fd8;
  undefined8 local_fd0;
  longlong *local_fc8;
  undefined1 auStack_fc0 [16];
  uint uStack_fb0;
  uint uStack_fac;
  longlong local_fa8;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_fa0;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *local_f98;
  undefined2 local_f90;
  longlong *local_f88;
  undefined1 auStack_f80 [16];
  uint uStack_f70;
  uint uStack_f6c;
  longlong local_f68;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_f60;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *local_f58;
  undefined2 local_f50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f48;
  FName local_f28;
  undefined4 local_f20;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *local_f18;
  FName local_f10;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *local_f08;
  code **local_f00 [2];
  FName local_ef0;
  int local_ee8;
  FAssetData *local_ee0;
  FAssetDataGatherer *local_ed8;
  FMemScope local_ed0;
  int local_ec8;
  int local_ec4;
  undefined1 local_ec0 [12];
  uint uStack_eb4;
  TBitArray<FDefaultBitArrayAllocator> *local_eb0;
  undefined8 uStack_ea8;
  longlong local_ea0;
  undefined8 uStack_e98;
  longlong *local_e90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e88;
  undefined8 uStack_e68;
  longlong *local_e60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e58;
  undefined8 uStack_e38;
  code *local_e30;
  code ***local_e28;
  TArrayView<wchar_t_const_*_const,int> local_e20;
  FScriptContainerElement *local_e08;
  int iStack_e00;
  undefined4 uStack_dfc;
  wchar_t *local_df8;
  int iStack_df0;
  undefined4 uStack_dec;
  FAssetData **local_de8;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  FScriptContainerElement *local_dd8;
  int iStack_dd0;
  undefined4 uStack_dcc;
  code *local_dc8;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **local_dc0;
  FName *local_db8;
  int iStack_db0;
  undefined4 uStack_dac;
  code *local_da8;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **local_da0;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_u_0 local_d98;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *local_d48;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_d40;
  FScanPathContext **local_d38;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *local_d30;
  TArrayView<FAssetData_*,int> local_d28;
  FName local_d18;
  FName local_d10;
  undefined1 local_d08 [24];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTStack_cf0;
  TArrayView<FName_const_,int> local_ce8;
  TStringView<wchar_t> local_cd8;
  TStringView<wchar_t> local_cc8;
  FCachedAssetKey local_cb8;
  TRangedForIterator local_ca8;
  undefined1 local_c78 [32];
  longlong local_c58;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_c50;
  undefined1 local_c48 [32];
  longlong local_c28;
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  *pTStack_c20;
  FCachedAssetKey local_c18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c08;
  undefined4 local_bcc;
  undefined4 local_bac;
  TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  local_ba8;
  undefined1 local_b58 [32];
  uint *local_b38;
  uint local_b30;
  int local_b24;
  ForElementType<FSetElementId> local_b18;
  int local_b10;
  undefined1 local_b08 [32];
  uint *local_ae8;
  EDeferFlag local_ae0;
  int local_ad4;
  ForElementType<FSetElementId> local_ac8;
  int local_ac0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_ab8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a68;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> local_a18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_9c8;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> local_978;
  undefined1 local_928 [104];
  longlong *local_8c0;
  bool local_8b8;
  FAssetRegistryImpl *local_8a8;
  FEventContext *local_8a0;
  FClassInheritanceContext *local_898;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_u_0 local_890;
  double local_840;
  int local_838;
  undefined4 local_834;
  bool local_830;
  TStringBuilderBase<wchar_t> local_828;
  FScriptContainerElement local_808 [256];
  FARFilter local_708;
  undefined1 local_5b8 [152];
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_520;
  undefined8 local_4e0;
  undefined4 local_4d8;
  TStringBuilderBase<wchar_t> local_4b8;
  wchar_t local_498 [256];
  undefined1 local_298 [120];
  int local_220;
  int local_214;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  local_1048 = this;
  local_1040 = param_2;
  if (((param_1 ==
        (TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
         *)0x0) && (this->bInitializationComplete != false)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScopeLock || !bInitializationComplete",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                          ,0x1abe,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FLLMScope::FLLMScope(local_1008,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_ed0,AssetRegistry,true);
  bVar12 = TryConstructGathererIfNeeded(this);
  if (bVar12) {
    uVar34 = (param_2->LocalFiles).ArrayNum + (param_2->LocalDirs).ArrayNum;
    this_00 = (this->GlobalGatherer).Ptr;
    local_ed8 = this_00;
    if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
    }
    if ((param_2->LocalPaths).ArrayMax < (int)uVar34) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar34,&(param_2->LocalPaths).AllocatorInstance,
                 (param_2->LocalPaths).ArrayNum,&(param_2->LocalPaths).ArrayMax);
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&param_2->LocalPaths,&param_2->LocalDirs);
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&param_2->LocalPaths,&param_2->LocalFiles);
    iVar15 = (param_2->LocalPaths).ArrayNum;
    if (iVar15 != 0) {
      local_dd8 = (param_2->LocalPaths).AllocatorInstance.Data;
      if ((iVar15 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTStack_cf0 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)
                    CONCAT44(uStack_dcc,iVar15);
      local_d08._16_8_ = local_dd8;
      iStack_dd0 = iVar15;
      FAssetDataGatherer::AddRequiredMountPoints
                (this_00,(TArrayView<FString,int> *)(local_d08 + 0x10));
      local_978.Elements._0_8_ = 0;
      local_978.Elements._8_8_ = 0;
      local_978.Elements._32_8_ = 0;
      local_978.Elements._40_4_ = 0;
      local_978.Elements._44_4_ = 0x80;
      local_978.Elements._48_4_ = 0xffffffff;
      local_978.Elements._52_4_ = 0;
      local_978.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_978.HashSize = 0;
      local_9c8.Elements._0_8_ = 0;
      local_9c8.Elements._8_8_ = 0;
      local_9c8.Elements._32_8_ = 0;
      local_9c8.Elements._40_4_ = 0;
      local_9c8.Elements._44_4_ = 0x80;
      local_9c8.Elements._48_4_ = 0xffffffff;
      local_9c8.Elements._52_4_ = 0;
      local_9c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_9c8.HashSize = 0;
      local_ff8.ID = 0;
      local_1000 = param_2;
      if (param_2->bForceRescan != false) {
        local_d48 = &local_978;
        local_d40 = &local_9c8;
        local_d38 = &local_1000;
        local_d30 = param_2->OutFoundAssets;
        local_ff8 = TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
                    ::
                    AddLambda<_UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous_::__l18::<lambda_2>_>
                              ((TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
                                *)&this_00->GatheredResultsEvent,(<lambda_2> *)local_d08);
                    /* WARNING: Load size is inaccurate */
        local_ff8.ID = *local_ff8.ID;
      }
      if (param_1 ==
          (TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
           *)0x0) {
        FAssetDataGatherer::ScanPathsSynchronous
                  (this_00,&param_2->LocalPaths,param_2->bForceRescan,
                   param_2->bIgnoreDenyListScanFilters);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)param_1->Lock);
        FAssetDataGatherer::ScanPathsSynchronous
                  (this_00,&param_2->LocalPaths,param_2->bForceRescan,
                   param_2->bIgnoreDenyListScanFilters);
        AcquireSRWLockExclusive((PSRWLOCK)param_1->Lock);
        this_01 = param_2->InheritanceContext;
        uVar17 = GetRegisteredNativeClassesVersionNumber();
        uVar18 = GetRegisteredClassesVersionNumber();
        AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer(this_01,this,uVar17,uVar18);
      }
      local_a18.Elements._0_8_ = 0;
      local_fd0 = 1;
      local_a18.Elements._8_8_ = 0;
      local_a18.Elements._32_8_ = 0;
      local_a18.Elements._40_4_ = 0;
      local_a18.Elements._44_4_ = 0x80;
      local_a18.Elements._48_4_ = 0xffffffff;
      local_a18.Elements._52_4_ = 0;
      local_a18.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a18.HashSize = 0;
      local_a68.Elements._0_8_ = 0;
      local_a68.Elements._8_8_ = 0;
      local_a68.Elements._32_8_ = 0;
      local_a68.Elements._40_4_ = 0;
      local_a68.Elements._44_4_ = 0x80;
      local_a68.Elements._48_4_ = 0xffffffff;
      local_a68.Elements._52_4_ = 0;
      local_a68.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a68.HashSize = 0;
      if (param_2->bForceRescan != false) {
        if ((param_2->PackageDirs).ArrayNum != 0) {
          FARFilter::FARFilter(&local_708);
          pFVar33 = (param_2->PackageDirs).AllocatorInstance.Data;
          local_708.bIncludeOnlyOnDiskAssets = true;
          local_708.bRecursivePaths = true;
          iVar15 = (param_2->PackageDirs).ArrayNum;
          pFVar40 = pFVar33 + (longlong)iVar15 * 0x10;
          while( true ) {
            if ((param_2->PackageDirs).ArrayNum != iVar15) {
              local_1068 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1068);
            }
            if (pFVar33 == pFVar40) break;
            if (*(int *)(pFVar33 + 8) == 0) {
              pwVar30 = L"";
            }
            else {
              pwVar30 = *(wchar_t **)pFVar33;
            }
            pFVar19 = ::FName::FName(&local_d10,pwVar30);
            if (((local_708.PackagePaths.AllocatorInstance.Data <= pFVar19) &&
                (pFVar19 < (FName *)(local_708.PackagePaths.AllocatorInstance.Data +
                                    (longlong)local_708.PackagePaths.ArrayMax * 8))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_708.PackagePaths.ArrayNum == local_708.PackagePaths.ArrayMax) {
              local_708.PackagePaths.ArrayNum =
                   Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_708.PackagePaths.AllocatorInstance,
                              &local_708.PackagePaths.ArrayMax);
            }
            pFVar33 = pFVar33 + 0x10;
            *(FName *)(local_708.PackagePaths.AllocatorInstance.Data +
                      (longlong)local_708.PackagePaths.ArrayNum * 8) = *pFVar19;
            local_708.PackagePaths.ArrayNum = local_708.PackagePaths.ArrayNum + 1;
          }
          FARCompiledFilter::FARCompiledFilter((FARCompiledFilter *)local_298);
          CompileFilter(this,param_2->InheritanceContext,&local_708,(FARCompiledFilter *)local_298);
          local_ab8.Elements._44_4_ = 0x80;
          local_f18 = &local_a18;
          local_ab8.Hash.InlineData[0] = '\0';
          local_ab8.Hash.InlineData[1] = '\0';
          local_ab8.Hash.InlineData[2] = '\0';
          local_ab8.Hash.InlineData[3] = '\0';
          local_ab8.Hash._padding_ = 0;
          local_dc0 = &local_f18;
          local_ab8._72_8_ = 0;
          local_ab8.Elements._0_8_ = 0;
          local_dc8 = Core::Private::Function::
                      TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l30::<lambda_4>,bool,FAssetData_const_&>
                      ::Call;
          local_ab8.Elements._16_8_ = 0;
          local_ab8.Elements._24_8_ = 0;
          local_ab8.Elements._8_8_ = 0;
          local_ab8.Elements._32_8_ = 0;
          local_ab8.Elements._40_4_ = 0;
          local_ab8.Elements._48_4_ = 0xffffffff;
          local_ab8.Elements._52_4_ = 0;
          local_ab8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          FAssetRegistryState::EnumerateAssets
                    (&this->State,(FARCompiledFilter *)local_298,&local_ab8,
                     (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_dc8,
                     AllowUnfilteredArAssets);
          local_ab8._72_8_ = local_ab8._72_8_ & 0xffffffff00000000;
          if (local_ab8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_ab8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_ab8.Elements);
          local_f48.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x60);
          local_f48._padding_._0_4_ = 0;
          local_f48._padding_._4_4_ = 1;
          local_f48.UnvisitedBitMask = 0xffffffff;
          local_f48.CurrentBitIndex = 0;
          local_f48.BaseBitIndex = 0;
          if (local_220 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f48);
          }
          uStack_1030 = CONCAT44(local_f48._padding_._4_4_,(undefined4)local_f48._padding_);
          local_1038 = (longlong *)(local_298 + 0x50);
          uStack_1020 = CONCAT44(local_f48.CurrentBitIndex,local_f48.UnvisitedBitMask);
          uStack_1018 = CONCAT44(local_f48._28_4_,local_f48.BaseBitIndex);
          local_1010 = local_298._88_4_ - local_214;
          pTStack_1028 = local_f48.Array;
          uStack_e98._4_4_ = uStack_100c;
          uStack_e98._0_4_ = local_1010;
          local_eb0 = local_f48.Array;
          local_ec0._0_8_ = local_1038;
          unique0x10002582 = uStack_1030;
          uStack_ea8 = uStack_1020;
          local_ea0 = uStack_1018;
          pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_c08,(TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x60)
                               ,local_220);
          local_1038 = (longlong *)(local_298 + 0x50);
          uStack_1030 = pTVar20->_padding_;
          pTStack_1028 = pTVar20->Array;
          uStack_1020._0_4_ = pTVar20->UnvisitedBitMask;
          uStack_1020._4_4_ = pTVar20->CurrentBitIndex;
          uStack_1018 = *(longlong *)&pTVar20->BaseBitIndex;
          local_1010 = local_298._88_4_ - local_214;
          local_ca8._44_4_ = uStack_100c;
          local_ca8.InitialNum = local_1010;
          local_ca8._padding_ = (longlong)local_1038;
          local_ca8._padding_ = uStack_1030;
          local_ca8._padding_ = (longlong)pTStack_1028;
          local_ca8._padding_ = uStack_1020;
          local_ca8._padding_ = uStack_1018;
          bVar12 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_ec0,&local_ca8);
          if (bVar12) {
            do {
              FVar4 = *(FName *)(*(longlong *)local_ec0._0_8_ + (longlong)uStack_ea8._4_4_ * 0x10);
              local_f10 = FVar4;
              uVar34 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
              iVar15 = TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FName>
                                 ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                   *)&this->CachedVerseFilesByPath,FVar4.Number + uVar34,&local_f10)
              ;
              if (iVar15 != -1) {
                lVar27 = (longlong)iVar15 * 0x20 + *(longlong *)&this->CachedVerseFilesByPath;
                puVar28 = (undefined8 *)(lVar27 + 8);
                if (lVar27 == 0) {
                  puVar28 = (undefined8 *)0x0;
                }
                if (puVar28 != (undefined8 *)0x0) {
                  local_db8 = (FName *)*puVar28;
                  iVar15 = *(int *)(puVar28 + 1);
                  if ((iVar15 < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_ce8._12_4_ = uStack_dac;
                  local_ce8.ArrayNum = iVar15;
                  local_ce8.DataPtr = local_db8;
                  iStack_db0 = iVar15;
                  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
                            (&local_a68,&local_ce8);
                }
              }
              uStack_ea8 = CONCAT44(uStack_ea8._4_4_,(uint)uStack_ea8 & ~uStack_eb4);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_ec0 + 8));
              bVar12 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_ec0,&local_ca8);
            } while (bVar12);
          }
          DestructItems<FAssetData,int>((FAssetData *)0x0,0);
          FARCompiledFilter::~FARCompiledFilter((FARCompiledFilter *)local_298);
          FARFilter::~FARFilter(&local_708);
        }
        local_1050 = (param_2->PackageFiles).ArrayNum;
        uVar21 = (ulonglong)(int)local_1050;
        pFVar33 = (param_2->PackageFiles).AllocatorInstance.Data;
        local_fe8 = pFVar33 + uVar21 * 0x10;
        while( true ) {
          pFVar40 = local_fe8;
          if ((param_2->PackageFiles).ArrayNum != (int)uVar21) {
            local_1067 = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1067);
          }
          pFVar8 = local_1048;
          this = local_1048;
          if (pFVar33 == pFVar40) break;
          local_f08 = &local_a18;
          local_da0 = &local_f08;
          local_da8 = Core::Private::Function::
                      TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l45::<lambda_5>,bool,FAssetData_const_*>
                      ::Call;
          if (*(int *)(pFVar33 + 8) == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = *(wchar_t **)pFVar33;
          }
          pFVar19 = ::FName::FName(&local_d18,pwVar30);
          local_f00[0] = &local_da8;
          local_e30 = Core::Private::Function::
                      TFunctionRefCaller<`FAssetRegistryState::EnumerateAssetsByPackageName'::__l2::<lambda_1>,bool,FAssetData_*>
                      ::Call;
          local_e28 = local_f00;
          FAssetRegistryState::EnumerateMutableAssetsByPackageName
                    (&pFVar8->State,*pFVar19,(TFunctionRef<bool___cdecl(FAssetData_*)> *)&local_e30)
          ;
          FAssetDataGatherer::GetVerseFileExtensions(&local_e20);
          ppwVar2 = local_e20.DataPtr + local_e20.ArrayNum;
          for (ppwVar41 = local_e20.DataPtr; ppwVar41 != ppwVar2; ppwVar41 = ppwVar41 + 1) {
            pwVar30 = *ppwVar41;
            local_4b8.Base = local_498;
            pvVar22 = *(void **)pFVar33;
            local_4b8.CurPos = local_498;
            local_4b8.End = (wchar_t *)local_298;
            local_4b8.bIsDynamic = false;
            local_4b8.bIsExternal = false;
            iVar15 = *(int *)(pFVar33 + 8) + -1;
            if (*(int *)(pFVar33 + 8) == 0) {
              iVar15 = 0;
            }
            uVar17 = (ulong64)iVar15;
            if (local_298 < local_498 + uVar17) {
              TStringBuilderBase<wchar_t>::Extend(&local_4b8,uVar17);
            }
            if (iVar15 != 0) {
              pvVar22 = FGenericPlatformString::Memcpy(local_4b8.CurPos,pvVar22,uVar17 * 2);
              local_4b8.CurPos = (wchar_t *)((longlong)pvVar22 + uVar17 * 2);
            }
            iVar15 = 0;
            if (pwVar30 != (wchar_t *)0x0) {
              sVar23 = wcslen(pwVar30);
              iVar15 = (int)sVar23;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_4b8,pwVar30,iVar15);
            if (local_4b8.End < local_4b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_4b8,1);
            }
            *local_4b8.CurPos = L'\0';
            ::FName::FName(&local_fd8,local_4b8.Base,FNAME_Find);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4b8);
            FVar4 = local_fd8;
            if (local_fd8 != (FName)0x0) {
              local_ef0 = local_fd8;
              uVar34 = ::GetTypeHash(local_fd8.ComparisonIndex.Value);
              iVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                       FindIndexByHash<FName>
                                 (&local_1048->CachedVerseFiles,FVar4.Number + uVar34,&local_ef0);
              if (iVar15 != -1) {
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                          (&local_a68,&local_f28,(bool *)&local_fd8);
              }
            }
            param_2 = local_1040;
          }
          pFVar33 = pFVar33 + 0x10;
          uVar21 = (ulonglong)local_1050;
        }
      }
      AssetRegistry::Impl::FTickContext::FTickContext
                ((FTickContext *)local_5b8,this,param_2->EventContext,param_2->InheritanceContext);
      EVar13 = TickGatherer(this,(FTickContext *)local_5b8);
      pTVar1 = &this->DeferredAssets;
      param_2->Status = EVar13;
      local_1060.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1060.ArrayNum = 0;
      local_1060.ArrayMax = 0;
      local_ba8.Pairs.Elements._0_8_ = 0;
      local_ba8.Pairs.Elements._8_8_ = 0;
      local_ba8.Pairs.Elements._32_8_ = 0;
      local_ba8.Pairs.Elements._40_4_ = 0;
      local_ba8.Pairs.Elements._44_4_ = 0x80;
      local_ba8.Pairs.Elements._48_4_ = 0xffffffff;
      local_ba8.Pairs.Elements._52_4_ = 0;
      local_ba8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_ba8.Pairs.HashSize = 0;
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_c78,
                 (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                  *)pTVar1);
      local_f50 = 0;
      stack0xfffffffffffff088 = local_c78._16_16_;
      local_f88 = (longlong *)local_c78._0_8_;
      auStack_f80._0_8_ = local_c78._8_8_;
      local_f68 = local_c58;
      pTStack_f60 = pTStack_c50;
      uVar21 = local_c78._24_8_ >> 0x20;
      uVar34 = local_c78._28_4_;
      local_f58 = (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                   *)pTVar1;
      if ((int)uVar34 < *(int *)(local_c78._16_8_ + 0x18)) {
        do {
          plVar29 = local_f88;
          bVar12 = `UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l2::<lambda_1>::
                   operator()(&local_1000,
                              *(FAssetData **)(*local_f88 + 8 + (longlong)(int)uVar21 * 0x18));
          if (bVar12) {
            pFVar19 = (FName *)(*plVar29 + (longlong)(int)uVar34 * 0x18);
            if (((local_1060.AllocatorInstance.Data <= pFVar19) &&
                (pFVar19 < (FName *)(local_1060.AllocatorInstance.Data +
                                    (longlong)local_1060.ArrayMax * 8))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar15 = local_1060.ArrayNum;
            if (local_1060.ArrayNum == local_1060.ArrayMax) {
              iVar15 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_1060.AllocatorInstance,&local_1060.ArrayMax);
            }
            local_1060.ArrayNum = iVar15 + 1;
            *(FName *)(local_1060.AllocatorInstance.Data + (longlong)iVar15 * 8) = *pFVar19;
            pFVar19 = (FName *)(*plVar29 + (longlong)(int)uVar34 * 0x18);
            TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
            ::Emplace<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
                      (&local_ba8,pFVar19,
                       (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)(pFVar19 + 1));
            TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_f60,uVar34);
            local_f50 = CONCAT11(local_f50._1_1_,1);
          }
          uStack_f70 = uStack_f70 & ~auStack_f80._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f80);
          uVar21 = (ulonglong)uStack_f6c;
          uVar34 = uStack_f6c;
        } while ((int)uStack_f6c < *(int *)(auStack_f80._8_8_ + 0x18));
        if (((char)local_f50 != '\0') && (local_f50._1_1_ != '\0')) {
          uVar34 = *(int *)&(local_f58->Elements).field_0x8 -
                   *(int *)&(local_f58->Elements).field_0x34;
          iVar15 = 1;
          if (3 < uVar34) {
            uVar21 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_f20 = (undefined4)lVar27;
            iVar15 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar34) && (local_f58->HashSize < iVar15)) ||
             (iVar15 < local_f58->HashSize)) {
            local_f58->HashSize = iVar15;
            TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            ::Rehash(local_f58);
          }
        }
      }
      pTVar1 = &this->DeferredAssetsForGameThread;
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_c48,
                 (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                  *)pTVar1);
      local_f90 = 0;
      stack0xfffffffffffff048 = local_c48._16_16_;
      local_fc8 = (longlong *)local_c48._0_8_;
      auStack_fc0._0_8_ = local_c48._8_8_;
      local_fa8 = local_c28;
      pTStack_fa0 = pTStack_c20;
      uVar21 = local_c48._24_8_ >> 0x20;
      uVar34 = local_c48._28_4_;
      local_f98 = (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                   *)pTVar1;
      if ((int)uVar34 < *(int *)(local_c48._16_8_ + 0x18)) {
        do {
          local_828.Base = (wchar_t *)local_808;
          local_828.bIsDynamic = false;
          local_828.bIsExternal = false;
          local_828.CurPos = (wchar_t *)local_808;
          local_828.End = (wchar_t *)&local_708;
          ::FName::ToString(*(FName **)(*local_fc8 + 8 + (longlong)(int)uVar21 * 0x18),&local_828);
          lVar27 = (longlong)local_828.CurPos - (longlong)local_828.Base;
          if (local_828.End < (FARFilter *)((longlong)local_828.CurPos + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_828,1);
          }
          pwVar30 = local_828.Base;
          pFVar9 = local_1000;
          iVar37 = (int)(lVar27 >> 1);
          *local_828.CurPos = 0;
          local_e08 = (FScriptContainerElement *)local_828.Base;
          uVar6._4_4_ = uStack_dfc;
          uVar6._0_4_ = iVar37;
          iVar15 = (local_1000->PackageDirs).ArrayNum;
          pFVar33 = (local_1000->PackageDirs).AllocatorInstance.Data;
          pFVar40 = pFVar33 + (longlong)iVar15 * 0x10;
          local_fe8 = (FScriptContainerElement *)local_828.Base;
          iStack_e00 = iVar37;
          while( true ) {
            if ((pFVar9->PackageDirs).ArrayNum != iVar15) {
              local_1066 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1066);
            }
            pFVar10 = local_1000;
            if (pFVar33 == pFVar40) {
              iVar15 = (local_1000->PackageFiles).ArrayNum;
              pFVar33 = (local_1000->PackageFiles).AllocatorInstance.Data;
              pFVar40 = pFVar33 + (longlong)iVar15 * 0x10;
              goto LAB_142baa416;
            }
            local_df8 = *(wchar_t **)pFVar33;
            local_cd8.DataPtr = pwVar30;
            iStack_df0 = *(int *)(pFVar33 + 8) + -1;
            if (*(int *)(pFVar33 + 8) == 0) {
              iStack_df0 = 0;
            }
            local_cc8._12_4_ = uStack_dec;
            local_cc8.Size = iStack_df0;
            local_cd8._8_8_ = uVar6;
            local_cc8.DataPtr = local_df8;
            bVar12 = FPathViews::IsParentPathOf(&local_cc8,&local_cd8);
            if (bVar12) break;
            pFVar33 = pFVar33 + 0x10;
          }
LAB_142baa474:
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_828);
          plVar29 = local_fc8;
          pFVar19 = (FName *)(*local_fc8 + (longlong)(int)uVar34 * 0x18);
          if (((local_1060.AllocatorInstance.Data <= pFVar19) &&
              (pFVar19 < (FName *)(local_1060.AllocatorInstance.Data +
                                  (longlong)local_1060.ArrayMax * 8))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar15 = local_1060.ArrayNum;
          if (local_1060.ArrayNum == local_1060.ArrayMax) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_1060.AllocatorInstance,&local_1060.ArrayMax);
          }
          local_1060.ArrayNum = iVar15 + 1;
          *(FName *)(local_1060.AllocatorInstance.Data + (longlong)iVar15 * 8) = *pFVar19;
          pFVar19 = (FName *)(*plVar29 + (longlong)(int)uVar34 * 0x18);
          TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
          ::Emplace<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
                    (&local_ba8,pFVar19,
                     (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)(pFVar19 + 1));
          TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_fa0,uVar34);
          local_f90 = CONCAT11(local_f90._1_1_,1);
LAB_142baa56d:
          uStack_fb0 = uStack_fb0 & ~auStack_fc0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_fc0);
          uVar21 = (ulonglong)uStack_fac;
          uVar34 = uStack_fac;
        } while ((int)uStack_fac < *(int *)(auStack_fc0._8_8_ + 0x18));
        param_2 = local_1040;
        this = local_1048;
        if (((char)local_f90 != '\0') && (local_f90._1_1_ != '\0')) {
          uVar34 = *(int *)&(local_f98->Elements).field_0x8 -
                   *(int *)&(local_f98->Elements).field_0x34;
          iVar15 = 1;
          if (3 < uVar34) {
            uVar21 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_f28.Number = (uint)lVar27;
            iVar15 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar34) && (local_f98->HashSize < iVar15)) ||
             (iVar15 < local_f98->HashSize)) {
            local_f98->HashSize = iVar15;
            TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            ::Rehash(local_f98);
            param_2 = local_1040;
            this = local_1048;
          }
        }
      }
      iVar15 = *(int *)&(this->DeferredAssetsForGameThread).field_0x8;
      iVar37 = *(int *)&(this->DeferredAssetsForGameThread).field_0x34;
      local_d98._0_8_ = 0;
      EVar35 = CanExecuteGameThread;
      local_d98._8_4_ = 0;
      local_d98._32_8_ = 0;
      local_d98._40_4_ = 0;
      local_d98._52_4_ = 0;
      local_d98.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d98.TypedValue.HashSize = 0;
      local_d98._12_4_ = -1;
      local_d98._44_4_ = 0x80;
      local_d98._48_4_ = 0xffffffff;
      bVar14 = IsInGameThread();
      bVar12 = this->bForceCompletionEvenIfClassNotLoaded;
      this->bForceCompletionEvenIfClassNotLoaded = true;
      bVar3 = this->bForceCompletionEvenIfNotOnGameThread;
      this->bForceCompletionEvenIfNotOnGameThread = true;
      EVar38 = BypassNow;
      if (bVar14) {
        EVar38 = EVar35;
      }
      AssetSearchDataGathered
                (this,param_2->EventContext,
                 (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                  *)&local_ba8,&this->DeferredAssetsForGameThread,
                 (FInterruptionContext *)(local_5b8 + 0x30),
                 (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)
                 &local_d98.TypedValue,EVar38);
      this->bForceCompletionEvenIfNotOnGameThread = bVar3;
      this->bForceCompletionEvenIfClassNotLoaded = bVar12;
      if ((local_ba8.Pairs.Elements._8_4_ != local_ba8.Pairs.Elements._52_4_) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8470630944661838736>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x1b90,"CollectedDeferredAssets.Num() == 0"), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((iVar15 - iVar37 <
           *(int *)&(this->DeferredAssetsForGameThread).field_0x8 -
           *(int *)&(this->DeferredAssetsForGameThread).field_0x34) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8470630944661838739>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x1b93,
                              "DeferredAssetsForGameThread.Num() <= OriginalNumDeferredAssetsForGameThread"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_8a0 = param_2->EventContext;
      local_928._16_4_ = 0;
      local_928._20_4_ = 0;
      local_928._24_4_ = 0;
      local_928._28_4_ = 0;
      local_890._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_890._48_8_ = _UNK_150631d98;
      local_898 = param_2->InheritanceContext;
      local_840 = __real_bff0000000000000;
      local_928[0] = false;
      local_928[1] = false;
      local_928._8_8_ = (FScriptContainerElement *)0x0;
      local_928[0x20] = false;
      local_928._48_8_ = ___xmm_bff0000000000000bff0000000000000;
      local_928._56_8_ = _UNK_15076c718;
      local_928._64_8_ = 0;
      local_8c0 = (longlong *)0x0;
      local_8b8 = false;
      local_890._0_8_ = 0;
      local_890._8_4_ = 0;
      local_890._12_4_ = -1;
      local_890._32_8_ = 0;
      local_890.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_890.TypedValue.HashSize = 0;
      local_838 = 0;
      local_834._0_1_ = false;
      local_834._1_1_ = false;
      local_834._2_1_ = true;
      local_834._3_1_ = false;
      local_830 = false;
      local_8a8 = this;
      EVar13 = TickGatherer(this,(FTickContext *)local_928);
      param_2->Status = EVar13;
      if (local_890._12_4_ != -1) {
        local_890.TypedValue.HashSize = 0;
        if (local_890.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_890.TypedValue.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_890.TypedValue.Elements);
      }
      if (local_928._64_8_ != 0) {
        plVar29 = (longlong *)(local_928 + 0x50);
        if (local_8c0 != (longlong *)0x0) {
          plVar29 = local_8c0;
        }
        (**(code **)(*plVar29 + 0x10))();
      }
      if ((FScriptContainerElement *)local_928._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_928._8_8_);
      }
      if (local_d98._12_4_ != -1) {
        local_d98.TypedValue.HashSize = 0;
        if (local_d98.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_d98.TypedValue.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_d98.TypedValue.Elements);
      }
      local_ba8.Pairs.HashSize = 0;
      if (local_ba8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_ba8.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_ba8);
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
                ((FName *)local_1060.AllocatorInstance.Data,local_1060.ArrayNum,local_1063[0],
                 (FNameFastLess *)local_1063);
      iVar15 = local_1060.ArrayNum;
      if (1 < local_1060.ArrayNum) {
        FVar31.Data = local_1060.AllocatorInstance.Data;
        FVar7.Data = local_1060.AllocatorInstance.Data;
        while (FVar7.Data = FVar7.Data + 8,
              (FName *)FVar7.Data !=
              (FName *)(local_1060.AllocatorInstance.Data + (longlong)local_1060.ArrayNum * 8)) {
          if ((*(FName *)FVar31.Data != *(FName *)FVar7.Data) &&
             (FVar31.Data = FVar31.Data + 8, FVar31.Data != FVar7.Data)) {
            *(FName *)FVar31.Data = *(FName *)FVar7.Data;
          }
        }
        iVar15 = (int)((longlong)FVar31.Data + (8 - (longlong)local_1060.AllocatorInstance.Data) >>
                      3);
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(&local_1060,iVar15,Default);
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Difference
                (&local_a18,
                 (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 local_b08,&local_978);
      EVar38 = local_ae0;
      uVar34 = 1;
      uStack_1018._0_4_ = CanExecuteGameThread;
      uStack_1020._4_4_ = (EDeferFlag)uStack_1018;
      if (local_ae0 != CanExecuteGameThread) {
        puVar36 = (uint *)(local_b08 + 0x10);
        if (local_ae8 != (uint *)0x0) {
          puVar36 = local_ae8;
        }
        uVar39 = *puVar36;
        uStack_1018._0_4_ = CanExecuteGameThread;
        EVar35 = CanExecuteGameThread;
        while (uVar39 == 0) {
          lVar27 = (longlong)(int)EVar35;
          uStack_1018._0_4_ = (EDeferFlag)uStack_1018 + 0x20;
          EVar35 = EVar35 + RetryLater;
          uStack_1020._4_4_ = local_ae0;
          if ((int)((local_ae0 - RetryLater) + ((int)(local_ae0 - RetryLater) >> 0x1f & 0x1fU)) >> 5
              < (int)EVar35) goto LAB_142baa9f5;
          uVar39 = puVar36[lVar27 + 1];
        }
        uVar34 = -uVar39 & uVar39;
        uVar21 = (ulonglong)uVar34 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_ec4 = (int)lVar27;
        uStack_1020._4_4_ = ((EDeferFlag)uStack_1018 - RetryLater) + local_ec4;
        if ((int)local_ae0 < (int)uStack_1020._4_4_) {
          uStack_1020._4_4_ = local_ae0;
        }
      }
LAB_142baa9f5:
      local_1038 = (longlong *)local_b08;
      pTStack_1028 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b08 + 0x10);
      local_1010 = local_b08._8_4_ - local_ad4;
      EVar42 = local_ae0 & 0xffffffe0;
      uStack_1030 = CONCAT44(uVar34,EVar35);
      uStack_1020._0_4_ = 0xffffffff;
      uStack_1018._4_4_ = local_bcc;
      TStack_e88._padding_ = uStack_1030;
      iVar15 = (int)local_ae0 >> 5;
      uStack_e68 = CONCAT44(uStack_100c,local_1010);
      bVar26 = (byte)local_ae0;
      TStack_e88.UnvisitedBitMask = 0xffffffff;
      TStack_e88.CurrentBitIndex = uStack_1020._4_4_;
      TStack_e88.BaseBitIndex = (EDeferFlag)uStack_1018;
      TStack_e88._28_4_ = local_bcc;
      local_e90 = local_1038;
      TStack_e88.Array = pTStack_1028;
      if (((int)local_ae0 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = local_1040;
      if (EVar38 != local_ae0) {
        puVar36 = (uint *)(local_b08 + 0x10);
        if (local_ae8 != (uint *)0x0) {
          puVar36 = local_ae8;
        }
        uVar34 = -1 << (bVar26 & 0x1f) & puVar36[iVar15];
        while (uVar34 == 0) {
          lVar27 = (longlong)iVar15;
          EVar42 = EVar42 + 0x20;
          iVar15 = iVar15 + 1;
          EVar38 = local_ae0;
          if ((int)((local_ae0 - RetryLater) + ((int)(local_ae0 - RetryLater) >> 0x1f & 0x1fU)) >> 5
              < iVar15) goto LAB_142baab17;
          uVar34 = puVar36[lVar27 + 1];
        }
        uVar21 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_ec8 = (int)lVar27;
        EVar38 = local_ec8 + -1 + EVar42;
        if ((int)local_ae0 < (int)EVar38) {
          EVar38 = local_ae0;
        }
      }
LAB_142baab17:
      while( true ) {
        plVar29 = local_e90;
        if ((int)local_e90[1] - *(int *)((longlong)local_e90 + 0x34) != (int)uStack_e68) {
          local_1064 = 0;
          `TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1064);
        }
        if (((TStack_e88.CurrentBitIndex == EVar38) &&
            (TStack_e88.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b08 + 0x10))) &&
           (plVar29 == (longlong *)local_b08)) break;
        pFVar24 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
                            (&local_c18,
                             (FSoftObjectPath *)
                             (*plVar29 + (longlong)TStack_e88.CurrentBitIndex * 0x28));
        local_cb8.OuterPath = pFVar24->OuterPath;
        local_cb8.ObjectName = pFVar24->ObjectName;
        ppFVar25 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                   ::Find(&(this->State).CachedAssets,&local_cb8);
        if ((ppFVar25 != (FAssetData **)0x0) && (*ppFVar25 != (FAssetData *)0x0)) {
          local_de8 = &local_ee0;
          uStack_de0 = 1;
          local_d28._12_4_ = uStack_ddc;
          local_d28.ArrayNum = 1;
          local_ee0 = *ppFVar25;
          local_d28.DataPtr = local_de8;
          RemoveAssetDatas(this,pFVar9->EventContext,&local_d28);
        }
        TStack_e88.UnvisitedBitMask = TStack_e88.UnvisitedBitMask & ~TStack_e88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e88);
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                (&local_a68,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_b58,
                 &local_9c8);
      uVar34 = local_b30;
      FVar11.ID = local_ff8.ID;
      iVar15 = 0;
      iVar37 = 0;
      TStack_e58.CurrentBitIndex = 0;
      if (local_b30 != 0) {
        puVar36 = (uint *)(local_b58 + 0x10);
        if (local_b38 != (uint *)0x0) {
          puVar36 = local_b38;
        }
        uVar39 = *puVar36;
        iVar37 = 0;
        while (uVar39 == 0) {
          lVar27 = (longlong)iVar15;
          iVar37 = iVar37 + 0x20;
          iVar15 = iVar15 + 1;
          TStack_e58.CurrentBitIndex = local_b30;
          if ((int)((local_b30 - 1) + ((int)(local_b30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_142baacc5;
          uVar39 = (puVar36 + 1)[lVar27];
        }
        local_fd0 = CONCAT44(local_fd0._4_4_,-uVar39 & uVar39);
        uVar21 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_ee8 = (int)lVar27;
        TStack_e58.CurrentBitIndex = iVar37 + -1 + local_ee8;
        if ((int)local_b30 < TStack_e58.CurrentBitIndex) {
          TStack_e58.CurrentBitIndex = local_b30;
        }
      }
LAB_142baacc5:
      local_1038 = (longlong *)local_b58;
      uVar39 = local_b30 & 0xffffffe0;
      pTStack_1028 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b58 + 0x10);
      local_1010 = local_b58._8_4_ - local_b24;
      uStack_1020 = CONCAT44(TStack_e58.CurrentBitIndex,0xffffffff);
      local_1050 = -1 << ((byte)local_b30 & 0x1f);
      uStack_1030 = CONCAT44((int)local_fd0,iVar15);
      uStack_1018 = CONCAT44(local_bac,iVar37);
      iVar15 = (int)local_b30 >> 5;
      uStack_e38 = CONCAT44(uStack_100c,local_1010);
      TStack_e58.UnvisitedBitMask = 0xffffffff;
      TStack_e58._24_8_ = uStack_1018;
      local_e60 = local_1038;
      TStack_e58._padding_ = uStack_1030;
      TStack_e58.Array = pTStack_1028;
      if (((int)local_b30 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar34 != local_b30) {
        puVar36 = (uint *)(local_b58 + 0x10);
        if (local_b38 != (uint *)0x0) {
          puVar36 = local_b38;
        }
        uVar34 = local_1050 & puVar36[iVar15];
        while (uVar34 == 0) {
          lVar27 = (longlong)iVar15;
          uVar39 = uVar39 + 0x20;
          iVar15 = iVar15 + 1;
          uVar34 = local_b30;
          if ((int)((local_b30 - 1) + ((int)(local_b30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_142baadf2;
          uVar34 = (puVar36 + 1)[lVar27];
        }
        uVar21 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar34 = (uVar39 - 1) + (int)lVar27;
        if ((int)local_b30 < (int)uVar34) {
          uVar34 = local_b30;
        }
      }
LAB_142baadf2:
      while( true ) {
        plVar29 = local_e60;
        if ((int)local_e60[1] - *(int *)((longlong)local_e60 + 0x34) != (int)uStack_e38) {
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_104c);
        }
        if (((TStack_e58.CurrentBitIndex == uVar34) &&
            (TStack_e58.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b58 + 0x10))) &&
           (plVar29 == (longlong *)local_b58)) break;
        RemoveVerseFile(this,pFVar9->EventContext,
                        *(FName *)(*plVar29 + (longlong)TStack_e58.CurrentBitIndex * 0x10));
        TStack_e58.UnvisitedBitMask = TStack_e58.UnvisitedBitMask & ~TStack_e58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e58);
      }
      local_b10 = 0;
      if (local_b18 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b18);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b58);
      local_ac0 = 0;
      if (local_ac8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_ac8);
      }
      TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b08);
      if ((FName *)local_1060.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_1060.AllocatorInstance.Data);
      }
      if (local_520._12_4_ != -1) {
        local_4d8 = 0;
        if ((ForElementType<FSetElementId>)local_4e0 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4e0);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_520);
      }
      if (local_5b8._64_8_ != 0) {
        plVar29 = (longlong *)(local_5b8 + 0x50);
        if ((longlong *)local_5b8._104_8_ != (longlong *)0x0) {
          plVar29 = (longlong *)local_5b8._104_8_;
        }
        (**(code **)(*plVar29 + 0x10))();
      }
      if ((FScriptContainerElement *)local_5b8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_5b8._8_8_);
      }
      local_a68.HashSize = 0;
      if (local_a68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a68.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a68.Elements);
      local_a18.HashSize = 0;
      if (local_a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a18.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a18.Elements);
      if ((pFVar9->bForceRescan != false) && (FVar11.ID != 0)) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &local_ed8->GatheredResultsEvent,FVar11);
      }
      local_9c8.HashSize = 0;
      if (local_9c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_9c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_9c8.Elements);
      local_978.HashSize = 0;
      if (local_978.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_978.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_978.Elements);
    }
  }
  FMemScope::~FMemScope(&local_ed0);
  FLLMScope::~FLLMScope(local_1008);
  return;
LAB_142baa416:
  if ((pFVar10->PackageFiles).ArrayNum != iVar15) {
    local_1065 = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1065);
  }
  if (pFVar33 == pFVar40) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_828);
    goto LAB_142baa56d;
  }
  iVar32 = *(int *)(pFVar33 + 8) + -1;
  if (*(int *)(pFVar33 + 8) == 0) {
    iVar32 = 0;
  }
  if ((iVar37 == iVar32) &&
     ((((iVar37 == 0 || (iVar32 == 0)) ||
       (iVar16 = FGenericPlatformStricmp::Strnicmp
                           ((wchar_t *)local_fe8,*(wchar_t **)pFVar33,(longlong)iVar32), iVar16 == 0
       )) && (iVar37 == iVar32)))) goto LAB_142baa474;
  pFVar33 = pFVar33 + 0x10;
  goto LAB_142baa416;
}

// SearchAllAssets @ 142baba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SearchAllAssets
          (FAssetRegistryImpl *this,FEventContext *param_1,FClassInheritanceContext *param_2,
          bool param_3)

{
  FAssetDataGatherer *this_00;
  int iVar1;
  FEventContext *pFVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  LARGE_INTEGER local_1d0 [2];
  FEventContext *local_1c0;
  FClassInheritanceContext *local_1b8;
  LARGE_INTEGER local_1a8;
  undefined8 uStack_1a0;
  FString local_198;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  LARGE_INTEGER local_178;
  int iStack_170;
  undefined4 uStack_16c;
  LARGE_INTEGER local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TStringView<wchar_t> local_158;
  undefined1 local_148 [104];
  longlong *local_e0;
  bool local_d8;
  FAssetRegistryImpl *local_c8;
  FEventContext *local_c0;
  FClassInheritanceContext *local_b8;
  undefined1 local_b0 [80];
  double local_60;
  int local_58;
  undefined4 local_54;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  param_1->bScanStartedEventBroadcast = true;
  local_1c0 = param_1;
  local_1b8 = param_2;
  bVar4 = TryConstructGathererIfNeeded(this);
  if (bVar4) {
    if (this->bInitialSearchStarted == false) {
      FMiscTrace::OutputBeginRegion(L"Asset Registry Scan",(wchar_t *)0x0);
      QueryPerformanceCounter(local_1d0);
      dVar9 = (double)local_1d0[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
      this->bInitialSearchStarted = true;
      this->InitialSearchStartTime = dVar9 + __real_4170000000000000;
      this->bInitialSearchCompleted = (atomic<bool>)0x0;
      this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
    }
    this_00 = (this->GlobalGatherer).Ptr;
    bVar4 = FAssetDataGatherer::IsAsyncEnabled(this_00);
    if (!bVar4) {
      if ((2 < (byte)LogAssetRegistry._0_1_) && (!param_3)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      param_3 = true;
    }
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    FPackageName::QueryRootContentPaths(&local_1e0,false,false,false);
    iVar1 = local_1e0.ArrayNum;
    uVar5 = (ulonglong)local_1e0.ArrayNum;
    pFVar8 = local_1e0.AllocatorInstance.Data + uVar5 * 0x10;
    FVar7.Data = local_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e8);
      }
      pFVar2 = local_1c0;
      if (FVar7.Data == pFVar8) break;
      ::FString::FString(&local_198,L"");
      FPackageName::LongPackageNameToFilename
                ((FString *)&local_1d0[0].s,(FString *)FVar7.Data,&local_198);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      local_188 = *(wchar_t **)FVar7.Data;
      iStack_180 = *(int *)(FVar7.Data + 8) + -1;
      if (*(int *)(FVar7.Data + 8) == 0) {
        iStack_180 = 0;
      }
      local_178.s = local_1d0[0].s;
      local_158._12_4_ = uStack_17c;
      local_158.Size = iStack_180;
      iStack_170 = local_1d0[1]._0_4_ + -1;
      if (local_1d0[1]._0_4_ == 0) {
        iStack_170 = 0;
      }
      uStack_1a0 = CONCAT44(uStack_16c,iStack_170);
      local_1a8.s = local_1d0[0].s;
      local_158.DataPtr = local_188;
      FAssetDataGatherer::AddMountPoint(this_00,(TStringView<wchar_t> *)&local_1a8.s,&local_158);
      local_168.s = local_1d0[0].s;
      iStack_160 = local_1d0[1]._0_4_ + -1;
      if (local_1d0[1]._0_4_ == 0) {
        iStack_160 = 0;
      }
      uStack_1a0 = CONCAT44(uStack_15c,iStack_160);
      local_1a8.s = local_1d0[0].s;
      FAssetDataGatherer::SetIsOnAllowList(this_00,(TStringView<wchar_t> *)&local_1a8.s,true);
      if ((void *)local_1d0[0].QuadPart != (void *)0x0) {
        FMemory::Free((void *)local_1d0[0]);
      }
      uVar5 = local_1e0._8_8_ & 0xffffffff;
      FVar7.Data = FVar7.Data + 0x10;
    }
    this->bSearchAllAssets = true;
    if (param_3 == false) {
      FAssetDataGatherer::StartAsync(this_00);
    }
    else {
      FAssetDataGatherer::WaitForIdle(this_00,__real_bf800000);
      local_148[0] = false;
      local_148[1] = false;
      local_148._16_4_ = 0;
      local_148._20_4_ = 0;
      local_148._24_4_ = 0;
      local_148._28_4_ = 0;
      local_b0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_b0._48_8_ = _UNK_150631d98;
      local_60 = __real_bff0000000000000;
      local_148._8_8_ = (FScriptContainerElement *)0x0;
      local_148[0x20] = false;
      local_148._48_8_ = ___xmm_bff0000000000000bff0000000000000;
      local_148._56_8_ = _UNK_15076c718;
      local_148._64_8_ = 0;
      local_e0 = (longlong *)0x0;
      local_d8 = false;
      local_c0 = pFVar2;
      local_b8 = local_1b8;
      local_b0._0_8_ = (void *)0x0;
      local_b0._8_4_ = 0;
      local_b0._12_4_ = -1;
      local_b0._32_8_ = (void *)0x0;
      local_b0._64_8_ = (ForElementType<FSetElementId>)0x0;
      local_b0._72_4_ = 0;
      local_58 = 0;
      local_54._0_1_ = false;
      local_54._1_1_ = true;
      local_54._2_1_ = true;
      local_54._3_1_ = false;
      local_50 = false;
      local_c8 = this;
      TickGatherer(this,(FTickContext *)local_148);
      if (local_b0._12_4_ != -1) {
        local_b0._72_4_ = 0;
        if ((ForElementType<FSetElementId>)local_b0._64_8_ != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_b0._64_8_);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_b0,0,local_b0._8_4_);
        local_b0._8_4_ = 0;
        if (local_b0._12_4_ != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
        }
        uVar3 = local_b0._44_4_;
        local_b0._48_8_ = 0xffffffff;
        local_b0._40_8_ = (ulonglong)(uint)local_b0._44_4_ << 0x20;
        if (0x80 < (uint)uVar3) {
          local_b0._40_8_ = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
        }
        if ((void *)local_b0._32_8_ != (void *)0x0) {
          FMemory::Free((void *)local_b0._32_8_);
        }
        if ((void *)local_b0._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_b0._0_8_);
        }
      }
      if (local_148._64_8_ != 0) {
        plVar6 = (longlong *)(local_148 + 0x50);
        if (local_e0 != (longlong *)0x0) {
          plVar6 = local_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((FScriptContainerElement *)local_148._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._8_8_);
      }
    }
    DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
  }
  return;
}

// SearchAllAssetsInitialAsync @ 142bac390

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SearchAllAssetsInitialAsync
          (FAssetRegistryImpl *this,FEventContext *param_1,FClassInheritanceContext *param_2)

{
  EPerformanceMode EVar1;
  
  EVar1 = this->PerformanceMode;
  if (EVar1 != BulkLoading) {
    this->PerformanceMode = BulkLoading;
    if (((EVar1 == MostlyStatic) != (AssetRegistry::Impl::bDeferDependencySort == false)) ||
       ((EVar1 == MostlyStatic) != (AssetRegistry::Impl::bDeferReferencerSort == false))) {
      FAssetRegistryState::SetDependencyNodeSorting
                (&this->State,AssetRegistry::Impl::bDeferDependencySort == false,
                 AssetRegistry::Impl::bDeferReferencerSort == false);
    }
  }
  SearchAllAssets(this,param_1,param_2,false);
  return;
}

// Serialize @ 142bac5e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::Serialize
          (FAssetRegistryImpl *this,FArchive *param_1,FEventContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAssetRegistryLoadOptions local_res10 [2];
  FAssetRegistryImpl *local_res20;
  code *local_28;
  FAssetRegistryImpl **local_20;
  
  if ((param_1->field_0x2b & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsObjectReferenceCollector()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x1912,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    local_res10[0].bLoadDependencies = true;
    local_res10[0].bLoadPackageData = true;
    local_res10[0]._2_2_ = 0;
    local_res10[0].ParallelWorkers = 0;
    FAssetRegistryState::Load(&this->State,param_1,local_res10,(Type *)0x0);
    CachePathsFromState(this,param_2,&this->State);
    local_20 = &local_res20;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>,void,FName>
               ::Call;
    local_res20 = this;
    FAssetRegistryState::EnumerateAllPaths
              (&this->State,(TFunctionRef<void___cdecl(FName)> *)&local_28);
    return;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    FAssetRegistryState::Save(&this->State,param_1,&this->SerializationOptions);
  }
  return;
}

// SetManageReferences @ 142baca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences
          (FAssetRegistryImpl *this,FSetManageReferencesContext *param_1)

{
  TPimplPtr<UE::AssetRegistry::FSetManageReferencesScratch,0> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar4;
  FAssetIdentifier *this_00;
  EDependencyCategory EVar5;
  EPerformanceMode EVar6;
  FSetManageReferencesScratch *pFVar7;
  FDependsNode *pFVar8;
  FSetManageReferencesNodeData *pFVar9;
  TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
  *pTVar10;
  FName FVar11;
  code *pcVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 uVar14;
  longlong lVar15;
  FAssetRegistryImpl *pFVar16;
  FSetManageReferencesContext *pFVar17;
  TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
  *pTVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>
  *pTVar24;
  FSetManageReferencesNodeData *pFVar25;
  void *pvVar26;
  uint uVar27;
  FStaticBasicLogRecord *pFVar28;
  undefined8 *puVar29;
  undefined ***pppuVar30;
  FName *this_01;
  FScriptContainerElement *pFVar31;
  code **ppcVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  ForAnyElementType FVar35;
  uint uVar36;
  bool bVar37;
  ForAnyElementType FVar38;
  ulonglong uVar39;
  undefined1 auStackY_7c8 [32];
  FIdentityFunctor local_778 [8];
  ForAnyElementType local_770;
  undefined8 local_768;
  ForAnyElementType local_760;
  undefined8 local_758;
  undefined1 local_750;
  undefined1 local_74f;
  undefined1 local_74e [6];
  FDependsNode *local_748;
  ForAnyElementType local_740;
  undefined8 local_738;
  undefined1 local_730 [8];
  FDependsNode *local_728;
  FSetManageReferencesScratch *local_720;
  FDependsNode *local_718;
  ForAnyElementType local_710;
  undefined8 local_708;
  undefined1 local_700 [12];
  uint uStack_6f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6f0;
  undefined8 uStack_6e8;
  longlong lStack_6e0;
  int local_6d8;
  undefined4 uStack_6d4;
  FDependsNode *local_6d0;
  FDependsNode *local_6c8;
  uint local_6c0;
  FAssetRegistryImpl *local_6b8;
  undefined8 local_6b0;
  FSetManageReferencesContext *local_6a8;
  FScriptContainerElement *local_6a0;
  FDependsNode *local_698;
  TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
  *local_690;
  longlong lStack_688;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_680;
  undefined8 uStack_678;
  longlong lStack_670;
  int local_668;
  undefined4 uStack_664;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_640;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_620;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_600;
  FDependsNode *local_5e0;
  FDependsNode *local_5d8;
  FDependsNode *local_5d0;
  FDependsNode *local_5c8;
  FSetManageReferencesNodeData *local_5c0;
  FDependsNode *local_5b8;
  FString local_5b0;
  FName local_5a0;
  FName local_598;
  FScriptContainerElement *local_590;
  undefined1 local_588 [12];
  uint uStack_57c;
  TBitArray<FDefaultBitArrayAllocator> *local_578;
  undefined8 uStack_570;
  longlong local_568;
  int iStack_560;
  undefined4 uStack_55c;
  undefined1 local_558 [12];
  uint uStack_54c;
  TBitArray<FDefaultBitArrayAllocator> *local_548;
  undefined8 uStack_540;
  longlong local_538;
  int iStack_530;
  undefined4 uStack_52c;
  TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
  *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 uStack_500;
  FDependsNode **local_4f8;
  FDependsNode *pFStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  FDependsNode *local_4e0;
  FSetManageReferencesContext *local_4d8;
  ForAnyElementType *local_4d0;
  ForAnyElementType *local_4c8;
  FSetManageReferencesScratch **local_4c0;
  undefined1 local_4b8 [24];
  longlong lStack_4a0;
  longlong lStack_498;
  int local_490;
  undefined4 uStack_48c;
  FDependsNode *local_488;
  undefined8 uStack_480;
  FString local_478;
  FString local_468;
  longlong local_458;
  TRangedForIterator local_450;
  TRangedForIterator local_420;
  TRangedForIterator local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_380;
  undefined1 local_358 [32];
  undefined8 local_338;
  int local_330;
  undefined4 local_32c;
  undefined4 local_328;
  int local_324;
  void *local_318;
  undefined4 local_310;
  FDependencyQuery local_308;
  FDependencyQuery local_2e8;
  code *local_2c8 [2];
  code *local_2b8 [3];
  code **local_2a0;
  code *local_298 [2];
  undefined **local_288;
  undefined1 *local_280;
  undefined ***local_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  local_6b8 = this;
  local_6a8 = param_1;
  if (param_1->ManagerMap ==
      (TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
       *)0x0) {
    if ((byte)LogAssetRegistry._0_1_ < 2) goto LAB_142baca6e;
    pFVar28 = &::LOG_Static;
  }
  else {
    if (*(longlong *)&(param_1->ShouldSetManager).field0_0x0 != 0) {
      pTVar1 = &param_1->Scratch;
      puVar29 = (undefined8 *)0x0;
      local_770.Data = (FScriptContainerElement *)0x0;
      local_768 = 0;
      if (pTVar1->Ptr == (FSetManageReferencesScratch *)0x0) {
        puVar22 = ::operator_new(0x60);
        if (puVar22 != (undefined8 *)0x0) {
          puVar22[1] = 0;
          *puVar22 = Core::Private::PimplPtr::
                     DeleterFunc<UE::AssetRegistry::FSetManageReferencesScratch>;
          puVar22[4] = 0;
          puVar22[5] = 0;
          puVar22[9] = 0;
          puVar22[0xb] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          puVar22[6] = 0;
          *(undefined4 *)(puVar22 + 7) = 0;
          *(undefined4 *)((longlong)puVar22 + 0x3c) = 0x80;
          *(undefined4 *)(puVar22 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)puVar22 + 0x44) = 0;
          puVar22[10] = 0;
          puVar29 = puVar22;
        }
        if ((TPimplPtr<UE::AssetRegistry::FSetManageReferencesScratch,0> *)&local_458 == pTVar1) {
          if ((FSetManageReferencesScratch *)(puVar29 + 2) != (FSetManageReferencesScratch *)0x0)
          goto LAB_142bacb22;
        }
        else {
          pFVar7 = pTVar1->Ptr;
          pTVar1->Ptr = (FSetManageReferencesScratch *)(puVar29 + 2);
          if (pFVar7 != (FSetManageReferencesScratch *)0x0) {
            puVar29 = (undefined8 *)&pFVar7[-1].NodeData.field_0x40;
LAB_142bacb22:
            (*(code *)*puVar29)();
          }
        }
        TSet<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>,FDefaultSetAllocator>
                   *)pTVar1->Ptr,
                  *(int *)&(this->State).CachedDependsNodes.field_0x8 -
                  *(int *)&(this->State).CachedDependsNodes.field_0x34);
      }
      pFVar7 = pTVar1->Ptr;
      local_720 = pFVar7;
      if (param_1->bClearExisting != false) {
        local_600._padding_._0_4_ = 0;
        puVar2 = &(pFVar7->NodeData).field_0x10;
        local_600._padding_._4_4_ = 1;
        local_600.UnvisitedBitMask = 0xffffffff;
        local_600.CurrentBitIndex = 0;
        local_600.BaseBitIndex = 0;
        local_600.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if (*(int *)&(pFVar7->NodeData).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_600);
        }
        unique0x1000155b =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_600._padding_._4_4_,(undefined4)local_600._padding_);
        uStack_6e8 = CONCAT44(local_600.CurrentBitIndex,local_600.UnvisitedBitMask);
        lStack_6e0 = CONCAT44(local_600._28_4_,local_600.BaseBitIndex);
        iStack_560 = *(int *)&(pFVar7->NodeData).field_0x8 - *(int *)&(pFVar7->NodeData).field_0x34;
        pTStack_6f0 = local_600.Array;
        local_6d8 = iStack_560;
        local_578 = local_600.Array;
        uStack_55c = uStack_6d4;
        local_700._0_8_ = pFVar7;
        local_588._0_8_ = pFVar7;
        unique0x10002a8f = (longlong)unique0x1000155b;
        uStack_570 = uStack_6e8;
        local_568 = lStack_6e0;
        pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_3c0,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                             *(int *)&(pFVar7->NodeData).field_0x28);
        unique0x10000feb = (TBitArray<FDefaultBitArrayAllocator> *)pTVar23->_padding_;
        pTStack_6f0 = pTVar23->Array;
        uStack_6e8._0_4_ = pTVar23->UnvisitedBitMask;
        uStack_6e8._4_4_ = pTVar23->CurrentBitIndex;
        lStack_6e0 = *(longlong *)&pTVar23->BaseBitIndex;
        local_450.InitialNum =
             *(int *)&(pFVar7->NodeData).field_0x8 - *(int *)&(pFVar7->NodeData).field_0x34;
        local_6d8 = local_450.InitialNum;
        local_450._44_4_ = uStack_6d4;
        local_700._0_8_ = pFVar7;
        local_450._padding_ = (longlong)pFVar7;
        local_450._padding_ = (longlong)unique0x10000feb;
        local_450._padding_ = (longlong)pTStack_6f0;
        local_450._padding_ = uStack_6e8;
        local_450._padding_ = lStack_6e0;
        bVar19 = TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_588,&local_450);
        if (bVar19) {
          do {
            **(undefined4 **)
              (*(longlong *)
                (TMap<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                 *)local_588._0_8_ + 8 + (longlong)uStack_570._4_4_ * 0x18) = 0;
            uStack_570 = CONCAT44(uStack_570._4_4_,(uint)uStack_570 & ~uStack_57c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_588 + 8));
            bVar19 = TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_588,&local_450);
          } while (bVar19);
        }
        local_358._0_8_ = 0;
        puVar2 = &(this->State).CachedDependsNodes.field_0x10;
        local_358._8_8_ = 0;
        pTVar4 = &(this->State).CachedDependsNodes;
        local_338 = 0;
        local_330 = 0;
        local_32c = 0x80;
        local_328 = 0xffffffff;
        local_324 = 0;
        local_318 = (void *)0x0;
        local_310 = 0;
        local_620._padding_._0_4_ = 0;
        local_620._padding_._4_4_ = 1;
        local_620.UnvisitedBitMask = 0xffffffff;
        local_620.CurrentBitIndex = 0;
        local_620.BaseBitIndex = 0;
        local_620.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if (*(int *)&(this->State).CachedDependsNodes.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_620);
        }
        unique0x1000153b =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_620._padding_._4_4_,(undefined4)local_620._padding_);
        uStack_6e8 = CONCAT44(local_620.CurrentBitIndex,local_620.UnvisitedBitMask);
        lStack_6e0 = CONCAT44(local_620._28_4_,local_620.BaseBitIndex);
        iStack_530 = *(int *)&(this->State).CachedDependsNodes.field_0x8 -
                     *(int *)&(this->State).CachedDependsNodes.field_0x34;
        pTStack_6f0 = local_620.Array;
        local_6d8 = iStack_530;
        local_548 = local_620.Array;
        uStack_52c = uStack_6d4;
        local_700._0_8_ = pTVar4;
        local_558._0_8_ = pTVar4;
        unique0x10002aaf = (longlong)unique0x1000153b;
        uStack_540 = uStack_6e8;
        local_538 = lStack_6e0;
        pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_3a0,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                             *(int *)&(this->State).CachedDependsNodes.field_0x28);
        unique0x1000112b = (TBitArray<FDefaultBitArrayAllocator> *)pTVar23->_padding_;
        pTStack_6f0 = pTVar23->Array;
        uStack_6e8._0_4_ = pTVar23->UnvisitedBitMask;
        uStack_6e8._4_4_ = pTVar23->CurrentBitIndex;
        lStack_6e0 = *(longlong *)&pTVar23->BaseBitIndex;
        local_420.InitialNum =
             *(int *)&(this->State).CachedDependsNodes.field_0x8 -
             *(int *)&(this->State).CachedDependsNodes.field_0x34;
        local_6d8 = local_420.InitialNum;
        local_420._44_4_ = uStack_6d4;
        local_700._0_8_ = pTVar4;
        local_420._padding_ = (longlong)pTVar4;
        local_420._padding_ = (longlong)unique0x1000112b;
        local_420._padding_ = (longlong)pTStack_6f0;
        local_420._padding_ = uStack_6e8;
        local_420._padding_ = lStack_6e0;
        bVar19 = TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_558,&local_420);
        if (bVar19) {
          do {
            local_308.RequiredUnions.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
            local_308.RequiredUnions.ArrayNum = 0;
            local_308.RequiredUnions.ArrayMax = 1;
            local_308.Required = None;
            local_308.Excluded = None;
            local_270 = (undefined ***)0x0;
            local_288 = &Core::Private::Function::
                         TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`58'::<lambda_2>,1,0>
                         ::_vftable_;
            local_298[0] = Core::Private::Function::
                           TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l58::<lambda_2>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                           ::Call;
            local_280 = local_358;
            pFVar8 = *(FDependsNode **)
                      (*(longlong *)local_558._0_8_ + 0x20 + (longlong)uStack_540._4_4_ * 0x30);
            FDependsNode::IterateOverDependencies
                      (pFVar8,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                               *)local_298,Manage,&local_308);
            if (local_298[0] != (code *)0x0) {
              pppuVar30 = &local_288;
              if (local_270 != (undefined ***)0x0) {
                pppuVar30 = local_270;
              }
              (*(code *)(*pppuVar30)[2])();
            }
            if (local_308.RequiredUnions.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
              FMemory::Free((void *)local_308.RequiredUnions.AllocatorInstance.SecondaryData);
            }
            FDependsNode::ClearDependencies(pFVar8,Manage);
            uStack_540 = CONCAT44(uStack_540._4_4_,(uint)uStack_540 & ~uStack_54c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_558 + 8));
            bVar19 = TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_558,&local_420);
          } while (bVar19);
        }
        local_660.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10);
        local_660._padding_._0_4_ = 0;
        local_660._padding_._4_4_ = 1;
        local_660.UnvisitedBitMask = 0xffffffff;
        local_660.CurrentBitIndex = 0;
        local_660.BaseBitIndex = 0;
        if (local_330 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_660);
        }
        unique0x100014fb =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_660._padding_._4_4_,(undefined4)local_660._padding_);
        local_700._0_8_ = local_358;
        uStack_6e8 = CONCAT44(local_660.CurrentBitIndex,local_660.UnvisitedBitMask);
        lStack_6e0 = CONCAT44(local_660._28_4_,local_660.BaseBitIndex);
        local_490 = local_358._8_4_ - local_324;
        local_4b8._16_8_ = local_660.Array;
        uStack_6d4 = uStack_48c;
        local_6d8 = local_490;
        pTStack_6f0 = local_660.Array;
        local_4b8._0_8_ = local_700._0_8_;
        local_4b8._8_8_ = unique0x100014fb;
        lStack_4a0 = uStack_6e8;
        lStack_498 = lStack_6e0;
        pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_4b8,
                             (TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10),local_330);
        local_690 = (TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
                     *)local_358;
        lStack_688 = pTVar23->_padding_;
        pTStack_680 = pTVar23->Array;
        uStack_678._0_4_ = pTVar23->UnvisitedBitMask;
        uStack_678._4_4_ = pTVar23->CurrentBitIndex;
        lStack_670 = *(longlong *)&pTVar23->BaseBitIndex;
        local_668 = local_358._8_4_ - local_324;
        local_3f0._44_4_ = uStack_664;
        local_3f0.InitialNum = local_668;
        local_3f0._padding_ = (longlong)local_690;
        local_3f0._padding_ = lStack_688;
        local_3f0._padding_ = (longlong)pTStack_680;
        local_3f0._padding_ = uStack_678;
        local_3f0._padding_ = lStack_670;
        bVar19 = TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_700,&local_3f0);
        if (bVar19) {
          do {
            local_718 = *(FDependsNode **)
                         (*(longlong *)local_700._0_8_ + (longlong)uStack_6e8._4_4_ * 0x10);
            FDependsNode::SetIsReferencersSorted(local_718,false);
            FDependsNode::RefreshReferencers(local_718);
            if (((local_770.Data <= (FScriptContainerElement *)&local_718) &&
                ((FScriptContainerElement *)&local_718 <
                 local_770.Data + (longlong)local_768._4_4_ * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = (int)local_768;
            if ((int)local_768 == local_768._4_4_) {
              iVar20 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_770,(int *)((longlong)&local_768 + 4));
            }
            local_768 = CONCAT44(local_768._4_4_,iVar20 + 1);
            *(FDependsNode **)(local_770.Data + (longlong)iVar20 * 8) = local_718;
            local_5e0 = local_718;
            uVar27 = ((uint)((ulonglong)local_718 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_718 >> 4)) * -0x7a143595;
            uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
            pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                      ::FindOrAddImpl<FDependsNode_*_const_&>
                                ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                                  *)local_720,uVar27 >> 0x10 ^ uVar27,&local_5e0);
            if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
              pFVar25 = ::operator_new(0x40);
              if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
                pFVar25->ManagedInEarlierRound = None;
                pFVar25->bModifiedByRound = false;
                *(undefined3 *)&pFVar25->field_0x5 = 0;
                pFVar25->ManagedInThisRound = None;
                pFVar25->bDirectManagedInThisRound = false;
                *(undefined3 *)&pFVar25->field_0xd = 0;
                (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
                (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
                pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
                pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
                pFVar25->bModifiedByCurrentManager = false;
                *(undefined3 *)&pFVar25->field_0x31 = 0;
                pFVar25->VisitedByCurrentManager = None;
                *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
              }
              pFVar9 = pTVar24->Ptr;
              if ((pFVar9 != pFVar25) &&
                 (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
                pFVar31 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
                if (pFVar31 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar31);
                }
                ::operator_delete(pFVar9,0x40);
              }
            }
            pTVar24->Ptr->bModifiedByRound = true;
            uStack_6e8 = CONCAT44(uStack_6e8._4_4_,(uint)uStack_6e8 & ~uStack_6f4);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_700 + 8));
            bVar19 = TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_700,&local_3f0);
          } while (bVar19);
        }
        local_310 = 0;
        if (local_318 != (void *)0x0) {
          FMemory::Free(local_318);
        }
        TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_358);
      }
      local_760.Data = (FScriptContainerElement *)0x0;
      local_758 = 0;
      local_710.Data = (FScriptContainerElement *)0x0;
      local_708 = 0;
      local_740.Data = (FScriptContainerElement *)0x0;
      local_738 = 0;
      uVar27 = *(int *)&param_1->ManagerMap->field_0x8 - *(int *)&param_1->ManagerMap->field_0x34;
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      if (0 < (int)uVar27) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar27,&local_760,0,(int *)((longlong)&local_758 + 4));
      }
      pTVar10 = param_1->ManagerMap;
      local_640._padding_._0_4_ = 0;
      local_640._padding_._4_4_ = 1;
      local_640.UnvisitedBitMask = 0xffffffff;
      puVar2 = &pTVar10->field_0x10;
      local_640.CurrentBitIndex = 0;
      local_640.BaseBitIndex = 0;
      local_640.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (*(int *)&pTVar10->field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_640);
      }
      lStack_688 = CONCAT44(local_640._padding_._4_4_,(undefined4)local_640._padding_);
      uStack_678._4_4_ = local_640.CurrentBitIndex;
      uStack_678._0_4_ = local_640.UnvisitedBitMask;
      lStack_670._4_4_ = local_640._28_4_;
      lStack_670._0_4_ = local_640.BaseBitIndex;
      local_668 = *(int *)&pTVar10->field_0x8 - *(int *)&pTVar10->field_0x34;
      pTStack_680 = local_640.Array;
      uStack_500 = CONCAT44(uStack_664,local_668);
      TStack_520.Array = local_640.Array;
      local_690 = pTVar10;
      local_528 = pTVar10;
      TStack_520._padding_ = lStack_688;
      TStack_520._16_8_ = uStack_678;
      TStack_520._24_8_ = lStack_670;
      pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_380,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                           *(int *)&pTVar10->field_0x28);
      lStack_688 = pTVar23->_padding_;
      pTVar13 = pTVar23->Array;
      uVar14._0_4_ = pTVar23->UnvisitedBitMask;
      uVar14._4_4_ = pTVar23->CurrentBitIndex;
      lStack_670 = *(longlong *)&pTVar23->BaseBitIndex;
      pTStack_680 = pTVar13;
      uStack_678 = uVar14;
      while( true ) {
        pTVar18 = local_528;
        if (*(int *)&local_528->field_0x8 - *(int *)&local_528->field_0x34 != (int)uStack_500) {
          local_750 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FAssetIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_750);
        }
        if (((TStack_520.CurrentBitIndex == uVar14._4_4_) && (TStack_520.Array == pTVar13)) &&
           (pTVar18 == pTVar10)) break;
        this_00 = (FAssetIdentifier *)
                  (*(longlong *)pTVar18 + (longlong)TStack_520.CurrentBitIndex * 0x48);
        local_6c8 = FAssetRegistryState::FindDependsNode(&this->State,this_00 + 1);
        if (local_6c8 == (FDependsNode *)0x0) {
          if (2 < (byte)LogAssetRegistry._0_1_) {
            FVar11 = this_00[1].PrimaryAssetType.Name;
            local_268.Base = local_248;
            local_268.CurPos = local_248;
            local_268.End = (wchar_t *)local_48;
            local_268.bIsDynamic = false;
            local_268.bIsExternal = false;
            if (FVar11 == (FName)0x0) {
              ::FName::AppendString(&this_00[1].PackageName,&local_268);
              if (this_00[1].ObjectName != (FName)0x0) {
                if (local_268.End < local_268.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_268,1);
                }
                pvVar26 = FGenericPlatformString::Memcpy(local_268.CurPos,L".",2);
                this_01 = &this_00[1].ObjectName;
                goto LAB_142bad461;
              }
            }
            else {
              local_598 = this_00[1].ObjectName;
              local_6b0 = 0;
              local_5a0 = FVar11;
              if ((FVar11 != (FName)0x0) && (local_598 != (FName)0x0)) {
                ::FName::AppendString(&local_5a0,&local_268);
                if (local_268.End < local_268.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_268,1);
                }
                pvVar26 = FGenericPlatformString::Memcpy(local_268.CurPos,L":",2);
                this_01 = &local_598;
LAB_142bad461:
                local_268.CurPos = (wchar_t *)((longlong)pvVar26 + 2);
                ::FName::AppendString(this_01,&local_268);
              }
            }
            if (this_00[1].ValueName != (FName)0x0) {
              if (local_268.End < local_268.CurPos + 2) {
                TStringBuilderBase<wchar_t>::Extend(&local_268,2);
              }
              pvVar26 = FGenericPlatformString::Memcpy(local_268.CurPos,L"::",4);
              local_268.CurPos = (wchar_t *)((longlong)pvVar26 + 4);
              ::FName::AppendString(&this_00[1].ValueName,&local_268);
            }
            ::FString::ConstructFromPtrSize
                      (&local_5b0,local_268.Base,
                       (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
            FAssetIdentifier::ToString(this_00 + 1,&local_468);
            FAssetIdentifier::ToString(this_00,&local_478);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.Data.AllocatorInstance.Data);
            }
            if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_468.Data.AllocatorInstance.Data);
            }
            if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          local_6d0 = FAssetRegistryState::CreateOrFindDependsNode(&this->State,this_00,(bool *)0x0)
          ;
          if (((local_760.Data <= (FScriptContainerElement *)&local_6d0) &&
              ((FScriptContainerElement *)&local_6d0 <
               local_760.Data + (longlong)local_758._4_4_ * 8)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = (uint)local_758;
          if ((uint)local_758 == local_758._4_4_) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_760,(int *)((longlong)&local_758 + 4));
          }
          local_758 = CONCAT44(local_758._4_4_,iVar20 + 1);
          *(FDependsNode **)(local_760.Data + (longlong)iVar20 * 8) = local_6d0;
          local_5d8 = local_6c8;
          uVar27 = ((uint)((ulonglong)local_6c8 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_6c8 >> 4)) * -0x7a143595;
          uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
          pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                    ::FindOrAddImpl<FDependsNode_*_const_&>
                              ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                                *)local_720,uVar27 >> 0x10 ^ uVar27,&local_5d8);
          if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
            pFVar25 = ::operator_new(0x40);
            if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
              pFVar25->ManagedInEarlierRound = None;
              pFVar25->bModifiedByRound = false;
              *(undefined3 *)&pFVar25->field_0x5 = 0;
              pFVar25->ManagedInThisRound = None;
              pFVar25->bDirectManagedInThisRound = false;
              *(undefined3 *)&pFVar25->field_0xd = 0;
              (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
              pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
              pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
              pFVar25->bModifiedByCurrentManager = false;
              *(undefined3 *)&pFVar25->field_0x31 = 0;
              pFVar25->VisitedByCurrentManager = None;
              *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
            }
            pFVar9 = pTVar24->Ptr;
            if ((pFVar9 != pFVar25) &&
               (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
              pFVar31 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
              if (pFVar31 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar31);
              }
              ::operator_delete(pFVar9,0x40);
            }
          }
          pTVar24->Ptr->bDirectManagedInThisRound = true;
          local_5d0 = local_6d0;
          uVar27 = ((uint)((ulonglong)local_6d0 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_6d0 >> 4)) * -0x7a143595;
          uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
          pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                    ::FindOrAddImpl<FDependsNode_*_const_&>
                              ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                                *)local_720,uVar27 >> 0x10 ^ uVar27,&local_5d0);
          if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
            pFVar25 = ::operator_new(0x40);
            if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
              pFVar25->ManagedInEarlierRound = None;
              pFVar25->bModifiedByRound = false;
              *(undefined3 *)&pFVar25->field_0x5 = 0;
              pFVar25->ManagedInThisRound = None;
              pFVar25->bDirectManagedInThisRound = false;
              *(undefined3 *)&pFVar25->field_0xd = 0;
              (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
              pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
              pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
              pFVar25->bModifiedByCurrentManager = false;
              *(undefined3 *)&pFVar25->field_0x31 = 0;
              pFVar25->VisitedByCurrentManager = None;
              *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
            }
            pFVar9 = pTVar24->Ptr;
            if ((pFVar9 != pFVar25) &&
               (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
              pFVar31 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
              if (pFVar31 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar31);
              }
              ::operator_delete(pFVar9,0x40);
            }
          }
          pFVar25 = pTVar24->Ptr;
          pFVar31 = (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data;
          if (((pFVar31 <= (FScriptContainerElement *)&local_6c8) &&
              ((FScriptContainerElement *)&local_6c8 <
               pFVar31 + (longlong)(pFVar25->DirectManagedAssetsThisRound).ArrayMax * 8)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = (pFVar25->DirectManagedAssetsThisRound).ArrayNum;
          piVar3 = &(pFVar25->DirectManagedAssetsThisRound).ArrayMax;
          if (iVar20 == *piVar3) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(pFVar25->DirectManagedAssetsThisRound).AllocatorInstance,
                                piVar3);
          }
          (pFVar25->DirectManagedAssetsThisRound).ArrayNum = iVar20 + 1;
          *(FDependsNode **)
           ((pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data + (longlong)iVar20 * 8) =
               local_6c8;
        }
        TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
      }
      AlgoImpl::IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
                ((FDependsNode **)local_760.Data,(uint)local_758,local_778[0],
                 (TLess<void>)local_778[0]);
      uVar33 = (ulonglong)(int)(uint)local_758;
      uVar27 = (uint)local_758;
      if (1 < (int)(uint)local_758) {
        pFVar31 = local_760.Data + 8;
        FVar38.Data = local_760.Data;
        if (pFVar31 != local_760.Data + uVar33 * 8) {
          do {
            if ((*(FDependsNode **)FVar38.Data != *(FDependsNode **)pFVar31) &&
               (FVar38.Data = FVar38.Data + 8, FVar38.Data != pFVar31)) {
              *(FDependsNode **)FVar38.Data = *(FDependsNode **)pFVar31;
            }
            pFVar31 = pFVar31 + 8;
          } while (pFVar31 != local_760.Data + uVar33 * 8);
          uVar33 = local_758 & 0xffffffff;
        }
        uVar27 = (uint)((longlong)(FVar38.Data + (8 - (longlong)local_760.Data)) >> 3);
      }
      iVar20 = (int)uVar33;
      if (iVar20 < (int)uVar27) {
        iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar27 - iVar20,&local_760,(int *)&local_758,
                            (int *)((longlong)&local_758 + 4));
        memset(local_760.Data + (longlong)iVar21 * 8,0,(longlong)(int)(uVar27 - iVar20) << 3);
LAB_142bad9c1:
        uVar33 = local_758 & 0xffffffff;
      }
      else {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
        }
        if ((int)uVar27 < iVar20) {
          uVar36 = iVar20 - uVar27;
          if ((int)(uVar27 | uVar36) < 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar33 = local_758 & 0xffffffff;
          }
          if (uVar36 != 0) {
            iVar21 = ((int)uVar33 - uVar27) - uVar36;
            iVar20 = (int)uVar33;
            if (iVar21 != 0) {
              memmove(local_760.Data + (longlong)(int)uVar27 * 8,
                      local_760.Data + (longlong)(int)uVar27 * 8 + (longlong)(int)uVar36 * 8,
                      (longlong)iVar21 << 3);
              iVar20 = (uint)local_758;
            }
            local_758 = CONCAT44(local_758._4_4_,iVar20 - uVar36);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&local_760,iVar20 - uVar36,(int *)((longlong)&local_758 + 4));
            goto LAB_142bad9c1;
          }
        }
      }
      local_6c0 = (uint)uVar33;
      uVar39 = (ulonglong)(int)local_6c0;
      local_590 = local_760.Data + uVar39 * 8;
      FVar38.Data = local_760.Data;
      while( true ) {
        pFVar31 = local_590;
        local_6a0 = FVar38.Data;
        if ((int)uVar33 != (int)uVar39) {
          local_74f = 0;
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_74f);
        }
        if (FVar38.Data == pFVar31) break;
        local_748 = *(FDependsNode **)FVar38.Data;
        uVar27 = ((uint)((ulonglong)local_748 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_748 >> 4))
                 * -0x7a143595;
        uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
        local_5c8 = local_748;
        pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                  ::FindOrAddImpl<FDependsNode_*_const_&>
                            ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                              *)local_720,uVar27 >> 0x10 ^ uVar27,&local_5c8);
        if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
          pFVar25 = ::operator_new(0x40);
          if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
            pFVar25->ManagedInEarlierRound = None;
            pFVar25->bModifiedByRound = false;
            *(undefined3 *)&pFVar25->field_0x5 = 0;
            pFVar25->ManagedInThisRound = None;
            pFVar25->bDirectManagedInThisRound = false;
            *(undefined3 *)&pFVar25->field_0xd = 0;
            (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
            (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
            pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
            pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
            pFVar25->bModifiedByCurrentManager = false;
            *(undefined3 *)&pFVar25->field_0x31 = 0;
            pFVar25->VisitedByCurrentManager = None;
            *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
          }
          pFVar9 = pTVar24->Ptr;
          if ((pFVar9 != pFVar25) &&
             (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
            pFVar31 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
            ::operator_delete(pFVar9,0x40);
          }
        }
        pFVar25 = pTVar24->Ptr;
        local_5c0 = pFVar25;
        if (((int)local_708 != 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentManagerModifiedNodes.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2788,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (((int)local_738 != 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentManagerVisitQueue.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2789,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar17 = local_6a8;
        local_4e0 = local_748;
        local_4d0 = &local_710;
        local_4c8 = &local_740;
        local_4c0 = &local_720;
        local_4d8 = local_6a8;
        pFVar34 = (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data;
        iVar20 = (pFVar25->DirectManagedAssetsThisRound).ArrayNum;
        pFVar31 = pFVar34 + (longlong)iVar20 * 8;
        while( true ) {
          if ((pFVar25->DirectManagedAssetsThisRound).ArrayNum != iVar20) {
            local_74e[0] = 0;
            `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_74e);
          }
          if (pFVar34 == pFVar31) break;
          `UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l91::<lambda_3>::
          operator()(&local_4e0,local_748,*(FDependsNode **)pFVar34,Manage,Build|Game,All);
          pFVar34 = pFVar34 + 8;
        }
        if ((pFVar17->RecurseType != None) && ((int)local_738 != 0)) {
          bVar19 = (int)local_738 == 0;
          do {
            iVar20 = (int)local_738;
            if (bVar19 || (int)local_738 < 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar19) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar20 = (int)local_738;
            }
            pFVar31 = local_740.Data + (longlong)(iVar20 + -1) * 0x10;
            local_488 = *(FDependsNode **)pFVar31;
            uStack_480 = *(undefined8 *)(pFVar31 + 8);
            iVar21 = (iVar20 - (iVar20 + -1)) + -1;
            if (iVar21 != 0) {
              memmove(pFVar31,pFVar31 + 0x10,(longlong)iVar21 << 4);
              iVar20 = (int)local_738;
            }
            local_738 = CONCAT44(local_738._4_4_,iVar20 + -1);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&local_740,iVar20 + -1,(int *)((longlong)&local_738 + 4));
            pFVar8 = local_488;
            local_4e8 = (undefined4)uStack_480;
            EVar5 = pFVar17->RecurseType;
            local_4f8 = &local_4e0;
            local_2e8.RequiredUnions.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
            local_2e8.RequiredUnions.ArrayNum = 0;
            local_2e8.RequiredUnions.ArrayMax = 1;
            local_2e8.Required = None;
            local_2e8.Excluded = None;
            pFStack_4f0 = local_488;
            local_2c8[0] = (code *)0x0;
            local_2a0 = (code **)0x0;
            local_2a0 = FMemory::Malloc(0x20,8);
            *local_2a0 = (code *)&Core::Private::Function::
                                  TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`114'::<lambda_4>,1,1>
                                  ::_vftable_;
            local_2a0[1] = (code *)local_4f8;
            local_2a0[2] = (code *)pFStack_4f0;
            local_2a0[3] = (code *)CONCAT44(uStack_4e4,local_4e8);
            if (local_2a0 + 1 != (code **)0x0) {
              local_2c8[0] = Core::Private::Function::
                             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l114::<lambda_4>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                             ::Call;
            }
            FDependsNode::IterateOverDependencies
                      (pFVar8,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                               *)local_2c8,EVar5,&local_2e8);
            if (local_2c8[0] != (code *)0x0) {
              ppcVar32 = local_2c8 + 2;
              if (local_2a0 != (code **)0x0) {
                ppcVar32 = local_2a0;
              }
              (**(code **)(*ppcVar32 + 0x10))();
            }
            if (local_2e8.RequiredUnions.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
              FMemory::Free((void *)local_2e8.RequiredUnions.AllocatorInstance.SecondaryData);
            }
            bVar19 = (int)local_738 == 0;
          } while (!bVar19);
          uVar39 = (ulonglong)local_6c0;
          FVar38.Data = local_6a0;
          pFVar25 = local_5c0;
        }
        FDependsNode::SetIsDependencyListSorted(local_748,Manage,false);
        pFVar25->bModifiedByRound = true;
        if (((local_770.Data <= (FScriptContainerElement *)&local_748) &&
            ((FScriptContainerElement *)&local_748 < local_770.Data + (longlong)local_768._4_4_ * 8)
            ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar20 = (int)local_768;
        if ((int)local_768 == local_768._4_4_) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_770,(int *)((longlong)&local_768 + 4));
        }
        local_768 = CONCAT44(local_768._4_4_,iVar20 + 1);
        *(FDependsNode **)(local_770.Data + (longlong)iVar20 * 8) = local_748;
        iVar20 = (int)local_708;
        uVar33 = (ulonglong)(int)local_708;
        pFVar31 = local_710.Data + uVar33 * 8;
        FVar35.Data = local_710.Data;
        while( true ) {
          if ((int)uVar33 != iVar20) {
            local_778[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_778);
          }
          uVar33 = local_708;
          if (FVar35.Data == pFVar31) break;
          local_728 = *(FDependsNode **)FVar35.Data;
          uVar27 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_728 >> 4)) * -0x7a143595;
          uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
          local_5b8 = local_728;
          pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                    ::FindOrAddImpl<FDependsNode_*_const_&>
                              ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                                *)local_720,uVar27 >> 0x10 ^ uVar27,&local_5b8);
          if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
            pFVar25 = ::operator_new(0x40);
            if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
              pFVar25->ManagedInEarlierRound = None;
              pFVar25->bModifiedByRound = false;
              *(undefined3 *)&pFVar25->field_0x5 = 0;
              pFVar25->ManagedInThisRound = None;
              pFVar25->bDirectManagedInThisRound = false;
              *(undefined3 *)&pFVar25->field_0xd = 0;
              (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
              (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
              pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
              pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
              pFVar25->bModifiedByCurrentManager = false;
              *(undefined3 *)&pFVar25->field_0x31 = 0;
              pFVar25->VisitedByCurrentManager = None;
              *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
            }
            pFVar9 = pTVar24->Ptr;
            if ((pFVar9 != pFVar25) &&
               (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
              pFVar34 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
              if (pFVar34 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar34);
              }
              ::operator_delete(pFVar9,0x40);
            }
          }
          pFVar25 = pTVar24->Ptr;
          if (pFVar25->bModifiedByCurrentManager != false) {
            FDependsNode::SetIsReferencersSorted(local_728,false);
            FDependsNode::AddReferencer(local_728,local_748);
            FDependsNode::AddDependency
                      (local_748,local_728,Manage,pFVar25->CurrentManagerProperties);
            pFVar25->ManagedInThisRound =
                 pFVar25->ManagedInThisRound | pFVar25->VisitedByCurrentManager;
            pFVar25->bModifiedByRound = true;
            if (((local_770.Data <= (FScriptContainerElement *)&local_728) &&
                ((FScriptContainerElement *)&local_728 <
                 local_770.Data + (longlong)local_768._4_4_ * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar21 = (int)local_768;
            if ((int)local_768 == local_768._4_4_) {
              iVar21 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_770,(int *)((longlong)&local_768 + 4));
            }
            local_768 = CONCAT44(local_768._4_4_,iVar21 + 1);
            *(FDependsNode **)(local_770.Data + (longlong)iVar21 * 8) = local_728;
            pFVar25->bModifiedByCurrentManager = false;
            pFVar25->VisitedByCurrentManager = None;
            pFVar25->CurrentManagerProperties = None;
          }
          uVar33 = local_708 & 0xffffffff;
          FVar35.Data = FVar35.Data + 8;
        }
        uVar27 = local_708._4_4_;
        local_708 = (ulonglong)local_708._4_4_ << 0x20;
        if (((longlong)uVar33 < 0) && (uVar27 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_710,0,(int *)((longlong)&local_708 + 4));
        }
        lVar15 = local_738;
        uVar27 = local_738._4_4_;
        local_738 = (ulonglong)local_738._4_4_ << 0x20;
        if ((lVar15 < 0) && (uVar27 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_740,0,(int *)((longlong)&local_738 + 4));
        }
        uVar33 = local_758 & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
      }
      EVar6 = local_6b8->PerformanceMode;
      if ((EVar6 == MostlyStatic) ||
         ((EVar6 == BulkLoading && (AssetRegistry::Impl::bDeferDependencySort == false)))) {
        bVar19 = true;
        if (EVar6 != MostlyStatic) goto LAB_142bae073;
      }
      else {
        bVar19 = false;
LAB_142bae073:
        if ((EVar6 != BulkLoading) || (AssetRegistry::Impl::bDeferReferencerSort != false)) {
          bVar37 = false;
          goto LAB_142bae087;
        }
      }
      bVar37 = true;
LAB_142bae087:
      iVar20 = (int)local_768;
      uVar33 = (ulonglong)(int)local_768;
      local_6b8 = (FAssetRegistryImpl *)(local_770.Data + uVar33 * 8);
      FVar38.Data = local_770.Data;
      while( true ) {
        pFVar16 = local_6b8;
        if ((int)uVar33 != iVar20) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_730);
        }
        if ((FAssetRegistryImpl *)FVar38.Data == pFVar16) break;
        pFVar8 = *(FDependsNode **)FVar38.Data;
        uVar27 = ((uint)((ulonglong)pFVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar8 >> 4)) *
                 -0x7a143595;
        uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
        local_698 = pFVar8;
        pTVar24 = TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                  ::FindOrAddImpl<FDependsNode_*_const_&>
                            ((TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
                              *)local_720,uVar27 >> 0x10 ^ uVar27,&local_698);
        if (pTVar24->Ptr == (FSetManageReferencesNodeData *)0x0) {
          pFVar25 = ::operator_new(0x40);
          if (pFVar25 != (FSetManageReferencesNodeData *)0x0) {
            pFVar25->ManagedInEarlierRound = None;
            pFVar25->bModifiedByRound = false;
            *(undefined3 *)&pFVar25->field_0x5 = 0;
            pFVar25->ManagedInThisRound = None;
            pFVar25->bDirectManagedInThisRound = false;
            *(undefined3 *)&pFVar25->field_0xd = 0;
            (pFVar25->DirectManagedAssetsThisRound).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
            (pFVar25->DirectManagedAssetsThisRound).ArrayMax = 0;
            pFVar25->DebugInstigator[0] = (FDependsNode *)0x0;
            pFVar25->DebugInstigator[1] = (FDependsNode *)0x0;
            pFVar25->bModifiedByCurrentManager = false;
            *(undefined3 *)&pFVar25->field_0x31 = 0;
            pFVar25->VisitedByCurrentManager = None;
            *(undefined8 *)&pFVar25->CurrentManagerProperties = 0;
          }
          pFVar9 = pTVar24->Ptr;
          if ((pFVar9 != pFVar25) &&
             (pTVar24->Ptr = pFVar25, pFVar9 != (FSetManageReferencesNodeData *)0x0)) {
            pFVar31 = (pFVar9->DirectManagedAssetsThisRound).AllocatorInstance.Data;
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
            ::operator_delete(pFVar9,0x40);
          }
        }
        pFVar25 = pTVar24->Ptr;
        if (pFVar25->bModifiedByRound != false) {
          pFVar25->ManagedInEarlierRound =
               pFVar25->ManagedInEarlierRound | pFVar25->ManagedInThisRound;
          FDependsNode::SetIsDependencyListSorted(pFVar8,Manage,bVar19);
          FDependsNode::SetIsReferencersSorted(pFVar8,bVar37);
          pFVar25->bModifiedByRound = false;
          pFVar25->ManagedInThisRound = None;
          pFVar25->bDirectManagedInThisRound = false;
          piVar3 = &(pFVar25->DirectManagedAssetsThisRound).ArrayMax;
          (pFVar25->DirectManagedAssetsThisRound).ArrayNum = 0;
          if (*piVar3 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(pFVar25->DirectManagedAssetsThisRound).AllocatorInstance,0,piVar3);
          }
          if (pFVar25->DebugInstigator <= &pFVar25->bModifiedByCurrentManager) {
            memset(pFVar25->DebugInstigator,0,0x10);
          }
        }
        uVar33 = local_768 & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
      }
      if (local_740.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.Data);
      }
      if (local_710.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.Data);
      }
      if (local_760.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.Data);
      }
      if (local_770.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_770.Data);
      return;
    }
    if ((byte)LogAssetRegistry._0_1_ < 2) goto LAB_142baca6e;
    pFVar28 = &::LOG_Static;
  }
  Logging::Private::BasicLog<2>(pFVar28,(FLogCategoryBase *)&LogAssetRegistry);
LAB_142baca6e:
  ::FDebug::DumpStackTraceToLog(Warning);
  return;
}

// SetPerformanceMode @ 142bae600

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SetPerformanceMode
          (FAssetRegistryImpl *this,EPerformanceMode param_1)

{
  EPerformanceMode EVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  EVar1 = this->PerformanceMode;
  if (EVar1 == param_1) {
    return;
  }
  if ((EVar1 == MostlyStatic) ||
     ((EVar1 == BulkLoading && (!AssetRegistry::Impl::bDeferDependencySort)))) {
    bVar5 = true;
    if (EVar1 != MostlyStatic) goto LAB_142bae62b;
LAB_142bae63b:
    bVar3 = true;
  }
  else {
    bVar5 = false;
LAB_142bae62b:
    if ((EVar1 == BulkLoading) && (!AssetRegistry::Impl::bDeferReferencerSort)) goto LAB_142bae63b;
    bVar3 = false;
  }
  this->PerformanceMode = param_1;
  if ((param_1 == MostlyStatic) ||
     ((param_1 == BulkLoading && (AssetRegistry::Impl::bDeferDependencySort == false)))) {
    bVar2 = true;
    if (param_1 != MostlyStatic) goto LAB_142bae65f;
  }
  else {
    bVar2 = false;
LAB_142bae65f:
    if ((param_1 != BulkLoading) || (AssetRegistry::Impl::bDeferReferencerSort != false)) {
      bVar4 = false;
      goto LAB_142bae673;
    }
  }
  bVar4 = true;
LAB_142bae673:
  if ((bVar5 == bVar2) && (bVar3 == bVar4)) {
    return;
  }
  FAssetRegistryState::SetDependencyNodeSorting(&this->State,bVar2,bVar4);
  return;
}

// SetPrimaryAssetIdForObjectPath @ 142bae690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bae75e) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SetPrimaryAssetIdForObjectPath
          (FAssetRegistryImpl *this,FEventContext *param_1,FSoftObjectPath *param_2,
          FPrimaryAssetId *param_3)

{
  FAssetData *pFVar1;
  uint uVar2;
  bool bVar3;
  FCachedAssetKey *pFVar4;
  FAssetData **ppFVar5;
  TTuple<FName,FString> *pTVar6;
  FString *pFVar7;
  FAssetDataTagMapSharedView *pFVar8;
  undefined1 auStack_118 [32];
  FCachedAssetKey local_e8;
  FAssetDataTagMap local_d8;
  FCachedAssetKey local_c0;
  FAssetData local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_c0,param_2);
  local_e8.OuterPath = pFVar4->OuterPath;
  local_e8.ObjectName = pFVar4->ObjectName;
  ppFVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find(&(this->State).CachedAssets,&local_e8);
  if ((ppFVar5 == (FAssetData **)0x0) || (pFVar1 = *ppFVar5, pFVar1 == (FAssetData *)0x0)) {
    bVar3 = false;
  }
  else {
    FAssetDataTagMapSharedView::CopyMap(&pFVar1->TagsAndValues,&local_d8);
    ::FName::ToString((FName *)param_3,(FString *)&local_e8);
    pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
             AllocateMemoryForEmplace<FName_const_&>
                       ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                        &local_d8,&FPrimaryAssetId::PrimaryAssetTypeTag);
    uVar2 = FPrimaryAssetId::PrimaryAssetTypeTag.Number;
    *(uint *)&pTVar6->field_0x0 = FPrimaryAssetId::PrimaryAssetTypeTag.ComparisonIndex.Value;
    *(uint *)&pTVar6->field_0x4 = uVar2;
    *(undefined8 *)&pTVar6->field_0x8 = 0;
    *(uint *)&pTVar6->field_0x8 = local_e8.OuterPath.ComparisonIndex.Value;
    *(uint *)&pTVar6->field_0xc = local_e8.OuterPath.Number;
    *(uint *)&pTVar6->field_0x10 = local_e8.ObjectName.ComparisonIndex.Value;
    *(uint *)&pTVar6->field_0x14 = local_e8.ObjectName.Number;
    local_e8.ObjectName.ComparisonIndex.Value = 0;
    local_e8.ObjectName.Number = 0;
    local_e8.OuterPath.ComparisonIndex.Value = 0;
    local_e8.OuterPath.Number = 0;
    pFVar7 = ::FName::ToString(&param_3->PrimaryAssetName,(FString *)&local_e8);
    pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
             AllocateMemoryForEmplace<FName_const_&>
                       ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                        &local_d8,&FPrimaryAssetId::PrimaryAssetNameTag);
    uVar2 = FPrimaryAssetId::PrimaryAssetNameTag.Number;
    *(uint *)&pTVar6->field_0x0 = FPrimaryAssetId::PrimaryAssetNameTag.ComparisonIndex.Value;
    *(uint *)&pTVar6->field_0x4 = uVar2;
    *(undefined8 *)&pTVar6->field_0x8 = 0;
    *(FScriptContainerElement **)&pTVar6->field_0x8 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar6->field_0x10 = (pFVar7->Data).ArrayNum;
    *(int *)&pTVar6->field_0x14 = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (local_e8.OuterPath != (FName)0x0) {
      FMemory::Free((void *)local_e8.OuterPath);
    }
    FAssetData::FAssetData(&local_b0,pFVar1);
    pFVar8 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                       ((FAssetDataTagMapSharedView *)&local_e8,&local_d8);
    FAssetDataTagMapSharedView::operator=(&local_b0.TagsAndValues,pFVar8);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)&local_e8)
    ;
    UpdateAssetData(this,param_1,pFVar1,&local_b0,false);
    if (local_b0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_b0.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_b0.TagsAndValues);
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_d8._padding_,(int)local_d8._padding_);
    if ((TTuple<FName,FString> *)local_d8._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    bVar3 = true;
  }
  return bVar3;
}

// SetTemporaryCachingMode @ 142baebd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SetTemporaryCachingMode
          (FAssetRegistryImpl *this,bool param_1)

{
  undefined1 *puVar1;
  FClassInheritanceBuffer *this_00;
  int iVar2;
  bool bVar3;
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  
  if ((this->bIsTempCachingAlwaysEnabled == false) && (param_1 != this->bIsTempCachingEnabled)) {
    this->bIsTempCachingEnabled = param_1;
    (this->TempCachedInheritanceBuffer).bDirty = true;
    if (!param_1) {
      this_00 = &this->TempCachedInheritanceBuffer;
      bVar3 = 1 < *(int *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x48;
      if (!bVar3) {
        TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->TempCachedInheritanceBuffer).InheritanceMap.field_0xc;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x34 = 0;
      iVar2 = *(int *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x2c;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x10,0);
      }
      if (bVar3) {
        *(undefined4 *)&(this->TempCachedInheritanceBuffer).InheritanceMap.field_0x48 = 1;
        TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      this_01 = &(this->TempCachedInheritanceBuffer).ReverseInheritanceMap;
      bVar3 = 1 < *(int *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x48;
      if (!bVar3) {
        TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,
                        *(int *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x8
                       );
      puVar1 = &(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0xc;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x34 = 0;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x30 =
           0xffffffff;
      iVar2 = *(int *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x2c;
      *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x10,0);
      }
      if (bVar3) {
        *(undefined4 *)&(this->TempCachedInheritanceBuffer).ReverseInheritanceMap.field_0x48 = 1;
        TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_01);
        return;
      }
    }
  }
  return;
}

// SetTemporaryCachingModeInvalidated @ 142baee50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::SetTemporaryCachingModeInvalidated(FAssetRegistryImpl *this)

{
  (this->TempCachedInheritanceBuffer).bDirty = true;
  return;
}

// ShouldSkipAsset @ 142baf030

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ShouldSkipAsset(FAssetRegistryImpl *this,UObject *param_1)

{
  return false;
}

// ShouldSkipAsset @ 142baf040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ShouldSkipAsset
          (FAssetRegistryImpl *this,FTopLevelAssetPath *param_1,uint param_2)

{
  return false;
}

// ShouldSkipGatheredAsset @ 142baf050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ShouldSkipGatheredAsset
          (FAssetRegistryImpl *this,FAssetData *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  TStringView<wchar_t> *pTVar7;
  longlong lVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_768 [32];
  wchar_t *local_748;
  int local_740;
  wchar_t *local_738;
  char local_728;
  TStringView<wchar_t> local_718 [2];
  TStringView<wchar_t> local_6f8;
  TStringView<wchar_t> local_6e8;
  TStringView<wchar_t> local_6d8;
  wchar_t *local_6c8;
  int iStack_6c0;
  undefined4 uStack_6bc;
  TStringView<wchar_t> local_6b8;
  TStringBuilderBase<wchar_t> local_6a8;
  wchar_t local_688 [256];
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_768;
  pwVar5 = FPackagePath::GetExternalActorsFolderName();
  iVar3 = 0;
  iVar11 = iVar3;
  local_6c8 = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    sVar6 = wcslen(pwVar5);
    iVar11 = (int)sVar6;
  }
  local_488.Base = local_468;
  local_488.CurPos = local_468;
  local_488.End = (wchar_t *)&local_268;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  iStack_6c0 = iVar11;
  ::FName::ToString(&param_1->PackageName,&local_488);
  local_6f8._12_4_ = uStack_6bc;
  local_6f8.Size = iStack_6c0;
  local_718[0].Size = (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1);
  local_718[0].DataPtr = local_488.Base;
  local_6f8.DataPtr = local_6c8;
  iVar2 = String::FindFirst(local_718,&local_6f8,CaseSensitive);
  if (iVar2 == -1) {
LAB_142baf5d3:
    bVar10 = false;
  }
  else {
    local_6a8.Base = local_688;
    local_6a8.bIsDynamic = false;
    local_6a8.bIsExternal = false;
    local_6a8.CurPos = local_688;
    local_6a8.End = (wchar_t *)&local_488;
    if ((param_1->PackageName != (FName)0x0) && (param_1->AssetName != (FName)0x0)) {
      ::FName::AppendString(&param_1->PackageName,&local_6a8);
      if (local_6a8.End < (TStringBuilderBase<wchar_t> *)(local_6a8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_6a8,1);
      }
      *local_6a8.CurPos = L'.';
      local_6a8.CurPos = local_6a8.CurPos + 1;
      ::FName::AppendString(&param_1->AssetName,&local_6a8);
    }
    local_718[0].DataPtr = local_6a8.Base;
    local_718[0].Size = (int)((longlong)local_6a8.CurPos - (longlong)local_6a8.Base >> 1);
    FPackageName::ObjectPathToPackageName(&local_6b8,local_718);
    local_718[0].Size = (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1);
    local_718[0].DataPtr = local_488.Base;
    local_6e8.DataPtr = (wchar_t *)0x0;
    local_6e8.Size = 0;
    local_6d8.DataPtr = (wchar_t *)0x0;
    local_6d8.Size = 0;
    pTVar7 = FPackageName::SplitPackageNameRoot(&local_6f8,local_718,&local_6e8,MountPointNoSlashes)
    ;
    local_718[0].DataPtr = local_6b8.DataPtr;
    pwVar1 = pTVar7->DataPtr;
    pTVar7 = FPackageName::SplitPackageNameRoot(&local_6f8,local_718,&local_6d8,MountPointNoSlashes)
    ;
    local_718[0].DataPtr = pTVar7->DataPtr;
    local_718[0].Size = pTVar7->Size;
    local_718[0]._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    iVar2 = local_6e8.Size;
    if (iVar11 < local_6e8.Size) {
      iVar2 = iVar11;
    }
    iVar4 = iVar3;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    if (iVar11 == iVar4) {
      if ((iVar11 != 0) && (iVar4 != 0)) {
        iVar2 = iVar4;
        if (iVar11 < iVar4) {
          iVar2 = iVar11;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar5,local_6e8.DataPtr,(longlong)iVar2);
        if (iVar2 != 0) goto LAB_142baf7e6;
      }
      if (iVar11 == iVar4) {
        iVar2 = local_6e8.Size;
        if (local_6e8.Size - iVar11 < local_6e8.Size) {
          iVar2 = local_6e8.Size - iVar11;
        }
        iVar4 = iVar3;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        lVar8 = (longlong)iVar4;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        if ((iVar3 == 1) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp
                              (L"/",local_6e8.DataPtr + (local_6e8.Size - lVar8),1), iVar3 == 0)) {
          local_728 = '\0';
          iVar2 = (local_6e8.Size - iVar11) + -1;
          iVar3 = local_6e8.Size;
          if (iVar2 < local_6e8.Size) {
            iVar3 = iVar2;
          }
          iVar2 = 0;
          if (0 < iVar3) {
            iVar2 = iVar3;
          }
          pwVar5 = local_6e8.DataPtr + ((longlong)local_6e8.Size - (longlong)iVar2);
          iVar3 = iVar2;
          if (0xd < iVar2) {
            iVar3 = 0xd;
          }
          iVar4 = 0;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          iVar13 = (int)local_718[0]._8_8_;
          iVar3 = iVar2;
          if ((iVar4 == 0xd) &&
             (iVar4 = FGenericPlatformStricmp::Strnicmp(L"ContentBundle",pwVar5,0xd), iVar4 == 0)) {
            if (iVar2 + -0xd < iVar2) {
              iVar3 = iVar2 + -0xd;
            }
LAB_142baf3e1:
            iVar4 = 0;
            if (0 < iVar3) {
              iVar4 = iVar3;
            }
            pwVar5 = pwVar5 + ((longlong)iVar2 - (longlong)iVar4);
            iVar3 = iVar4;
            if (1 < iVar4) {
              iVar3 = 1;
            }
            iVar2 = 0;
            if (0 < iVar3) {
              iVar2 = iVar3;
            }
            if ((iVar2 == 1) &&
               (iVar3 = FGenericPlatformStricmp::Strnicmp(L"/",pwVar5,1), iVar3 == 0)) {
              iVar3 = iVar4;
              if (iVar4 + -1 < iVar4) {
                iVar3 = iVar4 + -1;
              }
              iVar12 = 0;
              if (0 < iVar3) {
                iVar12 = iVar3;
              }
              local_6f8._12_4_ = local_6b8._12_4_;
              local_6f8.Size = iVar12;
              local_6f8.DataPtr = pwVar5 + ((longlong)iVar4 - (longlong)iVar12);
              iVar3 = String::FindFirstChar(&local_6f8,L'/',CaseSensitive);
              if (iVar3 != -1) {
                iVar2 = (iVar12 - iVar3) + -1;
                iVar3 = iVar12;
                if (iVar2 < iVar12) {
                  iVar3 = iVar2;
                }
                iVar2 = 0;
                if (0 < iVar3) {
                  iVar2 = iVar3;
                }
                lVar8 = (longlong)iVar2;
                pwVar5 = pwVar5 + ((longlong)iVar4 - (longlong)iVar12) + (iVar12 - lVar8);
                if (local_728 == '\0') goto LAB_142baf582;
                iVar3 = iVar2;
                if (iVar13 < iVar2) {
                  iVar3 = iVar13;
                }
                iVar4 = 0;
                if (0 < iVar3) {
                  iVar4 = iVar3;
                }
                if (iVar13 == iVar4) {
                  if ((iVar13 != 0) && (iVar4 != 0)) {
                    iVar3 = iVar4;
                    if (iVar13 < iVar4) {
                      iVar3 = iVar13;
                    }
                    iVar3 = FGenericPlatformStricmp::Strnicmp
                                      (local_718[0].DataPtr,pwVar5,(longlong)iVar3);
                    if (iVar3 != 0) goto LAB_142baf5ca;
                  }
                  if (iVar13 == iVar4) {
                    if (iVar2 - iVar13 < iVar2) {
                      iVar2 = iVar2 - iVar13;
                    }
                    iVar3 = 0;
                    if (0 < iVar2) {
                      iVar3 = iVar2;
                    }
                    iVar2 = iVar3;
                    if (1 < iVar3) {
                      iVar2 = 1;
                    }
                    iVar4 = 0;
                    if (0 < iVar2) {
                      iVar4 = iVar2;
                    }
                    if ((iVar4 == 1) &&
                       (iVar2 = FGenericPlatformStricmp::Strnicmp(L"/",pwVar5 + (lVar8 - iVar3),1),
                       iVar2 == 0)) {
                      iVar4 = iVar3;
                      if (iVar3 + -1 < iVar3) {
                        iVar4 = iVar3 + -1;
                      }
                      iVar2 = 0;
                      if (0 < iVar4) {
                        iVar2 = iVar4;
                      }
                      pwVar5 = pwVar5 + (lVar8 - iVar3) + ((longlong)iVar3 - (longlong)iVar2);
                      goto LAB_142baf582;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar4 = iVar2;
            if (3 < iVar2) {
              iVar4 = 3;
            }
            iVar12 = 0;
            if (0 < iVar4) {
              iVar12 = iVar4;
            }
            if ((iVar12 == 3) &&
               (iVar4 = FGenericPlatformStricmp::Strnicmp(L"EDL",pwVar5,3), iVar4 == 0)) {
              local_728 = '\x01';
              if (iVar2 + -3 < iVar2) {
                iVar3 = iVar2 + -3;
              }
              goto LAB_142baf3e1;
            }
LAB_142baf582:
            iVar3 = local_6d8.Size;
            if (local_6d8.Size < iVar2) {
              iVar2 = local_6d8.Size;
            }
            iVar4 = 0;
            if (0 < iVar2) {
              iVar4 = iVar2;
            }
            if (((local_6d8.Size != iVar4) ||
                (((local_6d8.Size != 0 && (iVar4 != 0)) &&
                 (iVar2 = FGenericPlatformStricmp::Strnicmp
                                    (local_6d8.DataPtr,pwVar5,(longlong)iVar4), iVar2 != 0)))) ||
               (iVar3 != iVar4)) {
              local_268.Base = local_248;
              local_268.bIsDynamic = false;
              local_268.bIsExternal = false;
              local_268.CurPos = local_248;
              local_268.End = (wchar_t *)local_48;
              local_268.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_248,1,"/",1);
              pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                 (&local_268,local_718[0].DataPtr,iVar13);
              if (pTVar9->End < pTVar9->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
              }
              pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(pTVar9->CurPos,1,"/",1);
              pTVar9->CurPos = pwVar5;
              pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,local_6c8,iVar11);
              if (pTVar9->End < pTVar9->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
              }
              pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(pTVar9->CurPos,1,"/",1);
              pTVar9->CurPos = pwVar5;
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (pTVar9,local_6d8.DataPtr,local_6d8.Size);
              if (5 < (byte)LogAssetRegistry._0_1_) {
                if (local_6a8.End < (TStringBuilderBase<wchar_t> *)(local_6a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_6a8,1);
                }
                pwVar5 = local_6a8.Base;
                *local_6a8.CurPos = L'\0';
                if (local_268.End < local_268.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_268,1);
                }
                *local_268.CurPos = L'\0';
                if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_488,1);
                }
                *local_488.CurPos = L'\0';
                local_748 = pwVar5;
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
              bVar10 = true;
              goto LAB_142baf5d5;
            }
          }
LAB_142baf5ca:
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
          goto LAB_142baf5d3;
        }
      }
    }
LAB_142baf7e6:
    if (5 < (byte)LogAssetRegistry._0_1_) {
      if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_488,1);
      }
      *local_488.CurPos = L'\0';
      local_748 = pwVar1;
      local_740 = iVar11;
      local_738 = pwVar5;
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
    bVar10 = true;
  }
LAB_142baf5d5:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  return bVar10;
}

// ShouldSortDependencies @ 142baf870

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ShouldSortDependencies(FAssetRegistryImpl *this)

{
  if ((this->PerformanceMode != MostlyStatic) &&
     ((this->PerformanceMode != BulkLoading || (AssetRegistry::Impl::bDeferDependencySort)))) {
    return false;
  }
  return true;
}

// ShouldSortReferencers @ 142baf8a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::ShouldSortReferencers(FAssetRegistryImpl *this)

{
  if ((this->PerformanceMode != MostlyStatic) &&
     ((this->PerformanceMode != BulkLoading || (AssetRegistry::Impl::bDeferReferencerSort)))) {
    return false;
  }
  return true;
}

// Shrink @ 142bafd00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::FAssetRegistryImpl::Shrink(FAssetRegistryImpl *this)

{
  int *piVar1;
  ulonglong uVar2;
  FGatherDependencyDataScratchpad *this_00;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            *)&this->BackgroundResults);
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            *)&(this->BackgroundResults).AssetsForGameThread);
  uVar4 = TRingBuffer<FString,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                    (&(this->BackgroundResults).Paths,
                     (this->BackgroundResults).Paths.AfterBack -
                     (this->BackgroundResults).Paths.Front);
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate
            (&(this->BackgroundResults).Paths,uVar4);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
            *)&(this->BackgroundResults).Dependencies);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
            *)&(this->BackgroundResults).DependenciesForGameThread);
  uVar4 = TRingBuffer<FString,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                    (&(this->BackgroundResults).CookedPackageNamesWithoutAssetData,
                     (this->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack -
                     (this->BackgroundResults).CookedPackageNamesWithoutAssetData.Front);
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate
            (&(this->BackgroundResults).CookedPackageNamesWithoutAssetData,uVar4);
  uVar4 = TRingBuffer<FName,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                    (&(this->BackgroundResults).VerseFiles,
                     (this->BackgroundResults).VerseFiles.AfterBack -
                     (this->BackgroundResults).VerseFiles.Front);
  TRingBuffer<FName,TSizedDefaultAllocator<32>_>::Reallocate
            (&(this->BackgroundResults).VerseFiles,uVar4);
  iVar5 = (this->BackgroundResults).BlockedFiles.ArrayNum;
  piVar1 = &(this->BackgroundResults).BlockedFiles.ArrayMax;
  if (*piVar1 != iVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,&(this->BackgroundResults).BlockedFiles.AllocatorInstance,iVar5,piVar1);
  }
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            *)&this->DeferredAssets);
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
            *)&this->DeferredAssetsForGameThread);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
            *)&this->DeferredDependencies);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
            *)&this->DeferredDependenciesForGameThread);
  FAssetRegistryState::Shrink(&this->State);
  this_00 = (this->GatherDependencyDataScratchPad).Ptr;
  TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::DependsNode::FConstructData,0>,FDefaultSetAllocator>
            *)this_00);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Shrink
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this_00->CachedDepToRedirect);
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Shrink((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&this_00->ModifiedDependNodes);
  uVar4 = *(int *)&(this_00->ModifiedDependNodes).Elements.field_0x8 -
          *(int *)&(this_00->ModifiedDependNodes).Elements.field_0x34;
  if (uVar4 < 4) {
    iVar5 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((0 < (int)uVar4) && ((this_00->ModifiedDependNodes).HashSize < iVar5)) ||
     (iVar5 < (this_00->ModifiedDependNodes).HashSize)) {
    (this_00->ModifiedDependNodes).HashSize = iVar5;
    TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::Rehash
              (&this_00->ModifiedDependNodes);
  }
  return;
}

// TickGatherPackage @ 142bb07d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::TickGatherPackage
          (FAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FEventContext *param_2,FString *param_3,FString *param_4)

{
  FResults *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  ulong64 uVar17;
  ForAnyElementType FVar18;
  FPackageDependencyData *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  undefined1 auStackY_408 [32];
  FName local_3c8;
  byte local_3c0;
  TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_> local_3b8;
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6 [6];
  TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_*,TSizedDefaultAllocator<32>_> local_3a0
  ;
  uint local_390;
  uint uStack_38c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_388;
  undefined4 local_380;
  uint uStack_37c;
  uint uStack_378;
  undefined4 uStack_374;
  uint local_370;
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_368;
  undefined4 local_360;
  uint uStack_35c;
  uint uStack_358;
  undefined4 uStack_354;
  LARGE_INTEGER local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FEventContext *local_328;
  FString *local_320;
  LARGE_INTEGER local_318;
  LARGE_INTEGER local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  longlong *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_u_0 local_298;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FName local_230;
  TStringView<wchar_t> local_228;
  undefined1 local_218 [32];
  ForElementType<unsigned_int> local_1f8;
  uint local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  FScriptContainerElement local_1e0 [8];
  ForAnyElementType local_1d8;
  uint local_1d0;
  undefined1 local_1c8 [32];
  ForElementType<unsigned_int> local_1a8;
  uint local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  FScriptContainerElement local_190 [8];
  ForAnyElementType local_188;
  uint local_180;
  undefined1 local_178 [64];
  void *local_138;
  undefined4 local_130;
  undefined1 local_128 [56];
  longlong *local_f0;
  bool local_e8;
  undefined1 local_d8 [56];
  longlong *local_a0;
  bool local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_408;
  if ((this->GlobalGatherer).Ptr == (FAssetDataGatherer *)0x0) {
    return;
  }
  local_328 = param_2;
  local_320 = param_3;
  local_3c0 = IsInGameThread();
  ReleaseSRWLockExclusive((PSRWLOCK)param_1->Lock);
  uVar14 = 0;
  local_248 = (param_4->Data).AllocatorInstance.Data;
  iVar13 = (param_4->Data).ArrayNum;
  iStack_240 = iVar13 + -1;
  if (iVar13 == 0) {
    iStack_240 = 0;
  }
  local_228._12_4_ = uStack_23c;
  local_228.Size = iStack_240;
  local_228.DataPtr = (wchar_t *)local_248;
  FAssetDataGatherer::WaitOnPath((this->GlobalGatherer).Ptr,&local_228);
  AcquireSRWLockExclusive((PSRWLOCK)param_1->Lock);
  if (((this->GlobalGatherer).Ptr == (FAssetDataGatherer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalGatherer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x17eb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar5 = __real_bff0000000000000;
  iVar13 = (param_3->Data).ArrayNum;
  iVar16 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar16 = 0;
  }
  pFVar10 = ::FName::FName(&local_230,iVar16,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                           FNAME_Add);
  this_00 = &this->BackgroundResults;
  local_3c8 = *pFVar10;
  FAssetDataGatherer::GetPackageResults((this->GlobalGatherer).Ptr,this_00);
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax = 0;
  local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.ArrayNum = 0;
  local_3b8.ArrayMax = 0;
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>(&this_00->Assets,local_3c8,&local_3a0,false);
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>
            (&(this->BackgroundResults).AssetsForGameThread,local_3c8,&local_3a0,false);
  TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (&(this->BackgroundResults).Dependencies,local_3c8,&local_3b8,false);
  FVar7 = local_3c8;
  local_308 = local_3c8;
  if (*(int *)&(this->BackgroundResults).Dependencies.field_0x8 !=
      *(int *)&(this->BackgroundResults).Dependencies.field_0x34) {
    uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                         *)&(this->BackgroundResults).Dependencies,FVar7.Number + uVar9,&local_308);
  }
  TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (&(this->BackgroundResults).DependenciesForGameThread,local_3c8,&local_3b8,false);
  FVar7 = local_3c8;
  local_300 = local_3c8;
  if (*(int *)&(this->BackgroundResults).DependenciesForGameThread.field_0x8 !=
      *(int *)&(this->BackgroundResults).DependenciesForGameThread.field_0x34) {
    uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                         *)&(this->BackgroundResults).DependenciesForGameThread,FVar7.Number + uVar9
                        ,&local_300);
  }
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>(&this->DeferredAssets,local_3c8,&local_3a0,false);
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>
            (&this->DeferredAssetsForGameThread,local_3c8,&local_3a0,false);
  TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->DeferredDependencies,local_3c8,&local_3b8,false);
  FVar7 = local_3c8;
  local_2f8 = local_3c8;
  if (*(int *)&(this->DeferredDependencies).field_0x8 !=
      *(int *)&(this->DeferredDependencies).field_0x34) {
    uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                         *)&this->DeferredDependencies,FVar7.Number + uVar9,&local_2f8);
  }
  TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (&this->DeferredDependenciesForGameThread,local_3c8,&local_3b8,false);
  FVar7 = local_3c8;
  local_2f0 = local_3c8;
  if (*(int *)&(this->DeferredDependenciesForGameThread).field_0x8 !=
      *(int *)&(this->DeferredDependenciesForGameThread).field_0x34) {
    uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                         *)&this->DeferredDependenciesForGameThread,FVar7.Number + uVar9,&local_2f0)
    ;
  }
  dVar6 = __real_4170000000000000;
  local_298.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_298._0_8_ = 0;
  local_298._8_4_ = 0;
  local_298._12_4_ = -1;
  local_298._32_8_ = 0;
  local_298._40_4_ = 0;
  local_298._44_4_ = 0x80;
  local_298._48_4_ = 0xffffffff;
  local_298._52_4_ = 0;
  local_298.TypedValue.HashSize = 0;
  if (0 < local_3a0.ArrayNum) {
    QueryPerformanceCounter(&local_350);
    iVar13 = local_3a0.ArrayNum;
    uVar17 = (ulong64)local_3a0.ArrayNum;
    local_218._0_8_ = (FScriptContainerElement *)0x0;
    local_218._8_8_ = 0;
    local_1f8 = (ForElementType<unsigned_int>)0x0;
    local_1f0 = 0;
    local_1ec = 0x80;
    local_1e8 = -1;
    local_1e4 = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    dVar5 = (double)local_350.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
    if (local_3a0.ArrayNum != 0) {
      if (local_3a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum(uVar17);
      }
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_218,local_3a0.ArrayNum);
      if ((uint)iVar13 < 4) {
        uVar9 = 1;
      }
      else {
        uVar21 = (ulonglong)(((uint)iVar13 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar3 & 0x1f);
      }
      if ((local_1d0 == 0) || ((int)local_1d0 < (int)uVar9)) {
        local_1d0 = uVar9;
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,4);
        }
        if (uVar9 != 0) {
          uVar20 = uVar9;
          if (uVar9 < 2) {
            if (local_1d8.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_142bb0c2c;
            }
          }
          else {
LAB_142bb0c2c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1d8,0,uVar20,4);
          }
          if (0 < (int)uVar9) {
            uVar22 = (ulonglong)uVar9;
            uVar21 = uVar14;
            do {
              FVar18.Data = local_1e0;
              if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_1d8.Data;
              }
              uVar11 = (longlong)(int)uVar9 - 1U & uVar21;
              uVar21 = uVar21 + 1;
              *(undefined4 *)(FVar18.Data + uVar11 * 4) = 0xffffffff;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        if (local_1d0 != 0) {
          pTStack_388 = (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10);
          local_390 = 0;
          uStack_38c = 1;
          uStack_37c = 0;
          uStack_378 = 0;
          if (local_1f0 != 0) {
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_218 + 0x10);
            if (local_1f8 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_1f8;
            }
            uVar9 = *(uint *)FVar23;
            uVar21 = uVar14;
            while (uVar9 == 0) {
              uStack_378 = (int)uVar21 + 0x20;
              uVar21 = (ulonglong)uStack_378;
              iVar13 = (int)uVar14;
              local_390 = iVar13 + 1;
              uVar14 = (ulonglong)local_390;
              if ((int)((local_1f0 - 1) + ((int)(local_1f0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_390) goto LAB_142bb0d4b;
              uVar9 = ((uint *)((longlong)FVar23 + 4))[iVar13];
            }
            uStack_38c = -uVar9 & uVar9;
            uVar14 = (ulonglong)uStack_38c * 2 + 1;
            lVar3 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            uStack_37c = (int)lVar3 + -1 + uStack_378;
            uVar14 = (ulonglong)uStack_37c;
            if ((int)local_1f0 < (int)uStack_37c) {
LAB_142bb0d4b:
              uVar14 = (ulonglong)local_1f0;
              uStack_37c = local_1f0;
            }
          }
          local_380 = 0xffffffff;
          local_2e8 = (longlong *)local_218;
          local_2e0._padding_ = CONCAT44(uStack_38c,local_390);
          local_2e0.CurrentBitIndex = uStack_37c;
          local_2e0.UnvisitedBitMask = 0xffffffff;
          local_2e0._28_4_ = uStack_374;
          local_2e0.BaseBitIndex = uStack_378;
          local_2e0.Array = pTStack_388;
          if ((int)uVar14 < (int)local_1f0) {
            do {
              lVar3 = *local_2e8;
              lVar12 = (longlong)(int)uVar14;
              uVar2 = *(undefined8 *)(lVar3 + lVar12 * 0x18);
              uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
              uVar9 = local_1d0 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
              *(uint *)(lVar3 + 0x14 + lVar12 * 0x18) = uVar9;
              FVar18.Data = local_1e0;
              if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_1d8.Data;
              }
              uVar21 = (longlong)(int)local_1d0 - 1U & (longlong)(int)uVar9;
              *(undefined4 *)(lVar3 + 0x10 + lVar12 * 0x18) =
                   *(undefined4 *)(FVar18.Data + uVar21 * 4);
              *(int *)(FVar18.Data + uVar21 * 4) = (int)uVar14;
              local_2e0.UnvisitedBitMask = local_2e0.UnvisitedBitMask & ~local_2e0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
              uVar14 = (ulonglong)(uint)local_2e0.CurrentBitIndex;
            } while (local_2e0.CurrentBitIndex < (local_2e0.Array)->NumBits);
          }
        }
      }
      uVar17 = local_3a0._8_8_ & 0xffffffff;
    }
    iVar13 = (int)uVar17;
    pFVar1 = local_3a0.AllocatorInstance.Data + (longlong)iVar13 * 8;
    FVar18.Data = local_3a0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar17 != iVar13) {
        `TCheckedPointerIterator<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_3a8);
      }
      FVar7 = local_3c8;
      if (FVar18.Data == pFVar1) break;
      TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
      ::Emplace<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
                ((TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                  *)local_218,&local_3c8,
                 *(TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> **)FVar18.Data);
      uVar17 = local_3a0._8_8_ & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
    }
    local_348 = local_3c8;
    if (*(int *)&(this->BackgroundResults).Assets.field_0x8 !=
        *(int *)&(this->BackgroundResults).Assets.field_0x34) {
      uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                           *)this_00,FVar7.Number + uVar9,&local_348);
    }
    FVar7 = local_3c8;
    local_340 = local_3c8;
    if (*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 !=
        *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34) {
      uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                           *)&(this->BackgroundResults).AssetsForGameThread,FVar7.Number + uVar9,
                          &local_340);
    }
    FVar7 = local_3c8;
    local_338 = local_3c8;
    if (*(int *)&(this->DeferredAssets).field_0x8 != *(int *)&(this->DeferredAssets).field_0x34) {
      uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                           *)&this->DeferredAssets,FVar7.Number + uVar9,&local_338);
    }
    FVar7 = local_3c8;
    local_330 = local_3c8;
    if (*(int *)&(this->DeferredAssetsForGameThread).field_0x8 !=
        *(int *)&(this->DeferredAssetsForGameThread).field_0x34) {
      uVar9 = ::GetTypeHash(local_3c8.ComparisonIndex.Value);
      TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                           *)&this->DeferredAssetsForGameThread,FVar7.Number + uVar9,&local_330);
    }
    local_178._0_8_ = 0;
    local_178._8_8_ = 0;
    local_178._32_8_ = 0;
    local_178._40_4_ = 0;
    local_178._44_4_ = 0x80;
    local_178._48_4_ = 0xffffffff;
    local_178._52_4_ = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_128._0_8_ = ___xmm_bff0000000000000bff0000000000000;
    local_128._8_8_ = _UNK_15076c718;
    local_128._16_8_ = 0;
    local_f0 = (longlong *)0x0;
    local_e8 = false;
    AssetSearchDataGathered
              (this,local_328,
               (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                *)local_218,
               (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                *)local_178,(FInterruptionContext *)local_128,
               (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)
               &local_298.TypedValue,local_3c0 ^ RetryLater);
    if (local_178._8_4_ != local_178._52_4_) {
      if (2 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      ::FDebug::DumpStackTraceToLog(Warning);
      TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
      ::Append<FDefaultSetAllocator>
                (&this->DeferredAssetsForGameThread,
                 (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                  *)local_178);
      iVar13 = local_3b8.ArrayNum;
      pFVar19 = (FPackageDependencyData *)
                (local_3b8.AllocatorInstance.Data + (longlong)local_3b8.ArrayNum * 0xe0);
      FVar18.Data = local_3b8.AllocatorInstance.Data;
      while( true ) {
        if (local_3b8.ArrayNum != iVar13) {
          `TCheckedPointerIterator<FPackageDependencyData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3a7);
        }
        if ((FPackageDependencyData *)FVar18.Data == pFVar19) break;
        TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
        ::Emplace<FName_const_&,FPackageDependencyData_const_&>
                  ((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                    *)&(this->BackgroundResults).DependenciesForGameThread,&local_3c8,
                   (FPackageDependencyData *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0xe0;
      }
      DestructItems<FPackageDependencyData,int>
                ((FPackageDependencyData *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum);
      iVar13 = local_3b8.ArrayMax;
      local_3b8._8_8_ = local_3b8._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,&local_3b8.AllocatorInstance,0,&local_3b8.ArrayMax);
      }
    }
    if (local_128._16_8_ != 0) {
      plVar15 = (longlong *)(local_128 + 0x20);
      if (local_f0 != (longlong *)0x0) {
        plVar15 = local_f0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    local_130 = 0;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_178);
    local_1d0 = 0;
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_218);
  }
  uVar14 = 0;
  if (local_3b8.ArrayNum < 1) goto LAB_142bb1507;
  if (dVar5 <= 0.0) {
    QueryPerformanceCounter(&local_318);
    dVar5 = (double)local_318.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
  }
  iVar13 = local_3b8.ArrayNum;
  local_1c8._0_8_ = (FScriptContainerElement *)0x0;
  local_1c8._8_8_ = 0;
  local_1a8 = (ForElementType<unsigned_int>)0x0;
  local_1a0 = 0;
  local_19c = 0x80;
  local_198 = -1;
  local_194 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  if (local_3b8.ArrayNum != 0) {
    if (local_3b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)local_3b8.ArrayNum);
    }
    TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1c8,local_3b8.ArrayNum);
    if ((uint)iVar13 < 4) {
      uVar9 = 1;
    }
    else {
      uVar21 = (ulonglong)(((uint)iVar13 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_180 == 0) || ((int)local_180 < (int)uVar9)) {
      local_180 = uVar9;
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,0,4);
      }
      if (uVar9 != 0) {
        uVar20 = uVar9;
        if (uVar9 < 2) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar20 = 0;
            goto LAB_142bb123b;
          }
        }
        else {
LAB_142bb123b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar20,4);
        }
        if (0 < (int)uVar9) {
          uVar22 = (ulonglong)uVar9;
          uVar21 = uVar14;
          do {
            FVar18.Data = local_190;
            if (local_188.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_188.Data;
            }
            uVar11 = uVar21 & (longlong)(int)uVar9 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar18.Data + uVar11 * 4) = 0xffffffff;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      if (local_180 != 0) {
        pTStack_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10);
        local_370 = 0;
        uStack_36c = 1;
        uStack_35c = 0;
        uStack_358 = 0;
        if (local_1a0 != 0) {
          FVar23 = (ForElementType<unsigned_int>)((longlong)local_1c8 + 0x10);
          if (local_1a8 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_1a8;
          }
          uVar9 = *(uint *)FVar23;
          uVar21 = uVar14;
          while (uVar9 == 0) {
            uStack_358 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uStack_358;
            iVar13 = (int)uVar14;
            local_370 = iVar13 + 1;
            uVar14 = (ulonglong)local_370;
            if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_370) goto LAB_142bb135a;
            uVar9 = ((uint *)((longlong)FVar23 + 4))[iVar13];
          }
          uStack_36c = -uVar9 & uVar9;
          uVar14 = (ulonglong)uStack_36c * 2 + 1;
          lVar3 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_35c = (uStack_358 - 1) + (int)lVar3;
          uVar14 = (ulonglong)uStack_35c;
          if ((int)local_1a0 < (int)uStack_35c) {
LAB_142bb135a:
            uVar14 = (ulonglong)local_1a0;
            uStack_35c = local_1a0;
          }
        }
        local_360 = 0xffffffff;
        local_2c0 = (longlong *)local_1c8;
        local_2b8._padding_ = CONCAT44(uStack_36c,local_370);
        local_2b8.CurrentBitIndex = uStack_35c;
        local_2b8.UnvisitedBitMask = 0xffffffff;
        local_2b8._28_4_ = uStack_354;
        local_2b8.BaseBitIndex = uStack_358;
        local_2b8.Array = pTStack_368;
        if ((int)uVar14 < (int)local_1a0) {
          do {
            lVar3 = *local_2c0;
            lVar12 = (longlong)(int)uVar14 * 0xf0;
            uVar2 = *(undefined8 *)(lVar12 + lVar3);
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar9 = local_180 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
            *(uint *)(lVar12 + 0xec + lVar3) = uVar9;
            FVar18.Data = local_190;
            if (local_188.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_188.Data;
            }
            uVar21 = (longlong)(int)local_180 - 1U & (longlong)(int)uVar9;
            *(undefined4 *)(lVar12 + 0xe8 + lVar3) = *(undefined4 *)(FVar18.Data + uVar21 * 4);
            *(int *)(FVar18.Data + uVar21 * 4) = (int)uVar14;
            local_2b8.UnvisitedBitMask = local_2b8.UnvisitedBitMask & ~local_2b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b8);
            uVar14 = (ulonglong)(uint)local_2b8.CurrentBitIndex;
          } while (local_2b8.CurrentBitIndex < (local_2b8.Array)->NumBits);
        }
      }
    }
  }
  iVar13 = local_3b8.ArrayNum;
  pFVar19 = (FPackageDependencyData *)
            (local_3b8.AllocatorInstance.Data + (longlong)local_3b8.ArrayNum * 0xe0);
  FVar18.Data = local_3b8.AllocatorInstance.Data;
  while( true ) {
    if (local_3b8.ArrayNum != iVar13) {
      `TCheckedPointerIterator<FPackageDependencyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3a6);
    }
    if ((FPackageDependencyData *)FVar18.Data == pFVar19) break;
    TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
    ::Emplace<FName_const_&,FPackageDependencyData>
              ((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                *)local_1c8,&local_3c8,(FPackageDependencyData *)FVar18.Data);
    FVar18.Data = FVar18.Data + 0xe0;
  }
  local_d8._0_8_ = ___xmm_bff0000000000000bff0000000000000;
  local_d8._8_8_ = _UNK_15076c718;
  local_d8._16_8_ = 0;
  local_a0 = (longlong *)0x0;
  local_98 = false;
  DependencyDataGathered
            (this,(TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                   *)local_1c8,&this->DeferredDependenciesForGameThread,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0,
             (FInterruptionContext *)local_d8,
             (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)
             &local_298.TypedValue);
  if (local_d8._16_8_ != 0) {
    plVar15 = (longlong *)(local_d8 + 0x20);
    if (local_a0 != (longlong *)0x0) {
      plVar15 = local_a0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_180 = 0;
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1c8);
LAB_142bb1507:
  if (local_298._12_4_ != -1) {
    local_298.TypedValue.HashSize = 0;
    if (local_298.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_298.TypedValue.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_298.TypedValue.Elements);
  }
  DestructItems<FPackageDependencyData,int>
            ((FPackageDependencyData *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum);
  if ((FPackageDependencyData *)local_3b8.AllocatorInstance.Data != (FPackageDependencyData *)0x0) {
    FMemory::Free(local_3b8.AllocatorInstance.Data);
  }
  if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.AllocatorInstance.Data);
  }
  if (0.0 < dVar5) {
    QueryPerformanceCounter(&local_310);
    this->StoreGatherResultsTimeSeconds =
         (float)(((double)local_310.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) -
                dVar5) + this->StoreGatherResultsTimeSeconds;
  }
  return;
}

// TickGatherer @ 142bb1600

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EGatherStatus __thiscall
UE::AssetRegistry::FAssetRegistryImpl::TickGatherer(FAssetRegistryImpl *this,FTickContext *param_1)

{
  undefined1 *puVar1;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_01;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  EPerformanceMode EVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FAssetDataGatherer *this_02;
  FEventContext *pFVar8;
  void *pvVar9;
  FName FVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  EGatherStatus EVar14;
  bool bVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res20;
  
  this_02 = (this->GlobalGatherer).Ptr;
  if (this_02 == (FAssetDataGatherer *)0x0) {
    return Complete;
  }
  FAssetDataGatherer::GetAndTrimSearchResults
            (this_02,&this->BackgroundResults,&param_1->ResultContext);
  param_1->bNumGatherFromDiskPendingDirty = true;
  if ((((this->bInitialSearchCompleted != (atomic<bool>)0x0) &&
       (this->bAdditionalMountSearchInProgress == (atomic<bool>)0x0)) &&
      ((param_1->ResultContext).bIsSearching == false)) &&
     (iVar16 = AssetRegistry::Impl::FTickContext::GetNumGatherFromDiskPending(param_1), iVar16 == 0)
     ) {
    return Complete;
  }
  if (((this->bInitialSearchCompleted == (atomic<bool>)0x0) ||
      (this->bAdditionalMountSearchInProgress != (atomic<bool>)0x0)) && (-1 < CpuChannel->Enabled))
  {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5375,"FAssetRegistryImpl::TickGatherer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x14ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5375);
  }
  else {
    bVar12 = false;
  }
  pFVar8 = param_1->EventContext;
  this_00 = &param_1->MountPointsForVerifyAfterGather;
  if (*(int *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0xc) != -1) {
    (param_1->MountPointsForVerifyAfterGather).field0_0x0.TypedValue.HashSize = 0;
    pvVar9 = *(void **)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x40);
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0xc) =
         0xffffffff;
    *(undefined8 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x30) =
         0xffffffff;
    *(undefined4 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(param_1->MountPointsForVerifyAfterGather).field0_0x0 + 0x40) = 0;
    (param_1->MountPointsForVerifyAfterGather).field0_0x0.TypedValue.HashSize = 0;
  }
  if ((*(int *)&(this->BackgroundResults).Assets.field_0x8 -
       *(int *)&(this->BackgroundResults).Assets.field_0x34 < 1) &&
     (*(int *)&(this->BackgroundResults).Dependencies.field_0x8 -
      *(int *)&(this->BackgroundResults).Dependencies.field_0x34 < 1)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  param_1->bHadAssetsToProcess = bVar13;
  bVar13 = IsInGameThread();
  param_1->bIsInGameThread = bVar13;
  param_1->TimingStartTime = -1.0;
  param_1->bNumGatherFromDiskPendingDirty = true;
  pFVar17 = (param_1->ResultContext).SearchTimes.AllocatorInstance.Data;
  iVar16 = (param_1->ResultContext).SearchTimes.ArrayNum;
  pFVar3 = pFVar17 + (longlong)iVar16 * 8;
  while( true ) {
    if ((param_1->ResultContext).SearchTimes.ArrayNum != iVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar3) break;
    if (5 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    pFVar17 = pFVar17 + 8;
  }
  if ((this->BackgroundResults).Paths.AfterBack != (this->BackgroundResults).Paths.Front) {
    if (param_1->TimingStartTime <= 0.0) {
      QueryPerformanceCounter(&local_res20);
      param_1->TimingStartTime =
           (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
    PathDataGathered(this,pFVar8,&(this->BackgroundResults).Paths,&param_1->InterruptionContext,
                     this_00);
  }
  bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(&param_1->InterruptionContext)
  ;
  if (!bVar13) {
    ConditionalRetryGatherAssetsForGameThread(this,param_1);
    iVar18 = 0;
    iVar16 = 0;
    while( true ) {
      AssetRegistry::Impl::FTickContext::RunAssetSearchDataGathered
                (param_1,&(this->BackgroundResults).Assets,&this->DeferredAssets);
      bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly
                         (&param_1->InterruptionContext);
      if (bVar13) break;
      if (param_1->bIsInGameThread != false) {
        AssetRegistry::Impl::FTickContext::RunAssetSearchDataGathered
                  (param_1,&(this->BackgroundResults).AssetsForGameThread,
                   &this->DeferredAssetsForGameThread);
        bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly
                           (&param_1->InterruptionContext);
        if (bVar13) break;
        if ((*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 ==
             *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34) &&
           (this->bGameThreadRequestedClassesShouldProcess != (atomic<bool>)0x0)) {
          lpCriticalSection = &this->GameThreadRequestedClassesLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          this_01 = &this->GameThreadRequestedClasses;
          bVar13 = 1 < (this->GameThreadRequestedClasses).HashSize;
          if (!bVar13) {
            TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
            UnhashElements(this_01);
          }
          puVar1 = &(this->GameThreadRequestedClasses).Elements.field_0xc;
          *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x8 = 0;
          if (*(int *)puVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
          }
          *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x34 = 0;
          iVar5 = *(int *)&(this->GameThreadRequestedClasses).Elements.field_0x2c;
          *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x28 = 0;
          if ((iVar5 < 0) || (0x80 < iVar5)) {
            *(undefined4 *)&(this->GameThreadRequestedClasses).Elements.field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(this->GameThreadRequestedClasses).Elements.field_0x10,0);
          }
          if (bVar13) {
            (this->GameThreadRequestedClasses).HashSize = 1;
            TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
            Rehash(this_01);
          }
          this->bGameThreadRequestedClassesShouldProcess = (atomic<bool>)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
      }
      AssetRegistry::Impl::FTickContext::RunDependencyDataGathered
                (param_1,&(this->BackgroundResults).Dependencies,&this->DeferredDependencies,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0);
      bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly
                         (&param_1->InterruptionContext);
      if (bVar13) break;
      if (param_1->bIsInGameThread != false) {
        AssetRegistry::Impl::FTickContext::RunDependencyDataGathered
                  (param_1,&(this->BackgroundResults).DependenciesForGameThread,
                   &this->DeferredDependenciesForGameThread,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0);
        bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly
                           (&param_1->InterruptionContext);
        if (bVar13) break;
      }
      if (((*(int *)&(this->BackgroundResults).Assets.field_0x8 !=
            *(int *)&(this->BackgroundResults).Assets.field_0x34) ||
          (((param_1->bIsInGameThread != false &&
            (*(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x8 !=
             *(int *)&(this->BackgroundResults).AssetsForGameThread.field_0x34)) ||
           (param_1->bHandleDeferred == false)))) ||
         (((*(int *)&(this->DeferredAssets).field_0x8 == *(int *)&(this->DeferredAssets).field_0x34
           && (*(int *)&(this->DeferredDependencies).field_0x8 ==
               *(int *)&(this->DeferredDependencies).field_0x34)) &&
          ((param_1->bIsInGameThread == false ||
           ((*(int *)&(this->DeferredAssetsForGameThread).field_0x8 ==
             *(int *)&(this->DeferredAssetsForGameThread).field_0x34 &&
            (*(int *)&(this->DeferredDependenciesForGameThread).field_0x8 ==
             *(int *)&(this->DeferredDependenciesForGameThread).field_0x34)))))))) {
LAB_142bb1b77:
        if ((this->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack !=
            (this->BackgroundResults).CookedPackageNamesWithoutAssetData.Front) {
          AssetRegistry::Impl::FTickContext::LazyStartTimer(param_1);
          CookedPackageNamesWithoutAssetDataGathered
                    (this,pFVar8,&(this->BackgroundResults).CookedPackageNamesWithoutAssetData,
                     &param_1->InterruptionContext);
          bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly
                             (&param_1->InterruptionContext);
          if (bVar13) break;
        }
        if ((this->BackgroundResults).VerseFiles.AfterBack ==
            (this->BackgroundResults).VerseFiles.Front) goto LAB_142bb1d9d;
        AssetRegistry::Impl::FTickContext::LazyStartTimer(param_1);
        bVar13 = -1 < CpuChannel->Enabled;
        if (bVar13) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId8078,"VerseFilesGathered",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x1f8e);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8078);
        }
        uVar6 = (this->BackgroundResults).VerseFiles.AfterBack;
        uVar7 = (this->BackgroundResults).VerseFiles.Front;
        iVar16 = uVar6 - uVar7;
        goto joined_r0x000142bb1c7c;
      }
      if (this->bProcessedAnyAssetsAfterRetryDeferred == false) {
        if (((this->bForceCompletionEvenIfClassNotLoaded != false) ||
            (this->bPreloadingComplete == false)) ||
           (bVar13 = IsEngineStartupModuleLoadingComplete(), !bVar13)) goto LAB_142bb1b77;
        this->bForceCompletionEvenIfClassNotLoaded = true;
      }
      this->bProcessedAnyAssetsAfterRetryDeferred = false;
      if (iVar16 == 0) {
        iVar18 = *(int *)&(this->DeferredAssets).field_0x8 + 10 +
                 ((*(int *)&(this->DeferredAssetsForGameThread).field_0x8 -
                  *(int *)&(this->DeferredAssetsForGameThread).field_0x34) -
                 *(int *)&(this->DeferredAssets).field_0x34);
      }
      if (iVar18 <= iVar16) {
        if (1 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        goto LAB_142bb1b77;
      }
      TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
      ::Append<FDefaultSetAllocator>(&(this->BackgroundResults).Assets,&this->DeferredAssets);
      TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
      ::Append<FDefaultSetAllocator>
                (&(this->BackgroundResults).AssetsForGameThread,&this->DeferredAssetsForGameThread);
      TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
      ::Append<FDefaultSetAllocator>
                (&(this->BackgroundResults).Dependencies,&this->DeferredDependencies);
      TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
      ::Append<FDefaultSetAllocator>
                (&(this->BackgroundResults).DependenciesForGameThread,
                 &this->DeferredDependenciesForGameThread);
      iVar16 = iVar16 + 1;
    }
  }
LAB_142bb1bba:
  EVar14 = AssetRegistry::Impl::FTickContext::UpdateIntermediateStatus(param_1);
LAB_142bb1bc5:
  AssetRegistry::Impl::FTickContext::RecordTimer(param_1);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar14;
joined_r0x000142bb1c7c:
  if (iVar16 < 1) goto joined_r0x000142bb1d86;
  if ((uVar6 == uVar7) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PopCount <= static_cast<SizeType>(Num())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x3ec,
                          L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    EVar14 = (*pcVar11)();
    return EVar14;
  }
  if (((int)((this->BackgroundResults).VerseFiles.AfterBack -
            (this->BackgroundResults).VerseFiles.Front) < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < Num())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
     , bVar15)) {
    pcVar11 = (code *)swi(3);
    EVar14 = (*pcVar11)();
    return EVar14;
  }
  uVar6 = (this->BackgroundResults).VerseFiles.IndexMask;
  FVar10 = *(FName *)((this->BackgroundResults).VerseFiles.AllocatorInstance.Data +
                     (ulonglong)(uVar6 & (this->BackgroundResults).VerseFiles.Front) * 8);
  if ((uVar6 == 0xffffffff) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x37f,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    EVar14 = (*pcVar11)();
    return EVar14;
  }
  puVar2 = &(this->BackgroundResults).VerseFiles.Front;
  *puVar2 = *puVar2 + 1;
  AddVerseFile(this,pFVar8,FVar10);
  bVar15 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(&param_1->InterruptionContext)
  ;
  if (bVar15) goto joined_r0x000142bb1d86;
  uVar6 = (this->BackgroundResults).VerseFiles.AfterBack;
  uVar7 = (this->BackgroundResults).VerseFiles.Front;
  iVar16 = uVar6 - uVar7;
  goto joined_r0x000142bb1c7c;
joined_r0x000142bb1d86:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar13 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(&param_1->InterruptionContext)
  ;
  if (!bVar13) {
LAB_142bb1d9d:
    if ((this->BackgroundResults).BlockedFiles.ArrayNum != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (&pFVar8->BlockedFiles,&(this->BackgroundResults).BlockedFiles);
      TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&(this->BackgroundResults).BlockedFiles,0);
    }
    if (((((param_1->ResultContext).bIsSearching == false) &&
         (iVar16 = AssetRegistry::Impl::FTickContext::GetNumGatherFromDiskPending(param_1),
         iVar16 == 0)) && (bVar13 = IsEngineStartupModuleLoadingComplete(), bVar13)) &&
       (this->bPreloadingComplete != false)) {
      if ((param_1->bIsInGameThread == false) || (param_1->bHandleCompletion == false)) {
        EVar14 = AssetRegistry::Impl::FTickContext::SetIntermediateStatus
                           (param_1,TickGameThreadActiveGatherIdle);
        goto LAB_142bb1bc5;
      }
      if (this->bInitialSearchCompleted == (atomic<bool>)0x0) {
        if ((pFVar8->AssetEvents).ArrayNum != 0) {
          EVar14 = AssetRegistry::Impl::FTickContext::SetIntermediateStatus
                             (param_1,WaitingForEvents);
          goto LAB_142bb1bc5;
        }
        AssetRegistry::Impl::FTickContext::RecordTimer(param_1);
        EVar4 = this->PerformanceMode;
        if (EVar4 != MostlyStatic) {
          if ((EVar4 == BulkLoading) && (AssetRegistry::Impl::bDeferDependencySort == false)) {
            bVar13 = true;
LAB_142bb1e7a:
            if (AssetRegistry::Impl::bDeferReferencerSort != false) goto LAB_142bb1e8f;
            bVar15 = true;
          }
          else {
            bVar13 = false;
            if (EVar4 == BulkLoading) goto LAB_142bb1e7a;
LAB_142bb1e8f:
            bVar15 = false;
          }
          this->PerformanceMode = MostlyStatic;
          if ((!bVar13) || (!bVar15)) {
            FAssetRegistryState::SetDependencyNodeSorting(&this->State,true,true);
          }
        }
        LogSearchDiagnostics(this,this->InitialSearchStartTime);
        FMiscTrace::OutputEndRegion(L"Asset Registry Scan");
        FAssetDataGatherer::UpdateCacheForSaving((this->GlobalGatherer).Ptr);
        FAssetDataGatherer::OnInitialSearchCompleted((this->GlobalGatherer).Ptr);
        Shrink(this);
        pFVar8->bFileLoadedEventBroadcast = true;
        pFVar8->bKnownGathersCompleteEventBroadcast = true;
        this->bInitialSearchCompleted = (atomic<bool>)0x1;
        this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
      }
      else if (this->bAdditionalMountSearchInProgress != (atomic<bool>)0x0) {
        AssetRegistry::Impl::FTickContext::RecordTimer(param_1);
        EVar4 = this->PerformanceMode;
        if (EVar4 != MostlyStatic) {
          if ((EVar4 == BulkLoading) && (AssetRegistry::Impl::bDeferDependencySort == false)) {
            bVar13 = true;
LAB_142bb1f59:
            if (AssetRegistry::Impl::bDeferReferencerSort != false) goto LAB_142bb1f6e;
            bVar15 = true;
          }
          else {
            bVar13 = false;
            if (EVar4 == BulkLoading) goto LAB_142bb1f59;
LAB_142bb1f6e:
            bVar15 = false;
          }
          this->PerformanceMode = MostlyStatic;
          if ((!bVar13) || (!bVar15)) {
            FAssetRegistryState::SetDependencyNodeSorting(&this->State,true,true);
          }
        }
        LogSearchDiagnostics(this,this->AdditionalMountSearchStartTime);
        FMiscTrace::OutputEndRegion(L"Asset Registry - Additional Mount Search");
        FAssetDataGatherer::UpdateCacheForSaving((this->GlobalGatherer).Ptr);
        FAssetDataGatherer::OnAdditionalMountSearchCompleted((this->GlobalGatherer).Ptr);
        Shrink(this);
        pFVar8->bKnownGathersCompleteEventBroadcast = true;
        this->bAdditionalMountSearchInProgress = (atomic<bool>)0x0;
      }
      iVar16 = this->HighestPending;
      EVar14 = Complete;
      (pFVar8->ProgressUpdateData).TypedValue.NumTotalAssets = iVar16;
      (pFVar8->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = iVar16;
      (pFVar8->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad = 0;
      (pFVar8->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles = false;
      (pFVar8->ProgressUpdateData).bIsSet = true;
      this->HighestPending = 0;
      this->GatherStatus = Complete;
      goto LAB_142bb1bc5;
    }
  }
  goto LAB_142bb1bba;
}

// TryConstructGathererIfNeeded @ 142bb2b30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::AssetRegistry::FAssetRegistryImpl::TryConstructGathererIfNeeded(FAssetRegistryImpl *this)

{
  TUniquePtr<FAssetDataGatherer,TDefaultDelete<FAssetDataGatherer>_> *pTVar1;
  code *pcVar2;
  FAssetRegistryImpl *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FAssetDataGatherer *this_00;
  UAssetRegistryImpl *pUVar7;
  longlong lVar8;
  UAssetRegistryImpl *pUVar9;
  UAssetRegistryImpl *pUVar10;
  IPluginManager *pIVar11;
  longlong local_18 [2];
  
  pTVar1 = &this->GlobalGatherer;
  if (pTVar1->Ptr != (FAssetDataGatherer *)0x0) {
    return true;
  }
  if (GIsRequestingExit) {
    return false;
  }
  pUVar10 = (UAssetRegistryImpl *)0x0;
  if (AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x8a6,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pUVar9 = pUVar10;
    if (AssetRegistry::Private::IAssetRegistrySingleton::Singleton != (IAssetRegistry *)0x0)
    goto LAB_142bb2bb1;
  }
  else {
LAB_142bb2bb1:
    pUVar9 = (UAssetRegistryImpl *)(AssetRegistry::Private::IAssetRegistrySingleton::Singleton + -5)
    ;
  }
  this_00 = ::operator_new(0x2e0);
  pUVar7 = pUVar10;
  if (this_00 != (FAssetDataGatherer *)0x0) {
    pUVar7 = (UAssetRegistryImpl *)FAssetDataGatherer::FAssetDataGatherer(this_00,pUVar9);
  }
  if (pTVar1 == (TUniquePtr<FAssetDataGatherer,TDefaultDelete<FAssetDataGatherer>_> *)local_18) {
    if (pUVar7 == (UAssetRegistryImpl *)0x0) goto LAB_142bb2c09;
    lVar8 = *(longlong *)&pUVar7->_padding_;
  }
  else {
    pUVar9 = (UAssetRegistryImpl *)pTVar1->Ptr;
    pTVar1->Ptr = (FAssetDataGatherer *)pUVar7;
    if (pUVar9 == (UAssetRegistryImpl *)0x0) goto LAB_142bb2c09;
    lVar8 = *(longlong *)&pUVar9->_padding_;
    pUVar7 = pUVar9;
  }
  (**(code **)(lVar8 + 0x28))(pUVar7,1);
LAB_142bb2c09:
  pUVar9 = ::operator_new(0xf0);
  if (pUVar9 != (UAssetRegistryImpl *)0x0) {
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x8 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x18 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x30 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x38 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x18 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x28 = 0;
    (pUVar9->GuardedData).State.CachedAssets.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
    ;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.HashSize = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x18 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x28 = 0;
    *(undefined8 *)&pUVar9->_padding_ = 0;
    (((FCriticalSectionQueryable *)&pUVar9->_padding_)->Inner).CriticalSection.Opaque1[0] =
         (void *)0x0;
    pUVar9->_padding_ = 0;
    *(undefined4 *)&pUVar9->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = 0x80;
    *(undefined4 *)&(pUVar9->GuardedData).AssetCollisionEvent = 0xffffffff;
    *(undefined4 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x4 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x10 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x20 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).AssetCollisionEvent.field_0x28 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.Elements = 0;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x8 = 0;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0xc = 0x80;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x10 = 0xffffffff;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x14 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x20 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssets.Elements.field_0x30 = 0;
    pFVar3 = &pUVar9->GuardedData;
    (pFVar3->State).CachedAssets.Hash.InlineData[0] = '\0';
    (pFVar3->State).CachedAssets.Hash.InlineData[1] = '\0';
    (pFVar3->State).CachedAssets.Hash.InlineData[2] = '\0';
    (pFVar3->State).CachedAssets.Hash.InlineData[3] = '\0';
    (pFVar3->State).CachedAssets.Hash._padding_ = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName = 0;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x8 = 0;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0xc = 0x80;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x10 = 0xffffffff;
    *(undefined4 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x14 = 0;
    *(undefined8 *)&(pUVar9->GuardedData).State.CachedAssetsByPackageName.field_0x20 = 0;
    pUVar10 = pUVar9;
  }
  pUVar9 = (UAssetRegistryImpl *)(this->GatherDependencyDataScratchPad).Ptr;
  if (pUVar9 != pUVar10) {
    (this->GatherDependencyDataScratchPad).Ptr = (FGatherDependencyDataScratchpad *)pUVar10;
    TDefaultDelete<UE::AssetRegistry::DependsNode::FGatherDependencyDataScratchpad>::operator()
              ((TDefaultDelete<UE::AssetRegistry::DependsNode::FGatherDependencyDataScratchpad> *)
               &this->GatherDependencyDataScratchPad,(FGatherDependencyDataScratchpad *)pUVar9);
  }
  this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
  pIVar11 = IPluginManager::Get();
  iVar6 = (**(code **)((longlong)*pIVar11 + 0x28))(pIVar11);
  if ((iVar6 != 9) && (7 < iVar6)) {
    ReadScriptPackages(this);
  }
  return true;
}

// UpdateAssetData @ 142bb4b00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData
          (FAssetRegistryImpl *this,FEventContext *param_1,FAssetData *param_2,FAssetData *param_3,
          bool param_4)

{
  int *piVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FAssetDataTagMapSharedView *pFVar10;
  FNameEntryId FVar11;
  ForElementType<FSetElementId> FVar12;
  FAssetData *this_00;
  bool bVar13;
  bool local_res8 [8];
  FAssetDataTagMapSharedView_u_0 local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FAssetDataTagMap local_58;
  char local_40;
  undefined1 local_38 [16];
  
  FVar2 = (param_2->AssetClassPath).AssetName;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_2->AssetClassPath).PackageName;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar3.Number;
  if (*(int *)&(this->ClassGeneratorNames).Elements.field_0x8 !=
      *(int *)&(this->ClassGeneratorNames).Elements.field_0x34) {
    FVar12 = (this->ClassGeneratorNames).Hash.SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->ClassGeneratorNames).Hash;
    }
    iVar8 = *(int *)((longlong)FVar12 +
                    (ulonglong)
                    ((this->ClassGeneratorNames).HashSize - 1U &
                    (uVar7 * 0x40 + -0x61c88647 + uVar6 + FVar2.Number + (uVar7 >> 2) ^ uVar7)) * 4)
    ;
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->ClassGeneratorNames).Elements;
      do {
        lVar9 = (longlong)iVar8;
        if ((*(FName *)(lVar4 + lVar9 * 0x18) == (param_2->AssetClassPath).PackageName) &&
           (*(FName *)(lVar4 + 8 + lVar9 * 0x18) == (param_2->AssetClassPath).AssetName)) {
          if (iVar8 != -1) {
            FAssetData::GetTagValueRef<FString>
                      (param_2,&local_88,FBlueprintTags::GeneratedClassPath);
            FAssetData::GetTagValueRef<FString>
                      (param_2,(FString *)&local_58,FBlueprintTags::ParentClassPath);
            FAssetData::GetTagValueRef<FString>
                      (param_3,&local_a8,FBlueprintTags::GeneratedClassPath);
            FAssetData::GetTagValueRef<FString>(param_3,&local_98,FBlueprintTags::ParentClassPath);
            if (local_88.Data.ArrayNum == local_a8.Data.ArrayNum) {
              if (1 < local_88.Data.ArrayNum) {
                iVar8 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                                   (wchar_t *)local_a8.Data.AllocatorInstance.Data);
                bVar13 = iVar8 == 0;
                goto LAB_142bb4c6e;
              }
LAB_142bb4c75:
              if ((int)local_58._padding_ == local_98.Data.ArrayNum) {
                if (1 < (int)local_58._padding_) {
                  iVar8 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_58._padding_,
                                     (wchar_t *)local_98.Data.AllocatorInstance.Data);
                  bVar13 = iVar8 == 0;
                  goto LAB_142bb4cab;
                }
              }
              else {
                bVar13 = local_98.Data.ArrayNum + (int)local_58._padding_ == 1;
LAB_142bb4cab:
                if (!bVar13) goto LAB_142bb4cb6;
              }
            }
            else {
              bVar13 = local_a8.Data.ArrayNum + local_88.Data.ArrayNum == 1;
LAB_142bb4c6e:
              if (bVar13) goto LAB_142bb4c75;
LAB_142bb4cb6:
              if (1 < local_88.Data.ArrayNum) {
                iVar8 = local_88.Data.ArrayNum + -1;
                if (local_88.Data.ArrayNum == 0) {
                  iVar8 = 0;
                }
                if ((iVar8 != 4) ||
                   (iVar8 = FGenericPlatformStricmp::Strnicmp
                                      (L"None",(wchar_t *)local_88.Data.AllocatorInstance.Data,4),
                   iVar8 != 0)) {
                  local_68.PackageName = (FName)local_88.Data.AllocatorInstance.Data;
                  local_78.PackageName.ComparisonIndex.Value = 0;
                  local_78.PackageName.Number = 0;
                  local_78.AssetName.ComparisonIndex.Value = 0;
                  local_78.AssetName.Number = 0;
                  local_38._8_4_ = local_88.Data.ArrayNum - 1;
                  if (local_88.Data.ArrayNum == 0) {
                    local_38._8_4_ = 0;
                  }
                  local_68.AssetName.ComparisonIndex.Value = local_38._8_4_;
                  local_38._0_8_ = local_88.Data.AllocatorInstance.Data;
                  local_38._12_4_ = local_68.AssetName.Number;
                  FTopLevelAssetPath::TrySetPath(&local_78,(TStringView<wchar_t> *)local_38);
                  if (local_78.PackageName == (FName)0x0) {
                    local_res18.Loose = (FAssetDataTagMap *)&local_88;
                    bVar13 = `UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l12::
                             <lambda_1>::operator()(&local_res18);
                    if (!bVar13) goto LAB_142bb4d70;
                  }
                  TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                  ::Remove((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                            *)&this->CachedBPInheritanceMap,&local_78);
                  (this->TempCachedInheritanceBuffer).bDirty = true;
                }
              }
LAB_142bb4d70:
              if ((1 < local_a8.Data.ArrayNum) && (1 < local_98.Data.ArrayNum)) {
                iVar8 = local_a8.Data.ArrayNum + -1;
                if (local_a8.Data.ArrayNum == 0) {
                  iVar8 = 0;
                }
                if ((iVar8 != 4) ||
                   (iVar8 = FGenericPlatformStricmp::Strnicmp
                                      (L"None",(wchar_t *)local_a8.Data.AllocatorInstance.Data,4),
                   iVar8 != 0)) {
                  iVar8 = local_98.Data.ArrayNum + -1;
                  if (local_98.Data.ArrayNum == 0) {
                    iVar8 = 0;
                  }
                  if ((iVar8 != 4) ||
                     (iVar8 = FGenericPlatformStricmp::Strnicmp
                                        (L"None",(wchar_t *)local_98.Data.AllocatorInstance.Data,4),
                     iVar8 != 0)) {
                    local_78.PackageName = (FName)local_a8.Data.AllocatorInstance.Data;
                    local_68.PackageName.ComparisonIndex.Value = 0;
                    local_68.PackageName.Number = 0;
                    local_38._8_4_ = local_a8.Data.ArrayNum - 1;
                    if (local_a8.Data.ArrayNum == 0) {
                      local_38._8_4_ = 0;
                    }
                    local_68.AssetName.ComparisonIndex.Value = 0;
                    local_68.AssetName.Number = 0;
                    local_78.AssetName.ComparisonIndex.Value = local_38._8_4_;
                    local_38._0_8_ = local_a8.Data.AllocatorInstance.Data;
                    local_38._12_4_ = local_78.AssetName.Number;
                    FTopLevelAssetPath::TrySetPath(&local_68,(TStringView<wchar_t> *)local_38);
                    local_78.PackageName.ComparisonIndex.Value = 0;
                    local_78.PackageName.Number = 0;
                    local_78.AssetName.ComparisonIndex.Value = 0;
                    local_78.AssetName.Number = 0;
                    FVar11.Value = local_98.Data.ArrayNum - 1;
                    if (local_98.Data.ArrayNum == 0) {
                      FVar11.Value = 0;
                    }
                    local_38._8_4_ = FVar11.Value;
                    local_38._0_8_ = local_98.Data.AllocatorInstance.Data;
                    FTopLevelAssetPath::TrySetPath(&local_78,(TStringView<wchar_t> *)local_38);
                    if ((local_68.PackageName == (FName)0x0) || (local_78.PackageName == (FName)0x0)
                       ) {
                      local_38._0_8_ = &local_a8;
                      local_38._8_8_ = &local_98;
                      bVar13 = `UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l18::
                               <lambda_2>::operator()(local_38);
                      if (bVar13) goto LAB_142bb4e8b;
                    }
                    else {
LAB_142bb4e8b:
                      local_38._0_4_ = local_78.PackageName.ComparisonIndex.Value;
                      local_38._4_4_ = local_78.PackageName.Number;
                      local_38._8_4_ = local_78.AssetName.ComparisonIndex.Value;
                      local_38._12_4_ = local_78.AssetName.Number;
                      TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                      ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
                                ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                                  *)&this->CachedBPInheritanceMap,&local_68,
                                 (FTopLevelAssetPath *)local_38);
                    }
                    (this->TempCachedInheritanceBuffer).bDirty = true;
                  }
                }
              }
            }
            if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if ((TTuple<FName,FString> *)local_58._padding_ != (TTuple<FName,FString> *)0x0) {
              FMemory::Free((void *)local_58._padding_);
            }
            if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (param_4) {
    local_38._8_8_ = &local_58;
    local_40 = '\0';
    local_38._0_8_ = param_3;
    FAssetDataTagMapSharedView::
    ForEach<_UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData_::__l23::<lambda_3>_>
              (&param_2->TagsAndValues,(<lambda_3> *)local_38);
    if (local_40 != '\0') {
      pFVar10 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                          ((FAssetDataTagMapSharedView *)&local_res18.Fixed,&local_58);
      FAssetDataTagMapSharedView::operator=(&param_3->TagsAndValues,pFVar10);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)&local_res18.Fixed);
      if ((local_40 != '\0') &&
         (DestructItems<TTuple<FName,FString>,int>
                    ((TTuple<FName,FString> *)local_58._padding_,(int)local_58._padding_),
         (TTuple<FName,FString> *)local_58._padding_ != (TTuple<FName,FString> *)0x0)) {
        FMemory::Free((void *)local_58._padding_);
      }
    }
  }
  FAssetRegistryState::UpdateAssetData(&this->State,param_2,param_3,local_res8);
  if (local_res8[0] != false) {
    iVar8 = (param_1->AssetEvents).ArrayNum;
    piVar1 = &(param_1->AssetEvents).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,&(param_1->AssetEvents).AllocatorInstance,piVar1);
    }
    pFVar5 = (param_1->AssetEvents).AllocatorInstance.Data;
    (param_1->AssetEvents).ArrayNum = iVar8 + 1;
    this_00 = (FAssetData *)(pFVar5 + (longlong)iVar8 * 0x70);
    FAssetData::FAssetData(this_00,param_2);
    this_00[1].PackageName.ComparisonIndex.Value = 2;
  }
  return;
}

// UpdateInheritanceBuffer @ 142bb4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::UpdateInheritanceBuffer
          (FAssetRegistryImpl *this,FClassInheritanceBuffer *param_1)

{
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  ForAnyElementType *pFVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  UStruct *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  longlong *plVar11;
  FName FVar12;
  FName FVar13;
  TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  FAssetRegistryImpl *pFVar14;
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar15;
  bool bVar16;
  uint uVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  FTopLevelAssetPath *pFVar19;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar20;
  TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_> *pTVar21;
  ulong64 uVar22;
  byte bVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  ForElementType<unsigned_int> FVar29;
  undefined1 *puVar30;
  uint *puVar31;
  FClassInheritanceBuffer *pFVar32;
  uint uVar33;
  FProperty *pFVar34;
  TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
  *pTVar35;
  undefined8 *puVar36;
  bool bVar37;
  undefined1 auStackY_428 [32];
  undefined1 local_3d7;
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  undefined1 local_3d3 [3];
  uint local_3d0;
  FClassInheritanceBuffer *local_3c8;
  TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
  *local_3c0;
  undefined8 uStack_3b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b0;
  uint uStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  undefined4 uStack_39c;
  int local_398;
  undefined4 uStack_394;
  FTopLevelAssetPath local_390;
  FLLMScope local_380 [2];
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 local_350;
  ulonglong local_348;
  FTopLevelAssetPath local_340;
  ForElementType<unsigned_int> local_330;
  int local_328;
  uint uStack_324;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_320;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  undefined4 uStack_30c;
  FTopLevelAssetPath local_308;
  TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
  *local_2f8;
  FTopLevelAssetPath local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a0;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  longlong *local_268;
  FMemScope local_260;
  TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_258;
  FAssetRegistryImpl *local_250;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  undefined1 local_218 [12];
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  longlong *local_188;
  longlong lStack_180;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  TRangedForIterator local_158;
  FTopLevelAssetPath local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  undefined1 *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  bVar37 = -1 < CpuChannel->Enabled;
  local_3c8 = param_1;
  local_250 = this;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9491,"UAssetRegistryImpl::UpdateTemporaryCaches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x2513);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9491);
  }
  FLLMScope::FLLMScope(local_380,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_260,AssetRegistry,true);
  GetAllDerivedClasses
            ((TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
              *)local_98);
  local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_2e0._padding_._0_4_ = 0;
  local_348 = 1;
  iVar27 = 1;
  local_2e0._padding_._4_4_ = 1;
  local_2e0.UnvisitedBitMask = 0xffffffff;
  local_2e0.CurrentBitIndex = 0;
  local_2e0.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
  }
  TStack_370._padding_ = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
  local_378 = (TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
               *)local_98;
  TStack_370._16_8_ = CONCAT44(local_2e0.CurrentBitIndex,local_2e0.UnvisitedBitMask);
  TStack_370._24_8_ = CONCAT44(local_2e0._28_4_,local_2e0.BaseBitIndex);
  local_350._0_4_ = local_98._8_4_ - local_64;
  TStack_370.Array = local_2e0.Array;
  local_208 = local_2e0.Array;
  uStack_1ec = local_350._4_4_;
  local_218._0_8_ = local_378;
  unique0x100020d4 = TStack_370._padding_;
  uStack_200 = TStack_370._16_8_;
  local_1f8 = TStack_370._24_8_;
  iStack_1f0 = (int)local_350;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_118,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70
                      );
  local_378 = (TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
               *)local_98;
  TStack_370._padding_ = pTVar18->_padding_;
  TStack_370.Array = pTVar18->Array;
  TStack_370.UnvisitedBitMask = pTVar18->UnvisitedBitMask;
  TStack_370.CurrentBitIndex = pTVar18->CurrentBitIndex;
  TStack_370._24_8_ = *(undefined8 *)&pTVar18->BaseBitIndex;
  local_350._0_4_ = local_98._8_4_ - local_64;
  local_158.InitialNum = local_98._8_4_ - local_64;
  local_158._44_4_ = local_350._4_4_;
  local_158._padding_ = (longlong)local_378;
  local_158._padding_ = TStack_370._padding_;
  local_158._padding_ = (longlong)TStack_370.Array;
  local_158._padding_ = TStack_370._16_8_;
  local_158._padding_ = TStack_370._24_8_;
  bVar16 = TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_218,&local_158);
  if (bVar16) {
    do {
      iVar27 = iVar27 + (*(int *)((longlong)uStack_200._4_4_ * 0x60 + 0x10 +
                                 *(longlong *)local_218._0_8_) -
                        *(int *)((longlong)uStack_200._4_4_ * 0x60 + 0x3c +
                                *(longlong *)local_218._0_8_));
      uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 & ~uStack_20c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_218 + 8));
      bVar16 = TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_218,&local_158);
    } while (bVar16);
  }
  TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
             *)param_1,
            (*(int *)&(this->CachedBPInheritanceMap).field_0x8 -
            *(int *)&(this->CachedBPInheritanceMap).field_0x34) + iVar27);
  pTVar35 = &this->CachedBPInheritanceMap;
  local_2f8 = pTVar35;
  if (param_1 != (FClassInheritanceBuffer *)pTVar35) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(param_1->InheritanceMap).field_0x38,
               (int *)&(param_1->InheritanceMap).field_0x48,
               (ForElementType<FSetElementId> *)&(this->CachedBPInheritanceMap).field_0x38,
               *(int *)&(this->CachedBPInheritanceMap).field_0x48);
    iVar27 = *(int *)&(this->CachedBPInheritanceMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)param_1,iVar27);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar27,(ForAnyElementType *)param_1,
               (int *)&(param_1->InheritanceMap).field_0x8,
               (int *)&(param_1->InheritanceMap).field_0xc);
    puVar30 = &(this->CachedBPInheritanceMap).field_0x10;
    puVar25 = &(param_1->InheritanceMap).field_0x10;
    *(undefined4 *)&(param_1->InheritanceMap).field_0x30 =
         *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x30;
    *(undefined4 *)&(param_1->InheritanceMap).field_0x34 =
         *(undefined4 *)&(this->CachedBPInheritanceMap).field_0x34;
    if (puVar25 != puVar30) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar25,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar30);
    }
    if (iVar27 != 0) {
      memcpy(*(void **)&param_1->InheritanceMap,*(void **)&pTVar35->field_0x0,
             (longlong)iVar27 * 0x28);
    }
  }
  local_2f0.PackageName.ComparisonIndex.Value = 0;
  local_2f0.PackageName.Number = 0;
  local_2f0.AssetName.ComparisonIndex.Value = 0;
  local_2f0.AssetName.Number = 0;
  pFVar19 = GetClassPathObject(&local_128);
  TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
  ::Emplace<FTopLevelAssetPath,FTopLevelAssetPath>
            ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
              *)param_1,pFVar19,&local_2f0);
  pTVar1 = &param_1->ReverseInheritanceMap;
  local_2c0._padding_._4_4_ = 1;
  puVar30 = &(param_1->ReverseInheritanceMap).field_0x10;
  local_2c0._padding_._0_4_ = 0;
  local_2c0.UnvisitedBitMask = 0xffffffff;
  local_2c0.CurrentBitIndex = 0;
  local_2c0.BaseBitIndex = 0;
  local_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
  local_258 = (TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (*(int *)&(param_1->ReverseInheritanceMap).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
  }
  TStack_370._padding_ = CONCAT44(local_2c0._padding_._4_4_,(undefined4)local_2c0._padding_);
  TStack_370.CurrentBitIndex = local_2c0.CurrentBitIndex;
  TStack_370.UnvisitedBitMask = local_2c0.UnvisitedBitMask;
  TStack_370._28_4_ = local_2c0._28_4_;
  TStack_370.BaseBitIndex = local_2c0.BaseBitIndex;
  TStack_370.Array = local_2c0.Array;
  local_350 = CONCAT44(local_350._4_4_,
                       *(int *)&(param_1->ReverseInheritanceMap).field_0x8 -
                       *(int *)&(param_1->ReverseInheritanceMap).field_0x34);
  TStack_1e0.Array = local_2c0.Array;
  uStack_1c0 = local_350;
  local_378 = pTVar1;
  local_1e8 = pTVar1;
  TStack_1e0._padding_ = TStack_370._padding_;
  TStack_1e0._16_8_ = TStack_370._16_8_;
  TStack_1e0._24_8_ = TStack_370._24_8_;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar30,
                       *(int *)&(param_1->ReverseInheritanceMap).field_0x28);
  lStack_180 = pTVar18->_padding_;
  pTVar10 = pTVar18->Array;
  uVar6._0_4_ = pTVar18->UnvisitedBitMask;
  uVar6._4_4_ = pTVar18->CurrentBitIndex;
  uStack_168 = *(undefined8 *)&pTVar18->BaseBitIndex;
  pTStack_178 = pTVar10;
  uStack_170 = uVar6;
  while( true ) {
    pTVar15 = local_1e8;
    if (*(int *)(&local_1e8->field_0x0 + 8) - *(int *)(&local_1e8->field_0x0 + 0x34) !=
        (int)uStack_1c0) {
      local_3d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d7);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar6._4_4_) && (TStack_1e0.Array == pTVar10)) &&
       (pTVar15 == pTVar1)) break;
    pFVar2 = (ForAnyElementType *)
             (*(longlong *)&pTVar15->field_0x0 + ((longlong)TStack_1e0.CurrentBitIndex * 5 + 2) * 8)
    ;
    iVar27 = *(int *)((longlong)&pFVar2[1].Data + 4);
    *(undefined4 *)&pFVar2[1].Data = 0;
    if (iVar27 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  }
  TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)pTVar1,local_98._8_4_ - local_64);
  local_2a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_2a0._padding_._0_4_ = 0;
  local_2a0._padding_._4_4_ = 1;
  local_2a0.UnvisitedBitMask = 0xffffffff;
  local_2a0.CurrentBitIndex = 0;
  local_2a0.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a0);
  }
  uVar17 = local_70;
  uStack_3b8 = CONCAT44(local_2a0._padding_._4_4_,(undefined4)local_2a0._padding_);
  local_3c0 = (TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
               *)local_98;
  iStack_3a4 = local_2a0.CurrentBitIndex;
  uStack_3a8 = local_2a0.UnvisitedBitMask;
  uStack_39c = local_2a0._28_4_;
  iStack_3a0 = local_2a0.BaseBitIndex;
  bVar23 = (byte)local_70 & 0x1f;
  local_398 = local_98._8_4_ - local_64;
  uVar26 = local_70 & 0xffffffe0;
  pTStack_3b0 = local_2a0.Array;
  uStack_324 = (uint)local_348 << bVar23;
  iVar27 = (int)local_70 >> 5;
  uVar33 = -1 << bVar23;
  pTStack_320 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_314 = local_70;
  uStack_190 = CONCAT44(uStack_394,local_398);
  TStack_1b0.Array = local_2a0.Array;
  local_328 = iVar27;
  local_318 = uVar33;
  uStack_310 = uVar26;
  local_1b8 = (longlong *)local_3c0;
  TStack_1b0._padding_ = uStack_3b8;
  TStack_1b0._16_8_ = _uStack_3a8;
  TStack_1b0._24_8_ = _iStack_3a0;
  if (((int)local_70 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (uVar17 != local_70) {
    puVar30 = local_98 + 0x10;
    if (local_78 != (undefined1 *)0x0) {
      puVar30 = local_78;
    }
    uVar33 = uVar33 & *(uint *)(puVar30 + (longlong)iVar27 * 4);
    while (uVar33 == 0) {
      uStack_310 = uVar26 + 0x20;
      local_328 = iVar27 + 1;
      uStack_314 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_328)
      goto LAB_142bb55e4;
      uVar33 = *(uint *)(puVar30 + (longlong)iVar27 * 4 + 4);
      local_318 = 0xffffffff;
      uVar26 = uStack_310;
      iVar27 = local_328;
    }
    uStack_324 = -uVar33 & uVar33;
    uVar5 = (ulonglong)uStack_324 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_280 = (int)lVar24;
    uStack_314 = local_280 + -1 + uVar26;
    if ((int)local_70 < (int)uStack_314) {
      uStack_314 = local_70;
    }
  }
LAB_142bb55e4:
  uStack_3b8 = CONCAT44(uStack_324,local_328);
  local_3c0 = (TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
               *)local_98;
  iStack_3a4 = uStack_314;
  uStack_3a8 = local_318;
  uStack_39c = uStack_30c;
  iStack_3a0 = uStack_310;
  local_398 = local_98._8_4_ - local_64;
  pTStack_3b0 = pTStack_320;
  uStack_160 = CONCAT44(uStack_394,local_398);
  pTStack_178 = pTStack_320;
  pFVar32 = param_1;
  local_188 = (longlong *)local_3c0;
  lStack_180 = uStack_3b8;
  uStack_170 = _uStack_3a8;
  uStack_168 = _iStack_3a0;
  while( true ) {
    plVar11 = local_1b8;
    if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
      local_3d6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d6);
    }
    pFVar14 = local_250;
    pTVar35 = local_2f8;
    if (((TStack_1b0.CurrentBitIndex == uStack_170._4_4_) && (TStack_1b0.Array == pTStack_178)) &&
       (plVar11 == local_188)) break;
    puVar36 = (undefined8 *)((longlong)TStack_1b0.CurrentBitIndex * 0x60 + *plVar11);
    UStruct::GetStructPathName((UStruct *)*puVar36,&local_390);
    FVar13 = local_390.AssetName;
    uVar33 = ::GetTypeHash(local_390.AssetName.ComparisonIndex.Value);
    FVar12 = local_390.PackageName;
    uVar26 = ::GetTypeHash(local_390.PackageName.ComparisonIndex.Value);
    uVar26 = uVar26 + FVar12.Number;
    uVar26 = uVar26 * 0x40 + -0x61c88647 + FVar13.Number + uVar33 + (uVar26 >> 2) ^ uVar26;
    if (*(int *)&(pFVar32->ReverseInheritanceMap).field_0x8 !=
        *(int *)&(param_1->ReverseInheritanceMap).field_0x34) {
      puVar30 = *(undefined1 **)&(param_1->ReverseInheritanceMap).field_0x40;
      puVar25 = &(param_1->ReverseInheritanceMap).field_0x38;
      if (puVar30 != (undefined1 *)0x0) {
        puVar25 = puVar30;
      }
      iVar27 = *(int *)(puVar25 +
                       (ulonglong)
                       (*(int *)&(param_1->ReverseInheritanceMap).field_0x48 - 1U & uVar26) * 4);
      if (iVar27 != -1) {
        do {
          lVar24 = *(longlong *)&pTVar1->field_0x0 + (longlong)iVar27 * 0x28;
          if ((*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar27 * 0x28) ==
               local_390.PackageName) && (*(FName *)(lVar24 + 8) == local_390.AssetName)) {
            if ((iVar27 != -1) && (lVar24 != 0)) {
              pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)(lVar24 + 0x10);
              goto LAB_142bb5757;
            }
            break;
          }
          iVar27 = *(int *)(lVar24 + 0x20);
        } while (iVar27 != -1);
      }
    }
    pTVar20 = TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<FTopLevelAssetPath_const_&>
                        ((TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                          *)pTVar1,uVar26,&local_390);
LAB_142bb5757:
    uVar33 = *(int *)(puVar36 + 2) - *(int *)((longlong)puVar36 + 0x3c);
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
    }
    if (pTVar20->ArrayMax < (int)uVar33) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar33,&pTVar20->AllocatorInstance,pTVar20->ArrayNum,&pTVar20->ArrayMax);
    }
    iVar27 = *(int *)(puVar36 + 6);
    local_330 = (ForElementType<unsigned_int>)(puVar36 + 3);
    local_3c0 = (TMap<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                 *)(puVar36 + 1);
    iVar28 = 0;
    iStack_3a0 = 0;
    uVar33 = (uint)local_348;
    iStack_3a4 = 0;
    if (iVar27 != 0) {
      FVar29 = local_330;
      if (*(ForElementType<unsigned_int> *)(puVar36 + 5) != (ForElementType<unsigned_int>)0x0) {
        FVar29 = *(ForElementType<unsigned_int> *)(puVar36 + 5);
      }
      uVar26 = *(uint *)FVar29;
      iStack_3a0 = 0;
      while (uVar26 == 0) {
        lVar24 = (longlong)iVar28;
        iStack_3a0 = iStack_3a0 + 0x20;
        iVar28 = iVar28 + 1;
        iStack_3a4 = iVar27;
        if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_142bb5826;
        uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar24];
      }
      uVar33 = -uVar26 & uVar26;
      uVar5 = (ulonglong)uVar33 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_27c = (int)lVar24;
      iStack_3a4 = local_27c + -1 + iStack_3a0;
      if (iVar27 < iStack_3a4) {
        iStack_3a4 = iVar27;
      }
    }
LAB_142bb5826:
    pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar36 + 3);
    local_398 = *(int *)(puVar36 + 2) - *(int *)((longlong)puVar36 + 0x3c);
    uVar26 = *(uint *)(puVar36 + 6);
    uStack_3b8 = CONCAT44(uVar33,iVar28);
    uVar33 = uVar26 & 0xffffffe0;
    uStack_3a8 = 0xffffffff;
    uStack_39c = local_9c;
    TStack_240._padding_ = uStack_3b8;
    iVar28 = (int)uVar26 >> 5;
    uStack_220 = CONCAT44(uStack_394,local_398);
    TStack_240.BaseBitIndex = iStack_3a0;
    TStack_240._28_4_ = local_9c;
    TStack_240.UnvisitedBitMask = 0xffffffff;
    TStack_240.CurrentBitIndex = iStack_3a4;
    local_3d0 = uVar26;
    local_268 = (longlong *)local_3c0;
    local_248 = (longlong *)local_3c0;
    TStack_240.Array = pTStack_3b0;
    if ((((int)uVar26 < 0) || (iVar27 < (int)uVar26)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar17 = *(int *)((longlong)local_330 + 0x18);
    pFVar32 = local_3c8;
    if (uVar26 != uVar17) {
      FVar29 = local_330;
      if (*(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar29 = *(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10);
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar28 * 4);
      while (uVar26 == 0) {
        lVar24 = (longlong)iVar28;
        uVar33 = uVar33 + 0x20;
        iVar28 = iVar28 + 1;
        uVar26 = uVar17;
        local_3d0 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_142bb5960;
        uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar24];
      }
      uVar5 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_278 = (int)lVar24;
      uVar26 = local_278 + -1 + uVar33;
      local_3d0 = uVar26;
      if ((int)uVar17 < (int)uVar26) {
        uVar26 = uVar17;
        local_3d0 = uVar17;
      }
    }
LAB_142bb5960:
    while( true ) {
      plVar11 = local_248;
      if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
        local_3d5 = 0;
        `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d5);
      }
      if (((TStack_240.CurrentBitIndex == uVar26) &&
          ((ForElementType<unsigned_int>)TStack_240.Array == local_330)) && (plVar11 == local_268))
      break;
      this_00 = *(UStruct **)(*plVar11 + (longlong)TStack_240.CurrentBitIndex * 0x10);
      if ((this_00[1]._padding_ & -0x7e00000000000000) == 0) {
        UStruct::GetStructPathName(this_00,&local_340);
        pFVar19 = (FTopLevelAssetPath *)(pTVar20->AllocatorInstance).Data;
        if (((pFVar19 <= &local_340) && (&local_340 < pFVar19 + pTVar20->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar27 = pTVar20->ArrayNum;
        if (iVar27 == pTVar20->ArrayMax) {
          iVar27 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
        }
        pTVar20->ArrayNum = iVar27 + 1;
        pFVar3 = (FName *)((pTVar20->AllocatorInstance).Data + (longlong)iVar27 * 0x10);
        *pFVar3 = local_340.PackageName;
        pFVar3[1] = local_340.AssetName;
        TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
        ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
                  ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                    *)pFVar32,&local_340,&local_390);
        iVar27 = *(int *)&this_00[2].PostConstructLink;
        if (iVar27 != 0) {
          pFVar34 = this_00[2].DestructorLink;
          plVar11 = &pFVar34->_padding_;
          while( true ) {
            if (*(int *)&this_00[2].PostConstructLink != iVar27) {
              local_3d4 = 0;
              `TCheckedPointerIterator<FImplementedInterface,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_3d4);
            }
            FVar12 = local_390.AssetName;
            if (pFVar34 == (FProperty *)(plVar11 + (longlong)iVar27 * 2)) break;
            if ((UStruct *)pFVar34->_padding_ != (UStruct *)0x0) {
              UStruct::GetStructPathName((UStruct *)pFVar34->_padding_,&local_308);
              FVar13 = local_308.AssetName;
              uVar33 = ::GetTypeHash(local_308.AssetName.ComparisonIndex.Value);
              FVar12 = local_308.PackageName;
              uVar26 = ::GetTypeHash(local_308.PackageName.ComparisonIndex.Value);
              uVar26 = uVar26 + FVar12.Number;
              uVar26 = uVar26 * 0x40 + -0x61c88647 + FVar13.Number + uVar33 + (uVar26 >> 2) ^ uVar26
              ;
              if (*(int *)&(local_3c8->ReverseInheritanceMap).field_0x8 !=
                  *(int *)&(param_1->ReverseInheritanceMap).field_0x34) {
                puVar30 = *(undefined1 **)&(param_1->ReverseInheritanceMap).field_0x40;
                puVar25 = &(param_1->ReverseInheritanceMap).field_0x38;
                if (puVar30 != (undefined1 *)0x0) {
                  puVar25 = puVar30;
                }
                iVar28 = *(int *)(puVar25 +
                                 (ulonglong)
                                 (*(int *)&(param_1->ReverseInheritanceMap).field_0x48 - 1U & uVar26
                                 ) * 4);
                if (iVar28 != -1) {
                  do {
                    lVar24 = *(longlong *)&pTVar1->field_0x0 + (longlong)iVar28 * 0x28;
                    if ((*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar28 * 0x28) ==
                         local_308.PackageName) && (*(FName *)(lVar24 + 8) == local_308.AssetName))
                    {
                      if ((iVar28 != -1) && (lVar24 != 0)) {
                        pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)
                                  (lVar24 + 0x10);
                        goto LAB_142bb5b97;
                      }
                      break;
                    }
                    iVar28 = *(int *)(lVar24 + 0x20);
                  } while (iVar28 != -1);
                }
              }
              pTVar20 = TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                        ::EmplaceByHash<FTopLevelAssetPath>
                                  ((TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                                    *)pTVar1,uVar26,&local_308);
LAB_142bb5b97:
              pFVar19 = (FTopLevelAssetPath *)(pTVar20->AllocatorInstance).Data;
              if (((pFVar19 <= &local_340) && (&local_340 < pFVar19 + pTVar20->ArrayMax)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar28 = pTVar20->ArrayNum;
              if (iVar28 == pTVar20->ArrayMax) {
                iVar28 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
              }
              pTVar20->ArrayNum = iVar28 + 1;
              pFVar3 = (FName *)((pTVar20->AllocatorInstance).Data + (longlong)iVar28 * 0x10);
              *pFVar3 = local_340.PackageName;
              pFVar3[1] = local_340.AssetName;
            }
            pFVar34 = (FProperty *)&pFVar34->_padding_;
          }
          uVar33 = ::GetTypeHash(local_390.AssetName.ComparisonIndex.Value);
          FVar13 = local_390.PackageName;
          uVar26 = ::GetTypeHash(local_390.PackageName.ComparisonIndex.Value);
          uVar26 = uVar26 + FVar13.Number;
          if (*(int *)&(local_3c8->ReverseInheritanceMap).field_0x8 !=
              *(int *)&(param_1->ReverseInheritanceMap).field_0x34) {
            puVar30 = *(undefined1 **)&(param_1->ReverseInheritanceMap).field_0x40;
            puVar25 = &(param_1->ReverseInheritanceMap).field_0x38;
            if (puVar30 != (undefined1 *)0x0) {
              puVar25 = puVar30;
            }
            iVar27 = *(int *)(puVar25 +
                             (ulonglong)
                             (*(int *)&(param_1->ReverseInheritanceMap).field_0x48 - 1U &
                             (uVar26 * 0x40 + -0x61c88647 + FVar12.Number + uVar33 + (uVar26 >> 2) ^
                             uVar26)) * 4);
            if (iVar27 != -1) {
              do {
                lVar24 = *(longlong *)&pTVar1->field_0x0 + (longlong)iVar27 * 0x28;
                if ((*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar27 * 0x28) ==
                     local_390.PackageName) && (*(FName *)(lVar24 + 8) == local_390.AssetName)) {
                  if (iVar27 != -1) {
                    pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)
                              (lVar24 + 0x10);
                    if (lVar24 == 0) {
                      pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0;
                    }
                    pFVar32 = local_3c8;
                    if (pTVar20 != (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0)
                    goto LAB_142bb5d60;
                    goto LAB_142bb5d35;
                  }
                  break;
                }
                iVar27 = *(int *)(lVar24 + 0x20);
              } while (iVar27 != -1);
            }
          }
          pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0;
LAB_142bb5d35:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputSubclasses",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x2544,L"");
          pFVar32 = local_3c8;
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
LAB_142bb5d60:
      TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
      uVar26 = local_3d0;
    }
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
    pFVar32 = local_3c8;
  }
  iVar28 = 0;
  puVar30 = &(local_250->CachedBPInheritanceMap).field_0x10;
  iVar27 = *(int *)&(local_250->CachedBPInheritanceMap).field_0x28;
  iStack_3a4 = iVar28;
  iStack_3a0 = iVar28;
  if (iVar27 != 0) {
    puVar31 = *(uint **)&(local_250->CachedBPInheritanceMap).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar30;
    }
    uVar33 = *puVar31;
    iStack_3a0 = 0;
    iVar28 = 0;
    while (uVar33 == 0) {
      lVar24 = (longlong)iVar28;
      iStack_3a0 = iStack_3a0 + 0x20;
      iVar28 = iVar28 + 1;
      iStack_3a4 = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_142bb5e53;
      uVar33 = puVar31[lVar24 + 1];
    }
    local_348 = (ulonglong)(-uVar33 & uVar33);
    uVar5 = local_348 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_274 = (int)lVar24;
    iStack_3a4 = local_274 + -1 + iStack_3a0;
    if (iVar27 < iStack_3a4) {
      iStack_3a4 = iVar27;
    }
  }
LAB_142bb5e53:
  local_398 = *(int *)&(local_250->CachedBPInheritanceMap).field_0x8 -
              *(int *)&(local_250->CachedBPInheritanceMap).field_0x34;
  uVar33 = *(uint *)&(local_250->CachedBPInheritanceMap).field_0x28;
  uStack_3a8 = 0xffffffff;
  local_3d0 = -1 << ((byte)uVar33 & 0x1f);
  uVar26 = uVar33 & 0xffffffe0;
  local_3c0 = local_2f8;
  uStack_3b8 = CONCAT44((int)local_348,iVar28);
  uStack_39c = local_bc;
  local_378 = (TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
               *)local_2f8;
  iVar28 = (int)uVar33 >> 5;
  local_350 = CONCAT44(uStack_394,local_398);
  TStack_370.UnvisitedBitMask = 0xffffffff;
  TStack_370.CurrentBitIndex = iStack_3a4;
  TStack_370.BaseBitIndex = iStack_3a0;
  TStack_370._28_4_ = local_bc;
  pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
  TStack_370._padding_ = uStack_3b8;
  TStack_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
  if ((((int)uVar33 < 0) || (iVar27 < (int)uVar33)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_01 = local_258;
  uVar17 = *(uint *)&(pFVar14->CachedBPInheritanceMap).field_0x28;
  if (uVar33 != uVar17) {
    puVar25 = *(undefined1 **)&(pFVar14->CachedBPInheritanceMap).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar30;
    }
    uVar33 = local_3d0 & *(uint *)(puVar25 + (longlong)iVar28 * 4);
    while (uVar33 == 0) {
      lVar24 = (longlong)iVar28;
      uVar26 = uVar26 + 0x20;
      iVar28 = iVar28 + 1;
      uVar33 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_142bb5f90;
      uVar33 = *(uint *)(puVar25 + lVar24 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_270 = (int)lVar24;
    uVar33 = local_270 + -1 + uVar26;
    if ((int)uVar17 < (int)uVar33) {
      uVar33 = uVar17;
    }
  }
LAB_142bb5f90:
  while( true ) {
    pTVar1 = local_378;
    if (*(int *)(&local_378->field_0x0 + 8) - *(int *)(&local_378->field_0x0 + 0x34) !=
        (int)local_350) {
      local_3d3[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3d3);
    }
    if (((TStack_370.CurrentBitIndex == uVar33) &&
        (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) &&
       (pTVar1 == (TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                   *)pTVar35)) break;
    lVar24 = *(longlong *)&pTVar1->field_0x0;
    pFVar4 = (FScriptContainerElement *)(lVar24 + (longlong)TStack_370.CurrentBitIndex * 0x28);
    if (*(longlong *)(lVar24 + 0x10 + (longlong)TStack_370.CurrentBitIndex * 0x28) != 0) {
      uVar6 = *(undefined8 *)(pFVar4 + 0x18);
      uVar26 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
      uVar7 = *(undefined8 *)(pFVar4 + 0x10);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
      uVar17 = uVar17 + (int)((ulonglong)uVar7 >> 0x20);
      uVar17 = uVar17 * 0x40 + uVar26 + (int)((ulonglong)uVar6 >> 0x20) + (uVar17 >> 2) + 0x9e3779b9
               ^ uVar17;
      pTVar21 = TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindByHash<FTopLevelAssetPath>
                          (this_01,uVar17,(FTopLevelAssetPath *)(pFVar4 + 0x10));
      if (pTVar21 ==
          (TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_> *)0x0)
      {
        pTVar20 = TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<FTopLevelAssetPath_const_&>
                            ((TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_01,uVar17,(FTopLevelAssetPath *)(pFVar4 + 0x10));
      }
      else {
        pTVar20 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)&pTVar21->field_0x10;
      }
      pFVar8 = (pTVar20->AllocatorInstance).Data;
      if (((pFVar8 <= pFVar4) && (pFVar4 < pFVar8 + (longlong)pTVar20->ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar27 = pTVar20->ArrayNum;
      if (iVar27 == pTVar20->ArrayMax) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
      }
      pTVar20->ArrayNum = iVar27 + 1;
      uVar6 = *(undefined8 *)(pFVar4 + 8);
      pFVar8 = (pTVar20->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar8 + 8) = uVar6;
    }
    TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
    pTVar35 = local_2f8;
  }
  uVar22 = GetRegisteredClassesVersionNumber();
  local_3c8->SavedAllClassesVersionNumber = uVar22;
  local_3c8->bDirty = false;
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  FMemScope::~FMemScope(&local_260);
  FLLMScope::~FLLMScope(local_380);
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateMaxSecondsPerFrame @ 142bb6270

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::UpdateMaxSecondsPerFrame(FAssetRegistryImpl *this)

{
  this->MaxSecondsPerFrame = AssetRegistry::Impl::MaxSecondsPerFrame;
  return;
}

// UpdatePersistentMountPoints @ 142bb6290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints(FAssetRegistryImpl *this)

{
  FAssetRegistryImpl *local_res8 [4];
  code *local_18;
  FAssetRegistryImpl **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>,void,FName>
             ::Call;
  local_res8[0] = this;
  FAssetRegistryState::EnumerateAllPaths
            (&this->State,(TFunctionRef<void___cdecl(FName)> *)&local_18);
  return;
}

// VerseFilesGathered @ 142bb6bb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::VerseFilesGathered
          (FAssetRegistryImpl *this,FEventContext *param_1,
          TRingBuffer<FName,TSizedDefaultAllocator<32>_> *param_2,FInterruptionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8078,"VerseFilesGathered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1f8e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8078);
  }
  uVar1 = param_2->AfterBack;
  uVar2 = param_2->Front;
  iVar6 = uVar1 - uVar2;
  while (0 < iVar6) {
    if ((uVar1 == uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PopCount <= static_cast<SizeType>(Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x3ec,
                           L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((int)(param_2->AfterBack - param_2->Front) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = *(FName *)((param_2->AllocatorInstance).Data +
                      (ulonglong)(param_2->Front & param_2->IndexMask) * 8);
    if ((param_2->IndexMask == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x37f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_2->Front = param_2->Front + 1;
    AddVerseFile(this,param_1,FVar3);
    bVar5 = AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(param_3);
    if (bVar5) break;
    uVar1 = param_2->AfterBack;
    uVar2 = param_2->Front;
    iVar6 = uVar1 - uVar2;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// WaitForGathererIdle @ 142bb7ac0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::WaitForGathererIdle(FAssetRegistryImpl *this,float param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *this_00;
  FAssetDataGatherer *this_01;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FLLMScope aFStackX_8 [5];
  LARGE_INTEGER LStackX_18;
  LARGE_INTEGER LStackX_20;
  LARGE_INTEGER LStack_68;
  FMemScope aFStack_60 [7];
  
  this_01 = (this->GlobalGatherer).Ptr;
  if (this_01 == (FAssetDataGatherer *)0x0) {
    return;
  }
  lpCriticalSection = &this_01->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this_01->ResultsLock).OwnerThreadId = aVar6;
  aVar6 = (this_01->ResultsLock).OwnerThreadId;
  if (this_01->bIsIdle == false) {
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 != aVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this_01->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5001,"FAssetDataGatherer::WaitForIdle",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                 ,0x1389);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5001);
    }
    FLLMScope::FLLMScope(aFStackX_8,AssetRegistry,false,None,Default,true);
    FMemScope::FMemScope(aFStack_60,AssetRegistry,true);
    dVar3 = __real_4170000000000000;
    dVar2 = __real_bff0000000000000;
    if (0.0 <= param_1) {
      QueryPerformanceCounter(&LStackX_18);
      dVar2 = (double)LStackX_18.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_1
              + dVar3;
    }
    this_00 = (this_01->Discovery).Ptr;
    if (((this_00->Thread != (FRunnableThread *)0x0) ||
        (AssetDataGather::Private::FAssetDataDiscovery::WaitForIdle(this_00,dVar2), dVar2 <= 0.0))
       || (QueryPerformanceCounter(&LStackX_20),
          (double)LStackX_20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 <= dVar2)) {
      aVar6 = (this_01->ResultsLock).OwnerThreadId;
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar6 == aVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x139a,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar5 = true;
      if (this_01->Thread == (FRunnableThread *)0x0) goto LAB_142b2dcb7;
      LOCK();
      this_01->IsGatheringPaused = (atomic<unsigned_int>)((int)this_01->IsGatheringPaused + 1);
      UNLOCK();
      while( true ) {
        bVar5 = this_01->Thread == (FRunnableThread *)0x0;
LAB_142b2dcb7:
        FAssetDataGatherer::InnerTickLoop(this_01,true,bVar5,dVar2);
        if ((0.0 < dVar2) &&
           (QueryPerformanceCounter(&LStack_68),
           dVar2 < (double)LStack_68.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3))
        break;
        if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SynchObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x53,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this_01->ResultsLock).OwnerThreadId = aVar6;
        aVar6 = (this_01->ResultsLock).OwnerThreadId;
        if (this_01->bIsIdle != false) {
          aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
          if ((aVar6 != aVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsLockedOnCurrentThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                 ,0x2b,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (this_01->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          break;
        }
        aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar6 != aVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x2b,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this_01->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if (this_01->Thread != (FRunnableThread *)0x0) {
        if ((this_01->IsGatheringPaused == (atomic<unsigned_int>)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Owner.IsGatheringPaused > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                               ,0x106d,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        this_01->IsGatheringPaused = (atomic<unsigned_int>)((int)this_01->IsGatheringPaused + -1);
        UNLOCK();
      }
    }
    FMemScope::~FMemScope(aFStack_60);
    FLLMScope::~FLLMScope(aFStackX_8);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 != aVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this_01->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// WaitForGathererIdleIfSynchronous @ 142bb7ae0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::FAssetRegistryImpl::WaitForGathererIdleIfSynchronous(FAssetRegistryImpl *this)

{
  FAssetDataGatherer *this_00;
  bool bVar1;
  
  this_00 = (this->GlobalGatherer).Ptr;
  if (this_00 != (FAssetDataGatherer *)0x0) {
    bVar1 = FAssetDataGatherer::IsSynchronous(this_00);
    if (bVar1) {
      FAssetDataGatherer::WaitForIdle((this->GlobalGatherer).Ptr,__real_bf800000);
      return;
    }
  }
  return;
}

// operator() @ 150498100

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::CompileFilter'::__l7::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8470630944661835938>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if ((*(int *)(lVar1 + 0x38) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ::FName::ToString(*(FName **)(lVar1 + 0x30),&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8470630944661835938>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504981a3;
    }
  }
  bVar3 = false;
LAB_1504981a3:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504981e0

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetDatas'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8470630944661840030>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8470630944661840030>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504982d0

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::AddAssetData'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8470630944661839856>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8470630944661839856>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150498340

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8470630944661839884>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8470630944661839884>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504983a0

bool __thiscall
`UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8470630944661839899>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8470630944661839899>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

