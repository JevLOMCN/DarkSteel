// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNeuralProfileStruct @ 147f2a180

FNeuralProfileStruct * __thiscall
FNeuralProfileStruct::FNeuralProfileStruct(FNeuralProfileStruct *this,FNeuralProfileStruct *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  this->InputFormat = param_1->InputFormat;
  this->OutputFormat = param_1->OutputFormat;
  this->RuntimeType = param_1->RuntimeType;
  pUVar1 = (param_1->NNEModelData).field0_0x0.DebugPtr;
  (this->NNEModelData).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar2 = *(undefined8 *)((longlong)&(param_1->InputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->InputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->InputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->InputDimension).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OutputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->OutputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->OutputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutputDimension).field0_0x0 + 8) = uVar2;
  this->BatchSizeOverride = param_1->BatchSizeOverride;
  this->TileSize = param_1->TileSize;
  (this->TileOverlap).field0_0x0 = (param_1->TileOverlap).field0_0x0;
  this->TileOverlapResolveType = param_1->TileOverlapResolveType;
  return this;
}

// StaticStruct @ 148431760

UScriptStruct * __cdecl FNeuralProfileStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNeuralProfileStruct,(UObject *)pUVar1,
                         L"NeuralProfileStruct");
  }
  return Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.OuterSingleton;
}

// FNeuralProfileStruct @ 148441930

FNeuralProfileStruct * __thiscall
FNeuralProfileStruct::FNeuralProfileStruct(FNeuralProfileStruct *this,FNeuralProfileStruct *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  this->InputFormat = param_1->InputFormat;
  this->OutputFormat = param_1->OutputFormat;
  this->RuntimeType = param_1->RuntimeType;
  pUVar1 = (param_1->NNEModelData).field0_0x0.DebugPtr;
  (this->NNEModelData).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar2 = *(undefined8 *)((longlong)&(param_1->InputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->InputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->InputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->InputDimension).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OutputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->OutputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->OutputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutputDimension).field0_0x0 + 8) = uVar2;
  this->BatchSizeOverride = param_1->BatchSizeOverride;
  this->TileSize = param_1->TileSize;
  (this->TileOverlap).field0_0x0 = (param_1->TileOverlap).field0_0x0;
  this->TileOverlapResolveType = param_1->TileOverlapResolveType;
  return this;
}

// operator= @ 1484473a0

FNeuralProfileStruct * __thiscall
FNeuralProfileStruct::operator=(FNeuralProfileStruct *this,FNeuralProfileStruct *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  this->InputFormat = param_1->InputFormat;
  this->OutputFormat = param_1->OutputFormat;
  this->RuntimeType = param_1->RuntimeType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->NNEModelData).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->NNEModelData).field0_0x0 = (param_1->NNEModelData).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->InputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->InputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->InputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->InputDimension).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OutputDimension).field0_0x0 + 8);
  *(undefined8 *)&(this->OutputDimension).field0_0x0 =
       *(undefined8 *)&(param_1->OutputDimension).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutputDimension).field0_0x0 + 8) = uVar2;
  this->BatchSizeOverride = param_1->BatchSizeOverride;
  this->TileSize = param_1->TileSize;
  (this->TileOverlap).field0_0x0 = (param_1->TileOverlap).field0_0x0;
  this->TileOverlapResolveType = param_1->TileOverlapResolveType;
  return this;
}

