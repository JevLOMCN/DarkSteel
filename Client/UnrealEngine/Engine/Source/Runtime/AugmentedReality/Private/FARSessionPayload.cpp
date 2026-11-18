// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 5

// StaticStruct @ 14cf2e4b0

UScriptStruct * __cdecl FARSessionPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARSessionPayload.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARSessionPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARSessionPayload,(UObject *)pUVar1,
                         L"ARSessionPayload");
  }
  return Z_Registration_Info_UScriptStruct_FARSessionPayload.OuterSingleton;
}

// FromSessionConfig @ 14cf4f720

void __thiscall
FARSessionPayload::FromSessionConfig(FARSessionPayload *this,UARSessionConfig *param_1)

{
  UMaterialInterface *pUVar1;
  
  if (param_1->bGenerateMeshDataFromTrackedGeometry != false) {
    this->ConfigFlags = this->ConfigFlags | 1;
  }
  if (param_1->bGenerateCollisionForMeshData != false) {
    this->ConfigFlags = this->ConfigFlags | 4;
  }
  if (param_1->bGenerateNavMeshForMeshData != false) {
    this->ConfigFlags = this->ConfigFlags | 8;
  }
  if (param_1->bUseMeshDataForOcclusion != false) {
    this->ConfigFlags = this->ConfigFlags | 0x10;
  }
  if (param_1->bRenderMeshDataInWireframe != false) {
    this->ConfigFlags = this->ConfigFlags | 2;
  }
  pUVar1 = (param_1->DefaultMeshMaterial).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = pUVar1;
  pUVar1 = (param_1->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = pUVar1;
  return;
}

// HasFlag @ 14cf569d0

bool __thiscall FARSessionPayload::HasFlag(FARSessionPayload *this,EARSessionConfigFlags param_1)

{
  return ((EARSessionConfigFlags)this->ConfigFlags & param_1) != None;
}

// SetFlag @ 14cf5fd90

void __thiscall FARSessionPayload::SetFlag(FARSessionPayload *this,EARSessionConfigFlags param_1)

{
  this->ConfigFlags = this->ConfigFlags | (uint)param_1;
  return;
}

// ShouldCreateMeshComponent @ 14cf609b0

bool __thiscall FARSessionPayload::ShouldCreateMeshComponent(FARSessionPayload *this)

{
  return (bool)((byte)this->ConfigFlags & 1);
}

