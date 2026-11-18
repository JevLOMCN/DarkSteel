// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FGridGenerationKey @ 149f30fe0

FGridGenerationKey * __thiscall
FPCGRuntimeGenScheduler::FGridGenerationKey::FGridGenerationKey
          (FGridGenerationKey *this,uint param_1,TIntVector3<int> *param_2,UPCGComponent *param_3)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPCGComponent *local_res18;
  
  this->bUse2DGrid = false;
  this->GridSize = param_1;
  *(undefined8 *)&(this->GridCoords).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->GridCoords).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  (this->OriginalComponent).ObjectKey = (FObjectKey)0x0;
  if (param_3 != (UPCGComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (this->OriginalComponent).ObjectKey.ObjectIndex = local_res8.ObjectIndex;
    (this->OriginalComponent).ObjectKey.ObjectSerialNumber = local_res8.ObjectSerialNumber;
    (this->CachedLocalComponent).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&(this->CachedLocalComponent).WeakPtr,(FObjectPtr)&local_res8);
    bVar1 = UPCGComponent::Use2DGrid(param_3);
    this->bUse2DGrid = bVar1;
    return this;
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  (this->CachedLocalComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CachedLocalComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->bUse2DGrid = true;
  return this;
}

// GetGridDescriptor @ 149f4abc0

FPCGGridDescriptor * __thiscall
FPCGRuntimeGenScheduler::FGridGenerationKey::GetGridDescriptor
          (FGridGenerationKey *this,FPCGGridDescriptor *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = this->bUse2DGrid;
  __return_storage_ptr__->GridSize = this->GridSize;
  __return_storage_ptr__->bIs2DGrid = bVar1;
  __return_storage_ptr__->bIsRuntime = true;
  __return_storage_ptr__->RuntimeHash = 0;
  (__return_storage_ptr__->Hash).bIsSet = false;
  return __return_storage_ptr__;
}

