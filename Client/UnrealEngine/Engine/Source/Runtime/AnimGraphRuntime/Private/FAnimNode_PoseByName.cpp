// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463d3740

UScriptStruct * __cdecl FAnimNode_PoseByName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseByName,(UObject *)pUVar1,
                         L"AnimNode_PoseByName");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton;
}

// Initialize_AnyThread @ 1463d3780

void __thiscall
FAnimNode_PoseByName::Initialize_AnyThread
          (FAnimNode_PoseByName *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseByName::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  FAnimNode_PoseHandler::UpdatePoseAssetProperty
            ((FAnimNode_PoseHandler *)this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAssetPlayer @ 1463d37e0

void __thiscall
FAnimNode_PoseByName::UpdateAssetPlayer(FAnimNode_PoseByName *this,FAnimationUpdateContext *param_1)

{
  FName *this_00;
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  bVar9 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FAnimNode_PoseHandler::UpdateAssetPlayer((FAnimNode_PoseHandler *)this,param_1);
  this_00 = &this->PoseName;
  pwVar7 = L"";
  if (this->CurrentPoseName != *this_00) {
    lVar1 = param_1->_padding_;
    pcVar2 = *(code **)(this->_padding_ + 0x150);
    lVar3 = this->_padding_;
    if ((*(longlong *)(lVar1 + 0x660) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(this,*(undefined8 *)(lVar1 + 0x660),lVar3);
    this->CurrentPoseName = *this_00;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_res8.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&local_res8,&local_48);
    bVar9 = true;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  else {
    FVar8.Data = (FScriptContainerElement *)&u_None;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Pose Asset",(wchar_t *)FVar8.Data);
  if ((bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::ToString(this_00,&local_38);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Pose",
             pwVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Evaluate_AnyThread @ 1463d3980

void __thiscall
FAnimNode_PoseByName::Evaluate_AnyThread(FAnimNode_PoseByName *this,FPoseContext *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UPoseAsset *this_00;
  FAnimationPoseData local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseByName::Evaluate_AnyThread");
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar4 != (UObject *)0x0) && (0 < (int)this->_padding_)) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(longlong *)&pUVar4[1].field_0x10 != 0) {
      fVar1 = this->PoseWeight;
      if ((int)this->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(float *)(this->_padding_ + 0xc) = fVar1;
      FAnimationPoseData::FAnimationPoseData(local_38,param_1);
      this_00 = (UPoseAsset *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UPoseAsset::GetAnimationPose(this_00,local_38,(FAnimExtractContext *)&this->_padding_);
      goto LAB_1463d3a73;
    }
  }
  if (param_1->bExpectsAdditivePose == false) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
LAB_1463d3a73:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463d3ab0

void __thiscall
FAnimNode_PoseByName::GatherDebugData(FAnimNode_PoseByName *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  FName local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseByName::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseByName,(UObject *)pUVar2,
                         L"AnimNode_PoseByName");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_PoseByName.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_78);
  ::FString::PrintfImpl(&local_68,L"%s<W:%.1f%%> %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FName::ToString(&this->PoseName,local_48);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_res8.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
  }
  ::FString::PrintfImpl(&local_78,L"(\'%s\' Pose: %s)");
  iVar4 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_78,true);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// RebuildPoseList @ 1463d3d00

void __thiscall
FAnimNode_PoseByName::RebuildPoseList
          (FAnimNode_PoseByName *this,FBoneContainer *param_1,UPoseAsset *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  iVar5 = *(int *)((longlong)&this->_padding_ + 4);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  pTVar6 = UPoseAsset::GetPoseFNames(param_2);
  uStack_20 = UPoseAsset::GetPoseIndexByName(param_2,&this->PoseName);
  if (uStack_20 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uStack_20 < pTVar6->ArrayNum) {
      uVar7 = ~uStack_20 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28 = *(undefined8 *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uStack_20 * 8);
    uStack_1c = 0;
    if (((undefined8 *)this->_padding_ <= &local_28) &&
       (&local_28 < (undefined8 *)this->_padding_ + (longlong)*piVar1 * 2)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (int)this->_padding_;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    puVar2 = (undefined8 *)(this->_padding_ + (longlong)iVar5 * 0x10);
    *puVar2 = local_28;
    puVar2[1] = CONCAT44(uStack_1c,uStack_20);
  }
  return;
}

// FAnimNode_PoseByName @ 146404a20

FAnimNode_PoseByName * __thiscall
FAnimNode_PoseByName::FAnimNode_PoseByName(FAnimNode_PoseByName *this)

{
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)&___7FAnimNode_PoseByName__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PoseName).ComparisonIndex = 0;
  (this->PoseName).Number = 0;
  this->PoseWeight = 1.0;
  (this->CurrentPoseName).ComparisonIndex = 0;
  (this->CurrentPoseName).Number = 0;
  return this;
}

