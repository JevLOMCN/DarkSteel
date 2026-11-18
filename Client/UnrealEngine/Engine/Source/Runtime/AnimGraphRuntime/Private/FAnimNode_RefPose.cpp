// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 4

// StaticStruct @ 1463d5a70

UScriptStruct * __cdecl FAnimNode_RefPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose,(UObject *)pUVar1,
                         L"AnimNode_RefPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton;
}

// Evaluate_AnyThread @ 1463d5af0

void __thiscall FAnimNode_RefPose::Evaluate_AnyThread(FAnimNode_RefPose *this,FPoseContext *param_1)

{
  FCompactPose *this_00;
  ERefPoseType EVar1;
  wchar_t *pwVar2;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RefPose::Evaluate_AnyThread");
  EVar1 = GetRefPoseType(this);
  this_00 = &param_1->Pose;
  if (EVar1 == EIT_LocalSpace) {
    if (param_1->bExpectsAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)this_00,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity(this_00);
    }
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(this_00);
    if (EVar1 != EIT_LocalSpace) {
      if (EVar1 == EIT_Additive) {
        pwVar2 = L"EIT_Additive";
      }
      else {
        pwVar2 = L"Unknown Ref Pose Type";
      }
      goto LAB_1463d5b5e;
    }
  }
  pwVar2 = L"EIT_LocalSpace";
LAB_1463d5b5e:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Ref Pose Type",pwVar2);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463d5b90

void __thiscall FAnimNode_RefPose::GatherDebugData(FAnimNode_RefPose *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res10;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RefPose::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose,(UObject *)pUVar1,
                         L"AnimNode_RefPose");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res10,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  GetRefPoseType(this);
  ::FString::PrintfImpl(&local_48,L"(Ref Pose Type: %s)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,true);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetRefPoseType @ 14644e640

ERefPoseType __thiscall FAnimNode_RefPose::GetRefPoseType(FAnimNode_RefPose *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  ERefPoseType EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  byte *pbVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_RefPoseType.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_RefPoseType,"RefPoseType");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose,(UObject *)pUVar6,
                           L"AnimNode_RefPose");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_RefPoseType,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_RefPose.OuterSingleton);
    CachedId_RefPoseType.Id = pFVar7->Id;
    CachedId_RefPoseType.Index = pFVar7->Index;
  }
  iVar3 = CachedId_RefPoseType.Index;
  FVar2 = CachedId_RefPoseType.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pbVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (ERefPoseType)*pbVar8;
}

