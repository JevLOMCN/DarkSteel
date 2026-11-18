// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// Call @ 14da706a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPVMeshBuilder::GenerateDynamicMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined1 auStack_b8 [160];
  int iStack_18;
  int iStack_14;
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *pTStack_10;
  
  iStack_14 = **(int **)((longlong)param_1 + 8);
  iStack_18 = **(int **)param_1;
  auStack_b8._8_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._16_8_ = 0;
  auStack_b8._24_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._32_8_ = 0;
  auStack_b8._40_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._48_8_ = 0;
  auStack_b8._56_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._64_8_ = 0;
  auStack_b8._72_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._80_8_ = 0;
  auStack_b8._88_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._96_8_ = 0;
  auStack_b8._104_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._112_8_ = 0;
  auStack_b8._120_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._128_8_ = 0;
  auStack_b8._136_8_ = (FScriptContainerElement *)0x0;
  auStack_b8._144_8_ = 0;
  auStack_b8[0x98] = false;
  auStack_b8._0_8_ = &___7FPVMeshGenerator__6B_;
  pTStack_10 = *(TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> **)
                ((longlong)param_1 + 0x10);
  FPVMeshGenerator::Generate((FPVMeshGenerator *)auStack_b8);
  UE::Geometry::FDynamicMesh3::Copy(param_2,(FMeshShapeGenerator *)auStack_b8);
  auStack_b8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)auStack_b8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._136_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._120_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._104_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._88_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._72_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._56_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._40_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._24_8_);
  }
  if ((FScriptContainerElement *)auStack_b8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_b8._8_8_);
  }
  return;
}

// Call @ 14da706b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPVMeshBuilder::GetLocalDynamicMeshData'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FPVMeshBuilder::GetLocalDynamicMeshData'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

