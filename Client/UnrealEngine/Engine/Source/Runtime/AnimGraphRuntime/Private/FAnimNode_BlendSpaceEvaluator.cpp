// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463dbfb0

UScriptStruct * __cdecl FAnimNode_BlendSpaceEvaluator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator,(UObject *)pUVar1,
                         L"AnimNode_BlendSpaceEvaluator");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.OuterSingleton;
}

// FAnimNode_BlendSpaceEvaluator @ 1464035a0

FAnimNode_BlendSpaceEvaluator * __thiscall
FAnimNode_BlendSpaceEvaluator::FAnimNode_BlendSpaceEvaluator(FAnimNode_BlendSpaceEvaluator *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_BlendSpaceEvaluator__6B_;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->NormalizedTime = 0.0;
  this->bTeleportToNormalizedTime = true;
  return this;
}

// GatherDebugData @ 146442650

void __thiscall
FAnimNode_BlendSpaceEvaluator::GatherDebugData
          (FAnimNode_BlendSpaceEvaluator *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  longlong lVar2;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceEvaluator::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator,(UObject *)pUVar1,
                         L"AnimNode_BlendSpaceEvaluator");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceEvaluator.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  lVar2 = (**(code **)(this->_padding_ + 0x148))(this);
  if (lVar2 != 0) {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,local_38);
    ::FString::PrintfImpl(&local_58,L"(\'%s\' Play Time: %.3f)");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
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
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetPlayRate @ 14644c500

float __thiscall FAnimNode_BlendSpaceEvaluator::GetPlayRate(FAnimNode_BlendSpaceEvaluator *this)

{
  if (this->bTeleportToNormalizedTime != false) {
    return 0.0;
  }
  return __real_3f800000;
}

// IsEvaluator @ 14645ad70

bool __thiscall FAnimNode_BlendSpaceEvaluator::IsEvaluator(FAnimNode_BlendSpaceEvaluator *this)

{
  return true;
}

// ShouldTeleportToTime @ 14646b900

bool __thiscall
FAnimNode_BlendSpaceEvaluator::ShouldTeleportToTime(FAnimNode_BlendSpaceEvaluator *this)

{
  return this->bTeleportToNormalizedTime;
}

// UpdateAssetPlayer @ 146471a90

void __thiscall
FAnimNode_BlendSpaceEvaluator::UpdateAssetPlayer
          (FAnimNode_BlendSpaceEvaluator *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  longlong lVar1;
  UObject *pUVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  float fVar5;
  FName local_res8;
  FString local_18;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  fVar5 = this->NormalizedTime;
  if (__real_3f800000 <= this->NormalizedTime) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  FAnimNode_BlendSpacePlayerBase::UpdateInternal((FAnimNode_BlendSpacePlayerBase *)this,param_1);
  lVar1 = (**(code **)(this->_padding_ + 0x148))(this);
  if (lVar1 == 0) {
    FVar4.Data = (FScriptContainerElement *)&u_None;
  }
  else {
    lVar1 = (**(code **)(this->_padding_ + 0x148))(this);
    local_res8 = *(FName *)(lVar1 + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    bVar3 = true;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             (wchar_t *)FVar4.Data);
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar2 = (UObject *)(**(code **)(this->_padding_ + 0x148))(this);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Asset",
             pUVar2);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Playback Time",*(float *)((longlong)&this->_padding_ + 4));
  return;
}

