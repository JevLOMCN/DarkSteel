// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147494590

UScriptStruct * __cdecl FAnimNode_UseCachedPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose,(UObject *)pUVar1,
                         L"AnimNode_UseCachedPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton;
}

// FAnimNode_UseCachedPose @ 1474b1950

FAnimNode_UseCachedPose * __thiscall
FAnimNode_UseCachedPose::FAnimNode_UseCachedPose(FAnimNode_UseCachedPose *this)

{
  *(undefined4 *)&(this->LinkToCachingNode).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_UseCachedPose__6B_;
  *(undefined8 *)&this->LinkToCachingNode = 0;
  (this->LinkToCachingNode).field_0xc = 0;
  (this->CachePoseName).ComparisonIndex = 0;
  (this->CachePoseName).Number = 0;
  return this;
}

// CacheBones_AnyThread @ 1474c2010

void __thiscall
FAnimNode_UseCachedPose::CacheBones_AnyThread
          (FAnimNode_UseCachedPose *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->LinkToCachingNode,param_1);
  return;
}

// Evaluate_AnyThread @ 1474d14c0

void __thiscall
FAnimNode_UseCachedPose::Evaluate_AnyThread(FAnimNode_UseCachedPose *this,FPoseContext *param_1)

{
  FPoseLink::Evaluate(&this->LinkToCachingNode,param_1);
  return;
}

// GatherDebugData @ 1474d5910

void __thiscall
FAnimNode_UseCachedPose::GatherDebugData(FAnimNode_UseCachedPose *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose,(UObject *)pUVar1,
                         L"AnimNode_UseCachedPose");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FName::ToString(&this->CachePoseName,local_38);
  ::FString::PrintfImpl(&local_58,L"%s:");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
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
  return;
}

// Initialize_AnyThread @ 1474e99e0

void __thiscall
FAnimNode_UseCachedPose::Initialize_AnyThread
          (FAnimNode_UseCachedPose *this,FAnimationInitializeContext *param_1)

{
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->LinkToCachingNode,param_1);
  return;
}

// Update_AnyThread @ 147502240

void __thiscall
FAnimNode_UseCachedPose::Update_AnyThread
          (FAnimNode_UseCachedPose *this,FAnimationUpdateContext *param_1)

{
  FScopedAnimNodeTraceSuspend local_res8 [8];
  
  FAnimTrace::FScopedAnimNodeTraceSuspend::FScopedAnimNodeTraceSuspend(local_res8);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->LinkToCachingNode,param_1);
  FAnimTrace::FScopedAnimNodeTraceSuspend::~FScopedAnimNodeTraceSuspend(local_res8);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             &this->CachePoseName);
  return;
}

