// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1475163e0

UScriptStruct * __cdecl FAssetMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetMapping.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAssetMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetMapping,(UObject *)pUVar1,L"AssetMapping");
  }
  return Z_Registration_Info_UScriptStruct_FAssetMapping.OuterSingleton;
}

// IsValidMapping @ 14756b640

bool __thiscall FAssetMapping::IsValidMapping(FAssetMapping *this)

{
  UAnimationAsset *pUVar1;
  UAnimationAsset *pUVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  pUVar1 = (this->SourceAsset).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UAnimationAsset *)0x0) &&
       (pUVar2 = (this->TargetAsset).field0_0x0.DebugPtr, pUVar2 != (UAnimationAsset *)0x0)) &&
      (pUVar1 != pUVar2)) &&
     ((pUVar1->_padding_ == pUVar2->_padding_ &&
      ((pUVar1->Skeleton).field0_0x0.DebugPtr == (pUVar2->Skeleton).field0_0x0.DebugPtr)))) {
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x2d0);
    cVar4 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    cVar5 = (*pcVar3)(pUVar2);
    if (cVar4 == cVar5) {
      return true;
    }
  }
  return false;
}

// IsValidMapping @ 14756b6c0

bool __cdecl FAssetMapping::IsValidMapping(UAnimationAsset *param_1,UAnimationAsset *param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  
  if ((((param_1 != (UAnimationAsset *)0x0) && (param_2 != (UAnimationAsset *)0x0)) &&
      (param_1 != param_2)) &&
     ((param_1->_padding_ == param_2->_padding_ &&
      ((param_1->Skeleton).field0_0x0.DebugPtr == (param_2->Skeleton).field0_0x0.DebugPtr)))) {
    pcVar1 = *(code **)(param_2->_padding_ + 0x2d0);
    cVar2 = (**(code **)(param_1->_padding_ + 0x2d0))();
    cVar3 = (*pcVar1)(param_2);
    if (cVar2 == cVar3) {
      return true;
    }
  }
  return false;
}

// SetTargetAsset @ 14757a480

bool __thiscall FAssetMapping::SetTargetAsset(FAssetMapping *this,UAnimationAsset *param_1)

{
  UAnimationAsset *pUVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  
  pUVar1 = (this->SourceAsset).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UAnimationAsset *)0x0) && (param_1 != (UAnimationAsset *)0x0)) &&
      (pUVar1 != param_1)) &&
     ((pUVar1->_padding_ == param_1->_padding_ &&
      ((pUVar1->Skeleton).field0_0x0.DebugPtr == (param_1->Skeleton).field0_0x0.DebugPtr)))) {
    pcVar2 = *(code **)(param_1->_padding_ + 0x2d0);
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    cVar4 = (*pcVar2)(param_1);
    if (cVar3 == cVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->TargetAsset).field0_0x0.DebugPtr = param_1;
      return true;
    }
  }
  return false;
}

