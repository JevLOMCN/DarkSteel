// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// FFastGeoStaticMeshComponent @ 14da19700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoStaticMeshComponent * __thiscall
FFastGeoStaticMeshComponent::FFastGeoStaticMeshComponent
          (FFastGeoStaticMeshComponent *this,int param_1,FFastGeoElementType *param_2)

{
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x3c0 = 0;
  *(undefined8 *)&this->field_0x3c8 = 0;
  this->field_0x3d0 = 0;
  *(undefined8 *)&this->field_0x3d8 = 0;
  *(undefined8 *)&this->field_0x3e0 = 0;
  *(undefined ***)this = &___7FFastGeoStaticMeshComponent__6B_;
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc(&this->SceneProxyDesc);
  return this;
}

// ~FFastGeoStaticMeshComponent @ 14da1b940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoStaticMeshComponent::~FFastGeoStaticMeshComponent(FFastGeoStaticMeshComponent *this)

{
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&this->SceneProxyDesc);
  if (*(void **)&this->field_0x3d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3d8);
  }
  if (*(void **)&this->field_0x3c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3c0);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// GetSceneProxyDesc @ 14da2b7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoStaticMeshComponent::GetSceneProxyDesc(FFastGeoStaticMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSceneProxyDesc @ 14da2b7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoStaticMeshComponent::GetSceneProxyDesc(FFastGeoStaticMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bbb0

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoStaticMeshComponent::GetStaticMeshSceneProxyDesc(FFastGeoStaticMeshComponent *this)

{
  return &this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bbc0

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoStaticMeshComponent::GetStaticMeshSceneProxyDesc(FFastGeoStaticMeshComponent *this)

{
  return &this->SceneProxyDesc;
}

