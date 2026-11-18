// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a86de30

UScriptStruct * __cdecl FChooserPlayerSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserPlayerSettings,(UObject *)pUVar1,
                         L"ChooserPlayerSettings");
  }
  return Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton;
}

// operator= @ 14a87f0c0

FChooserPlayerSettings * __thiscall
FChooserPlayerSettings::operator=(FChooserPlayerSettings *this,FChooserPlayerSettings *param_1)

{
  UBlendProfile *pUVar1;
  UObject *pUVar2;
  double dVar3;
  
  this->bMirror = param_1->bMirror;
  this->StartTime = param_1->StartTime;
  this->bForceLooping = param_1->bForceLooping;
  this->PlaybackRate = param_1->PlaybackRate;
  FAnimCurveOverrideList::operator=(&this->CurveOverrides,&param_1->CurveOverrides);
  this->BlendTime = param_1->BlendTime;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->BlendProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BlendProfile).field0_0x0 = (param_1->BlendProfile).field0_0x0;
  this->BlendOption = param_1->BlendOption;
  this->bUseInertialBlend = param_1->bUseInertialBlend;
  this->bForceBlendTo = param_1->bForceBlendTo;
  this->MinDeltaTimeToForceBlendTo = param_1->MinDeltaTimeToForceBlendTo;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->PlayingAsset).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->PlayingAsset).field0_0x0 = (param_1->PlayingAsset).field0_0x0;
  this->PlayingAssetAccumulatedTime = param_1->PlayingAssetAccumulatedTime;
  this->bIsPlayingAssetMirrored = param_1->bIsPlayingAssetMirrored;
  dVar3 = (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.Y;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.X =
       (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.X;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Y = dVar3;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Z =
       (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.Z;
  this->AnimationUpdateContext = param_1->AnimationUpdateContext;
  return this;
}

// Serialize @ 14a88ebe0

bool __thiscall FChooserPlayerSettings::Serialize(FChooserPlayerSettings *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (0 < *(int *)&param_1->field_0x30)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->BlendOption = Linear;
    }
  }
  return false;
}

// Serialize @ 14a88ec40

bool __thiscall
FChooserPlayerSettings::Serialize(FChooserPlayerSettings *this,FStructuredArchiveSlot param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if ((this_00->ArIsLoading != 0) && (0 < this_00->ArSerializingDefaults)) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->BlendOption = Linear;
    }
  }
  return false;
}

