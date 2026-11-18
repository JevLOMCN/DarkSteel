// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 14749d2a0

UScriptStruct * __cdecl FAnimNode_AssetPlayerRelevancyBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
                         (UObject *)pUVar1,L"AnimNode_AssetPlayerRelevancyBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton;
}

// GetAnimAsset @ 14749d2e0

UAnimationAsset * __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetAnimAsset(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return (UAnimationAsset *)0x0;
}

// GetAccumulatedTime @ 14749d2f0

float __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetAccumulatedTime(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return 0.0;
}

// SetAccumulatedTime @ 14749d300

void __thiscall
FAnimNode_AssetPlayerRelevancyBase::SetAccumulatedTime
          (FAnimNode_AssetPlayerRelevancyBase *this,float param_1)

{
  return;
}

// GetCurrentAssetLength @ 14749d310

float __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetCurrentAssetLength(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return 0.0;
}

// GetCurrentAssetTime @ 14749d360

float __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetCurrentAssetTime(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return 0.0;
}

// GetCurrentAssetTimePlayRateAdjusted @ 14749d370

float __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetCurrentAssetTimePlayRateAdjusted
          (FAnimNode_AssetPlayerRelevancyBase *this)

{
  return 0.0;
}

// IsLooping @ 14749d380

bool __thiscall
FAnimNode_AssetPlayerRelevancyBase::IsLooping(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return true;
}

// GetIgnoreForRelevancyTest @ 14749d390

bool __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetIgnoreForRelevancyTest
          (FAnimNode_AssetPlayerRelevancyBase *this)

{
  return false;
}

// SetIgnoreForRelevancyTest @ 14749d3a0

bool __thiscall
FAnimNode_AssetPlayerRelevancyBase::SetIgnoreForRelevancyTest
          (FAnimNode_AssetPlayerRelevancyBase *this,bool param_1)

{
  return false;
}

// GetCachedBlendWeight @ 14749d3b0

float __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetCachedBlendWeight(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return 0.0;
}

// ClearCachedBlendWeight @ 14749d3c0

void __thiscall
FAnimNode_AssetPlayerRelevancyBase::ClearCachedBlendWeight(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return;
}

// GetDeltaTimeRecord @ 14749d3d0

FDeltaTimeRecord * __thiscall
FAnimNode_AssetPlayerRelevancyBase::GetDeltaTimeRecord(FAnimNode_AssetPlayerRelevancyBase *this)

{
  return (FDeltaTimeRecord *)0x0;
}

