// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 148585570

UScriptStruct * __cdecl FSingleAnimationPlayData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSingleAnimationPlayData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSingleAnimationPlayData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSingleAnimationPlayData,(UObject *)pUVar1,
                         L"SingleAnimationPlayData");
  }
  return Z_Registration_Info_UScriptStruct_FSingleAnimationPlayData.OuterSingleton;
}

// Initialize @ 1485cd8e0

void __thiscall
FSingleAnimationPlayData::Initialize
          (FSingleAnimationPlayData *this,UAnimSingleNodeInstance *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x390))
            (param_1,(this->AnimToPlay).field0_0x0.DebugPtr,1,__real_3f800000);
  UAnimSingleNodeInstance::SetPosition(param_1,this->SavedPosition,false);
  UAnimSingleNodeInstance::SetPlayRate(param_1,this->SavedPlayRate);
  UAnimSingleNodeInstance::SetPlaying(param_1,this->bSavedPlaying);
  UAnimSingleNodeInstance::SetLooping(param_1,this->bSavedLooping);
  return;
}

// PopulateFrom @ 1485d1fa0

void __thiscall
FSingleAnimationPlayData::PopulateFrom
          (FSingleAnimationPlayData *this,UAnimSingleNodeInstance *param_1)

{
  bool bVar1;
  UAnimationAsset *pUVar2;
  float fVar3;
  
  pUVar2 = UAnimSingleNodeInstance::GetCurrentAsset(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->AnimToPlay).field0_0x0.DebugPtr = pUVar2;
  fVar3 = UAnimSingleNodeInstance::GetCurrentTime(param_1);
  this->SavedPosition = fVar3;
  fVar3 = UAnimSingleNodeInstance::GetPlayRate(param_1);
  this->SavedPlayRate = fVar3;
  bVar1 = UAnimSingleNodeInstance::IsPlaying(param_1);
  this->bSavedPlaying = 0;
  *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | (uint)bVar1 * 2;
  bVar1 = UAnimSingleNodeInstance::IsLooping(param_1);
  this->bSavedLooping = 0;
  *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | (uint)bVar1;
  return;
}

// ValidatePosition @ 1485df800

void __thiscall FSingleAnimationPlayData::ValidatePosition(FSingleAnimationPlayData *this)

{
  UAnimationAsset *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((this->AnimToPlay).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if ((bVar2) &&
       (pUVar1 = (this->AnimToPlay).field0_0x0.DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      fVar5 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))();
    }
  }
  fVar4 = this->SavedPosition;
  if (fVar5 <= this->SavedPosition) {
    fVar4 = fVar5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->SavedPosition = fVar4;
  return;
}

