// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FBlendStackSummaryCameraDebugBlock @ 14d542900

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackSummaryCameraDebugBlock * __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::FBlendStackSummaryCameraDebugBlock
          (FBlendStackSummaryCameraDebugBlock *this,FBlendStackCameraNodeEvaluator *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBlendStackSummaryCameraDebugBlock_Cameras_UE__6B_;
  if (param_1->_padding_ != 0) {
    pUVar2 = UBlendStackCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = param_1->_padding_;
    }
  }
  this->NumEntries = (param_1->Entries).ArrayNum;
  this->BlendStackType = *(ECameraBlendStackType *)(lVar3 + 0x38);
  this->BlendStackLayer = *(ECameraRigLayer *)(lVar3 + 0x3c);
  return this;
}

// FBlendStackSummaryCameraDebugBlock @ 14d542990

FBlendStackSummaryCameraDebugBlock * __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::FBlendStackSummaryCameraDebugBlock
          (FBlendStackSummaryCameraDebugBlock *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBlendStackSummaryCameraDebugBlock_Cameras_UE__6B_;
  return this;
}

// GetTypeID @ 14d558cf0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::GetTypeID(FBlendStackSummaryCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a470

bool __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::IsKindOf
          (FBlendStackSummaryCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStackSummaryCameraDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d55ba40

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
UE::Cameras::FBlendStackSummaryCameraDebugBlock::OnDebugDraw
          (FBlendStackSummaryCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  UPackage *pUVar1;
  FText *this_00;
  FText local_18;
  
  if (this->BlendStackLayer != None) {
    if (Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton == (UEnum *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer,(UObject *)pUVar1,
                         L"ECameraRigLayer");
    }
    this_00 = UEnum::GetDisplayNameTextByValue
                        (Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton,&local_18,
                         (ulonglong)this->BlendStackLayer);
    FText::ToString(this_00);
    FCameraDebugRenderer::AddText(param_2,L"(%s) ");
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FCameraDebugRenderer::AddText(param_2,L"%d entries");
  return;
}

// OnSerialize @ 14d55d3a0

void __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::OnSerialize
          (FBlendStackSummaryCameraDebugBlock *this,FArchive *param_1)

{
  int *piVar1;
  ECameraBlendStackType *pEVar2;
  int *piVar3;
  ECameraBlendStackType *pEVar4;
  ECameraRigLayer *pEVar5;
  
  piVar1 = &this->NumEntries;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = &this->BlendStackType;
  pEVar4 = (ECameraBlendStackType *)**(undefined8 **)&param_1->field_0x8;
  if ((ECameraBlendStackType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
    }
  }
  else {
    *pEVar2 = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar5 = (ECameraRigLayer *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar5 + 1 <= (ECameraRigLayer *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->BlendStackLayer = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d55d484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->BlendStackLayer,1);
  return;
}

