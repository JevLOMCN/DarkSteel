// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c8c90

UScriptStruct * __cdecl FChaosVDDebugShapeDataContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugShapeDataContainer,(UObject *)pUVar1
                         ,L"ChaosVDDebugShapeDataContainer");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.OuterSingleton;
}

// ~FChaosVDDebugShapeDataContainer @ 1436d57b0

void __thiscall
FChaosVDDebugShapeDataContainer::~FChaosVDDebugShapeDataContainer
          (FChaosVDDebugShapeDataContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
            ((TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *)
             (this->RecordedDebugDrawImplicitObjects).AllocatorInstance.Data,
             (this->RecordedDebugDrawImplicitObjects).ArrayNum);
  pFVar1 = (this->RecordedDebugDrawImplicitObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
            ((TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *)
             (this->RecordedDebugDrawSpheres).AllocatorInstance.Data,
             (this->RecordedDebugDrawSpheres).ArrayNum);
  pFVar1 = (this->RecordedDebugDrawSpheres).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
            ((TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *)
             (this->RecordedDebugDrawLines).AllocatorInstance.Data,
             (this->RecordedDebugDrawLines).ArrayNum);
  pFVar1 = (this->RecordedDebugDrawLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
            ((TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *)
             (this->RecordedDebugDrawBoxes).AllocatorInstance.Data,
             (this->RecordedDebugDrawBoxes).ArrayNum);
  pFVar1 = (this->RecordedDebugDrawBoxes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

