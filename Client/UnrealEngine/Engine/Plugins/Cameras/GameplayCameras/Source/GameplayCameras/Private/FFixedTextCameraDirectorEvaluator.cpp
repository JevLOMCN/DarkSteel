// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d661c20

FCameraObjectTypeID * __thiscall
UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::GetTypeID
          (FFixedTextCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662f40

bool __thiscall
UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::IsKindOf
          (FFixedTextCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID !=
      FCameraDirectorEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d66cfb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::OnRun
          (FFixedTextCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  uint uVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  longlong lVar9;
  UObject *local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  if (this->_padding_ != 0) {
    pUVar8 = UFixedTestCameraDirector::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar5) {
      lVar9 = this->_padding_;
      goto LAB_14d66cfee;
    }
  }
  lVar9 = 0;
LAB_14d66cfee:
  uVar1 = this->ActiveIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar9 + 0x48))) {
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar9 + 0x48)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8 = *(UObject **)(*(longlong *)(lVar9 + 0x40) + (longlong)(int)uVar1 * 8);
    if (local_res8 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(local_res8);
      }
      local_18.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)this->_padding_;
      if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_18.Object = (FCameraEvaluationContext *)0x0;
      }
      else {
        aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            local_18.Object = (FCameraEvaluationContext *)0x0;
            local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d66d0b8;
          }
          LOCK();
          aVar7 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar5 = aVar3 == aVar7;
          if (bVar5) {
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar5);
        local_18.Object = (FCameraEvaluationContext *)this->_padding_;
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14d66d0b8:
      FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
      FCameraDirectorEvaluationResult::Add
                (param_2,&local_18,(TObjectPtr<UCameraRigAsset_const_>)&local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
  }
  return;
}

// SetActiveCameraRig @ 14d671c10

void __thiscall
UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::SetActiveCameraRig
          (FFixedTextCameraDirectorEvaluator *this,FName param_1)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FName *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ != 0) {
    pUVar4 = UFixedTestCameraDirector::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      lVar6 = this->_padding_;
      goto LAB_14d671c4a;
    }
  }
  lVar6 = 0;
LAB_14d671c4a:
  pFVar1 = *(FName **)(lVar6 + 0x50);
  pFVar5 = pFVar1;
  do {
    if (pFVar5 == pFVar1 + *(int *)(lVar6 + 0x58)) {
LAB_14d671c6e:
      this->ActiveIndex = -1;
      return;
    }
    if (*pFVar5 == param_1) {
      iVar3 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
      if ((-1 < iVar3) && (iVar3 < *(int *)(lVar6 + 0x48))) {
        this->ActiveIndex = iVar3;
        return;
      }
      goto LAB_14d671c6e;
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

