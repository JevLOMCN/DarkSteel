// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FCategoryTitleDebugBlock @ 14d58e640

FCategoryTitleDebugBlock * __thiscall
UE::Cameras::FCategoryTitleDebugBlock::FCategoryTitleDebugBlock
          (FCategoryTitleDebugBlock *this,FString *param_1,FString *param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCategoryTitleDebugBlock_Cameras_UE__6B_;
  ::FString::FString(&this->Category,param_1);
  ::FString::FString(&this->Title,param_2);
  this->bSkipAttachedBlocksIfInactive = true;
  this->bSkipChildrenBlocksIfInactive = true;
  return this;
}

// FCategoryTitleDebugBlock @ 14d58e6a0

FCategoryTitleDebugBlock * __thiscall
UE::Cameras::FCategoryTitleDebugBlock::FCategoryTitleDebugBlock(FCategoryTitleDebugBlock *this)

{
  this->bSkipAttachedBlocksIfInactive = true;
  this->bSkipChildrenBlocksIfInactive = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCategoryTitleDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  (this->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).Data.ArrayNum = 0;
  (this->Title).Data.ArrayMax = 0;
  return this;
}

// GetTypeID @ 14d5abbd0

FCameraObjectTypeID * __thiscall
UE::Cameras::FCategoryTitleDebugBlock::GetTypeID(FCategoryTitleDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b47c0

bool __thiscall
UE::Cameras::FCategoryTitleDebugBlock::IsKindOf
          (FCategoryTitleDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCategoryTitleDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bb550

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
UE::Cameras::FCategoryTitleDebugBlock::OnDebugDraw
          (FCategoryTitleDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = (this->Category).Data.ArrayNum;
  if (iVar2 == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = (wchar_t *)(this->Category).Data.AllocatorInstance.Data;
    iVar2 = iVar2 + -1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  iVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->ActiveCategories,uVar1,&this->Category);
  if (iVar2 == -1) {
    if (this->bSkipAttachedBlocksIfInactive != false) {
      param_2->VisitFlags = param_2->VisitFlags | SkipAttachedBlocks;
    }
    if (this->bSkipChildrenBlocksIfInactive != false) {
      param_2->VisitFlags = param_2->VisitFlags | SkipChildrenBlocks;
    }
  }
  else if (1 < (this->Title).Data.ArrayNum) {
    FCameraDebugRenderer::AddText(param_2,L"{cam_title}%s{cam_default}\n");
  }
  return;
}

// OnSerialize @ 14d5c3780

void __thiscall
UE::Cameras::FCategoryTitleDebugBlock::OnSerialize(FCategoryTitleDebugBlock *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->Category);
  ::operator<<(param_1,&this->Title);
  ::operator<<(param_1,&this->bSkipAttachedBlocksIfInactive);
  ::operator<<(param_1,&this->bSkipChildrenBlocksIfInactive);
  return;
}

