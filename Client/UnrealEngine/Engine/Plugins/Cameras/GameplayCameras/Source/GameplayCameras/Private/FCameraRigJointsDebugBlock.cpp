// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FCameraRigJointsDebugBlock @ 14d58d9d0

FCameraRigJointsDebugBlock * __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::FCameraRigJointsDebugBlock
          (FCameraRigJointsDebugBlock *this,FCameraRigJoints *param_1,FCameraVariableTable *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCameraRigJointsDebugBlock *pFVar4;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar5;
  FString local_80;
  TRotator<double> local_68;
  TQuat<double> local_48;
  undefined8 local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraRigJointsDebugBlock_Cameras_UE__6B_;
  (this->Entries).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 2;
  FVar5 = (param_1->Joints).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Joints).ArrayNum;
  if (FVar5 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    param_1 = (FCameraRigJoints *)FVar5;
  }
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCameraRigJointsDebugBlock *)(*pcVar2)();
    return pFVar4;
  }
  FVar5 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)iVar1 * 0x70 + (longlong)param_1)
  ;
  for (; (ForElementType<UE::Cameras::FCameraRigJoint>)param_1 != FVar5;
      param_1 = (FCameraRigJoints *)((longlong)param_1 + 0x70)) {
    local_18 = *(undefined8 *)((longlong)param_1 + 0x40);
    local_48.Z = *(double *)((longlong)param_1 + 0x20);
    local_48.W = *(double *)((longlong)param_1 + 0x28);
    local_48.X = *(double *)((longlong)param_1 + 0x10);
    local_48.Y = *(double *)((longlong)param_1 + 0x18);
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    UE::Math::TQuat<double>::Rotator(&local_48,&local_68);
    ::FString::operator=(&local_80,L"<Unknown>");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// FCameraRigJointsDebugBlock @ 14d58db40

FCameraRigJointsDebugBlock * __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::FCameraRigJointsDebugBlock
          (FCameraRigJointsDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FCameraRigJointsDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 2;
  return this;
}

// GetTypeID @ 14d5abbb0

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::GetTypeID(FCameraRigJointsDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4780

bool __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::IsKindOf
          (FCameraRigJointsDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraRigJointsDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bb3c0

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
UE::Cameras::FCameraRigJointsDebugBlock::OnDebugDraw
          (FCameraRigJointsDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  int iVar1;
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  
  FCameraDebugRenderer::AddText(param_2,L"%d joints");
  FCameraDebugRenderer::AddIndent(param_2);
  FVar2 = (this->Entries).AllocatorInstance.SecondaryData;
  iVar1 = (this->Entries).ArrayNum;
  if (FVar2 == (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
    FVar2 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)&this->Entries;
  }
  lVar3 = (longlong)FVar2 + 0x40;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar3 + -0x40 == (longlong)FVar2 + (longlong)iVar1 * 0x48) break;
    ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FCameraDebugRenderer::AddText
              (param_2,
               L"location {cam_notice}%s{cam_default}  rotation {cam_notice}%s{cam_default}  variable {cam_notice2}%s{cam_passive} [%d]{cam_default}"
              );
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    lVar3 = lVar3 + 0x48;
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  return;
}

// OnSerialize @ 14d5c3760

void __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::OnSerialize
          (FCameraRigJointsDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->Entries);
  return;
}

