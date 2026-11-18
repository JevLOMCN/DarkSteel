// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStaticMeshStaticLightingTextureMapping @ 14877bbe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshStaticLightingTextureMapping * __thiscall
FStaticMeshStaticLightingTextureMapping::FStaticMeshStaticLightingTextureMapping
          (FStaticMeshStaticLightingTextureMapping *this,UStaticMeshComponent *param_1,int param_2,
          FStaticLightingMesh *param_3,int param_4,int param_5,int param_6,bool param_7)

{
  UStaticMeshComponent *local_res8;
  
  FStaticLightingTextureMapping::FStaticLightingTextureMapping
            ((FStaticLightingTextureMapping *)this,param_3,(UObject *)param_1,param_4,param_5,
             param_6,true);
  *(undefined ***)this = &_vftable__for__FStaticLightingMapping__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Primitive).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Primitive).WeakPtr,(FObjectPtr)&local_res8);
  this->LODIndex = param_2;
  return this;
}

// GetDescription @ 14879d690

FString * __thiscall
FStaticMeshStaticLightingTextureMapping::GetDescription
          (FStaticMeshStaticLightingTextureMapping *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SMTextureMapping");
  return __return_storage_ptr__;
}

// IsValidMapping @ 1487af7d0

bool __thiscall
FStaticMeshStaticLightingTextureMapping::IsValidMapping
          (FStaticMeshStaticLightingTextureMapping *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Primitive).WeakPtr);
  return bVar1;
}

