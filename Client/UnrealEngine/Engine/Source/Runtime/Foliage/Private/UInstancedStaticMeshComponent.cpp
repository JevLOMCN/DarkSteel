// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 8

// IsNavigationRelevant`adjustor{592}' @ 145ee78ac

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual bool __cdecl
   UInstancedStaticMeshComponent::IsNavigationRelevant`adjustor{592}' (void)const __ptr64 */

bool __thiscall
UInstancedStaticMeshComponent::IsNavigationRelevant_adjustor_592__
          (UInstancedStaticMeshComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant
                    ((UInstancedStaticMeshComponent *)
                     &this[-1].PrimitiveInstanceDataManager.field_0x10);
  return bVar1;
}

// SupportsPartialNavigationUpdate @ 145eed250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SupportsPartialNavigationUpdate(UInstancedStaticMeshComponent *this)

{
  return true;
}

// SupportsStaticLighting @ 145eed270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SupportsStaticLighting(UInstancedStaticMeshComponent *this)

{
  return true;
}

// _getUObject @ 145eef360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __thiscall UInstancedStaticMeshComponent::_getUObject(UInstancedStaticMeshComponent *this)

{
  return (UObject *)&this[-1].CachedBounds[2].Value.BoxExtent;
}

// _getUObject`adjustor{552}' @ 145eef36c

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInstancedStaticMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UInstancedStaticMeshComponent::_getUObject_adjustor_552__(UInstancedStaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInstancedStaticMeshComponent *)
                       &this[-1].PrimitiveInstanceDataManager.InstanceUpdateTracker.Removed);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 145eef380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInstancedStaticMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UInstancedStaticMeshComponent::_getUObject_adjustor_560__(UInstancedStaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInstancedStaticMeshComponent *)
                       &this[-1].PrimitiveInstanceDataManager.InstanceUpdateTracker.Data.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 145eef394

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInstancedStaticMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UInstancedStaticMeshComponent::_getUObject_adjustor_568__(UInstancedStaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInstancedStaticMeshComponent *)
                       &this[-1].PrimitiveInstanceDataManager.InstanceUpdateTracker);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1576}' @ 145eef3a8

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInstancedStaticMeshComponent::_getUObject`adjustor{1576}' (void)const __ptr64 */

UObject * __thiscall
UInstancedStaticMeshComponent::_getUObject_adjustor_1576__(UInstancedStaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInstancedStaticMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

