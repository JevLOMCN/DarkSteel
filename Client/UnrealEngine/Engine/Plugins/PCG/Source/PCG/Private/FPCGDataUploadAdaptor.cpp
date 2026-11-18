// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// ~FPCGDataUploadAdaptor @ 14973d410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPCGDataUploadAdaptor::~FPCGDataUploadAdaptor(FPCGDataUploadAdaptor *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->BufferToGraphStringKey).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GraphToSourceBufferAttributeIndex).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PackedDataCollection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->ExternalBufferForReuse).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014973d478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// FPCGDataUploadAdaptor @ 1497def80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataUploadAdaptor * __thiscall
FPCGDataUploadAdaptor::FPCGDataUploadAdaptor
          (FPCGDataUploadAdaptor *this,UPCGDataBinding *param_1,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *param_2,FName param_3)

{
  TWeakObjectPtr<UPCGDataBinding,FWeakObjectPtr> *this_00;
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FPCGDataCollectionDesc *pFVar4;
  FRDGPooledBuffer *pFVar5;
  FRDGPooledBuffer *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  int iVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FPCGDataUploadAdaptor *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  uint uVar15;
  atomic<int> *paVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  longlong local_res10;
  TReferenceControllerBase<1> *local_res18;
  int local_res20;
  FSharedReferencer<1> FStack_a0;
  FObjectPtr_u_0 local_98;
  longlong local_90;
  uint local_88;
  uint local_84;
  UPCGDataBinding *local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  FPCGDataCollectionDesc *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  this_00 = &this->DataBinding;
  (this->ExternalBufferForReuse).Reference = (FRDGPooledBuffer *)0x0;
  this->ExternalBufferMaxStringKeyValue = -1;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  (this->TargetDataCollectionDesc).Object = (FPCGDataCollectionDesc *)0x0;
  (this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PackedDataCollection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedDataCollection).ArrayNum = 0;
  (this->PackedDataCollection).ArrayMax = 0;
  (this->GraphToSourceBufferAttributeIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphToSourceBufferAttributeIndex).ArrayNum = 0;
  (this->GraphToSourceBufferAttributeIndex).ArrayMax = 0;
  (this->BufferToGraphStringKey).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferToGraphStringKey).ArrayNum = 0;
  (this->BufferToGraphStringKey).ArrayMax = 0;
  (this->InputPinLabel).ComparisonIndex = 0;
  (this->InputPinLabel).Number = 0;
  this->ExternalBufferSizeBytes = 0;
  local_84 = 0;
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                          ,0x15,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
    return pFVar12;
  }
  if ((param_2->Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetDataCollectionDesc",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                          ,0x16,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
    return pFVar12;
  }
  pTVar17 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar4 = param_2->Object;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->TargetDataCollectionDesc).Object;
  pTStack_50 = (this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController;
  (this->TargetDataCollectionDesc).Object = pFVar4;
  (this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController = pTVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  this->InputPinLabel = param_3;
  local_80 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGDataBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_80);
  local_res20 = 0;
  local_res10 = CONCAT44(local_res10._4_4_,0xffffffff);
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uVar21 = 0xffffffff;
  uVar24 = 0;
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  lVar23 = 0;
  if (0 < *(int *)&pUVar13[1].field_0x10) {
    local_90 = 0;
    do {
      local_88 = (uint)local_res10;
      pUVar13 = FWeakObjectPtr::Get(&(this->DataBinding).WeakPtr);
      uVar15 = 0;
      if ((int)uVar24 < *(int *)&pUVar13[1].field_0x10) {
        uVar15 = ~uVar24 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
        return pFVar12;
      }
      if (param_3 != *(FName *)(*(longlong *)&pUVar13[1].field_0x8 + 0x60 + local_90)) {
        uVar21 = (uint)local_res10;
        goto LAB_1497df27e;
      }
      local_res20 = local_res20 + 1;
      uVar15 = uVar24;
      if (uVar21 != 0xffffffff) {
        uVar15 = local_88;
      }
      local_res10 = CONCAT44(local_res10._4_4_,uVar15);
      pUVar13 = FWeakObjectPtr::Get(&(this->DataBinding).WeakPtr);
      uVar21 = 0;
      if ((int)uVar24 < *(int *)&pUVar13[1].field_0x10) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
        return pFVar12;
      }
      local_98 = (FObjectPtr_u_0)
                 ((FObjectPtr_u_0 *)(local_90 + *(longlong *)&pUVar13[1].field_0x8))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_98.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_98.Handle);
          goto LAB_1497df1de;
        }
LAB_1497df31d:
        local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        lVar23 = 0;
        break;
      }
LAB_1497df1de:
      if (local_98.Handle == (UObject *)0x0) goto LAB_1497df31d;
      pUVar14 = UPCGProxyForGPUData::StaticClass();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_98,pUVar14);
      FVar10.ReferenceController = FStack_a0.ReferenceController;
      if ((!bVar11) || (local_98.Handle == (UObject *)0x0)) goto LAB_1497df31d;
      pTVar17 = *(TReferenceControllerBase<1> **)&local_98.Handle[2].field_0x8;
      lVar20 = *(longlong *)(local_98.Handle + 2);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        paVar16 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar16 = &pTVar17->SharedReferenceCount;
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      if (lVar20 == 0) {
        if (1 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
LAB_1497df2a1:
        FVar10.ReferenceController = FStack_a0.ReferenceController;
        lVar23 = 0;
        if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar16 = &(FStack_a0.ReferenceController)->SharedReferenceCount;
          aVar2 = *paVar16;
          *paVar16 = (atomic<int>)((int)*paVar16 + -1);
          UNLOCK();
          FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(FVar10.ReferenceController)->_padding_)();
            LOCK();
            paVar16 = &(FVar10.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar16;
            *paVar16 = (atomic<int>)((int)*paVar16 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar10.ReferenceController)->_padding_ + 8))
                        (FVar10.ReferenceController,1);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        break;
      }
      uVar21 = uVar15;
      if (lVar23 == 0) {
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar16 = (atomic<int>)((int)*paVar16 + 1);
          UNLOCK();
        }
        FStack_a0.ReferenceController = pTVar17;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        lVar23 = lVar20;
      }
      else {
        if ((lVar23 != lVar20) || (*(int *)&local_98.Handle[1].field_0x20 != uVar24 - uVar15))
        goto LAB_1497df2a1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
      }
LAB_1497df27e:
      local_90 = local_90 + 0x78;
      uVar24 = uVar24 + 1;
      pUVar13 = FWeakObjectPtr::Get(&(this->DataBinding).WeakPtr);
    } while ((int)uVar24 < *(int *)&pUVar13[1].field_0x10);
  }
  pTVar18 = local_res18;
  pTVar17 = local_res18;
  uVar21 = local_84;
  if (lVar23 == 0) {
LAB_1497df469:
    bVar11 = false;
  }
  else {
    if ((lVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    pTVar17 = *(TReferenceControllerBase<1> **)(lVar23 + 0x28);
    lVar20 = *(longlong *)(lVar23 + 0x20);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar18 = local_res18;
    uVar21 = 1;
    if (lVar20 == 0) goto LAB_1497df469;
    if ((lVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    pTVar18 = *(TReferenceControllerBase<1> **)(lVar23 + 0x28);
    lVar20 = *(longlong *)(lVar23 + 0x20);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    iVar3 = *(int *)(lVar20 + 8);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    uVar21 = 3;
    if (iVar3 == local_res20) goto LAB_1497df469;
    bVar11 = true;
  }
  if ((uVar21 & 2) != 0) {
    uVar21 = uVar21 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  if ((uVar21 & 1) != 0) {
    uVar21 = uVar21 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar11) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    lVar23 = 0;
  }
  pTVar17 = local_res18;
  if (lVar23 != 0) {
    if ((lVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    pTVar17 = *(TReferenceControllerBase<1> **)(lVar23 + 0x28);
    uVar21 = uVar21 | 4;
    lVar20 = *(longlong *)(lVar23 + 0x20);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar20 != 0) {
      bVar11 = true;
      goto LAB_1497df51a;
    }
  }
  bVar11 = false;
LAB_1497df51a:
  if ((uVar21 & 4) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar11) {
    if ((lVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    pFVar5 = *(FRDGPooledBuffer **)(lVar23 + 0x10);
    pFVar6 = (this->ExternalBufferForReuse).Reference;
    if (pFVar6 != pFVar5) {
      (this->ExternalBufferForReuse).Reference = pFVar5;
      if (pFVar5 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        plVar7 = &pFVar6->_padding_;
        LOCK();
        lVar20 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if (((int)lVar20 == 1) && (plVar7 != (longlong *)0x0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    this->ExternalBufferSizeBytes = *(uint *)(lVar23 + 0x18);
    if ((this->ExternalBufferMaxStringKeyValue != -1) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2506002160383164323>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                            ,0x5d,"ExternalBufferMaxStringKeyValue == INDEX_NONE"), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    if ((lVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    pTVar17 = *(TReferenceControllerBase<1> **)(lVar23 + 0x28);
    plVar7 = *(longlong **)(lVar23 + 0x20);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar7 == (longlong *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    lVar20 = plVar7[1];
    lVar23 = *plVar7;
    if (((int)lVar20 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
      return pFVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    local_res10 = (longlong)(int)lVar20 * 0x68 + lVar23;
    if (lVar23 != local_res10) {
      do {
        iVar3 = *(int *)(lVar23 + 0x38);
        lVar20 = *(longlong *)(lVar23 + 0x30);
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FPCGDataUploadAdaptor *)(*pcVar8)();
          return pFVar12;
        }
        lVar22 = (longlong)iVar3 * 0x78 + lVar20;
        for (; lVar20 != lVar22; lVar20 = lVar20 + 0x78) {
          piVar19 = *(int **)(lVar20 + 0x68);
          iVar3 = *(int *)(lVar20 + 0x70);
          piVar1 = piVar19 + iVar3;
          while( true ) {
            if (*(int *)(lVar20 + 0x70) != iVar3) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (piVar19 == piVar1) break;
            iVar9 = *piVar19;
            if (*piVar19 < this->ExternalBufferMaxStringKeyValue) {
              iVar9 = this->ExternalBufferMaxStringKeyValue;
            }
            piVar19 = piVar19 + 1;
            this->ExternalBufferMaxStringKeyValue = iVar9;
          }
        }
        lVar23 = lVar23 + 0x68;
      } while (lVar23 != local_res10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&local_res18->SharedReferenceCount);
  return this;
}

// GetAttributeRemapBufferSRV @ 14980ffc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FPCGDataUploadAdaptor::GetAttributeRemapBufferSRV
          (FPCGDataUploadAdaptor *this,FRDGBuilder *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBufferSRV *pFVar6;
  FRDGBuffer *pFVar7;
  undefined4 uStack_4c;
  FRDGBufferDesc local_40;
  FRDGBufferSRVDesc local_28;
  
  if ((this->ExternalBufferForReuse).Reference == (FRDGPooledBuffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExternalBufferForReuse",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                       ,0xcf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRDGBufferSRV *)(*pcVar4)();
      return pFVar6;
    }
  }
  *param_2 = 0x20;
  uVar1 = (this->GraphToSourceBufferAttributeIndex).ArrayNum;
  if (uVar1 == 0) {
    pFVar7 = FSystemTextures::GetDefaultStructuredBuffer
                       ((FSystemTextures *)&GSystemTextures,param_1,4);
  }
  else {
    local_40.NumElements = uVar1;
    local_40.BytesPerElement = 4;
    local_40._12_4_ = uStack_4c;
    local_40.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar7 = FRDGBuilder::CreateBuffer
                       (param_1,&local_40,L"PCGDataUploadAdaptor_GraphToBufferAttributeId",None);
    pFVar3 = (this->GraphToSourceBufferAttributeIndex).AllocatorInstance.Data;
    iVar2 = (this->GraphToSourceBufferAttributeIndex).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FRDGBufferSRV *)(*pcVar4)();
        return pFVar6;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar7,pFVar3,(longlong)iVar2 << 2,None);
  }
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  local_28._padding_._0_1_ = 0;
  if (((pFVar7->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_28.Buffer = pFVar7;
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_28);
  return pFVar6;
}

// GetBufferToGraphStringKeySRV @ 149810610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FPCGDataUploadAdaptor::GetBufferToGraphStringKeySRV
          (FPCGDataUploadAdaptor *this,FRDGBuilder *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBufferSRV *pFVar6;
  FRDGBuffer *pFVar7;
  undefined4 uStack_4c;
  FRDGBufferDesc local_40;
  FRDGBufferSRVDesc local_28;
  
  if ((this->ExternalBufferForReuse).Reference == (FRDGPooledBuffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExternalBufferForReuse",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                       ,0xe8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRDGBufferSRV *)(*pcVar4)();
      return pFVar6;
    }
  }
  *param_2 = (this->BufferToGraphStringKey).ArrayNum;
  uVar1 = (this->BufferToGraphStringKey).ArrayNum;
  if (uVar1 == 0) {
    pFVar7 = FSystemTextures::GetDefaultStructuredBuffer
                       ((FSystemTextures *)&GSystemTextures,param_1,4);
  }
  else {
    local_40.NumElements = uVar1;
    local_40.BytesPerElement = 4;
    local_40._12_4_ = uStack_4c;
    local_40.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar7 = FRDGBuilder::CreateBuffer
                       (param_1,&local_40,L"PCGDataUploadAdaptor_BufferToGraphStringKey",None);
    pFVar3 = (this->BufferToGraphStringKey).AllocatorInstance.Data;
    iVar2 = (this->BufferToGraphStringKey).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FRDGBufferSRV *)(*pcVar4)();
        return pFVar6;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar7,pFVar3,(longlong)iVar2 << 2,None);
  }
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  local_28._padding_._0_1_ = 0;
  if (((pFVar7->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_28.Buffer = pFVar7;
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_28);
  return pFVar6;
}

// GetBuffer_RenderThread @ 149810790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FPCGDataUploadAdaptor::GetBuffer_RenderThread
          (FPCGDataUploadAdaptor *this,FRDGBuilder *param_1,EPCGExportMode param_2)

{
  char cVar1;
  code *pcVar2;
  _Tuple_val<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_const_*> _Var3;
  bool bVar4;
  bool bVar5;
  FRDGScope *this_00;
  FRDGBuffer *pFVar6;
  ulonglong uVar7;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_const_*,std::tuple<>_> local_98;
  undefined8 local_88;
  TRDGEventScopeGuard<FRDGScope_RHI> local_80;
  undefined1 local_70;
  FRDGBufferDesc local_68;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  bVar4 = false;
  local_70 = 0;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_40 = 0;
        uStack_3c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_44);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_FPCGDataUploadA;
        ::Desc._padding_ = (longlong)u_FPCGDataUploadA;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x122;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FPCGDataUploadAdaptor::GetBuffer_RenderThread'::__l7::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_98._Myfirst._Val = &::Desc;
    local_80.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar7 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_80.Scope = this_00;
    if (3 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRDGBuffer *)(*pcVar2)();
        return pFVar6;
      }
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar7])(&this_00->Impl);
    FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,&local_98);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar4 = true;
    local_70 = 1;
  }
  if ((this->ExternalBufferForReuse).Reference == (FRDGPooledBuffer *)0x0) {
    local_98._padding_._4_4_ = (this->PackedDataCollection).ArrayNum & 0x3fffffff;
    local_98._Myfirst._Val._0_4_ = 0x10119;
    _Var3._Val = local_98._Myfirst._Val;
    local_98._padding_._0_4_ = 4;
    local_98._Myfirst._Val._0_4_ =
         StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_88 = 0;
    local_68.BytesPerElement = 4;
    local_68._12_4_ = local_98._Myfirst._Val._4_4_;
    local_68.Metadata = (FShaderParametersMetadata *)0x0;
    if (param_2 != NoExport) {
      local_98._Myfirst._Val._0_4_ =
           StructuredBuffer|ShaderResource|SourceCopy|ByteAddressBuffer|UnorderedAccess|Static;
    }
    local_68.Usage = (EBufferUsageFlags)local_98._Myfirst._Val;
    local_98._Myfirst._Val = _Var3._Val;
    local_68.NumElements = local_98._padding_._4_4_;
    pFVar6 = FRDGBuilder::CreateBuffer(param_1,&local_68,L"PCGDataCollectionUpload",None);
    FRDGBuilder::QueueBufferUpload
              (param_1,pFVar6,(this->PackedDataCollection).AllocatorInstance.Data,
               (ulonglong)(uint)((this->PackedDataCollection).ArrayNum << 2),None);
  }
  else {
    if ((this->PackedDataCollection).ArrayNum != 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2506002160383164106>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                         ,0x136,"PackedDataCollection.IsEmpty()");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRDGBuffer *)(*pcVar2)();
        return pFVar6;
      }
    }
    pFVar6 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->ExternalBufferForReuse,None);
  }
  if (bVar4) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_80);
  }
  return pFVar6;
}

// GetDataElementCountsBufferSRV @ 149812740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FPCGDataUploadAdaptor::GetDataElementCountsBufferSRV
          (FPCGDataUploadAdaptor *this,FRDGBuilder *param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  FPCGDataCollectionDesc *pFVar4;
  FUploadedBuffer *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBuffer *pFVar11;
  undefined4 *puVar12;
  longlong lVar13;
  FRDGBufferSRVDesc *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined4 local_res8 [2];
  ForAnyElementType local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8 [2];
  FRDGBufferDesc local_a0;
  FRDGBufferSRVDesc local_88;
  FRDGBufferSRVDesc local_68;
  FRDGBufferDesc local_48;
  FRDGBufferDesc local_30;
  
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  uStack_ac = 0;
  if (((this->TargetDataCollectionDesc).Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
    return pFVar10;
  }
  uVar3 = (((this->TargetDataCollectionDesc).Object)->DataDescs).ArrayNum;
  if ((int)uVar3 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
      return pFVar10;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((int)uStack_ac < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_b8,local_b0,(int *)&uStack_ac);
  }
  if (((this->TargetDataCollectionDesc).Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
    return pFVar10;
  }
  pFVar4 = (this->TargetDataCollectionDesc).Object;
  iVar9 = (pFVar4->DataDescs).ArrayNum;
  pFVar15 = (pFVar4->DataDescs).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
    return pFVar10;
  }
  pFVar16 = pFVar15 + (longlong)iVar9 * 0x68;
  while( true ) {
    if (pFVar15 == pFVar16) {
      local_a0.Metadata = (FShaderParametersMetadata *)0x0;
      local_a0.Usage = 0x10109;
      if (local_b0 == 0) {
        local_a0.BytesPerElement = 4;
        local_a0.NumElements = 0;
        local_48._12_4_ = local_a0._12_4_;
        local_48.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_48.Metadata = (FShaderParametersMetadata *)0x0;
        local_48.BytesPerElement = 4;
        local_48.NumElements = 0;
        pFVar11 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"EmptyDataElementCounts",None);
        local_res8[0] = 0;
        FRDGUserValidation::ValidateUploadBuffer(&param_1->UserValidation,pFVar11,local_res8,4);
        puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,4,0x10);
        piVar2 = &(param_1->UploadedBuffers).ArrayMax;
        *puVar12 = local_res8[0];
        iVar9 = (param_1->UploadedBuffers).ArrayNum;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                            (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,piVar2);
        }
        local_88._padding_._4_4_ = 0;
        (param_1->UploadedBuffers).ArrayNum = iVar9 + 1;
        pFVar14 = &local_88;
        pFVar5 = (param_1->UploadedBuffers).AllocatorInstance.Data;
        local_88._padding_._0_4_ = 0xffffffff;
        local_88._padding_ = 0;
        pFVar5[iVar9].bUseDataCallbacks = false;
        pFVar5[iVar9].bUseFreeCallbacks = false;
        pFVar5[iVar9].Buffer = pFVar11;
        pFVar5[iVar9].Data = puVar12;
        pFVar5[iVar9].DataSize = 4;
        *(undefined8 *)&pFVar5[iVar9].DataCallback = 0;
        *(undefined8 *)&pFVar5[iVar9].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar9].DataSizeCallback = 0;
        *(undefined8 *)&pFVar5[iVar9].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar9].DataFreeCallback = 0;
        *(undefined8 *)&pFVar5[iVar9].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar9].DataFillCallback = 0;
        *(undefined8 *)&pFVar5[iVar9].DataFillCallback.field_0x28 = 0;
        pbVar1 = (byte *)((longlong)&pFVar11->_padding_ + 1);
        *pbVar1 = *pbVar1 | 0x80;
        local_88._padding_._0_1_ = 0;
        local_88.Buffer = pFVar11;
        if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
          local_88._padding_._0_1_ = 0x1c;
        }
      }
      else {
        local_a0.NumElements = local_b0;
        local_a0.BytesPerElement = 4;
        local_30._12_4_ = local_a0._12_4_;
        local_30.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_30.Metadata = (FShaderParametersMetadata *)0x0;
        local_30.BytesPerElement = 4;
        local_30.NumElements = local_b0;
        pFVar11 = FRDGBuilder::CreateBuffer
                            (param_1,&local_30,L"PCGDataCollectionUpload_DataElementCounts",None);
        FVar7.Data = local_b8.Data;
        lVar13 = (longlong)(int)local_b0;
        if (((int)local_b0 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
          return pFVar10;
        }
        FRDGBuilder::QueueBufferUpload(param_1,pFVar11,FVar7.Data,lVar13 << 2,None);
        local_68._padding_._4_4_ = 0;
        pFVar14 = &local_68;
        local_68._padding_._0_4_ = 0xffffffff;
        local_68._padding_ = 0;
        local_68._padding_._0_1_ = 0;
        local_68.Buffer = pFVar11;
        if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
          local_68._padding_._0_1_ = 0x1c;
        }
      }
      pFVar10 = FRDGBuilder::CreateSRV(param_1,pFVar14);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return pFVar10;
    }
    if ((pFVar15[0x28] != (FScriptContainerElement)0x0) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2506002160383164155>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                           ,0x105,"DataDesc.GetElementDimension() == EPCGElementDimension::One"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
      return pFVar10;
    }
    local_a8[0] = *(undefined4 *)(pFVar15 + 0x18);
    if (((local_b8.Data <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)(int)uStack_ac * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    if (local_b0 == uStack_ac) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_b8,(int *)&uStack_ac);
    }
    lVar13 = (longlong)(int)local_b0;
    pFVar15 = pFVar15 + 0x68;
    local_b0 = local_b0 + 1;
    *(undefined4 *)(local_b8.Data + lVar13 * 4) = local_a8[0];
  }
  pcVar6 = (code *)swi(3);
  pFVar10 = (FRDGBufferSRV *)(*pcVar6)();
  return pFVar10;
}

// PrepareData_GameThread @ 1498252f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDataUploadAdaptor::PrepareData_GameThread
          (FPCGDataUploadAdaptor *this,UPCGComputeKernel *param_1,UPCGSettings *param_2)

{
  longlong *plVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  UPCGDataBinding *pUVar11;
  uint *puVar12;
  ulong64 uVar13;
  UClass *pUVar14;
  ulonglong uVar15;
  uint uVar16;
  FObjectPtr_u_0 *pFVar17;
  uint uVar18;
  FRDGPooledBuffer *pFVar19;
  FObjectPtr_u_0 *this_00;
  ulonglong uVar20;
  longlong lVar21;
  FObjectPtr_u_0 *pFVar22;
  bool bVar23;
  double dVar24;
  undefined1 auStackY_198 [32];
  undefined1 local_167 [7];
  ulonglong local_160;
  FObjectPtr_u_0 local_158;
  TMap<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
  *local_150;
  UPCGDataBinding *local_148;
  FRDGPooledBuffer *local_140;
  uint local_138;
  undefined1 local_130 [16];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_120;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_110;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [24];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId111,"FPCGDataUploadAdaptor::PrepareData_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId111);
  }
  pUVar11 = (UPCGDataBinding *)FWeakObjectPtr::Get(&(this->DataBinding).WeakPtr);
  local_148 = pUVar11;
  if (pUVar11 == (UPCGDataBinding *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2506002160383164302>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                       ,0x72,"Binding");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  else {
    bVar7 = IsInGameThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                           ,0x77,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if ((this->ExternalBufferForReuse).Reference == (FRDGPooledBuffer *)0x0) {
      local_120.Object = (this->TargetDataCollectionDesc).Object;
      local_120.SharedReferenceCount.ReferenceController =
           (this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController;
      if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar13 = PCGDataCollectionPackingHelpers::ComputePackedSizeBytes(&local_120);
      local_f8 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_f0 = _UNK_15060db28;
      local_e8 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e0 = _UNK_15060db28;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_f8);
      pTVar6 = PCGComputeHelpers::CVarMaxGPUBufferSizeProportion.Ref;
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_149825770:
        lVar21 = 0;
      }
      else {
        bVar7 = IsInGameThread();
        lVar21 = 4;
        if (bVar7) goto LAB_149825770;
      }
      dVar24 = (double)*(float *)((longlong)pTVar6->ShadowedValue + lVar21) * (double)uStack_e0;
      lVar21 = 0;
      if ((__real_43e0000000000000 <= dVar24) &&
         (dVar24 = dVar24 - __real_43e0000000000000, dVar24 < __real_43e0000000000000)) {
        lVar21 = -0x8000000000000000;
      }
      uVar15 = 0xffffffff;
      if ((ulonglong)((longlong)dVar24 + lVar21) < 0xffffffff) {
        uVar15 = (longlong)dVar24 + lVar21;
      }
      if (((longlong)uStack_e0 < 1) || (uVar13 <= uVar15)) {
        iVar2 = (pUVar11->InputDataCollection).TaggedData.ArrayNum;
        uVar15 = (ulonglong)iVar2;
        bVar7 = true;
        this_00 = (FObjectPtr_u_0 *)(pUVar11->InputDataCollection).TaggedData.AllocatorInstance.Data
        ;
        local_160 = CONCAT44(local_160._4_4_,iVar2);
        pFVar17 = this_00 + 2;
        pFVar22 = this_00 + uVar15 * 0xf;
        while( true ) {
          if ((pUVar11->InputDataCollection).TaggedData.ArrayNum != (int)uVar15) {
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_167);
          }
          if (this_00 == pFVar22) break;
          if ((FName)pFVar17[10].Handle == this->InputPinLabel) {
            local_158 = (FObjectPtr_u_0)this_00->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if ((UPCGProxyForGPUData *)local_158.Handle == (UPCGProxyForGPUData *)0x0)
              goto LAB_1498258ff;
              UE::GC::MarkAsReachable(local_158.Handle);
            }
            if ((UPCGProxyForGPUData *)local_158.Handle != (UPCGProxyForGPUData *)0x0) {
              pUVar14 = UPCGProxyForGPUData::StaticClass();
              bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_158,pUVar14);
              if ((bVar9) && ((UPCGProxyForGPUData *)local_158.Handle != (UPCGProxyForGPUData *)0x0)
                 ) {
                UPCGProxyForGPUData::GetCPUData
                          ((UPCGProxyForGPUData *)local_158.Handle,(FReadbackResult *)local_b8,
                           (FPCGContext *)0x0);
                if (local_b8[0] == false) {
                  bVar7 = false;
                }
                else {
                  FPCGDataPtrWrapper::operator=
                            ((FPCGDataPtrWrapper *)this_00,(FPCGDataPtrWrapper *)(local_b8 + 8));
                  if (pFVar17 != (FObjectPtr_u_0 *)(local_b8 + 0x18)) {
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               pFVar17,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                                        *)(local_b8 + 0x18));
                  }
                }
                local_a0.HashSize = 0;
                if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a0.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)(local_b8 + 0x18));
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)(local_b8 + 8));
              }
            }
          }
LAB_1498258ff:
          uVar15 = local_160 & 0xffffffff;
          this_00 = this_00 + 0xf;
          pFVar17 = pFVar17 + 0xf;
        }
        if (!bVar7) {
          bVar7 = false;
          goto LAB_149825957;
        }
        local_110.Object = (this->TargetDataCollectionDesc).Object;
        FVar3 = this->InputPinLabel;
        local_110.SharedReferenceCount.ReferenceController =
             (this->TargetDataCollectionDesc).SharedReferenceCount.ReferenceController;
        if (local_110.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        PCGDataCollectionPackingHelpers::PackDataCollection
                  (&pUVar11->InputDataCollection,&local_110,FVar3,pUVar11,
                   &this->PackedDataCollection);
      }
      else if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      if (((this->GraphToSourceBufferAttributeIndex).ArrayNum != 0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2506002160383164293>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                             ,0x7b,"GraphToSourceBufferAttributeIndex.IsEmpty()"), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar2 = (pUVar11->AttributeTable).AttributeTable.ArrayNum;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->GraphToSourceBufferAttributeIndex,iVar2,Default);
      uVar15 = 0;
      local_160 = (longlong)iVar2;
      if (0 < iVar2) {
        local_150 = &pUVar11->GraphAttributeToSourceBufferAttributeIndex;
        uVar20 = uVar15;
        do {
          pFVar19 = (this->ExternalBufferForReuse).Reference;
          uVar16 = (uint)uVar15;
          plVar1 = &pFVar19->_padding_;
          local_130._0_4_ = uVar16;
          local_130._8_8_ = pFVar19;
          if (pFVar19 == (FRDGPooledBuffer *)0x0) {
            puVar12 = (uint *)TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                              ::Find((TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                                      *)local_150,
                                     (TTuple<int,TRefCountPtr<FRDGPooledBuffer>_> *)local_130);
          }
          else {
            LOCK();
            *(int *)plVar1 = (int)*plVar1 + 1;
            UNLOCK();
            puVar12 = (uint *)TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                              ::Find((TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                                      *)local_150,
                                     (TTuple<int,TRefCountPtr<FRDGPooledBuffer>_> *)local_130);
            LOCK();
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              if (plVar1 == (longlong *)0x0) {
                pFVar19 = (FRDGPooledBuffer *)0x0;
              }
              if (pFVar19 != (FRDGPooledBuffer *)0x0) {
                (**(code **)pFVar19->_padding_)(pFVar19,1);
              }
            }
          }
          uVar18 = uVar16;
          if (puVar12 != (uint *)0x0) {
            uVar18 = *puVar12;
          }
          uVar10 = 0;
          if ((int)uVar16 < (this->GraphToSourceBufferAttributeIndex).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          uVar15 = (ulonglong)(uVar16 + 1);
          *(uint *)((this->GraphToSourceBufferAttributeIndex).AllocatorInstance.Data + uVar20 * 4) =
               uVar18;
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < (longlong)local_160);
      }
      if (((this->BufferToGraphStringKey).ArrayNum != 0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2506002160383164281>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataUploadAdaptor.cpp"
                             ,0x87,"BufferToGraphStringKey.IsEmpty()"), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (this->ExternalBufferMaxStringKeyValue != -1) {
        iVar2 = this->ExternalBufferMaxStringKeyValue + 1;
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->BufferToGraphStringKey,iVar2,Default);
        if (((this->BufferToGraphStringKey).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pUVar11 = local_148;
        uVar16 = 1;
        *(undefined4 *)(this->BufferToGraphStringKey).AllocatorInstance.Data = 0;
        local_150 = (TMap<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                     *)(longlong)iVar2;
        if (1 < (longlong)local_150) {
          lVar21 = 1;
          do {
            pFVar19 = (this->ExternalBufferForReuse).Reference;
            plVar1 = &pFVar19->_padding_;
            local_140 = pFVar19;
            local_138 = uVar16;
            if (pFVar19 == (FRDGPooledBuffer *)0x0) {
              puVar12 = (uint *)TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                        *)&pUVar11->SourceBufferToGraphStringKey,
                                       (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_140);
            }
            else {
              LOCK();
              *(int *)plVar1 = (int)*plVar1 + 1;
              UNLOCK();
              puVar12 = (uint *)TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                        *)&pUVar11->SourceBufferToGraphStringKey,
                                       (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_140);
              LOCK();
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                if (plVar1 == (longlong *)0x0) {
                  pFVar19 = (FRDGPooledBuffer *)0x0;
                }
                if (pFVar19 != (FRDGPooledBuffer *)0x0) {
                  (**(code **)pFVar19->_padding_)(pFVar19,1);
                }
              }
            }
            uVar18 = uVar16;
            if (puVar12 != (uint *)0x0) {
              uVar18 = *puVar12;
            }
            uVar10 = 0;
            if ((int)uVar16 < (this->BufferToGraphStringKey).ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            uVar16 = uVar16 + 1;
            *(uint *)((this->BufferToGraphStringKey).AllocatorInstance.Data + lVar21 * 4) = uVar18;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (longlong)local_150);
        }
      }
    }
  }
  bVar7 = true;
LAB_149825957:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

