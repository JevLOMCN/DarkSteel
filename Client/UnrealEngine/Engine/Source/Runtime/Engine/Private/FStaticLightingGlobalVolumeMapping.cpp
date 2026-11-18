// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStaticLightingGlobalVolumeMapping @ 147ea6540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticLightingGlobalVolumeMapping * __thiscall
FStaticLightingGlobalVolumeMapping::FStaticLightingGlobalVolumeMapping
          (FStaticLightingGlobalVolumeMapping *this,FStaticLightingMesh *param_1,UObject *param_2,
          int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_stack_00000038;
  
  if (in_stack_00000038 != 0) {
    *(undefined **)&this->field_0x8 = &_vbtable_;
    *(undefined ***)&this->field_0x38 = &___7FRefCountedObject__6B_;
    *(undefined4 *)&this->field_0x40 = 0;
  }
  *(undefined ***)this = &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  *(uint *)&this->field_0x20 = *(uint *)&this->field_0x20 & 0xfffffffc;
  *(undefined ***)this = &FStaticLightingTextureMapping::_vftable__for__FStaticLightingMapping__;
  *(FStaticLightingMesh **)&this->field_0x10 = param_1;
  *(UObject **)&this->field_0x18 = param_2;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &FStaticLightingTextureMapping::_vftable__for__FRefCountedObject__;
  iVar1 = AdjustTextureMappingSize(param_3);
  *(int *)&this->field_0x28 = iVar1;
  iVar1 = AdjustTextureMappingSize(param_4);
  *(int *)&this->field_0x2c = iVar1;
  *(int *)&this->field_0x30 = param_5;
  *(undefined ***)this = &_vftable__for__FStaticLightingMapping__;
  this->field_0x34 = 1;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  return this;
}

// Apply @ 147eaf7e0

void __thiscall
FStaticLightingGlobalVolumeMapping::Apply
          (FStaticLightingGlobalVolumeMapping *this,FQuantizedLightmapData *param_1,
          TMap<ULightComponent_*,FShadowMapData2D_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,FShadowMapData2D_*,0>_>
          *param_2,FStaticLightingBuildContext *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticLighting.h"
                     ,0x1df,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetDescription @ 147ebf4e0

FString * __thiscall
FStaticLightingGlobalVolumeMapping::GetDescription
          (FStaticLightingGlobalVolumeMapping *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"VolumeMapping");
  return __return_storage_ptr__;
}

// IsValidMapping @ 147ece050

bool __thiscall
FStaticLightingGlobalVolumeMapping::IsValidMapping(FStaticLightingGlobalVolumeMapping *this)

{
  return true;
}

