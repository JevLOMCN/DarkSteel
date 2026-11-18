// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 15

// StaticStruct @ 1463d1e20

UScriptStruct * __cdecl FAnimNode_PoseHandler::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseHandler,(UObject *)pUVar1,
                         L"AnimNode_PoseHandler");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton;
}

// GetCurrentAssetTime @ 1463d2230

float __thiscall FAnimNode_PoseHandler::GetCurrentAssetTime(FAnimNode_PoseHandler *this)

{
  return 0.0;
}

// GetCurrentAssetLength @ 1463d2240

float __thiscall FAnimNode_PoseHandler::GetCurrentAssetLength(FAnimNode_PoseHandler *this)

{
  return 0.0;
}

// CacheBones_AnyThread @ 1463d2250

void __thiscall
FAnimNode_PoseHandler::CacheBones_AnyThread
          (FAnimNode_PoseHandler *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  CacheBoneBlendWeights(this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAccumulatedTime @ 1463d22a0

float __thiscall FAnimNode_PoseHandler::GetAccumulatedTime(FAnimNode_PoseHandler *this)

{
  return 0.0;
}

// SetAccumulatedTime @ 1463d22b0

void __thiscall FAnimNode_PoseHandler::SetAccumulatedTime(FAnimNode_PoseHandler *this,float param_1)

{
  return;
}

// GetAnimAsset @ 1463d22c0

UAnimationAsset * __thiscall FAnimNode_PoseHandler::GetAnimAsset(FAnimNode_PoseHandler *this)

{
  return (UAnimationAsset *)(this->PoseAsset).field0_0x0.DebugPtr;
}

// OnPoseAssetChange @ 1463d22d0

void __thiscall FAnimNode_PoseHandler::OnPoseAssetChange(FAnimNode_PoseHandler *this)

{
  return;
}

// operator= @ 14640b7c0

FAnimNode_PoseHandler * __thiscall
FAnimNode_PoseHandler::operator=(FAnimNode_PoseHandler *this,FAnimNode_PoseHandler *param_1)

{
  UPoseAsset *pUVar1;
  longlong lVar2;
  
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PoseAsset).field0_0x0.DebugPtr, pUVar1 != (UPoseAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PoseAsset).field0_0x0 = (param_1->PoseAsset).field0_0x0;
  (this->CurrentPoseAsset).WeakPtr = (param_1->CurrentPoseAsset).WeakPtr;
  FAnimExtractContext::operator=(&this->PoseExtractContext,&param_1->PoseExtractContext);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneBlendWeights,&param_1->BoneBlendWeights);
  return this;
}

// CacheBoneBlendWeights @ 146419260

void __thiscall
FAnimNode_PoseHandler::CacheBoneBlendWeights
          (FAnimNode_PoseHandler *this,FAnimInstanceProxy *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar1;
  int iVar2;
  FBoneContainer *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  UPoseAsset *local_res10;
  
  this_00 = &this->BoneBlendWeights;
  (this->BoneBlendWeights).ArrayNum = 0;
  if ((this->BoneBlendWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->BoneBlendWeights).ArrayMax);
  }
  if ((param_1->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_01 = (param_1->RequiredBones).Object;
  bVar5 = FWeakObjectPtr::IsValid(&(this->CurrentPoseAsset).WeakPtr);
  if (bVar5) {
    bVar5 = FWeakObjectPtr::IsValid(&(this_01->Asset).WeakPtr);
    if (((bVar5) && (this_01->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (this_01->BoneIndicesArray).ArrayNum)) {
      local_res10 = (UPoseAsset *)FWeakObjectPtr::Get(&(this->CurrentPoseAsset).WeakPtr);
      pTVar8 = UPoseAsset::GetTrackNames(local_res10);
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                (this_00,(this_01->BoneIndicesArray).ArrayNum);
      pFVar10 = (FName *)(pTVar8->AllocatorInstance).Data;
      iVar2 = pTVar8->ArrayNum;
      pFVar1 = pFVar10 + iVar2;
      do {
        while( true ) {
          if (pTVar8->ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar10 == pFVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014641943b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(this->_padding_ + 0x150))(this,this_01,local_res10);
            return;
          }
          uVar6 = FBoneContainer::GetPoseBoneIndexForBoneName(this_01,pFVar10);
          pFVar3 = (this_01->BoneIndicesArray).AllocatorInstance.Data;
          pFVar9 = pFVar3;
          if (pFVar3 != pFVar3 + (longlong)(this_01->BoneIndicesArray).ArrayNum * 2) break;
LAB_146419407:
          pFVar10 = pFVar10 + 1;
        }
        do {
          if (*(ushort *)pFVar9 == uVar6) {
            uVar6 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 1);
            if (uVar6 != 0xffffffff) {
              uVar7 = 0;
              if ((int)uVar6 < (this->BoneBlendWeights).ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) =
                   0x3f800000;
            }
            goto LAB_146419407;
          }
          pFVar9 = pFVar9 + 2;
        } while (pFVar9 != pFVar3 + (longlong)(this_01->BoneIndicesArray).ArrayNum * 2);
        pFVar10 = pFVar10 + 1;
      } while( true );
    }
  }
  iVar2 = (this->PoseExtractContext).PoseCurves.ArrayMax;
  (this->PoseExtractContext).PoseCurves.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->PoseExtractContext).PoseCurves.AllocatorInstance,0,
               &(this->PoseExtractContext).PoseCurves.ArrayMax);
  }
  return;
}

// GatherDebugData @ 146445150

void __thiscall
FAnimNode_PoseHandler::GatherDebugData(FAnimNode_PoseHandler *this,FNodeDebugData *param_1)

{
  UPoseAsset *pUVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseHandler,(UObject *)pUVar2,
                         L"AnimNode_PoseHandler");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_PoseHandler.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pUVar1 = (this->PoseAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UPoseAsset *)0x0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_58);
  }
  ::FString::PrintfImpl(local_38,L"(\'%s\')");
  iVar3 = local_38[0].Data.ArrayNum + -1;
  if (local_38[0].Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar3);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,true);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 146459e00

void __thiscall
FAnimNode_PoseHandler::Initialize_AnyThread
          (FAnimNode_PoseHandler *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  UpdatePoseAssetProperty(this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// RebuildPoseList @ 146462890

void __thiscall
FAnimNode_PoseHandler::RebuildPoseList
          (FAnimNode_PoseHandler *this,FBoneContainer *param_1,UPoseAsset *param_2)

{
  TArray<FPoseCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  pTVar1 = &(this->PoseExtractContext).PoseCurves;
  iVar7 = (this->PoseExtractContext).PoseCurves.ArrayMax;
  piVar2 = &(this->PoseExtractContext).PoseCurves.ArrayMax;
  (this->PoseExtractContext).PoseCurves.ArrayNum = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pTVar8 = UPoseAsset::GetPoseFNames(param_2);
  iVar7 = pTVar8->ArrayNum;
  if (0 < iVar7) {
    uVar9 = 0;
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_c = 0;
      local_18 = *(undefined8 *)((pTVar8->AllocatorInstance).Data + lVar10);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      uStack_10 = uVar9;
      if (((pFVar3 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)*piVar2 * 0x10)) &&
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
      iVar7 = (this->PoseExtractContext).PoseCurves.ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar1->AllocatorInstance,piVar2);
      }
      uVar9 = uVar9 + 1;
      (this->PoseExtractContext).PoseCurves.ArrayNum = iVar7 + 1;
      lVar10 = lVar10 + 8;
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar3 = local_18;
      *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_c,uStack_10);
      iVar7 = pTVar8->ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// UpdateAssetPlayer @ 146471c30

void __thiscall
FAnimNode_PoseHandler::UpdateAssetPlayer
          (FAnimNode_PoseHandler *this,FAnimationUpdateContext *param_1)

{
  TWeakObjectPtr<UPoseAsset,FWeakObjectPtr> *this_00;
  UPoseAsset *pUVar1;
  bool bVar2;
  bool bVar3;
  FExposedValueHandler *this_01;
  UPoseAsset *pUVar4;
  UObject *pUVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_18;
  
  bVar2 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  this_00 = &this->CurrentPoseAsset;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar4 = (UPoseAsset *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar1 = (this->PoseAsset).field0_0x0.DebugPtr;
    if (pUVar1 == (UPoseAsset *)0x0) {
      bVar3 = pUVar4 == (UPoseAsset *)0x0;
    }
    else {
      bVar3 = pUVar1 == pUVar4;
    }
    if (bVar3) goto LAB_146471c9b;
  }
  UpdatePoseAssetProperty(this,(FAnimInstanceProxy *)param_1->_padding_);
LAB_146471c9b:
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_res8.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = true;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    FVar6.Data = (FScriptContainerElement *)&u_None;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             (wchar_t *)FVar6.Data);
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar2 = false;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = true;
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_res8.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    FVar6.Data = (FScriptContainerElement *)&u_None;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Pose Asset",(wchar_t *)FVar6.Data);
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdatePoseAssetProperty @ 146475b80

void __thiscall
FAnimNode_PoseHandler::UpdatePoseAssetProperty
          (FAnimNode_PoseHandler *this,FAnimInstanceProxy *param_1)

{
  UPoseAsset *pUVar1;
  FWeakObjectPtr local_res8;
  UPoseAsset *local_res18;
  
  pUVar1 = (this->PoseAsset).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UPoseAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPoseAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPoseAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (this->CurrentPoseAsset).WeakPtr = local_res8;
  CacheBoneBlendWeights(this,param_1);
  return;
}

