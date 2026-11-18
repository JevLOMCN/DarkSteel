// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463ea150

UScriptStruct * __cdecl FAnimNode_Sync::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Sync,(UObject *)pUVar1,L"AnimNode_Sync"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton;
}

// Initialize_AnyThread @ 1463ea210

void __thiscall
FAnimNode_Sync::Initialize_AnyThread(FAnimNode_Sync *this,FAnimationInitializeContext *param_1)

{
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// Update_AnyThread @ 1463ea260

void __thiscall
FAnimNode_Sync::Update_AnyThread(FAnimNode_Sync *this,FAnimationUpdateContext *param_1)

{
  TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> local_28;
  
  UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope>::
  TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope><FAnimationUpdateContext_const_&,FName_&,TEnumAsByte<enum_EAnimGroupRole::Type>_&>
            (&local_28,this->GroupName != (FName)0x0,(FAnimationBaseContext *)param_1,param_1,
             &this->GroupName,&this->GroupRole);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  if (local_28.bCondition != false) {
    UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_28);
  }
  return;
}

// CacheBones_AnyThread @ 1463ea310

void __thiscall
FAnimNode_Sync::CacheBones_AnyThread(FAnimNode_Sync *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// Evaluate_AnyThread @ 1463ea320

void __thiscall FAnimNode_Sync::Evaluate_AnyThread(FAnimNode_Sync *this,FPoseContext *param_1)

{
  FPoseLink::Evaluate(&this->Source,param_1);
  return;
}

// GatherDebugData @ 1463ea330

void __thiscall FAnimNode_Sync::GatherDebugData(FAnimNode_Sync *this,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Sync,(UObject *)pUVar1,L"AnimNode_Sync"
                        );
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Sync.OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  FNodeDebugData::AddDebugItem(param_1,local_38,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  return;
}

