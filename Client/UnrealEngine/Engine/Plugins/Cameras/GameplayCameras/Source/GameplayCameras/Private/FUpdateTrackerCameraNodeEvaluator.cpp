// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d661d00

FCameraObjectTypeID * __thiscall
UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::GetTypeID
          (FUpdateTrackerCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d663160

bool __thiscall
UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::IsKindOf
          (FUpdateTrackerCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d66dbd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::OnRun
          (FUpdateTrackerCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  TArray<UE::Cameras::Test::FTrackedUpdateInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  uStack_14 = param_1->bIsFirstFrame;
  pTVar1 = &this->ReceivedUpdates;
  local_18 = param_1->DeltaTime;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  uStack_13 = param_2->bIsCameraCut;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(this->ReceivedUpdates).ArrayMax * 8
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ReceivedUpdates).ArrayNum;
  piVar2 = &(this->ReceivedUpdates).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ReceivedUpdates).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(uStack_14,local_18)));
  return;
}

