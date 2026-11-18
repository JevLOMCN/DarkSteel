// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FCameraNodeEvaluatorDebugBlock @ 14d58c9d0

FCameraNodeEvaluatorDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::FCameraNodeEvaluatorDebugBlock
          (FCameraNodeEvaluatorDebugBlock *this,TObjectPtr<UCameraNode_const_> param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  bool bVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar1 = &this->NodeClassName;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraNodeEvaluatorDebugBlock_Cameras_UE__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassName).Data.ArrayNum = 0;
  (this->NodeClassName).Data.ArrayMax = 0;
  bVar4 = *(longlong *)param_1.field0_0x0 == 0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_28,L"<no node>");
  }
  else {
    local_res8 = *(FName *)(*(longlong *)(*(longlong *)param_1.field0_0x0 + 0x10) + 0x18);
    ::FName::ToString(&local_res8,&local_38);
    pFVar3 = &local_38;
  }
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodeClassName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->NodeClassName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (bVar4) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// FCameraNodeEvaluatorDebugBlock @ 14d58cad0

FCameraNodeEvaluatorDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::FCameraNodeEvaluatorDebugBlock
          (FCameraNodeEvaluatorDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FCameraNodeEvaluatorDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NodeClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassName).Data.ArrayNum = 0;
  (this->NodeClassName).Data.ArrayMax = 0;
  return this;
}

// GetTypeID @ 14d5abb80

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::GetTypeID(FCameraNodeEvaluatorDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4720

bool __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::IsKindOf
          (FCameraNodeEvaluatorDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluatorDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5ba690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::OnDebugDraw
          (FCameraNodeEvaluatorDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  int iVar1;
  size_t sVar2;
  
  if (1 < GGameplayCamerasDebugNodeTreeFilter.Data.ArrayNum) {
    if (GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      sVar2 = wcslen((wchar_t *)GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data);
      iVar1 = ::FString::Find(&this->NodeClassName,
                              (wchar_t *)
                              GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data,
                              (int)sVar2,IgnoreCase,FromStart,-1);
      if (iVar1 != -1) goto LAB_14d5ba706;
    }
    param_2->VisitFlags = param_2->VisitFlags | SkipAttachedBlocks;
    return;
  }
LAB_14d5ba706:
  FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[%s]{cam_default} ");
  return;
}

// OnSerialize @ 14d5c36b0

void __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::OnSerialize
          (FCameraNodeEvaluatorDebugBlock *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->NodeClassName);
  return;
}

