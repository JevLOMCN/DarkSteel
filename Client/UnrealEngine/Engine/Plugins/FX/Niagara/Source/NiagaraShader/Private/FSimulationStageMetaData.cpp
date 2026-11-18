// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 2

// StaticStruct @ 148de8480

UScriptStruct * __cdecl FSimulationStageMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimulationStageMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FSimulationStageMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimulationStageMetaData,(UObject *)pUVar1,
                         L"SimulationStageMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FSimulationStageMetaData.OuterSingleton;
}

// FSimulationStageMetaData @ 148df1170

FSimulationStageMetaData * __thiscall
FSimulationStageMetaData::FSimulationStageMetaData(FSimulationStageMetaData *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  (this->SimulationStageName).ComparisonIndex = 0;
  (this->SimulationStageName).Number = 0;
  (this->EnabledBinding).ComparisonIndex = 0;
  (this->EnabledBinding).Number = 0;
  *(undefined8 *)&(this->ElementCount).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->bWritesParticles = 0;
  this->bGpuIndirectDispatch = 0;
  this->bParticleIterationStateEnabled = 0;
  this->bPartialParticleUpdate = 0;
  (this->ElementCount).field0_0x0._s_0.Z = uVar2;
  (this->ElementCountXBinding).ComparisonIndex = 0;
  (this->ElementCountXBinding).Number = 0;
  (this->ElementCountYBinding).ComparisonIndex = 0;
  (this->ElementCountYBinding).Number = 0;
  (this->ElementCountZBinding).ComparisonIndex = 0;
  (this->ElementCountZBinding).Number = 0;
  (this->IterationDataInterface).ComparisonIndex = 0;
  (this->IterationDataInterface).Number = 0;
  (this->IterationDirectBinding).ComparisonIndex = 0;
  (this->IterationDirectBinding).Number = 0;
  (this->ParticleIterationStateBinding).ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).Number = 0;
  (this->ParticleIterationStateRange).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OutputDestinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDestinations).ArrayNum = 0;
  (this->OutputDestinations).ArrayMax = 0;
  (this->InputDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataInterfaces).ArrayNum = 0;
  (this->InputDataInterfaces).ArrayMax = 0;
  (this->NumIterationsBinding).Number = 0;
  *(undefined8 *)&(this->GpuDispatchNumThreads).field0_0x0 = 0;
  (this->GpuDispatchNumThreads).field0_0x0._s_0.Z = 0;
  this->IterationSourceType = Particles;
  this->ExecuteBehavior = Always;
  this->ParticleIterationStateComponentIndex = -1;
  this->NumIterations = 1;
  (this->NumIterationsBinding).ComparisonIndex = 0;
  this->GpuDispatchType = OneD;
  this->GpuDirectDispatchElementType = NumThreads;
  return this;
}

