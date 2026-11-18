// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// FDeltaCompressionBaselineInvalidationTracker @ 144228c70

FDeltaCompressionBaselineInvalidationTracker * __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::
FDeltaCompressionBaselineInvalidationTracker(FDeltaCompressionBaselineInvalidationTracker *this)

{
  (this->InvalidationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidationInfos).ArrayNum = 0;
  (this->InvalidationInfos).ArrayMax = 0;
  (this->InvalidatedObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidatedObjects).Storage.ArrayNum = 0;
  (this->InvalidatedObjects).Storage.ArrayMax = 0;
  (this->InvalidatedObjects).BitCount = 0;
  this->BaselineManager = (FDeltaCompressionBaselineManager *)0x0;
  return this;
}

// ~FDeltaCompressionBaselineInvalidationTracker @ 14422ae90

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::
~FDeltaCompressionBaselineInvalidationTracker(FDeltaCompressionBaselineInvalidationTracker *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InvalidatedObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InvalidationInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 14423fd90

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::Init
          (FDeltaCompressionBaselineInvalidationTracker *this,
          FDeltaCompressionBaselineInvalidationTrackerInitParams *param_1)

{
  this->BaselineManager = param_1->BaselineManager;
  FNetBitArray::Init(&this->InvalidatedObjects,param_1->MaxInternalNetRefIndex);
  return;
}

// InvalidateBaselines @ 1442432b0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
          (FDeltaCompressionBaselineInvalidationTracker *this,uint param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  pFVar4 = (this->InvalidatedObjects).Storage.AllocatorInstance.Data;
  if ((this->InvalidatedObjects).BitCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  lVar2 = (ulonglong)(param_1 >> 5) * 4;
  if ((*(uint *)(pFVar4 + lVar2) & uVar8) == 0) {
    pFVar4 = (this->BaselineManager->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
    if ((this->BaselineManager->DeltaCompressionEnabledObjects).BitCount <= param_1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((*(uint *)(pFVar4 + lVar2) & uVar8) != 0) {
      if (param_2 == 0) {
        FNetBitArray::SetBit(&this->InvalidatedObjects,param_1);
      }
      iVar7 = (this->InvalidationInfos).ArrayMax;
      piVar1 = &(this->InvalidationInfos).ArrayMax;
      iVar3 = (this->InvalidationInfos).ArrayNum;
      if (iVar7 == iVar3) {
        uVar8 = iVar3 + 0x100;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if (iVar7 < (int)uVar8) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar8,(ForAnyElementType *)this,iVar3,piVar1);
        }
      }
      iVar7 = (this->InvalidationInfos).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)this,piVar1);
      }
      (this->InvalidationInfos).ArrayNum = iVar7 + 1;
      *(ulonglong *)((this->InvalidationInfos).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           CONCAT44(param_1,param_2);
    }
  }
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::OnMaxInternalNetRefIndexIncreased
          (FDeltaCompressionBaselineInvalidationTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  (this->InvalidatedObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->InvalidatedObjects).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->InvalidatedObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->InvalidatedObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->InvalidatedObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// PostSendUpdate @ 1442470c0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::PostSendUpdate
          (FDeltaCompressionBaselineInvalidationTracker *this)

{
  int *piVar1;
  
  if (0 < (this->InvalidationInfos).ArrayNum) {
    piVar1 = &(this->InvalidationInfos).ArrayMax;
    (this->InvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)this,0,piVar1);
    }
    memset((this->InvalidatedObjects).Storage.AllocatorInstance.Data,0,
           (longlong)(this->InvalidatedObjects).Storage.ArrayNum << 2);
    return;
  }
  return;
}

// PreSendUpdate @ 144247500

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::PreSendUpdate
          (FDeltaCompressionBaselineInvalidationTracker *this)

{
  return;
}

