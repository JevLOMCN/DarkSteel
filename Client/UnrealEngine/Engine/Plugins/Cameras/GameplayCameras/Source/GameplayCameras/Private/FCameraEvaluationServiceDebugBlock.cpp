// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FCameraEvaluationServiceDebugBlock @ 14d58c820

FCameraEvaluationServiceDebugBlock * __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::FCameraEvaluationServiceDebugBlock
          (FCameraEvaluationServiceDebugBlock *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationService_const_,1> *param_1)

{
  FString *pFVar1;
  FCameraObjectTypeID FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FCameraEvaluationServiceDebugBlock *pFVar6;
  uint *puVar7;
  FCameraObjectTypeRegistry *this_00;
  FCameraObjectTypeInfo *this_01;
  FString *pFVar8;
  FString local_38;
  FString local_28;
  
  pFVar1 = &this->ServiceClassName;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraEvaluationServiceDebugBlock_Cameras_UE__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServiceClassName).Data.ArrayNum = 0;
  (this->ServiceClassName).Data.ArrayMax = 0;
  if (param_1->Object == (FCameraEvaluationService *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FCameraEvaluationServiceDebugBlock *)(*pcVar4)();
      return pFVar6;
    }
  }
  puVar7 = (uint *)(**(code **)param_1->Object->_padding_)();
  FVar2.ID = *puVar7;
  this_00 = FCameraObjectTypeRegistry::Get();
  this_01 = FCameraObjectTypeRegistry::GetTypeInfo(this_00,FVar2);
  bVar5 = this_01 == (FCameraObjectTypeInfo *)0x0;
  if (bVar5) {
    pFVar8 = ::FString::FString(&local_38,L"<no type info>");
  }
  else {
    pFVar8 = ::FName::ToString(&this_01->TypeName,&local_28);
  }
  if (pFVar1 != pFVar8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ServiceClassName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (this->ServiceClassName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (bVar5) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FCameraEvaluationServiceDebugBlock @ 14d58c970

FCameraEvaluationServiceDebugBlock * __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::FCameraEvaluationServiceDebugBlock
          (FCameraEvaluationServiceDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FCameraEvaluationServiceDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ServiceClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServiceClassName).Data.ArrayNum = 0;
  (this->ServiceClassName).Data.ArrayMax = 0;
  return this;
}

// GetTypeID @ 14d5abb50

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::GetTypeID(FCameraEvaluationServiceDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b46c0

bool __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::IsKindOf
          (FCameraEvaluationServiceDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationServiceDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5ba3f0

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
UE::Cameras::FCameraEvaluationServiceDebugBlock::OnDebugDraw
          (FCameraEvaluationServiceDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  if ((this->ServiceClassName).Data.ArrayNum != 0) {
    FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[%s]{cam_default} ");
    return;
  }
  FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[%s]{cam_default} ");
  return;
}

// OnSerialize @ 14d5c3650

void __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::OnSerialize
          (FCameraEvaluationServiceDebugBlock *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->ServiceClassName);
  return;
}

