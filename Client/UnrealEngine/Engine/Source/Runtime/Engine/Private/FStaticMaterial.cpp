// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148702d30

UScriptStruct * __cdecl FStaticMaterial::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMaterial.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMaterial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterial,(UObject *)pUVar1,
                         L"StaticMaterial");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMaterial.OuterSingleton;
}

// FStaticMaterial @ 148711cf0

FStaticMaterial * __thiscall
FStaticMaterial::FStaticMaterial
          (FStaticMaterial *this,UMaterialInterface *param_1,FName param_2,
          UMaterialInterface *param_3)

{
  UMaterialInterface *pUVar1;
  undefined4 uVar2;
  
  (this->MaterialInterface).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->MaterialSlotName = param_2;
  (this->ImportedMaterialSlotName).ComparisonIndex = 0;
  (this->ImportedMaterialSlotName).Number = 0;
  (this->UVChannelData).bInitialized = false;
  (this->UVChannelData).bOverrideDensities = false;
  *(undefined2 *)&(this->UVChannelData).field_0x2 = 0;
  (this->UVChannelData).LocalUVDensities[0] = 0.0;
  (this->UVChannelData).LocalUVDensities[1] = 0.0;
  (this->UVChannelData).LocalUVDensities[2] = 0.0;
  (this->UVChannelData).LocalUVDensities[3] = 0.0;
  (this->OverlayMaterialInterface).field0_0x0.DebugPtr = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  pUVar1 = (this->MaterialInterface).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMaterialInterface *)0x0) && (this->MaterialSlotName == (FName)0x0)) {
    uVar2 = *(undefined4 *)((longlong)&pUVar1->_padding_ + 4);
    (this->MaterialSlotName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar1->_padding_;
    (this->MaterialSlotName).Number = uVar2;
  }
  return this;
}

// FStaticMaterial @ 148711d80

FStaticMaterial * __thiscall FStaticMaterial::FStaticMaterial(FStaticMaterial *this)

{
  (this->MaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialSlotName).ComparisonIndex = 0;
  (this->MaterialSlotName).Number = 0;
  (this->ImportedMaterialSlotName).ComparisonIndex = 0;
  (this->ImportedMaterialSlotName).Number = 0;
  (this->UVChannelData).bInitialized = false;
  (this->UVChannelData).bOverrideDensities = false;
  *(undefined2 *)&(this->UVChannelData).field_0x2 = 0;
  (this->UVChannelData).LocalUVDensities[0] = 0.0;
  (this->UVChannelData).LocalUVDensities[1] = 0.0;
  (this->UVChannelData).LocalUVDensities[2] = 0.0;
  (this->UVChannelData).LocalUVDensities[3] = 0.0;
  (this->OverlayMaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

