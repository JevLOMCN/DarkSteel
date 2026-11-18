// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 18

// <lambda_invoker_cdecl> @ 146af5bc0

void __cdecl
`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_2>::<lambda_invoker_cdecl>
          (void)

{
  ISourceControlModule *pIVar1;
  longlong lVar2;
  
  pIVar1 = ISourceControlModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  LOCK();
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + -1;
  UNLOCK();
  return;
}

// ~FSourceControlAssetDataCache @ 146b00ef0

void __thiscall
FSourceControlAssetDataCache::~FSourceControlAssetDataCache(FSourceControlAssetDataCache *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  TQueue<FAssetDataToLoad,0>::~TQueue<FAssetDataToLoad,0>(&this->AssetDataToLoad);
  pTVar1 = (this->AssetDataToFetch).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->AssetDataToFetch).Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x18);
    pTVar1 = (this->AssetDataToFetch).Tail;
  }
  DestructItems<FString,int>
            ((FString *)(this->FileHistoryToUpdate).AllocatorInstance.Data,
             (this->FileHistoryToUpdate).ArrayNum);
  pFVar2 = (this->FileHistoryToUpdate).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AssetDataCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AssetDataCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSourceControlAssetDataEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSourceControlAssetDataEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSourceControlAssetDataEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddAssetInformationEntry @ 146b042a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSourceControlAssetDataEntry * __thiscall
FSourceControlAssetDataCache::AddAssetInformationEntry
          (FSourceControlAssetDataCache *this,TSharedRef<ISourceControlState,1> *param_1)

{
  int *piVar1;
  void *_Src;
  ISourceControlState *pIVar2;
  TNode *pTVar3;
  code *pcVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  TNode *pTVar9;
  longlong lVar10;
  FSourceControlAssetDataEntry *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar14;
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_res10;
  FString local_68;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x68))();
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = *(int *)(puVar8 + 1);
  lVar10 = (longlong)local_68.Data.ArrayNum;
  _Src = (void *)*puVar8;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  local_res10 = &local_68;
  TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_const_&>_>
            ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  pFVar11 = (FSourceControlAssetDataEntry *)
            (*(longlong *)&this->AssetDataCache + (longlong)(int)local_res8.Key * 0x40 + 0x10);
  if (pFVar11 == (FSourceControlAssetDataEntry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssetDataEntry != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                       ,0x70,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
      return pFVar11;
    }
  }
  if ((pFVar11->AssetDataArrayPtr).Object != (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AssetDataEntry->AssetDataArrayPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                       ,0x71,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
      return pFVar11;
    }
  }
  pFVar11->bInitialized = false;
  FStack_50.ReferenceController = ::operator_new(0x20);
  if (FStack_50.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTVar14 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    FStack_50.ReferenceController = _UNK_150651568;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FStack_50.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(FStack_50.ReferenceController + 1);
    (FStack_50.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_50.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_UFAssetData__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    FStack_50.ReferenceController[1]._padding_ = 0;
    FStack_50.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_50.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar14 == (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
        return pFVar11;
      }
    }
    LOCK();
    (FStack_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar12 = FStack_50.ReferenceController;
    local_58 = pTVar14;
  }
  if (pFVar11 != (FSourceControlAssetDataEntry *)&local_58) {
    (pFVar11->AssetDataArrayPtr).Object = pTVar14;
    local_58 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar11->AssetDataArrayPtr).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  cVar6 = (**(code **)(*(longlong *)param_1->Object + 0xf0))();
  if (cVar6 == '\0') {
    if ((pFVar11->AssetDataArrayPtr).Object == (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
        return pFVar11;
      }
    }
    pTVar14 = (pFVar11->AssetDataArrayPtr).Object;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    bVar5 = FPackageName::TryConvertFilenameToLongPackageName
                      (&local_68,&local_48,(FString *)0x0,None);
    if (bVar5) {
      bVar5 = USourceControlHelpers::GetAssetData
                        (&local_68,&local_48,pTVar14,
                         (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
    }
    pFVar11->bInitialized = bVar5;
  }
  cVar6 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x418))(UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton,
                              &local_68);
  if (cVar6 == '\0') {
LAB_146b046ec:
    pFVar11->bInitialized = true;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)param_1->Object + 0xf0))();
    if (cVar6 == '\0') {
      if ((pFVar11->AssetDataArrayPtr).Object ==
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
          return pFVar11;
        }
      }
      if (((pFVar11->AssetDataArrayPtr).Object)->ArrayNum != 0) goto LAB_146b046ec;
    }
    if (pFVar11->bInitialized != false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AssetDataEntry->bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x81,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
        return pFVar11;
      }
    }
    iVar7 = (**(code **)(*(longlong *)param_1->Object + 8))();
    if (iVar7 == 0) {
      pFVar13 = (this->FileHistoryToUpdate).AllocatorInstance.Data;
      if ((pFVar13 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar13 + (longlong)(this->FileHistoryToUpdate).ArrayMax * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FSourceControlAssetDataEntry *)(*pcVar4)();
          return pFVar11;
        }
      }
      iVar7 = (this->FileHistoryToUpdate).ArrayNum;
      piVar1 = &(this->FileHistoryToUpdate).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->FileHistoryToUpdate).AllocatorInstance,piVar1);
      }
      _Src_00.Data = local_68.Data.AllocatorInstance.Data;
      pFVar13 = (this->FileHistoryToUpdate).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (this->FileHistoryToUpdate).ArrayNum = iVar7 + 1;
      *(undefined8 *)&pFVar13->field_0x0 = 0;
      lVar10 = (longlong)local_68.Data.ArrayNum;
      *(int *)&pFVar13[8].field_0x0 = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar13 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_68.Data.ArrayNum,
                   (int *)(pFVar13 + 0xc));
        memcpy(*(void **)&pFVar13->field_0x0,_Src_00.Data,lVar10 * 2);
      }
    }
    else {
      pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
      pIVar2 = param_1->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = ::operator_new(0x18);
      if (pTVar9 != (TNode *)0x0) {
        (pTVar9->Item).SharedReferenceCount.ReferenceController = pTVar12;
        pTVar9->NextNode = (TNode *)0x0;
        (pTVar9->Item).Object = pIVar2;
        pTVar3 = (this->AssetDataToFetch).Head;
        (this->AssetDataToFetch).Head = pTVar9;
        pTVar3->NextNode = pTVar9;
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar11;
}

// ClearAssetData @ 146b08110

void __thiscall
FSourceControlAssetDataCache::ClearAssetData(FSourceControlAssetDataCache *this,FString *param_1)

{
  FSourceControlAssetDataEntry *pFVar1;
  
  pFVar1 = TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
           ::Find((TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
                   *)this,param_1);
  if ((pFVar1 != (FSourceControlAssetDataEntry *)0x0) && (pFVar1->bInitialized != false)) {
    TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
    ::Remove((TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
              *)this,param_1);
  }
  return;
}

// ClearPendingTasks @ 146b081c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSourceControlAssetDataCache::ClearPendingTasks(FSourceControlAssetDataCache *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  code *pcVar11;
  PRTL_CRITICAL_SECTION_DEBUG p_Var12;
  FSourceControlAssetDataCache *pFVar13;
  HANDLE pvVar14;
  ULONG_PTR UVar15;
  bool bVar16;
  char cVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [8];
  ForAnyElementType local_120;
  int local_118;
  int iStack_114;
  undefined1 local_110 [8];
  FAssetDataToLoad local_108;
  int local_e8;
  int local_e4;
  ForAnyElementType local_e0;
  FSharedReferencer<1> FStack_d8;
  undefined8 local_d0;
  FSharedReferencer<1> FStack_c8;
  FSourceControlAssetDataCache *local_c0;
  undefined1 auStack_b8 [32];
  longlong *plStack_98;
  undefined4 local_74;
  FSourceControlAssetDataCache *local_68;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iStack_60 = 0;
  puVar1 = &(this->AssetDataCache).field_0x10;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  iStack_114 = 0;
  iVar25 = 0;
  iVar5 = *(int *)&(this->AssetDataCache).field_0x28;
  uStack_5c = 1;
  iStack_4c = iVar25;
  if (iVar5 != 0) {
    puVar26 = *(uint **)&(this->AssetDataCache).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar23 = *puVar26;
    iVar25 = 0;
    while (uVar23 == 0) {
      lVar19 = (longlong)iStack_60;
      iVar25 = iVar25 + 0x20;
      iStack_60 = iStack_60 + 1;
      iStack_4c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_60) goto LAB_146b0827d;
      uVar23 = puVar26[lVar19 + 1];
    }
    uStack_5c = -uVar23 & uVar23;
    uVar4 = (ulonglong)uStack_5c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_e8 = (int)lVar19;
    iStack_4c = iVar25 + -1 + local_e8;
    if (iVar5 < iStack_4c) {
      iStack_4c = iVar5;
    }
  }
LAB_146b0827d:
  uVar23 = *(uint *)&(this->AssetDataCache).field_0x28;
  uVar27 = uVar23 & 0xffffffe0;
  auStack_b8._0_8_ = CONCAT44(uStack_5c,iStack_60);
  uStack_40 = (longlong *)
              CONCAT44(uStack_40._4_4_,
                       *(int *)&(this->AssetDataCache).field_0x8 -
                       *(int *)&(this->AssetDataCache).field_0x34);
  uStack_50 = 0xffffffff;
  auStack_b8._20_4_ = iStack_4c;
  auStack_b8._16_4_ = 0xffffffff;
  local_48 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_74,iVar25);
  iVar25 = (int)uVar23 >> 5;
  auStack_b8._24_8_ = local_48;
  plStack_98 = uStack_40;
  local_c0 = this;
  auStack_b8._8_8_ = puVar1;
  local_68 = this;
  local_58 = puVar1;
  if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar6 = *(uint *)&(this->AssetDataCache).field_0x28;
  if (uVar23 != uVar6) {
    puVar24 = *(undefined1 **)&(this->AssetDataCache).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar25 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar25;
      uVar27 = uVar27 + 0x20;
      iVar25 = iVar25 + 1;
      uVar23 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_146b08380;
      uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_e4 = (int)lVar19;
    uVar23 = local_e4 + -1 + uVar27;
    if ((int)uVar6 < (int)uVar23) {
      uVar23 = uVar6;
    }
  }
LAB_146b08380:
  do {
    pFVar13 = local_c0;
    if (*(int *)&(local_c0->AssetDataCache).field_0x8 -
        *(int *)&(local_c0->AssetDataCache).field_0x34 != (int)plStack_98) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FSourceControlAssetDataEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    iVar5 = local_118;
    if (((auStack_b8._20_4_ == uVar23) && ((undefined1 *)auStack_b8._8_8_ == puVar1)) &&
       (pFVar13 == this)) {
      pFVar28 = local_120.Data + (longlong)local_118 * 0x10;
      FVar22.Data = local_120.Data;
      while( true ) {
        if (local_118 != iVar5) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_110);
        }
        if (FVar22.Data == pFVar28) break;
        if (*(int *)&(this->AssetDataCache).field_0x8 != *(int *)&(this->AssetDataCache).field_0x34)
        {
          if (*(int *)(FVar22.Data + 8) == 0) {
            pwVar21 = L"";
            iVar25 = 0;
          }
          else {
            pwVar21 = *(wchar_t **)FVar22.Data;
            iVar25 = *(int *)(FVar22.Data + 8) + -1;
          }
          uVar23 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar21);
          TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
                      *)this,uVar23,(FString *)FVar22.Data);
        }
        FVar22.Data = FVar22.Data + 0x10;
      }
      piVar3 = &(this->FileHistoryToUpdate).ArrayMax;
      pFVar28 = (this->FileHistoryToUpdate).AllocatorInstance.Data;
      iVar5 = (this->FileHistoryToUpdate).ArrayNum;
      if (*piVar3 < 0) {
        DestructItems<FString,int>((FString *)pFVar28,iVar5);
        (this->FileHistoryToUpdate).ArrayNum = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->FileHistoryToUpdate).AllocatorInstance,0,piVar3);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar28,iVar5);
        (this->FileHistoryToUpdate).ArrayNum = 0;
      }
      while (pTVar7 = ((this->AssetDataToFetch).Tail)->NextNode, pTVar7 != (TNode *)0x0) {
        pTVar8 = (this->AssetDataToFetch).Tail;
        (this->AssetDataToFetch).Tail = pTVar7;
        local_d0 = 0;
        FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&pTVar7->Item != (TSharedPtr<ISourceControlState,1> *)&local_d0) {
          (pTVar7->Item).Object = (ISourceControlState *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar7->Item).SharedReferenceCount,&FStack_c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_c8.ReferenceController);
        if (pTVar8 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar8->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar8,0x18);
        }
      }
      while (pTVar9 = ((this->AssetDataToLoad).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
        pTVar10 = (this->AssetDataToLoad).Tail;
        (this->AssetDataToLoad).Tail = pTVar9;
        local_108.TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.TempFilename.Data.ArrayNum = 0;
        local_108.TempFilename.Data.ArrayMax = 0;
        local_108.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Filename.Data.ArrayNum = 0;
        local_108.Filename.Data.ArrayMax = 0;
        FAssetDataToLoad::operator=(&pTVar9->Item,&local_108);
        if (local_108.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Filename.Data.AllocatorInstance.Data);
        }
        if (local_108.TempFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.TempFilename.Data.AllocatorInstance.Data);
        }
        if (pTVar10 != (TNode *)0x0) {
          pFVar28 = (pTVar10->Item).Filename.Data.AllocatorInstance.Data;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
          }
          pFVar28 = (pTVar10->Item).TempFilename.Data.AllocatorInstance.Data;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
          }
          ::operator_delete(pTVar10,0x28);
        }
      }
      DestructItems<FString,int>((FString *)local_120.Data,local_118);
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      return;
    }
    pFVar28 = (FScriptContainerElement *)
              ((longlong)(int)auStack_b8._20_4_ * 0x40 + *(longlong *)&pFVar13->AssetDataCache);
    if (pFVar28[0x30] == (FScriptContainerElement)0x0) {
      pFVar2 = pFVar28 + 0x20;
      if (*(longlong *)(pFVar28 + 0x20) != 0) {
        do {
          do {
                    /* WARNING: Load size is inaccurate */
          } while (*pFVar2 == (FScriptContainerElement *)0x0);
          plVar20 = *(longlong **)(*pFVar2 + 0x60);
          cVar17 = (**(code **)(*plVar20 + 0x20))(plVar20,0xffffffff);
        } while (cVar17 == '\0');
      }
                    /* WARNING: Load size is inaccurate */
      FVar22.Data = *pFVar2;
      if ((LPCRITICAL_SECTION)FVar22.Data != (LPCRITICAL_SECTION)0x0) {
        local_68 = (FSourceControlAssetDataCache *)0x0;
        uStack_40 = (longlong *)0x0;
        if (*(char *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockSemaphore == '\0') {
          EnterCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
          if (*(char *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockSemaphore != '\0') {
            LeaveCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
            goto LAB_146b08462;
          }
          pFVar13 = *(FSourceControlAssetDataCache **)
                     &((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockCount;
          iVar5 = *(int *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread;
          uVar27 = *(uint *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread + 4
                            );
          pvVar14 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore;
          UVar15 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount;
          iVar25 = *(int *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount + 4);
          p_Var12 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo;
          plVar20 = *(longlong **)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockCount;
          *(FSourceControlAssetDataCache **)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockCount =
               local_68;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread =
               (HANDLE)CONCAT44(uStack_5c,iStack_60);
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore =
               (undefined4)local_58;
          *(undefined4 *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore + 4)
               = local_58._4_4_;
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount = uStack_50;
          *(int *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount + 4) = iStack_4c
          ;
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo =
               (undefined4)local_48;
          *(undefined4 *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo + 4) =
               local_48._4_4_;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockCount = (LONG)uStack_40;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->RecursionCount = uStack_40._4_4_;
          local_68 = pFVar13;
          iStack_60 = iVar5;
          uStack_5c = uVar27;
          local_58 = pvVar14;
          uStack_50 = (int)UVar15;
          iStack_4c = iVar25;
          local_48 = p_Var12;
          uStack_40 = plVar20;
          LeaveCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
LAB_146b0848e:
          if (local_68 != (FSourceControlAssetDataCache *)0x0) {
            plVar20 = &local_58;
            if (uStack_40 != (longlong *)0x0) {
              plVar20 = uStack_40;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        else {
LAB_146b08462:
          if (local_68 != (FSourceControlAssetDataCache *)0x0) {
            UE::Core::Private::Function::CheckCallable(local_68);
            pFVar13 = local_68;
            plVar20 = &local_58;
            if (uStack_40 != (longlong *)0x0) {
              plVar20 = uStack_40;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*(code *)pFVar13)(uVar18);
            goto LAB_146b0848e;
          }
        }
        local_e0.Data = (FScriptContainerElement *)0x0;
        FStack_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar2 != (FScriptContainerElement *)&local_e0) {
          *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar28 + 0x28),&FStack_d8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_d8.ReferenceController);
      }
      if (((local_120.Data <= pFVar28) && (pFVar28 < local_120.Data + (longlong)iStack_114 * 0x10))
         && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_118 == iStack_114) {
        local_118 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_120,&iStack_114);
      }
      lVar19 = (longlong)local_118;
      local_118 = local_118 + 1;
      ::FString::FString((FString *)(local_120.Data + lVar19 * 0x10),(FString *)pFVar28);
    }
    auStack_b8._16_4_ = auStack_b8._16_4_ & ~auStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b8);
  } while( true );
}

// FetchAssetData @ 146b157e0

void __thiscall
FSourceControlAssetDataCache::FetchAssetData
          (FSourceControlAssetDataCache *this,TSharedRef<ISourceControlState,1> *param_1)

{
  TNode *pTVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FString *pFVar7;
  FSourceControlAssetDataEntry *pFVar8;
  undefined8 *puVar9;
  TNode *pTVar10;
  longlong lVar11;
  TQueue<FAssetDataToLoad,0> *pTVar12;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  void *local_48;
  ulonglong local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar6 = (**(code **)(*(longlong *)param_1->Object + 8))();
  if ((iVar6 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFileState->GetHistorySize() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x114,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  (**(code **)(*(longlong *)param_1->Object + 0x10))(param_1->Object,&local_58,0);
  pFVar7 = (FString *)(**(code **)(*(longlong *)param_1->Object + 0x68))();
  pFVar8 = TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
           ::Find((TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
                   *)this,pFVar7);
  if ((pFVar8 == (FSourceControlAssetDataEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetInformation != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x11a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar8->bInitialized != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AssetInformation->bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x11b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((pFVar8->AssetDataArrayPtr).Object == (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetInformation->AssetDataArrayPtr.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                            ,0x11c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_58 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Revision.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                       ,0x11d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_58 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (**(code **)(*local_58 + 0x70))();
  if (iVar6 < 0x100000) {
    if ((local_58 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar5 = (**(code **)(*local_58 + 8))(local_58,&local_48,1);
    pvVar2 = local_48;
    if (cVar5 != '\0') {
      lVar11 = (longlong)(int)local_40;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = CONCAT44(local_30._4_4_,(int)local_40);
      if ((int)local_40 == 0) {
        local_30 = local_40 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_40,0,&local_38,(int)local_40,(int *)((longlong)&local_30 + 4));
        memcpy(local_38.Data,pvVar2,lVar11 * 2);
      }
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x68))();
      local_28.Data = (FScriptContainerElement *)0x0;
      iVar6 = *(int *)(puVar9 + 1);
      pvVar2 = (void *)*puVar9;
      local_20 = CONCAT44(local_20._4_4_,iVar6);
      if (iVar6 == 0) {
        local_20 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,&local_28,iVar6,(int *)((longlong)&local_20 + 4));
        memcpy(local_28.Data,pvVar2,(longlong)iVar6 * 2);
      }
      pTVar12 = &this->AssetDataToLoad;
      pTVar10 = ::operator_new(0x28);
      if (pTVar10 != (TNode *)0x0) {
        pTVar10->NextNode = (TNode *)0x0;
        (pTVar10->Item).TempFilename.Data.AllocatorInstance.Data = local_38.Data;
        local_38.Data = (FScriptContainerElement *)0x0;
        (pTVar10->Item).TempFilename.Data.ArrayNum = (int)local_30;
        (pTVar10->Item).TempFilename.Data.ArrayMax = local_30._4_4_;
        local_30 = 0;
        (pTVar10->Item).Filename.Data.AllocatorInstance.Data = local_28.Data;
        local_28.Data = (FScriptContainerElement *)0x0;
        (pTVar10->Item).Filename.Data.ArrayNum = (int)local_20;
        (pTVar10->Item).Filename.Data.ArrayMax = local_20._4_4_;
        local_20 = 0;
        if (((ulonglong)pTVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1 = pTVar12->Head;
        pTVar12->Head = pTVar10;
        UNLOCK();
        if (((ulonglong)pTVar1 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1->NextNode = pTVar10;
        UNLOCK();
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetAssetDataArray @ 146b164d0

bool __thiscall
FSourceControlAssetDataCache::GetAssetDataArray
          (FSourceControlAssetDataCache *this,TSharedRef<ISourceControlState,1> *param_1,
          TSharedPtr<TArray<FAssetData,TSizedDefaultAllocator<32>_>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FSourceControlAssetDataEntry *pFVar7;
  TSharedRef<ISourceControlState,1> local_28;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if (this->bIsSourceControlDialogShown != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pFVar6 = (FString *)(**(code **)(*(longlong *)param_1->Object + 0x68))();
  pFVar7 = TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
           ::Find((TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
                   *)this,pFVar6);
  if (pFVar7 == (FSourceControlAssetDataEntry *)0x0) {
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = AddAssetInformationEntry(this,&local_28);
    if (pFVar7 == (FSourceControlAssetDataEntry *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetDataEntry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x60,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  if (pFVar7->bInitialized == false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = false;
  }
  else {
    pTVar1 = (pFVar7->AssetDataArrayPtr).SharedReferenceCount.ReferenceController;
    pTVar2 = (pFVar7->AssetDataArrayPtr).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = param_2->Object;
    pTStack_10 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = pTVar2;
    (param_2->SharedReferenceCount).ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = true;
  }
  return bVar4;
}

// GetFileHistory @ 146b171d0

void __thiscall FSourceControlAssetDataCache::GetFileHistory(FSourceControlAssetDataCache *this)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUpdateStatus *pFVar7;
  FUpdateStatus *pFVar8;
  ISourceControlModule *pIVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TRawPtrProxy<FUpdateStatus> local_res8;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  TSharedRef<FUpdateStatus,1> local_88;
  FUpdateStatus *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if ((this->bIsUpdateHistoryInFlight == false) &&
     (uVar1 = (this->FileHistoryToUpdate).ArrayNum, uVar1 != 0)) {
    if (100 < (int)uVar1) {
      uVar1 = 100;
    }
    uVar14 = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&local_c8,0,(int *)((longlong)&local_c0 + 4));
      uVar16 = uVar14;
      do {
        uVar15 = (uint)uVar16;
        uVar5 = 0;
        if ((int)uVar15 < (this->FileHistoryToUpdate).ArrayNum) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (this->FileHistoryToUpdate).AllocatorInstance.Data + uVar14;
        if (((local_c8.Data <= pFVar13) &&
            (pFVar13 < local_c8.Data + (longlong)local_c0._4_4_ * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)local_c0;
        if ((int)local_c0 == local_c0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar6 + 1);
        ::FString::FString((FString *)(local_c8.Data + (longlong)iVar6 * 0x10),(FString *)pFVar13);
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar14 = uVar14 + 0x10;
      } while ((int)(uVar15 + 1) < (int)uVar1);
    }
    pFVar8 = (FUpdateStatus *)0x0;
    uVar5 = 0;
    if ((int)uVar1 <= (this->FileHistoryToUpdate).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->FileHistoryToUpdate,0,uVar1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->FileHistoryToUpdate).AllocatorInstance,
               (this->FileHistoryToUpdate).ArrayNum,&(this->FileHistoryToUpdate).ArrayMax);
    this->bIsUpdateHistoryInFlight = true;
    pFVar7 = ::operator_new(0x60);
    if (pFVar7 != (FUpdateStatus *)0x0) {
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FUpdateStatus__6B_;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      *(undefined4 *)&pFVar7->_padding_ = 0;
      *(undefined4 *)&pFVar7->_padding_ = 0;
      pFVar7->bUpdateHistory = false;
      pFVar7->bGetOpenedOnly = false;
      pFVar7->bUpdateModifiedState = false;
      pFVar7->bUpdateModifiedStateToLocalRevision = false;
      pFVar7->bCheckingAllFiles = false;
      pFVar7->bForceQuiet = false;
      pFVar7->bForceUpdate = false;
      pFVar7->bSetRequireDirPathEndWithSeparator = false;
      pFVar8 = pFVar7;
    }
    local_res8.Object = pFVar8;
    TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_88,&local_res8);
    (local_88.Object)->bUpdateHistory = true;
    (local_88.Object)->bForceQuiet = true;
    pIVar9 = ISourceControlModule::Get();
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x78))(pIVar9);
    FVar3.Data = local_c8.Data;
    iVar6 = (int)local_c0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_c0);
    pcVar2 = *(code **)(*plVar10 + 0xe8);
    if ((int)local_c0 == 0) {
      local_b0 = local_c0 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_c0,0,&local_b8,(int)local_c0,(int *)((longlong)&local_b0 + 4));
      ConstructItems<FString,FString,int>(local_b8.Data,(FString *)FVar3.Data,iVar6);
    }
    local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_50);
    local_38 = &local_a0;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::`2'::<lambda_1>_>
                  ::_vftable_;
      puVar11[3] = 0;
      puVar11[3] = local_b8.Data;
      local_b8.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 4) = (int)local_b0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = local_b0._4_4_;
      local_b0 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    local_78 = local_88.Object;
    pTStack_70 = local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(plVar10,&local_78,&local_c8,1,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_68);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
    DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    DestructItems<FString,int>((FString *)local_c8.Data,(int)local_c0);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return;
}

// LaunchFetchAssetDataTasks @ 146b1c450

void __thiscall
FSourceControlAssetDataCache::LaunchFetchAssetDataTasks(FSourceControlAssetDataCache *this)

{
  TSharedPtr<ISourceControlState,1> *pTVar1;
  atomic<unsigned_int> aVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  ISourceControlState *pIVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  uint uVar10;
  FString *pFVar11;
  TFuture<void> *pTVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  ISourceControlState *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  pTVar6 = CVarSourceControlAssetDataCacheMaxAsyncTask.Ref;
  local_98 = (ISourceControlState *)0x0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  aVar2 = (atomic<unsigned_int>)pTVar6->ShadowedValue[0];
  if ((aVar2 == (atomic<unsigned_int>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxAsyncTask > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x102,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)this->CurrentAsyncTask < (uint)aVar2) {
    do {
      pTVar3 = ((this->AssetDataToFetch).Tail)->NextNode;
      if (pTVar3 == (TNode *)0x0) break;
      pTVar1 = &pTVar3->Item;
      if ((TSharedPtr<ISourceControlState,1> *)&local_98 != pTVar1) {
        local_98 = pTVar1->Object;
        pTVar1->Object = (ISourceControlState *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_90,&(pTVar3->Item).SharedReferenceCount);
      }
      pTVar4 = (this->AssetDataToFetch).Tail;
      (this->AssetDataToFetch).Tail = pTVar3;
      local_88 = 0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<ISourceControlState,1> *)&local_88) {
        pTVar1->Object = (ISourceControlState *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar3->Item).SharedReferenceCount,&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      if (pTVar4 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar4->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar4,0x18);
      }
      if (local_98 == (ISourceControlState *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileState.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                           ,0x106,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar8.ReferenceController = FStack_90.ReferenceController;
      pIVar7 = local_98;
      if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_90.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_98 == (ISourceControlState *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (FString *)(**(code **)(*(longlong *)pIVar7 + 0x68))(pIVar7);
      iVar13 = (pFVar11->Data).ArrayNum;
      if (iVar13 == 0) {
        pwVar14 = L"";
        iVar13 = 0;
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        iVar13 = iVar13 + -1;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar14);
      iVar13 = TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
                           *)this,uVar10,pFVar11);
      lVar16 = 0;
      if (iVar13 == -1) {
LAB_146b1c68c:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetDataEntry != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                           ,0x10a,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        lVar15 = (longlong)iVar13 * 0x40 + *(longlong *)&this->AssetDataCache;
        lVar16 = lVar15 + 0x10;
        if (lVar15 == 0) {
          lVar16 = 0;
        }
        if (lVar16 == 0) goto LAB_146b1c68c;
      }
      LOCK();
      this->CurrentAsyncTask = (atomic<unsigned_int>)((int)this->CurrentAsyncTask + 1);
      UNLOCK();
      local_30 = 0;
      local_40 = `FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_2>::
                 <lambda_invoker_cdecl>;
      local_58[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                    Call;
      local_48 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
      local_78.FileStateRef.Object = pIVar7;
      local_78.FileStateRef.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
      if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = Async<_FSourceControlAssetDataCache::LaunchFetchAssetDataTasks_::__l11::<lambda_1>_>
                          ((TFuture<void> *)local_68,TaskGraph,&local_78,
                           (TUniqueFunction<void___cdecl(void)> *)local_58);
      if ((TFuture<void> *)(lVar16 + 0x10) != pTVar12) {
        *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)pTVar12;
        *(undefined8 *)pTVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar16 + 0x18),
                   (FSharedReferencer<1> *)&pTVar12->field_0x8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.FileStateRef.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    } while ((uint)this->CurrentAsyncTask < (uint)aVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  return;
}

// OnFetchAssetDataComplete @ 146b1f9a0

void __thiscall
FSourceControlAssetDataCache::OnFetchAssetDataComplete(FSourceControlAssetDataCache *this)

{
  LOCK();
  this->CurrentAsyncTask = (atomic<unsigned_int>)((int)this->CurrentAsyncTask + -1);
  UNLOCK();
  return;
}

// OnSourceControlDialogClosed @ 146b205e0

void __thiscall
FSourceControlAssetDataCache::OnSourceControlDialogClosed(FSourceControlAssetDataCache *this)

{
  this->bIsSourceControlDialogShown = false;
  return;
}

// OnSourceControlDialogShown @ 146b20680

void __thiscall
FSourceControlAssetDataCache::OnSourceControlDialogShown(FSourceControlAssetDataCache *this)

{
  ClearPendingTasks(this);
  this->bIsSourceControlDialogShown = true;
  return;
}

// OnSourceControlProviderChanged @ 146b206b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceControlAssetDataCache::OnSourceControlProviderChanged
          (FSourceControlAssetDataCache *this,ISourceControlProvider *param_1,
          ISourceControlProvider *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  code *pcVar11;
  PRTL_CRITICAL_SECTION_DEBUG p_Var12;
  FSourceControlAssetDataCache *pFVar13;
  HANDLE pvVar14;
  ULONG_PTR UVar15;
  bool bVar16;
  char cVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_178 [32];
  undefined1 auStack_128 [8];
  ForAnyElementType FStack_120;
  int iStack_118;
  int iStack_114;
  undefined1 auStack_110 [8];
  FAssetDataToLoad FStack_108;
  int iStack_e8;
  int iStack_e4;
  ForAnyElementType FStack_e0;
  FSharedReferencer<1> FStack_d8;
  undefined8 uStack_d0;
  FSharedReferencer<1> FStack_c8;
  FSourceControlAssetDataCache *pFStack_c0;
  undefined1 auStack_b8 [32];
  longlong *plStack_98;
  undefined4 uStack_74;
  FSourceControlAssetDataCache *pFStack_68;
  int iStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iStack_60 = 0;
  puVar1 = &(this->AssetDataCache).field_0x10;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  iStack_118 = 0;
  iStack_114 = 0;
  iVar25 = 0;
  iVar5 = *(int *)&(this->AssetDataCache).field_0x28;
  uStack_5c = 1;
  iStack_4c = iVar25;
  if (iVar5 != 0) {
    puVar26 = *(uint **)&(this->AssetDataCache).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar23 = *puVar26;
    iVar25 = 0;
    while (uVar23 == 0) {
      lVar19 = (longlong)iStack_60;
      iVar25 = iVar25 + 0x20;
      iStack_60 = iStack_60 + 1;
      iStack_4c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_60) goto LAB_146b0827d;
      uVar23 = puVar26[lVar19 + 1];
    }
    uStack_5c = -uVar23 & uVar23;
    uVar4 = (ulonglong)uStack_5c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iStack_e8 = (int)lVar19;
    iStack_4c = iVar25 + -1 + iStack_e8;
    if (iVar5 < iStack_4c) {
      iStack_4c = iVar5;
    }
  }
LAB_146b0827d:
  uVar23 = *(uint *)&(this->AssetDataCache).field_0x28;
  uVar27 = uVar23 & 0xffffffe0;
  auStack_b8._0_8_ = CONCAT44(uStack_5c,iStack_60);
  uStack_40 = (longlong *)
              CONCAT44(uStack_40._4_4_,
                       *(int *)&(this->AssetDataCache).field_0x8 -
                       *(int *)&(this->AssetDataCache).field_0x34);
  uStack_50 = 0xffffffff;
  auStack_b8._20_4_ = iStack_4c;
  auStack_b8._16_4_ = 0xffffffff;
  uStack_48 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(uStack_74,iVar25);
  iVar25 = (int)uVar23 >> 5;
  auStack_b8._24_8_ = uStack_48;
  plStack_98 = uStack_40;
  pFStack_c0 = this;
  auStack_b8._8_8_ = puVar1;
  pFStack_68 = this;
  uStack_58 = puVar1;
  if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar6 = *(uint *)&(this->AssetDataCache).field_0x28;
  if (uVar23 != uVar6) {
    puVar24 = *(undefined1 **)&(this->AssetDataCache).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar25 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar25;
      uVar27 = uVar27 + 0x20;
      iVar25 = iVar25 + 1;
      uVar23 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_146b08380;
      uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iStack_e4 = (int)lVar19;
    uVar23 = iStack_e4 + -1 + uVar27;
    if ((int)uVar6 < (int)uVar23) {
      uVar23 = uVar6;
    }
  }
LAB_146b08380:
  do {
    pFVar13 = pFStack_c0;
    if (*(int *)&(pFStack_c0->AssetDataCache).field_0x8 -
        *(int *)&(pFStack_c0->AssetDataCache).field_0x34 != (int)plStack_98) {
      auStack_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FSourceControlAssetDataEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_128);
    }
    iVar5 = iStack_118;
    if (((auStack_b8._20_4_ == uVar23) && ((undefined1 *)auStack_b8._8_8_ == puVar1)) &&
       (pFVar13 == this)) {
      pFVar28 = FStack_120.Data + (longlong)iStack_118 * 0x10;
      FVar22.Data = FStack_120.Data;
      while( true ) {
        if (iStack_118 != iVar5) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_110);
        }
        if (FVar22.Data == pFVar28) break;
        if (*(int *)&(this->AssetDataCache).field_0x8 != *(int *)&(this->AssetDataCache).field_0x34)
        {
          if (*(int *)(FVar22.Data + 8) == 0) {
            pwVar21 = L"";
            iVar25 = 0;
          }
          else {
            pwVar21 = *(wchar_t **)FVar22.Data;
            iVar25 = *(int *)(FVar22.Data + 8) + -1;
          }
          uVar23 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar21);
          TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
                      *)this,uVar23,(FString *)FVar22.Data);
        }
        FVar22.Data = FVar22.Data + 0x10;
      }
      piVar3 = &(this->FileHistoryToUpdate).ArrayMax;
      pFVar28 = (this->FileHistoryToUpdate).AllocatorInstance.Data;
      iVar5 = (this->FileHistoryToUpdate).ArrayNum;
      if (*piVar3 < 0) {
        DestructItems<FString,int>((FString *)pFVar28,iVar5);
        (this->FileHistoryToUpdate).ArrayNum = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->FileHistoryToUpdate).AllocatorInstance,0,piVar3);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar28,iVar5);
        (this->FileHistoryToUpdate).ArrayNum = 0;
      }
      while (pTVar7 = ((this->AssetDataToFetch).Tail)->NextNode, pTVar7 != (TNode *)0x0) {
        pTVar8 = (this->AssetDataToFetch).Tail;
        (this->AssetDataToFetch).Tail = pTVar7;
        uStack_d0 = 0;
        FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&pTVar7->Item != (TSharedPtr<ISourceControlState,1> *)&uStack_d0) {
          (pTVar7->Item).Object = (ISourceControlState *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar7->Item).SharedReferenceCount,&FStack_c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_c8.ReferenceController);
        if (pTVar8 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar8->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar8,0x18);
        }
      }
      while (pTVar9 = ((this->AssetDataToLoad).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
        pTVar10 = (this->AssetDataToLoad).Tail;
        (this->AssetDataToLoad).Tail = pTVar9;
        FStack_108.TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_108.TempFilename.Data.ArrayNum = 0;
        FStack_108.TempFilename.Data.ArrayMax = 0;
        FStack_108.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_108.Filename.Data.ArrayNum = 0;
        FStack_108.Filename.Data.ArrayMax = 0;
        FAssetDataToLoad::operator=(&pTVar9->Item,&FStack_108);
        if (FStack_108.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_108.Filename.Data.AllocatorInstance.Data);
        }
        if (FStack_108.TempFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_108.TempFilename.Data.AllocatorInstance.Data);
        }
        if (pTVar10 != (TNode *)0x0) {
          pFVar28 = (pTVar10->Item).Filename.Data.AllocatorInstance.Data;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
          }
          pFVar28 = (pTVar10->Item).TempFilename.Data.AllocatorInstance.Data;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
          }
          ::operator_delete(pTVar10,0x28);
        }
      }
      DestructItems<FString,int>((FString *)FStack_120.Data,iStack_118);
      if (FStack_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_120.Data);
      }
      return;
    }
    pFVar28 = (FScriptContainerElement *)
              ((longlong)(int)auStack_b8._20_4_ * 0x40 + *(longlong *)&pFVar13->AssetDataCache);
    if (pFVar28[0x30] == (FScriptContainerElement)0x0) {
      pFVar2 = pFVar28 + 0x20;
      if (*(longlong *)(pFVar28 + 0x20) != 0) {
        do {
          do {
                    /* WARNING: Load size is inaccurate */
          } while (*pFVar2 == (FScriptContainerElement *)0x0);
          plVar20 = *(longlong **)(*pFVar2 + 0x60);
          cVar17 = (**(code **)(*plVar20 + 0x20))(plVar20,0xffffffff);
        } while (cVar17 == '\0');
      }
                    /* WARNING: Load size is inaccurate */
      FVar22.Data = *pFVar2;
      if ((LPCRITICAL_SECTION)FVar22.Data != (LPCRITICAL_SECTION)0x0) {
        pFStack_68 = (FSourceControlAssetDataCache *)0x0;
        uStack_40 = (longlong *)0x0;
        if (*(char *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockSemaphore == '\0') {
          EnterCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
          if (*(char *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockSemaphore != '\0') {
            LeaveCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
            goto LAB_146b08462;
          }
          pFVar13 = *(FSourceControlAssetDataCache **)
                     &((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockCount;
          iVar5 = *(int *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread;
          uVar27 = *(uint *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread + 4
                            );
          pvVar14 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore;
          UVar15 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount;
          iVar25 = *(int *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount + 4);
          p_Var12 = ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo;
          plVar20 = *(longlong **)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockCount;
          *(FSourceControlAssetDataCache **)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockCount =
               pFStack_68;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->OwningThread =
               (HANDLE)CONCAT44(uStack_5c,iStack_60);
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore =
               (undefined4)uStack_58;
          *(undefined4 *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->LockSemaphore + 4)
               = uStack_58._4_4_;
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount = uStack_50;
          *(int *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x28))->SpinCount + 4) = iStack_4c
          ;
          *(undefined4 *)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo =
               (undefined4)uStack_48;
          *(undefined4 *)((longlong)&((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->DebugInfo + 4) =
               uStack_48._4_4_;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->LockCount = (LONG)uStack_40;
          ((LPCRITICAL_SECTION)(FVar22.Data + 0x50))->RecursionCount = uStack_40._4_4_;
          pFStack_68 = pFVar13;
          iStack_60 = iVar5;
          uStack_5c = uVar27;
          uStack_58 = pvVar14;
          uStack_50 = (int)UVar15;
          iStack_4c = iVar25;
          uStack_48 = p_Var12;
          uStack_40 = plVar20;
          LeaveCriticalSection((LPCRITICAL_SECTION)FVar22.Data);
LAB_146b0848e:
          if (pFStack_68 != (FSourceControlAssetDataCache *)0x0) {
            plVar20 = &uStack_58;
            if (uStack_40 != (longlong *)0x0) {
              plVar20 = uStack_40;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        else {
LAB_146b08462:
          if (pFStack_68 != (FSourceControlAssetDataCache *)0x0) {
            UE::Core::Private::Function::CheckCallable(pFStack_68);
            pFVar13 = pFStack_68;
            plVar20 = &uStack_58;
            if (uStack_40 != (longlong *)0x0) {
              plVar20 = uStack_40;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*(code *)pFVar13)(uVar18);
            goto LAB_146b0848e;
          }
        }
        FStack_e0.Data = (FScriptContainerElement *)0x0;
        FStack_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar2 != (FScriptContainerElement *)&FStack_e0) {
          *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar28 + 0x28),&FStack_d8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_d8.ReferenceController);
      }
      if (((FStack_120.Data <= pFVar28) && (pFVar28 < FStack_120.Data + (longlong)iStack_114 * 0x10)
          ) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (iStack_118 == iStack_114) {
        iStack_118 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_120,&iStack_114);
      }
      lVar19 = (longlong)iStack_118;
      iStack_118 = iStack_118 + 1;
      ::FString::FString((FString *)(FStack_120.Data + lVar19 * 0x10),(FString *)pFVar28);
    }
    auStack_b8._16_4_ = auStack_b8._16_4_ & ~auStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b8);
  } while( true );
}

// OnUpdateHistoryComplete @ 146b21500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlAssetDataCache::OnUpdateHistoryComplete
          (FSourceControlAssetDataCache *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<ISourceControlOperation,1> *param_2,Type param_3)

{
  int iVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ISourceControlModule *pIVar7;
  longlong *plVar8;
  TNode *pTVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res20 [8];
  ISourceControlState *local_38;
  TReferenceControllerBase<1> *local_30;
  
  this->bIsUpdateHistoryInFlight = false;
  if (param_3 == Failed) {
    if (2 < (byte)LogSourceControl._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSourceControl);
      return;
    }
  }
  else {
    pIVar7 = ISourceControlModule::Get();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x78))(pIVar7);
    iVar1 = param_1->ArrayNum;
    pFVar11 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar11 == pFVar12) break;
      iVar6 = *(int *)(pFVar11 + 8) + -1;
      if (*(int *)(pFVar11 + 8) == 0) {
        pwVar10 = L"";
        iVar6 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)&pFVar11->field_0x0;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      iVar6 = TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
                          *)this,uVar5,(FString *)pFVar11);
      if (iVar6 == -1) {
LAB_146b216e4:
        pFVar11 = pFVar11 + 0x10;
      }
      else {
        lVar13 = (longlong)iVar6 * 0x40 + *(longlong *)&this->AssetDataCache;
        lVar14 = lVar13 + 0x10;
        if (lVar13 == 0) {
          lVar14 = 0;
        }
        if (lVar14 == 0) goto LAB_146b216e4;
        (**(code **)(*plVar8 + 0x90))(plVar8,&local_38,pFVar11,1);
        if (local_38 == (ISourceControlState *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FileState.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                             ,0xe3,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((local_38 == (ISourceControlState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = (**(code **)(*(longlong *)local_38 + 8))();
        if (iVar6 < 1) {
          *(undefined1 *)(lVar14 + 0x20) = 1;
LAB_146b216da:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          goto LAB_146b216e4;
        }
        pTVar9 = ::operator_new(0x18);
        if (pTVar9 == (TNode *)0x0) goto LAB_146b216da;
        pTVar9->NextNode = (TNode *)0x0;
        (pTVar9->Item).Object = local_38;
        (pTVar9->Item).SharedReferenceCount.ReferenceController = local_30;
        if (local_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar2 = (this->AssetDataToFetch).Head;
        (this->AssetDataToFetch).Head = pTVar9;
        pTVar2->NextNode = pTVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        pFVar11 = pFVar11 + 0x10;
      }
    }
  }
  return;
}

// Shutdown @ 146b263e0

void __thiscall FSourceControlAssetDataCache::Shutdown(FSourceControlAssetDataCache *this)

{
  ISourceControlModule *pIVar1;
  
  pIVar1 = ISourceControlModule::Get();
  (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,(this->ProviderChangedDelegateHandle).ID);
  ClearPendingTasks(this);
  return;
}

// Startup @ 146b26f70

void __thiscall FSourceControlAssetDataCache::Startup(FSourceControlAssetDataCache *this)

{
  code *pcVar1;
  ISourceControlModule *pIVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pIVar2 = ISourceControlModule::Get();
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0xb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  puVar5 = (ulong64 *)(*pcVar1)(pIVar2,local_res8);
  (this->ProviderChangedDelegateHandle).ID = *puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  this->bIsSourceControlDialogShown = false;
  this->bIsUpdateHistoryInFlight = false;
  return;
}

// Tick @ 146b285e0

void __thiscall FSourceControlAssetDataCache::Tick(FSourceControlAssetDataCache *this)

{
  GetFileHistory(this);
  LaunchFetchAssetDataTasks(this);
  UpdatePendingAssetData(this);
  return;
}

// UpdatePendingAssetData @ 146b29d90

void __thiscall
FSourceControlAssetDataCache::UpdatePendingAssetData(FSourceControlAssetDataCache *this)

{
  FAssetDataToLoad *this_00;
  FString *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  FString local_68;
  FAssetDataToLoad local_58;
  FAssetDataToLoad local_38;
  
  local_58.TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.TempFilename.Data.ArrayNum = 0;
  local_58.TempFilename.Data.ArrayMax = 0;
  local_58.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Filename.Data.ArrayNum = 0;
  local_58.Filename.Data.ArrayMax = 0;
  do {
    pTVar2 = ((this->AssetDataToLoad).Tail)->NextNode;
    if (pTVar2 == (TNode *)0x0) {
      if (local_58.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Filename.Data.AllocatorInstance.Data);
      }
      if (local_58.TempFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.TempFilename.Data.AllocatorInstance.Data);
      }
      return;
    }
    this_00 = &pTVar2->Item;
    if (&local_58 != this_00) {
      if (local_58.TempFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.TempFilename.Data.AllocatorInstance.Data);
      }
      local_58.TempFilename.Data.AllocatorInstance.Data =
           (this_00->TempFilename).Data.AllocatorInstance.Data;
      (this_00->TempFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.TempFilename.Data.ArrayNum = (pTVar2->Item).TempFilename.Data.ArrayNum;
      local_58.TempFilename.Data.ArrayMax = (pTVar2->Item).TempFilename.Data.ArrayMax;
      (pTVar2->Item).TempFilename.Data.ArrayNum = 0;
      (pTVar2->Item).TempFilename.Data.ArrayMax = 0;
    }
    pFVar1 = &(pTVar2->Item).Filename;
    if (&local_58.Filename != pFVar1) {
      if (local_58.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Filename.Data.AllocatorInstance.Data);
      }
      local_58.Filename.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Filename.Data.ArrayNum = (pTVar2->Item).Filename.Data.ArrayNum;
      local_58.Filename.Data.ArrayMax = (pTVar2->Item).Filename.Data.ArrayMax;
      (pTVar2->Item).Filename.Data.ArrayNum = 0;
      (pTVar2->Item).Filename.Data.ArrayMax = 0;
    }
    pTVar3 = (this->AssetDataToLoad).Tail;
    (this->AssetDataToLoad).Tail = pTVar2;
    local_38.TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.TempFilename.Data.ArrayNum = 0;
    local_38.TempFilename.Data.ArrayMax = 0;
    local_38.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Filename.Data.ArrayNum = 0;
    local_38.Filename.Data.ArrayMax = 0;
    FAssetDataToLoad::operator=(this_00,&local_38);
    if (local_38.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Filename.Data.AllocatorInstance.Data);
    }
    if (local_38.TempFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.TempFilename.Data.AllocatorInstance.Data);
    }
    if (pTVar3 != (TNode *)0x0) {
      pFVar4 = (pTVar3->Item).Filename.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pTVar3->Item).TempFilename.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pTVar3,0x28);
    }
    iVar10 = local_58.Filename.Data.ArrayNum + -1;
    FVar7.Data = local_58.Filename.Data.AllocatorInstance.Data;
    if (local_58.Filename.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
                         *)this,uVar9,&local_58.Filename);
    plVar12 = (longlong *)0x0;
    if (iVar10 == -1) {
LAB_146b29f04:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetDataEntry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlAssetDataCache.cpp"
                         ,0x136,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      lVar11 = (longlong)iVar10 * 0x40 + *(longlong *)&this->AssetDataCache;
      plVar12 = (longlong *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        plVar12 = (longlong *)0x0;
      }
      if (plVar12 == (longlong *)0x0) goto LAB_146b29f04;
    }
    if ((*plVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar5 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)*plVar12;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    bVar8 = FPackageName::TryConvertFilenameToLongPackageName
                      (&local_58.TempFilename,&local_68,(FString *)0x0,None);
    if (bVar8) {
      USourceControlHelpers::GetAssetData
                (&local_58.TempFilename,&local_68,pTVar5,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)(plVar12 + 4) = 1;
  } while( true );
}

