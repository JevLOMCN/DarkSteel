// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14749cba0

UScriptStruct * __cdecl FAnimNode_TransitionResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionResult,(UObject *)pUVar1,
                         L"AnimNode_TransitionResult");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton;
}

// FAnimNode_TransitionResult @ 1474b1920

FAnimNode_TransitionResult * __thiscall
FAnimNode_TransitionResult::FAnimNode_TransitionResult(FAnimNode_TransitionResult *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_TransitionResult__6B_;
  this->_padding_ = 0;
  this->bCanEnterTransition = false;
  *(undefined8 *)&this->NativeTransitionDelegate = 0;
  *(undefined8 *)&(this->NativeTransitionDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NativeTransitionDelegate).field_0x10 = 0;
  return this;
}

// CacheBones_AnyThread @ 1474c2000

void __thiscall
FAnimNode_TransitionResult::CacheBones_AnyThread
          (FAnimNode_TransitionResult *this,FAnimationCacheBonesContext *param_1)

{
  return;
}

// Evaluate_AnyThread @ 1474d14b0

void __thiscall
FAnimNode_TransitionResult::Evaluate_AnyThread
          (FAnimNode_TransitionResult *this,FPoseContext *param_1)

{
  return;
}

// GatherDebugData @ 1474d57a0

void __thiscall
FAnimNode_TransitionResult::GatherDebugData
          (FAnimNode_TransitionResult *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res10;
  FString local_38;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionResult,(UObject *)pUVar1,
                         L"AnimNode_TransitionResult");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.OuterSingleton)
                       ->_padding_;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl(local_28,L"%s<W:%.1f%%> %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_28[0].Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28[0].Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28[0].Data.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_28[0].Data.ArrayNum,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_38,false);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 1474e99d0

void __thiscall
FAnimNode_TransitionResult::Initialize_AnyThread
          (FAnimNode_TransitionResult *this,FAnimationInitializeContext *param_1)

{
  return;
}

// Update_AnyThread @ 147502230

void __thiscall
FAnimNode_TransitionResult::Update_AnyThread
          (FAnimNode_TransitionResult *this,FAnimationUpdateContext *param_1)

{
  return;
}

