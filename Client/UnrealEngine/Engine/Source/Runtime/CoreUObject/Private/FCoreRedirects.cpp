// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 37

// operator() @ 141fc2940

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCoreRedirectObjectName * __thiscall
`FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l2::<lambda_1>::operator()
          (void *this,FCoreRedirectObjectName *__return_storage_ptr__,FCoreRedirect *param_1,
          FCoreRedirectObjectName *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  
  plVar1 = (longlong *)**(longlong **)this;
  if ((plVar1 != (longlong *)0x0) &&
     (((0 < *(int *)&(param_1->ValueChanges).field_0x8 - *(int *)&(param_1->ValueChanges).field_0x34
       || ((param_1->OverrideClassName).ObjectName != (FName)0x0)) ||
      ((param_1->OverrideClassName).PackageName != (FName)0x0)))) {
    if (*plVar1 == 0) {
      *plVar1 = (longlong)param_1;
    }
    else {
      bVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::OrderIndependentCompareEqual
                        ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)(*plVar1 + 0x50),
                         (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)&param_1->ValueChanges);
      if ((!bVar3) && (1 < (byte)LogCoreRedirects._0_1_)) {
        FCoreRedirectObjectName::CombineNames
                  (&local_28,(param_1->OldName).ObjectName,(param_1->OldName).OuterName,
                   (param_1->OldName).PackageName);
        lVar2 = *(longlong *)**(undefined8 **)this;
        FCoreRedirectObjectName::CombineNames
                  (&local_38,*(FName *)(lVar2 + 4),*(FName *)(lVar2 + 0xc),*(FName *)(lVar2 + 0x14))
        ;
        FCoreRedirectObjectName::CombineNames
                  (&local_48,*(FName *)((longlong)this + 8),*(FName *)((longlong)this + 0x10),
                   *(FName *)((longlong)this + 0x18));
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  FCoreRedirect::RedirectName(param_1,__return_storage_ptr__,param_2,true);
  return __return_storage_ptr__;
}

// AddAssetRedirects @ 141fc31e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCoreRedirects::AddAssetRedirects
          (TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
           *param_1)

{
  int *piVar1;
  FSoftObjectPath *this;
  longlong *plVar2;
  FSoftObjectPath *this_00;
  ulonglong uVar3;
  uint uVar4;
  FCoreRedirectsContext *pFVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  int iVar13;
  FString *pFVar14;
  FString *pFVar15;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FCoreRedirectsContext *pFVar21;
  int iVar22;
  FName FVar23;
  undefined1 *puVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  int iVar28;
  undefined1 auStackY_3b8 [32];
  undefined1 local_368 [4];
  int local_364;
  int local_360;
  uint local_35c;
  FString local_358;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_348;
  int iStack_340;
  uint uStack_33c;
  undefined1 *local_338;
  undefined4 uStack_330;
  int iStack_32c;
  int local_328;
  int iStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  int local_318;
  int local_314;
  FName local_310;
  FRedirectNameMap *local_308;
  FName local_300;
  FSoftObjectPath *local_2f8;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_2f0;
  TBitArray<FDefaultBitArrayAllocator> *local_2e8;
  undefined1 local_2e0 [16];
  FCoreRedirectsContext *local_2d0;
  undefined1 local_2c8;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  TStringView<wchar_t> local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FName local_1c8;
  FName FStack_1c0;
  FName local_1b8;
  FName FStack_1b0;
  FString local_1a8;
  longlong local_198;
  longlong lStack_190;
  FName local_188;
  FName FStack_180;
  undefined1 local_178 [80];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_128;
  undefined1 local_d8 [80];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar11 = false;
  bVar7 = 0;
  local_360 = 0;
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    return;
  }
  local_2c8 = 0;
  pFVar5 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar21 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar5 != (FCoreRedirectsContext *)0x0) {
    pFVar21 = pFVar5;
  }
  local_2f0 = param_1;
  local_2d0 = pFVar21;
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar21->RWLock).WriteLockOwnerThreadId != aVar12) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar21->RWLock);
    LOCK();
    (pFVar21->RWLock).WriteLockOwnerThreadId = aVar12;
    UNLOCK();
  }
  piVar1 = &(pFVar21->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  local_308 = FRedirectTypeMap::FindOrAdd(&pFVar21->RedirectTypeMap,Type_Asset);
  iVar28 = *(int *)&param_1->field_0x28;
  local_2e8 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar13 = 0;
  local_360 = 0;
  iStack_340 = 0;
  local_364 = 0;
  uStack_33c = 1;
  local_328 = 0;
  iStack_32c = 0;
  if (iVar28 != 0) {
    puVar25 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar25 = (uint *)&param_1->field_0x10;
    }
    uVar20 = *puVar25;
    local_328 = 0;
    while (uVar20 == 0) {
      lVar17 = (longlong)iStack_340;
      local_328 = local_328 + 0x20;
      iStack_340 = iStack_340 + 1;
      iStack_32c = iVar28;
      if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_340) goto LAB_141fc3333;
      uVar20 = puVar25[lVar17 + 1];
    }
    uStack_33c = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_33c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_318 = (int)lVar17;
    iStack_32c = local_328 + -1 + local_318;
    if (iVar28 < iStack_32c) {
      iStack_32c = iVar28;
    }
  }
LAB_141fc3333:
  local_338 = &param_1->field_0x10;
  uVar20 = *(uint *)&param_1->field_0x28;
  uVar27 = uVar20 & 0xffffffe0;
  iStack_320 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_330 = 0xffffffff;
  TStack_2b8._padding_ = CONCAT44(uStack_33c,iStack_340);
  TStack_2b8.CurrentBitIndex = iStack_32c;
  TStack_2b8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar20 >> 5;
  TStack_2b8._28_4_ = iStack_32c;
  TStack_2b8.BaseBitIndex = local_328;
  uStack_298 = CONCAT44(uStack_31c,iStack_320);
  local_35c = uVar20;
  local_348 = param_1;
  iStack_324 = iStack_32c;
  local_2c0 = param_1;
  TStack_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_338;
  if ((((int)uVar20 < 0) || (iVar28 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar4 = *(uint *)&param_1->field_0x28;
  iVar28 = 0;
  if (uVar20 != uVar4) {
    puVar24 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar24 = (undefined1 *)pTVar26;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar22 * 4);
    while (iVar28 = iVar13, uVar20 == 0) {
      lVar17 = (longlong)iVar22;
      uVar27 = uVar27 + 0x20;
      iVar22 = iVar22 + 1;
      uVar20 = uVar4;
      local_35c = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_141fc3450;
      uVar20 = *(uint *)(puVar24 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_314 = (int)lVar17;
    uVar20 = (uVar27 - 1) + local_314;
    local_35c = uVar20;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
      local_35c = uVar4;
    }
  }
LAB_141fc3450:
  do {
    pTVar9 = local_2c0;
    if (*(int *)&local_2c0->field_0x8 - *(int *)&local_2c0->field_0x34 != (int)uStack_298) {
      local_368[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_368);
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
    }
    if (((TStack_2b8.CurrentBitIndex == uVar20) && (TStack_2b8.Array == pTVar26)) &&
       (pTVar9 == param_1)) {
      if (3 < (byte)LogCoreRedirects._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      }
      if (local_2d0->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1) {
        ValidateAssetRedirects();
      }
      FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
                ((FScopeCoreRedirectsWriteLockedContext *)&local_2d0);
      return;
    }
    lVar17 = *(longlong *)pTVar9;
    plVar2 = (longlong *)(lVar17 + (longlong)TStack_2b8.CurrentBitIndex * 0x48);
    local_198 = *plVar2;
    lStack_190 = plVar2[1];
    this_00 = (FSoftObjectPath *)(lVar17 + (longlong)TStack_2b8.CurrentBitIndex * 0x48);
    this = this_00 + 1;
    local_2f8 = this;
    if (local_198 == 0) {
LAB_141fc3b28:
      if (2 < (byte)LogCoreRedirects._0_1_) {
        FSoftObjectPath::ToString(this,&local_238);
        FSoftObjectPath::ToString(this_00,&local_248);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      iVar28 = iVar28 + 1;
      local_364 = iVar28;
    }
    else {
      local_188 = (this->AssetPath).PackageName;
      FStack_180 = this_00[1].AssetPath.AssetName;
      if (this_00[1].AssetPath.AssetName == (FName)0x0) goto LAB_141fc3b28;
      pFVar14 = FSoftObjectPath::ToString(this,&local_208);
      pFVar15 = FSoftObjectPath::ToString(this_00,&local_1f8);
      FCoreRedirect::FCoreRedirect((FCoreRedirect *)local_178,Type_Asset,pFVar15,pFVar14);
      FVar23 = (FName)local_178._4_8_;
      if ((local_178._0_4_ & (Type_Asset|Type_Package)) != None) {
        FVar23 = (FName)local_178._20_8_;
      }
      uVar20 = ::GetTypeHash(FVar23.ComparisonIndex.Value);
      pTVar16 = TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_308,uVar20 + FVar23.Number,&local_310);
      if (pTVar16->ArrayNum == 0) {
        pFVar14 = FSoftObjectPath::GetLongPackageName(this,&local_1e8);
        pFVar15 = FSoftObjectPath::GetLongPackageName(this_00,&local_1d8);
        FCoreRedirect::FCoreRedirect((FCoreRedirect *)local_d8,Type_Asset,pFVar15,pFVar14);
        pFVar19 = (pTVar16->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)local_d8) &&
            ((FScriptContainerElement *)local_d8 < pFVar19 + (longlong)pTVar16->ArrayMax * 0xa0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = pTVar16->ArrayNum;
        if (iVar13 == pTVar16->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a0,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
        }
        pTVar16->ArrayNum = iVar13 + 1;
        pFVar19 = (pTVar16->AllocatorInstance).Data + (longlong)iVar13 * 0xa0;
        *(undefined4 *)pFVar19 = local_d8._0_4_;
        *(undefined4 *)(pFVar19 + 4) = local_d8._4_4_;
        *(undefined4 *)(pFVar19 + 8) = local_d8._8_4_;
        *(undefined4 *)(pFVar19 + 0xc) = local_d8._12_4_;
        *(undefined4 *)(pFVar19 + 0x10) = local_d8._16_4_;
        *(undefined4 *)(pFVar19 + 0x14) = local_d8._20_4_;
        *(undefined4 *)(pFVar19 + 0x18) = local_d8._24_4_;
        *(undefined4 *)(pFVar19 + 0x1c) = local_d8._28_4_;
        *(undefined4 *)(pFVar19 + 0x20) = local_d8._32_4_;
        *(undefined4 *)(pFVar19 + 0x24) = local_d8._36_4_;
        *(undefined4 *)(pFVar19 + 0x28) = local_d8._40_4_;
        *(undefined4 *)(pFVar19 + 0x2c) = local_d8._44_4_;
        *(undefined4 *)(pFVar19 + 0x30) = local_d8._48_4_;
        *(undefined4 *)(pFVar19 + 0x34) = local_d8._52_4_;
        *(undefined4 *)(pFVar19 + 0x38) = local_d8._56_4_;
        *(undefined4 *)(pFVar19 + 0x3c) = local_d8._60_4_;
        *(undefined4 *)(pFVar19 + 0x40) = local_d8._64_4_;
        *(undefined4 *)(pFVar19 + 0x44) = local_d8._68_4_;
        *(undefined4 *)(pFVar19 + 0x48) = local_d8._72_4_;
        *(undefined8 *)(pFVar19 + 0x58) = 0;
        *(undefined8 *)(pFVar19 + 0x70) = 0;
        *(undefined8 *)
         &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)(pFVar19 + 0x50))->Elements = 0;
        *(undefined4 *)(pFVar19 + 0x78) = 0;
        *(undefined4 *)(pFVar19 + 0x7c) = 0x80;
        *(undefined4 *)(pFVar19 + 0x80) = 0xffffffff;
        *(undefined4 *)(pFVar19 + 0x84) = 0;
        *(undefined8 *)(pFVar19 + 0x90) = 0;
        *(undefined4 *)(pFVar19 + 0x98) = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(pFVar19 + 0x50),
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(local_d8 + 0x50));
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x50));
      }
      iVar13 = pTVar16->ArrayNum;
      uVar20 = 1;
      if (1 < iVar13) {
        lVar17 = 0xa0;
        bVar8 = bVar7;
        do {
          uVar27 = 0;
          if ((int)uVar20 < iVar13) {
            uVar27 = ~uVar20 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_1c8 = (this_00->AssetPath).PackageName;
          FStack_1c0 = (this_00->AssetPath).AssetName;
          bVar7 = bVar8;
          if (local_1c8 == *(FName *)((pTVar16->AllocatorInstance).Data + lVar17 + 0x14)) {
            uVar27 = 0;
            if ((int)uVar20 < pTVar16->ArrayNum) {
              uVar27 = ~uVar20 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar18 = (FScriptContainerElement *)0x0;
            local_300 = (this_00->AssetPath).AssetName;
            pFVar19 = (pTVar16->AllocatorInstance).Data;
            local_1b8 = (this_00->AssetPath).PackageName;
            FStack_1b0 = (this_00->AssetPath).AssetName;
            bVar11 = local_300 != (FName)0x0;
            if (bVar11) {
              pFVar14 = ::FName::ToString(&local_300,&local_228);
              pFVar18 = (pFVar14->Data).AllocatorInstance.Data;
            }
            else {
              local_2e0._8_4_ = local_300.ComparisonIndex.Value;
              local_2e0._12_4_ = local_300.Number;
              pFVar14 = (FString *)local_2e0;
            }
            (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            bVar7 = bVar8 | bVar11;
            local_358.Data.ArrayMax = (pFVar14->Data).ArrayMax;
            local_358.Data.ArrayNum = (pFVar14->Data).ArrayNum;
            (pFVar14->Data).ArrayNum = 0;
            (pFVar14->Data).ArrayMax = 0;
            local_358.Data.AllocatorInstance.Data = pFVar18;
            if (((bool)(bVar8 | bVar11)) &&
               (bVar7 = 0, local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
            {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if ((!bVar11) &&
               ((FScriptContainerElement *)local_2e0._0_8_ != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_2e0._0_8_);
            }
            bVar11 = true;
            pFVar14 = ::FString::FString(&local_1a8,&local_358);
            local_288 = (pFVar14->Data).AllocatorInstance.Data;
            iVar28 = (pFVar14->Data).ArrayNum;
            iStack_280 = iVar28 + -1;
            if (iVar28 == 0) {
              iStack_280 = 0;
            }
            local_218._12_4_ = uStack_27c;
            local_218.Size = iStack_280;
            local_218.DataPtr = (wchar_t *)local_288;
            bVar10 = ::FName::Equals(*(FName *)(pFVar19 + lVar17 + 4),&local_218);
            pFVar19 = (pFVar14->Data).AllocatorInstance.Data;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar19);
            }
            if (!bVar10) goto LAB_141fc38ac;
            bVar10 = true;
          }
          else {
LAB_141fc38ac:
            bVar10 = false;
          }
          if ((bVar11) &&
             (bVar11 = false,
             local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          iVar13 = pTVar16->ArrayNum;
          if (bVar10) {
            if ((iVar13 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar19 = (pTVar16->AllocatorInstance).Data;
            if (1 < (byte)LogCoreRedirects._0_1_) {
              FCoreRedirectObjectName::CombineNames
                        (&local_278,*(FName *)(pFVar19 + 0x1c),*(FName *)(pFVar19 + 0x24),
                         *(FName *)(pFVar19 + 0x2c));
              pFVar14 = FSoftObjectPath::ToString(this_00,&local_258);
              pFVar15 = FSoftObjectPath::ToString(local_2f8,&local_268);
              UE::Logging::Private::
              LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString,FString>
                        ((FLogCategoryBase *)&LogCoreRedirects,&::LOG_Static,pFVar15,pFVar14,
                         &local_278);
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
            }
            iVar28 = local_364 + 1;
            local_364 = iVar28;
            goto LAB_141fc3a26;
          }
          uVar20 = uVar20 + 1;
          lVar17 = lVar17 + 0xa0;
          iVar28 = local_364;
          bVar8 = bVar7;
        } while ((int)uVar20 < iVar13);
      }
      pFVar19 = (pTVar16->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)local_178) &&
          ((FScriptContainerElement *)local_178 < pFVar19 + (longlong)pTVar16->ArrayMax * 0xa0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = pTVar16->ArrayNum;
      if (iVar13 == pTVar16->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
      }
      pTVar16->ArrayNum = iVar13 + 1;
      pFVar19 = (pTVar16->AllocatorInstance).Data + (longlong)iVar13 * 0xa0;
      *(undefined4 *)pFVar19 = local_178._0_4_;
      *(undefined4 *)(pFVar19 + 4) = local_178._4_4_;
      *(undefined4 *)(pFVar19 + 8) = local_178._8_4_;
      *(undefined4 *)(pFVar19 + 0xc) = local_178._12_4_;
      *(undefined4 *)(pFVar19 + 0x10) = local_178._16_4_;
      *(undefined4 *)(pFVar19 + 0x14) = local_178._20_4_;
      *(undefined4 *)(pFVar19 + 0x18) = local_178._24_4_;
      *(undefined4 *)(pFVar19 + 0x1c) = local_178._28_4_;
      *(undefined4 *)(pFVar19 + 0x20) = local_178._32_4_;
      *(undefined4 *)(pFVar19 + 0x24) = local_178._36_4_;
      *(undefined4 *)(pFVar19 + 0x28) = local_178._40_4_;
      *(undefined4 *)(pFVar19 + 0x2c) = local_178._44_4_;
      *(undefined4 *)(pFVar19 + 0x30) = local_178._48_4_;
      *(undefined4 *)(pFVar19 + 0x34) = local_178._52_4_;
      *(undefined4 *)(pFVar19 + 0x38) = local_178._56_4_;
      *(undefined4 *)(pFVar19 + 0x3c) = local_178._60_4_;
      *(undefined4 *)(pFVar19 + 0x40) = local_178._64_4_;
      *(undefined4 *)(pFVar19 + 0x44) = local_178._68_4_;
      *(undefined4 *)(pFVar19 + 0x48) = local_178._72_4_;
      *(undefined8 *)(pFVar19 + 0x58) = 0;
      *(undefined8 *)(pFVar19 + 0x70) = 0;
      *(undefined8 *)
       &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          *)(pFVar19 + 0x50))->Elements = 0;
      *(undefined4 *)(pFVar19 + 0x78) = 0;
      *(undefined4 *)(pFVar19 + 0x7c) = 0x80;
      *(undefined4 *)(pFVar19 + 0x80) = 0xffffffff;
      *(undefined4 *)(pFVar19 + 0x84) = 0;
      *(undefined8 *)(pFVar19 + 0x90) = 0;
      *(undefined4 *)(pFVar19 + 0x98) = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pFVar19 + 0x50),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(local_178 + 0x50));
      local_360 = local_360 + 1;
LAB_141fc3a26:
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_178 + 0x50));
      uVar20 = local_35c;
    }
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
    pTVar26 = local_2e8;
    param_1 = local_2f0;
  } while( true );
}

// AddKnownMissing @ 141fc3e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::AddKnownMissing
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,ECoreRedirectFlags param_3)

{
  int *piVar1;
  FCoreRedirectsContext *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FCoreRedirectsContext *pFVar9;
  ulonglong uVar10;
  undefined1 auStackY_178 [32];
  atomic<bool> local_148;
  undefined1 local_147 [15];
  TArrayView<FCoreRedirect_const_,int> local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  FCoreRedirectsContext *local_110;
  undefined1 local_108;
  FString local_100;
  undefined4 local_e4;
  undefined1 local_d8 [80];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar10 = (ulonglong)_tls_index;
  pFVar2 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0xc90);
  pFVar9 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar9 = pFVar2;
  }
  if (pFVar9->bInitialized == (atomic<bool>)0x0) {
    local_148 = pFVar9->bInitialized;
    `FCoreRedirects::AddKnownMissing'::__l2::<lambda_1>::operator()(&local_148);
  }
  if (((param_3 & ~Option_MissingLoad) != None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Channel & ~ECoreRedirectFlags::Option_MissingLoad) == ECoreRedirectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                         ,0x7c2,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_d8._4_8_ = param_2->ObjectName;
  local_d8._12_8_ = param_2->OuterName;
  local_d8._20_8_ = param_2->PackageName;
  local_d8._0_4_ = param_1 | param_3 | Category_Removed;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_d8._52_8_ = 0;
  local_d8._60_8_ = 0;
  local_d8._68_8_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_d8._28_8_ = local_d8._4_8_;
  local_d8._36_8_ = local_d8._12_8_;
  local_d8._44_8_ = local_d8._20_8_;
  ::FString::FString(&local_100,L"AddKnownMissing");
  local_138.DataPtr = (FCoreRedirect *)local_d8;
  local_138._12_4_ = local_e4;
  local_138.ArrayNum = 1;
  local_108 = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  pFVar2 = *(FCoreRedirectsContext **)(lVar3 + 0xc90);
  pFVar9 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar9 = pFVar2;
  }
  local_110 = pFVar9;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar9->RWLock).WriteLockOwnerThreadId != aVar8) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar9->RWLock);
    LOCK();
    (pFVar9->RWLock).WriteLockOwnerThreadId = aVar8;
    UNLOCK();
  }
  piVar1 = &(pFVar9->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  pFVar2 = *(FCoreRedirectsContext **)(lVar3 + 0xc90);
  pFVar9 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar9 = pFVar2;
  }
  if (pFVar9->bInitialized == (atomic<bool>)0x0) {
    `FCoreRedirects::AddRedirectList'::__l2::<lambda_1>::operator()(local_147);
  }
  bVar6 = AddRedirectListUnderWriteLock
                    (&local_138,&local_100,(FScopeCoreRedirectsWriteLockedContext *)&local_110);
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)&local_110);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return bVar6;
}

// AddRedirectList @ 141fc4c20

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::AddRedirectList(TArrayView<FCoreRedirect_const_,int> *param_1,FString *param_2)

{
  int *piVar1;
  FCoreRedirectsContext *pFVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  FCoreRedirectsContext *pFVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  FCoreRedirectsContext *local_38;
  undefined1 local_30;
  TArrayView<FCoreRedirect_const_,int> local_28;
  
  local_30 = 0;
  plVar6 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90);
  pFVar2 = (FCoreRedirectsContext *)*plVar6;
  pFVar5 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar5 = pFVar2;
  }
  local_38 = pFVar5;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar5->RWLock).WriteLockOwnerThreadId != aVar4) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar5->RWLock);
    LOCK();
    (pFVar5->RWLock).WriteLockOwnerThreadId = aVar4;
    UNLOCK();
  }
  piVar1 = &(pFVar5->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  pFVar2 = (FCoreRedirectsContext *)*plVar6;
  pFVar5 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar5 = pFVar2;
  }
  if (pFVar5->bInitialized == (atomic<bool>)0x0) {
    `FCoreRedirects::AddRedirectList'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar3 = AddRedirectListUnderWriteLock
                    (&local_28,param_2,(FScopeCoreRedirectsWriteLockedContext *)&local_38);
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)&local_38);
  return bVar3;
}

// AddRedirectListUnderWriteLock @ 141fc4d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::AddRedirectListUnderWriteLock
          (TArrayView<FCoreRedirect_const_,int> *param_1,FString *param_2,
          FScopeCoreRedirectsWriteLockedContext *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FCoreRedirect *pFVar5;
  ForAnyElementType FVar6;
  FCoreRedirect *pFVar7;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  undefined1 local_148;
  TArrayView<FCoreRedirect_const_,int> local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [80];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar1 = param_1->ArrayNum;
  if (5 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  if ((*(int *)(*(longlong *)param_3 + 4) == 1) && (*(char *)(*(longlong *)param_3 + 8) != '\0')) {
    local_138.DataPtr = param_1->DataPtr;
    local_138.ArrayNum = param_1->ArrayNum;
    local_138._12_4_ = *(undefined4 *)&param_1->field_0xc;
    ValidateRedirectList(&local_138,param_2);
  }
  pFVar5 = param_1->DataPtr;
  pFVar7 = pFVar5 + iVar1;
  local_148 = 0;
  uVar3 = 0;
  if (pFVar5 != pFVar7) {
    pFVar4 = &(pFVar5->NewName).PackageName;
    do {
      if (((pFVar4[-5] == (FName)0x0) && (pFVar4[-3] == (FName)0x0)) ||
         ((pFVar4[-2] == (FName)0x0 && (*pFVar4 == (FName)0x0)))) {
        if (1 < (byte)LogCoreRedirects._0_1_) {
          FCoreRedirectObjectName::CombineNames(&local_118,pFVar4[-2],pFVar4[-1],*pFVar4);
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            FVar6.Data = local_118.Data.AllocatorInstance.Data;
          }
          FCoreRedirectObjectName::CombineNames(&local_128,pFVar4[-5],pFVar4[-4],pFVar4[-3]);
          local_158 = FVar6.Data;
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((((*(uint *)(*(longlong *)param_3 + 4) & 2) == 0) ||
               ((char)pFVar5->RedirectFlags < '\0')) ||
              ((bVar2 = FCoreRedirectObjectName::HasValidCharacters
                                  ((FCoreRedirectObjectName *)(pFVar4 + -5),pFVar5->RedirectFlags),
               bVar2 && (bVar2 = FCoreRedirectObjectName::HasValidCharacters
                                           ((FCoreRedirectObjectName *)(pFVar4 + -2),
                                            pFVar5->RedirectFlags), bVar2)))) {
        if (((pFVar5->RedirectFlags & Option_MatchSubstring) != None) &&
           (5 < (byte)LogCoreRedirects._0_1_)) {
          FCoreRedirectObjectName::CombineNames
                    ((FString *)&local_138,pFVar4[-5],pFVar4[-4],pFVar4[-3]);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          if (local_138.DataPtr != (FCoreRedirect *)0x0) {
            FMemory::Free(local_138.DataPtr);
          }
        }
        bVar2 = AddSingleRedirectUnderWriteLock(pFVar5,param_2,param_3);
        if (((bVar2) &&
            (((local_148 = 1, pFVar4[-5] != pFVar4[-2] || (pFVar4[-4] != pFVar4[-1])) ||
             (pFVar4[-3] != *pFVar4)))) &&
           (0 < (int)(pFVar4[5].Number - pFVar4[0xb].ComparisonIndex.Value))) {
          local_e8._4_8_ = pFVar4[-5];
          local_e8._12_8_ = pFVar4[-4];
          local_e8._0_4_ = pFVar5->RedirectFlags;
          local_e8._20_8_ = pFVar4[-3];
          local_e8._44_8_ = *pFVar4;
          local_e8._28_8_ = pFVar4[-2];
          local_e8._36_8_ = pFVar4[-1];
          local_98.Elements._0_8_ = 0;
          local_e8._68_8_ = pFVar4[3];
          local_98.Elements._8_8_ = 0;
          local_e8._52_8_ = pFVar4[1];
          local_e8._60_8_ = pFVar4[2];
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)(local_e8 + 0x50),
                      (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&pFVar4[4].Number);
          local_e8._4_8_ = local_e8._28_8_;
          local_e8._12_8_ = local_e8._36_8_;
          local_e8._20_8_ = local_e8._44_8_;
          AddSingleRedirectUnderWriteLock((FCoreRedirect *)local_e8,param_2,param_3);
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_e8 + 0x50));
        }
      }
      else if (1 < (byte)LogCoreRedirects._0_1_) {
        FCoreRedirectObjectName::CombineNames(&local_f8,pFVar4[-2],pFVar4[-1],*pFVar4);
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_f8.Data.ArrayNum != 0) {
          FVar6.Data = local_f8.Data.AllocatorInstance.Data;
        }
        FCoreRedirectObjectName::CombineNames(&local_108,pFVar4[-5],pFVar4[-4],pFVar4[-3]);
        local_158 = FVar6.Data;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      pFVar5 = pFVar5 + 1;
      pFVar4 = pFVar4 + 0x14;
      uVar3 = local_148;
    } while (pFVar5 != pFVar7);
  }
  return (bool)uVar3;
}

// AddSingleRedirectUnderWriteLock @ 141fc5270

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::AddSingleRedirectUnderWriteLock
          (FCoreRedirect *param_1,FString *param_2,FScopeCoreRedirectsWriteLockedContext *param_3)

{
  int *piVar1;
  ECoreRedirectFlags EVar2;
  FCoreRedirect *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FRedirectNameMap *this;
  FWildcardData *pFVar10;
  undefined1 *puVar11;
  FName *pFVar12;
  ECoreRedirectFlags EVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  FString *local_res10;
  int local_res18 [2];
  ECoreRedirectFlags local_res20;
  FName local_d8;
  FName *local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  EVar13 = param_1->RedirectFlags & Option_MatchSubstring;
  local_res10 = param_2;
  local_res20 = EVar13;
  this = FRedirectTypeMap::FindOrAdd
                   ((FRedirectTypeMap *)(*(longlong *)param_3 + 0x60),param_1->RedirectFlags);
  pFVar10 = (FWildcardData *)0x0;
  EVar2 = param_1->RedirectFlags;
  if (EVar13 == None) {
    if ((EVar2 & (Type_Asset|Type_Package)) == None) {
      FVar14 = (param_1->OldName).ObjectName;
    }
    else {
      FVar14 = (param_1->OldName).PackageName;
    }
    local_d8 = FVar14;
    uVar8 = ::GetTypeHash(FVar14.ComparisonIndex.Value);
    uVar8 = uVar8 + FVar14.Number;
    if (*(int *)&(this->RedirectMap).field_0x8 != *(int *)&(this->RedirectMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->RedirectMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->RedirectMap).field_0x38;
      }
      uVar16 = *(uint *)(puVar11 +
                        (ulonglong)(*(int *)&(this->RedirectMap).field_0x48 - 1U & uVar8) * 4);
      if (uVar16 != 0xffffffff) {
        do {
          pFVar12 = (FName *)((longlong)(int)uVar16 * 0x20 + *(longlong *)&this->RedirectMap);
          if (*pFVar12 == local_d8) {
            if (pFVar12 != (FName *)0x0) goto LAB_141fc53fb;
            break;
          }
          uVar16 = pFVar12[3].ComparisonIndex.Value;
        } while (uVar16 != 0xffffffff);
      }
    }
    local_d0 = &local_d8;
    TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_&&>_>
              ((TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(uint)local_res18,(TKeyInitializer<FName_&&> *)(ulonglong)uVar8,
               (bool *)&local_d0);
    pFVar12 = (FName *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this->RedirectMap);
LAB_141fc53fb:
    pFVar10 = (FWildcardData *)(pFVar12 + 1);
    goto LAB_141fc53ff;
  }
  if ((EVar2 & Option_MatchSubstring) == Option_MatchSubstring) {
    if (((this->Wildcards).Object == (FWildcardData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar10 = (this->Wildcards).Object;
LAB_141fc5325:
    if (pFVar10 != (FWildcardData *)0x0) goto LAB_141fc53ff;
  }
  else {
    if ((EVar2 >> 0x18 & 1) != 0) {
      pFVar10 = TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->(&this->Wildcards);
      pFVar10 = (FWildcardData *)&pFVar10->Prefixes;
      goto LAB_141fc5325;
    }
    if ((EVar2 >> 0x19 & 1) != 0) {
      pFVar10 = TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->(&this->Wildcards);
      pFVar10 = (FWildcardData *)&pFVar10->Suffixes;
      goto LAB_141fc5325;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ExistingRedirects",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                     ,0xad9,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
LAB_141fc53ff:
  iVar9 = (pFVar10->Substrings).ArrayNum;
  pFVar15 = (pFVar10->Substrings).AllocatorInstance.Data;
  pFVar17 = pFVar15 + (longlong)iVar9 * 0xa0;
  do {
    if ((pFVar10->Substrings).ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar17) {
      if (local_res20 == None) {
        pFVar3 = (FCoreRedirect *)(pFVar10->Substrings).AllocatorInstance.Data;
        if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar10->Substrings).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (pFVar10->Substrings).ArrayNum;
        piVar1 = &(pFVar10->Substrings).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a0,(ForAnyElementType *)pFVar10,piVar1);
        }
        (pFVar10->Substrings).ArrayNum = iVar9 + 1;
        FCoreRedirect::FCoreRedirect
                  ((FCoreRedirect *)
                   ((pFVar10->Substrings).AllocatorInstance.Data + (longlong)iVar9 * 0xa0),param_1);
      }
      else {
        if (((this->Wildcards).Object == (FWildcardData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FWildcardData::Add((this->Wildcards).Object,param_1);
      }
      return true;
    }
    if (*(ECoreRedirectFlags *)pFVar15 == param_1->RedirectFlags) {
      if (((*(FName *)(pFVar15 + 4) == (param_1->OldName).ObjectName) &&
          (*(FName *)(pFVar15 + 0xc) == (param_1->OldName).OuterName)) &&
         (*(FName *)(pFVar15 + 0x14) == (param_1->OldName).PackageName)) break;
    }
    pFVar15 = pFVar15 + 0xa0;
  } while( true );
  if (((*(FName *)(pFVar15 + 0x1c) == (param_1->NewName).ObjectName) &&
      (*(FName *)(pFVar15 + 0x24) == (param_1->NewName).OuterName)) &&
     (*(FName *)(pFVar15 + 0x2c) == (param_1->NewName).PackageName)) {
    bVar6 = false;
  }
  else {
    bVar6 = FCoreRedirectObjectName::Matches
                      ((FCoreRedirectObjectName *)(pFVar15 + 4),&param_1->OldName,
                       AllowPartialRHSMatch);
    if ((!bVar6) ||
       (bVar6 = FCoreRedirectObjectName::Matches
                          ((FCoreRedirectObjectName *)(pFVar15 + 0x1c),&param_1->NewName,
                           AllowPartialRHSMatch), !bVar6)) {
      if ((byte)LogCoreRedirects._0_1_ < 2) {
        return false;
      }
      FCoreRedirectObjectName::CombineNames
                (&local_58,(param_1->NewName).ObjectName,(param_1->NewName).OuterName,
                 (param_1->NewName).PackageName);
      FCoreRedirectObjectName::CombineNames
                (&local_68,*(FName *)(pFVar15 + 0x1c),*(FName *)(pFVar15 + 0x24),
                 *(FName *)(pFVar15 + 0x2c));
      FCoreRedirectObjectName::CombineNames
                (&local_78,*(FName *)(pFVar15 + 4),*(FName *)(pFVar15 + 0xc),
                 *(FName *)(pFVar15 + 0x14));
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
      goto LAB_141fc5787;
    }
    bVar6 = true;
  }
  if ((*(int *)(pFVar15 + 0x58) - *(int *)(pFVar15 + 0x84) < 1) ||
     (*(int *)&(param_1->ValueChanges).field_0x8 - *(int *)&(param_1->ValueChanges).field_0x34 < 1))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(longlong *)(pFVar15 + 4) == 0) {
    *(FName *)(pFVar15 + 4) = (param_1->OldName).ObjectName;
  }
  if (*(longlong *)(pFVar15 + 0xc) == 0) {
    *(FName *)(pFVar15 + 0xc) = (param_1->OldName).OuterName;
  }
  if (*(longlong *)(pFVar15 + 0x14) == 0) {
    *(FName *)(pFVar15 + 0x14) = (param_1->OldName).PackageName;
  }
  if (*(longlong *)(pFVar15 + 0x1c) == 0) {
    *(FName *)(pFVar15 + 0x1c) = (param_1->NewName).ObjectName;
  }
  if (*(longlong *)(pFVar15 + 0x24) == 0) {
    *(FName *)(pFVar15 + 0x24) = (param_1->NewName).OuterName;
  }
  if (*(longlong *)(pFVar15 + 0x2c) == 0) {
    *(FName *)(pFVar15 + 0x2c) = (param_1->NewName).PackageName;
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>
            ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)(pFVar15 + 0x50),&param_1->ValueChanges);
  if (bVar5) {
    if ((byte)LogCoreRedirects._0_1_ < 6) {
      return false;
    }
    FCoreRedirectObjectName::CombineNames
              (&local_c8,*(FName *)(pFVar15 + 0x1c),*(FName *)(pFVar15 + 0x24),
               *(FName *)(pFVar15 + 0x2c));
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  else if (bVar6) {
    if ((byte)LogCoreRedirects._0_1_ < 3) {
      return false;
    }
    FCoreRedirectObjectName::CombineNames
              (&local_a8,*(FName *)(pFVar15 + 0x1c),*(FName *)(pFVar15 + 0x24),
               *(FName *)(pFVar15 + 0x2c));
    FCoreRedirectObjectName::CombineNames
              (&local_b8,*(FName *)(pFVar15 + 4),*(FName *)(pFVar15 + 0xc),
               *(FName *)(pFVar15 + 0x14));
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogCoreRedirects._0_1_ < 6) {
      return false;
    }
    FCoreRedirectObjectName::CombineNames
              (&local_88,*(FName *)(pFVar15 + 0x1c),*(FName *)(pFVar15 + 0x24),
               *(FName *)(pFVar15 + 0x2c));
    FCoreRedirectObjectName::CombineNames
              (&local_98,*(FName *)(pFVar15 + 4),*(FName *)(pFVar15 + 0xc),
               *(FName *)(pFVar15 + 0x14));
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
    local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
LAB_141fc5787:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return false;
}

// ClearKnownMissing @ 141fc6ca0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
FCoreRedirects::ClearKnownMissing(ECoreRedirectFlags param_1,ECoreRedirectFlags param_2)

{
  int *piVar1;
  longlong lVar2;
  atomic<unsigned_int> aVar3;
  FCoreRedirectsContext *pFVar4;
  longlong lVar5;
  TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  code *pcVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  undefined1 *puVar10;
  ECoreRedirectFlags EVar11;
  FCoreRedirectsContext *pFVar12;
  undefined1 local_res8 [8];
  
  if (((param_2 & ~Option_MissingLoad) != None) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Channel & ~ECoreRedirectFlags::Option_MissingLoad) == ECoreRedirectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                         ,0x7d2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar11 = param_1 | param_2 | Category_Removed;
  pFVar4 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar12 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar4 != (FCoreRedirectsContext *)0x0) {
    pFVar12 = pFVar4;
  }
  aVar3 = (pFVar12->RWLock).WriteLockOwnerThreadId;
  if ((aVar3 == (atomic<unsigned_int>)0x0) ||
     (aVar8 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar3 != aVar8)) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar12->RWLock);
  }
  else {
    piVar1 = &(pFVar12->RWLock).RecursionCount;
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)&(pFVar12->RedirectTypeMap).Map.field_0x8 !=
      *(int *)&(pFVar12->RedirectTypeMap).Map.field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar12->RedirectTypeMap).Map.field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar12->RedirectTypeMap).Map.field_0x38;
    }
    iVar9 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(pFVar12->RedirectTypeMap).Map.field_0x48 - Type_Object & EVar11) * 4)
    ;
    if (iVar9 != -1) {
      lVar5 = *(longlong *)&(pFVar12->RedirectTypeMap).Map;
      do {
        lVar2 = lVar5 + (longlong)iVar9 * 0x18;
        if (*(ECoreRedirectFlags *)(lVar5 + (longlong)iVar9 * 0x18) == EVar11) {
          if ((lVar2 != 0) &&
             (this = *(TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       **)(lVar2 + 8),
             this != (TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)0x0)) {
            bVar7 = 1 < this->HashSize;
            if (!bVar7) {
              TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::UnhashElements(this);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
            puVar10 = &(this->Elements).field_0xc;
            *(undefined4 *)&(this->Elements).field_0x8 = 0;
            if (*(int *)puVar10 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar10);
            }
            *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
            *(undefined4 *)&(this->Elements).field_0x34 = 0;
            iVar9 = *(int *)&(this->Elements).field_0x2c;
            *(undefined4 *)&(this->Elements).field_0x28 = 0;
            if ((iVar9 < 0) || (0x80 < iVar9)) {
              *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,0);
            }
            if (bVar7) {
              this->HashSize = 1;
              TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Rehash(this);
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10);
      } while (iVar9 != -1);
    }
  }
  if ((pFVar12->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar12->RWLock);
  }
  else {
    aVar3 = (pFVar12->RWLock).WriteLockOwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar8) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    piVar1 = &(pFVar12->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  return;
}

// FindPreviousNames @ 141fcc0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::FindPreviousNames
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  ECoreRedirectFlags EVar3;
  ECoreRedirectFlags EVar4;
  FCoreRedirectsContext *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  byte bVar12;
  atomic<unsigned_int> aVar13;
  ulonglong uVar14;
  longlong lVar15;
  ECoreRedirectFlags EVar16;
  int iVar17;
  FCoreRedirectObjectName *pFVar18;
  ECoreRedirectFlags EVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  ECoreRedirectFlags *pEVar23;
  FScriptContainerElement *pFVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  ECoreRedirectFlags *pEVar27;
  FCoreRedirectsContext *pFVar28;
  EMatchFlags EVar29;
  undefined1 auStackY_2c8 [32];
  bool local_298;
  undefined1 local_296;
  undefined1 local_295;
  undefined1 local_294;
  undefined1 local_293 [3];
  ECoreRedirectFlags local_290;
  FScriptContainerElement *local_288;
  undefined1 local_280 [4];
  ECoreRedirectFlags local_27c;
  uint local_278;
  TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> *local_270;
  FCoreRedirectsContext *local_268;
  FScriptContainerElement *local_260;
  int local_258;
  int local_254;
  TBitArray<FDefaultBitArrayAllocator> *local_250;
  FString local_248;
  FScriptContainerElement *local_238;
  int iStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  ECoreRedirectFlags EStack_21c;
  int local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FCoreRedirectObjectName local_1d8;
  FCoreRedirectObjectName local_1c0 [2];
  undefined4 local_18c;
  undefined1 local_188 [80];
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [80];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar5 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar28 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar5 != (FCoreRedirectsContext *)0x0) {
    pFVar28 = pFVar5;
  }
  aVar2 = (pFVar28->RWLock).WriteLockOwnerThreadId;
  local_290 = param_1;
  local_270 = param_3;
  local_268 = pFVar28;
  if ((aVar2 == (atomic<unsigned_int>)0x0) ||
     (aVar13 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar2 != aVar13)) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar28->RWLock);
  }
  else {
    piVar1 = &(pFVar28->RWLock).RecursionCount;
    *piVar1 = *piVar1 + 1;
  }
  local_298 = false;
  if (((local_290 & Type_Package) == None) && ((local_290 >> 0x11 & 1) == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  local_278 = (pFVar28->RedirectTypeMap).FastIterable.ArrayNum;
  uVar14 = (ulonglong)(int)local_278;
  local_288 = (pFVar28->RedirectTypeMap).FastIterable.AllocatorInstance.Data;
  EVar16 = local_290 | Type_Asset;
  pFVar24 = local_288 + uVar14 * 0x68;
  local_290 = EVar16;
  local_260 = pFVar24;
  do {
    if ((pFVar28->RedirectTypeMap).FastIterable.ArrayNum != (int)uVar14) {
      local_296 = 0;
      `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_296);
      EVar16 = local_290;
    }
    if (local_288 == pFVar24) {
      if (((6 < (byte)LogCoreRedirects._0_1_) && (local_298 != false)) &&
         (pFVar28->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1)) {
        FCoreRedirectObjectName::CombineNames
                  (&local_248,param_2->ObjectName,param_2->OuterName,param_2->PackageName);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
      }
      if ((pFVar28->RWLock).RecursionCount < 1) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar28->RWLock);
      }
      else {
        aVar2 = (pFVar28->RWLock).WriteLockOwnerThreadId;
        aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar2 != aVar13) {
          `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
          operator()(local_280);
        }
        piVar1 = &(pFVar28->RWLock).RecursionCount;
        *piVar1 = *piVar1 + -1;
      }
      return local_298;
    }
    EVar3 = *(ECoreRedirectFlags *)local_288;
    if ((((EVar3 & EVar16 & Type_AllMask) != None) &&
        ((EVar3 & Category_AllMask) == (EVar16 & Category_AllMask))) ||
       ((bVar8 && (((EVar3 & Type_Package) != None && ((EVar3 & Category_AllMask) == None)))))) {
      pFVar24 = local_288 + 8;
      if ((EVar3 & Option_MatchSubstring) == None) {
        EVar16 = *(ECoreRedirectFlags *)(local_288 + 0x30);
        local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x18);
        iStack_230 = 0;
        local_218 = 0;
        uStack_22c = 1;
        EStack_21c = None;
        if (EVar16 != None) {
          pTVar26 = local_228;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_288 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_288 + 0x28);
          }
          uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
          while (uVar22 == 0) {
            lVar15 = (longlong)iStack_230;
            local_218 = local_218 + 0x20;
            iStack_230 = iStack_230 + 1;
            EStack_21c = EVar16;
            if ((int)((EVar16 - Type_Object) + ((int)(EVar16 - Type_Object) >> 0x1f & 0x1fU)) >> 5 <
                iStack_230) goto LAB_141fcc633;
            uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uStack_22c = -uVar22 & uVar22;
          uVar14 = (ulonglong)uStack_22c * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_258 = (int)lVar15;
          EStack_21c = local_218 + -1 + local_258;
          if ((int)EVar16 < (int)EStack_21c) {
            EStack_21c = EVar16;
          }
        }
LAB_141fcc633:
        pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x18);
        uStack_214 = local_18c;
        iStack_210 = *(ECoreRedirectFlags *)(local_288 + 0x10) -
                     *(ECoreRedirectFlags *)(local_288 + 0x3c);
        EVar16 = *(ECoreRedirectFlags *)(local_288 + 0x30);
        TStack_200._padding_ = CONCAT44(uStack_22c,iStack_230);
        uStack_220 = 0xffffffff;
        EVar19 = EVar16 & ~(Type_Function|Type_Enum|Type_Struct|Type_Class|Type_Object);
        TStack_200.CurrentBitIndex = EStack_21c;
        TStack_200.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)EVar16 >> 5;
        TStack_200._28_4_ = local_18c;
        TStack_200.BaseBitIndex = local_218;
        uStack_1e0 = CONCAT44(uStack_20c,iStack_210);
        local_27c = EVar16;
        local_250 = pTVar26;
        local_238 = pFVar24;
        local_208 = pFVar24;
        TStack_200.Array = local_228;
        if (((int)EVar16 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        EVar4 = *(ECoreRedirectFlags *)(local_288 + 0x30);
        if (EVar16 != EVar4) {
          pTVar25 = pTVar26;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_288 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_288 + 0x28);
          }
          uVar22 = -1 << ((byte)EVar16 & 0x1f) &
                   *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
          while (uVar22 == 0) {
            lVar15 = (longlong)iVar17;
            EVar19 = EVar19 + Type_Property;
            iVar17 = iVar17 + 1;
            EVar16 = EVar4;
            local_27c = EVar4;
            if ((int)((EVar4 - Type_Object) + ((int)(EVar4 - Type_Object) >> 0x1f & 0x1fU)) >> 5 <
                iVar17) goto LAB_141fcc760;
            uVar22 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar14 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_254 = (int)lVar15;
          EVar16 = (EVar19 - Type_Object) + local_254;
          local_27c = EVar16;
          if ((int)EVar4 < (int)EVar16) {
            EVar16 = EVar4;
            local_27c = EVar4;
          }
        }
LAB_141fcc760:
        while( true ) {
          pFVar9 = local_208;
          if (*(ECoreRedirectFlags *)(local_208 + 8) - *(ECoreRedirectFlags *)(local_208 + 0x34) !=
              (int)uStack_1e0) {
            local_294 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_294);
          }
          if (((TStack_200.CurrentBitIndex == EVar16) && (TStack_200.Array == pTVar26)) &&
             (pFVar24 = local_260, pFVar28 = local_268, EVar16 = local_290, pFVar9 == local_288 + 8)
             ) break;
          lVar15 = (longlong)TStack_200.CurrentBitIndex * 0x20 + *(undefined8 *)pFVar9;
          pEVar23 = *(ECoreRedirectFlags **)(lVar15 + 8);
          iVar17 = *(int *)(lVar15 + 0x10);
          pFVar18 = (FCoreRedirectObjectName *)(pEVar23 + 7);
          pEVar27 = pEVar23 + (longlong)iVar17 * 0x28;
          while( true ) {
            if (*(int *)(lVar15 + 0x10) != iVar17) {
              local_293[0] = 0;
              `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_293);
            }
            if (pEVar23 == pEVar27) break;
            bVar10 = FCoreRedirectObjectName::Matches
                               (pFVar18,param_2,EVar3 >> 6 & AllowPartialRHSMatch);
            if (bVar10) {
              local_e8._4_8_ = pFVar18[-1].ObjectName;
              local_e8._12_8_ = pFVar18[-1].OuterName;
              local_e8._0_4_ = *pEVar23;
              local_e8._20_8_ = pFVar18[-1].PackageName;
              local_e8._28_8_ = pFVar18->ObjectName;
              local_e8._36_8_ = pFVar18->OuterName;
              local_98._0_8_ = (FScriptContainerElement *)0x0;
              local_e8._44_8_ = pFVar18->PackageName;
              local_98._8_8_ = 0;
              local_e8._52_8_ = pFVar18[1].ObjectName;
              local_e8._60_8_ = pFVar18[1].OuterName;
              local_78 = (void *)0x0;
              local_e8._68_8_ = pFVar18[1].PackageName;
              local_70 = 0;
              local_6c = 0x80;
              local_68 = 0xffffffff;
              local_64 = 0;
              local_58 = (ForElementType<FSetElementId>)0x0;
              local_50 = 0;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                           *)local_98,
                          (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                           *)&pFVar18[2].ObjectName.Number);
              local_e8._4_8_ = pFVar18->ObjectName;
              local_e8._12_8_ = pFVar18->OuterName;
              local_e8._20_8_ = pFVar18->PackageName;
              local_e8._28_8_ = pFVar18[-1].ObjectName;
              local_e8._36_8_ = pFVar18[-1].OuterName;
              local_e8._44_8_ = pFVar18[-1].PackageName;
              FCoreRedirect::RedirectName((FCoreRedirect *)local_e8,local_1c0,param_2,true);
              if (((local_1c0[0].ObjectName == param_2->ObjectName) &&
                  (local_1c0[0].OuterName == param_2->OuterName)) &&
                 (local_1c0[0].PackageName == param_2->PackageName)) {
                local_50 = 0;
                if (local_58 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_58);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)local_98,0,local_98._8_4_);
                iVar7 = SUB84(local_98._8_8_,4);
                local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                if (iVar7 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
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
                bVar12 = 0;
              }
              else {
                TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FCoreRedirectObjectName_const_&>(local_270,local_1c0);
                local_50 = 0;
                if (local_58 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_58);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)local_98,0,local_98._8_4_);
                iVar7 = SUB84(local_98._8_8_,4);
                local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                if (iVar7 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
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
                bVar12 = 1;
              }
              local_298 = (bool)(local_298 | bVar12);
            }
            pEVar23 = pEVar23 + 0x28;
            pFVar18 = (FCoreRedirectObjectName *)&pFVar18[6].PackageName;
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          pTVar26 = local_250;
          EVar16 = local_27c;
        }
      }
      else {
        puVar21 = *(undefined8 **)(local_288 + 0x58);
        if ((puVar21 == (undefined8 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Wildcards",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                                ,0x781,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        EVar29 = None;
        puVar20 = (undefined8 *)0x0;
        if ((EVar3 & Option_MatchSubstring) == Option_MatchSubstring) {
          EVar29 = CheckSubString;
LAB_141fcc27a:
          puVar20 = puVar21;
          if (puVar21 == (undefined8 *)0x0) goto LAB_141fcc27f;
        }
        else {
          if ((EVar3 >> 0x18 & 1) != 0) {
            puVar21 = puVar21 + 2;
            EVar29 = CheckPrefix;
            goto LAB_141fcc27a;
          }
          if ((EVar3 >> 0x19 & 1) != 0) {
            puVar21 = puVar21 + 4;
            EVar29 = CheckSuffix;
            goto LAB_141fcc27a;
          }
LAB_141fcc27f:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("WildcardRedirects",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                              ,0x795,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
        }
        pEVar23 = (ECoreRedirectFlags *)*puVar20;
        iVar17 = *(int *)(puVar20 + 1);
        pFVar18 = (FCoreRedirectObjectName *)(pEVar23 + 7);
        pEVar27 = pEVar23 + (longlong)iVar17 * 0x28;
        while( true ) {
          if (*(int *)(puVar20 + 1) != iVar17) {
            local_295 = 0;
            `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_295);
          }
          pFVar24 = local_260;
          pFVar28 = local_268;
          EVar16 = local_290;
          if (pEVar23 == pEVar27) break;
          bVar10 = FCoreRedirectObjectName::Matches(pFVar18,param_2,EVar29);
          if (bVar10) {
            local_188._4_8_ = pFVar18[-1].ObjectName;
            local_188._12_8_ = pFVar18[-1].OuterName;
            local_188._0_4_ = *pEVar23;
            local_188._20_8_ = pFVar18[-1].PackageName;
            local_188._28_8_ = pFVar18->ObjectName;
            local_188._36_8_ = pFVar18->OuterName;
            local_138._0_8_ = (FScriptContainerElement *)0x0;
            local_188._44_8_ = pFVar18->PackageName;
            local_138._8_8_ = 0;
            local_188._52_8_ = pFVar18[1].ObjectName;
            local_188._60_8_ = pFVar18[1].OuterName;
            local_118 = (void *)0x0;
            local_188._68_8_ = pFVar18[1].PackageName;
            local_110 = 0;
            local_10c = 0x80;
            local_108 = 0xffffffff;
            local_104 = 0;
            local_f8 = (ForElementType<FSetElementId>)0x0;
            local_f0 = 0;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)local_138,
                        (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&pFVar18[2].ObjectName.Number);
            local_188._4_8_ = pFVar18->ObjectName;
            local_188._12_8_ = pFVar18->OuterName;
            local_188._20_8_ = pFVar18->PackageName;
            local_188._28_8_ = pFVar18[-1].ObjectName;
            local_188._36_8_ = pFVar18[-1].OuterName;
            local_188._44_8_ = pFVar18[-1].PackageName;
            FCoreRedirect::RedirectName((FCoreRedirect *)local_188,&local_1d8,param_2,true);
            if (((local_1d8.ObjectName == param_2->ObjectName) &&
                (local_1d8.OuterName == param_2->OuterName)) &&
               (local_1d8.PackageName == param_2->PackageName)) {
              local_f0 = 0;
              if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_f8);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_138,0,local_138._8_4_);
              iVar7 = SUB84(local_138._8_8_,4);
              local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
              if (iVar7 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
              }
              local_108 = 0xffffffff;
              local_104 = 0;
              local_110 = 0;
              if (0x80 < local_10c) {
                local_10c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
              }
              if (local_118 != (void *)0x0) {
                FMemory::Free(local_118);
              }
              if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._0_8_);
              }
              bVar12 = 0;
            }
            else {
              TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FCoreRedirectObjectName_const_&>(local_270,&local_1d8);
              local_f0 = 0;
              if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_f8);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_138,0,local_138._8_4_);
              iVar7 = SUB84(local_138._8_8_,4);
              local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
              if (iVar7 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
              }
              local_108 = 0xffffffff;
              local_104 = 0;
              local_110 = 0;
              if (0x80 < local_10c) {
                local_10c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
              }
              if (local_118 != (void *)0x0) {
                FMemory::Free(local_118);
              }
              if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._0_8_);
              }
              bVar12 = 1;
            }
            local_298 = (bool)(local_298 | bVar12);
          }
          pEVar23 = pEVar23 + 0x28;
          pFVar18 = (FCoreRedirectObjectName *)&pFVar18[6].PackageName;
        }
      }
    }
    uVar14 = (ulonglong)local_278;
    local_288 = local_288 + 0x68;
  } while( true );
}

// GetConfigKeyMap @ 141fcee00

TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
* __cdecl FCoreRedirects::GetConfigKeyMap(void)

{
  FCoreRedirectsContext *pFVar1;
  FCoreRedirectsContext *pFVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90);
  pFVar1 = (FCoreRedirectsContext *)*plVar3;
  pFVar2 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar2 = pFVar1;
  }
  if (pFVar2->bInitialized == (atomic<bool>)0x0) {
    `FCoreRedirects::GetConfigKeyMap'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar1 = (FCoreRedirectsContext *)*plVar3;
  pFVar2 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar2 = pFVar1;
  }
  return &pFVar2->ConfigKeyMap;
}

// GetFlagsForTypeClass @ 141fcf3f0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

ECoreRedirectFlags __cdecl FCoreRedirects::GetFlagsForTypeClass(UClass *param_1)

{
  FName FVar1;
  ECoreRedirectFlags EVar2;
  UPackage *pUVar3;
  
  FVar1 = (FName)param_1->_padding_;
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  EVar2 = GetFlagsForTypeName((FName)pUVar3->_padding_,FVar1);
  return EVar2;
}

// GetFlagsForTypeName @ 141fcf420

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

ECoreRedirectFlags __cdecl FCoreRedirects::GetFlagsForTypeName(FName param_1,FName param_2)

{
  bool bVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  FString *pFVar3;
  undefined4 extraout_var_07;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  ECoreRedirectFlags EVar13;
  FName local_res8;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_2;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  FVar11 = local_res10;
  if (param_1 == local_res8) {
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar12 = local_res10;
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
    if (FVar11 == FVar4) {
      return Type_Class;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar11 = local_res10;
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar2.Value);
    if (FVar12 == FVar5) {
      return Type_Class;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar12 = local_res10;
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar2.Value);
    if (FVar11 == FVar6) {
      return Type_Struct;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar11 = local_res10;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar2.Value);
    if (FVar12 == FVar7) {
      return Type_Struct;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar12 = local_res10;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar2.Value);
    if (FVar11 == FVar8) {
      return Type_Enum;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar11 = local_res10;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar2.Value);
    if (FVar12 == FVar9) {
      return Type_Enum;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar12 = local_res10;
    FVar10.Number = 0;
    FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_05,FVar2.Value);
    if (FVar11 == FVar10) {
      return Type_Package;
    }
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar11.Number = 0;
    FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_06,FVar2.Value);
    if (FVar12 == FVar11) {
      return Type_Function;
    }
    pFVar3 = ::FName::ToString(&local_res10,&local_28);
    bVar1 = ::FString::EndsWith(pFVar3,L"Property",8,IgnoreCase);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      return Type_Property;
    }
  }
  pFVar3 = ::FName::ToString(&local_res10,&local_28);
  bVar1 = ::FString::EndsWith(pFVar3,L"GeneratedClass",0xe,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar11 = local_res10;
  if (bVar1) {
    return Type_Class;
  }
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_07,FVar2.Value);
  EVar13 = Type_Object;
  if (FVar11 == FVar12) {
    EVar13 = Type_Enum;
  }
  return EVar13;
}

// GetMatchingRedirects @ 141fd1100

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::GetMatchingRedirects
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> *param_3,
          ECoreRedirectMatchFlags param_4)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FCoreRedirectsContext *pFVar6;
  undefined1 local_38 [8];
  FScopeCoreRedirectsReadLockedContext local_30;
  
  local_30.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar6 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar6 = pFVar3;
  }
  aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
  local_30.Context = pFVar6;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 == aVar5) {
      piVar1 = &(pFVar6->RWLock).RecursionCount;
      *piVar1 = *piVar1 + 1;
      goto LAB_141fd117f;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
LAB_141fd117f:
  bVar4 = GetMatchingRedirectsUnderReadLock(param_1,param_2,param_3,param_4,&local_30);
  if ((pFVar6->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
  }
  else {
    aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar5) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_38);
    }
    piVar1 = &(pFVar6->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  return bVar4;
}

// GetMatchingRedirectsUnderReadLock @ 141fd11f0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::GetMatchingRedirectsUnderReadLock
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> *param_3,
          ECoreRedirectMatchFlags param_4,FScopeCoreRedirectsReadLockedContext *param_5)

{
  ECoreRedirectFlags EVar1;
  int iVar2;
  FWildcardData *this;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar10;
  FCoreRedirectObjectName *pFVar11;
  FCoreRedirect *this_00;
  ECoreRedirectFlags EVar12;
  ECoreRedirectMatchFlags EVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FCoreRedirect *pFVar16;
  bool local_68;
  undefined1 local_66 [2];
  uint local_64;
  FCoreRedirect *local_60;
  FScriptContainerElement *local_58;
  FCoreRedirectsContext *local_50;
  FScriptContainerElement *local_48;
  
  bVar8 = false;
  local_68 = false;
  if ((((param_1 & Type_Package) == None) && ((param_1 & Category_Removed) == None)) &&
     (((param_4 & AllowPartialMatch) == None || (param_2->PackageName != (FName)0x0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_50 = param_5->Context;
  local_64 = (local_50->RedirectTypeMap).FastIterable.ArrayNum;
  uVar14 = (ulonglong)(int)local_64;
  pFVar15 = (local_50->RedirectTypeMap).FastIterable.AllocatorInstance.Data;
  local_48 = pFVar15 + uVar14 * 0x68;
  while( true ) {
    pFVar5 = local_48;
    local_58 = pFVar15;
    if ((local_50->RedirectTypeMap).FastIterable.ArrayNum != (int)uVar14) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&param_5);
    }
    if (pFVar15 == pFVar5) break;
    EVar1 = *(ECoreRedirectFlags *)pFVar15;
    EVar12 = EVar1 & Category_AllMask;
    if ((((EVar1 & (param_1 | Type_Asset) & Type_AllMask) != None) &&
        (EVar12 == (param_1 & Category_AllMask))) ||
       ((bVar4 && (((EVar1 & Type_Package) != None && (EVar12 == None)))))) {
      if ((EVar1 & Option_MatchSubstring) == None) {
        pFVar11 = (FCoreRedirectObjectName *)&param_2->PackageName;
        if ((EVar1 & (Type_Asset|Type_Package)) == None) {
          pFVar11 = param_2;
        }
        pTVar10 = TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                          *)(pFVar15 + 8),pFVar11->ObjectName);
        if (pTVar10 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
          iVar2 = pTVar10->ArrayNum;
          this_00 = (FCoreRedirect *)(pTVar10->AllocatorInstance).Data;
          pFVar16 = this_00 + iVar2;
          while( true ) {
            if (pTVar10->ArrayNum != iVar2) {
              local_66[0] = 0;
              `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_66);
            }
            pFVar15 = local_58;
            bVar8 = local_68;
            if (this_00 == pFVar16) break;
            if (((this_00->RedirectFlags & EVar1 & Type_AllMask) != None) &&
               (EVar12 == (this_00->RedirectFlags & Category_AllMask))) {
              EVar13 = param_4 | DisallowPartialLHSMatch;
              if ((EVar1 & Type_Asset) == None) {
                EVar13 = param_4;
              }
              bVar8 = FCoreRedirect::Matches(this_00,param_2,EVar13);
              if (bVar8) {
                pFVar15 = (param_3->AllocatorInstance).Data;
                local_68 = true;
                local_60 = this_00;
                if (((pFVar15 <= (FScriptContainerElement *)&local_60) &&
                    ((FScriptContainerElement *)&local_60 <
                     pFVar15 + (longlong)param_3->ArrayMax * 8)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                iVar9 = param_3->ArrayNum;
                if (iVar9 == param_3->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
                }
                param_3->ArrayNum = iVar9 + 1;
                *(FCoreRedirect **)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                     local_60;
              }
            }
            this_00 = this_00 + 1;
          }
        }
      }
      else {
        this = *(FWildcardData **)(pFVar15 + 0x58);
        if ((this == (FWildcardData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Wildcards",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                               ,0x740,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        local_68 = FWildcardData::Matches(this,EVar1,param_2,param_4,param_3);
        local_68 = (bool)(bVar8 | local_68);
        bVar8 = local_68;
      }
    }
    pFVar15 = pFVar15 + 0x68;
    uVar14 = (ulonglong)local_64;
  }
  return bVar8;
}

// GetRedirectedName @ 141fd2ff0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirectObjectName * __cdecl
FCoreRedirects::GetRedirectedName
          (FCoreRedirectObjectName *__return_storage_ptr__,ECoreRedirectFlags param_1,
          FCoreRedirectObjectName *param_2,ECoreRedirectMatchFlags param_3)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  atomic<unsigned_int> aVar4;
  FCoreRedirectsContext *pFVar5;
  undefined1 local_res8 [8];
  FScopeCoreRedirectsReadLockedContext local_28;
  
  local_28.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar5 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar5 = pFVar3;
  }
  aVar2 = (pFVar5->RWLock).WriteLockOwnerThreadId;
  local_28.Context = pFVar5;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 == aVar4) {
      piVar1 = &(pFVar5->RWLock).RecursionCount;
      *piVar1 = *piVar1 + 1;
      goto LAB_141fd306f;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar5->RWLock);
LAB_141fd306f:
  (__return_storage_ptr__->ObjectName).ComparisonIndex = 0;
  (__return_storage_ptr__->ObjectName).Number = 0;
  (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
  (__return_storage_ptr__->OuterName).Number = 0;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  RedirectNameAndValuesUnderReadLock
            (param_1,param_2,__return_storage_ptr__,(FCoreRedirect **)0x0,param_3,&local_28);
  if ((pFVar5->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar5->RWLock);
  }
  else {
    aVar2 = (pFVar5->RWLock).WriteLockOwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar4) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    piVar1 = &(pFVar5->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  return __return_storage_ptr__;
}

// GetValueRedirects @ 141fd3b30

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
FCoreRedirects::GetValueRedirects
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          ECoreRedirectMatchFlags param_3)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  atomic<unsigned_int> aVar4;
  FCoreRedirectsContext *pFVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  undefined1 local_res20 [8];
  FCoreRedirect *local_48;
  FScopeCoreRedirectsReadLockedContext local_40;
  FCoreRedirectObjectName local_30;
  
  local_40.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar5 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar5 = pFVar3;
  }
  aVar2 = (pFVar5->RWLock).WriteLockOwnerThreadId;
  local_40.Context = pFVar5;
  if ((aVar2 == (atomic<unsigned_int>)0x0) ||
     (aVar4 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar2 != aVar4)) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar5->RWLock);
  }
  else {
    piVar1 = &(pFVar5->RWLock).RecursionCount;
    *piVar1 = *piVar1 + 1;
  }
  pTVar6 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)0x0;
  local_30.ObjectName.ComparisonIndex.Value = 0;
  local_30.ObjectName.Number = 0;
  local_30.OuterName.ComparisonIndex.Value = 0;
  local_30.OuterName.Number = 0;
  local_30.PackageName.ComparisonIndex.Value = 0;
  local_30.PackageName.Number = 0;
  local_48 = (FCoreRedirect *)0x0;
  RedirectNameAndValuesUnderReadLock(param_1,param_2,&local_30,&local_48,param_3,&local_40);
  if ((local_48 != (FCoreRedirect *)0x0) &&
     (0 < *(int *)&(local_48->ValueChanges).field_0x8 - *(int *)&(local_48->ValueChanges).field_0x34
     )) {
    if ((6 < (byte)LogCoreRedirects._0_1_) &&
       (pFVar5->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1)) {
      FCoreRedirectObjectName::CombineNames
                ((FString *)&local_40,param_2->ObjectName,param_2->OuterName,param_2->PackageName);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      if (local_40.Context != (FCoreRedirectsContext *)0x0) {
        FMemory::Free(local_40.Context);
      }
    }
    pTVar6 = &local_48->ValueChanges;
  }
  if ((pFVar5->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar5->RWLock);
  }
  else {
    aVar2 = (pFVar5->RWLock).WriteLockOwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar4) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res20);
    }
    piVar1 = &(pFVar5->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  return pTVar6;
}

// Initialize @ 141fd4b00

void __cdecl FCoreRedirects::Initialize(void)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    `FCoreRedirects::Initialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  FCoreRedirectsContext::InitializeContext(&UE::CoreRedirects::Private::GlobalCoreRedirectContext);
  return;
}

// IsInDebugMode @ 141fd5af0

bool __cdecl FCoreRedirects::IsInDebugMode(void)

{
  FCoreRedirectsContext *pFVar1;
  FCoreRedirectsContext *pFVar2;
  
  pFVar1 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar2 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1;
}

// IsInitialized @ 141fd5b30

bool __cdecl FCoreRedirects::IsInitialized(void)

{
  FCoreRedirectsContext *pFVar1;
  FCoreRedirectsContext *pFVar2;
  
  pFVar1 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar2 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar2 = pFVar1;
  }
  return (bool)pFVar2->bInitialized;
}

// IsKnownMissing @ 141fd5b80

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::IsKnownMissing(ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FCoreRedirectsContext *pFVar6;
  undefined1 local_res8 [8];
  TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> local_28;
  FScopeCoreRedirectsReadLockedContext local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar6 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar6 = pFVar3;
  }
  aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
  local_18.Context = pFVar6;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 == aVar5) {
      piVar1 = &(pFVar6->RWLock).RecursionCount;
      *piVar1 = *piVar1 + 1;
      goto LAB_141fd5c00;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
LAB_141fd5c00:
  bVar4 = GetMatchingRedirectsUnderReadLock
                    (param_1 | Category_Removed,param_2,&local_28,None,&local_18);
  if ((pFVar6->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
  }
  else {
    aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar5) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    piVar1 = &(pFVar6->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar4;
}

// ReadRedirectsFromIni @ 141fd97e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FCoreRedirects::ReadRedirectsFromIni(FString *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  wchar_t wVar3;
  uint uVar4;
  FCoreRedirectsContext *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int *piVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  atomic<unsigned_int> aVar14;
  int iVar15;
  int iVar16;
  FConfigSection *pFVar17;
  FString *pFVar18;
  FCoreRedirect *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  FStaticBasicLogRecord *pFVar22;
  undefined1 *puVar23;
  int iVar24;
  FCoreRedirectsContext *pFVar25;
  FScriptContainerElement *pFVar26;
  ECoreRedirectFlags EVar27;
  ECoreRedirectFlags *pEVar28;
  wchar_t *pwVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_298 [8];
  FScriptContainerElement *local_290;
  FString local_288;
  undefined1 local_278;
  byte local_277;
  byte local_276;
  uint local_274;
  ECoreRedirectFlags local_270;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FName local_228;
  FName FStack_220;
  FName local_218;
  FCoreRedirectObjectName local_210;
  FCoreRedirectObjectName local_1f8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined8 local_1b0;
  FCoreRedirectsContext *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  FConfigSection *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  int local_160;
  wchar_t *local_158;
  undefined8 uStack_150;
  TArrayView<FCoreRedirect_const_,int> local_148;
  FConfigSection *local_138;
  int iStack_130;
  uint uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  FCoreRedirectsContext *local_c8;
  undefined1 local_c0;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  
  uVar30 = 0;
  local_274 = 0;
  plVar33 = (longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  local_c0 = 0;
  pFVar5 = (FCoreRedirectsContext *)*plVar33;
  pFVar25 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar5 != (FCoreRedirectsContext *)0x0) {
    pFVar25 = pFVar5;
  }
  local_148.DataPtr = (FCoreRedirect *)pFVar25;
  local_c8 = pFVar25;
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar25->RWLock).WriteLockOwnerThreadId != aVar14) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar25->RWLock);
    LOCK();
    (pFVar25->RWLock).WriteLockOwnerThreadId = aVar14;
    UNLOCK();
  }
  piVar8 = &(pFVar25->RWLock).RecursionCount;
  *piVar8 = *piVar8 + 1;
  pFVar5 = (FCoreRedirectsContext *)*plVar33;
  pFVar25 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar5 != (FCoreRedirectsContext *)0x0) {
    pFVar25 = pFVar5;
  }
  if (pFVar25->bInitialized == (atomic<bool>)0x0) {
    local_278 = 0;
    `FCoreRedirects::ReadRedirectsFromIni'::__l2::<lambda_1>::operator()(&local_278);
  }
  if (GConfig == (FConfigCacheIni *)0x0) {
    if (2 < (byte)LogCoreRedirects._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_______CORE_REDI_150818288,
                 (FLogCategoryBase *)&LogCoreRedirects);
    }
  }
  else {
    pFVar17 = FConfigCacheIni::GetSection(GConfig,L"CoreRedirects",false,param_1);
    if (pFVar17 != (FConfigSection *)0x0) {
      local_128 = &pFVar17->_padding_;
      local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.ArrayNum = 0;
      local_268.ArrayMax = 0;
      iStack_130 = 0;
      iVar31 = (int)pFVar17->_padding_;
      uStack_12c = 1;
      local_118 = iStack_130;
      iVar15 = 0;
      if (iVar31 != 0) {
        plVar33 = (longlong *)pFVar17->_padding_;
        if ((longlong *)pFVar17->_padding_ == (longlong *)0x0) {
          plVar33 = local_128;
        }
        uVar4 = (uint)*plVar33;
        local_118 = 0;
        iStack_130 = 0;
        while (uVar4 == 0) {
          lVar20 = (longlong)iStack_130;
          local_118 = local_118 + 0x20;
          iStack_130 = iStack_130 + 1;
          iVar15 = iVar31;
          if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
          goto LAB_141fd9961;
          uVar4 = *(uint *)((longlong)plVar33 + lVar20 * 4 + 4);
        }
        uStack_12c = -uVar4 & uVar4;
        uVar2 = (ulonglong)uStack_12c * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar15 = local_118 + -1 + (int)lVar20;
        local_160 = (int)lVar20;
        if (iVar31 < iVar15) {
          iVar15 = iVar31;
        }
      }
LAB_141fd9961:
      iStack_11c = iVar15;
      local_138 = pFVar17;
      uStack_120 = 0xffffffff;
      iStack_114 = iVar15;
      local_188 = pFVar17;
      TStack_180._padding_ = CONCAT44(uStack_12c,iStack_130);
      TStack_180.BaseBitIndex = local_118;
      TStack_180._28_4_ = iVar15;
      TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
      TStack_180.UnvisitedBitMask = 0xffffffff;
      TStack_180.CurrentBitIndex = iVar15;
      if (iVar15 < iVar31) {
        do {
          pFVar17 = local_188;
          local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_258.Data.ArrayNum = 0;
          local_258.Data.ArrayMax = 0;
          local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.Data.ArrayNum = 0;
          local_1d0.Data.ArrayMax = 0;
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          lVar20 = (longlong)iVar15 * 5 + 1;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          local_res18[0] = false;
          local_res20[0] = false;
          local_res10[0] = false;
          local_298[0] = false;
          pFVar18 = (FString *)(local_188->_padding_ + lVar20 * 8);
          if (*(char *)(local_188->_padding_ + 0x15 + lVar20 * 8) == '\0') {
            iVar31 = (pFVar18->Data).ArrayNum;
            uVar30 = uVar30 | 2;
            pFVar26 = (pFVar18->Data).AllocatorInstance.Data;
            local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c0.Data.ArrayNum = iVar31;
            local_274 = uVar30;
            if (iVar31 == 0) {
              local_1c0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar31,0,(ForAnyElementType *)&local_1c0,iVar31,
                         &local_1c0.Data.ArrayMax);
              memcpy(local_1c0.Data.AllocatorInstance.Data,pFVar26,(longlong)iVar31 * 2);
            }
            pFVar18 = &local_1c0;
          }
          else {
            uVar30 = uVar30 | 1;
            local_274 = uVar30;
            pFVar18 = FConfigValue::ExpandValue(&local_b8,pFVar18);
          }
          local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          lVar20 = (longlong)local_288.Data.ArrayNum;
          pFVar26 = (pFVar18->Data).AllocatorInstance.Data;
          if (local_288.Data.ArrayNum == 0) {
            local_288.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_288.Data.ArrayNum,0,(ForAnyElementType *)&local_288,
                       local_288.Data.ArrayNum,&local_288.Data.ArrayMax);
            memcpy(local_288.Data.AllocatorInstance.Data,pFVar26,lVar20 * 2);
          }
          if (((uVar30 & 2) != 0) &&
             (uVar30 = uVar30 & 0xfffffffd, local_274 = uVar30,
             local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (((uVar30 & 1) != 0) &&
             (local_274 = uVar30 & 0xfffffffe,
             local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Bool((wchar_t *)FVar21.Data,L"InstanceOnly=",local_res18);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Bool((wchar_t *)FVar21.Data,L"Removed=",local_res20);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Bool((wchar_t *)FVar21.Data,L"MatchSubstring=",local_res10);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Bool((wchar_t *)FVar21.Data,L"MatchWildcard=",local_298);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          iVar31 = 0;
          FParse::Value((wchar_t *)FVar21.Data,L"OldName=",&local_258,true,(wchar_t **)0x0);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Value((wchar_t *)FVar21.Data,L"NewName=",&local_1d0,true,(wchar_t **)0x0);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar21.Data = local_288.Data.AllocatorInstance.Data;
          }
          FParse::Value((wchar_t *)FVar21.Data,L"OverrideClassName=",&local_1e0,true,(wchar_t **)0x0
                       );
          lVar20 = *(longlong *)(pFVar17->_padding_ + (longlong)iVar15 * 0x28);
          uVar30 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
          if (*(int *)&((TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
                         *)((longlong)local_148.DataPtr + 0x10))->field_0x8 ==
              *(int *)&((TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
                         *)((longlong)local_148.DataPtr + 0x10))->field_0x34) {
LAB_141fd9cb8:
            if (1 < (byte)LogCoreRedirects._0_1_) {
              pFVar22 = &::LOG_Static;
LAB_141fda3cf:
              UE::Logging::Private::BasicLog<2>(pFVar22,(FLogCategoryBase *)&LogCoreRedirects);
            }
          }
          else {
            puVar6 = *(undefined1 **)
                      &((TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
                         *)((longlong)local_148.DataPtr + 0x10))->field_0x40;
            puVar23 = &((TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
                         *)((longlong)local_148.DataPtr + 0x10))->field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar23 = puVar6;
            }
            iVar15 = *(int *)(puVar23 +
                             (ulonglong)
                             (*(int *)&((TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
                                         *)((longlong)local_148.DataPtr + 0x10))->field_0x48 - 1U &
                             (int)((ulonglong)lVar20 >> 0x20) + uVar30) * 4);
            if (iVar15 == -1) goto LAB_141fd9cb8;
LAB_141fd9ca0:
            lVar1 = *(longlong *)((longlong)local_148.DataPtr + 0x10) + (longlong)iVar15 * 0x14;
            if (*(longlong *)
                 (*(longlong *)((longlong)local_148.DataPtr + 0x10) + (longlong)iVar15 * 0x14) !=
                lVar20) goto code_r0x000141fd9cb0;
            pEVar28 = (ECoreRedirectFlags *)(lVar1 + 8);
            if (lVar1 == 0) {
              pEVar28 = (ECoreRedirectFlags *)0x0;
            }
            if (pEVar28 == (ECoreRedirectFlags *)0x0) goto LAB_141fd9cb8;
            local_270 = *pEVar28;
            if (local_res18[0] != false) {
              local_270 = local_270 | Category_InstanceOnly;
            }
            if (local_res20[0] != false) {
              local_270 = local_270 | Category_Removed;
            }
            if ((local_298[0] != false) || (EVar27 = local_270, local_res10[0] != false)) {
              if ((2 < (byte)LogCoreRedirects._0_1_) && (local_res10[0] != false)) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
              }
              local_158 = L"...";
              uStack_150._0_4_ = 3;
              uStack_150._4_4_ = 0;
              bVar12 = ::FString::EndsWith(&local_258,L"...",3,CaseSensitive);
              local_277 = bVar12;
              local_276 = ::FString::StartsWith(&local_258,L"...",3,CaseSensitive);
              uVar10 = uStack_150;
              pwVar29 = local_158;
              FVar21.Data = local_258.Data.AllocatorInstance.Data;
              if ((local_res10[0] != false) || ((bVar12 && ((bool)local_276)))) {
                local_res10[0] = true;
              }
              else {
                local_res10[0] = false;
              }
              iVar15 = local_258.Data.ArrayNum + -1;
              if (local_258.Data.ArrayNum == 0) {
                iVar15 = 0;
              }
              iVar24 = iVar31;
              iVar32 = iVar31;
              while( true ) {
                uVar11 = uStack_150;
                local_a8.DataPtr = pwVar29;
                uStack_150._0_4_ = (int)uVar10;
                uStack_150._4_4_ = SUB84(uVar10,4);
                local_a8.Size = (int)uStack_150;
                local_a8._12_4_ = uStack_150._4_4_;
                iVar16 = iVar15;
                if (iVar15 - iVar24 < iVar15) {
                  iVar16 = iVar15 - iVar24;
                }
                iStack_1a0 = iVar31;
                if (0 < iVar16) {
                  iStack_1a0 = iVar16;
                }
                local_1a8 = (FCoreRedirectsContext *)
                            (FVar21.Data + ((longlong)iVar15 - (longlong)iStack_1a0) * 2);
                local_98._12_4_ = uStack_19c;
                local_98.Size = iStack_1a0;
                uStack_150 = uVar11;
                local_98.DataPtr = (wchar_t *)local_1a8;
                iVar16 = UE::String::FindFirst(&local_98,&local_a8,CaseSensitive);
                bVar9 = local_276;
                if ((iVar16 == -1) || (iVar16 + iVar24 == -1)) break;
                iVar24 = iVar16 + iVar24 + 3;
                iVar32 = iVar32 + 1;
              }
              if (((local_277 == 0) && ((local_276 == 0 && (local_res10[0] == false)))) ||
                 ((int)((uint)local_277 + (uint)local_276) < iVar32)) {
                if ((byte)LogCoreRedirects._0_1_ < 2) goto LAB_141fda3db;
                pFVar22 = &::LOG_Static;
                goto LAB_141fda3cf;
              }
              EVar27 = local_270;
              if (local_277 != 0) {
                EVar27 = local_270 | Option_MatchPrefix;
                iVar31 = local_258.Data.ArrayNum + -1;
                if (local_258.Data.ArrayNum == 0) {
                  iVar31 = 0;
                }
                if (iVar31 + -3 < iVar31) {
                  iVar31 = iVar31 + -3;
                }
                iVar15 = 0;
                if (0 < iVar31) {
                  iVar15 = iVar31;
                }
                ::FString::RemoveAt(&local_258,iVar15,3,No);
              }
              if (bVar9 != 0) {
                EVar27 = EVar27 | Option_MatchSuffix;
                ::FString::RemoveAt(&local_258,0,3,No);
              }
              EVar27 = EVar27 | -(uint)(local_res10[0] != false) & Option_MatchSubstring;
            }
            local_108 = local_1d0.Data.AllocatorInstance.Data;
            local_1f8.ObjectName.ComparisonIndex.Value = 0;
            local_1f8.ObjectName.Number = 0;
            local_1f8.OuterName.ComparisonIndex.Value = 0;
            local_1f8.OuterName.Number = 0;
            local_1f8.PackageName.ComparisonIndex.Value = 0;
            local_1f8.PackageName.Number = 0;
            iVar31 = 0;
            iStack_100 = local_1d0.Data.ArrayNum + -1;
            if (local_1d0.Data.ArrayNum == 0) {
              iStack_100 = iVar31;
            }
            local_88._12_4_ = uStack_fc;
            local_88.Size = iStack_100;
            local_88.DataPtr = (wchar_t *)local_1d0.Data.AllocatorInstance.Data;
            bVar12 = FCoreRedirectObjectName::ExpandNames
                               (&local_88,&local_1f8.ObjectName,&local_1f8.OuterName,
                                &local_1f8.PackageName);
            if (!bVar12) {
              local_1b0 = 0;
              local_1f8.PackageName.ComparisonIndex.Value = 0;
              local_1f8.PackageName.Number = 0;
              local_1f8.OuterName.ComparisonIndex.Value = 0;
              local_1f8.OuterName.Number = 0;
              local_1f8.ObjectName.ComparisonIndex.Value = 0;
              local_1f8.ObjectName.Number = 0;
            }
            local_f8 = local_258.Data.AllocatorInstance.Data;
            local_210.ObjectName.ComparisonIndex.Value = 0;
            local_210.ObjectName.Number = 0;
            local_210.OuterName.ComparisonIndex.Value = 0;
            local_210.OuterName.Number = 0;
            local_210.PackageName.ComparisonIndex.Value = 0;
            local_210.PackageName.Number = 0;
            iStack_f0 = local_258.Data.ArrayNum + -1;
            if (local_258.Data.ArrayNum == 0) {
              iStack_f0 = iVar31;
            }
            local_78._12_4_ = uStack_ec;
            local_78.Size = iStack_f0;
            local_78.DataPtr = (wchar_t *)local_258.Data.AllocatorInstance.Data;
            bVar12 = FCoreRedirectObjectName::ExpandNames
                               (&local_78,&local_210.ObjectName,&local_210.OuterName,
                                &local_210.PackageName);
            if (!bVar12) {
              local_190 = 0;
              local_210.PackageName.ComparisonIndex.Value = 0;
              local_210.PackageName.Number = 0;
              local_210.OuterName.ComparisonIndex.Value = 0;
              local_210.OuterName.Number = 0;
              local_210.ObjectName.ComparisonIndex.Value = 0;
              local_210.ObjectName.Number = 0;
            }
            iVar15 = local_268.ArrayNum;
            if (local_268.ArrayNum == local_268.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8a0,&local_268.AllocatorInstance,&local_268.ArrayMax);
            }
            local_268.ArrayNum = iVar15 + 1;
            pFVar19 = FCoreRedirect::FCoreRedirect
                                ((FCoreRedirect *)
                                 (local_268.AllocatorInstance.Data + (longlong)iVar15 * 0xa0),EVar27
                                 ,&local_210,&local_1f8);
            if (1 < local_1e0.Data.ArrayNum) {
              local_e8 = local_1e0.Data.AllocatorInstance.Data;
              local_228.ComparisonIndex.Value = 0;
              local_228.Number = 0;
              iStack_e0 = local_1e0.Data.ArrayNum + -1;
              if (local_1e0.Data.ArrayNum == 0) {
                iStack_e0 = iVar31;
              }
              FStack_220.ComparisonIndex.Value = 0;
              FStack_220.Number = 0;
              local_68[0]._12_4_ = uStack_dc;
              local_68[0].Size = iStack_e0;
              local_68[0].DataPtr = (wchar_t *)local_1e0.Data.AllocatorInstance.Data;
              local_218.ComparisonIndex.Value = 0;
              local_218.Number = 0;
              bVar12 = FCoreRedirectObjectName::ExpandNames
                                 (local_68,&local_228,&FStack_220,&local_218);
              if (!bVar12) {
                local_198 = 0;
                local_218.ComparisonIndex.Value = 0;
                local_218.Number = 0;
                FStack_220.ComparisonIndex.Value = 0;
                FStack_220.Number = 0;
                local_228.ComparisonIndex.Value = 0;
                local_228.Number = 0;
              }
              (pFVar19->OverrideClassName).ObjectName = local_228;
              (pFVar19->OverrideClassName).OuterName = FStack_220;
              (pFVar19->OverrideClassName).PackageName = local_218;
            }
            iVar31 = ::FString::Find(&local_288,L"ValueChanges=",0xd,IgnoreCase,FromStart,-1);
            if (iVar31 != -1) {
              iVar31 = ::FString::Find(&local_288,L"(",1,CaseSensitive,FromStart,iVar31);
              ::FString::RightChop(&local_288,&local_d8,iVar31);
              local_290 = local_d8.Data.AllocatorInstance.Data + 2;
              if (*(short *)local_d8.Data.AllocatorInstance.Data == 0x28) {
                SkipWhitespace((wchar_t **)&local_290);
                if (*(wchar_t *)local_290 == L')') {
                  pFVar26 = local_290 + 2;
LAB_141fda37c:
                  if (pFVar26 == (FScriptContainerElement *)0x0) goto LAB_141fda321;
                  goto LAB_141fda3b2;
                }
                SkipWhitespace((wchar_t **)&local_290);
                wVar3 = *(wchar_t *)local_290;
                while (wVar3 == L'(') {
                  local_290 = local_290 + 2;
                  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_238.Data.ArrayNum = 0;
                  local_238.Data.ArrayMax = 0;
                  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_248.Data.ArrayNum = 0;
                  local_248.Data.ArrayMax = 0;
                  local_290 = (FScriptContainerElement *)
                              FPropertyHelpers::ReadToken((wchar_t *)local_290,&local_238,true);
                  if (local_290 == (FScriptContainerElement *)0x0) {
LAB_141fda346:
                    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_248.Data.AllocatorInstance.Data);
                    }
                    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_238.Data.AllocatorInstance.Data);
                    }
                    goto LAB_141fda321;
                  }
                  SkipWhitespace((wchar_t **)&local_290);
                  wVar3 = *(wchar_t *)local_290;
                  local_290 = local_290 + 2;
                  if (wVar3 != L',') goto LAB_141fda346;
                  SkipWhitespace((wchar_t **)&local_290);
                  local_290 = (FScriptContainerElement *)
                              FPropertyHelpers::ReadToken((wchar_t *)local_290,&local_248,true);
                  if (local_290 == (FScriptContainerElement *)0x0) goto LAB_141fda346;
                  SkipWhitespace((wchar_t **)&local_290);
                  wVar3 = *(wchar_t *)local_290;
                  local_290 = local_290 + 2;
                  if (wVar3 != L')') goto LAB_141fda346;
                  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ::Emplace<FString_const_&,FString_const_&>
                            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                              *)&pFVar19->ValueChanges,&local_238,&local_248);
                  wVar3 = *(wchar_t *)local_290;
                  pFVar26 = local_290 + 2;
                  local_290 = pFVar26;
                  if (wVar3 == L')') {
                    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_248.Data.AllocatorInstance.Data);
                    }
                    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_238.Data.AllocatorInstance.Data);
                    }
                    goto LAB_141fda37c;
                  }
                  if (wVar3 != L',') goto LAB_141fda346;
                  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_248.Data.AllocatorInstance.Data);
                  }
                  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  }
                  SkipWhitespace((wchar_t **)&local_290);
                  wVar3 = *(wchar_t *)local_290;
                }
                local_290 = local_290 + 2;
              }
LAB_141fda321:
              if (1 < (byte)LogCoreRedirects._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
              }
              TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::RemoveAt
                        (&local_268,local_268.ArrayNum + -1,Default);
LAB_141fda3b2:
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
            }
          }
LAB_141fda3db:
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
          uVar30 = local_274;
          iVar15 = TStack_180.CurrentBitIndex;
        } while (TStack_180.CurrentBitIndex < (int)*(longlong *)&(TStack_180.Array)->NumBits);
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar29 = L"";
      }
      else {
        pwVar29 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::RemoveSectionFromBranch(GConfig,L"CoreRedirects",pwVar29);
      iVar31 = local_268.ArrayNum;
      local_1a8 = (FCoreRedirectsContext *)local_268.AllocatorInstance.Data;
      if ((local_268.ArrayNum < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      iStack_1a0 = iVar31;
      local_148._12_4_ = uStack_19c;
      local_148.ArrayNum = iVar31;
      local_148.DataPtr = (FCoreRedirect *)local_1a8;
      bVar12 = AddRedirectList(&local_148,param_1);
      DestructItems<FCoreRedirect,int>
                ((FCoreRedirect *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
      if ((FCoreRedirectsContext *)local_268.AllocatorInstance.Data != (FCoreRedirectsContext *)0x0)
      {
        FMemory::Free(local_268.AllocatorInstance.Data);
      }
      goto LAB_141fda54f;
    }
    if (5 < (byte)LogCoreRedirects._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
    }
  }
  bVar12 = false;
LAB_141fda54f:
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)&local_c8);
  return bVar12;
code_r0x000141fd9cb0:
  iVar15 = *(int *)(lVar1 + 0xc);
  if (iVar15 == -1) goto LAB_141fd9cb8;
  goto LAB_141fd9ca0;
}

// RedirectNameAndValues @ 141fdb3a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::RedirectNameAndValues
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          FCoreRedirectObjectName *param_3,FCoreRedirect **param_4,ECoreRedirectMatchFlags param_5)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FCoreRedirectsContext *pFVar6;
  undefined1 local_38 [8];
  FScopeCoreRedirectsReadLockedContext local_30;
  
  local_30.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar6 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar6 = pFVar3;
  }
  aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
  local_30.Context = pFVar6;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 == aVar5) {
      piVar1 = &(pFVar6->RWLock).RecursionCount;
      *piVar1 = *piVar1 + 1;
      goto LAB_141fdb41f;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
LAB_141fdb41f:
  bVar4 = RedirectNameAndValuesUnderReadLock(param_1,param_2,param_3,param_4,param_5,&local_30);
  if ((pFVar6->RWLock).RecursionCount < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
  }
  else {
    aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar5) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_38);
    }
    piVar1 = &(pFVar6->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
  }
  return bVar4;
}

// RedirectNameAndValuesUnderReadLock @ 141fdb4a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::RedirectNameAndValuesUnderReadLock
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          FCoreRedirectObjectName *param_3,FCoreRedirect **param_4,ECoreRedirectMatchFlags param_5,
          FScopeCoreRedirectsReadLockedContext *param_6)

{
  ECoreRedirectFlags EVar1;
  FCoreRedirect *pFVar2;
  code *pcVar3;
  EMatchFlags EVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FCoreRedirectObjectName *pFVar9;
  uint uVar10;
  EMatchFlags EVar11;
  longlong lVar12;
  FIdentityFunctor local_res10;
  FCoreRedirect **local_res20;
  TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FString local_c8;
  FCoreRedirectObjectName *local_b8;
  ECoreRedirectMatchFlags local_b0;
  FCoreRedirect ***local_a8;
  FName local_a0;
  FName FStack_98;
  FName local_90;
  FCoreRedirectObjectName local_88;
  FCoreRedirectObjectName local_70;
  FCoreRedirectObjectName local_58;
  
  local_90 = param_2->PackageName;
  local_a0 = param_2->ObjectName;
  FStack_98 = param_2->OuterName;
  param_3->ObjectName = local_a0;
  param_3->OuterName = FStack_98;
  local_a8 = &local_res20;
  param_3->PackageName = param_2->PackageName;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_res20 = param_4;
  bVar6 = GetMatchingRedirectsUnderReadLock(param_1,param_2,&local_e8,param_5,param_6);
  if (bVar6) {
    if (local_e8.ArrayNum < 2) {
      if ((local_e8.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar9 = `FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l2::<lambda_1>::operator()
                         (&local_a8,&local_58,*(FCoreRedirect **)local_e8.AllocatorInstance.Data,
                          param_3);
      FVar5 = pFVar9->OuterName;
      param_3->ObjectName = pFVar9->ObjectName;
      param_3->OuterName = FVar5;
      param_3->PackageName = pFVar9->PackageName;
    }
    else {
      local_b0 = param_5;
      local_b8 = param_2;
      AlgoImpl::
      IntroSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,_FCoreRedirects::RedirectNameAndValuesUnderReadLock_::__l8::<lambda_2>_>_>
                ((FCoreRedirect **)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,local_res10,
                 (<lambda_2> *)&local_b8);
      if ((local_e8.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar9 = `FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l2::<lambda_1>::operator()
                         (&local_a8,&local_88,*(FCoreRedirect **)local_e8.AllocatorInstance.Data,
                          param_3);
      uVar10 = 1;
      FVar5 = pFVar9->OuterName;
      param_3->ObjectName = pFVar9->ObjectName;
      param_3->OuterName = FVar5;
      param_3->PackageName = pFVar9->PackageName;
      if (1 < local_e8.ArrayNum) {
        lVar12 = 8;
        EVar11 = (param_5 & AllowPartialMatch) * 2;
        EVar4 = EVar11 | DisallowPartialLHSMatch;
        if ((param_5 & DisallowPartialLHSMatch) == None) {
          EVar4 = EVar11;
        }
        do {
          uVar8 = 0;
          if ((int)uVar10 < local_e8.ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar2 = *(FCoreRedirect **)(local_e8.AllocatorInstance.Data + lVar12);
          EVar1 = pFVar2->RedirectFlags;
          if ((EVar1 & Option_MatchSubstring) == Option_MatchSubstring) {
            EVar11 = EVar4 | CheckSubString;
          }
          else if ((EVar1 >> 0x18 & 1) == 0) {
            EVar11 = EVar4;
            if ((EVar1 >> 0x19 & 1) != 0) {
              EVar11 = EVar4 | CheckSuffix;
            }
          }
          else {
            EVar11 = EVar4 | CheckPrefix;
          }
          bVar6 = FCoreRedirectObjectName::Matches(&pFVar2->OldName,param_3,EVar11);
          if (bVar6) {
            pFVar9 = `FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l2::<lambda_1>::
                     operator()(&local_a8,&local_70,pFVar2,param_3);
            FVar5 = pFVar9->OuterName;
            param_3->ObjectName = pFVar9->ObjectName;
            param_3->OuterName = FVar5;
            param_3->PackageName = pFVar9->PackageName;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar10 < local_e8.ArrayNum);
      }
    }
  }
  if (((param_3->ObjectName == param_2->ObjectName) && (param_3->OuterName == param_2->OuterName))
     && (param_3->PackageName == param_2->PackageName)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((5 < (byte)LogCoreRedirects._0_1_) &&
      (param_6->Context->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1)) && (bVar6 != false))
  {
    FCoreRedirectObjectName::CombineNames
              (&local_c8,param_3->ObjectName,param_3->OuterName,param_3->PackageName);
    FCoreRedirectObjectName::CombineNames
              (&local_d8,param_2->ObjectName,param_2->OuterName,param_2->PackageName);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar6;
}

// RegisterNativeRedirectsUnderWriteLock @ 141fe0120

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
FCoreRedirects::RegisterNativeRedirectsUnderWriteLock
          (FScopeCoreRedirectsWriteLockedContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> local_48;
  FCoreRedirect *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  FString local_28;
  TArrayView<FCoreRedirect_const_,int> local_18;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  RegisterNativeRedirects40(&local_48);
  RegisterNativeRedirects46(&local_48);
  RegisterNativeRedirects49(&local_48);
  ::FString::FString(&local_28,L"RegisterNativeRedirects");
  iStack_30 = local_48.ArrayNum;
  local_38 = (FCoreRedirect *)local_48.AllocatorInstance.Data;
  if (local_48.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  AddRedirectListUnderWriteLock(&local_18,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  DestructItems<FCoreRedirect,int>
            ((FCoreRedirect *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FCoreRedirect *)local_48.AllocatorInstance.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// RemoveAllAssetRedirects @ 141fe1c20

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FCoreRedirects::RemoveAllAssetRedirects(void)

{
  int *piVar1;
  FCoreRedirectsContext *pFVar2;
  atomic<unsigned_int> aVar3;
  FRedirectNameMap *this;
  FCoreRedirectsContext *pFVar4;
  FCoreRedirectsContext *local_18;
  undefined1 local_10;
  
  local_10 = 0;
  pFVar2 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar4 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar4 = pFVar2;
  }
  local_18 = pFVar4;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar4->RWLock).WriteLockOwnerThreadId != aVar3) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->RWLock);
    LOCK();
    (pFVar4->RWLock).WriteLockOwnerThreadId = aVar3;
    UNLOCK();
  }
  piVar1 = &(pFVar4->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  this = FRedirectTypeMap::FindOrAdd(&pFVar4->RedirectTypeMap,Type_Asset);
  TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this);
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)&local_18);
  return;
}

// RemoveKnownMissing @ 141fe1f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl
FCoreRedirects::RemoveKnownMissing
          (ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,ECoreRedirectFlags param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 auStackY_138 [32];
  undefined4 uStack_dc;
  FString local_d8;
  TArrayView<FCoreRedirect_const_,int> local_c8;
  undefined1 local_b8 [80];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (((param_3 & ~Option_MissingLoad) != None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Channel & ~ECoreRedirectFlags::Option_MissingLoad) == ECoreRedirectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                         ,0x7ca,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_b8._4_8_ = param_2->ObjectName;
  local_b8._12_8_ = param_2->OuterName;
  local_b8._20_8_ = param_2->PackageName;
  local_b8._0_4_ = param_1 | param_3 | Category_Removed;
  local_b8._52_8_ = 0;
  local_b8._60_8_ = 0;
  local_b8._68_8_ = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_b8._28_8_ = local_b8._4_8_;
  local_b8._36_8_ = local_b8._12_8_;
  local_b8._44_8_ = local_b8._20_8_;
  ::FString::FString(&local_d8,L"RemoveKnownMissing");
  local_c8.DataPtr = (FCoreRedirect *)local_b8;
  local_c8._12_4_ = uStack_dc;
  local_c8.ArrayNum = 1;
  bVar3 = RemoveRedirectList(&local_c8,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return bVar3;
}

// RemoveRedirectList @ 141fe22d0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::RemoveRedirectList(TArrayView<FCoreRedirect_const_,int> *param_1,FString *param_2)

{
  int *piVar1;
  FCoreRedirectsContext *pFVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  FCoreRedirectsContext *pFVar5;
  ForAnyElementType FVar6;
  FName *pFVar7;
  FCoreRedirect *pFVar8;
  bool bVar9;
  FCoreRedirect *pFVar10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FCoreRedirectsContext *local_38;
  undefined1 local_30;
  
  local_30 = 0;
  pFVar2 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar5 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar2 != (FCoreRedirectsContext *)0x0) {
    pFVar5 = pFVar2;
  }
  local_38 = pFVar5;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((pFVar5->RWLock).WriteLockOwnerThreadId != aVar4) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar5->RWLock);
    LOCK();
    (pFVar5->RWLock).WriteLockOwnerThreadId = aVar4;
    UNLOCK();
  }
  piVar1 = &(pFVar5->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  if (5 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  pFVar10 = param_1->DataPtr;
  bVar9 = false;
  pFVar8 = pFVar10 + param_1->ArrayNum;
  if (pFVar10 != pFVar8) {
    pFVar7 = &(pFVar10->NewName).PackageName;
    do {
      if (((pFVar7[-5] == (FName)0x0) && (pFVar7[-3] == (FName)0x0)) ||
         ((pFVar7[-2] == (FName)0x0 && (*pFVar7 == (FName)0x0)))) {
        if (1 < (byte)LogCoreRedirects._0_1_) {
          FCoreRedirectObjectName::CombineNames(&local_b8,pFVar7[-2],pFVar7[-1],*pFVar7);
          FCoreRedirectObjectName::CombineNames(&local_c8,pFVar7[-5],pFVar7[-4],pFVar7[-3]);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          FVar6.Data = local_b8.Data.AllocatorInstance.Data;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            FVar6.Data = local_b8.Data.AllocatorInstance.Data;
          }
LAB_141fe26f8:
          if (FVar6.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar6.Data);
          }
        }
      }
      else if ((int)(pFVar7[5].Number - pFVar7[0xb].ComparisonIndex.Value) < 1) {
        bVar3 = FCoreRedirectObjectName::HasValidCharacters
                          ((FCoreRedirectObjectName *)(pFVar7 + -5),pFVar10->RedirectFlags);
        if ((bVar3) &&
           (bVar3 = FCoreRedirectObjectName::HasValidCharacters
                              ((FCoreRedirectObjectName *)(pFVar7 + -2),pFVar10->RedirectFlags),
           bVar3)) {
          if ((*pFVar7 == pFVar7[-3]) || (pFVar7[-4] == (FName)0x0)) {
            if (((pFVar10->RedirectFlags & Option_MatchSubstring) != None) &&
               (5 < (byte)LogCoreRedirects._0_1_)) {
              FCoreRedirectObjectName::CombineNames(&local_68,pFVar7[-5],pFVar7[-4],pFVar7[-3]);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects)
              ;
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
            bVar3 = RemoveSingleRedirectUnderWriteLock
                              (pFVar10,param_2,(FScopeCoreRedirectsWriteLockedContext *)&local_38);
            bVar9 = (bool)(bVar9 | bVar3);
          }
          else if (1 < (byte)LogCoreRedirects._0_1_) {
            FCoreRedirectObjectName::CombineNames(&local_78,pFVar7[-2],pFVar7[-1],*pFVar7);
            FCoreRedirectObjectName::CombineNames(&local_88,pFVar7[-5],pFVar7[-4],pFVar7[-3]);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
            FVar6.Data = local_78.Data.AllocatorInstance.Data;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
              FVar6.Data = local_78.Data.AllocatorInstance.Data;
            }
            goto LAB_141fe26f8;
          }
        }
        else if (1 < (byte)LogCoreRedirects._0_1_) {
          FCoreRedirectObjectName::CombineNames(&local_48,pFVar7[-2],pFVar7[-1],*pFVar7);
          FCoreRedirectObjectName::CombineNames(&local_58,pFVar7[-5],pFVar7[-4],pFVar7[-3]);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          FVar6.Data = local_48.Data.AllocatorInstance.Data;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            FVar6.Data = local_48.Data.AllocatorInstance.Data;
          }
          goto LAB_141fe26f8;
        }
      }
      else if (1 < (byte)LogCoreRedirects._0_1_) {
        FCoreRedirectObjectName::CombineNames(&local_98,pFVar7[-2],pFVar7[-1],*pFVar7);
        FCoreRedirectObjectName::CombineNames(&local_a8,pFVar7[-5],pFVar7[-4],pFVar7[-3]);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
        FVar6.Data = local_98.Data.AllocatorInstance.Data;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          FVar6.Data = local_98.Data.AllocatorInstance.Data;
        }
        goto LAB_141fe26f8;
      }
      pFVar10 = pFVar10 + 1;
      pFVar7 = pFVar7 + 0x14;
    } while (pFVar10 != pFVar8);
  }
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)&local_38);
  return bVar9;
}

// RemoveSingleRedirectUnderWriteLock @ 141fe2750

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FCoreRedirects::RemoveSingleRedirectUnderWriteLock
          (FCoreRedirect *param_1,FString *param_2,FScopeCoreRedirectsWriteLockedContext *param_3)

{
  ECoreRedirectFlags EVar1;
  TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
  *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FWildcardData *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  FName FVar10;
  longlong lVar11;
  uint uVar12;
  FCoreRedirect *pFVar13;
  FCoreRedirect *pFVar14;
  ECoreRedirectFlags EVar15;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lVar11 = *(longlong *)param_3;
  EVar1 = param_1->RedirectFlags;
  EVar15 = EVar1 & Option_MatchSubstring;
  if (*(int *)(lVar11 + 0x68) != *(int *)(lVar11 + 0x94)) {
    lVar9 = *(longlong *)(lVar11 + 0xa0);
    if (*(longlong *)(lVar11 + 0xa0) == 0) {
      lVar9 = lVar11 + 0x98;
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar11 + 0xa8) - Type_Object & EVar1) * 4);
    if (iVar8 != -1) {
      do {
        lVar9 = *(longlong *)(lVar11 + 0x60) + (longlong)iVar8 * 0x18;
        if (*(ECoreRedirectFlags *)(*(longlong *)(lVar11 + 0x60) + (longlong)iVar8 * 0x18) == EVar1)
        {
          if (lVar9 == 0) {
            return false;
          }
          this = *(TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                   **)(lVar9 + 8);
          if (this == (TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                       *)0x0) {
            return false;
          }
          if (EVar15 == None) {
            if ((EVar1 & (Type_Asset|Type_Package)) == None) {
              FVar10 = (param_1->OldName).ObjectName;
            }
            else {
              FVar10 = (param_1->OldName).PackageName;
            }
            pFVar6 = (FWildcardData *)
                     TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
                     ::Find(this,FVar10);
          }
          else if (EVar15 == Option_MatchSubstring) {
            pFVar6 = TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->
                               ((TSharedPtr<FCoreRedirects::FWildcardData,1> *)(this + 1));
          }
          else if ((EVar1 >> 0x18 & 1) == 0) {
            if ((EVar1 >> 0x19 & 1) == 0) {
              return false;
            }
            pFVar6 = TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->
                               ((TSharedPtr<FCoreRedirects::FWildcardData,1> *)(this + 1));
            pFVar6 = (FWildcardData *)&pFVar6->Suffixes;
          }
          else {
            pFVar6 = TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->
                               ((TSharedPtr<FCoreRedirects::FWildcardData,1> *)(this + 1));
            pFVar6 = (FWildcardData *)&pFVar6->Prefixes;
          }
          if (pFVar6 == (FWildcardData *)0x0) {
            return false;
          }
          iVar8 = (pFVar6->Substrings).ArrayNum;
          uVar12 = 0;
          if (iVar8 < 1) {
            return false;
          }
          lVar11 = 0;
          while( true ) {
            uVar5 = 0;
            if ((int)uVar12 < iVar8) {
              uVar5 = ~uVar12 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar7 = (pFVar6->Substrings).AllocatorInstance.Data + lVar11;
            if (((((*(ECoreRedirectFlags *)pFVar7 == param_1->RedirectFlags) &&
                  (*(FName *)(pFVar7 + 4) == (param_1->OldName).ObjectName)) &&
                 (*(FName *)(pFVar7 + 0xc) == (param_1->OldName).OuterName)) &&
                ((*(FName *)(pFVar7 + 0x14) == (param_1->OldName).PackageName &&
                 (*(FName *)(pFVar7 + 0x1c) == (param_1->NewName).ObjectName)))) &&
               ((*(FName *)(pFVar7 + 0x24) == (param_1->NewName).OuterName &&
                (*(FName *)(pFVar7 + 0x2c) == (param_1->NewName).PackageName)))) break;
            iVar8 = (pFVar6->Substrings).ArrayNum;
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0xa0;
            if (iVar8 <= (int)uVar12) {
              return false;
            }
          }
          TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&pFVar6->Substrings,uVar12,Default);
          if (EVar15 == None) {
            return true;
          }
          if ((*(longlong *)&this[1].Pairs.Elements == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar6 = *(FWildcardData **)&this[1].Pairs.Elements;
          (pFVar6->PredictMatch).MinimumWordLength = 0x10;
          memset((pFVar6->PredictMatch).BitApproxTable,0xff,0x200);
          memset((pFVar6->PredictMatch).PredictMatchTable,0xff,0x200);
          iVar8 = (pFVar6->Prefixes).ArrayNum;
          pFVar14 = (FCoreRedirect *)(pFVar6->Prefixes).AllocatorInstance.Data;
          pFVar13 = pFVar14 + iVar8;
          while( true ) {
            if ((pFVar6->Prefixes).ArrayNum != iVar8) {
              `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pFVar14 == pFVar13) break;
            FWildcardData::AddPredictionWords(pFVar6,pFVar14);
            pFVar14 = pFVar14 + 1;
          }
          iVar8 = (pFVar6->Suffixes).ArrayNum;
          pFVar14 = (FCoreRedirect *)(pFVar6->Suffixes).AllocatorInstance.Data;
          pFVar13 = pFVar14 + iVar8;
          while( true ) {
            if ((pFVar6->Suffixes).ArrayNum != iVar8) {
              `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar14 == pFVar13) break;
            FWildcardData::AddPredictionWords(pFVar6,pFVar14);
            pFVar14 = pFVar14 + 1;
          }
          iVar8 = (pFVar6->Substrings).ArrayNum;
          pFVar14 = (FCoreRedirect *)(pFVar6->Substrings).AllocatorInstance.Data;
          pFVar13 = pFVar14 + iVar8;
          while( true ) {
            if ((pFVar6->Substrings).ArrayNum != iVar8) {
              `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if (pFVar14 == pFVar13) break;
            FWildcardData::AddPredictionWords(pFVar6,pFVar14);
            pFVar14 = pFVar14 + 1;
          }
          return true;
        }
        iVar8 = *(int *)(lVar9 + 0x10);
      } while (iVar8 != -1);
    }
  }
  return false;
}

// RunTests @ 141fe4740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl FCoreRedirects::RunTests(void)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  FCoreRedirect *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  ForAnyElementType local_1018;
  undefined8 local_1010;
  ForAnyElementType local_1008;
  undefined8 local_1000;
  TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> local_ff8;
  FCoreRedirectObjectName local_fe8;
  FCoreRedirectObjectName local_fd0;
  FCoreRedirectObjectName local_fb8;
  FCoreRedirectObjectName local_fa0;
  FCoreRedirectObjectName local_f88;
  FCoreRedirectObjectName local_f70;
  FCoreRedirectObjectName local_f58;
  FCoreRedirectObjectName local_f40;
  FCoreRedirectObjectName local_f28;
  FCoreRedirectObjectName local_f10;
  FCoreRedirectObjectName local_ef8;
  FCoreRedirectObjectName local_ee0;
  FCoreRedirectObjectName local_ec8;
  FCoreRedirectObjectName local_eb0;
  FCoreRedirectObjectName local_e98;
  FCoreRedirectObjectName local_e80;
  FCoreRedirectObjectName local_e68;
  FCoreRedirectObjectName local_e50;
  FCoreRedirectObjectName local_e38;
  FCoreRedirectObjectName local_e20;
  FCoreRedirectObjectName local_e08;
  FCoreRedirectObjectName local_df0;
  FCoreRedirectObjectName local_dd8;
  FCoreRedirectObjectName local_dc0;
  FCoreRedirectObjectName local_da8;
  FCoreRedirectObjectName local_d90;
  FCoreRedirectObjectName local_d78;
  FCoreRedirectObjectName local_d60;
  FCoreRedirectObjectName local_d48;
  FCoreRedirectObjectName local_d30;
  FCoreRedirectObjectName local_d18;
  FCoreRedirectObjectName local_d00;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  FCoreRedirect *local_bf8;
  int iStack_bf0;
  undefined4 uStack_bec;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  wchar_t *local_938;
  int iStack_930;
  undefined4 uStack_92c;
  FScriptContainerElement *local_928;
  int iStack_920;
  undefined4 uStack_91c;
  FScriptContainerElement *local_918;
  int iStack_910;
  undefined4 uStack_90c;
  FScriptContainerElement *local_908;
  int iStack_900;
  undefined4 uStack_8fc;
  FScriptContainerElement *local_8f8;
  int iStack_8f0;
  undefined4 uStack_8ec;
  FScriptContainerElement *local_8e8;
  int iStack_8e0;
  undefined4 uStack_8dc;
  FScriptContainerElement *local_8d8;
  int iStack_8d0;
  undefined4 uStack_8cc;
  FScriptContainerElement *local_8c8;
  int iStack_8c0;
  undefined4 uStack_8bc;
  FScriptContainerElement *local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FScriptContainerElement *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  FScriptContainerElement *local_898;
  int iStack_890;
  undefined4 uStack_88c;
  FScriptContainerElement *local_888;
  int iStack_880;
  undefined4 uStack_87c;
  FScriptContainerElement *local_878;
  int iStack_870;
  undefined4 uStack_86c;
  FScriptContainerElement *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  FScriptContainerElement *local_858;
  int iStack_850;
  undefined4 uStack_84c;
  FScriptContainerElement *local_848;
  int iStack_840;
  undefined4 uStack_83c;
  FScriptContainerElement *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  FScriptContainerElement *local_828;
  int iStack_820;
  undefined4 uStack_81c;
  FScriptContainerElement *local_818;
  int iStack_810;
  undefined4 uStack_80c;
  FScriptContainerElement *local_808;
  int iStack_800;
  undefined4 uStack_7fc;
  FScriptContainerElement *local_7f8;
  int iStack_7f0;
  undefined4 uStack_7ec;
  FScriptContainerElement *local_7e8;
  int iStack_7e0;
  undefined4 uStack_7dc;
  FScriptContainerElement *local_7d8;
  int iStack_7d0;
  undefined4 uStack_7cc;
  FScriptContainerElement *local_7c8;
  int iStack_7c0;
  undefined4 uStack_7bc;
  FScriptContainerElement *local_7b8;
  int iStack_7b0;
  undefined4 uStack_7ac;
  FScriptContainerElement *local_7a8;
  int iStack_7a0;
  undefined4 uStack_79c;
  FScriptContainerElement *local_798;
  int iStack_790;
  undefined4 uStack_78c;
  FScriptContainerElement *local_788;
  int iStack_780;
  undefined4 uStack_77c;
  FScriptContainerElement *local_778;
  int iStack_770;
  undefined4 uStack_76c;
  FScriptContainerElement *local_768;
  int iStack_760;
  undefined4 uStack_75c;
  FScriptContainerElement *local_758;
  int iStack_750;
  undefined4 uStack_74c;
  FScriptContainerElement *local_748;
  int iStack_740;
  undefined4 uStack_73c;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FCoreRedirectObjectName local_538;
  TStringView<wchar_t> local_518;
  TStringView<wchar_t> local_508;
  TArrayView<FCoreRedirect_const_,int> local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  TStringView<wchar_t> local_468;
  TStringView<wchar_t> local_458;
  TStringView<wchar_t> local_448;
  TStringView<wchar_t> local_438;
  TStringView<wchar_t> local_428;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x141fe475f;
  local_res10 = 0;
  if (4 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  local_1018.Data = (FScriptContainerElement *)0x0;
  local_1010 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)iVar8 * 0xa0);
  local_1010._0_4_ = iVar8 + 1;
  pFVar10 = ::FString::FString(&local_258,L"Property2");
  pFVar11 = ::FString::FString(&local_248,L"Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_238,L"Property3");
  pFVar11 = ::FString::FString(&local_218,L"Class.Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_208,L"Property4");
  pFVar11 = ::FString::FString(&local_1f8,L"/Game/PackageSpecific.Class.Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_1e8,L"/Game/Package.Class.OtherProperty2");
  pFVar11 = ::FString::FString(&local_1d8,L"/Game/Package.Class.OtherProperty");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_2b8,L"Class2");
  pFVar11 = ::FString::FString(&local_1c8,L"Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Class,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_1b8,L"Class3");
  pFVar11 = ::FString::FString(&local_1a8,L"/Game/Package.Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Class,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_198,L"/Game/Package.ClassInstance");
  pFVar11 = ::FString::FString(&local_188,L"/Game/Package.Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Category_InstanceOnly|Type_Class,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_58,L"/Game/Package2");
  pFVar11 = ::FString::FString(&local_178,L"/Game/Package");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_168,L"/newgame");
  pFVar11 = ::FString::FString(&local_158,L"/oldgame");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_148,L"/新しいゲーム");
  pFVar11 = ::FString::FString(&local_138,L"/古いゲーム");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_128,L"/mixed_substring");
  pFVar11 = ::FString::FString(&local_118,L"/混合部分文字列");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_108,L"/newprefix");
  pFVar11 = ::FString::FString(&local_f8,L"/oldprefix");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_d8,L"/新しいプレフィックス");
  pFVar11 = ::FString::FString(&local_c8,L"/古いプレフィックス");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_b8,L"/mixed_prefix");
  pFVar11 = ::FString::FString(&local_a8,L"/混合接頭辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_98,L"/new/superobject.prefix2.");
  pFVar11 = ::FString::FString(&local_e8,L"/old/object.prefix.");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Object,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_88,L"/ShouldNeverHappen");
  pFVar11 = ::FString::FString(&local_78,L"/PrefixOverlappingDirectMatch");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_68,L"/DirectMatchIsPreferred/NewPath");
  pFVar11 = ::FString::FString(&local_308,L"/PrefixOverlappingDirectMatch/Path");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_2f8,L"/newsuffix");
  pFVar11 = ::FString::FString(&local_2e8,L"/oldsuffix");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_2d8,L"/新しい接尾辞");
  pFVar11 = ::FString::FString(&local_2c8,L"/古い接尾辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_228,L"/mixed_suffix");
  pFVar11 = ::FString::FString(&local_2a8,L"/混合接尾辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(local_1018.Data + (longlong)(int)local_1010 * 0xa0);
  local_1010._0_4_ = (int)local_1010 + 1;
  pFVar10 = ::FString::FString(&local_298,L"/Game/RemovedPackage");
  pFVar11 = ::FString::FString(&local_288,L"/Game/RemovedPackage");
  FCoreRedirect::FCoreRedirect(pFVar16,Category_Removed|Type_Package,pFVar11,pFVar10);
  if ((int)local_1010 == local_1010._4_4_) {
    local_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_1018,(int *)((longlong)&local_1010 + 4));
  }
  lVar12 = (longlong)(int)local_1010;
  local_1010 = CONCAT44(local_1010._4_4_,(int)local_1010 + 1);
  pFVar16 = (FCoreRedirect *)(local_1018.Data + lVar12 * 0xa0);
  pFVar10 = ::FString::FString(&local_278,L"/Game/MissingLoadPackage");
  pFVar11 = ::FString::FString(&local_268,L"/Game/MissingLoadPackage");
  FCoreRedirect::FCoreRedirect
            (pFVar16,Option_MissingLoad|Category_Removed|Type_Package,pFVar11,pFVar10);
  ::FString::FString(&local_738,L"RunTests");
  iStack_bf0 = (int)local_1010;
  local_bf8 = (FCoreRedirect *)local_1018.Data;
  if (((int)local_1010 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  local_4f8._12_4_ = uStack_bec;
  local_4f8.ArrayNum = iStack_bf0;
  local_4f8.DataPtr = local_bf8;
  AddRedirectList(&local_4f8,&local_738);
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  bVar5 = UE::CoreRedirects::Private::RunAssetRedirectTests();
  local_1008.Data = (FScriptContainerElement *)0x0;
  local_1000 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_718,L"/Game/PackageSpecific.Class:Property4");
  ::FString::FString(&local_728,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString((FString *)pFVar17,&local_728);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_718);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_6f8,L"/Game/PackageSpecific.Class:Property4");
  ::FString::FString(&local_708,L"/Game/PackageSpecific.Class.Property");
  ::FString::FString((FString *)pFVar17,&local_708);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_6f8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_6d8,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString(&local_6e8,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString((FString *)pFVar17,&local_6e8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_6d8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x10;
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_6b8,L"/Game/Package2.Class:Property3");
  ::FString::FString(&local_6c8,L"/Game/Package.Class:Property");
  ::FString::FString((FString *)pFVar17,&local_6c8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_6b8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
  }
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_698,L"/Game/Package2.Class3");
  ::FString::FString(&local_6a8,L"/Game/Package.Class");
  ::FString::FString((FString *)pFVar17,&local_6a8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_698);
  *(undefined4 *)(pFVar17 + 0x20) = 2;
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_678,L"/Game/PackageOther.Class2");
  ::FString::FString(&local_688,L"/Game/PackageOther.Class");
  ::FString::FString((FString *)pFVar17,&local_688);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_678);
  *(undefined4 *)(pFVar17 + 0x20) = 2;
  if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data.AllocatorInstance.Data);
  }
  if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_658,L"/Game/Package2.ClassInstance");
  ::FString::FString(&local_668,L"/Game/Package.Class");
  ::FString::FString((FString *)pFVar17,&local_668);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_658);
  *(undefined4 *)(pFVar17 + 0x20) = 0x10002;
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_638,L"/newgame/Package.DefaultClass");
  ::FString::FString(&local_648,L"/oldgame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_648);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_638);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_618,L"/新しいゲーム/Package.DefaultClass");
  ::FString::FString(&local_628,L"/古いゲーム/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_628);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_618);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_5f8,L"/mixed_substring/Package.DefaultClass");
  ::FString::FString(&local_608,L"/混合部分文字列/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_608);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_5f8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_5d8,L"/newprefix_SomeGame/Package.DefaultClass");
  ::FString::FString(&local_5e8,L"/oldprefix_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_5e8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_5d8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_5b8,L"/新しいプレフィックス_SomeGame/Package.DefaultClass");
  ::FString::FString(&local_5c8,L"/古いプレフィックス_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_5c8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_5b8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_598,L"/mixed_prefix_SomeGame/Package.DefaultClass");
  ::FString::FString(&local_5a8,L"/混合接頭辞_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&local_5a8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_598);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_578,L"/new/superobject.prefix2.subobjects.do.not.change");
  ::FString::FString(&local_588,L"/old/object.prefix.subobjects.do.not.change");
  ::FString::FString((FString *)pFVar17,&local_588);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_578);
  *(undefined4 *)(pFVar17 + 0x20) = 1;
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_558,L"/DirectMatchIsPreferred/NewPath.Remain:Unchanged");
  ::FString::FString(&local_568,L"/PrefixOverlappingDirectMatch/Path.Remain.Unchanged");
  ::FString::FString((FString *)pFVar17,&local_568);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_558);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_988,L"/Game/Package/newsuffix");
  ::FString::FString(&local_548,L"/Game/Package/oldsuffix");
  ::FString::FString((FString *)pFVar17,&local_548);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_988);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_968,L"/Game/Package/新しい接尾辞");
  ::FString::FString(&local_978,L"/Game/Package/古い接尾辞");
  ::FString::FString((FString *)pFVar17,&local_978);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_968);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  if ((int)local_1000 == local_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1008,(int *)((longlong)&local_1000 + 4));
  }
  local_1000 = CONCAT44(local_1000._4_4_,iVar8 + 1);
  pFVar17 = local_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&local_948,L"/Game/Package/mixed_suffix");
  ::FString::FString(&local_958,L"/Game/Package/混合接尾辞");
  ::FString::FString((FString *)pFVar17,&local_958);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_948);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.Data.AllocatorInstance.Data);
  }
  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)local_1000;
  uVar14 = (ulonglong)(int)local_1000;
  pFVar17 = local_1008.Data + 0x18;
  local_bf8 = (FCoreRedirect *)(local_1008.Data + uVar14 * 0x28);
LAB_141fe5d45:
  do {
    pFVar16 = local_bf8;
    bVar18 = false;
    if ((int)uVar14 != iVar8) {
      `TCheckedPointerIterator<`FCoreRedirects::RunTests'::__l2::FRedirectTest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    iVar9 = 0;
    if ((FCoreRedirect *)(pFVar17 + -0x18) == pFVar16) break;
    local_938 = *(wchar_t **)&pFVar17[-0x18].field_0x0;
    local_fe8.ObjectName.ComparisonIndex.Value = 0;
    local_fe8.ObjectName.Number = 0;
    local_fe8.OuterName.ComparisonIndex.Value = 0;
    local_fe8.OuterName.Number = 0;
    local_fe8.PackageName.ComparisonIndex.Value = 0;
    local_fe8.PackageName.Number = 0;
    iStack_930 = *(int *)(pFVar17 + -0x10) + -1;
    if (*(int *)(pFVar17 + -0x10) == 0) {
      iStack_930 = iVar9;
    }
    local_4d8._12_4_ = uStack_92c;
    local_4d8.Size = iStack_930;
    local_4d8.DataPtr = local_938;
    bVar7 = FCoreRedirectObjectName::ExpandNames
                      (&local_4d8,&local_fe8.ObjectName,&local_fe8.OuterName,&local_fe8.PackageName)
    ;
    if (!bVar7) {
      local_res18 = 0;
      local_fe8.PackageName.ComparisonIndex.Value = 0;
      local_fe8.PackageName.Number = 0;
      local_fe8.ObjectName.ComparisonIndex.Value = 0;
      local_fe8.ObjectName.Number = 0;
      local_fe8.OuterName.ComparisonIndex.Value = 0;
      local_fe8.OuterName.Number = 0;
    }
    GetRedirectedName(&local_538,*(ECoreRedirectFlags *)(pFVar17 + 8),&local_fe8,None);
    FVar4 = local_538.PackageName;
    FVar3 = local_538.OuterName;
    FVar2 = local_538.ObjectName;
    FCoreRedirectObjectName::CombineNames
              (&local_a78,local_538.ObjectName,local_538.OuterName,local_538.PackageName);
    iVar9 = local_a78.Data.ArrayNum;
    if (iVar9 == *(int *)pFVar17) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_a78.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar17 + -8))->
                           AllocatorInstance).Data);
        bVar18 = iVar9 == 0;
        goto LAB_141fe5e58;
      }
    }
    else {
      bVar18 = iVar9 + *(int *)pFVar17 == 1;
LAB_141fe5e58:
      bVar18 = !bVar18;
    }
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
    if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
      FCoreRedirectObjectName::CombineNames(&local_a98,FVar2,FVar3,FVar4);
      FCoreRedirectObjectName::CombineNames
                (&local_a88,local_fe8.ObjectName,local_fe8.OuterName,local_fe8.PackageName);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a88.Data.AllocatorInstance.Data);
      }
      if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a98.Data.AllocatorInstance.Data);
        uVar14 = local_1000 & 0xffffffff;
        pFVar17 = pFVar17 + 0x28;
        goto LAB_141fe5d45;
      }
    }
    uVar14 = local_1000 & 0xffffffff;
    pFVar17 = pFVar17 + 0x28;
  } while( true );
  local_ff8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ff8.ArrayNum = 0;
  local_ff8.ArrayMax = 0;
  ::FString::FString(&local_aa8,L"/Game/PackageOther.Class2");
  local_928 = local_aa8.Data.AllocatorInstance.Data;
  local_f28.ObjectName.ComparisonIndex.Value = 0;
  local_f28.ObjectName.Number = 0;
  local_f28.OuterName.ComparisonIndex.Value = 0;
  local_f28.OuterName.Number = 0;
  local_f28.PackageName.ComparisonIndex.Value = 0;
  local_f28.PackageName.Number = 0;
  iStack_920 = local_aa8.Data.ArrayNum + -1;
  if (local_aa8.Data.ArrayNum == 0) {
    iStack_920 = iVar9;
  }
  local_4c8._12_4_ = uStack_91c;
  local_4c8.Size = iStack_920;
  local_4c8.DataPtr = (wchar_t *)local_aa8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_4c8,&local_f28.ObjectName,&local_f28.OuterName,&local_f28.PackageName);
  if (!bVar18) {
    local_res20 = 0;
    local_f28.PackageName.ComparisonIndex.Value = 0;
    local_f28.PackageName.Number = 0;
    local_f28.ObjectName.ComparisonIndex.Value = 0;
    local_f28.ObjectName.Number = 0;
    local_f28.OuterName.ComparisonIndex.Value = 0;
    local_f28.OuterName.Number = 0;
  }
  FindPreviousNames(Type_Class,&local_f28,&local_ff8);
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  uVar15 = local_res10;
  if (local_ff8.ArrayNum == 1) {
    FCoreRedirectObjectName::CombineNames
              (&local_ab8,*(FName *)local_ff8.AllocatorInstance.Data,
               *(FName *)(local_ff8.AllocatorInstance.Data + 8),
               *(FName *)(local_ff8.AllocatorInstance.Data + 0x10));
    uVar15 = 1;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_ab8.Data.ArrayNum != 0) {
      FVar13.Data = local_ab8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/Game/PackageOther.Class");
    if (iVar8 != 0) goto LAB_141fe6084;
    bVar18 = false;
  }
  else {
LAB_141fe6084:
    bVar18 = true;
  }
  if (((uVar15 & 1) != 0) &&
     (uVar15 = uVar15 & 0xfffffffe,
     local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = local_ff8.ArrayMax != 0;
  local_ff8._8_8_ = (ulonglong)(uint)local_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_ff8.AllocatorInstance,0,&local_ff8.ArrayMax);
  }
  ::FString::FString(&local_ac8,L"/newgame/TestPackage");
  local_918 = local_ac8.Data.AllocatorInstance.Data;
  local_f58.ObjectName.ComparisonIndex.Value = 0;
  local_f58.ObjectName.Number = 0;
  local_f58.OuterName.ComparisonIndex.Value = 0;
  local_f58.OuterName.Number = 0;
  local_f58.PackageName.ComparisonIndex.Value = 0;
  local_f58.PackageName.Number = 0;
  iStack_910 = local_ac8.Data.ArrayNum + -1;
  if (local_ac8.Data.ArrayNum == 0) {
    iStack_910 = iVar9;
  }
  local_508._12_4_ = uStack_90c;
  local_508.Size = iStack_910;
  local_508.DataPtr = (wchar_t *)local_ac8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_508,&local_f58.ObjectName,&local_f58.OuterName,&local_f58.PackageName);
  if (!bVar18) {
    local_c68 = 0;
    local_f58.PackageName.ComparisonIndex.Value = 0;
    local_f58.PackageName.Number = 0;
    local_f58.ObjectName.ComparisonIndex.Value = 0;
    local_f58.ObjectName.Number = 0;
    local_f58.OuterName.ComparisonIndex.Value = 0;
    local_f58.OuterName.Number = 0;
  }
  FindPreviousNames(Type_Package,&local_f58,&local_ff8);
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  if (local_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 2;
    FCoreRedirectObjectName::CombineNames
              (&local_ad8,*(FName *)local_ff8.AllocatorInstance.Data,
               *(FName *)(local_ff8.AllocatorInstance.Data + 8),
               *(FName *)(local_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_ad8.Data.ArrayNum != 0) {
      FVar13.Data = local_ad8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/oldgame/TestPackage");
    if (iVar8 != 0) goto LAB_141fe61fd;
    bVar18 = false;
  }
  else {
LAB_141fe61fd:
    bVar18 = true;
  }
  if (((uVar15 & 2) != 0) &&
     (uVar15 = uVar15 & 0xfffffffd,
     local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = local_ff8.ArrayMax != 0;
  local_ff8._8_8_ = (ulonglong)(uint)local_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_ff8.AllocatorInstance,0,&local_ff8.ArrayMax);
  }
  ::FString::FString(&local_ae8,L"/newprefix_SomeGame/TestPackage");
  local_908 = local_ae8.Data.AllocatorInstance.Data;
  local_f70.ObjectName.ComparisonIndex.Value = 0;
  local_f70.ObjectName.Number = 0;
  local_f70.OuterName.ComparisonIndex.Value = 0;
  local_f70.OuterName.Number = 0;
  local_f70.PackageName.ComparisonIndex.Value = 0;
  local_f70.PackageName.Number = 0;
  iStack_900 = local_ae8.Data.ArrayNum + -1;
  if (local_ae8.Data.ArrayNum == 0) {
    iStack_900 = iVar9;
  }
  local_4b8._12_4_ = uStack_8fc;
  local_4b8.Size = iStack_900;
  local_4b8.DataPtr = (wchar_t *)local_ae8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_4b8,&local_f70.ObjectName,&local_f70.OuterName,&local_f70.PackageName);
  if (!bVar18) {
    local_c58 = 0;
    local_f70.PackageName.ComparisonIndex.Value = 0;
    local_f70.PackageName.Number = 0;
    local_f70.ObjectName.ComparisonIndex.Value = 0;
    local_f70.ObjectName.Number = 0;
    local_f70.OuterName.ComparisonIndex.Value = 0;
    local_f70.OuterName.Number = 0;
  }
  FindPreviousNames(Type_Package,&local_f70,&local_ff8);
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  if (local_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 4;
    FCoreRedirectObjectName::CombineNames
              (&local_af8,*(FName *)local_ff8.AllocatorInstance.Data,
               *(FName *)(local_ff8.AllocatorInstance.Data + 8),
               *(FName *)(local_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_af8.Data.ArrayNum != 0) {
      FVar13.Data = local_af8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar13.Data,L"/oldprefix_SomeGame/TestPackage");
    if (iVar8 != 0) goto LAB_141fe6376;
    bVar18 = false;
  }
  else {
LAB_141fe6376:
    bVar18 = true;
  }
  if (((uVar15 & 4) != 0) &&
     (uVar15 = uVar15 & 0xfffffffb,
     local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = local_ff8.ArrayMax != 0;
  local_ff8._8_8_ = (ulonglong)(uint)local_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_ff8.AllocatorInstance,0,&local_ff8.ArrayMax);
  }
  ::FString::FString(&local_b08,L"/TestGame/newsuffix");
  local_8f8 = local_b08.Data.AllocatorInstance.Data;
  local_f88.ObjectName.ComparisonIndex.Value = 0;
  local_f88.ObjectName.Number = 0;
  local_f88.OuterName.ComparisonIndex.Value = 0;
  local_f88.OuterName.Number = 0;
  local_f88.PackageName.ComparisonIndex.Value = 0;
  local_f88.PackageName.Number = 0;
  iStack_8f0 = local_b08.Data.ArrayNum + -1;
  if (local_b08.Data.ArrayNum == 0) {
    iStack_8f0 = iVar9;
  }
  local_4a8._12_4_ = uStack_8ec;
  local_4a8.Size = iStack_8f0;
  local_4a8.DataPtr = (wchar_t *)local_b08.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_4a8,&local_f88.ObjectName,&local_f88.OuterName,&local_f88.PackageName);
  if (!bVar18) {
    local_c50 = 0;
    local_f88.PackageName.ComparisonIndex.Value = 0;
    local_f88.PackageName.Number = 0;
    local_f88.ObjectName.ComparisonIndex.Value = 0;
    local_f88.ObjectName.Number = 0;
    local_f88.OuterName.ComparisonIndex.Value = 0;
    local_f88.OuterName.Number = 0;
  }
  FindPreviousNames(Type_Package,&local_f88,&local_ff8);
  if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data.AllocatorInstance.Data);
  }
  if (local_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 8;
    FCoreRedirectObjectName::CombineNames
              (&local_b18,*(FName *)local_ff8.AllocatorInstance.Data,
               *(FName *)(local_ff8.AllocatorInstance.Data + 8),
               *(FName *)(local_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_b18.Data.ArrayNum != 0) {
      FVar13.Data = local_b18.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/TestGame/oldsuffix");
    if (iVar8 == 0) {
      bVar18 = false;
      goto LAB_141fe64f1;
    }
  }
  bVar18 = true;
LAB_141fe64f1:
  if (((uVar15 & 8) != 0) &&
     (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b18.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = local_ff8.ArrayMax != 0;
  local_ff8._8_8_ = (ulonglong)(uint)local_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_ff8.AllocatorInstance,0,&local_ff8.ArrayMax);
  }
  ::FString::FString(&local_b28,L"/Foo/Foo.Foo:\nNew");
  local_8e8 = local_b28.Data.AllocatorInstance.Data;
  local_fa0.ObjectName.ComparisonIndex.Value = 0;
  local_fa0.ObjectName.Number = 0;
  local_fa0.OuterName.ComparisonIndex.Value = 0;
  local_fa0.OuterName.Number = 0;
  local_fa0.PackageName.ComparisonIndex.Value = 0;
  local_fa0.PackageName.Number = 0;
  iStack_8e0 = local_b28.Data.ArrayNum + -1;
  if (local_b28.Data.ArrayNum == 0) {
    iStack_8e0 = iVar9;
  }
  local_498._12_4_ = uStack_8dc;
  local_498.Size = iStack_8e0;
  local_498.DataPtr = (wchar_t *)local_b28.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_498,&local_fa0.ObjectName,&local_fa0.OuterName,&local_fa0.PackageName);
  if (!bVar18) {
    local_c48 = 0;
    local_fa0.PackageName.ComparisonIndex.Value = 0;
    local_fa0.PackageName.Number = 0;
    local_fa0.ObjectName.ComparisonIndex.Value = 0;
    local_fa0.ObjectName.Number = 0;
    local_fa0.OuterName.ComparisonIndex.Value = 0;
    local_fa0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_fa0,Type_Object);
  if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_FCoreRedirect_T_1508150e8,
               (FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b38,L"/Foo/Foo.\nFoo:New");
  local_8d8 = local_b38.Data.AllocatorInstance.Data;
  local_fb8.ObjectName.ComparisonIndex.Value = 0;
  local_fb8.ObjectName.Number = 0;
  local_fb8.OuterName.ComparisonIndex.Value = 0;
  local_fb8.OuterName.Number = 0;
  local_fb8.PackageName.ComparisonIndex.Value = 0;
  local_fb8.PackageName.Number = 0;
  iStack_8d0 = local_b38.Data.ArrayNum + -1;
  if (local_b38.Data.ArrayNum == 0) {
    iStack_8d0 = iVar9;
  }
  local_488._12_4_ = uStack_8cc;
  local_488.Size = iStack_8d0;
  local_488.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_488,&local_fb8.ObjectName,&local_fb8.OuterName,&local_fb8.PackageName);
  if (!bVar18) {
    local_c40 = 0;
    local_fb8.PackageName.ComparisonIndex.Value = 0;
    local_fb8.PackageName.Number = 0;
    local_fb8.ObjectName.ComparisonIndex.Value = 0;
    local_fb8.ObjectName.Number = 0;
    local_fb8.OuterName.ComparisonIndex.Value = 0;
    local_fb8.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_fb8,Type_Object);
  if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b48,L"/Foo/\nFoo.Foo:New");
  local_8c8 = local_b48.Data.AllocatorInstance.Data;
  local_fd0.ObjectName.ComparisonIndex.Value = 0;
  local_fd0.ObjectName.Number = 0;
  local_fd0.OuterName.ComparisonIndex.Value = 0;
  local_fd0.OuterName.Number = 0;
  local_fd0.PackageName.ComparisonIndex.Value = 0;
  local_fd0.PackageName.Number = 0;
  iStack_8c0 = local_b48.Data.ArrayNum + -1;
  if (local_b48.Data.ArrayNum == 0) {
    iStack_8c0 = iVar9;
  }
  local_478._12_4_ = uStack_8bc;
  local_478.Size = iStack_8c0;
  local_478.DataPtr = (wchar_t *)local_b48.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_478,&local_fd0.ObjectName,&local_fd0.OuterName,&local_fd0.PackageName);
  if (!bVar18) {
    local_c38 = 0;
    local_fd0.PackageName.ComparisonIndex.Value = 0;
    local_fd0.PackageName.Number = 0;
    local_fd0.ObjectName.ComparisonIndex.Value = 0;
    local_fd0.ObjectName.Number = 0;
    local_fd0.OuterName.ComparisonIndex.Value = 0;
    local_fd0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_fd0,Type_Object);
  if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b58,L"/Foo/_Verse/Foo.Foo:\nNew");
  local_8b8 = local_b58.Data.AllocatorInstance.Data;
  local_e20.ObjectName.ComparisonIndex.Value = 0;
  local_e20.ObjectName.Number = 0;
  local_e20.OuterName.ComparisonIndex.Value = 0;
  local_e20.OuterName.Number = 0;
  local_e20.PackageName.ComparisonIndex.Value = 0;
  local_e20.PackageName.Number = 0;
  iStack_8b0 = local_b58.Data.ArrayNum + -1;
  if (local_b58.Data.ArrayNum == 0) {
    iStack_8b0 = iVar9;
  }
  local_468._12_4_ = uStack_8ac;
  local_468.Size = iStack_8b0;
  local_468.DataPtr = (wchar_t *)local_b58.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_468,&local_e20.ObjectName,&local_e20.OuterName,&local_e20.PackageName);
  if (!bVar18) {
    local_c30 = 0;
    local_e20.PackageName.ComparisonIndex.Value = 0;
    local_e20.PackageName.Number = 0;
    local_e20.ObjectName.ComparisonIndex.Value = 0;
    local_e20.ObjectName.Number = 0;
    local_e20.OuterName.ComparisonIndex.Value = 0;
    local_e20.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e20,Type_Object);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b68,L"/Foo/_Verse/Foo.\nFoo:New");
  local_8a8 = local_b68.Data.AllocatorInstance.Data;
  local_e38.ObjectName.ComparisonIndex.Value = 0;
  local_e38.ObjectName.Number = 0;
  local_e38.OuterName.ComparisonIndex.Value = 0;
  local_e38.OuterName.Number = 0;
  local_e38.PackageName.ComparisonIndex.Value = 0;
  local_e38.PackageName.Number = 0;
  iStack_8a0 = local_b68.Data.ArrayNum + -1;
  if (local_b68.Data.ArrayNum == 0) {
    iStack_8a0 = iVar9;
  }
  local_458._12_4_ = uStack_89c;
  local_458.Size = iStack_8a0;
  local_458.DataPtr = (wchar_t *)local_b68.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_458,&local_e38.ObjectName,&local_e38.OuterName,&local_e38.PackageName);
  if (!bVar18) {
    local_c28 = 0;
    local_e38.PackageName.ComparisonIndex.Value = 0;
    local_e38.PackageName.Number = 0;
    local_e38.ObjectName.ComparisonIndex.Value = 0;
    local_e38.ObjectName.Number = 0;
    local_e38.OuterName.ComparisonIndex.Value = 0;
    local_e38.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e38,Type_Object);
  if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b78,L"/Foo/_Verse/\nFoo.Foo:New");
  local_898 = local_b78.Data.AllocatorInstance.Data;
  local_e50.ObjectName.ComparisonIndex.Value = 0;
  local_e50.ObjectName.Number = 0;
  local_e50.OuterName.ComparisonIndex.Value = 0;
  local_e50.OuterName.Number = 0;
  local_e50.PackageName.ComparisonIndex.Value = 0;
  local_e50.PackageName.Number = 0;
  iStack_890 = local_b78.Data.ArrayNum + -1;
  if (local_b78.Data.ArrayNum == 0) {
    iStack_890 = iVar9;
  }
  local_448._12_4_ = uStack_88c;
  local_448.Size = iStack_890;
  local_448.DataPtr = (wchar_t *)local_b78.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_448,&local_e50.ObjectName,&local_e50.OuterName,&local_e50.PackageName);
  if (!bVar18) {
    local_c20 = 0;
    local_e50.PackageName.ComparisonIndex.Value = 0;
    local_e50.PackageName.Number = 0;
    local_e50.ObjectName.ComparisonIndex.Value = 0;
    local_e50.ObjectName.Number = 0;
    local_e50.OuterName.ComparisonIndex.Value = 0;
    local_e50.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e50,Type_Object);
  if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_b88,L"/Foo/Foo.Foo:$New");
  local_888 = local_b88.Data.AllocatorInstance.Data;
  local_e68.ObjectName.ComparisonIndex.Value = 0;
  local_e68.ObjectName.Number = 0;
  local_e68.OuterName.ComparisonIndex.Value = 0;
  local_e68.OuterName.Number = 0;
  local_e68.PackageName.ComparisonIndex.Value = 0;
  local_e68.PackageName.Number = 0;
  iStack_880 = local_b88.Data.ArrayNum + -1;
  if (local_b88.Data.ArrayNum == 0) {
    iStack_880 = iVar9;
  }
  local_438._12_4_ = uStack_87c;
  local_438.Size = iStack_880;
  local_438.DataPtr = (wchar_t *)local_b88.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_438,&local_e68.ObjectName,&local_e68.OuterName,&local_e68.PackageName);
  if (!bVar18) {
    local_c18 = 0;
    local_e68.PackageName.ComparisonIndex.Value = 0;
    local_e68.PackageName.Number = 0;
    local_e68.ObjectName.ComparisonIndex.Value = 0;
    local_e68.ObjectName.Number = 0;
    local_e68.OuterName.ComparisonIndex.Value = 0;
    local_e68.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e68,Type_Object);
  if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a68,L"/Foo/Foo.$Foo:New");
  local_878 = local_a68.Data.AllocatorInstance.Data;
  local_e80.ObjectName.ComparisonIndex.Value = 0;
  local_e80.ObjectName.Number = 0;
  local_e80.OuterName.ComparisonIndex.Value = 0;
  local_e80.OuterName.Number = 0;
  local_e80.PackageName.ComparisonIndex.Value = 0;
  local_e80.PackageName.Number = 0;
  iStack_870 = local_a68.Data.ArrayNum + -1;
  if (local_a68.Data.ArrayNum == 0) {
    iStack_870 = iVar9;
  }
  local_428._12_4_ = uStack_86c;
  local_428.Size = iStack_870;
  local_428.DataPtr = (wchar_t *)local_a68.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_428,&local_e80.ObjectName,&local_e80.OuterName,&local_e80.PackageName);
  if (!bVar18) {
    local_c10 = 0;
    local_e80.PackageName.ComparisonIndex.Value = 0;
    local_e80.PackageName.Number = 0;
    local_e80.ObjectName.ComparisonIndex.Value = 0;
    local_e80.ObjectName.Number = 0;
    local_e80.OuterName.ComparisonIndex.Value = 0;
    local_e80.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e80,Type_Object);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a48,L"/Foo/$Foo.Foo:New");
  local_868 = local_a48.Data.AllocatorInstance.Data;
  local_e98.ObjectName.ComparisonIndex.Value = 0;
  local_e98.ObjectName.Number = 0;
  local_e98.OuterName.ComparisonIndex.Value = 0;
  local_e98.OuterName.Number = 0;
  local_e98.PackageName.ComparisonIndex.Value = 0;
  local_e98.PackageName.Number = 0;
  iStack_860 = local_a48.Data.ArrayNum + -1;
  if (local_a48.Data.ArrayNum == 0) {
    iStack_860 = iVar9;
  }
  local_418._12_4_ = uStack_85c;
  local_418.Size = iStack_860;
  local_418.DataPtr = (wchar_t *)local_a48.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_418,&local_e98.ObjectName,&local_e98.OuterName,&local_e98.PackageName);
  if (!bVar18) {
    local_c08 = 0;
    local_e98.PackageName.ComparisonIndex.Value = 0;
    local_e98.PackageName.Number = 0;
    local_e98.ObjectName.ComparisonIndex.Value = 0;
    local_e98.ObjectName.Number = 0;
    local_e98.OuterName.ComparisonIndex.Value = 0;
    local_e98.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_e98,Type_Object);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a38,L"/Foo/_Verse/Foo.Foo:$New");
  local_858 = local_a38.Data.AllocatorInstance.Data;
  local_eb0.ObjectName.ComparisonIndex.Value = 0;
  local_eb0.ObjectName.Number = 0;
  local_eb0.OuterName.ComparisonIndex.Value = 0;
  local_eb0.OuterName.Number = 0;
  local_eb0.PackageName.ComparisonIndex.Value = 0;
  local_eb0.PackageName.Number = 0;
  iStack_850 = local_a38.Data.ArrayNum + -1;
  if (local_a38.Data.ArrayNum == 0) {
    iStack_850 = iVar9;
  }
  local_408._12_4_ = uStack_84c;
  local_408.Size = iStack_850;
  local_408.DataPtr = (wchar_t *)local_a38.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_408,&local_eb0.ObjectName,&local_eb0.OuterName,&local_eb0.PackageName);
  if (!bVar18) {
    local_c00 = 0;
    local_eb0.PackageName.ComparisonIndex.Value = 0;
    local_eb0.PackageName.Number = 0;
    local_eb0.ObjectName.ComparisonIndex.Value = 0;
    local_eb0.ObjectName.Number = 0;
    local_eb0.OuterName.ComparisonIndex.Value = 0;
    local_eb0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_eb0,Type_Object);
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a28,L"/Foo/_Verse/Foo.$Foo:New");
  local_848 = local_a28.Data.AllocatorInstance.Data;
  local_ec8.ObjectName.ComparisonIndex.Value = 0;
  local_ec8.ObjectName.Number = 0;
  local_ec8.OuterName.ComparisonIndex.Value = 0;
  local_ec8.OuterName.Number = 0;
  local_ec8.PackageName.ComparisonIndex.Value = 0;
  local_ec8.PackageName.Number = 0;
  iStack_840 = local_a28.Data.ArrayNum + -1;
  if (local_a28.Data.ArrayNum == 0) {
    iStack_840 = iVar9;
  }
  local_3f8._12_4_ = uStack_83c;
  local_3f8.Size = iStack_840;
  local_3f8.DataPtr = (wchar_t *)local_a28.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3f8,&local_ec8.ObjectName,&local_ec8.OuterName,&local_ec8.PackageName);
  if (!bVar18) {
    local_c60 = 0;
    local_ec8.PackageName.ComparisonIndex.Value = 0;
    local_ec8.PackageName.Number = 0;
    local_ec8.ObjectName.ComparisonIndex.Value = 0;
    local_ec8.ObjectName.Number = 0;
    local_ec8.OuterName.ComparisonIndex.Value = 0;
    local_ec8.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_ec8,Type_Object);
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a18,L"/Foo/_Verse/$Foo.Foo:New");
  local_838 = local_a18.Data.AllocatorInstance.Data;
  local_ee0.ObjectName.ComparisonIndex.Value = 0;
  local_ee0.ObjectName.Number = 0;
  local_ee0.OuterName.ComparisonIndex.Value = 0;
  local_ee0.OuterName.Number = 0;
  local_ee0.PackageName.ComparisonIndex.Value = 0;
  local_ee0.PackageName.Number = 0;
  iStack_830 = local_a18.Data.ArrayNum + -1;
  if (local_a18.Data.ArrayNum == 0) {
    iStack_830 = iVar9;
  }
  local_3e8._12_4_ = uStack_82c;
  local_3e8.Size = iStack_830;
  local_3e8.DataPtr = (wchar_t *)local_a18.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3e8,&local_ee0.ObjectName,&local_ee0.OuterName,&local_ee0.PackageName);
  if (!bVar18) {
    local_ce8 = 0;
    local_ee0.PackageName.ComparisonIndex.Value = 0;
    local_ee0.PackageName.Number = 0;
    local_ee0.ObjectName.ComparisonIndex.Value = 0;
    local_ee0.ObjectName.Number = 0;
    local_ee0.OuterName.ComparisonIndex.Value = 0;
    local_ee0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&local_ee0,Type_Object);
  if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_a08,L"/Game/RemovedPackage");
  local_828 = local_a08.Data.AllocatorInstance.Data;
  local_f10.ObjectName.ComparisonIndex.Value = 0;
  local_f10.ObjectName.Number = 0;
  local_f10.OuterName.ComparisonIndex.Value = 0;
  local_f10.OuterName.Number = 0;
  local_f10.PackageName.ComparisonIndex.Value = 0;
  local_f10.PackageName.Number = 0;
  iStack_820 = local_a08.Data.ArrayNum + -1;
  if (local_a08.Data.ArrayNum == 0) {
    iStack_820 = iVar9;
  }
  local_3d8._12_4_ = uStack_81c;
  local_3d8.Size = iStack_820;
  local_3d8.DataPtr = (wchar_t *)local_a08.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3d8,&local_f10.ObjectName,&local_f10.OuterName,&local_f10.PackageName);
  if (!bVar18) {
    local_ce0 = 0;
    local_f10.PackageName.ComparisonIndex.Value = 0;
    local_f10.PackageName.Number = 0;
    local_f10.ObjectName.ComparisonIndex.Value = 0;
    local_f10.ObjectName.Number = 0;
    local_f10.OuterName.ComparisonIndex.Value = 0;
    local_f10.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_f10);
  if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_9f8,L"/Game/MissingLoadPackage");
  local_818 = local_9f8.Data.AllocatorInstance.Data;
  local_ef8.ObjectName.ComparisonIndex.Value = 0;
  local_ef8.ObjectName.Number = 0;
  local_ef8.OuterName.ComparisonIndex.Value = 0;
  local_ef8.OuterName.Number = 0;
  local_ef8.PackageName.ComparisonIndex.Value = 0;
  local_ef8.PackageName.Number = 0;
  iStack_810 = local_9f8.Data.ArrayNum + -1;
  if (local_9f8.Data.ArrayNum == 0) {
    iStack_810 = iVar9;
  }
  local_3c8._12_4_ = uStack_80c;
  local_3c8.Size = iStack_810;
  local_3c8.DataPtr = (wchar_t *)local_9f8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3c8,&local_ef8.ObjectName,&local_ef8.OuterName,&local_ef8.PackageName);
  if (!bVar18) {
    local_cd8 = 0;
    local_ef8.PackageName.ComparisonIndex.Value = 0;
    local_ef8.PackageName.Number = 0;
    local_ef8.ObjectName.ComparisonIndex.Value = 0;
    local_ef8.ObjectName.Number = 0;
    local_ef8.OuterName.ComparisonIndex.Value = 0;
    local_ef8.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_ef8);
  if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_9e8,L"/Game/NotRemovedPackage");
  local_808 = local_9e8.Data.AllocatorInstance.Data;
  local_f40.ObjectName.ComparisonIndex.Value = 0;
  local_f40.ObjectName.Number = 0;
  local_f40.OuterName.ComparisonIndex.Value = 0;
  local_f40.OuterName.Number = 0;
  local_f40.PackageName.ComparisonIndex.Value = 0;
  local_f40.PackageName.Number = 0;
  iStack_800 = local_9e8.Data.ArrayNum + -1;
  if (local_9e8.Data.ArrayNum == 0) {
    iStack_800 = iVar9;
  }
  local_3b8._12_4_ = uStack_7fc;
  local_3b8.Size = iStack_800;
  local_3b8.DataPtr = (wchar_t *)local_9e8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3b8,&local_f40.ObjectName,&local_f40.OuterName,&local_f40.PackageName);
  if (!bVar18) {
    local_cd0 = 0;
    local_f40.PackageName.ComparisonIndex.Value = 0;
    local_f40.PackageName.Number = 0;
    local_f40.ObjectName.ComparisonIndex.Value = 0;
    local_f40.ObjectName.Number = 0;
    local_f40.OuterName.ComparisonIndex.Value = 0;
    local_f40.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_f40);
  if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_9d8,L"/Game/NotRemovedMissingLoad");
  local_7f8 = local_9d8.Data.AllocatorInstance.Data;
  local_e08.ObjectName.ComparisonIndex.Value = 0;
  local_e08.ObjectName.Number = 0;
  local_e08.OuterName.ComparisonIndex.Value = 0;
  local_e08.OuterName.Number = 0;
  local_e08.PackageName.ComparisonIndex.Value = 0;
  local_e08.PackageName.Number = 0;
  iStack_7f0 = local_9d8.Data.ArrayNum + -1;
  if (local_9d8.Data.ArrayNum == 0) {
    iStack_7f0 = iVar9;
  }
  local_3a8._12_4_ = uStack_7ec;
  local_3a8.Size = iStack_7f0;
  local_3a8.DataPtr = (wchar_t *)local_9d8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_3a8,&local_e08.ObjectName,&local_e08.OuterName,&local_e08.PackageName);
  if (!bVar18) {
    local_cc8 = 0;
    local_e08.PackageName.ComparisonIndex.Value = 0;
    local_e08.PackageName.Number = 0;
    local_e08.ObjectName.ComparisonIndex.Value = 0;
    local_e08.ObjectName.Number = 0;
    local_e08.OuterName.ComparisonIndex.Value = 0;
    local_e08.OuterName.Number = 0;
  }
  AddKnownMissing(Type_Package,&local_e08,Option_MissingLoad);
  if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_9c8,L"/Game/NotRemovedMissingLoad");
  local_7e8 = local_9c8.Data.AllocatorInstance.Data;
  local_df0.ObjectName.ComparisonIndex.Value = 0;
  local_df0.ObjectName.Number = 0;
  local_df0.OuterName.ComparisonIndex.Value = 0;
  local_df0.OuterName.Number = 0;
  local_df0.PackageName.ComparisonIndex.Value = 0;
  local_df0.PackageName.Number = 0;
  iStack_7e0 = local_9c8.Data.ArrayNum + -1;
  if (local_9c8.Data.ArrayNum == 0) {
    iStack_7e0 = iVar9;
  }
  local_398._12_4_ = uStack_7dc;
  local_398.Size = iStack_7e0;
  local_398.DataPtr = (wchar_t *)local_9c8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_398,&local_df0.ObjectName,&local_df0.OuterName,&local_df0.PackageName);
  if (!bVar18) {
    local_cc0 = 0;
    local_df0.PackageName.ComparisonIndex.Value = 0;
    local_df0.PackageName.Number = 0;
    local_df0.ObjectName.ComparisonIndex.Value = 0;
    local_df0.ObjectName.Number = 0;
    local_df0.OuterName.ComparisonIndex.Value = 0;
    local_df0.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_df0);
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_9b8,L"/Game/NotRemovedMissingLoad");
  local_7d8 = local_9b8.Data.AllocatorInstance.Data;
  local_dd8.ObjectName.ComparisonIndex.Value = 0;
  local_dd8.ObjectName.Number = 0;
  local_dd8.OuterName.ComparisonIndex.Value = 0;
  local_dd8.OuterName.Number = 0;
  local_dd8.PackageName.ComparisonIndex.Value = 0;
  local_dd8.PackageName.Number = 0;
  iStack_7d0 = local_9b8.Data.ArrayNum + -1;
  if (local_9b8.Data.ArrayNum == 0) {
    iStack_7d0 = iVar9;
  }
  local_4e8._12_4_ = uStack_7cc;
  local_4e8.Size = iStack_7d0;
  local_4e8.DataPtr = (wchar_t *)local_9b8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_4e8,&local_dd8.ObjectName,&local_dd8.OuterName,&local_dd8.PackageName);
  if (!bVar18) {
    local_cb8 = 0;
    local_dd8.PackageName.ComparisonIndex.Value = 0;
    local_dd8.PackageName.Number = 0;
    local_dd8.ObjectName.ComparisonIndex.Value = 0;
    local_dd8.ObjectName.Number = 0;
    local_dd8.OuterName.ComparisonIndex.Value = 0;
    local_dd8.OuterName.Number = 0;
  }
  RemoveKnownMissing(Type_Package,&local_dd8,None);
  if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_9a8,L"/Game/NotRemovedMissingLoad");
  local_7c8 = local_9a8.Data.AllocatorInstance.Data;
  local_dc0.ObjectName.ComparisonIndex.Value = 0;
  local_dc0.ObjectName.Number = 0;
  local_dc0.OuterName.ComparisonIndex.Value = 0;
  local_dc0.OuterName.Number = 0;
  local_dc0.PackageName.ComparisonIndex.Value = 0;
  local_dc0.PackageName.Number = 0;
  iStack_7c0 = local_9a8.Data.ArrayNum + -1;
  if (local_9a8.Data.ArrayNum == 0) {
    iStack_7c0 = iVar9;
  }
  local_388._12_4_ = uStack_7bc;
  local_388.Size = iStack_7c0;
  local_388.DataPtr = (wchar_t *)local_9a8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_388,&local_dc0.ObjectName,&local_dc0.OuterName,&local_dc0.PackageName);
  if (!bVar18) {
    local_cb0 = 0;
    local_dc0.PackageName.ComparisonIndex.Value = 0;
    local_dc0.PackageName.Number = 0;
    local_dc0.ObjectName.ComparisonIndex.Value = 0;
    local_dc0.ObjectName.Number = 0;
    local_dc0.OuterName.ComparisonIndex.Value = 0;
    local_dc0.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_dc0);
  if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_998,L"/Game/NotRemovedMissingLoad");
  local_7b8 = local_998.Data.AllocatorInstance.Data;
  local_da8.ObjectName.ComparisonIndex.Value = 0;
  local_da8.ObjectName.Number = 0;
  local_da8.OuterName.ComparisonIndex.Value = 0;
  local_da8.OuterName.Number = 0;
  local_da8.PackageName.ComparisonIndex.Value = 0;
  local_da8.PackageName.Number = 0;
  iStack_7b0 = local_998.Data.ArrayNum + -1;
  if (local_998.Data.ArrayNum == 0) {
    iStack_7b0 = iVar9;
  }
  local_378._12_4_ = uStack_7ac;
  local_378.Size = iStack_7b0;
  local_378.DataPtr = (wchar_t *)local_998.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_378,&local_da8.ObjectName,&local_da8.OuterName,&local_da8.PackageName);
  if (!bVar18) {
    local_ca8 = 0;
    local_da8.PackageName.ComparisonIndex.Value = 0;
    local_da8.PackageName.Number = 0;
    local_da8.ObjectName.ComparisonIndex.Value = 0;
    local_da8.ObjectName.Number = 0;
    local_da8.OuterName.ComparisonIndex.Value = 0;
    local_da8.OuterName.Number = 0;
  }
  RemoveKnownMissing(Type_Package,&local_da8,Option_MissingLoad);
  if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a58,L"/Game/NotRemovedMissingLoad");
  local_7a8 = local_a58.Data.AllocatorInstance.Data;
  local_d90.ObjectName.ComparisonIndex.Value = 0;
  local_d90.ObjectName.Number = 0;
  local_d90.OuterName.ComparisonIndex.Value = 0;
  local_d90.OuterName.Number = 0;
  local_d90.PackageName.ComparisonIndex.Value = 0;
  local_d90.PackageName.Number = 0;
  iStack_7a0 = local_a58.Data.ArrayNum + -1;
  if (local_a58.Data.ArrayNum == 0) {
    iStack_7a0 = iVar9;
  }
  local_368._12_4_ = uStack_79c;
  local_368.Size = iStack_7a0;
  local_368.DataPtr = (wchar_t *)local_a58.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_368,&local_d90.ObjectName,&local_d90.OuterName,&local_d90.PackageName);
  if (!bVar18) {
    local_ca0 = 0;
    local_d90.PackageName.ComparisonIndex.Value = 0;
    local_d90.PackageName.Number = 0;
    local_d90.ObjectName.ComparisonIndex.Value = 0;
    local_d90.ObjectName.Number = 0;
    local_d90.OuterName.ComparisonIndex.Value = 0;
    local_d90.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_d90);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_be8,L"/Game/NotRemovedPackage");
  local_798 = local_be8.Data.AllocatorInstance.Data;
  local_d78.ObjectName.ComparisonIndex.Value = 0;
  local_d78.ObjectName.Number = 0;
  local_d78.OuterName.ComparisonIndex.Value = 0;
  local_d78.OuterName.Number = 0;
  local_d78.PackageName.ComparisonIndex.Value = 0;
  local_d78.PackageName.Number = 0;
  iStack_790 = local_be8.Data.ArrayNum + -1;
  if (local_be8.Data.ArrayNum == 0) {
    iStack_790 = iVar9;
  }
  local_358._12_4_ = uStack_78c;
  local_358.Size = iStack_790;
  local_358.DataPtr = (wchar_t *)local_be8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_358,&local_d78.ObjectName,&local_d78.OuterName,&local_d78.PackageName);
  if (!bVar18) {
    local_c98 = 0;
    local_d78.PackageName.ComparisonIndex.Value = 0;
    local_d78.PackageName.Number = 0;
    local_d78.ObjectName.ComparisonIndex.Value = 0;
    local_d78.ObjectName.Number = 0;
    local_d78.OuterName.ComparisonIndex.Value = 0;
    local_d78.OuterName.Number = 0;
  }
  AddKnownMissing(Type_Package,&local_d78,None);
  if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_be8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_bd8,L"/Game/NotRemovedPackage");
  local_788 = local_bd8.Data.AllocatorInstance.Data;
  local_d60.ObjectName.ComparisonIndex.Value = 0;
  local_d60.ObjectName.Number = 0;
  local_d60.OuterName.ComparisonIndex.Value = 0;
  local_d60.OuterName.Number = 0;
  local_d60.PackageName.ComparisonIndex.Value = 0;
  local_d60.PackageName.Number = 0;
  iStack_780 = local_bd8.Data.ArrayNum + -1;
  if (local_bd8.Data.ArrayNum == 0) {
    iStack_780 = iVar9;
  }
  local_348._12_4_ = uStack_77c;
  local_348.Size = iStack_780;
  local_348.DataPtr = (wchar_t *)local_bd8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_348,&local_d60.ObjectName,&local_d60.OuterName,&local_d60.PackageName);
  if (!bVar18) {
    local_c90 = 0;
    local_d60.PackageName.ComparisonIndex.Value = 0;
    local_d60.PackageName.Number = 0;
    local_d60.ObjectName.ComparisonIndex.Value = 0;
    local_d60.ObjectName.Number = 0;
    local_d60.OuterName.ComparisonIndex.Value = 0;
    local_d60.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_d60);
  if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_bc8,L"/Game/NotRemovedPackage");
  local_778 = local_bc8.Data.AllocatorInstance.Data;
  local_d48.ObjectName.ComparisonIndex.Value = 0;
  local_d48.ObjectName.Number = 0;
  local_d48.OuterName.ComparisonIndex.Value = 0;
  local_d48.OuterName.Number = 0;
  local_d48.PackageName.ComparisonIndex.Value = 0;
  local_d48.PackageName.Number = 0;
  iStack_770 = local_bc8.Data.ArrayNum + -1;
  if (local_bc8.Data.ArrayNum == 0) {
    iStack_770 = iVar9;
  }
  local_338._12_4_ = uStack_76c;
  local_338.Size = iStack_770;
  local_338.DataPtr = (wchar_t *)local_bc8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_338,&local_d48.ObjectName,&local_d48.OuterName,&local_d48.PackageName);
  if (!bVar18) {
    local_c88 = 0;
    local_d48.PackageName.ComparisonIndex.Value = 0;
    local_d48.PackageName.Number = 0;
    local_d48.ObjectName.ComparisonIndex.Value = 0;
    local_d48.ObjectName.Number = 0;
    local_d48.OuterName.ComparisonIndex.Value = 0;
    local_d48.OuterName.Number = 0;
  }
  RemoveKnownMissing(Type_Package,&local_d48,Option_MissingLoad);
  if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_bb8,L"/Game/NotRemovedPackage");
  local_768 = local_bb8.Data.AllocatorInstance.Data;
  local_d30.ObjectName.ComparisonIndex.Value = 0;
  local_d30.ObjectName.Number = 0;
  local_d30.OuterName.ComparisonIndex.Value = 0;
  local_d30.OuterName.Number = 0;
  local_d30.PackageName.ComparisonIndex.Value = 0;
  local_d30.PackageName.Number = 0;
  iStack_760 = local_bb8.Data.ArrayNum + -1;
  if (local_bb8.Data.ArrayNum == 0) {
    iStack_760 = iVar9;
  }
  local_328._12_4_ = uStack_75c;
  local_328.Size = iStack_760;
  local_328.DataPtr = (wchar_t *)local_bb8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_328,&local_d30.ObjectName,&local_d30.OuterName,&local_d30.PackageName);
  if (!bVar18) {
    local_c80 = 0;
    local_d30.PackageName.ComparisonIndex.Value = 0;
    local_d30.PackageName.Number = 0;
    local_d30.ObjectName.ComparisonIndex.Value = 0;
    local_d30.ObjectName.Number = 0;
    local_d30.OuterName.ComparisonIndex.Value = 0;
    local_d30.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_d30);
  if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&local_ba8,L"/Game/NotRemovedPackage");
  local_758 = local_ba8.Data.AllocatorInstance.Data;
  local_d18.ObjectName.ComparisonIndex.Value = 0;
  local_d18.ObjectName.Number = 0;
  local_d18.OuterName.ComparisonIndex.Value = 0;
  local_d18.OuterName.Number = 0;
  local_d18.PackageName.ComparisonIndex.Value = 0;
  local_d18.PackageName.Number = 0;
  iStack_750 = local_ba8.Data.ArrayNum + -1;
  if (local_ba8.Data.ArrayNum == 0) {
    iStack_750 = iVar9;
  }
  local_318._12_4_ = uStack_74c;
  local_318.Size = iStack_750;
  local_318.DataPtr = (wchar_t *)local_ba8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_318,&local_d18.ObjectName,&local_d18.OuterName,&local_d18.PackageName);
  if (!bVar18) {
    local_c78 = 0;
    local_d18.PackageName.ComparisonIndex.Value = 0;
    local_d18.PackageName.Number = 0;
    local_d18.ObjectName.ComparisonIndex.Value = 0;
    local_d18.ObjectName.Number = 0;
    local_d18.OuterName.ComparisonIndex.Value = 0;
    local_d18.OuterName.Number = 0;
  }
  RemoveKnownMissing(Type_Package,&local_d18,None);
  if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b98,L"/Game/NotRemovedPackage");
  local_748 = local_b98.Data.AllocatorInstance.Data;
  local_d00.ObjectName.ComparisonIndex.Value = 0;
  local_d00.ObjectName.Number = 0;
  local_d00.OuterName.ComparisonIndex.Value = 0;
  local_d00.OuterName.Number = 0;
  local_d00.PackageName.ComparisonIndex.Value = 0;
  local_d00.PackageName.Number = 0;
  iStack_740 = local_b98.Data.ArrayNum + -1;
  if (local_b98.Data.ArrayNum == 0) {
    iStack_740 = iVar9;
  }
  local_518._12_4_ = uStack_73c;
  local_518.Size = iStack_740;
  local_518.DataPtr = (wchar_t *)local_b98.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&local_518,&local_d00.ObjectName,&local_d00.OuterName,&local_d00.PackageName);
  if (!bVar18) {
    local_c70 = 0;
    local_d00.PackageName.ComparisonIndex.Value = 0;
    local_d00.PackageName.Number = 0;
    local_d00.ObjectName.ComparisonIndex.Value = 0;
    local_d00.ObjectName.Number = 0;
    local_d00.OuterName.ComparisonIndex.Value = 0;
    local_d00.OuterName.Number = 0;
  }
  bVar18 = IsKnownMissing(Type_Package,&local_d00);
  if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b98.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  if (4 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  if ((FName *)local_ff8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_ff8.AllocatorInstance.Data);
  }
  DestructItems<_FCoreRedirects::RunTests_::__l2::FRedirectTest,int>
            ((FRedirectTest *)local_1008.Data,(int)local_1000);
  if ((FRedirectTest *)local_1008.Data != (FRedirectTest *)0x0) {
    FMemory::Free(local_1008.Data);
  }
  DestructItems<FCoreRedirect,int>((FCoreRedirect *)local_1018.Data,(int)local_1010);
  if ((FCoreRedirect *)local_1018.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_1018.Data);
  }
  return bVar5;
}

// ValidateAllRedirects @ 141febb60

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FCoreRedirects::ValidateAllRedirects(void)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  FCoreRedirectsContext *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  atomic<unsigned_int> aVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FCoreRedirectsContext *pFVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FScopeCoreRedirectsReadLockedContext local_120;
  int local_110;
  int local_10c;
  FCoreRedirectsContext *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FCoreRedirect *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TArrayView<FCoreRedirect_const_,int> local_78 [2];
  undefined4 local_4c;
  
  local_120.NeedsUnlock = true;
  pFVar5 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar15 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar5 != (FCoreRedirectsContext *)0x0) {
    pFVar15 = pFVar5;
  }
  aVar3 = (pFVar15->RWLock).WriteLockOwnerThreadId;
  local_120.Context = pFVar15;
  local_108 = pFVar15;
  if ((aVar3 == (atomic<unsigned_int>)0x0) ||
     (aVar9 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar3 != aVar9)) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->RWLock);
  }
  else {
    piVar2 = &(pFVar15->RWLock).RecursionCount;
    *piVar2 = *piVar2 + 1;
  }
  pFVar15->bValidatedOnce = true;
  local_res20 = (pFVar15->RedirectTypeMap).FastIterable.ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar13 = (pFVar15->RedirectTypeMap).FastIterable.AllocatorInstance.Data;
  pFVar19 = pFVar13 + 0x28;
  local_100 = pFVar13 + uVar10 * 0x68;
  do {
    pFVar18 = local_100;
    if ((pFVar15->RedirectTypeMap).FastIterable.ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar18) {
      ValidateAssetRedirectsUnderReadLock(&local_120);
      pFVar5 = local_120.Context;
      if (local_120.NeedsUnlock != false) {
        if (((local_120.Context)->RWLock).RecursionCount < 1) {
          ReleaseSRWLockShared((PSRWLOCK)&(local_120.Context)->RWLock);
        }
        else {
          aVar3 = ((local_120.Context)->RWLock).WriteLockOwnerThreadId;
          aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
          if (aVar3 != aVar9) {
            `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
            operator()(local_res18);
          }
          piVar2 = &(pFVar5->RWLock).RecursionCount;
          *piVar2 = *piVar2 + -1;
        }
      }
      return;
    }
    ::FString::PrintfImpl(&local_88,L"Type %d");
    uVar16 = *(uint *)(pFVar19 + 8);
    iStack_f0 = 0;
    local_d8 = 0;
    uStack_ec = 1;
    uStack_dc = 0;
    if (uVar16 != 0) {
      pFVar18 = *(FScriptContainerElement **)pFVar19;
      if (*(FScriptContainerElement **)pFVar19 == (FScriptContainerElement *)0x0) {
        pFVar18 = pFVar19 + -0x10;
      }
      uVar14 = *(uint *)pFVar18;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        uStack_dc = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
        goto LAB_141febcb0;
        uVar14 = *(uint *)(pFVar18 + (lVar11 + 1) * 4);
      }
      uStack_ec = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_ec * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_110 = (int)lVar11;
      uStack_dc = local_d8 + -1 + local_110;
      if ((int)uVar16 < (int)uStack_dc) {
        uStack_dc = uVar16;
      }
    }
LAB_141febcb0:
    pFVar18 = pFVar19 + -0x20;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + -0x10);
    uStack_d4 = local_4c;
    iStack_d0 = *(int *)(pFVar19 + -0x18) - *(int *)(pFVar19 + 0x14);
    uVar14 = uVar16 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
    uStack_e0 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_dc;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = local_d8;
    uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
    iVar12 = (int)uVar16 >> 5;
    local_f8 = pFVar18;
    local_e8 = pTVar1;
    local_c8 = pFVar18;
    TStack_c0.Array = pTVar1;
    if (((int)uVar16 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)(pFVar19 + 8);
    if (uVar16 != uVar4) {
      pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar19;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar19 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_141febdc0;
        uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar10 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_10c = (int)lVar11;
      uVar16 = local_10c + -1 + uVar14;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_141febdc0:
    while( true ) {
      pFVar7 = local_c8;
      if (*(int *)(local_c8 + 8) - *(int *)(local_c8 + 0x34) != (int)uStack_a0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_c0.CurrentBitIndex == uVar16) && (TStack_c0.Array == pTVar1)) &&
         (pFVar7 == pFVar18)) break;
      lVar11 = (longlong)TStack_c0.CurrentBitIndex * 0x20 + *(longlong *)pFVar7;
      local_98 = *(FCoreRedirect **)(lVar11 + 8);
      iVar12 = *(int *)(lVar11 + 0x10);
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_78[0]._12_4_ = uStack_8c;
      local_78[0].ArrayNum = iVar12;
      local_78[0].DataPtr = local_98;
      iStack_90 = iVar12;
      ValidateRedirectList(local_78,&local_88);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x68;
    pFVar19 = pFVar19 + 0x68;
    uVar10 = (ulonglong)local_res20;
    pFVar15 = local_108;
  } while( true );
}

// ValidateAssetRedirects @ 141febf00

bool __cdecl FCoreRedirects::ValidateAssetRedirects(void)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FCoreRedirectsContext *pFVar6;
  undefined1 local_res8 [8];
  FScopeCoreRedirectsReadLockedContext local_18;
  
  local_18.NeedsUnlock = true;
  pFVar3 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar6 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar3 != (FCoreRedirectsContext *)0x0) {
    pFVar6 = pFVar3;
  }
  aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
  local_18.Context = pFVar6;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 == aVar5) {
      piVar1 = &(pFVar6->RWLock).RecursionCount;
      *piVar1 = *piVar1 + 1;
      goto LAB_141febf69;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
LAB_141febf69:
  bVar4 = ValidateAssetRedirectsUnderReadLock(&local_18);
  if (0 < (pFVar6->RWLock).RecursionCount) {
    aVar2 = (pFVar6->RWLock).WriteLockOwnerThreadId;
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar5) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    piVar1 = &(pFVar6->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
    return bVar4;
  }
  ReleaseSRWLockShared((PSRWLOCK)&pFVar6->RWLock);
  return bVar4;
}

// ValidateAssetRedirectsUnderReadLock @ 141febfd0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCoreRedirects::ValidateAssetRedirectsUnderReadLock(FScopeCoreRedirectsReadLockedContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  atomic<unsigned_int> aVar10;
  longlong lVar11;
  FCoreRedirectsContext *pFVar12;
  undefined1 *puVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  longlong *plVar23;
  FCoreRedirectObjectName *pFVar24;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_138;
  TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> local_128;
  longlong *local_118;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  longlong *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FScopeCoreRedirectsReadLockedContext local_60 [2];
  
  pFVar12 = param_1->Context;
  bVar8 = true;
  if (*(int *)&(pFVar12->RedirectTypeMap).Map.field_0x8 !=
      *(int *)&(pFVar12->RedirectTypeMap).Map.field_0x34) {
    puVar13 = *(undefined1 **)&(pFVar12->RedirectTypeMap).Map.field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pFVar12->RedirectTypeMap).Map.field_0x38;
    }
    iVar15 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(pFVar12->RedirectTypeMap).Map.field_0x48 - 1U & 0x80) * 4
                     );
    if (iVar15 != -1) {
      lVar11 = *(longlong *)&(pFVar12->RedirectTypeMap).Map;
      do {
        lVar2 = lVar11 + (longlong)iVar15 * 0x18;
        if (*(int *)(lVar11 + (longlong)iVar15 * 0x18) == 0x80) {
          if (lVar2 != 0) {
            plVar23 = *(longlong **)(lVar2 + 8);
            goto LAB_141fec054;
          }
          break;
        }
        iVar15 = *(int *)(lVar2 + 0x10);
      } while (iVar15 != -1);
    }
  }
  plVar23 = (longlong *)0x0;
LAB_141fec054:
  if (plVar23 != (longlong *)0x0) {
    iVar15 = (int)plVar23[5];
    iStack_108 = 0;
    local_f0 = 0;
    uStack_104 = 1;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar23 + 2);
    iStack_f4 = 0;
    if (iVar15 != 0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar22;
      }
      uVar19 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar11 = (longlong)iStack_108;
        local_f0 = local_f0 + 0x20;
        iStack_108 = iStack_108 + 1;
        iStack_f4 = iVar15;
        if ((int)((iVar15 + -1 >> 0x1f & 0x1fU) + iVar15 + -1) >> 5 < iStack_108)
        goto LAB_141fec10e;
        uVar19 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uStack_104 = -uVar19 & uVar19;
      uVar16 = (ulonglong)uStack_104 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_f4 = local_f0 + -1 + (int)lVar11;
      if (iVar15 < iStack_f4) {
        iStack_f4 = iVar15;
      }
    }
LAB_141fec10e:
    local_138 = *(uint *)(plVar23 + 5);
    uVar19 = local_138 & 0xffffffe0;
    iStack_e8 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
    uStack_f8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_104,iStack_108);
    TStack_88.CurrentBitIndex = iStack_f4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)local_138 >> 5;
    TStack_88._28_4_ = iStack_f4;
    TStack_88.BaseBitIndex = local_f0;
    uStack_68 = CONCAT44(uStack_e4,iStack_e8);
    local_118 = plVar23;
    local_110 = plVar23;
    local_100 = pTVar22;
    iStack_ec = iStack_f4;
    local_c8 = pTVar22;
    local_90 = plVar23;
    TStack_88.Array = pTVar22;
    if ((((int)local_138 < 0) || (iVar15 < (int)local_138)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar4 = *(uint *)(plVar23 + 5);
    if (local_138 != uVar4) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar22;
      }
      uVar21 = -1 << ((byte)local_138 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
      while (uVar21 == 0) {
        lVar11 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        local_138 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17)
        goto LAB_141fec21c;
        uVar21 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_138 = (int)lVar11 + -1 + uVar19;
      if ((int)uVar4 < (int)local_138) {
        local_138 = uVar4;
      }
    }
LAB_141fec21c:
    plVar20 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    bVar8 = true;
    local_d0 = plVar20;
    while( true ) {
      plVar7 = local_90;
      if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_88.CurrentBitIndex == local_138) && (TStack_88.Array == pTVar22)) &&
         (plVar7 == plVar23)) break;
      local_d8 = (longlong *)((longlong)TStack_88.CurrentBitIndex * 0x20 + *plVar7 + 8);
      local_res8[0] = *(uint *)(local_d8 + 1);
      uVar16 = (ulonglong)(int)local_res8[0];
      lVar11 = *local_d8;
      pFVar24 = (FCoreRedirectObjectName *)(lVar11 + 0x1c);
      local_e0 = uVar16 * 0xa0 + lVar11;
      while( true ) {
        lVar2 = local_e0;
        if ((int)local_d8[1] != (int)uVar16) {
          `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (lVar11 == lVar2) break;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        local_60[0].NeedsUnlock = true;
        pFVar12 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
        if (*(FCoreRedirectsContext **)(*plVar20 + 0xc90) != (FCoreRedirectsContext *)0x0) {
          pFVar12 = *(FCoreRedirectsContext **)(*plVar20 + 0xc90);
        }
        aVar5 = (pFVar12->RWLock).WriteLockOwnerThreadId;
        piVar1 = &(pFVar12->RWLock).RecursionCount;
        local_60[0].Context = pFVar12;
        if ((aVar5 == (atomic<unsigned_int>)0x0) ||
           (aVar10 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar5 != aVar10)) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->RWLock);
        }
        else {
          *piVar1 = *piVar1 + 1;
        }
        GetMatchingRedirectsUnderReadLock(Type_Asset,pFVar24,&local_128,None,local_60);
        if (*piVar1 < 1) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar12->RWLock);
        }
        else {
          aVar5 = (pFVar12->RWLock).WriteLockOwnerThreadId;
          aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
          if (aVar5 != aVar10) {
            `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
            operator()(local_res18);
          }
          *piVar1 = *piVar1 + -1;
        }
        iVar15 = local_128.ArrayNum;
        pFVar3 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 8;
        FVar18.Data = local_128.AllocatorInstance.Data;
        while( true ) {
          if (local_128.ArrayNum != iVar15) {
            `TCheckedPointerIterator<FCoreRedirect_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (FVar18.Data == pFVar3) break;
          if (2 < (byte)LogCoreRedirects._0_1_) {
            lVar2 = *(longlong *)FVar18.Data;
            FCoreRedirectObjectName::CombineNames
                      (&local_a0,*(FName *)(lVar2 + 0x1c),*(FName *)(lVar2 + 0x24),
                       *(FName *)(lVar2 + 0x2c));
            FCoreRedirectObjectName::CombineNames
                      (&local_b0,pFVar24->ObjectName,pFVar24->OuterName,pFVar24->PackageName);
            FCoreRedirectObjectName::CombineNames
                      (&local_c0,pFVar24[-1].ObjectName,pFVar24[-1].OuterName,
                       pFVar24[-1].PackageName);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          bVar8 = false;
          FVar18.Data = FVar18.Data + 8;
        }
        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        lVar11 = lVar11 + 0xa0;
        pFVar24 = (FCoreRedirectObjectName *)&pFVar24[6].PackageName;
        uVar16 = (ulonglong)local_res8[0];
        plVar20 = local_d0;
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      pTVar22 = local_c8;
      plVar23 = local_118;
    }
  }
  return bVar8;
}

// ValidateRedirectList @ 141fec510

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCoreRedirects::ValidateRedirectList(TArrayView<FCoreRedirect_const_,int> *param_1,FString *param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  FCoreRedirect *pFVar9;
  FCoreRedirect *pFVar10;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [16];
  FTopLevelAssetPath local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FName local_58;
  uint uStack_50;
  uint uStack_4c;
  FName local_48;
  uint uStack_40;
  uint uStack_3c;
  FName local_38;
  uint uStack_30;
  uint uStack_2c;
  
  pFVar9 = param_1->DataPtr;
  pFVar10 = pFVar9 + param_1->ArrayNum;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 1) {
    if (((pFVar9->NewName).ObjectName != (FName)0x0) ||
       ((pFVar9->NewName).PackageName != (FName)0x0)) {
      FVar1 = (pFVar9->NewName).PackageName;
      pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
      pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)0x0,FVar1,None,RF_NoFlags,Borrowed);
      FCoreRedirectObjectName::CombineNames
                (&local_b8,(pFVar9->NewName).ObjectName,(pFVar9->NewName).OuterName,
                 (pFVar9->NewName).PackageName);
      FCoreRedirectObjectName::CombineNames
                (&local_a8,(pFVar9->OldName).ObjectName,(pFVar9->OldName).OuterName,
                 (pFVar9->OldName).PackageName);
      uVar8 = 0;
      if (((pFVar9->RedirectFlags & Type_Class) != None) &&
         ((pFVar9->RedirectFlags & Category_AllMask) == None)) {
        if ((pFVar9->NewName).PackageName == (FName)0x0) {
          if (2 < (byte)LogCoreRedirects._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          }
        }
        else {
          local_58 = (FName)local_b8.Data.AllocatorInstance.Data;
          local_88.PackageName.ComparisonIndex.Value = 0;
          local_88.PackageName.Number = 0;
          local_88.AssetName.ComparisonIndex.Value = 0;
          local_88.AssetName.Number = 0;
          uStack_50 = local_b8.Data.ArrayNum - 1;
          if (local_b8.Data.ArrayNum == 0) {
            uStack_50 = uVar8;
          }
          local_98._12_4_ = uStack_4c;
          local_98._8_4_ = uStack_50;
          local_98._0_8_ = local_b8.Data.AllocatorInstance.Data;
          FTopLevelAssetPath::TrySetPath(&local_88,(TStringView<wchar_t> *)local_98);
          FVar3 = local_88.AssetName;
          FVar1 = local_88.PackageName;
          pUVar5 = Z_Construct_UClass_UClass_NoRegister();
          FVar4 = local_88.AssetName;
          FVar2 = local_88.PackageName;
          local_88.PackageName.ComparisonIndex = FVar1.ComparisonIndex.Value;
          local_88.PackageName.Number = FVar1.Number;
          local_98._0_4_ = local_88.PackageName.ComparisonIndex.Value;
          local_98._4_4_ = local_88.PackageName.Number;
          local_88.AssetName.ComparisonIndex = FVar3.ComparisonIndex.Value;
          local_88.AssetName.Number = FVar3.Number;
          local_98._8_4_ = local_88.AssetName.ComparisonIndex.Value;
          local_98._12_4_ = local_88.AssetName.Number;
          local_88.PackageName = FVar2;
          local_88.AssetName = FVar4;
          pUVar7 = StaticFindObject(pUVar5,(FTopLevelAssetPath *)local_98,None);
          if (pUVar7 == (UObject *)0x0) {
            if (pUVar6 == (UObject *)0x0) {
              if (4 < (byte)LogCoreRedirects._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
              }
            }
            else if (1 < (byte)LogCoreRedirects._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects)
              ;
            }
          }
        }
      }
      if (((pFVar9->RedirectFlags & Type_Struct) != None) &&
         ((pFVar9->RedirectFlags & Category_AllMask) == None)) {
        if ((pFVar9->NewName).PackageName == (FName)0x0) {
          if (2 < (byte)LogCoreRedirects._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          }
        }
        else {
          local_48 = (FName)local_b8.Data.AllocatorInstance.Data;
          local_78.PackageName.ComparisonIndex.Value = 0;
          local_78.PackageName.Number = 0;
          local_78.AssetName.ComparisonIndex.Value = 0;
          local_78.AssetName.Number = 0;
          uStack_40 = local_b8.Data.ArrayNum - 1;
          if (local_b8.Data.ArrayNum == 0) {
            uStack_40 = uVar8;
          }
          local_98._12_4_ = uStack_3c;
          local_98._8_4_ = uStack_40;
          local_98._0_8_ = local_b8.Data.AllocatorInstance.Data;
          FTopLevelAssetPath::TrySetPath(&local_78,(TStringView<wchar_t> *)local_98);
          FVar3 = local_78.AssetName;
          FVar1 = local_78.PackageName;
          pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
          FVar4 = local_78.AssetName;
          FVar2 = local_78.PackageName;
          local_78.PackageName.ComparisonIndex = FVar1.ComparisonIndex.Value;
          local_78.PackageName.Number = FVar1.Number;
          local_98._0_4_ = local_78.PackageName.ComparisonIndex.Value;
          local_98._4_4_ = local_78.PackageName.Number;
          local_78.AssetName.ComparisonIndex = FVar3.ComparisonIndex.Value;
          local_78.AssetName.Number = FVar3.Number;
          local_98._8_4_ = local_78.AssetName.ComparisonIndex.Value;
          local_98._12_4_ = local_78.AssetName.Number;
          local_78.PackageName = FVar2;
          local_78.AssetName = FVar4;
          pUVar7 = StaticFindObject(pUVar5,(FTopLevelAssetPath *)local_98,None);
          if (pUVar7 == (UObject *)0x0) {
            if (pUVar6 == (UObject *)0x0) {
              if (4 < (byte)LogCoreRedirects._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u_ValidateRedirec_150819560,
                           (FLogCategoryBase *)&LogCoreRedirects);
              }
            }
            else if (1 < (byte)LogCoreRedirects._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects)
              ;
            }
          }
        }
      }
      if (((pFVar9->RedirectFlags & Type_Enum) != None) &&
         ((pFVar9->RedirectFlags & Category_AllMask) == None)) {
        if ((pFVar9->NewName).PackageName == (FName)0x0) {
          if (((((pFVar9->NewName).ObjectName != (pFVar9->OldName).ObjectName) ||
               ((pFVar9->NewName).OuterName != (pFVar9->OldName).OuterName)) ||
              ((pFVar9->OldName).PackageName != (FName)0x0)) && (2 < (byte)LogCoreRedirects._0_1_))
          {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
          }
        }
        else {
          local_38 = (FName)local_b8.Data.AllocatorInstance.Data;
          local_68.PackageName.ComparisonIndex.Value = 0;
          local_68.PackageName.Number = 0;
          local_68.AssetName.ComparisonIndex.Value = 0;
          local_68.AssetName.Number = 0;
          uStack_30 = local_b8.Data.ArrayNum - 1;
          if (local_b8.Data.ArrayNum == 0) {
            uStack_30 = uVar8;
          }
          local_98._12_4_ = uStack_2c;
          local_98._8_4_ = uStack_30;
          local_98._0_8_ = local_b8.Data.AllocatorInstance.Data;
          FTopLevelAssetPath::TrySetPath(&local_68,(TStringView<wchar_t> *)local_98);
          FVar3 = local_68.AssetName;
          FVar1 = local_68.PackageName;
          pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
          FVar4 = local_68.AssetName;
          FVar2 = local_68.PackageName;
          local_68.PackageName.ComparisonIndex = FVar1.ComparisonIndex.Value;
          local_68.PackageName.Number = FVar1.Number;
          local_98._0_4_ = local_68.PackageName.ComparisonIndex.Value;
          local_98._4_4_ = local_68.PackageName.Number;
          local_68.AssetName.ComparisonIndex = FVar3.ComparisonIndex.Value;
          local_68.AssetName.Number = FVar3.Number;
          local_98._8_4_ = local_68.AssetName.ComparisonIndex.Value;
          local_98._12_4_ = local_68.AssetName.Number;
          local_68.PackageName = FVar2;
          local_68.AssetName = FVar4;
          pUVar7 = StaticFindObject(pUVar5,(FTopLevelAssetPath *)local_98,None);
          if (pUVar7 == (UObject *)0x0) {
            if (pUVar6 == (UObject *)0x0) {
              if (4 < (byte)LogCoreRedirects._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
              }
            }
            else if (1 < (byte)LogCoreRedirects._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects)
              ;
            }
          }
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 150484150

bool __thiscall `FCoreRedirects::AddKnownMissing'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3329489777782163392>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3329489777782163392>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150484190

bool __thiscall `FCoreRedirects::AddRedirectList'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3329489777782164097>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3329489777782164097>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504841d0

bool __thiscall `FCoreRedirects::GetConfigKeyMap'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3329489777782164512>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3329489777782164512>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150484210

bool __thiscall `FCoreRedirects::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3329489777782163086>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3329489777782163086>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150484250

bool __thiscall `FCoreRedirects::ReadRedirectsFromIni'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3329489777782163952>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3329489777782163952>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

