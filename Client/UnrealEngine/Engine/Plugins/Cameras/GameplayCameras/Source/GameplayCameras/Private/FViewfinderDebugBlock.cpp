// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FViewfinderDebugBlock @ 14d58ec30

FViewfinderDebugBlock * __thiscall
UE::Cameras::FViewfinderDebugBlock::FViewfinderDebugBlock(FViewfinderDebugBlock *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined ***)this = &___7FViewfinderDebugBlock_Cameras_UE__6B_;
  return this;
}

// GetTypeID @ 14d5abca0

FCameraObjectTypeID * __thiscall
UE::Cameras::FViewfinderDebugBlock::GetTypeID(FViewfinderDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4960

bool __thiscall
UE::Cameras::FViewfinderDebugBlock::IsKindOf
          (FViewfinderDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FViewfinderDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5c1800

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
UE::Cameras::FViewfinderDebugBlock::OnDebugDraw
          (FViewfinderDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FCameraDebugCategories::Viewfinder.Data.ArrayNum + -1;
  FVar1.Data = FCameraDebugCategories::Viewfinder.Data.AllocatorInstance.Data;
  if (FCameraDebugCategories::Viewfinder.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->ActiveCategories,uVar2,&FCameraDebugCategories::Viewfinder);
  if (iVar3 != -1) {
    FViewfinderRenderer::DrawViewfinder(param_2,All);
  }
  return;
}

