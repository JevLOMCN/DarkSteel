// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FFakeHttpManager @ 1432fab00

FFakeHttpManager * __thiscall
BuildPatchServices::FFakeHttpManager::FFakeHttpManager(FFakeHttpManager *this,FTSTicker *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFakeHttpManager_BuildPatchServices__6B_;
  (this->NewRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewRequests).ArrayNum = 0;
  (this->NewRequests).ArrayMax = 0;
  (this->RunningRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningRequests).ArrayNum = 0;
  (this->RunningRequests).ArrayMax = 0;
  (this->ProgressedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressedRequests).ArrayNum = 0;
  (this->ProgressedRequests).ArrayMax = 0;
  *(undefined8 *)&this->DataServed = 0;
  *(undefined8 *)&(this->DataServed).field_0x8 = 0;
  *(undefined8 *)&(this->DataServed).field_0x20 = 0;
  *(undefined4 *)&(this->DataServed).field_0x28 = 0;
  *(undefined4 *)&(this->DataServed).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataServed).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataServed).field_0x34 = 0;
  *(undefined8 *)&(this->DataServed).field_0x40 = 0;
  *(undefined4 *)&(this->DataServed).field_0x48 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFFakeHttpManager_BuildPatchServices____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = _vcall__16__flat______;
    puVar3[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FTSTicker::AddTicker
            (param_1,&local_68,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58
             ,0.0);
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
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

// CreateRequest @ 14331cc30

TSharedRef<IHttpRequest,1> * __thiscall
BuildPatchServices::FFakeHttpManager::CreateRequest
          (FFakeHttpManager *this,TSharedRef<IHttpRequest,1> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FFakeHttpRequest *this_00;
  TSharedRef<IHttpRequest,1> *pTVar7;
  uint uVar8;
  uint uVar9;
  FFakeHttpRequest *pFVar10;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  this_00 = ::operator_new(0x1b8);
  pFVar10 = (FFakeHttpRequest *)0x0;
  if (this_00 != (FFakeHttpRequest *)0x0) {
    memset(this_00,0,0x1b8);
    FMockHttpRequest::FMockHttpRequest((FMockHttpRequest *)this_00);
    this_00->_padding_ = (longlong)&___7FFakeHttpRequest_BuildPatchServices__6B_;
    pFVar10 = this_00;
  }
  iVar6 = (this->NewRequests).ArrayNum;
  piVar1 = &(this->NewRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->NewRequests).AllocatorInstance,piVar1);
  }
  (this->NewRequests).ArrayNum = iVar6 + 1;
  TSharedRef<BuildPatchServices::FFakeHttpRequest,1>::
  TSharedRef<BuildPatchServices::FFakeHttpRequest,1><BuildPatchServices::FFakeHttpRequest>
            ((TSharedRef<BuildPatchServices::FFakeHttpRequest,1> *)
             ((this->NewRequests).AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar10);
  iVar6 = (this->NewRequests).ArrayNum;
  uVar9 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar6) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<IHttpRequest,1> *)(*pcVar4)();
    return pTVar7;
  }
  *(FFakeHttpManager **)
   (*(longlong *)
     ((this->NewRequests).AllocatorInstance.Data +
     (longlong)(this->NewRequests).ArrayNum * 0x10 + -0x10) + 0x1b0) = this;
  iVar6 = (this->NewRequests).ArrayNum;
  uVar9 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar6) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<IHttpRequest,1> *)(*pcVar4)();
    return pTVar7;
  }
  iVar6 = (this->NewRequests).ArrayNum;
  pFVar2 = (this->NewRequests).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(IHttpRequest **)(pFVar2 + (longlong)iVar6 * 0x10 + -0x10);
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar6 * 0x10 + -8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnProcessRequest @ 143325380

bool __thiscall
BuildPatchServices::FFakeHttpManager::OnProcessRequest
          (FFakeHttpManager *this,FFakeHttpRequest *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  
  pFVar12 = (this->NewRequests).AllocatorInstance.Data;
  iVar8 = (this->NewRequests).ArrayNum;
  pFVar9 = pFVar12;
  do {
    if (pFVar9 == pFVar12 + (longlong)iVar8 * 0x10) {
      uVar11 = 0xffffffff;
LAB_1433253bc:
      uVar10 = (uint)uVar11;
      bVar4 = false;
      if (((byte)(uVar11 >> 0x1f) & 1) != 1) {
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->NewRequests).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
        bVar4 = 0 < *(int *)(*(longlong *)pFVar12 + 0x180);
        if (0 < *(int *)(*(longlong *)pFVar12 + 0x180)) {
          pFVar9 = (this->RunningRequests).AllocatorInstance.Data;
          if (((pFVar9 <= pFVar12) &&
              (pFVar12 < pFVar9 + (longlong)(this->RunningRequests).ArrayMax * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar8 = (this->RunningRequests).ArrayNum;
          piVar1 = &(this->RunningRequests).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->RunningRequests).AllocatorInstance,piVar1);
          }
          (this->RunningRequests).ArrayNum = iVar8 + 1;
          pFVar9 = (this->RunningRequests).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
          *(longlong *)pFVar9 = *(longlong *)pFVar12;
          lVar2 = *(longlong *)(pFVar12 + 8);
          *(longlong *)(pFVar9 + 8) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          uVar7 = 0;
          if ((int)uVar10 < (this->NewRequests).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          TArray<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this->NewRequests,uVar10);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->NewRequests).AllocatorInstance,(this->NewRequests).ArrayNum,
                     &(this->NewRequests).ArrayMax);
        }
      }
      return bVar4;
    }
    if (*(FFakeHttpRequest **)pFVar9 == param_1) {
      uVar11 = (longlong)pFVar9 - (longlong)pFVar12 >> 4;
      goto LAB_1433253bc;
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// Tick @ 143328010

bool __thiscall BuildPatchServices::FFakeHttpManager::Tick(FFakeHttpManager *this,float param_1)

{
  TArray<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  atomic<int> *paVar2;
  int *piVar3;
  TArray<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  uint uVar20;
  wchar_t *pwVar21;
  TReferenceControllerBase<1> *pTVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  LPCRITICAL_SECTION p_Var25;
  FScriptContainerElement *pFVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_70;
  TReferenceControllerBase<1> *local_68;
  longlong local_60;
  TReferenceControllerBase<1> *local_58;
  longlong local_50;
  TReferenceControllerBase<1> *local_48;
  
  uVar13 = (this->ProgressedRequests).ArrayNum;
  uVar16 = (ulonglong)(int)uVar13;
  pTVar1 = &this->ProgressedRequests;
  pFVar23 = (pTVar1->AllocatorInstance).Data;
  pFVar26 = pFVar23 + uVar16 * 0x10;
  while( true ) {
    iVar12 = (this->ProgressedRequests).ArrayNum;
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
    if (iVar12 != (int)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      iVar12 = (this->ProgressedRequests).ArrayNum;
    }
    if (pFVar23 == pFVar26) {
      pTVar4 = &this->RunningRequests;
      if (pTVar1 != pTVar4) {
        DestructItems<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,int>
                  ((TSharedRef<BuildPatchServices::FFakeHttpRequest,1> *)
                   (pTVar1->AllocatorInstance).Data,iVar12);
        pFVar23 = (pTVar1->AllocatorInstance).Data;
        if (pFVar23 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar23);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
        (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->ProgressedRequests).ArrayNum = (this->RunningRequests).ArrayNum;
        (this->ProgressedRequests).ArrayMax = (this->RunningRequests).ArrayMax;
        (this->RunningRequests).ArrayNum = 0;
        (this->RunningRequests).ArrayMax = 0;
      }
      iVar12 = (this->ProgressedRequests).ArrayNum;
      pFVar23 = (pTVar1->AllocatorInstance).Data;
      pFVar26 = pFVar23 + (longlong)iVar12 * 0x10;
      while( true ) {
        if ((this->ProgressedRequests).ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar23 == pFVar26) {
          return true;
        }
        lVar24 = *(longlong *)pFVar23;
        uVar11 = *(int *)(lVar24 + 0x180) - 1;
        uVar13 = 0;
        if ((int)uVar11 < *(int *)(lVar24 + 0x180)) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar15 = 0;
        lVar24 = *(longlong *)(lVar24 + 0x178) + (longlong)*(int *)(lVar24 + 0x180) * 0x10;
        iVar14 = *(int *)(lVar24 + -8) + -1;
        if (*(int *)(lVar24 + -8) == 0) {
          pwVar21 = L"";
          iVar14 = 0;
        }
        else {
          pwVar21 = *(wchar_t **)(lVar24 + -0x10);
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar21);
        iVar14 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)&this->DataServed,uVar13,(FString *)(lVar24 + -0x10));
        if (iVar14 != -1) {
          pTVar18 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->DataServed,(FString *)(lVar24 + -0x10));
          iVar15 = pTVar18->ArrayNum / 2;
        }
        lVar24 = *(longlong *)pFVar23;
        pTVar19 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
        p_Var25 = (LPCRITICAL_SECTION)(lVar24 + 0x18);
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((p_Var25 == (LPCRITICAL_SECTION)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar8)) break;
        EnterCriticalSection(p_Var25);
        if ((*(int *)(lVar24 + 0x48) == 0) ||
           (plVar6 = *(longlong **)(lVar24 + 0x40), plVar6 == (longlong *)0x0)) {
          LeaveCriticalSection(p_Var25);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar19);
          pFVar23 = pFVar23 + 0x10;
        }
        else {
          local_50 = lVar24;
          local_48 = pTVar19;
          (**(code **)(*plVar6 + 0x68))(plVar6,&local_50,0,iVar15);
          LeaveCriticalSection(p_Var25);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pFVar23 = pFVar23 + 0x10;
        }
      }
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar17 = ::operator_new(0x30);
    uVar11 = 0;
    pTVar22 = pTVar19;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar17->SharedReferenceCount = (atomic<int>)0x0;
      pTVar17->WeakReferenceCount = (atomic<int>)0x0;
      pTVar17[1]._padding_ = 0;
      pTVar17->_padding_ = (longlong)&___7FFakeHttpResponse_BuildPatchServices__6B_;
      pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar17[2]._padding_ = 0;
      pTVar22 = pTVar17;
    }
    pTVar22[2].SharedReferenceCount = (atomic<int>)0xc8;
    lVar24 = *(longlong *)pFVar23;
    uVar20 = *(int *)(lVar24 + 0x180) - 1;
    uVar10 = uVar11;
    if ((int)uVar20 < *(int *)(lVar24 + 0x180)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    lVar24 = *(longlong *)(lVar24 + 0x178) + (longlong)*(int *)(lVar24 + 0x180) * 0x10;
    if (*(int *)(lVar24 + -8) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)(lVar24 + -0x10);
      uVar11 = *(int *)(lVar24 + -8) - 1;
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,pwVar21);
    iVar12 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->DataServed,uVar11,(FString *)(lVar24 + -0x10));
    if (iVar12 != -1) {
      pTVar18 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                               *)&this->DataServed,(FString *)(lVar24 + -0x10));
      paVar2 = &pTVar22[1].SharedReferenceCount;
      if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)paVar2 != pTVar18) {
        iVar12 = pTVar18->ArrayNum;
        piVar3 = (int *)((longlong)&pTVar22[2]._padding_ + 4);
        _Src = (pTVar18->AllocatorInstance).Data;
        iVar14 = *piVar3;
        *(int *)&pTVar22[2]._padding_ = iVar12;
        if ((iVar12 == 0) && (iVar14 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar12,iVar14,(ForAnyElementType *)paVar2,iVar12,piVar3);
          if (iVar12 != 0) {
            memcpy(*(void **)&paVar2->field_0x0,_Src,(longlong)iVar12);
          }
        }
      }
    }
    lVar24 = *(longlong *)pFVar23;
    p_Var25 = (LPCRITICAL_SECTION)(lVar24 + 0x88);
    pTVar17 = ::operator_new(0x18);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFFakeHttpResponse_BuildPatchServices__U__DefaultDeleter_VFFakeHttpResponse_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar17[1]._padding_ = (longlong)pTVar22;
      pTVar19 = pTVar17;
    }
    pTVar17 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
    lVar5 = *(longlong *)pFVar23;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((p_Var25 == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    EnterCriticalSection(p_Var25);
    if ((*(int *)(lVar24 + 0xb8) == 0) ||
       (plVar6 = *(longlong **)(lVar24 + 0xb0), plVar6 == (longlong *)0x0)) {
      LeaveCriticalSection(p_Var25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    }
    else {
      local_70 = pTVar22;
      local_68 = pTVar19;
      local_60 = lVar5;
      local_58 = pTVar17;
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_60,&local_70,1);
      LeaveCriticalSection(p_Var25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    uVar16 = (ulonglong)uVar13;
    pFVar23 = pFVar23 + 0x10;
  }
  pcVar7 = (code *)swi(3);
  uVar9 = (*pcVar7)();
  return (bool)uVar9;
}

