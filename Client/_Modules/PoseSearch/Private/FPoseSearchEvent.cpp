// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 4

// StaticStruct @ 14a8d69e0

UScriptStruct * __cdecl FPoseSearchEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchEvent,(UObject *)pUVar1,
                         L"PoseSearchEvent");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchEvent.OuterSingleton;
}

// GetPlayRateOverriddenEvent @ 14a8fb4c0

FPoseSearchEvent * __thiscall
FPoseSearchEvent::GetPlayRateOverriddenEvent
          (FPoseSearchEvent *this,FPoseSearchEvent *__return_storage_ptr__,FFloatInterval *param_1)

{
  FFloatInterval FVar1;
  bool bVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  
  bVar2 = this->bUsePlayRateRangeOverride;
  fVar3 = this->TimeToEvent;
  bVar4 = this->bEnablePoseFilters;
  bVar5 = this->bUsePlayRateRangeOverride;
  sVar6 = this->_padding_;
  FVar1 = this->PlayRateRangeOverride;
  (__return_storage_ptr__->EventTag).TagName = (this->EventTag).TagName;
  __return_storage_ptr__->TimeToEvent = fVar3;
  __return_storage_ptr__->bEnablePoseFilters = bVar4;
  __return_storage_ptr__->bUsePlayRateRangeOverride = bVar5;
  __return_storage_ptr__->_padding_ = sVar6;
  __return_storage_ptr__->PlayRateRangeOverride = FVar1;
  if (bVar2 == false) {
    __return_storage_ptr__->PlayRateRangeOverride = *param_1;
  }
  return __return_storage_ptr__;
}

// IsValid @ 14a902660

bool __thiscall FPoseSearchEvent::IsValid(FPoseSearchEvent *this)

{
  return (this->EventTag).TagName != (FName)0x0;
}

// Reset @ 14a907330

void __thiscall FPoseSearchEvent::Reset(FPoseSearchEvent *this)

{
  (this->EventTag).TagName = (FName)0x0;
  this->TimeToEvent = 0.0;
  return;
}

