// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTextRenderComponentMIDCache @ 1479a5c10

FTextRenderComponentMIDCache * __thiscall
FTextRenderComponentMIDCache::FTextRenderComponentMIDCache(FTextRenderComponentMIDCache *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FTextRenderComponentMIDCache__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  pTVar1 = &this->TickerHandle;
  pTVar1->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->CachedMIDs = 0;
  *(undefined8 *)&(this->CachedMIDs).field_0x8 = 0;
  *(undefined8 *)&(this->CachedMIDs).field_0x20 = 0;
  *(undefined4 *)&(this->CachedMIDs).field_0x28 = 0;
  *(undefined4 *)&(this->CachedMIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedMIDs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedMIDs).field_0x34 = 0;
  *(undefined8 *)&(this->CachedMIDs).field_0x40 = 0;
  *(undefined4 *)&(this->CachedMIDs).field_0x48 = 0;
  (this->StaleMIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaleMIDs).ArrayNum = 0;
  (this->StaleMIDs).ArrayMax = 0;
  *(undefined8 *)&(this->MIDsPendingPurge).Elements = 0;
  *(undefined8 *)&(this->MIDsPendingPurge).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MIDsPendingPurge).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MIDsPendingPurge).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MIDsPendingPurge).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MIDsPendingPurge).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MIDsPendingPurge).Elements.field_0x34 = 0;
  (this->MIDsPendingPurge).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MIDsPendingPurge).HashSize = 0;
  this_00 = FTSTicker::GetCoreTicker();
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextRenderComponentMIDCache____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = PurgeUnreferencedMIDsTicker;
    puVar5[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pTVar7 = FTSTicker::AddTicker
                     (this_00,&local_68,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,
                      __real_41200000);
  if (pTVar1 != pTVar7) {
    pTVar1->Object = pTVar7->Object;
    pTVar7->Object = (FElement *)0x0;
    pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar7->WeakReferenceCount).ReferenceController;
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return this;
}

// AddReferencedObjects @ 1479af940

void __thiscall
FTextRenderComponentMIDCache::AddReferencedObjects
          (FTextRenderComponentMIDCache *this,FReferenceCollector *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *pTVar7;
  bool bVar8;
  atomic<int> aVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  uint local_res18 [2];
  FScriptContainerElement *local_res20;
  undefined1 local_b8;
  undefined1 local_b7 [7];
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  LPCRITICAL_SECTION local_70;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_70 = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (local_70 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_70);
  iVar1 = *(int *)&(this->CachedMIDs).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedMIDs).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  local_b0 = &this->CachedMIDs;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar1 != 0) {
    puVar19 = *(uint **)&(this->CachedMIDs).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1479afa0e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar1 < iStack_94) {
      iStack_94 = iVar1;
    }
  }
LAB_1479afa0e:
  iStack_88 = *(int *)&(this->CachedMIDs).field_0x8 - *(int *)&(this->CachedMIDs).field_0x34;
  uVar13 = *(uint *)&(this->CachedMIDs).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  uVar21 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_a0 = (undefined1 *)pTVar20;
  iStack_8c = iStack_94;
  local_78 = pTVar20;
  local_68 = local_b0;
  TStack_60.Array = pTVar20;
  if ((((int)uVar13 < 0) || (iVar1 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->CachedMIDs).field_0x28;
  if (uVar13 != uVar2) {
    puVar18 = *(undefined1 **)&(this->CachedMIDs).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      uVar21 = uVar21 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1479afb10;
      uVar13 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar13 = local_7c + -1 + uVar21;
    if ((int)uVar2 < (int)uVar13) {
      uVar13 = uVar2;
    }
  }
LAB_1479afb10:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar13) && (TStack_60.Array == pTVar20)) &&
       (pTVar7 == &this->CachedMIDs)) break;
    lVar16 = *(longlong *)pTVar7;
    if ((*(longlong *)(lVar16 + 0x10 + lVar11 * 0x28) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)(lVar16 + lVar11 * 0x28 + 0x10);
    if ((char)plVar3[4] == '\0') {
      lVar16 = *plVar3;
      lVar6 = plVar3[1];
      lVar11 = lVar16 + (longlong)(int)lVar6 * 8;
      while( true ) {
        if ((int)plVar3[1] != (int)lVar6) {
          local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffffffffff00);
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res20);
        }
        pTVar20 = local_78;
        if (lVar16 == lVar11) break;
        (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar16);
        lVar16 = lVar16 + 8;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  local_res18[0] = (this->StaleMIDs).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18[0];
  pFVar17 = (this->StaleMIDs).AllocatorInstance.Data;
  pFVar12 = pFVar17 + uVar10 * 0x10;
  do {
    local_res20 = pFVar17;
    if ((this->StaleMIDs).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_b8);
    }
    if (pFVar17 == pFVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001479afcde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(local_70);
      return;
    }
    pTVar14 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar14->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1479afc95;
        }
        LOCK();
        aVar9 = pTVar14->SharedReferenceCount;
        bVar8 = aVar5 == aVar9;
        if (bVar8) {
          pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar9 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar9;
      } while (!bVar8);
      plVar3 = *(longlong **)pFVar17;
      if ((plVar3 != (longlong *)0x0) && ((char)plVar3[4] == '\0')) {
        lVar16 = *plVar3;
        lVar6 = plVar3[1];
        lVar11 = lVar16 + (longlong)(int)lVar6 * 8;
        while( true ) {
          if ((int)plVar3[1] != (int)lVar6) {
            `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_b7);
          }
          pFVar17 = local_res20;
          if (lVar16 == lVar11) break;
          (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar16,0,0);
          lVar16 = lVar16 + 8;
        }
      }
    }
LAB_1479afc95:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    uVar10 = (ulonglong)local_res18[0];
    pFVar17 = pFVar17 + 0x10;
  } while( true );
}

// GetMIDData @ 1479cb240

TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> * __thiscall
FTextRenderComponentMIDCache::GetMIDData
          (FTextRenderComponentMIDCache *this,
          TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *__return_storage_ptr__,
          UMaterialInterface *param_1,UFont *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *this_00;
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *pTVar4;
  TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>
  *pTVar5;
  FMIDData *this_01;
  TReferenceControllerBase<1> *pTVar6;
  int local_res8;
  TRawPtrProxy<FTextRenderComponentMIDCache::FMIDData> local_88 [2];
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> local_78;
  FKey local_68;
  UMaterialInterface *local_58;
  UFont *local_50;
  UMaterialInterface **local_48;
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *local_40;
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> local_38 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((((param_1 == (UMaterialInterface *)0x0) || (param_2 == (UFont *)0x0)) ||
      (param_2->FontCacheType != Offline)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaterial && InFont && InFont->FontCacheType == EFontCacheType::Offline",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                         ,0x1b0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *)(*pcVar1)();
    return pTVar4;
  }
  this_00 = &this->CachedMIDs;
  local_68.Material = param_1;
  local_68.Font = param_2;
  pTVar5 = TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
                   *)this_00,&local_68);
  if (pTVar5 == (TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>
                 *)0x0) {
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    local_78.Object = *(FMIDData **)&pTVar5->field_0x10;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.SharedReferenceCount.ReferenceController = pTVar6;
    if (local_78.Object != (FMIDData *)0x0) goto LAB_1479cb3be;
  }
  FVar2.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
  local_78.Object = (FMIDData *)0x0;
  this_01 = ::operator_new(0x28);
  local_88[0].Object = (FMIDData *)0x0;
  if (this_01 != (FMIDData *)0x0) {
    local_88[0].Object = FMIDData::FMIDData(this_01,param_1,param_2);
  }
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1><FTextRenderComponentMIDCache::FMIDData>
            (local_38,local_88);
  local_48 = &local_58;
  local_40 = local_38;
  local_58 = param_1;
  local_50 = param_2;
  TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FTextRenderComponentMIDCache::FKey_&&,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_&&>_>
            ((TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FTextRenderComponentMIDCache::FKey_&&,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_&&>
              *)&local_res8,(bool *)&local_48);
  pTVar6 = *(TReferenceControllerBase<1> **)
            (*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)local_res8 * 0x28);
  local_78.Object =
       *(FMIDData **)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)local_res8 * 0x28);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
LAB_1479cb3be:
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::ToSharedRef
            (&local_78,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetReferencerName @ 1479cf010

FString * __thiscall
FTextRenderComponentMIDCache::GetReferencerName
          (FTextRenderComponentMIDCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"FTextRenderComponentMIDCache");
  return __return_storage_ptr__;
}

// PurgeUnreferencedMIDs @ 1479e0190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(FTextRenderComponentMIDCache *this)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  code *pcVar8;
  UFont *pUVar9;
  bool bVar10;
  bool bVar11;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  TStatIdData *pTVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  byte bVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  FName FVar23;
  int iVar24;
  ForAnyElementType FVar25;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 *puVar26;
  uint *puVar27;
  byte bVar28;
  uint uVar29;
  int iVar30;
  FKey *pFVar31;
  uint uVar32;
  int iVar33;
  undefined1 auStackY_1c8 [32];
  undefined1 local_167 [7];
  ForAnyElementType local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  FName local_148;
  FColor_u_0 local_140 [2];
  FName local_138;
  FName local_130;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  FKey local_e8;
  LPCRITICAL_SECTION local_d8;
  TMap<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FName local_a0;
  FName local_98 [2];
  undefined1 local_88 [24];
  FScriptContainerElement *pFStack_70;
  void *local_68;
  undefined8 local_60;
  float local_58;
  float local_54;
  uchar local_50 [4];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_d8 = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_e8.Font = (UFont *)this;
  if (local_d8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_d8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs = (TStatIdData *)0x0;
    pFVar16 = ::FName::FName(&local_a0,"STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'
                ::__l2::StatPtr_STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs,*pFVar16,
               L"STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar17 = _StatPtr_STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs;
  if (_StatPtr_STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs == (TStatIdData *)0x0) {
    pFVar16 = ::FName::FName(local_98,"STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs");
    pTVar17 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_void___cdecl_FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(void)___ptr64'
                          ::__l2::StatPtr_STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs,
                         *pFVar16,L"STAT_FTextRenderComponentMIDCache_PurgeUnreferencedMIDs",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar23 = *(FName *)&pTVar17->Name;
  bVar10 = false;
  bVar11 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
      bVar10 = false;
      bVar11 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_138.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(pTVar17->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                   ,0x216);
        bVar10 = true;
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar13 = true;
      goto LAB_1479e0349;
    }
  }
  bVar11 = bVar14;
  bVar10 = bVar13;
  bVar13 = false;
  local_148 = local_130;
LAB_1479e0349:
  local_120 = &this->CachedMIDs;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_110 = &(this->CachedMIDs).field_0x10;
  local_158 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  uStack_114 = 1;
  local_60 = 0x8000000000;
  local_58 = -NAN;
  local_54 = 0.0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar15 = *(int *)&(this->CachedMIDs).field_0x28;
  iStack_104 = 0;
  iStack_118 = 0;
  if (iVar15 != 0) {
    puVar27 = *(uint **)&(this->CachedMIDs).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)local_110;
    }
    uVar29 = *puVar27;
    while (uVar29 == 0) {
      lVar21 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_1479e0410;
      uVar29 = puVar27[lVar21 + 1];
    }
    uStack_114 = -uVar29 & uVar29;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_f0 = (int)lVar21;
    iStack_104 = local_100 + -1 + local_f0;
    if (iVar15 < iStack_104) {
      iStack_104 = iVar15;
    }
  }
LAB_1479e0410:
  iStack_f8 = *(int *)&(this->CachedMIDs).field_0x8 - *(int *)&(this->CachedMIDs).field_0x34;
  uVar29 = *(uint *)&(this->CachedMIDs).field_0x28;
  uStack_108 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_104;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_114,iStack_118);
  uVar32 = uVar29 & 0xffffffe0;
  iVar24 = (int)uVar29 >> 5;
  TStack_c8._28_4_ = iStack_104;
  TStack_c8.BaseBitIndex = local_100;
  uStack_a8 = CONCAT44(uStack_f4,iStack_f8);
  iStack_fc = iStack_104;
  local_d0 = local_120;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar29 < 0) || (iVar15 < (int)uVar29)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar3 = *(uint *)&(this->CachedMIDs).field_0x28;
  if (uVar29 != uVar3) {
    puVar4 = *(undefined1 **)&(this->CachedMIDs).field_0x20;
    puVar26 = &(this->CachedMIDs).field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar26 = puVar4;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar24 * 4);
    while (uVar29 == 0) {
      lVar21 = (longlong)iVar24;
      uVar32 = uVar32 + 0x20;
      iVar24 = iVar24 + 1;
      uVar29 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_1479e0522;
      uVar29 = *(uint *)(puVar26 + lVar21 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_ec = (int)lVar21;
    uVar29 = (uVar32 - 1) + local_ec;
    if ((int)uVar3 < (int)uVar29) {
      uVar29 = uVar3;
    }
  }
LAB_1479e0522:
  do {
    pTVar12 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_167[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    FVar23 = local_148;
    if (((TStack_c8.CurrentBitIndex == uVar29) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedMIDs).field_0x10))
       && (pTVar12 == &this->CachedMIDs)) {
      iVar15 = (int)local_158;
      pFVar31 = (FKey *)(local_160.Data + (longlong)(int)local_158 * 0x10);
      FVar25.Data = local_160.Data;
      while( true ) {
        if ((int)local_158 != iVar15) {
          `TCheckedPointerIterator<FTextRenderComponentMIDCache::FKey,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_150);
        }
        if ((FKey *)FVar25.Data == pFVar31) break;
        if (*(int *)&(this->CachedMIDs).field_0x8 != *(int *)&(this->CachedMIDs).field_0x34) {
          uVar29 = ::GetTypeHash((FKey *)FVar25.Data);
          TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FTextRenderComponentMIDCache::FKey>
                    ((TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedMIDs,uVar29,(FKey *)FVar25.Data);
        }
        FVar25.Data = FVar25.Data + 0x10;
      }
      iVar15 = (this->StaleMIDs).ArrayNum;
      lVar21 = (longlong)iVar15;
      lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
      if (iVar15 != 0) {
        pFVar6 = (this->StaleMIDs).AllocatorInstance.Data;
        iVar15 = 0;
        if (((*(longlong *)pFVar6 == 0) || (*(longlong *)(pFVar6 + 8) == 0)) ||
           (*(int *)(*(longlong *)(pFVar6 + 8) + 8) < 1)) {
          bVar28 = 0;
        }
        else {
          bVar28 = 1;
        }
        lVar18 = 0;
        iVar24 = 0;
        do {
          lVar18 = lVar18 + 1;
          iVar30 = iVar24 + 1;
          if (lVar18 < lVar21) {
            pFVar19 = pFVar6 + lVar18 * 0x10;
            do {
              if (((*(longlong *)pFVar19 == 0) || (*(longlong *)(pFVar19 + 8) == 0)) ||
                 (*(int *)(*(longlong *)(pFVar19 + 8) + 8) < 1)) {
                bVar20 = 0;
              }
              else {
                bVar20 = 1;
              }
              if (bVar28 != bVar20) break;
              iVar30 = iVar30 + 1;
              lVar18 = lVar18 + 1;
              pFVar19 = pFVar19 + 0x10;
            } while (lVar18 < lVar21);
          }
          iVar33 = iVar30 - iVar24;
          if (bVar28 == 0) {
            DestructItems<TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,int>
                      ((TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *)
                       (pFVar6 + (longlong)iVar24 * 0x10),iVar33);
          }
          else {
            if (iVar15 != iVar24) {
              memmove(pFVar6 + (longlong)iVar15 * 0x10,pFVar6 + (longlong)iVar24 * 0x10,
                      (longlong)iVar33 << 4);
            }
            iVar15 = iVar15 + iVar33;
          }
          bVar28 = bVar28 ^ 1;
          iVar24 = iVar30;
        } while (lVar18 < lVar21);
        *(int *)&((local_e8.Font)->ImportOptions).UnicodeRange.Data.AllocatorInstance.Data = iVar15;
        FVar23 = local_148;
        lpCriticalSection = local_d8;
        this = (FTextRenderComponentMIDCache *)local_e8.Font;
      }
      piVar1 = &(((UFont *)this)->ImportOptions).UnicodeRange.Data.ArrayNum;
      if (piVar1 != (int *)local_88) {
        pvVar7 = *(void **)piVar1;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        (((UFont *)this)->ImportOptions).UnicodeRange.Data.ArrayNum = local_88._0_4_;
        (((UFont *)this)->ImportOptions).UnicodeRange.Data.ArrayMax = local_88._4_4_;
        *(undefined4 *)&(((UFont *)this)->ImportOptions).CharsFilePath.Data.AllocatorInstance.Data =
             local_88._8_4_;
        *(undefined4 *)
         ((longlong)&(((UFont *)this)->ImportOptions).CharsFilePath.Data.AllocatorInstance.Data + 4)
             = local_88._12_4_;
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_8_ = 0;
        if (&(((UFont *)this)->ImportOptions).CharsFilePath.Data.ArrayNum !=
            (int *)(local_88 + 0x10)) {
          if (local_68 == (void *)0x0) {
            (((UFont *)this)->ImportOptions).CharsFilePath.Data.ArrayNum = local_88._16_4_;
            (((UFont *)this)->ImportOptions).CharsFilePath.Data.ArrayMax = local_88._20_4_;
            (((UFont *)this)->ImportOptions).CharsFileWildcard.Data.AllocatorInstance.Data =
                 pFStack_70;
          }
          pvVar7 = *(void **)&(((UFont *)this)->ImportOptions).CharsFileWildcard.Data.ArrayNum;
          if (pvVar7 != (void *)0x0) {
            FMemory::Free(pvVar7);
          }
          *(void **)&(((UFont *)this)->ImportOptions).CharsFileWildcard.Data.ArrayNum = local_68;
          *(undefined4 *)&(((UFont *)this)->ImportOptions).field_0x60 = (undefined4)local_60;
          (((UFont *)this)->ImportOptions).ForegroundColor.field0_0x0._s_0.R = local_60._4_4_;
          local_60 = 0;
          local_68 = (void *)0x0;
        }
        (((UFont *)this)->ImportOptions).ForegroundColor.field0_0x0._s_0.G = local_58;
        (((UFont *)this)->ImportOptions).ForegroundColor.field0_0x0._s_0.B = local_54;
        local_54 = 0.0;
        local_58 = -NAN;
        if (local_48 == (ForElementType<FSetElementId>)0x0) {
          (((UFont *)this)->ImportOptions).ForegroundColor.field0_0x0._s_0.A = (float)local_50;
        }
        pvVar7 = *(void **)&(((UFont *)this)->ImportOptions).TexturePageWidth;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        *(ForElementType<FSetElementId> *)&(((UFont *)this)->ImportOptions).TexturePageWidth =
             local_48;
        local_48 = (ForElementType<FSetElementId>)0x0;
        (((UFont *)this)->ImportOptions).XPadding = local_40;
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      bVar14 = local_88._12_4_ != 0;
      local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      uVar29 = (uint)local_60._4_4_;
      local_54 = 0.0;
      local_60 = (ulonglong)(uint)local_60._4_4_ << 0x20;
      local_58 = -NAN;
      if (0x80 < uVar29) {
        local_60 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      if ((FKey *)local_160.Data != (FKey *)0x0) {
        FMemory::Free(local_160.Data);
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar13) {
        FThreadStats::AddMessage(FVar23,CycleScopeEnd);
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    lVar21 = *(longlong *)pTVar12;
    pFVar31 = (FKey *)(lVar21 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    lVar21 = *(longlong *)(lVar21 + 0x18 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 8) == 1)) {
      uVar32 = ::GetTypeHash(pFVar31);
      if (*(int *)&(this->MIDsPendingPurge).Elements.field_0x8 !=
          *(int *)&(this->MIDsPendingPurge).Elements.field_0x34) {
        FVar5 = (this->MIDsPendingPurge).Hash.SecondaryData;
        FVar22 = (ForElementType<FSetElementId>)&(this->MIDsPendingPurge).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar22 = FVar5;
        }
        iVar15 = *(int *)((longlong)FVar22 +
                         (ulonglong)((this->MIDsPendingPurge).HashSize - 1U & uVar32) * 4);
        if (iVar15 != -1) {
          lVar21 = *(longlong *)&(this->MIDsPendingPurge).Elements;
          do {
            lVar18 = (longlong)iVar15;
            if ((*(UMaterialInterface **)(lVar21 + lVar18 * 0x18) == pFVar31->Material) &&
               (*(UFont **)(lVar21 + 8 + lVar18 * 0x18) == pFVar31->Font)) {
              if (iVar15 != -1) {
                if (((local_160.Data <= pFVar31) &&
                    (pFVar31 < (FKey *)(local_160.Data + (longlong)local_158._4_4_ * 0x10))) &&
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
                iVar15 = (int)local_158;
                if ((int)local_158 == local_158._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_160,(int *)((longlong)&local_158 + 4));
                }
                local_158 = CONCAT44(local_158._4_4_,iVar15 + 1);
                pUVar9 = pFVar31->Font;
                *(UMaterialInterface **)&local_160.Data[(longlong)iVar15 * 0x10].field_0x0 =
                     pFVar31->Material;
                *(UFont **)(local_160.Data + (longlong)iVar15 * 0x10 + 8) = pUVar9;
                goto LAB_1479e0616;
              }
              break;
            }
            iVar15 = *(int *)(lVar21 + 0x10 + lVar18 * 0x18);
          } while (iVar15 != -1);
        }
      }
      TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
      ::Emplace<FTextRenderComponentMIDCache::FKey_const_&>
                ((TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
                  *)local_88,&local_e8,(bool *)pFVar31);
    }
LAB_1479e0616:
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// PurgeUnreferencedMIDsTicker @ 1479e0ad0

bool __thiscall
FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker
          (FTextRenderComponentMIDCache *this,float param_1)

{
  PurgeUnreferencedMIDs(this);
  return true;
}

