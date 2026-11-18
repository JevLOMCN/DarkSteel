// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticStruct @ 14d56db50

UScriptStruct * __cdecl FGameplayCamerasActivateCameraRigTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask,
                         (UObject *)pUVar1,L"GameplayCamerasActivateCameraRigTask");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.OuterSingleton;
}

// GetInstanceDataType @ 14d56db90

UStruct * __thiscall
FGameplayCamerasActivateCameraRigTask::GetInstanceDataType
          (FGameplayCamerasActivateCameraRigTask *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData
                         ,(UObject *)pUVar1,L"GameplayCamerasActivateCameraRigTaskInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
         OuterSingleton;
}

// Link @ 14d56dbd0

bool __thiscall
FGameplayCamerasActivateCameraRigTask::Link
          (FGameplayCamerasActivateCameraRigTask *this,FStateTreeLinker *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData,
                         (UObject *)pUVar1,L"CameraDirectorStateTreeEvaluationData");
  }
  FStateTreeLinker::LinkExternalData
            (param_1,(FStateTreeExternalDataHandle *)&this->CameraDirectorEvaluationDataHandle,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton
             ,Required);
  return true;
}

// EnterState @ 14d56dcf0

EStateTreeRunStatus __thiscall
FGameplayCamerasActivateCameraRigTask::EnterState
          (FGameplayCamerasActivateCameraRigTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  bool bVar1;
  
  bVar1 = UpdateResult(this,param_1);
  if (bVar1) {
    return -(this->bRunOnce != false) & Succeeded;
  }
  return Failed;
}

// Tick @ 14d56dd20

EStateTreeRunStatus __thiscall
FGameplayCamerasActivateCameraRigTask::Tick
          (FGameplayCamerasActivateCameraRigTask *this,FStateTreeExecutionContext *param_1,
          float param_2)

{
  UpdateResult(this,param_1);
  return Running;
}

// UpdateResult @ 14d5d3f20

bool __thiscall
FGameplayCamerasActivateCameraRigTask::UpdateResult
          (FGameplayCamerasActivateCameraRigTask *this,FStateTreeExecutionContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPackage *pUVar10;
  FCameraDirectorStateTreeEvaluationData *pFVar11;
  undefined4 local_res8;
  undefined2 local_resc;
  
  if ((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
      *(ushort *)((longlong)&this->_padding_ + 4))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2b7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (*(longlong *)&param_1->CurrentNodeInstanceData == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData
                         ,(UObject *)pUVar10,L"GameplayCamerasActivateCameraRigTaskInstanceData");
    if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d5d401b;
  }
  else {
LAB_14d5d401b:
    iVar9 = (int)(
                 Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData
                 .OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
         OuterSingleton)->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14d5d4065;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_14d5d4065:
  pFVar3 = *(FScriptContainerElement **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if (*(longlong *)pFVar3 == 0) {
    return false;
  }
  local_res8 = *(undefined4 *)&this->CameraDirectorEvaluationDataHandle;
  local_resc = *(undefined2 *)&(this->CameraDirectorEvaluationDataHandle).field_0x4;
  pFVar11 = FStateTreeExecutionContext::
            GetExternalData<TStateTreeExternalDataHandle<FCameraDirectorStateTreeEvaluationData,0>_>
                      (param_1,SUB86(&local_res8,0));
  pFVar4 = (pFVar11->ActiveCameraRigs).AllocatorInstance.Data;
  if ((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)(pFVar11->ActiveCameraRigs).ArrayMax * 8))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar9 = (pFVar11->ActiveCameraRigs).ArrayNum;
  piVar1 = &(pFVar11->ActiveCameraRigs).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar11,piVar1);
  }
  pFVar4 = (pFVar11->ActiveCameraRigs).AllocatorInstance.Data;
  (pFVar11->ActiveCameraRigs).ArrayNum = iVar9 + 1;
  pUVar5 = *(UObject **)pFVar3;
  *(UObject **)(pFVar4 + (longlong)iVar9 * 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  return true;
}

