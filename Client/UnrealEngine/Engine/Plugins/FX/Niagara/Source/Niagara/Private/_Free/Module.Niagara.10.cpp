// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 679

// BoolStructs'' @ 141185850

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::BoolStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::BoolStructs__);
  return;
}

// DataInstance_Alive'' @ 141185870

void __cdecl `dynamic_initializer_for_'INiagaraModule::DataInstance_Alive__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::DataInstance_Alive._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::DataInstance_Alive._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::DataInstance_Alive.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::DataInstance_Alive.VarData.ArrayNum = 0;
  INiagaraModule::DataInstance_Alive.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::DataInstance_Alive__);
  return;
}

// DeprecatedTagDefinition'' @ 1411858d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::DeprecatedTagDefinition__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  FGuid local_48;
  FText local_38;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  local_28 = FLinearColor::Black.field0_0x0;
  pFVar1 = FText::GetEmpty();
  local_38.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar1->Flags;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"NiagaraModule",L"DeprecatedDisplayName",L"Deprecated");
  local_48.A = 0xf1f2f2fb;
  local_48.B = 0x50c64af9;
  local_48.C = 0xb6bce631;
  local_48.D = 0x32c4cc61;
  FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
            (&INiagaraModule::DeprecatedTagDefinition,pFVar1,7,&local_38,Internal,
             (FLinearColor *)&local_28._s_0,&local_48);
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::DeprecatedTagDefinition__);
  return;
}

// Emitter_Age'' @ 1411859b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_Age__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_Age._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_Age._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_Age.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_Age.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_Age.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_Age__);
  return;
}

// Emitter_Determinism'' @ 141185a10

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_Determinism__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_Determinism._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_Determinism._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_Determinism.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_Determinism.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_Determinism.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_Determinism__);
  return;
}

// Emitter_InterpSpawnStartDt'' @ 141185a70

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_InterpSpawnStartDt__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_InterpSpawnStartDt._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_InterpSpawnStartDt._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_InterpSpawnStartDt.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_InterpSpawnStartDt.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_InterpSpawnStartDt.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_InterpSpawnStartDt__);
  return;
}

// Emitter_InterpolatedSpawn'' @ 141185ad0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_InterpolatedSpawn__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_InterpolatedSpawn._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_InterpolatedSpawn._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_InterpolatedSpawn.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_InterpolatedSpawn.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_InterpolatedSpawn.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_InterpolatedSpawn__);
  return;
}

// Emitter_LocalSpace'' @ 141185b30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_LocalSpace__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_LocalSpace._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_LocalSpace._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_LocalSpace.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Emitter_LocalSpace.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_LocalSpace.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_LocalSpace__);
  return;
}

// Emitter_OverrideGlobalSpawnCountScale'' @ 141185b90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_OverrideGlobalSpawnCountScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_OverrideGlobalSpawnCountScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_OverrideGlobalSpawnCountScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_OverrideGlobalSpawnCountScale__);
  return;
}

// Emitter_RandomSeed'' @ 141185bf0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_RandomSeed__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_RandomSeed._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_RandomSeed._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_RandomSeed.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Emitter_RandomSeed.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_RandomSeed.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_RandomSeed__);
  return;
}

// Emitter_SimulationTarget'' @ 141185c50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_SimulationTarget__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_SimulationTarget._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_SimulationTarget._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_SimulationTarget.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_SimulationTarget.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_SimulationTarget.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SimulationTarget__);
  return;
}

// Emitter_SpawnGroup'' @ 141185cb0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_SpawnGroup__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_SpawnGroup._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_SpawnGroup._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_SpawnGroup.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Emitter_SpawnGroup.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_SpawnGroup.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnGroup__);
  return;
}

// Emitter_SpawnInterval'' @ 141185d10

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_SpawnInterval__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_SpawnInterval._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_SpawnInterval._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_SpawnInterval.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_SpawnInterval.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_SpawnInterval.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnInterval__);
  return;
}

// Emitter_SpawnRate'' @ 141185d70

void __cdecl `dynamic_initializer_for_'INiagaraModule::Emitter_SpawnRate__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Emitter_SpawnRate._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Emitter_SpawnRate._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Emitter_SpawnRate.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Emitter_SpawnRate.VarData.ArrayNum = 0;
  INiagaraModule::Emitter_SpawnRate.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnRate__);
  return;
}

// Engine_DeltaTime'' @ 141185dd0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_DeltaTime__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_DeltaTime._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_DeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_DeltaTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_DeltaTime.VarData.ArrayNum = 0;
  INiagaraModule::Engine_DeltaTime.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_DeltaTime__);
  return;
}

// Engine_Emitter_ID'' @ 141185e30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_ID__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_ID._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_ID._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_ID.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_ID.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_ID.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_ID__);
  return;
}

// Engine_Emitter_InstanceSeed'' @ 141185e90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_InstanceSeed__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_InstanceSeed._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_InstanceSeed._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_InstanceSeed.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_InstanceSeed.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_InstanceSeed.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_InstanceSeed__);
  return;
}

// Engine_Emitter_NumParticles'' @ 141185ef0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_NumParticles__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_NumParticles._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_NumParticles._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_NumParticles.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_NumParticles.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_NumParticles.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_NumParticles__);
  return;
}

// Engine_Emitter_SimulationPosition'' @ 141185f50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_SimulationPosition__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_SimulationPosition._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_SimulationPosition._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_SimulationPosition.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_SimulationPosition.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_SimulationPosition.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_SimulationPosition__);
  return;
}

// Engine_Emitter_SpawnCountScale'' @ 141185fb0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_SpawnCountScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_SpawnCountScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_SpawnCountScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_SpawnCountScale__);
  return;
}

// Engine_Emitter_TotalSpawnedParticles'' @ 141186010

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Emitter_TotalSpawnedParticles__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Emitter_TotalSpawnedParticles._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Emitter_TotalSpawnedParticles._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_TotalSpawnedParticles__);
  return;
}

// Engine_ExecIndex'' @ 141186070

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_ExecIndex__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_ExecIndex._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_ExecIndex._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_ExecIndex.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_ExecIndex.VarData.ArrayNum = 0;
  INiagaraModule::Engine_ExecIndex.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_ExecIndex__);
  return;
}

// Engine_ExecutionCount'' @ 1411860d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_ExecutionCount__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_ExecutionCount._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_ExecutionCount._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_ExecutionCount.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_ExecutionCount.VarData.ArrayNum = 0;
  INiagaraModule::Engine_ExecutionCount.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_ExecutionCount__);
  return;
}

// Engine_GlobalSpawnCountScale'' @ 141186130

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_GlobalSpawnCountScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_GlobalSpawnCountScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_GlobalSpawnCountScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_GlobalSpawnCountScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_GlobalSpawnCountScale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_GlobalSpawnCountScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_GlobalSpawnCountScale__);
  return;
}

// Engine_GlobalSystemScale'' @ 141186190

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_GlobalSystemScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_GlobalSystemScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_GlobalSystemScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_GlobalSystemScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_GlobalSystemScale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_GlobalSystemScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_GlobalSystemScale__);
  return;
}

// Engine_InvDeltaTime'' @ 1411861f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_InvDeltaTime__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_InvDeltaTime._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_InvDeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_InvDeltaTime.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_InvDeltaTime.VarData.ArrayNum = 0;
  INiagaraModule::Engine_InvDeltaTime.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_InvDeltaTime__);
  return;
}

// Engine_NumSystemInstances'' @ 141186250

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_NumSystemInstances__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_NumSystemInstances._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_NumSystemInstances._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_NumSystemInstances.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_NumSystemInstances.VarData.ArrayNum = 0;
  INiagaraModule::Engine_NumSystemInstances.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_NumSystemInstances__);
  return;
}

// Engine_Owner_ExecutionState'' @ 1411862b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_ExecutionState__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_ExecutionState._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_ExecutionState._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_ExecutionState.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_ExecutionState.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_ExecutionState.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_ExecutionState__);
  return;
}

// Engine_Owner_LODDistance'' @ 141186310

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_LODDistance__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_LODDistance._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_LODDistance._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_LODDistance.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_LODDistance.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_LODDistance.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LODDistance__);
  return;
}

// Engine_Owner_LODDistanceFraction'' @ 141186370

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_LODDistanceFraction__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_LODDistanceFraction._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_LODDistanceFraction._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LODDistanceFraction__);
  return;
}

// Engine_Owner_LWC_Tile'' @ 1411863d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_LWC_Tile__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_LWC_Tile._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_LWC_Tile._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_LWC_Tile.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_LWC_Tile.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LWC_Tile__);
  return;
}

// Engine_Owner_Position'' @ 141186430

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_Position__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_Position._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_Position._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_Position.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_Position.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_Position.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Position__);
  return;
}

// Engine_Owner_Rotation'' @ 141186490

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_Rotation__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_Rotation._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_Rotation._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_Rotation.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_Rotation.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_Rotation.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Rotation__);
  return;
}

// Engine_Owner_Scale'' @ 1411864f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_Scale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_Scale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_Scale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_Scale.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Engine_Owner_Scale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_Scale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Scale__);
  return;
}

// Engine_Owner_SystemLocalToWorld'' @ 141186550

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemLocalToWorld__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemLocalToWorld._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemLocalToWorld._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorld__);
  return;
}

// Engine_Owner_SystemLocalToWorldNoScale'' @ 1411865b0

void __cdecl
`dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale__);
  return;
}

// Engine_Owner_SystemLocalToWorldTransposed'' @ 141186610

void __cdecl
`dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed__
        );
  return;
}

// Engine_Owner_SystemWorldToLocal'' @ 141186670

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemWorldToLocal__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemWorldToLocal._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemWorldToLocal._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocal__);
  return;
}

// Engine_Owner_SystemWorldToLocalNoScale'' @ 1411866d0

void __cdecl
`dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale__);
  return;
}

// Engine_Owner_SystemWorldToLocalTransposed'' @ 141186730

void __cdecl
`dynamic_initializer_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed__
        );
  return;
}

// Engine_Owner_TimeSinceRendered'' @ 141186790

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_TimeSinceRendered__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_TimeSinceRendered._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_TimeSinceRendered._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_TimeSinceRendered__);
  return;
}

// Engine_Owner_Velocity'' @ 1411867f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_Velocity__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_Velocity._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_Velocity._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_Velocity.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Owner_Velocity.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_Velocity.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Velocity__);
  return;
}

// Engine_Owner_XAxis'' @ 141186850

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_XAxis__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_XAxis._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_XAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_XAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Engine_Owner_XAxis.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_XAxis.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_XAxis__);
  return;
}

// Engine_Owner_YAxis'' @ 1411868b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_YAxis__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_YAxis._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_YAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_YAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Engine_Owner_YAxis.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_YAxis.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_YAxis__);
  return;
}

// Engine_Owner_ZAxis'' @ 141186910

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Owner_ZAxis__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Owner_ZAxis._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Owner_ZAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Owner_ZAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Engine_Owner_ZAxis.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Owner_ZAxis.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_ZAxis__);
  return;
}

// Engine_QualityLevel'' @ 141186970

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_QualityLevel__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_QualityLevel._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_QualityLevel._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_QualityLevel.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_QualityLevel.VarData.ArrayNum = 0;
  INiagaraModule::Engine_QualityLevel.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_QualityLevel__);
  return;
}

// Engine_RealTime'' @ 1411869d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_RealTime__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_RealTime._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_RealTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_RealTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_RealTime.VarData.ArrayNum = 0;
  INiagaraModule::Engine_RealTime.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_RealTime__);
  return;
}

// Engine_System_Age'' @ 141186a30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_Age__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_Age._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_Age._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_Age.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_Age.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_Age.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_Age__);
  return;
}

// Engine_System_CurrentTimeStep'' @ 141186a90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_CurrentTimeStep__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_CurrentTimeStep._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_CurrentTimeStep._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_CurrentTimeStep.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_CurrentTimeStep.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_CurrentTimeStep.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_CurrentTimeStep__);
  return;
}

// Engine_System_NumEmitters'' @ 141186af0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_NumEmitters__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_NumEmitters._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_NumEmitters._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_NumEmitters.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_NumEmitters.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_NumEmitters.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumEmitters__);
  return;
}

// Engine_System_NumEmittersAlive'' @ 141186b50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_NumEmittersAlive__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_NumEmittersAlive._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_NumEmittersAlive._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_NumEmittersAlive.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_NumEmittersAlive.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_NumEmittersAlive.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumEmittersAlive__);
  return;
}

// Engine_System_NumParticles'' @ 141186bb0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_NumParticles__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_NumParticles._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_NumParticles._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_NumParticles.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_NumParticles.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_NumParticles.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumParticles__);
  return;
}

// Engine_System_NumTimeSteps'' @ 141186c10

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_NumTimeSteps__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_NumTimeSteps._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_NumTimeSteps._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_NumTimeSteps.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_NumTimeSteps.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_NumTimeSteps.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumTimeSteps__);
  return;
}

// Engine_System_RandomSeed'' @ 141186c70

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_RandomSeed__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_RandomSeed._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_RandomSeed._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_RandomSeed.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_RandomSeed.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_RandomSeed.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_RandomSeed__);
  return;
}

// Engine_System_SignificanceIndex'' @ 141186cd0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_SignificanceIndex__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_SignificanceIndex._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_SignificanceIndex._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_SignificanceIndex.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_SignificanceIndex.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_SignificanceIndex.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_SignificanceIndex__);
  return;
}

// Engine_System_TickCount'' @ 141186d30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_TickCount__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_TickCount._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_TickCount._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_TickCount.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_TickCount.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_TickCount.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_TickCount__);
  return;
}

// Engine_System_TimeStepFraction'' @ 141186d90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_System_TimeStepFraction__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_System_TimeStepFraction._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_System_TimeStepFraction._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_System_TimeStepFraction.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_System_TimeStepFraction.VarData.ArrayNum = 0;
  INiagaraModule::Engine_System_TimeStepFraction.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_TimeStepFraction__);
  return;
}

// Engine_Time'' @ 141186df0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_Time__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_Time._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_Time._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_Time.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_Time.VarData.ArrayNum = 0;
  INiagaraModule::Engine_Time.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Time__);
  return;
}

// Engine_WorldDeltaTime'' @ 141186e50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Engine_WorldDeltaTime__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Engine_WorldDeltaTime._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Engine_WorldDeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Engine_WorldDeltaTime.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Engine_WorldDeltaTime.VarData.ArrayNum = 0;
  INiagaraModule::Engine_WorldDeltaTime.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Engine_WorldDeltaTime__);
  return;
}

// FenceName'' @ 141186eb0

void __cdecl `dynamic_initializer_for_'FNiagaraGpuReadbackManager::FenceName__(void)

{
  ::FName::FName(&FNiagaraGpuReadbackManager::FenceName,"NiagaraGpuReadback");
  return;
}

// FloatStructs'' @ 141186ed0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::FloatStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::FloatStructs__);
  return;
}

// FunctionDebugState'' @ 141186ef0

void __cdecl `dynamic_initializer_for_'INiagaraModule::FunctionDebugState__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::FunctionDebugState._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::FunctionDebugState._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::FunctionDebugState.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::FunctionDebugState.VarData.ArrayNum = 0;
  INiagaraModule::FunctionDebugState.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::FunctionDebugState__);
  return;
}

// HiddenAssetTagDefinition'' @ 141186f50

void __cdecl `dynamic_initializer_for_'INiagaraModule::HiddenAssetTagDefinition__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  FGuid local_48;
  FText local_38;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  local_28 = FLinearColor::Black.field0_0x0;
  pFVar1 = FText::GetEmpty();
  local_38.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar1->Flags;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"NiagaraModule",L"HiddenDisplayName",L"Hidden in Asset Browser");
  local_48.A = 0xc7b2f2a1;
  local_48.B = 0x71762afb;
  local_48.C = 0x51bde232;
  local_48.D = 0x8ca4bba3;
  FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
            (&INiagaraModule::HiddenAssetTagDefinition,pFVar1,7,&local_38,Internal,
             (FLinearColor *)&local_28._s_0,&local_48);
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::HiddenAssetTagDefinition__);
  return;
}

// IntStructs'' @ 141187030

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::IntStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::IntStructs__);
  return;
}

// LearningContentTagDefinition'' @ 141187050

void __cdecl `dynamic_initializer_for_'INiagaraModule::LearningContentTagDefinition__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  FGuid local_48;
  FText local_38;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  local_28 = FLinearColor::Green.field0_0x0;
  pFVar1 = FText::GetEmpty();
  local_38.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar1->Flags;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"NiagaraModule",L"LearningContentDisplayName",L"Learning Content");
  local_48.A = 0xfcf21afa;
  local_48.B = 0x50764bfa;
  local_48.C = 0xb9b2e618;
  local_48.D = 0xf2a0cd6f;
  FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
            (&INiagaraModule::LearningContentTagDefinition,pFVar1,7,&local_38,Primary,
             (FLinearColor *)&local_28._s_0,&local_48);
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::LearningContentTagDefinition__);
  return;
}

// LightRendererPropertiesToDeferredInit'' @ 141187130

void __cdecl
`dynamic_initializer_for_'UNiagaraLightRendererProperties::LightRendererPropertiesToDeferredInit__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraLightRendererProperties::
         LightRendererPropertiesToDeferredInit__);
  return;
}

// LightweightTagDefinition'' @ 141187150

void __cdecl `dynamic_initializer_for_'INiagaraModule::LightweightTagDefinition__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  FGuid local_48;
  FText local_38;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  local_28 = FLinearColor::Red.field0_0x0;
  pFVar1 = FText::GetEmpty();
  local_38.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar1->Flags;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"NiagaraModule",L"LightweightDisplayName",L"Lightweight");
  local_48.A = 0xe1737bf2;
  local_48.B = 0x52264191;
  local_48.C = 0xb9b9aa5f;
  local_48.D = 0xfb8c7412;
  FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
            (&INiagaraModule::LightweightTagDefinition,pFVar1,2,&local_38,Primary,
             (FLinearColor *)&local_28._s_0,&local_48);
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::LightweightTagDefinition__);
  return;
}

// MeshRendererPropertiesToDeferredInit'' @ 141187230

void __cdecl
`dynamic_initializer_for_'UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraMeshRendererProperties::
         MeshRendererPropertiesToDeferredInit__);
  return;
}

// Name'' @ 141187250

void __cdecl `dynamic_initializer_for_'FNiagaraGpuComputeDispatch::Name__(void)

{
  ::FName::FName(&FNiagaraGpuComputeDispatch::Name,L"FNiagaraGpuComputeDispatch");
  return;
}

// NumericStructs'' @ 141187270

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::NumericStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::NumericStructs__);
  return;
}

// OnFrameResults_GameThread'' @ 141187290

void __cdecl
`dynamic_initializer_for_'FNiagaraGPUProfilerInterface::OnFrameResults_GameThread__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraGPUProfilerInterface::OnFrameResults_GameThread__);
  return;
}

// OnFrameResults_RenderThread'' @ 1411872b0

void __cdecl
`dynamic_initializer_for_'FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread__
        );
  return;
}

// OrderedNumericTypes'' @ 1411872d0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::OrderedNumericTypes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::OrderedNumericTypes__);
  return;
}

// Particles_Age'' @ 1411872f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Age__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Age._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Age._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Age.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_Age.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Age.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Age__);
  return;
}

// Particles_CameraOffset'' @ 141187350

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_CameraOffset__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_CameraOffset._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_CameraOffset._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_CameraOffset.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_CameraOffset.VarData.ArrayNum = 0;
  INiagaraModule::Particles_CameraOffset.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_CameraOffset__);
  return;
}

// Particles_Color'' @ 1411873b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Color__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Color._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Color._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Color.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_Color.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Color.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Color__);
  return;
}

// Particles_ComponentsEnabled'' @ 141187410

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_ComponentsEnabled__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_ComponentsEnabled._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_ComponentsEnabled._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_ComponentsEnabled.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_ComponentsEnabled.VarData.ArrayNum = 0;
  INiagaraModule::Particles_ComponentsEnabled.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_ComponentsEnabled__);
  return;
}

// Particles_DynamicMaterialParameter1'' @ 141187470

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_DynamicMaterialParameter1__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_DynamicMaterialParameter1._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_DynamicMaterialParameter1._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_DynamicMaterialParameter1.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_DynamicMaterialParameter1.VarData.ArrayNum = 0;
  INiagaraModule::Particles_DynamicMaterialParameter1.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter1__);
  return;
}

// Particles_DynamicMaterialParameter2'' @ 1411874d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_DynamicMaterialParameter2__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_DynamicMaterialParameter2._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_DynamicMaterialParameter2._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_DynamicMaterialParameter2.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_DynamicMaterialParameter2.VarData.ArrayNum = 0;
  INiagaraModule::Particles_DynamicMaterialParameter2.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter2__);
  return;
}

// Particles_DynamicMaterialParameter3'' @ 141187530

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_DynamicMaterialParameter3__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_DynamicMaterialParameter3._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_DynamicMaterialParameter3._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_DynamicMaterialParameter3.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_DynamicMaterialParameter3.VarData.ArrayNum = 0;
  INiagaraModule::Particles_DynamicMaterialParameter3.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter3__);
  return;
}

// Particles_DynamicMaterialParameter'' @ 141187590

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_DynamicMaterialParameter__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_DynamicMaterialParameter._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_DynamicMaterialParameter._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_DynamicMaterialParameter.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_DynamicMaterialParameter.VarData.ArrayNum = 0;
  INiagaraModule::Particles_DynamicMaterialParameter.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter__);
  return;
}

// Particles_ID'' @ 1411875f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_ID__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_ID._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_ID._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_ID.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_ID.VarData.ArrayNum = 0;
  INiagaraModule::Particles_ID.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_ID__);
  return;
}

// Particles_Lifetime'' @ 141187650

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Lifetime__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Lifetime._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Lifetime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Lifetime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Particles_Lifetime.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Lifetime.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Lifetime__);
  return;
}

// Particles_LightDiffuseScale'' @ 1411876b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightDiffuseScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightDiffuseScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightDiffuseScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightDiffuseScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightDiffuseScale.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightDiffuseScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightDiffuseScale__);
  return;
}

// Particles_LightEnabled'' @ 141187710

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightEnabled__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightEnabled._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightEnabled._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightEnabled.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightEnabled.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightEnabled.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightEnabled__);
  return;
}

// Particles_LightExponent'' @ 141187770

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightExponent__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightExponent._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightExponent._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightExponent.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightExponent.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightExponent.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightExponent__);
  return;
}

// Particles_LightRadius'' @ 1411877d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightRadius__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightRadius._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightRadius._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightRadius.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightRadius.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightRadius.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightRadius__);
  return;
}

// Particles_LightSpecularScale'' @ 141187830

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightSpecularScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightSpecularScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightSpecularScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightSpecularScale.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightSpecularScale.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightSpecularScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightSpecularScale__);
  return;
}

// Particles_LightVolumetricScattering'' @ 141187890

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_LightVolumetricScattering__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_LightVolumetricScattering._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_LightVolumetricScattering._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_LightVolumetricScattering.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_LightVolumetricScattering.VarData.ArrayNum = 0;
  INiagaraModule::Particles_LightVolumetricScattering.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightVolumetricScattering__);
  return;
}

// Particles_MaterialRandom'' @ 1411878f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_MaterialRandom__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_MaterialRandom._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_MaterialRandom._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_MaterialRandom.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum = 0;
  INiagaraModule::Particles_MaterialRandom.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_MaterialRandom__);
  return;
}

// Particles_MeshIndex'' @ 141187950

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_MeshIndex__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_MeshIndex._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_MeshIndex._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_MeshIndex.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_MeshIndex.VarData.ArrayNum = 0;
  INiagaraModule::Particles_MeshIndex.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_MeshIndex__);
  return;
}

// Particles_MeshOrientation'' @ 1411879b0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_MeshOrientation__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_MeshOrientation._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_MeshOrientation._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_MeshOrientation.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_MeshOrientation.VarData.ArrayNum = 0;
  INiagaraModule::Particles_MeshOrientation.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_MeshOrientation__);
  return;
}

// Particles_NormalizedAge'' @ 141187a10

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_NormalizedAge__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_NormalizedAge._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_NormalizedAge._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_NormalizedAge.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_NormalizedAge.VarData.ArrayNum = 0;
  INiagaraModule::Particles_NormalizedAge.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_NormalizedAge__);
  return;
}

// Particles_PivotOffset'' @ 141187a70

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_PivotOffset__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_PivotOffset._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_PivotOffset._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_PivotOffset.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_PivotOffset.VarData.ArrayNum = 0;
  INiagaraModule::Particles_PivotOffset.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_PivotOffset__);
  return;
}

// Particles_Position'' @ 141187ad0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Position__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Position._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Position._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Position.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Particles_Position.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Position.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Position__);
  return;
}

// Particles_RibbonFacing'' @ 141187b30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonFacing__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonFacing._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonFacing._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonFacing.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonFacing.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonFacing.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonFacing__);
  return;
}

// Particles_RibbonID'' @ 141187b90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonID__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonID._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonID._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonID.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Particles_RibbonID.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonID.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonID__);
  return;
}

// Particles_RibbonLinkOrder'' @ 141187bf0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonLinkOrder__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonLinkOrder._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonLinkOrder._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonLinkOrder.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonLinkOrder.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonLinkOrder.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonLinkOrder__);
  return;
}

// Particles_RibbonTwist'' @ 141187c50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonTwist__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonTwist._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonTwist._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonTwist.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonTwist.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonTwist.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonTwist__);
  return;
}

// Particles_RibbonU0Override'' @ 141187cb0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonU0Override__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonU0Override._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonU0Override._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonU0Override.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonU0Override.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonU0Override.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonU0Override__);
  return;
}

// Particles_RibbonU1Override'' @ 141187d10

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonU1Override__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonU1Override._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonU1Override._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonU1Override.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonU1Override.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonU1Override.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonU1Override__);
  return;
}

// Particles_RibbonUVDistance'' @ 141187d70

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonUVDistance__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonUVDistance._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonUVDistance._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonUVDistance.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonUVDistance.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonUVDistance.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonUVDistance__);
  return;
}

// Particles_RibbonV0RangeOverride'' @ 141187dd0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonV0RangeOverride__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonV0RangeOverride._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonV0RangeOverride._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonV0RangeOverride.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonV0RangeOverride.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonV0RangeOverride.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonV0RangeOverride__);
  return;
}

// Particles_RibbonV1RangeOverride'' @ 141187e30

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonV1RangeOverride__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonV1RangeOverride._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonV1RangeOverride._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonV1RangeOverride.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonV1RangeOverride.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonV1RangeOverride.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonV1RangeOverride__);
  return;
}

// Particles_RibbonWidth'' @ 141187e90

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_RibbonWidth__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_RibbonWidth._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_RibbonWidth._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_RibbonWidth.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_RibbonWidth.VarData.ArrayNum = 0;
  INiagaraModule::Particles_RibbonWidth.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonWidth__);
  return;
}

// Particles_Scale'' @ 141187ef0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Scale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Scale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Scale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Scale.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_Scale.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Scale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Scale__);
  return;
}

// Particles_SpriteAlignment'' @ 141187f50

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_SpriteAlignment__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_SpriteAlignment._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_SpriteAlignment._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_SpriteAlignment.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_SpriteAlignment.VarData.ArrayNum = 0;
  INiagaraModule::Particles_SpriteAlignment.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteAlignment__);
  return;
}

// Particles_SpriteFacing'' @ 141187fb0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_SpriteFacing__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_SpriteFacing._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_SpriteFacing._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_SpriteFacing.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_SpriteFacing.VarData.ArrayNum = 0;
  INiagaraModule::Particles_SpriteFacing.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteFacing__);
  return;
}

// Particles_SpriteRotation'' @ 141188010

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_SpriteRotation__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_SpriteRotation._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_SpriteRotation._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_SpriteRotation.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_SpriteRotation.VarData.ArrayNum = 0;
  INiagaraModule::Particles_SpriteRotation.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteRotation__);
  return;
}

// Particles_SpriteSize'' @ 141188070

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_SpriteSize__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_SpriteSize._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_SpriteSize._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_SpriteSize.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_SpriteSize.VarData.ArrayNum = 0;
  INiagaraModule::Particles_SpriteSize.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteSize__);
  return;
}

// Particles_SubImageIndex'' @ 1411880d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_SubImageIndex__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_SubImageIndex._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_SubImageIndex._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_SubImageIndex.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_SubImageIndex.VarData.ArrayNum = 0;
  INiagaraModule::Particles_SubImageIndex.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_SubImageIndex__);
  return;
}

// Particles_UVScale'' @ 141188130

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_UVScale__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_UVScale._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_UVScale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_UVScale.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_UVScale.VarData.ArrayNum = 0;
  INiagaraModule::Particles_UVScale.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_UVScale__);
  return;
}

// Particles_UniqueID'' @ 141188190

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_UniqueID__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_UniqueID._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_UniqueID._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_UniqueID.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Particles_UniqueID.VarData.ArrayNum = 0;
  INiagaraModule::Particles_UniqueID.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_UniqueID__);
  return;
}

// Particles_Velocity'' @ 1411881f0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_Velocity__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_Velocity._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_Velocity._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_Velocity.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  INiagaraModule::Particles_Velocity.VarData.ArrayNum = 0;
  INiagaraModule::Particles_Velocity.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_Velocity__);
  return;
}

// Particles_VisibilityTag'' @ 141188250

void __cdecl `dynamic_initializer_for_'INiagaraModule::Particles_VisibilityTag__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Particles_VisibilityTag._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Particles_VisibilityTag._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Particles_VisibilityTag.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Particles_VisibilityTag.VarData.ArrayNum = 0;
  INiagaraModule::Particles_VisibilityTag.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Particles_VisibilityTag__);
  return;
}

// ScalarStructs'' @ 1411882b0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeDefinition::ScalarStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::ScalarStructs__);
  return;
}

// ScriptContext'' @ 1411882d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::ScriptContext__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::ScriptContext._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::ScriptContext._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::ScriptContext.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::ScriptContext.VarData.ArrayNum = 0;
  INiagaraModule::ScriptContext.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::ScriptContext__);
  return;
}

// ScriptUsage'' @ 141188330

void __cdecl `dynamic_initializer_for_'INiagaraModule::ScriptUsage__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::ScriptUsage._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::ScriptUsage._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::ScriptUsage.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::ScriptUsage.VarData.ArrayNum = 0;
  INiagaraModule::ScriptUsage.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::ScriptUsage__);
  return;
}

// TemplateTagDefinition'' @ 141188390

void __cdecl `dynamic_initializer_for_'INiagaraModule::TemplateTagDefinition__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  FGuid local_48;
  FText local_38;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  local_28 = FLinearColor::Yellow.field0_0x0;
  pFVar1 = FText::GetEmpty();
  local_38.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar1->Flags;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"NiagaraModule",L"TemplateDisplayName",L"Template");
  local_48.A = 0xfc157afa;
  local_48.B = 0x50264263;
  local_48.C = 0xb9a9e658;
  local_48.D = 0xffac2d22;
  FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
            (&INiagaraModule::TemplateTagDefinition,pFVar1,3,&local_38,Primary,
             (FLinearColor *)&local_28._s_0,&local_48);
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::TemplateTagDefinition__);
  return;
}

// Translator_BeginDefaults'' @ 141188470

void __cdecl `dynamic_initializer_for_'INiagaraModule::Translator_BeginDefaults__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Translator_BeginDefaults._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Translator_BeginDefaults._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Translator_BeginDefaults.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  INiagaraModule::Translator_BeginDefaults.VarData.ArrayNum = 0;
  INiagaraModule::Translator_BeginDefaults.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Translator_BeginDefaults__);
  return;
}

// Translator_CallID'' @ 1411884d0

void __cdecl `dynamic_initializer_for_'INiagaraModule::Translator_CallID__(void)

{
  FNiagaraTypeRegistry *this;
  
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    INiagaraModule::Translator_CallID._padding_._0_4_ = -1;
  }
  else {
    this = FNiagaraTypeRegistry::Get();
    INiagaraModule::Translator_CallID._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
  }
  INiagaraModule::Translator_CallID.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  INiagaraModule::Translator_CallID.VarData.ArrayNum = 0;
  INiagaraModule::Translator_CallID.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'INiagaraModule::Translator_CallID__);
  return;
}

// VectorVMOps'' @ 141188530

void __cdecl `dynamic_initializer_for_'UNiagaraFunctionLibrary::VectorVMOps__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraFunctionLibrary::VectorVMOps__);
  return;
}

// VectorVMOpsHLSL'' @ 141188550

void __cdecl `dynamic_initializer_for_'UNiagaraFunctionLibrary::VectorVMOpsHLSL__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraFunctionLibrary::VectorVMOpsHLSL__);
  return;
}

// `dynamic_initializer_for_'CNiagaraIndirectArgsPoolBlockSizeFactor'' @ 141188570

void __cdecl _dynamic_initializer_for__CNiagaraIndirectArgsPoolBlockSizeFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CNiagaraIndirectArgsPoolBlockSizeFactor,L"fx.Niagara.IndirectArgsPool.BlockSizeFactor"
             ,&GNiagaraIndirectArgsPoolBlockSizeFactor,
             L"Multiplier on the indirect args pool size when needing to increase it from running out of space. (default=2.0)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CNiagaraIndirectArgsPoolBlockSizeFactor__);
  return;
}

// `dynamic_initializer_for_'CVarAllowFastPathFunctionLibrary'' @ 1411885c0

void __cdecl _dynamic_initializer_for__CVarAllowFastPathFunctionLibrary__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowFastPathFunctionLibrary,L"fx.AllowFastPathFunctionLibrary",
             &GAllowFastPathFunctionLibrary,
             L"If > 0 Allow the graph to insert custom fastpath operations into the graph.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowFastPathFunctionLibrary__);
  return;
}

// `dynamic_initializer_for_'CVarDataChannelEnabled'' @ 141188610

void __cdecl _dynamic_initializer_for__CVarDataChannelEnabled__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = INiagaraModule::OnDataChannelsEnabledChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDataChannelEnabled,L"fx.Niagara.DataChannels.Enabled",
             &INiagaraModule::bDataChannelsEnabled,
             L"If true, Niagara Data Channels will be enabled. \n",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarDataChannelEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarDumpSortedSimulations'' @ 141188750

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_initializer_for__CVarDumpSortedSimulations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpSortedSimulations,L"fx.Niagara.Batcher.DumpSortedSimulations",
             &GDumpSortedSimulations,
             L"Will dump sorted simulations to the log for the provided number of frames.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpSortedSimulations__);
  return;
}

// `dynamic_initializer_for_'CVarEnableVerboseNiagaraChangeIdLogging'' @ 1411887a0

void __cdecl _dynamic_initializer_for__CVarEnableVerboseNiagaraChangeIdLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableVerboseNiagaraChangeIdLogging,L"fx.EnableVerboseNiagaraChangeIdLogging",
             &GEnableVerboseNiagaraChangeIdLogging,
             L"If > 0 Verbose change id logging info will be printed. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableVerboseNiagaraChangeIdLogging__);
  return;
}

// `dynamic_initializer_for_'CVarLogCompileIdGeneration'' @ 1411887f0

void __cdecl _dynamic_initializer_for__CVarLogCompileIdGeneration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogCompileIdGeneration,L"fx.LogCompileIdGeneration",
             &FNiagaraCompileHashVisitor::LogCompileIdGeneration,
             L"If > 0 all compile id generation will be logged. If 2 or greater, log detailed info. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogCompileIdGeneration__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraBatcherFreeBufferEarly'' @ 141188840

void __cdecl _dynamic_initializer_for__CVarNiagaraBatcherFreeBufferEarly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraBatcherFreeBufferEarly,L"fx.NiagaraBatcher.FreeBufferEarly",
             &GNiagaraBatcherFreeBufferEarly,
             L"Will take the path to release GPU buffers when possible.\nThis will reduce memory pressure but can result in more allocations if you buffers ping pong from zero particles to many."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraBatcherFreeBufferEarly__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGPUCountBufferSlack'' @ 141188890

void __cdecl _dynamic_initializer_for__CVarNiagaraGPUCountBufferSlack__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGPUCountBufferSlack,L"Niagara.GPUCountBufferSlack",
             &GNiagaraGPUCountBufferSlack,
             L"Multiplier of the GPU count buffer size to prevent frequent re-allocation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGPUCountBufferSlack__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGPUCountManagerAllocateIncrement'' @ 1411888e0

void __cdecl _dynamic_initializer_for__CVarNiagaraGPUCountManagerAllocateIncrement__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGPUCountManagerAllocateIncrement,
             L"Niagara.GPUCountManager.AllocateIncrement",&GNiagaraGPUCountManagerAllocateIncrement,
             L"If we run out of space for allocations this is how many allocate rather than a single entry. (default=64)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGPUCountManagerAllocateIncrement__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuComputeDebug_DrawDebugEnabled'' @ 141188930

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuComputeDebug_DrawDebugEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuComputeDebug_DrawDebugEnabled,
             L"fx.Niagara.GpuComputeDebug.DrawDebugEnabled",
             &GNiagaraGpuComputeDebug_DrawDebugEnabled,
             L"Should we draw any of the debug information or not.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_DrawDebugEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuComputeDebug_MaxLineInstances'' @ 141188980

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuComputeDebug_MaxLineInstances__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuComputeDebug_MaxLineInstances,
             L"fx.Niagara.GpuComputeDebug.MaxLineInstances",
             &GNiagaraGpuComputeDebug_MaxLineInstances,
             L"Maximum number of line draw we support in a single frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MaxLineInstances__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuComputeDebug_MaxTextureHeight'' @ 1411889d0

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuComputeDebug_MaxTextureHeight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuComputeDebug_MaxTextureHeight,
             L"fx.Niagara.GpuComputeDebug.MaxTextureHeight",
             &GNiagaraGpuComputeDebug_MaxTextureHeight,
             L"The maximum height we will visualize a texture at, this is to avoid things becoming too large on screen."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MaxTextureHeight__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuComputeDebug_MinTextureHeight'' @ 141188a20

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuComputeDebug_MinTextureHeight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuComputeDebug_MinTextureHeight,
             L"fx.Niagara.GpuComputeDebug.MinTextureHeight",
             &GNiagaraGpuComputeDebug_MinTextureHeight,
             L"The minimum height we will visualize a texture at, smaller textures will be scaled up to match this."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MinTextureHeight__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuLowLatencyTranslucencyEnabled'' @ 141188a70

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuLowLatencyTranslucencyEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuLowLatencyTranslucencyEnabled,
             L"fx.NiagaraGpuLowLatencyTranslucencyEnabled",&GNiagaraGpuLowLatencyTranslucencyEnabled
             ,
             L"When enabled translucent materials can use the current frames simulation data no matter which tick pass Niagara uses.\nThis can result in an additional data buffer being required but will reduce any latency when using view uniform buffer / depth buffer / distance fields / etc"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuLowLatencyTranslucencyEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuProfilingEnabled'' @ 141188ac0

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuProfilingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuProfilingEnabled,L"fx.Niagara.GpuProfiling.Enabled",
             &GNiagaraGpuProfilingEnabled,
             L"Primary control to allow Niagara to use GPU profiling or not.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuProfilingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuSubmitCommandHint'' @ 141188b10

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuSubmitCommandHint__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuSubmitCommandHint,L"fx.NiagaraGpuSubmitCommandHint",
             &GNiagaraGpuSubmitCommandHint,
             L"If greater than zero, we use this value to submit commands after the number of dispatches have been issued."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuSubmitCommandHint__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraIndirectArgsPoolAllowShrinking'' @ 141188b60

void __cdecl _dynamic_initializer_for__CVarNiagaraIndirectArgsPoolAllowShrinking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraIndirectArgsPoolAllowShrinking,
             L"fx.Niagara.IndirectArgsPool.AllowShrinking",&GNiagaraIndirectArgsPoolAllowShrinking,
             L"Allow the indirect args pool to shrink after a number of frames below a low water mark."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolAllowShrinking__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraIndirectArgsPoolLowWaterAmount'' @ 141188bb0

void __cdecl _dynamic_initializer_for__CVarNiagaraIndirectArgsPoolLowWaterAmount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraIndirectArgsPoolLowWaterAmount,
             L"fx.Niagara.IndirectArgsPool.LowWaterAmount",&GNiagaraIndirectArgsPoolLowWaterAmount,
             L"Percentage (0-1) of the indirect args pool that is considered low and worthy of shrinking"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolLowWaterAmount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraIndirectArgsPoolLowWaterFrames'' @ 141188c00

void __cdecl _dynamic_initializer_for__CVarNiagaraIndirectArgsPoolLowWaterFrames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraIndirectArgsPoolLowWaterFrames,
             L"fx.Niagara.IndirectArgsPool.LowWaterFrames",&GNiagaraIndirectArgsPoolLowWaterFrames,
             L"The number of frames to wait to shrink the indirect args pool for being below the low water mark. (default=150)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolLowWaterFrames__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraIndirectArgsPoolMinSize'' @ 141188c50

void __cdecl _dynamic_initializer_for__CVarNiagaraIndirectArgsPoolMinSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraIndirectArgsPoolMinSize,L"fx.Niagara.IndirectArgsPool.MinSize",
             &GNiagaraIndirectArgsPoolMinSize,
             L"Minimum number of draw indirect args allocated into the pool. (default=256)",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolMinSize__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMaxCompilePollTimePerFrame'' @ 141188ca0

void __cdecl _dynamic_initializer_for__CVarNiagaraMaxCompilePollTimePerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMaxCompilePollTimePerFrame,L"fx.Niagara.MaxCompilePollTimePerFrame",
             &GNiagaraMaxCompilePollTimePerFrame,
             L"When a lot of system compile tasks queue up, this is the max time per frame that is used to advance them."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMaxCompilePollTimePerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMinCulledGPUInstanceCount'' @ 141188cf0

void __cdecl _dynamic_initializer_for__CVarNiagaraMinCulledGPUInstanceCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMinCulledGPUInstanceCount,L"Niagara.MinCulledGPUInstanceCount",
             &GNiagaraMinCulledGPUInstanceCount,
             L"Minimum number of culled (per-view) instance count entries allocated in the global buffer. (default=2048)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMinCulledGPUInstanceCount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMinGPUInstanceCount'' @ 141188d40

void __cdecl _dynamic_initializer_for__CVarNiagaraMinGPUInstanceCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMinGPUInstanceCount,L"Niagara.MinGPUInstanceCount",
             &GNiagaraMinGPUInstanceCount,
             L"Minimum number of instance count entries allocated in the global buffer. (default=2048)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMinGPUInstanceCount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraOptimizedCrossGPUTransferEnabled'' @ 141188d90

void __cdecl _dynamic_initializer_for__CVarNiagaraOptimizedCrossGPUTransferEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraOptimizedCrossGPUTransferEnabled,L"fx.NiagaraOptimizeCrossGPUTransfer",
             &GNiagaraOptimizedCrossGPUTransferEnabled,
             L"Optimizes fence waits for cross GPU transfers when rendering views on multiple GPUs via nDisplay.  (Default = 1)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraOptimizedCrossGPUTransferEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraTickFlushMaxPendingTicks'' @ 141188de0

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_initializer_for__CVarNiagaraTickFlushMaxPendingTicks__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraTickFlushMaxPendingTicks,L"fx.Niagara.Batcher.TickFlush.MaxPendingTicks",
             &GTickFlushMaxPendingTicks,
             L"The maximum number of unprocess ticks before we process them.\nThe larger the number the more data we process in a single frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMaxPendingTicks__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraTickFlushMaxQueuedFrames'' @ 141188e30

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_initializer_for__CVarNiagaraTickFlushMaxQueuedFrames__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraTickFlushMaxQueuedFrames,L"fx.Niagara.Batcher.TickFlush.MaxQueuedFrames",
             &GTickFlushMaxQueuedFrames,
             L"The number of unprocessed frames with queued ticks before we process them.\nThe larger the number the more data we process in a single frame, this is generally only a concern when the application does not have focus."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMaxQueuedFrames__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraTickFlushMode'' @ 141188e80

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_initializer_for__CVarNiagaraTickFlushMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraTickFlushMode,L"fx.Niagara.Batcher.TickFlush.Mode",&GTickFlushMode,
             L"What to do when we go over our max queued frames.\n0 = Keep ticks queued, can result in a long pause when gaining focus again.\n1 = (Default) Process all queued ticks with dummy view / buffer data, may result in incorrect simulation due to missing depth collisions, etc.\n2 = Kill all pending ticks, may result in incorrect simulation due to missing frames of data, i.e. a particle reset.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMode__);
  return;
}

// `dynamic_initializer_for_'CVarNiaraGlobalSystemCountScale'' @ 141188ed0

void __cdecl _dynamic_initializer_for__CVarNiaraGlobalSystemCountScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiaraGlobalSystemCountScale,L"fx.NiagaraGlobalSystemCountScale",
             &INiagaraModule::EngineGlobalSystemCountScale,
             L"A global scale on system count thresholds for culling in Niagara. \n",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiaraGlobalSystemCountScale__);
  return;
}

// `dynamic_initializer_for_'CVarUseGlobalFXBudget'' @ 141188f20

void __cdecl _dynamic_initializer_for__CVarUseGlobalFXBudget__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = INiagaraModule::OnUseGlobalFXBudgetChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseGlobalFXBudget,L"fx.Niagara.UseGlobalFXBudget",
             &INiagaraModule::bUseGlobalFXBudget,
             L"If true, Niagara will track performace data into the global FX budget and feed the global budget values into scalability. \n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarUseGlobalFXBudget__);
  return;
}

// `dynamic_initializer_for_'FastMatrixToQuaternionName'' @ 141189060

void __cdecl _dynamic_initializer_for__FastMatrixToQuaternionName__(void)

{
  FName::FName(&FastMatrixToQuaternionName,L"FastMatrixToQuaternion");
  return;
}

// `dynamic_initializer_for_'FastPathDot4Name'' @ 141189080

void __cdecl _dynamic_initializer_for__FastPathDot4Name__(void)

{
  FName::FName(&FastPathDot4Name,L"FastPathDot4");
  return;
}

// `dynamic_initializer_for_'FastPathLibraryName'' @ 1411890a0

void __cdecl _dynamic_initializer_for__FastPathLibraryName__(void)

{
  FName::FName(&FastPathLibraryName,L"FastPathLibrary");
  return;
}

// `dynamic_initializer_for_'FastPathTransformPositionName'' @ 1411890c0

void __cdecl _dynamic_initializer_for__FastPathTransformPositionName__(void)

{
  FName::FName(&FastPathTransformPositionName,L"FastPathTransformPosition");
  return;
}

// `dynamic_initializer_for_'FastUniqueRandomName'' @ 1411890e0

void __cdecl _dynamic_initializer_for__FastUniqueRandomName__(void)

{
  FName::FName(&FastUniqueRandomName,L"FastUniqueRandom");
  return;
}

// `dynamic_initializer_for_'GDefaultColor'' @ 141189100

void __cdecl NiagaraLightRendererPropertiesPrivate::_dynamic_initializer_for__GDefaultColor__(void)

{
  GDefaultColor = FLinearColor::White;
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPU'' @ 141189120

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPU__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPU__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPUClearIDTables'' @ 141189140

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPUClearIDTables__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPUClearIDTables__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPUComputeFreeIDs'' @ 141189160

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPUComputeFreeIDs__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPUComputeFreeIDs__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPUComputeFreeIDsEmitter'' @ 141189180

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPUComputeFreeIDsEmitter__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPUComputeFreeIDsEmitter__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPUSimulation'' @ 1411891a0

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPUSimulation__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPUSimulation__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPUSorting'' @ 1411891c0

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPUSorting__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPUSorting__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411891e0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNiagara'' @ 141189200

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagara__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Niagara";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Niagara",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<INiagaraModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UniqueID'' @ 141189250

void __cdecl NiagaraLightRendererPropertiesPrivate::_dynamic_initializer_for__NAME_UniqueID__(void)

{
  ::FName::FName(&NAME_UniqueID,"UniqueID");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 141189270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar1,L"Collision",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141189300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraConstants == (FThreadSafeStaticStat<FStat_STAT_NiagaraConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraConstants,*pFVar1,
               L"Constant Setup [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 141189390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDataInterfaceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,*pFVar1,
               L"Niagara GPU data interface memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDispatchSetup_RT'' @ 141189420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDispatchSetup_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDispatchSetup_RT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatchSetup_RT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDispatchSetup_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDispatchSetup_RT,*pFVar1,
               L"GPU Dispatch Setup [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDispatches'' @ 1411894b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDispatches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDispatches ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDispatches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDispatches,*pFVar1,
               L"# GPU Dispatches","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141189540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar1,
               L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticles'' @ 1411895d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticles,*pFVar1,
               L"# GPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUReadbackLock'' @ 141189660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUReadbackLock__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUReadbackLock ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUReadbackLock");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUReadbackLock,*pFVar1,
               L"GPU Readback Lock","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUReadback_RT'' @ 1411896f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUReadback_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUReadback_RT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadback_RT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUReadback_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUReadback_RT,*pFVar1,
               L"GPU Data Readback [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUSimTick_RT'' @ 141189780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUSimTick_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUSimTick_RT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUSimTick_RT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUSimTick_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUSimTick_RT,*pFVar1,
               L"GPU Emitter Dispatch [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUSortedBuffers'' @ 141189810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUSortedBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUSortedBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUSortedBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUSortedBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUSortedBuffers,*pFVar1,
               L"# GPU Sorted Buffers","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUSortedParticles'' @ 1411898a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUSortedParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUSortedParticles ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUSortedParticles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUSortedParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUSortedParticles,*pFVar1,
               L"# GPU Sorted Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraIndirectDraws'' @ 141189930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraIndirectDraws__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraIndirectDraws ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraIndirectDraws>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraIndirectDraws");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraIndirectDraws,*pFVar1,
               L"Indirect Draw Calls","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumDeathEvents'' @ 1411899c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumDeathEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumDeathEvents ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraNumDeathEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumDeathEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumDeathEvents,*pFVar1,
               L"Num Death Events","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 141189a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar1,
               L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSpawnEvents'' @ 141189ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSpawnEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSpawnEvents ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSpawnEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSpawnEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSpawnEvents,*pFVar1,
               L"Num Spawn Events","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141189b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar1,L"NumSystems",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141189c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141189c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141189d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 141189db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 141189e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar1,
               L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraReadbackLatency'' @ 141189ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraReadbackLatency__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraReadbackLatency ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraReadbackLatency>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraReadbackLatency");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraReadbackLatency,*pFVar1,
               L"Readback latency (frames)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 141189f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderTargetMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderTargetMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderTargetMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,*pFVar1,
               L"Niagara RenderTarget memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 141189ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraTick,*pFVar1,L"Emitter Tick [CNC]",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraUsedGPUInstanceCounters'' @ 14118a080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraUsedGPUInstanceCounters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraUsedGPUInstanceCounters ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraUsedGPUInstanceCounters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraUsedGPUInstanceCounters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraUsedGPUInstanceCounters,*pFVar1,
               L"Used GPU Instance Counters","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 14118a110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraVBMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraVBMemory == (FThreadSafeStaticStat<FStat_STAT_NiagaraVBMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraVBMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraVBMemory,*pFVar1,
               L"Niagara vertex buffer memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 14118a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar1,
               L"Total System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 14118a230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstancesSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstancesSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar1,
               L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h__Script_Niagara_3153750207'' @ 14118a2c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h__Script_Niagara_3153750207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h__Script_Niagara_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h__Script_Niagara_3978778662'' @ 14118a310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h__Script_Niagara_3978778662__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h__Script_Niagara_654741188'' @ 14118a350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h__Script_Niagara_654741188__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h__Script_Niagara_379420180'' @ 14118a390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h__Script_Niagara_379420180__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h__Script_Niagara_1798571294'' @ 14118a3d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h__Script_Niagara_1798571294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h__Script_Niagara_816216634'' @ 14118a410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h__Script_Niagara_816216634__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h__Script_Niagara_1997327651'' @ 14118a450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h__Script_Niagara_1997327651__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h__Script_Niagara_915566118'' @ 14118a4a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h__Script_Niagara_915566118__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h__Script_Niagara_480893219'' @ 14118a4e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h__Script_Niagara_480893219__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h__Script_Niagara_3939608469'' @ 14118a520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h__Script_Niagara_3939608469__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NiagaraGpuCompute'' @ 14118a560

void __cdecl _dynamic_initializer_for___GCsvCategory_NiagaraGpuCompute__(void)

{
  FString::operator=(&_GCsvCategory_NiagaraGpuCompute.Name,L"NiagaraGpuCompute");
  _GCsvCategory_NiagaraGpuCompute.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NiagaraGpuCompute.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NiagaraGpuCompute__);
  return;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject @ 1492c1c50

UFunction * __cdecl Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1492c1c90

void * __cdecl Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMessageStore,&UE::CoreUObject::Private::Construct<FNiagaraMessageStore>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMessageStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAutoDestroy_SetBit @ 1492c1cd0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::
NewProp_bAutoDestroy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bAutoActivate_SetBit @ 1492c1ce0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::
NewProp_bAutoActivate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewProp_bPreCullCheck_SetBit @ 1492c1cf0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::
NewProp_bPreCullCheck_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation @ 1492c1d00

UFunction * __cdecl Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams @ 1492c1d40

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 1492c1eb0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::
NewProp_bAutoDestroy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bAutoActivate_SetBit @ 1492c1ec0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::
NewProp_bAutoActivate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bPreCullCheck_SetBit @ 1492c1ed0

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::
NewProp_bPreCullCheck_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached @ 1492c1ee0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams @ 1492c1f20

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister @ 1492c1fd0

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollectionInstance",
               &Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton,
               UNiagaraParameterCollectionInstance::
               StaticRegisterNativesUNiagaraParameterCollectionInstance,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraParameterCollectionInstance>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollectionInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraParameterCollection_NoRegister @ 1492c2080

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton,
               UNiagaraParameterCollection::StaticRegisterNativesUNiagaraParameterCollection,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton;
}

// Z_Construct_UClass_ANiagaraLensEffectBase @ 1492c2500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraLensEffectBase(void)

{
  if (Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton,
               &Z_Construct_UClass_ANiagaraLensEffectBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton;
}

// NewProp_bAllowMultipleInstances_SetBit @ 1492c2540

void __cdecl
Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x344) = *(byte *)((longlong)param_1 + 0x344) | 1;
  return;
}

// NewProp_bResetWhenRetriggered_SetBit @ 1492c2550

void __cdecl
Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x344) = *(byte *)((longlong)param_1 + 0x344) | 2;
  return;
}

// NewStructOps @ 1492c2620

void * __cdecl
Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FParameterDefinitionsSubscription,&UE::CoreUObject::Private::Construct<FParameterDefinitionsSubscription>,&UE::CoreUObject::Private::ConstructForTests<FParameterDefinitionsSubscription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraLightRendererProperties @ 1492c5c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraLightRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraMeshRendererProperties @ 1492c5c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraMeshRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode @ 1492c5cd0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace @ 1492c5d10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride @ 1492c5d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraMeshMICOverride @ 1492c5dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshMICOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bUseInverseSquaredFalloff_SetBit @ 1492c5e50

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  return;
}

// Z_Construct_UScriptStruct_FNiagaraParameterBinding @ 1492c5e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterBinding.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bAffectsTranslucency_SetBit @ 1492c5ee0

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 2;
  return;
}

// NewProp_bAllowMegaLights_SetBit @ 1492c5ef0

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAllowMegaLights_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 4;
  return;
}

// NewProp_bMegaLightsCastShadows_SetBit @ 1492c5f00

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bMegaLightsCastShadows_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 8;
  return;
}

// NewProp_bAlphaScalesBrightness_SetBit @ 1492c5f10

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x10;
  return;
}

// NewProp_bOverrideInverseExposureBlend_SetBit @ 1492c5f20

void __cdecl
Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::
NewProp_bOverrideInverseExposureBlend_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x20;
  return;
}

// ENiagaraMeshFacingMode_StaticEnum @ 1492c5f30

UEnum * __cdecl ENiagaraMeshFacingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode,(UObject *)pUVar1,
                       L"ENiagaraMeshFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton;
}

// ENiagaraMeshLockedAxisSpace_StaticEnum @ 1492c5f70

UEnum * __cdecl ENiagaraMeshLockedAxisSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace,(UObject *)pUVar1,
                       L"ENiagaraMeshLockedAxisSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton;
}

// NewStructOps @ 1492c5fb0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMeshMICOverride,&UE::CoreUObject::Private::Construct<FNiagaraMeshMICOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMeshMICOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraMeshMICOverride>,&UE::CoreUObject::Private::Copy<FNiagaraMeshMICOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492c5ff0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMeshMaterialOverride,&UE::CoreUObject::Private::Construct<FNiagaraMeshMaterialOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMeshMaterialOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraMeshMaterialOverride>,&UE::CoreUObject::Private::Copy<FNiagaraMeshMaterialOverride>,&UE::CoreUObject::Private::Identical<FNiagaraMeshMaterialOverride>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraMeshMaterialOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideMaterials_SetBit @ 1492c6030

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 1;
  return;
}

// NewProp_bSortOnlyWhenTranslucent_SetBit @ 1492c6040

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 2;
  return;
}

// NewProp_bSubImageBlend_SetBit @ 1492c6050

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 4;
  return;
}

// NewProp_bEnableFrustumCulling_SetBit @ 1492c6060

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 8;
  return;
}

// NewProp_bEnableCameraDistanceCulling_SetBit @ 1492c6070

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::
NewProp_bEnableCameraDistanceCulling_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 0x10;
  return;
}

// NewProp_bEnableMeshFlipbook_SetBit @ 1492c6080

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 0x20;
  return;
}

// NewProp_bLockedAxisEnable_SetBit @ 1492c6090

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 200) = *(uint *)((longlong)param_1 + 200) | 0x40;
  return;
}

// NewProp_bCastShadows_SetBit @ 1492c60a0

void __cdecl
Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bCastShadows_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) | 1;
  return;
}

// Z_Construct_UClass_UNiagaraParameterCollection @ 1492c60b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterCollection(void)

{
  if (Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton,
               &Z_Construct_UClass_UNiagaraParameterCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraParameterCollectionInstance @ 1492c60f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterCollectionInstance(void)

{
  if (Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton,
               &Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1492c6130

void __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter @ 1492c6140

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter @ 1492c6180

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter @ 1492c61c0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1492c6200

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall INiagaraModule::_scalar_deleting_destructor_(INiagaraModule *this,uint param_1)

{
  FNiagaraDebuggerClient *pFVar1;
  FNiagaraPerfBaselineHandler *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pFVar1 = (this->DebuggerClient).Ptr;
  if (pFVar1 != (FNiagaraDebuggerClient *)0x0) {
    (*(code *)pFVar1[-1].SimCacheCaptures.AllocatorInstance.Data)(&pFVar1[-1].SimCacheCaptures);
  }
  this_00 = (this->BaselineHandler).Ptr;
  if (this_00 != (FNiagaraPerfBaselineHandler *)0x0) {
    FNiagaraPerfBaselineHandler::~FNiagaraPerfBaselineHandler(this_00);
    ::operator_delete(this_00,0x48);
  }
  pFVar2 = (this->InternalAssetTagDefinitions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue);
  pvVar3 = *(void **)&(this->OnProcessQueue).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProcessQueue);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter @ 1492c62b0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter @ 1492c62f0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter @ 1492c6330

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter @ 1492c6370

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter @ 1492c63b0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 1492c63f0

void __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::
NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter @ 1492c6400

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter @ 1492c6440

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter @ 1492c6480

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter @ 1492c64c0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter @ 1492c6500

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter @ 1492c6540

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter @ 1492c6580

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter @ 1492c66b0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraEventReceiverEmitterAction @ 1492c69e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEventReceiverEmitterAction(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles @ 1492c6a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.OuterSingleton
  ;
}

// NewStructOps @ 1492c6a60

void * __cdecl Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraCollisionEventPayload,&UE::CoreUObject::Private::Construct<FNiagaraCollisionEventPayload>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraCollisionEventPayload>,&UE::CoreUObject::Private::Destruct<FNiagaraCollisionEventPayload>,&UE::CoreUObject::Private::Copy<FNiagaraCollisionEventPayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492c6aa0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterBinding,&UE::CoreUObject::Private::Construct<FNiagaraParameterBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterBinding>,&UE::CoreUObject::Private::Copy<FNiagaraParameterBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492c6ae0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterBindingWithValue,&UE::CoreUObject::Private::Construct<FNiagaraParameterBindingWithValue>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterBindingWithValue>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterBindingWithValue>,&UE::CoreUObject::Private::Copy<FNiagaraParameterBindingWithValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraFunctionLibrary @ 1492c6c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup @ 1492c6c50

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection @ 1492c6c90

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent @ 1492c6cd0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh @ 1492c6d10

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent @ 1492c6d50

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup @ 1492c6d90

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup @ 1492c6de0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup @ 1492c6e30

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManagedCaptureEveryFrame_SetBit @ 1492c6e70

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSceneCapture2DDataInterfaceManagedMode_Statics::
NewProp_bManagedCaptureEveryFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bManagedCaptureOnMovement_SetBit @ 1492c6e80

void __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSceneCapture2DDataInterfaceManagedMode_Statics::
NewProp_bManagedCaptureOnMovement_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSceneCapture2DDataInterfaceManagedMode @ 1492c6e90

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSceneCapture2DDataInterfaceManagedMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSceneCapture2DDataInterfaceManagedMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones @ 1492c6ed0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets @ 1492c6f10

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions @ 1492c6f50

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject @ 1492c6f90

UFunction * __cdecl Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraMessageDataBase @ 1492c6fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraMessageDataBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraMessageDataBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject @ 1492c7050

UFunction * __cdecl Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// AddLambda<`INiagaraModule::OnPostEngineInit'::__l2::<lambda_1>_> @ 1492c7ab0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
AddLambda<_INiagaraModule::OnPostEngineInit_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`INiagaraModule::OnPostEngineInit'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_1>_> @ 1492c7ce0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>::
AddLambda<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UNiagaraParameterCollectionInstance *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UNiagaraParameterCollectionInstance *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TTuple_VFName__M___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy,`UNiagaraParameterCollectionInstance::Bind'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UNiagaraParameterCollectionInstance *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (UNiagaraParameterCollectionInstance *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::__l8::<lambda_2>_> @ 1492c7f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::AddLambda<_FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch_::__l8::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FNiagaraGpuComputeDispatch *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FNiagaraGpuComputeDispatch *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FNiagaraGpuComputeDispatch *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FNiagaraGpuComputeDispatch *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_2>_> @ 1492c8180

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
::AddLambda<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UNiagaraParameterCollectionInstance *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UNiagaraParameterCollectionInstance *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TTuple_VFName__UFLinearColor_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy,`UNiagaraParameterCollectionInstance::Bind'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UNiagaraParameterCollectionInstance *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (UNiagaraParameterCollectionInstance *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::__l8::<lambda_3>_> @ 1492c83d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::AddLambda<_FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch_::__l8::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FNiagaraGpuComputeDispatch *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FNiagaraGpuComputeDispatch *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FNiagaraGpuComputeDispatch *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FNiagaraGpuComputeDispatch *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadback'::__l2::<lambda_1>_> @ 1492c8620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadback_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FReadbackBufferParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  uint uVar2;
  FRDGBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  pFVar8 = FReadbackBufferParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar8,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (pFVar8->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar8;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar6,Async);
  pFVar10->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadback'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar3 = param_4->Buffer;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10[1]._padding_ = (longlong)pFVar3;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->ReadbackBuffer).Reference;
  (param_4->ReadbackBuffer).Reference = (FRHIStagingBuffer *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = param_4->Offset;
  uVar2 = param_4->NumBytes;
  pFVar10[1].Name.EventFormat = (wchar_t *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = uVar2;
  pFVar10[1].Name.EventFormat = (wchar_t *)(param_4->Fence).Reference;
  (param_4->Fence).Reference = (FRHIGPUFence *)0x0;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_> @ 1492c87e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadbacks_::__l11::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FReadbackBufferParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  uint uVar2;
  FRDGBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  pFVar8 = FReadbackBufferParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar8,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (pFVar8->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar8;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar6,Async);
  pFVar10->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::`11'::<lambda_1>_>
        ::_vftable_;
  pFVar3 = param_4->Buffer;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10[1]._padding_ = (longlong)pFVar3;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->ReadbackBuffer).Reference;
  (param_4->ReadbackBuffer).Reference = (FRHIStagingBuffer *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = param_4->Offset;
  uVar2 = param_4->NumBytes;
  pFVar10[1].Name.EventFormat = (wchar_t *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = uVar2;
  pFVar10[1].Name.EventFormat = (wchar_t *)(param_4->Fence).Reference;
  (param_4->Fence).Reference = (FRHIGPUFence *)0x0;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_> @ 1492c89a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadbacks_::__l11::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FReadbackBufferParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  uint uVar2;
  FRDGBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  pFVar8 = FReadbackBufferParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar8,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (pFVar8->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar8;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar6,Async);
  pFVar10->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::`11'::<lambda_1>_>
        ::_vftable_;
  pFVar3 = param_4->Buffer;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10[1]._padding_ = (longlong)pFVar3;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->ReadbackBuffer).Reference;
  (param_4->ReadbackBuffer).Reference = (FRHIStagingBuffer *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = param_4->Offset;
  uVar2 = param_4->NumBytes;
  pFVar10[1].Name.EventFormat = (wchar_t *)0x0;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = uVar2;
  pFVar10[1].Name.EventFormat = (wchar_t *)(param_4->Fence).Reference;
  (param_4->Fence).Reference = (FRHIGPUFence *)0x0;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AllocObject<`FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>'::__l2::FClearUniformBuffers,TStridedView<FNiagaraShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&> @ 1492c9750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FClearUniformBuffers * __thiscall
FRDGBuilder::
AllocObject<_FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>_::__l2::FClearUniformBuffers,TStridedView<FNiagaraShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&>
          (FRDGBuilder *this,TStridedView<FNiagaraShader::FParameters,int> *param_1,
          FRHIUniformBufferLayout *param_2)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FClearUniformBuffers *pFVar8;
  undefined8 *local_18 [2];
  
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *puVar7 = &
              ___7__TObject_UFClearUniformBuffers__1____AllocParameters_VFParameters_FNiagaraShader___FRDGBuilder__QEAA_AV__TStridedView_VFParameters_FNiagaraShader__H__PEBVFShaderParametersMetadata__I_Z__FRDGAllocator__6B_
    ;
    pFVar3 = param_1->FirstElementPtr;
    uVar4 = *(undefined8 *)&param_1->BytesBetweenElements;
    puVar7[3] = param_2;
    puVar7[1] = pFVar3;
    puVar7[2] = uVar4;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar6 * 8) = local_18[0];
  return (FClearUniformBuffers *)(puVar7 + 1);
}

// ApplyAfter<`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_1>_&,TTuple<FName,float>_> @ 1492c9c20

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_1>_&,TTuple<FName,float>_>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,
          TTuple<FName,float> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UNiagaraParameterCollectionInstance *pUVar4;
  UNiagaraParameterCollectionInstance *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  pUVar4 = param_1->__this;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined4 *)&param_2->field_0x8;
  AcquireSRWLockExclusive((PSRWLOCK)&pUVar4->DirtyParameterLock);
  pUVar5 = param_1->__this;
  iVar7 = (pUVar5->DirtyScalarParameters).ArrayNum;
  piVar1 = &(pUVar5->DirtyScalarParameters).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(pUVar5->DirtyScalarParameters).AllocatorInstance,piVar1);
  }
  (pUVar5->DirtyScalarParameters).ArrayNum = iVar7 + 1;
  pFVar6 = (pUVar5->DirtyScalarParameters).AllocatorInstance.Data;
  *(undefined8 *)(pFVar6 + (longlong)iVar7 * 0xc) = uVar2;
  *(undefined4 *)(pFVar6 + (longlong)iVar7 * 0xc + 8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001492c9cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pUVar4->DirtyParameterLock);
  return;
}

// ApplyAfter<`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_2>_&,TTuple<FName,FLinearColor>_> @ 1492c9cc0

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_2>_&,TTuple<FName,FLinearColor>_>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_2> *param_1,
          TTuple<FName,FLinearColor> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  UNiagaraParameterCollectionInstance *pUVar4;
  UNiagaraParameterCollectionInstance *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar7 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)&param_2->field_0x8;
  pUVar4 = param_1->__this;
  uVar3 = *(undefined8 *)&param_2->field_0x10;
  AcquireSRWLockExclusive((PSRWLOCK)&pUVar4->DirtyParameterLock);
  pUVar5 = param_1->__this;
  iVar9 = (pUVar5->DirtyVectorParameters).ArrayNum;
  piVar1 = &(pUVar5->DirtyVectorParameters).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&(pUVar5->DirtyVectorParameters).AllocatorInstance,piVar1);
  }
  (pUVar5->DirtyVectorParameters).ArrayNum = iVar9 + 1;
  pFVar6 = (pUVar5->DirtyVectorParameters).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar2 = uVar7;
  *(undefined8 *)(pFVar2 + 8) = uVar8;
  *(undefined8 *)(pFVar6 + (longlong)iVar9 * 0x18 + 0x10) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001492c9d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pUVar4->DirtyParameterLock);
  return;
}

// CastChecked<UNiagaraDataInterface,UNiagaraDataInterfaceBase> @ 1492c9d70

UNiagaraDataInterface * __cdecl
CastChecked<UNiagaraDataInterface,UNiagaraDataInterfaceBase>(UNiagaraDataInterfaceBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterfaceBase *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterfaceBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterface,UObject> @ 1492c9e30

UNiagaraDataInterface * __cdecl CastChecked<UNiagaraDataInterface,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraLightRendererProperties,UObject> @ 1492c9ef0

UNiagaraLightRendererProperties * __cdecl
CastChecked<UNiagaraLightRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraLightRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraLightRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraLightRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraLightRendererProperties>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraMeshRendererProperties,UObject> @ 1492c9fb0

UNiagaraMeshRendererProperties * __cdecl
CastChecked<UNiagaraMeshRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraMeshRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraMeshRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraMeshRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraMeshRendererProperties>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FNiagaraVariable,int> @ 1492ca070

bool __cdecl
CompareItems<FNiagaraVariable,int>(FNiagaraVariable *param_1,FNiagaraVariable *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(longlong *)(lVar1 + (longlong)param_2) != param_2->_padding_) ||
         (*(int *)(lVar1 + 8 + (longlong)param_2) != (int)param_2->_padding_)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int> @ 1492ca0b0

void __cdecl
ConstructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
          (void *param_1,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *param_2,int param_3)

{
  FRHIResource *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(FRHIResource **)(lVar1 + (longlong)param_1);
      *(FRHIResource **)param_1 = this;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this);
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)(lVar1 + 8 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraFunctionSignature,FNiagaraFunctionSignature,int> @ 1492ca120

void __cdecl
ConstructItems<FNiagaraFunctionSignature,FNiagaraFunctionSignature,int>
          (void *param_1,FNiagaraFunctionSignature *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FNiagaraVariable *pFVar2;
  void *_Src;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x14);
    puVar5 = (uint *)&param_2->field_0x30;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      *(undefined8 *)((longlong)puVar5 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           *(undefined8 *)(puVar5 + -0xc);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      uVar3 = puVar5[-8];
      pFVar2 = *(FNiagaraVariable **)(puVar5 + -10);
      piVar4[-1] = uVar3;
      if (uVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar3,0,pFVar1,uVar3,piVar4);
        ConstructItems<FNiagaraVariable,FNiagaraVariable,int>(pFVar1->Data,pFVar2,uVar3);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      uVar3 = puVar5[-4];
      _Src = *(void **)(puVar5 + -6);
      piVar4[3] = uVar3;
      if (uVar3 == 0) {
        piVar4[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar3,0,(ForAnyElementType *)(piVar4 + 1),uVar3,piVar4 + 4);
        memcpy(((ForAnyElementType *)(piVar4 + 1))->Data,_Src,(longlong)(int)uVar3 * 0xc);
      }
      *(undefined8 *)(piVar4 + 5) = *(undefined8 *)(puVar5 + -2);
      uVar3 = (piVar4[7] ^ *puVar5) & 1 ^ piVar4[7];
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 2 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 4 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 8 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x10 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x20 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x40 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x80 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x100 ^ uVar3;
      piVar4[7] = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x200 ^ uVar3;
      piVar4[7] = uVar3;
      piVar4[7] = (uVar3 ^ *puVar5) & 0x400 ^ uVar3;
      piVar4[8] = puVar5[1];
      *(short *)(piVar4 + 9) = (short)puVar5[2];
      piVar4[10] = puVar5[3];
      *(short *)(piVar4 + 0xb) = (short)puVar5[4];
      *(undefined2 *)((longlong)piVar4 + 0x2e) = *(undefined2 *)((longlong)puVar5 + 0x12);
      *(undefined8 *)
       &((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          *)(piVar4 + 0xd))->Elements = 0;
      piVar4[0xf] = 0;
      piVar4[0x10] = 0;
      piVar4[0x15] = 0;
      piVar4[0x16] = 0;
      piVar4[0x17] = 0;
      piVar4[0x18] = 0x80;
      piVar4[0x19] = -1;
      piVar4[0x1a] = 0;
      piVar4[0x1d] = 0;
      piVar4[0x1e] = 0;
      piVar4[0x1f] = 0;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                 *)(piVar4 + 0xd),
                (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                 *)(puVar5 + 6));
      piVar4 = piVar4 + 0x26;
      puVar5 = puVar5 + 0x26;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int> @ 1492ca350

void __cdecl
DefaultConstructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGpuFrameResults::FDispatchResults,int> @ 1492ca380

void __cdecl
DefaultConstructItems<FNiagaraGpuFrameResults::FDispatchResults,int>(void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      ((FWeakObjectPtr *)(lVar1 + 4))->ObjectIndex = 0;
      *(undefined4 *)(lVar1 + 8) = 0;
      local_res8 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar1 + 4),(FObjectPtr)&local_res8);
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGpuDispatchGroup,int> @ 1492ca3f0

void __cdecl DefaultConstructItems<FNiagaraGpuDispatchGroup,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraMeshRendererMeshProperties,int> @ 1492ca430

void __cdecl
DefaultConstructItems<FNiagaraMeshRendererMeshProperties,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  FNiagaraTypeRegistry *this;
  double *pdVar4;
  
  if (param_2 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    do {
      pdVar4[-4] = 0.0;
      uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pdVar4[-3] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      pdVar4[-2] = (double)uVar1;
      pdVar4[-1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *pdVar4 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      pdVar4[1] = dVar2;
      pdVar4[2] = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar4[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar4[4] = (double)uVar1;
      pdVar4[5] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(pdVar4 + 6) = 0;
      pdVar4[7] = 0.0;
      if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
        iVar3 = -1;
      }
      else {
        this = FNiagaraTypeRegistry::Get();
        iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
      }
      *(int *)(pdVar4 + 8) = iVar3;
      *(undefined1 *)((longlong)pdVar4 + 0x44) = 0;
      pdVar4[9] = 0.0;
      *(undefined4 *)(pdVar4 + 10) = 0x3f800000;
      *(undefined1 *)((longlong)pdVar4 + 0x54) = 0;
      pdVar4[0xb] = 1.69759663277222e-313;
      pdVar4 = pdVar4 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraVariable,int> @ 1492ca530

void __cdecl DefaultConstructItems<FNiagaraVariable,int>(void *param_1,int param_2)

{
  int iVar1;
  FNiagaraTypeRegistry *this;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)((longlong)param_1 + 8);
    do {
      piVar2[-2] = 0;
      piVar2[-1] = 0;
      if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
        iVar1 = -1;
      }
      else {
        this = FNiagaraTypeRegistry::Get();
        iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(this,&FNiagaraTypeDefinition::Vec4Def);
      }
      *piVar2 = iVar1;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2 = piVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int> @ 1492ca5b0

void __cdecl
DefaultConstructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x30);
    do {
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 2;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraComputeInstanceData::FPerStageInfo,int> @ 1492ca5f0

void __cdecl
DefaultConstructItems<FNiagaraComputeInstanceData::FPerStageInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      *(int *)(lVar1 + 0xc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x14;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TRefCountPtr<FRHIUniformBuffer>,int> @ 1492ca630

void __cdecl DefaultConstructItems<TRefCountPtr<FRHIUniformBuffer>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int> @ 1492ca6a0

void __cdecl
DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
          (TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(FRHIResource **)param_1 != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,int> @ 1492ca6e0

void __cdecl
DestructItems<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,int>
          (TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int> @ 1492ca720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DestructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>
          (FDebugReadbackInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DebugInfo).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int> @ 1492ca760

void __cdecl
DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>(FGpuDispatchTimer *param_1,int param_2)

{
  FRHIPooledRenderQuery *this;
  
  if (param_2 != 0) {
    this = &param_1->StartQuery;
    do {
      FRHIPooledRenderQuery::~FRHIPooledRenderQuery(this + 1);
      FRHIPooledRenderQuery::~FRHIPooledRenderQuery(this);
      this = this + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraFunctionSignature,int> @ 1492ca7a0

void __cdecl
DestructItems<FNiagaraFunctionSignature,int>(FNiagaraFunctionSignature *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->FunctionSpecifiers).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)puVar1[-0x10],*(int *)(puVar1 + -0xf))
      ;
      if ((void *)puVar1[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x10]);
      }
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGPUSortInfo,int> @ 1492ca830

void __cdecl DestructItems<FNiagaraGPUSortInfo,int>(FNiagaraGPUSortInfo *param_1,int param_2)

{
  FRHIShaderResourceView *this;
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->GPUParticleCountSRV;
    do {
      this = (((FAllocationInfo *)(pTVar1 + 0x48))->BufferSRV).Reference;
      if (this != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
      if (pTVar1->Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      if (pTVar1[-3].Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[-3].Reference);
      }
      if (pTVar1[-4].Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[-4].Reference);
      }
      if (pTVar1[-5].Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[-5].Reference);
      }
      pTVar1 = pTVar1 + 0x54;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGpuDispatchGroup,int> @ 1492ca8b0

void __cdecl
DestructItems<FNiagaraGpuDispatchGroup,int>(FNiagaraGpuDispatchGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraGpuDispatchInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->DispatchInstances;
    do {
      pFVar1 = (((TArray<FNiagaraGpuFreeIDUpdate,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FNiagaraGpuDispatchGroup *)(pTVar2 + -1))->TicksWithPerInstanceData).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraMeshMaterialOverride,int> @ 1492ca910

void __cdecl
DestructItems<FNiagaraMeshMaterialOverride,int>(FNiagaraMeshMaterialOverride *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->UserParamBinding).Parameter.VarData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FNiagaraDataChannelDataProxy,1>,int> @ 1492ca950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FNiagaraDataChannelDataProxy,1>,int>
          (TSharedPtr<FNiagaraDataChannelDataProxy,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int> @ 1492ca990

void __cdecl
DestructItems<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int>
          (TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>
           *param_1,int param_2)

{
  FIndirectArgsPoolEntry *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FIndirectArgsPoolEntry *)0x0) {
      FRWBuffer::~FRWBuffer(&this->Buffer);
      operator_delete(this,0x40);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks360>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1492cb460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread_::__l2::TSTR_NiagaraFlushPendingTicks360>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks360>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1492cb5b1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1492cb7a5;
  }
LAB_1492cb5b1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1492cb68f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492cb68f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1492cb7a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1492cb7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::FlushAndWait_GameThread_::__l2::TSTR_NiagaraFlushPendingTicks373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks373>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1492cb931;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1492cbb25;
  }
LAB_1492cb931:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1492cba0f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492cba0f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1492cbb25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraGpuComputeDispatch::Tick'::__l2::TSTR_NiagaraPumpBatcher347>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1492cbb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::Tick_::__l2::TSTR_NiagaraPumpBatcher347>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraGpuComputeDispatch::Tick'::__l2::TSTR_NiagaraPumpBatcher347>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1492cbcb1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1492cbea5;
  }
LAB_1492cbcb1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1492cbd8f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492cbd8f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1492cbea5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`NiagaraLWCHelper::RebaseEmitters'::__l20::TSTR_RebaseGPUEmitter134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1492cbee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_NiagaraLWCHelper::RebaseEmitters_::__l20::TSTR_RebaseGPUEmitter134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`NiagaraLWCHelper::RebaseEmitters'::__l20::TSTR_RebaseGPUEmitter134>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1492cc031;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1492cc225;
  }
LAB_1492cc031:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1492cc10f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492cc10f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1492cc225:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForAllWorldManagers<`INiagaraModule::RefreshDataChannels'::__l5::<lambda_1>_> @ 1492cc260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::ForAllWorldManagers<_INiagaraModule::RefreshDataChannels_::__l5::<lambda_1>_>
          (<lambda_1> param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1492cc30d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar5 = local_res18 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_1492cc30d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1492cc420;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_1492cc420:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar6 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (lVar6 != 0) {
      FNiagaraDataChannelManager::RefreshDataChannels
                (*(FNiagaraDataChannelManager **)(lVar6 + 0x20c8));
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForAllWorldManagers<`INiagaraModule::OnDataChannelsEnabledChanged'::__l8::<lambda_1>_> @ 1492cc4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_INiagaraModule::OnDataChannelsEnabledChanged_::__l8::<lambda_1>_>
          (<lambda_1> param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1492cc54d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar5 = local_res18 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_1492cc54d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1492cc660;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_1492cc660:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar6 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (lVar6 != 0) {
      FNiagaraDataChannelManager::Init(*(FNiagaraDataChannelManager **)(lVar6 + 0x20c8));
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup'::__l11::<lambda_1>_> @ 1492cc6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  TObjectPtr<UClass>_u_0 local_1b0;
  UObject *local_1a8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  <lambda_1> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_1b0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1492cc7ff;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1492cc7ff:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_198 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_194 = 1;
  local_180 = 0;
  iStack_184 = iStack_198;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    iStack_198 = 0;
    local_180 = 0;
    while (uVar19 == 0) {
      iStack_198 = iStack_198 + 1;
      local_180 = local_180 + 0x20;
      iStack_184 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_1492cc89d;
      uVar19 = puVar21[iStack_198];
    }
    uStack_194 = ~(uVar19 - 1) & uVar19;
    uVar4 = (ulonglong)uStack_194 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b8 = (int)lVar15;
    iStack_184 = local_1b8 + -1 + local_180;
    if (iVar5 < iStack_184) {
      iStack_184 = iVar5;
    }
  }
LAB_1492cc89d:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = local_10c;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_178 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_188 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_168._28_4_ = local_10c;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = pTVar2;
  local_190 = puVar1;
  local_170 = pTVar2;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1492cc9a0;
      uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b4 = (int)lVar15;
    uVar19 = local_1b4 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_1492cc9a0:
  do {
    pTVar11 = local_170;
    if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
        (int)uStack_148) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar5 = local_40;
    TVar10 = local_1b0;
    if (((TStack_168.CurrentBitIndex == uVar19) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar17 == FVar3) break;
        local_1a8 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a8);
        }
        local_138[0].Helper = param_2->Helper;
        local_138[0].CollisionGroup = param_2->CollisionGroup;
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a8,local_138);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_168.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT
                (param_2->Helper,pUVar8,*param_2->CollisionGroup);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1c0 = *(longlong *)&pUVar8->field_0x258, local_1c0 != 0))
      {
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1c0) {
          FVar17 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_108.SecondaryData;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar17 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1c0;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup'::__l11::<lambda_1>_> @ 1492ccc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  TObjectPtr<UClass>_u_0 local_1a8;
  UObject *local_1a0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  <lambda_1> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1a8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1492cccff;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1492cccff:
  local_3c = 0x18;
  local_1b0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_190 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = 1;
  local_178 = 0;
  iStack_17c = iStack_190;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_190 = 0;
    local_178 = 0;
    while (uVar17 == 0) {
      iStack_190 = iStack_190 + 1;
      local_178 = local_178 + 0x20;
      iStack_17c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_190) goto LAB_1492ccda3;
      uVar17 = puVar20[iStack_190];
    }
    uStack_18c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_18c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b8 = (int)lVar15;
    iStack_17c = local_1b8 + -1 + local_178;
    if (iVar4 < iStack_17c) {
      iStack_17c = iVar4;
    }
  }
LAB_1492ccda3:
  uStack_174 = local_10c;
  iStack_170 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_180 = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_18c,iStack_190);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_160.CurrentBitIndex = iStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_160._28_4_ = local_10c;
  TStack_160.BaseBitIndex = local_178;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  local_198 = local_1b0;
  local_188 = puVar1;
  local_168 = local_1b0;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1b0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_1492cceb0;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b4 = (int)lVar15;
    uVar17 = local_1b4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_1492cceb0:
  do {
    pTVar12 = local_168;
    if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
        (int)uStack_140) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar4 = local_40;
    TVar11 = local_1a8;
    if (((TStack_160.CurrentBitIndex == uVar17) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar2) break;
        local_1a0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a0);
        }
        local_138[0].Helper = param_2->Helper;
        local_138[0].CollisionGroup = param_2->CollisionGroup;
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a0,local_138);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT
                  (param_2->Helper,pUVar8,*param_2->CollisionGroup);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1c0 = *(longlong *)&pUVar8->field_0x258, local_1c0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1c0;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// GetFullNameForCastLogError<UNiagaraDataInterfaceBase> @ 1492cd140

FString * __cdecl
GetFullNameForCastLogError<UNiagaraDataInterfaceBase>
          (FString *__return_storage_ptr__,UNiagaraDataInterfaceBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterface> @ 1492cd290

FString * __cdecl GetTypeName<UNiagaraDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraLightRendererProperties> @ 1492cd2d0

FString * __cdecl GetTypeName<UNiagaraLightRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraLightRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraMeshRendererProperties> @ 1492cd310

FString * __cdecl GetTypeName<UNiagaraMeshRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraMeshRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,`FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>_>_> @ 1492cd420

void __cdecl
AlgoImpl::
HeapSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,_FNiagaraTypeDefinition::GetNumericOutputType_::__l2::<lambda_1>_>_>
          (FNiagaraTypeDefinition *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraTypeDefinition,_public:_static_struct_FNiagaraTypeDefinition___cdecl_FNiagaraTypeDefinition::GetNumericOutputType(TArrayView<FNiagaraTypeDefinition_const_,int>,ENiagaraNumericOutputTypeSelectionMode)_::_2_::<lambda_1>_>
          param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  code *pcVar2;
  int iVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  ushort uVar5;
  uchar uVar6;
  undefined1 uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  ushort uVar11;
  uchar uVar12;
  undefined1 uVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  FNiagaraTypeDefinition *pFVar22;
  FNiagaraTypeDefinition *pFVar23;
  longlong lVar24;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar3 = iVar19;
  iVar21 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_1492cd562:
      if (iVar21 == 0) {
        iVar19 = param_2 + -1;
        lVar24 = (longlong)iVar19;
        if (0 < iVar19) {
          pFVar22 = param_1 + lVar24;
          do {
            uVar5 = pFVar22->UnderlyingType;
            uVar6 = pFVar22->Flags;
            uVar7 = pFVar22->field_0xb;
            sVar8 = pFVar22->Size;
            sVar9 = pFVar22->Alignment;
            iVar18 = 0;
            iVar3 = param_1->RegisteredTypeDefIndex;
            uVar16 = param_1->UnderlyingTypePathNameHash;
            TVar4 = (param_1->ClassStructOrEnum).field0_0x0;
            uVar11 = param_1->UnderlyingType;
            uVar12 = param_1->Flags;
            uVar13 = param_1->field_0xb;
            sVar14 = param_1->Size;
            sVar15 = param_1->Alignment;
            (param_1->ClassStructOrEnum).field0_0x0 = (pFVar22->ClassStructOrEnum).field0_0x0;
            param_1->UnderlyingType = uVar5;
            param_1->Flags = uVar6;
            param_1->field_0xb = uVar7;
            param_1->Size = sVar8;
            param_1->Alignment = sVar9;
            uVar10 = pFVar22->UnderlyingTypePathNameHash;
            param_1->RegisteredTypeDefIndex = pFVar22->RegisteredTypeDefIndex;
            param_1->UnderlyingTypePathNameHash = uVar10;
            (pFVar22->ClassStructOrEnum).field0_0x0 = TVar4;
            pFVar22->UnderlyingType = uVar11;
            pFVar22->Flags = uVar12;
            pFVar22->field_0xb = uVar13;
            pFVar22->Size = sVar14;
            pFVar22->Alignment = sVar15;
            pFVar22->RegisteredTypeDefIndex = iVar3;
            pFVar22->UnderlyingTypePathNameHash = uVar16;
            if (1 < iVar19) {
              do {
                iVar3 = iVar18 * 2;
                iVar21 = iVar3 + 1;
                if (iVar3 + 2 < iVar19) {
                  bVar17 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::
                           operator()(param_4.Predicate,param_1 + (iVar3 + 2),param_1 + iVar21);
                  if (bVar17) {
                    iVar21 = iVar3;
                  }
                  iVar21 = iVar21 + 1;
                }
                pFVar23 = param_1 + iVar21;
                pFVar1 = param_1 + iVar18;
                bVar17 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::
                         operator()(param_4.Predicate,pFVar1,pFVar23);
                if (!bVar17) break;
                uVar5 = pFVar23->UnderlyingType;
                uVar6 = pFVar23->Flags;
                uVar7 = pFVar23->field_0xb;
                sVar8 = pFVar23->Size;
                sVar9 = pFVar23->Alignment;
                iVar3 = pFVar1->RegisteredTypeDefIndex;
                uVar16 = pFVar1->UnderlyingTypePathNameHash;
                TVar4 = (pFVar1->ClassStructOrEnum).field0_0x0;
                uVar11 = pFVar1->UnderlyingType;
                uVar12 = pFVar1->Flags;
                uVar13 = pFVar1->field_0xb;
                sVar14 = pFVar1->Size;
                sVar15 = pFVar1->Alignment;
                (pFVar1->ClassStructOrEnum).field0_0x0 = (pFVar23->ClassStructOrEnum).field0_0x0;
                pFVar1->UnderlyingType = uVar5;
                pFVar1->Flags = uVar6;
                pFVar1->field_0xb = uVar7;
                pFVar1->Size = sVar8;
                pFVar1->Alignment = sVar9;
                uVar10 = pFVar23->UnderlyingTypePathNameHash;
                pFVar1->RegisteredTypeDefIndex = pFVar23->RegisteredTypeDefIndex;
                pFVar1->UnderlyingTypePathNameHash = uVar10;
                (pFVar23->ClassStructOrEnum).field0_0x0 = TVar4;
                pFVar23->UnderlyingType = uVar11;
                pFVar23->Flags = uVar12;
                pFVar23->field_0xb = uVar13;
                pFVar23->Size = sVar14;
                pFVar23->Alignment = sVar15;
                pFVar23->RegisteredTypeDefIndex = iVar3;
                pFVar23->UnderlyingTypePathNameHash = uVar16;
                iVar18 = iVar21;
              } while (iVar21 * 2 + 1 < iVar19);
            }
            iVar19 = iVar19 + -1;
            lVar24 = lVar24 + -1;
            pFVar22 = pFVar22 + -1;
          } while (0 < lVar24);
        }
        return;
      }
      iVar18 = iVar21 + -1;
      iVar19 = iVar3 + -2;
      iVar3 = iVar19;
      iVar21 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar20 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      bVar17 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
                         (param_4.Predicate,param_1 + (iVar19 + 2),param_1 + iVar20);
      if (bVar17) {
        iVar20 = iVar19;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar22 = param_1 + iVar20;
    pFVar23 = param_1 + iVar18;
    bVar17 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
                       (param_4.Predicate,pFVar23,pFVar22);
    if (!bVar17) goto LAB_1492cd562;
    uVar5 = pFVar22->UnderlyingType;
    uVar6 = pFVar22->Flags;
    uVar7 = pFVar22->field_0xb;
    sVar8 = pFVar22->Size;
    sVar9 = pFVar22->Alignment;
    iVar19 = iVar20 * 2 + 1;
    iVar18 = pFVar23->RegisteredTypeDefIndex;
    uVar16 = pFVar23->UnderlyingTypePathNameHash;
    TVar4 = (pFVar23->ClassStructOrEnum).field0_0x0;
    uVar11 = pFVar23->UnderlyingType;
    uVar12 = pFVar23->Flags;
    uVar13 = pFVar23->field_0xb;
    sVar14 = pFVar23->Size;
    sVar15 = pFVar23->Alignment;
    (pFVar23->ClassStructOrEnum).field0_0x0 = (pFVar22->ClassStructOrEnum).field0_0x0;
    pFVar23->UnderlyingType = uVar5;
    pFVar23->Flags = uVar6;
    pFVar23->field_0xb = uVar7;
    pFVar23->Size = sVar8;
    pFVar23->Alignment = sVar9;
    uVar10 = pFVar22->UnderlyingTypePathNameHash;
    pFVar23->RegisteredTypeDefIndex = pFVar22->RegisteredTypeDefIndex;
    pFVar23->UnderlyingTypePathNameHash = uVar10;
    (pFVar22->ClassStructOrEnum).field0_0x0 = TVar4;
    pFVar22->UnderlyingType = uVar11;
    pFVar22->Flags = uVar12;
    pFVar22->field_0xb = uVar13;
    pFVar22->Size = sVar14;
    pFVar22->Alignment = sVar15;
    pFVar22->RegisteredTypeDefIndex = iVar18;
    pFVar22->UnderlyingTypePathNameHash = uVar16;
    iVar18 = iVar20;
  } while( true );
}

// InternalConstructor<ANiagaraLensEffectBase> @ 1492cda50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl InternalConstructor<ANiagaraLensEffectBase>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  ANiagaraActor *this;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  double dVar4;
  __m128d _Var5;
  __m128d _Var6;
  FName *pFVar7;
  FName local_res8;
  FName local_res10;
  
  this = (ANiagaraActor *)param_1->Obj;
  if (this != (ANiagaraActor *)0x0) {
    pFVar7 = FName::FName(&local_res8,L"Sprite");
    FVar2 = *pFVar7;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    pFVar7 = FName::FName(&local_res10,L"ArrowComponent0");
    FVar2 = *pFVar7;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    ANiagaraActor::ANiagaraActor(this,param_1);
    this->_padding_ = (longlong)&ANiagaraLensEffectBase::_vftable__for__ANiagaraActor__;
    this[1]._padding_ =
         (longlong)&ANiagaraLensEffectBase::_vftable__for__ICameraLensEffectInterface__;
    dVar4 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar4;
    dVar4 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar4;
    dVar4 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar4;
    dVar4 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar4;
    dVar4 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    _Var5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    this[1]._padding_ = (longlong)dVar4;
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
    _Var6 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] = _Var5.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] = _Var5.m128d_f64[1];
    dVar4 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Scale3D.ZW = _Var6;
    this[1]._padding_ = (longlong)dVar4;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42a00000;
    ANiagaraActor::SetDestroyOnSystemFinish(this,true);
    pUVar3 = (this->NiagaraComponent).field0_0x0.DebugPtr;
    if (pUVar3 != (UNiagaraComponent *)0x0) {
      pbVar1 = (byte *)((longlong)&pUVar3->_padding_ + 5);
      *pbVar1 = *pbVar1 | 2;
      pbVar1 = (byte *)((longlong)&pUVar3->_padding_ + 2);
      *pbVar1 = *pbVar1 & 0xf7;
    }
  }
  return;
}

// InternalConstructor<UNiagaraEventReceiverEmitterAction> @ 1492cdbc0

void __cdecl InternalConstructor<UNiagaraEventReceiverEmitterAction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraEventReceiverEmitterAction_SpawnParticles> @ 1492cdbf0

void __cdecl
InternalConstructor<UNiagaraEventReceiverEmitterAction_SpawnParticles>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction_SpawnParticles__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraFunctionLibrary> @ 1492cdc20

void __cdecl InternalConstructor<UNiagaraFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UNiagaraFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraLightRendererProperties> @ 1492cdc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraLightRendererProperties>(FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  UNiagaraRendererProperties *this;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FNiagaraTypeRegistry *pFVar13;
  
  this = (UNiagaraRendererProperties *)param_1->Obj;
  if (this == (UNiagaraRendererProperties *)0x0) {
    return;
  }
  UNiagaraRendererProperties::UNiagaraRendererProperties(this);
  *(undefined1 *)&this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7UNiagaraLightRendererProperties__6B_;
  uVar10 = *(uint *)((longlong)&this[1]._padding_ + 4);
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  *(uint *)((longlong)&this[1]._padding_ + 4) = uVar10 & 0xffffffe1 | 1;
  *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this[1].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4) = 0;
  *(undefined8 *)&this[1].Platforms.DeviceProfileStates.ArrayMax = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)((longlong)&this[1].Platforms.CVarConditions.AllocatorInstance.Data + 4) = iVar12;
  puVar2 = &this[1].Platforms.field_0x24;
  pbVar6 = (byte *)((longlong)&this[1].Platforms.QualityLevelMask + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[1].Platforms.QualityLevelMask + 1);
  *pbVar6 = *pbVar6 | 2;
  this[1].Platforms.CVarConditions.ArrayNum = 0;
  this[1].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined1 *)&this[1].Platforms.QualityLevelMask = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)&this[1].Platforms.field_0x2c = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  this[1].MotionVectorSetting = (char)iVar12;
  this[1].bIsEnabled = (bool)(char)((uint)iVar12 >> 8);
  this[1].bAllowInCullProxies = (bool)(char)((uint)iVar12 >> 0x10);
  this[1].field_0x5f = (char)((uint)iVar12 >> 0x18);
  puVar3 = &this[1].RendererEnabledBinding.ParamMapVariable.Name.Number;
  pbVar6 = (byte *)((longlong)
                    &this[1].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value + 1)
  ;
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)
                    &this[1].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value + 1)
  ;
  *pbVar6 = *pbVar6 | 2;
  this[1].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this[1].RendererEnabledBinding.RootName.Number = 0;
  *(undefined1 *)&this[1].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  *(undefined8 *)puVar3 = 0;
  this[1].RendererEnabledBinding.DataSetName.ComparisonIndex = 0;
  this[1].RendererEnabledBinding.DataSetName.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this[1].RendererEnabledBinding.BindingSourceMode = iVar12;
  puVar4 = &this[1].OuterEmitterVersion.D;
  pbVar6 = (byte *)((longlong)&this[1].OuterEmitterVersion.C + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[1].OuterEmitterVersion.C + 1);
  *pbVar6 = *pbVar6 | 2;
  this[1].OuterEmitterVersion.A = 0;
  this[1].OuterEmitterVersion.B = 0;
  *(undefined1 *)&this[1].OuterEmitterVersion.C = 0;
  *(undefined8 *)puVar4 = 0;
  *(undefined8 *)((longlong)&this[1].AttributeBindings.AllocatorInstance.Data + 4) = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  this[1].AttributeBindings.ArrayMax = iVar12;
  puVar5 = (undefined8 *)((longlong)&this[2]._padding_ + 4);
  pbVar6 = (byte *)((longlong)&this[2]._padding_ + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[2]._padding_ + 1);
  *pbVar6 = *pbVar6 | 2;
  this[2]._padding_ = 0;
  *(undefined1 *)&this[2]._padding_ = 0;
  *puVar5 = 0;
  *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)((longlong)&this[2]._padding_ + 4) = iVar12;
  puVar7 = (undefined8 *)
           ((longlong)&this[2].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4);
  pbVar6 = (byte *)((longlong)&this[2].Platforms.DeviceProfileStates.AllocatorInstance.Data + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[2].Platforms.DeviceProfileStates.AllocatorInstance.Data + 1);
  *pbVar6 = *pbVar6 | 2;
  this[2]._padding_ = 0;
  *(undefined1 *)&this[2].Platforms.DeviceProfileStates.AllocatorInstance.Data = 0;
  *puVar7 = 0;
  *(undefined8 *)&this[2].Platforms.DeviceProfileStates.ArrayMax = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)((longlong)&this[2].Platforms.CVarConditions.AllocatorInstance.Data + 4) = iVar12;
  puVar8 = &this[2].Platforms.field_0x24;
  pbVar6 = (byte *)((longlong)&this[2].Platforms.QualityLevelMask + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[2].Platforms.QualityLevelMask + 1);
  *pbVar6 = *pbVar6 | 2;
  this[2].Platforms.CVarConditions.ArrayNum = 0;
  this[2].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined1 *)&this[2].Platforms.QualityLevelMask = 0;
  *(undefined8 *)puVar8 = 0;
  *(undefined8 *)&this[2].Platforms.field_0x2c = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  this[2].MotionVectorSetting = (char)iVar12;
  this[2].bIsEnabled = (bool)(char)((uint)iVar12 >> 8);
  this[2].bAllowInCullProxies = (bool)(char)((uint)iVar12 >> 0x10);
  this[2].field_0x5f = (char)((uint)iVar12 >> 0x18);
  puVar9 = &this[2].RendererEnabledBinding.ParamMapVariable.Name.Number;
  pbVar6 = (byte *)((longlong)
                    &this[2].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value + 1)
  ;
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)
                    &this[2].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value + 1)
  ;
  *pbVar6 = *pbVar6 | 2;
  this[2].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this[2].RendererEnabledBinding.RootName.Number = 0;
  *(undefined1 *)&this[2].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  *(undefined8 *)puVar9 = 0;
  this[2].RendererEnabledBinding.DataSetName.ComparisonIndex = 0;
  this[2].RendererEnabledBinding.DataSetName.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this[2].RendererEnabledBinding.BindingSourceMode = iVar12;
  pbVar6 = (byte *)((longlong)&this[2].OuterEmitterVersion.C + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[2].OuterEmitterVersion.C + 1);
  *pbVar6 = *pbVar6 | 2;
  this[2].OuterEmitterVersion.A = 0;
  this[2].OuterEmitterVersion.B = 0;
  *(undefined1 *)&this[2].OuterEmitterVersion.C = 0;
  *(undefined8 *)&this[2].OuterEmitterVersion.D = 0;
  *(undefined8 *)((longlong)&this[2].AttributeBindings.AllocatorInstance.Data + 4) = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  this[2].AttributeBindings.ArrayMax = iVar12;
  pbVar6 = (byte *)((longlong)&this[3]._padding_ + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  pbVar6 = (byte *)((longlong)&this[3]._padding_ + 1);
  *pbVar6 = *pbVar6 | 2;
  this[3]._padding_ = 0;
  *(undefined1 *)&this[3]._padding_ = 0;
  *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
  *(undefined4 *)&this[3]._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
  *(undefined4 *)&this[3]._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
  *(undefined4 *)&this[3]._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
  *(undefined4 *)&this[3].Platforms.DeviceProfileStates.AllocatorInstance.Data = 0xffffffff;
  *(undefined1 *)((longlong)&this[3].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4) = 1;
  this[3].Platforms.DeviceProfileStates.ArrayNum = -1;
  this[3].Platforms.DeviceProfileStates.ArrayMax = -1;
  this[3].Platforms.CVarConditions.AllocatorInstance.Data =
       (FScriptContainerElement *)0xffffffffffffffff;
  *(undefined1 *)&this[3].Platforms.CVarConditions.ArrayNum = 1;
  this[3].Platforms.CVarConditions.ArrayMax = -1;
  *(undefined1 *)&this[3].Platforms.QualityLevelMask = 1;
  *(undefined4 *)&this[3].Platforms.field_0x24 = 0xffffffff;
  piVar1 = &(this->AttributeBindings).ArrayMax;
  (this->AttributeBindings).ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,9,*piVar1,&(this->AttributeBindings).AllocatorInstance,9,piVar1);
  pFVar11 = (this->AttributeBindings).AllocatorInstance.Data;
  *(undefined1 **)pFVar11 =
       (undefined1 *)((longlong)&this[1].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4);
  *(undefined1 **)(pFVar11 + 8) = puVar2;
  *(uint **)(pFVar11 + 0x10) = puVar3;
  *(uint **)(pFVar11 + 0x18) = puVar4;
  *(undefined8 **)(pFVar11 + 0x20) = puVar5;
  *(undefined8 **)(pFVar11 + 0x28) = puVar7;
  *(undefined1 **)(pFVar11 + 0x30) = puVar8;
  *(uint **)(pFVar11 + 0x38) = puVar9;
  *(uint **)(pFVar11 + 0x40) = &this[2].OuterEmitterVersion.D;
  return;
}

// InternalConstructor<UNiagaraMeshRendererProperties> @ 1492cdc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraMeshRendererProperties>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FGuid *pFVar3;
  FNiagaraTypeDefinitionHandle *this;
  int *this_00;
  uint *this_01;
  UNiagaraRendererProperties *this_02;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FNiagaraTypeRegistry *pFVar8;
  undefined1 auStack_118 [32];
  initializer_list<FNiagaraVariableAttributeBinding_const_*> iStack_f8;
  UNiagaraRendererProperties *pUStack_e8;
  int *piStack_e0;
  longlong *plStack_d8;
  FGuid *pFStack_d0;
  FNiagaraVariableAttributeBinding *pFStack_c8;
  UNiagaraRendererProperties *pUStack_c0;
  int *piStack_b8;
  longlong *plStack_b0;
  UNiagaraRendererProperties *pUStack_a8;
  longlong *plStack_a0;
  int *piStack_98;
  FNiagaraVariableAttributeBinding *pFStack_90;
  FGuid *pFStack_88;
  FNiagaraVariableAttributeBinding *pFStack_80;
  FNiagaraTypeDefinitionHandle *pFStack_78;
  TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_> *pTStack_70;
  longlong *plStack_68;
  int *piStack_60;
  uint *puStack_58;
  FGuid *pFStack_50;
  UNiagaraRendererProperties *pUStack_48;
  FNiagaraVariableAttributeBinding *pFStack_40;
  ulonglong uStack_38;
  
  this_02 = (UNiagaraRendererProperties *)param_1->Obj;
  if (this_02 == (UNiagaraRendererProperties *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  UNiagaraRendererProperties::UNiagaraRendererProperties(this_02);
  this_02->_padding_ =
       (longlong)&UNiagaraMeshRendererProperties::_vftable__for__UNiagaraRendererProperties__;
  iVar7 = -1;
  this_02[1]._padding_ = 0;
  this_02[1]._padding_ =
       (longlong)
       &UNiagaraMeshRendererProperties::_vftable__for__INiagaraRenderableMeshArrayInterface__;
  this_02[1]._padding_ = 0;
  this_02[1]._padding_ = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[1]._padding_ = iVar6;
  uVar5 = *(uint *)&this_02[1].Platforms.DeviceProfileStates.AllocatorInstance.Data;
  pbVar1 = (byte *)((longlong)&this_02[1].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4);
  *pbVar1 = *pbVar1 | 1;
  this_02[1].Platforms.DeviceProfileStates.ArrayNum = 0;
  this_02[1].Platforms.DeviceProfileStates.ArrayMax = 0;
  this_02[1].Platforms.CVarConditions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_02[1].Platforms.CVarConditions.ArrayNum = 0;
  this_02[1].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined8 *)&this_02[1].Platforms.QualityLevelMask = 0;
  this_02[1].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this_02[1].RendererEnabledBinding.RootName.Number = 0;
  this_02[1].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex = 0;
  this_02[1].RendererEnabledBinding.ParamMapVariable.Name.Number = 0;
  *(uint *)&this_02[1].Platforms.DeviceProfileStates.AllocatorInstance.Data = uVar5 & 0xffffffbe | 6
  ;
  *(undefined8 *)&this_02[1].Platforms.LastBuiltFrame = 0x3ff0000000000000;
  this_02[1].SortOrderHint = 0;
  this_02[1].MotionVectorSetting = AutoDetect;
  this_02[1].bIsEnabled = false;
  this_02[1].bAllowInCullProxies = true;
  this_02[1].field_0x5f = 0x3f;
  *(undefined8 *)&this_02[1].RendererEnabledBinding.ParamMapVariable.TypeDefHandle =
       0x3ff0000000000000;
  *(undefined4 *)((longlong)&this_02[1]._padding_ + 4) = 0;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)&this_02[1].RendererEnabledBinding.DataSetName.Number =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)&this_02[1].OuterEmitterVersion = uVar4;
  *(double *)&this_02[1].OuterEmitterVersion.C =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this_02[2]._padding_ = 0;
  *(undefined2 *)&this_02[1].AttributeBindings.AllocatorInstance.Data = 0;
  this_02[1].AttributeBindings.ArrayNum = 0x447a0000;
  this_02[1].AttributeBindings.ArrayMax = 0;
  this_02[2]._padding_ = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[2]._padding_ = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[2]._padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[2]._padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[2]._padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this_02[2]._padding_ + 4) = 0;
  this_02[2]._padding_ = 0;
  this_02[2].Platforms.DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[2].Platforms.DeviceProfileStates.ArrayNum = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[2].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[2].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)&this_02[2].Platforms.DeviceProfileStates.ArrayMax = 0;
  *(undefined1 *)((longlong)&this_02[2].Platforms.CVarConditions.AllocatorInstance.Data + 4) = 0;
  this_02[2].Platforms.CVarConditions.ArrayNum = 0;
  this_02[2].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined8 *)&this_02[2].Platforms.QualityLevelMask = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    uVar5 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[2].Platforms.LastBuiltFrame = uVar5;
  this_02[2].bIsEnabled = (bool)(this_02[2].bIsEnabled & 0xfe);
  this_02[2].bIsEnabled = (bool)(this_02[2].bIsEnabled | 2);
  *(undefined8 *)&this_02[2].Platforms.field_0x2c = 0;
  this_02[2].MotionVectorSetting = AutoDetect;
  this_02[2].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this_02[2].RendererEnabledBinding.RootName.Number = 0;
  this_02[2].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex = 0;
  this_02[2].RendererEnabledBinding.ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[2].RendererEnabledBinding.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  this_02[2].RendererEnabledBinding.bBindingExistsOnSource = '\0';
  this_02[2].RendererEnabledBinding.bIsCachedParticleValue = '\x01';
  this_02[2].RendererEnabledBinding.DataSetName.ComparisonIndex = 0;
  this_02[2].RendererEnabledBinding.DataSetName.Number = 0;
  this_02[2].RendererEnabledBinding.BindingSourceMode.Value = '\0';
  this_02[2].OuterEmitterVersion.A = 0;
  this_02[2].OuterEmitterVersion.B = 0;
  this_02[2].OuterEmitterVersion.C = 0;
  this_02[2].OuterEmitterVersion.D = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[2].AttributeBindings.AllocatorInstance.Data = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[2].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[2].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[2].AttributeBindings.AllocatorInstance.Data + 4) = 0;
  *(undefined1 *)&this_02[2].AttributeBindings.ArrayMax = 0;
  this_02[3]._padding_ = 0;
  this_02[3]._padding_ = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[3]._padding_ = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[3]._padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[3]._padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[3]._padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this_02[3]._padding_ + 4) = 0;
  this_02[3]._padding_ = 0;
  this_02[3].Platforms.DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[3].Platforms.DeviceProfileStates.ArrayNum = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[3].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[3].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)&this_02[3].Platforms.DeviceProfileStates.ArrayMax = 0;
  *(undefined1 *)((longlong)&this_02[3].Platforms.CVarConditions.AllocatorInstance.Data + 4) = 0;
  this_02[3].Platforms.CVarConditions.ArrayNum = 0;
  this_02[3].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined8 *)&this_02[3].Platforms.QualityLevelMask = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    uVar5 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[3].Platforms.LastBuiltFrame = uVar5;
  this_02[3].bIsEnabled = (bool)(this_02[3].bIsEnabled & 0xfe);
  this_02[3].bIsEnabled = (bool)(this_02[3].bIsEnabled | 2);
  *(undefined8 *)&this_02[3].Platforms.field_0x2c = 0;
  this_02[3].MotionVectorSetting = AutoDetect;
  this_02[3].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this_02[3].RendererEnabledBinding.RootName.Number = 0;
  this_02[3].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex = 0;
  this_02[3].RendererEnabledBinding.ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[3].RendererEnabledBinding.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  this_02[3].RendererEnabledBinding.bBindingExistsOnSource = '\0';
  this_02[3].RendererEnabledBinding.bIsCachedParticleValue = '\x01';
  this_02[3].RendererEnabledBinding.DataSetName.ComparisonIndex = 0;
  this_02[3].RendererEnabledBinding.DataSetName.Number = 0;
  this_02[3].RendererEnabledBinding.BindingSourceMode.Value = '\0';
  this_02[3].OuterEmitterVersion.A = 0;
  this_02[3].OuterEmitterVersion.B = 0;
  this_02[3].OuterEmitterVersion.C = 0;
  this_02[3].OuterEmitterVersion.D = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[3].AttributeBindings.AllocatorInstance.Data = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[3].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[3].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[3].AttributeBindings.AllocatorInstance.Data + 4) = 0;
  *(undefined1 *)&this_02[3].AttributeBindings.ArrayMax = 0;
  this_02[4]._padding_ = 0;
  this_02[4]._padding_ = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[4]._padding_ = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[4]._padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[4]._padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[4]._padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this_02[4]._padding_ + 4) = 0;
  this_02[4]._padding_ = 0;
  this_02[4].Platforms.DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[4].Platforms.DeviceProfileStates.ArrayNum = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[4].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[4].Platforms.CVarConditions.AllocatorInstance.Data + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)&this_02[4].Platforms.DeviceProfileStates.ArrayMax = 0;
  *(undefined1 *)((longlong)&this_02[4].Platforms.CVarConditions.AllocatorInstance.Data + 4) = 0;
  this_02[4].Platforms.CVarConditions.ArrayNum = 0;
  this_02[4].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined8 *)&this_02[4].Platforms.QualityLevelMask = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    uVar5 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[4].Platforms.LastBuiltFrame = uVar5;
  this_02[4].bIsEnabled = (bool)(this_02[4].bIsEnabled & 0xfe);
  this_02[4].bIsEnabled = (bool)(this_02[4].bIsEnabled | 2);
  *(undefined8 *)&this_02[4].Platforms.field_0x2c = 0;
  this_02[4].MotionVectorSetting = AutoDetect;
  this_02[4].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this_02[4].RendererEnabledBinding.RootName.Number = 0;
  this_02[4].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex = 0;
  this_02[4].RendererEnabledBinding.ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  this_02[4].RendererEnabledBinding.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  pFVar3 = &this_02[4].OuterEmitterVersion;
  this_02[4].RendererEnabledBinding.bBindingExistsOnSource = '\0';
  this_02[4].RendererEnabledBinding.bIsCachedParticleValue = '\x01';
  this_02[4].RendererEnabledBinding.DataSetName.ComparisonIndex = 0;
  this_02[4].RendererEnabledBinding.DataSetName.Number = 0;
  this_02[4].RendererEnabledBinding.BindingSourceMode.Value = '\0';
  pFVar3->A = 0;
  pFVar3->B = 0;
  this_02[4].OuterEmitterVersion.C = 0;
  this_02[4].OuterEmitterVersion.D = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[4].AttributeBindings.AllocatorInstance.Data = iVar6;
  pbVar1 = (byte *)((longlong)&this_02[4].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[4].AttributeBindings.ArrayMax + 1);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[4].AttributeBindings.AllocatorInstance.Data + 4) = 0;
  *(undefined1 *)&this_02[4].AttributeBindings.ArrayMax = 0;
  this_02[5]._padding_ = 0;
  this_02[5]._padding_ = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar7 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  *(int *)&this_02[5]._padding_ = iVar7;
  this = &this_02[5].RendererEnabledBinding.ParamMapVariable.TypeDefHandle;
  pbVar1 = (byte *)((longlong)&this_02[5]._padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_02[5]._padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this_02[5]._padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this_02[5]._padding_ + 4) = 0;
  this_02[5]._padding_ = 0;
  this_02[5].Platforms.DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_02[5].Platforms.DeviceProfileStates.ArrayNum = 0;
  this_02[5].Platforms.DeviceProfileStates.ArrayMax = 0;
  this_02[5].Platforms.CVarConditions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_02[5].Platforms.CVarConditions.ArrayNum = 0;
  this_02[5].Platforms.CVarConditions.ArrayMax = 0;
  *(undefined8 *)&this_02[5].Platforms.QualityLevelMask = 0;
  *(undefined8 *)&this_02[5].Platforms.LastBuiltFrame = 0;
  this_02[5].SortOrderHint = 0;
  this_02[5].MotionVectorSetting = AutoDetect;
  this_02[5].bIsEnabled = false;
  this_02[5].bAllowInCullProxies = false;
  this_02[5].field_0x5f = 0;
  this_02[5].RendererEnabledBinding.RootName.ComparisonIndex = 0;
  this_02[5].RendererEnabledBinding.RootName.Number = 0;
  this_02[5].RendererEnabledBinding.ParamMapVariable.Name.ComparisonIndex = 0;
  this_02[5].RendererEnabledBinding.ParamMapVariable.Name.Number = 0;
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            ((FNiagaraVariableAttributeBinding *)this);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            ((FNiagaraVariableAttributeBinding *)&this_02[5].AttributeBindings);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            ((FNiagaraVariableAttributeBinding *)&this_02[6]._padding_);
  this_00 = &this_02[6].Platforms.DeviceProfileStates.ArrayNum;
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            ((FNiagaraVariableAttributeBinding *)this_00);
  this_01 = &this_02[6].Platforms.LastBuiltFrame;
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            ((FNiagaraVariableAttributeBinding *)this_01);
  this_02[6].RendererEnabledBinding.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = 0;
  pUStack_48 = this_02 + 5;
  *(undefined8 *)&this_02[6].RendererEnabledBinding.DataSetName.Number = 0;
  this_02[6].OuterEmitterVersion.A = 0;
  this_02[6].OuterEmitterVersion.B = 0;
  this_02[6].OuterEmitterVersion.C = 0;
  this_02[6].OuterEmitterVersion.D = 0;
  this_02[6].AttributeBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_02[6].AttributeBindings.ArrayNum = 0;
  this_02[6].AttributeBindings.ArrayMax = 0;
  this_02[7]._padding_ = 0;
  this_02[7]._padding_ = 0;
  this_02[7]._padding_ = 0;
  this_02[7]._padding_ = 0;
  this_02[7]._padding_ = 0;
  pUStack_e8 = this_02 + 2;
  piStack_e0 = &this_02[2].Platforms.CVarConditions.ArrayNum;
  plStack_d8 = &this_02[2]._padding_;
  pFStack_d0 = &this_02[2].OuterEmitterVersion;
  pFStack_c8 = &this_02[2].RendererEnabledBinding;
  pUStack_c0 = this_02 + 4;
  piStack_b8 = &this_02[4].Platforms.CVarConditions.ArrayNum;
  plStack_b0 = &this_02[4]._padding_;
  pUStack_a8 = this_02 + 3;
  plStack_a0 = &this_02[3]._padding_;
  piStack_98 = &this_02[3].Platforms.CVarConditions.ArrayNum;
  pFStack_90 = &this_02[3].RendererEnabledBinding;
  pFStack_88 = &this_02[3].OuterEmitterVersion;
  pFStack_80 = &this_02[4].RendererEnabledBinding;
  iStack_f8._First = (FNiagaraVariableAttributeBinding **)&pUStack_e8;
  iStack_f8._Last = &pFStack_40;
  pFStack_78 = this;
  pTStack_70 = &this_02[5].AttributeBindings;
  plStack_68 = &this_02[6]._padding_;
  piStack_60 = this_00;
  puStack_58 = this_01;
  pFStack_50 = pFVar3;
  TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_>::operator=
            (&this_02->AttributeBindings,&iStack_f8);
  return;
}

// InternalConstructor<UNiagaraMessageDataBase> @ 1492cdc90

void __cdecl InternalConstructor<UNiagaraMessageDataBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNiagaraMessageDataBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraParameterCollection> @ 1492cdcc0

/* WARNING: Type propagation algorithm not settling */

void __cdecl InternalConstructor<UNiagaraParameterCollection>(FObjectInitializer *param_1)

{
  UNiagaraParameterCollection *this;
  FName FVar1;
  undefined4 uVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UNiagaraParameterCollectionInstance *this_00;
  FName local_res8;
  
  this = (UNiagaraParameterCollection *)param_1->Obj;
  if (this != (UNiagaraParameterCollection *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraParameterCollection__6B_;
    (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Parameters).ArrayNum = 0;
    (this->Parameters).ArrayMax = 0;
    (this->SourceMaterialCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
    (this->DefaultInstance).field0_0x0.DebugPtr = (UNiagaraParameterCollectionInstance *)0x0;
    (this->CompileId).A = 0;
    (this->CompileId).B = 0;
    (this->CompileId).C = 0;
    (this->CompileId).D = 0;
    (this->FullNamespace).ComparisonIndex = 0;
    (this->FullNamespace).Number = 0;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    (this->Namespace).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
    (this->Namespace).Number = uVar2;
    UNiagaraParameterCollection::BuildFullNamespace(this);
    pFVar3 = FName::FName(&local_res8,L"Default Instance");
    FVar1 = *pFVar3;
    pUVar4 = UNiagaraParameterCollectionInstance::StaticClass();
    this_00 = (UNiagaraParameterCollectionInstance *)
              FObjectInitializer::CreateDefaultSubobject
                        (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UNiagaraParameterCollectionInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->DefaultInstance).field0_0x0.DebugPtr = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (this_00->Collection).field0_0x0.DebugPtr = this;
    UNiagaraParameterCollectionInstance::SyncWithCollection(this_00);
  }
  return;
}

// InternalConstructor<UNiagaraParameterCollectionInstance> @ 1492cddb0

void __cdecl InternalConstructor<UNiagaraParameterCollectionInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraParameterCollectionInstance__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&this[1].field_0x18);
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    FNiagaraParameterStore::SetOwner((FNiagaraParameterStore *)&this[1].field_0x18,this);
  }
  return;
}

// InternalVTableHelperCtorCaller<ANiagaraLensEffectBase> @ 1492cde60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraLensEffectBase>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ANiagaraActor *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = ANiagaraLensEffectBase::GetPrivateStaticClass();
  this = (ANiagaraActor *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ANiagaraActor *)0x0) {
    ANiagaraActor::ANiagaraActor(this,param_1);
    this->_padding_ = (longlong)&ANiagaraLensEffectBase::_vftable__for__ANiagaraActor__;
    this[1]._padding_ =
         (longlong)&ANiagaraLensEffectBase::_vftable__for__ICameraLensEffectInterface__;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction> @ 1492cdf90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEventReceiverEmitterAction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraEventReceiverEmitterAction__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction_SpawnParticles> @ 1492ce040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction_SpawnParticles>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEventReceiverEmitterAction_SpawnParticles::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraEventReceiverEmitterAction_SpawnParticles__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraFunctionLibrary> @ 1492ce0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraLightRendererProperties> @ 1492ce1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraLightRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraLightRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraLightRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraLightRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraLightRendererProperties *)0x0) {
    pUVar3 = UNiagaraLightRendererProperties::UNiagaraLightRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraMeshRendererProperties> @ 1492ce240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraMeshRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraMeshRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraMeshRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraMeshRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraMeshRendererProperties *)0x0) {
    pUVar3 = UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraMessageDataBase> @ 1492ce2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraMessageDataBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraMessageDataBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraMessageDataBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraParameterCollection> @ 1492ce390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraParameterCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraParameterCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraParameterCollection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraParameterCollectionInstance> @ 1492ce460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraParameterCollectionInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraParameterCollectionInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraParameterCollectionInstance__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&pUVar1[1].field_0x18);
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,`FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>_>_> @ 1492ce560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,_FNiagaraTypeDefinition::GetNumericOutputType_::__l2::<lambda_1>_>_>
          (FNiagaraTypeDefinition *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraTypeDefinition,_public:_static_struct_FNiagaraTypeDefinition___cdecl_FNiagaraTypeDefinition::GetNumericOutputType(TArrayView<FNiagaraTypeDefinition_const_,int>,ENiagaraNumericOutputTypeSelectionMode)_::_2_::<lambda_1>_>
          param_4)

{
  TObjectPtr<UObject>_u_0 TVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  ushort uVar8;
  uchar uVar9;
  undefined1 uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  ushort uVar14;
  uchar uVar15;
  undefined1 uVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  longlong lVar22;
  int iVar23;
  FNiagaraTypeDefinition *pFVar24;
  FNiagaraTypeDefinition *pFVar25;
  FNiagaraTypeDefinition *pFVar26;
  FNiagaraTypeDefinition *pFVar27;
  FNiagaraTypeDefinition **ppFVar28;
  int iVar29;
  FNiagaraTypeDefinition *pFVar30;
  FNiagaraTypeDefinition *pFVar31;
  float fVar32;
  undefined1 auStack_388 [48];
  FNiagaraTypeDefinition *local_358;
  FNiagaraTypeDefinition *local_348;
  FNiagaraTypeDefinition *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar32 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar32;
    memset(local_330,0,0x2e8);
    ppFVar28 = &local_348;
    do {
      pFVar31 = ppFVar28[1];
      pFVar27 = *ppFVar28;
      local_358 = ppFVar28[2];
      iVar23 = (int)(((longlong)pFVar31 - (longlong)pFVar27) / 0x18) + 1;
      pFVar30 = pFVar27;
      iVar29 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1492ce640:
        if (8 < iVar23) {
          uVar8 = pFVar30->UnderlyingType;
          uVar9 = pFVar30->Flags;
          uVar10 = pFVar30->field_0xb;
          sVar11 = pFVar30->Size;
          sVar12 = pFVar30->Alignment;
          pFVar24 = pFVar31 + 1;
          iVar23 = iVar23 / 2;
          pFVar27 = pFVar30 + iVar23;
          TVar1 = (pFVar27->ClassStructOrEnum).field0_0x0;
          uVar14 = pFVar27->UnderlyingType;
          uVar15 = pFVar27->Flags;
          uVar16 = pFVar27->field_0xb;
          sVar17 = pFVar27->Size;
          sVar18 = pFVar27->Alignment;
          iVar19 = pFVar30[iVar23].RegisteredTypeDefIndex;
          uVar20 = pFVar30[iVar23].UnderlyingTypePathNameHash;
          pFVar27 = pFVar30 + iVar23;
          (pFVar27->ClassStructOrEnum).field0_0x0 = (pFVar30->ClassStructOrEnum).field0_0x0;
          pFVar27->UnderlyingType = uVar8;
          pFVar27->Flags = uVar9;
          pFVar27->field_0xb = uVar10;
          pFVar27->Size = sVar11;
          pFVar27->Alignment = sVar12;
          uVar13 = pFVar30->UnderlyingTypePathNameHash;
          pFVar30[iVar23].RegisteredTypeDefIndex = pFVar30->RegisteredTypeDefIndex;
          pFVar30[iVar23].UnderlyingTypePathNameHash = uVar13;
          (pFVar30->ClassStructOrEnum).field0_0x0 = TVar1;
          pFVar30->UnderlyingType = uVar14;
          pFVar30->Flags = uVar15;
          pFVar30->field_0xb = uVar16;
          pFVar30->Size = sVar17;
          pFVar30->Alignment = sVar18;
          pFVar30->RegisteredTypeDefIndex = iVar19;
          pFVar30->UnderlyingTypePathNameHash = uVar20;
          pFVar27 = pFVar30;
LAB_1492ce690:
          pFVar26 = pFVar27;
          pFVar27 = pFVar26 + 1;
          if (pFVar27 <= pFVar31) goto code_r0x0001492ce699;
          goto LAB_1492ce6b0;
        }
        for (; pFVar24 = pFVar30, pFVar27 = pFVar30, pFVar30 < pFVar31; pFVar31 = pFVar31 + -1) {
          while (pFVar26 = pFVar24, pFVar27 = pFVar27 + 1, pFVar27 <= pFVar31) {
            bVar21 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
                               (param_4.Predicate,pFVar26,pFVar27);
            pFVar24 = pFVar27;
            if (!bVar21) {
              pFVar24 = pFVar26;
            }
          }
          TVar1 = (pFVar26->ClassStructOrEnum).field0_0x0;
          uVar14 = pFVar26->UnderlyingType;
          uVar15 = pFVar26->Flags;
          uVar16 = pFVar26->field_0xb;
          sVar17 = pFVar26->Size;
          sVar18 = pFVar26->Alignment;
          iVar29 = pFVar26->RegisteredTypeDefIndex;
          uVar20 = pFVar26->UnderlyingTypePathNameHash;
          uVar8 = pFVar31->UnderlyingType;
          uVar9 = pFVar31->Flags;
          uVar10 = pFVar31->field_0xb;
          sVar11 = pFVar31->Size;
          sVar12 = pFVar31->Alignment;
          (pFVar26->ClassStructOrEnum).field0_0x0 = (pFVar31->ClassStructOrEnum).field0_0x0;
          pFVar26->UnderlyingType = uVar8;
          pFVar26->Flags = uVar9;
          pFVar26->field_0xb = uVar10;
          pFVar26->Size = sVar11;
          pFVar26->Alignment = sVar12;
          uVar13 = pFVar31->UnderlyingTypePathNameHash;
          pFVar26->RegisteredTypeDefIndex = pFVar31->RegisteredTypeDefIndex;
          pFVar26->UnderlyingTypePathNameHash = uVar13;
          (pFVar31->ClassStructOrEnum).field0_0x0 = TVar1;
          pFVar31->UnderlyingType = uVar14;
          pFVar31->Flags = uVar15;
          pFVar31->field_0xb = uVar16;
          pFVar31->Size = sVar17;
          pFVar31->Alignment = sVar18;
          pFVar31->RegisteredTypeDefIndex = iVar29;
          pFVar31->UnderlyingTypePathNameHash = uVar20;
        }
        goto LAB_1492ce7ee;
      }
LAB_1492ce7d5:
      HeapSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,_FNiagaraTypeDefinition::GetNumericOutputType_::__l2::<lambda_1>_>_>
                (pFVar27,iVar23,param_3,param_4);
LAB_1492ce7ee:
      ppFVar28 = ppFVar28 + -3;
    } while (&local_348 <= ppFVar28);
  }
  return;
code_r0x0001492ce699:
  bVar21 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
                     (param_4.Predicate,pFVar30,pFVar27);
  if (!bVar21) goto LAB_1492ce690;
LAB_1492ce6b0:
  do {
    pFVar25 = pFVar24;
    pFVar24 = pFVar25 + -1;
    if (pFVar24 <= pFVar30) break;
    bVar21 = `FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
                       (param_4.Predicate,pFVar24,pFVar30);
  } while (!bVar21);
  TVar1 = (pFVar24->ClassStructOrEnum).field0_0x0;
  uVar2 = pFVar25[-1].UnderlyingType;
  uVar3 = pFVar25[-1].Flags;
  uVar4 = pFVar25[-1].field_0xb;
  uVar5 = pFVar25[-1].Size;
  uVar6 = pFVar25[-1].Alignment;
  if (pFVar27 <= pFVar24) {
    TVar7 = (pFVar27->ClassStructOrEnum).field0_0x0;
    uVar8 = pFVar26[1].UnderlyingType;
    uVar9 = pFVar26[1].Flags;
    uVar10 = pFVar26[1].field_0xb;
    sVar11 = pFVar26[1].Size;
    sVar12 = pFVar26[1].Alignment;
    iVar23 = pFVar26[1].RegisteredTypeDefIndex;
    uVar20 = pFVar26[1].UnderlyingTypePathNameHash;
    (pFVar27->ClassStructOrEnum).field0_0x0 = TVar1;
    pFVar26[1].UnderlyingType = uVar2;
    pFVar26[1].Flags = uVar3;
    pFVar26[1].field_0xb = uVar4;
    pFVar26[1].Size = uVar5;
    pFVar26[1].Alignment = uVar6;
    uVar13 = pFVar25[-1].UnderlyingTypePathNameHash;
    pFVar26[1].RegisteredTypeDefIndex = pFVar25[-1].RegisteredTypeDefIndex;
    pFVar26[1].UnderlyingTypePathNameHash = uVar13;
    (pFVar24->ClassStructOrEnum).field0_0x0 = TVar7;
    pFVar25[-1].UnderlyingType = uVar8;
    pFVar25[-1].Flags = uVar9;
    pFVar25[-1].field_0xb = uVar10;
    pFVar25[-1].Size = sVar11;
    pFVar25[-1].Alignment = sVar12;
    pFVar25[-1].RegisteredTypeDefIndex = iVar23;
    pFVar25[-1].UnderlyingTypePathNameHash = uVar20;
    goto LAB_1492ce690;
  }
  TVar7 = (pFVar30->ClassStructOrEnum).field0_0x0;
  uVar8 = pFVar30->UnderlyingType;
  uVar9 = pFVar30->Flags;
  uVar10 = pFVar30->field_0xb;
  sVar11 = pFVar30->Size;
  sVar12 = pFVar30->Alignment;
  iVar23 = pFVar30->RegisteredTypeDefIndex;
  uVar20 = pFVar30->UnderlyingTypePathNameHash;
  lVar22 = (longlong)pFVar24 + (-0x18 - (longlong)pFVar30);
  lVar22 = lVar22 / 6 + (lVar22 >> 0x3f);
  (pFVar30->ClassStructOrEnum).field0_0x0 = TVar1;
  pFVar30->UnderlyingType = uVar2;
  pFVar30->Flags = uVar3;
  pFVar30->field_0xb = uVar4;
  pFVar30->Size = uVar5;
  pFVar30->Alignment = uVar6;
  uVar13 = pFVar25[-1].UnderlyingTypePathNameHash;
  pFVar30->RegisteredTypeDefIndex = pFVar25[-1].RegisteredTypeDefIndex;
  pFVar30->UnderlyingTypePathNameHash = uVar13;
  iVar29 = iVar29 + -1;
  (pFVar24->ClassStructOrEnum).field0_0x0 = TVar7;
  pFVar25[-1].UnderlyingType = uVar8;
  pFVar25[-1].Flags = uVar9;
  pFVar25[-1].field_0xb = uVar10;
  pFVar25[-1].Size = sVar11;
  pFVar25[-1].Alignment = sVar12;
  pFVar25[-1].RegisteredTypeDefIndex = iVar23;
  pFVar25[-1].UnderlyingTypePathNameHash = uVar20;
  if ((lVar22 >> 2) - (lVar22 >> 0x3f) < ((longlong)pFVar31 - (longlong)pFVar27) / 0x18) {
    if (pFVar27 < pFVar31) {
      *ppFVar28 = pFVar27;
      ppFVar28[1] = pFVar31;
      *(int *)(ppFVar28 + 2) = iVar29;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar24 <= pFVar30 + 1) goto LAB_1492ce7ee;
    pFVar31 = pFVar25 + -2;
    pFVar27 = pFVar30;
  }
  else {
    if (pFVar30 + 1 < pFVar24) {
      *ppFVar28 = pFVar30;
      ppFVar28[1] = pFVar25 + -2;
      *(int *)(ppFVar28 + 2) = iVar29;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar31 <= pFVar27) goto LAB_1492ce7ee;
  }
  iVar23 = (int)(((longlong)pFVar31 - (longlong)pFVar27) / 0x18) + 1;
  pFVar30 = pFVar27;
  if (iVar29 == 0) goto LAB_1492ce7d5;
  goto LAB_1492ce640;
}

// NewObject<UNiagaraComponent> @ 1492ce8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraComponent * __cdecl
NewObject<UNiagaraComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UNiagaraComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UNiagaraComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// SetShaderParameters<FNiagaraShader> @ 1492cf580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
SetShaderParameters<FNiagaraShader>
          (FRHIBatchedShaderParameters *param_1,
          TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *param_2,
          FShaderParametersMetadata *param_3,FParameters *param_4)

{
  FNiagaraShader *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_2->ShaderContent;
  local_18.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_18,param_3,param_4);
  pFVar1 = param_2->ShaderContent;
  switch((byte)pFVar1->_padding_ & 0xf) {
  default:
    SetShaderParameters(param_1,(FShaderParameterBindings *)pFVar1,param_3,param_4);
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    SetRayTracingShaderParameters(param_1,(FShaderParameterBindings *)pFVar1,param_3,param_4);
  }
  return;
}

// StaticEnum<enum_ENiagaraMeshFacingMode> @ 1492cf660

UEnum * __cdecl StaticEnum<enum_ENiagaraMeshFacingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode,(UObject *)pUVar1,
                       L"ENiagaraMeshFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraMeshLockedAxisSpace> @ 1492cf6a0

UEnum * __cdecl StaticEnum<enum_ENiagaraMeshLockedAxisSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace,(UObject *)pUVar1,
                       L"ENiagaraMeshLockedAxisSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton;
}

// UnsetShaderUAVs<FRHICommandList,FNiagaraShader> @ 1492cf6e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHICommandList,FNiagaraShader>
          (FRHICommandList *param_1,TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  FNiagaraShader *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIBatchedShaderUnbinds *pFVar4;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    pFVar4 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar1 = param_2->ShaderContent;
    if (*(ushort *)((longlong)&pFVar1->_padding_ + 4) != 0xffff) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar4,(FShaderParameterBindings *)pFVar1);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,param_3,pFVar4);
  }
  return;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_> @ 1492cf820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l8::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>
  *pTVar5;
  FRDGParameterStruct local_38;
  
  pFVar4 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if ((pFVar4->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_38.Layout.Reference = (pFVar4->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar4;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Await);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::`8'::<lambda_1>_>
        ::_vftable_;
  uVar1 = *(undefined8 *)&param_3->TickStage;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined8 *)((longlong)this + 0x188) = uVar1;
  uVar1 = *(undefined8 *)&param_3->GPUIndex;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`8'::<lambda_1>_>::_vftable_
  ;
  *(undefined8 *)((longlong)this + 400) = uVar1;
  *(FEmptyShaderParameters **)((longlong)this + 0x198) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_> @ 1492cf910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush_::__l37::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::`37'::<lambda_1>_>
        ::_vftable_;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::`37'::<lambda_1>_>
        ::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_> @ 1492cfa00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush_::__l37::<lambda_2>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_2> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_2>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::`37'::<lambda_2>_>
        ::_vftable_;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::`37'::<lambda_2>_>
        ::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_2>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_> @ 1492cfaf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l11::<lambda_2>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_2> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_2>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Await);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::`11'::<lambda_2>_>
        ::_vftable_;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`11'::<lambda_2>_>::
        _vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_2>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_> @ 1492cfbe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_5> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>
  *pTVar5;
  FRDGParameterStruct local_38;
  
  pFVar4 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_5>_>::EmptyShaderParameters;
  if ((pFVar4->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Layout.Reference = (pFVar4->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar4;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Await);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::`35'::<lambda_5>_>
        ::_vftable_;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined8 *)((longlong)this + 0x188) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x188) =
       (param_3->PreStageTransitions).AllocatorInstance.Data;
  (param_3->PreStageTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 400) = (param_3->PreStageTransitions).ArrayNum;
  *(int *)((longlong)this + 0x194) = (param_3->PreStageTransitions).ArrayMax;
  (param_3->PreStageTransitions).ArrayNum = 0;
  (param_3->PreStageTransitions).ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x198) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x198) =
       (param_3->PreStageIDToIndexInit).AllocatorInstance.Data;
  (param_3->PreStageIDToIndexInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x1a0) = (param_3->PreStageIDToIndexInit).ArrayNum;
  *(int *)((longlong)this + 0x1a4) = (param_3->PreStageIDToIndexInit).ArrayMax;
  (param_3->PreStageIDToIndexInit).ArrayNum = 0;
  (param_3->PreStageIDToIndexInit).ArrayMax = 0;
  uVar2 = *(undefined8 *)&(param_3->DispatchInstances).ArrayNum;
  *(FNiagaraGpuDispatchInstance **)((longlong)this + 0x1a8) = (param_3->DispatchInstances).DataPtr;
  *(undefined8 *)((longlong)this + 0x1b0) = uVar2;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`35'::<lambda_5>_>::
        _vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x1b8) = &<lambda_5>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_> @ 1492cfd30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_6>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_6> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>
  *pTVar5;
  FRDGParameterStruct local_38;
  
  pFVar4 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_6>_>::EmptyShaderParameters;
  if ((pFVar4->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Layout.Reference = (pFVar4->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar4;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Await);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::`35'::<lambda_6>_>
        ::_vftable_;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(undefined8 *)((longlong)this + 0x188) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x188) =
       (param_3->PostStageTransitions).AllocatorInstance.Data;
  (param_3->PostStageTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 400) = (param_3->PostStageTransitions).ArrayNum;
  *(int *)((longlong)this + 0x194) = (param_3->PostStageTransitions).ArrayMax;
  (param_3->PostStageTransitions).ArrayNum = 0;
  (param_3->PostStageTransitions).ArrayMax = 0;
  uVar2 = *(undefined8 *)&(param_3->DispatchInstances).ArrayNum;
  *(FNiagaraGpuDispatchInstance **)((longlong)this + 0x198) = (param_3->DispatchInstances).DataPtr;
  *(undefined8 *)((longlong)this + 0x1a0) = uVar2;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`35'::<lambda_6>_>::
        _vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x1a8) = &<lambda_6>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_> @ 1492cfe50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>::
TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l118::<lambda_7>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_7> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  FNiagaraGpuFreeIDUpdate *pFVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>
  *pTVar6;
  FRDGParameterStruct local_38;
  
  pFVar5 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_7>_>::EmptyShaderParameters;
  if ((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  }
  local_38.Layout.Reference = (pFVar5->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar5;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Await);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::`118'::<lambda_7>_>
        ::_vftable_;
  pFVar3 = (param_3->FreeIDUpdates).DataPtr;
  *(FNiagaraGpuComputeDispatch **)((longlong)this + 0x180) = param_3->__this;
  *(FNiagaraGpuFreeIDUpdate **)((longlong)this + 0x188) = pFVar3;
  uVar1 = *(undefined8 *)&(param_3->FreeIDUpdates).ArrayNum;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`118'::<lambda_7>_>::
        _vftable_;
  *(undefined8 *)((longlong)this + 400) = uVar1;
  *(FEmptyShaderParameters **)((longlong)this + 0x198) = &<lambda_7>_>::EmptyShaderParameters;
  return this;
}

// ~TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1> @ 1492d3520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UNiagaraMeshRendererProperties::CollectPSOPrecacheData_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0> @ 1492d3540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::FlushAndWait_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0> @ 1492d3560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1> @ 1492d3580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UNiagaraMeshRendererProperties::GetUsedMaterials_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0> @ 1492d35a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraGPUProfilerInterface::PostResults_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0> @ 1492d35c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::Tick_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1> @ 1492d35e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::ProcessDebugReadbacks_::__l6::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::`6'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1> @ 1492d3600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1>::
~TFunction_OwnedObject<_NiagaraLWCHelper::RebaseEmitters_::__l20::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::`20'::<lambda_1>,1,1>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x58);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1> @ 1492d3620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::PostRenderOpaque_::__l2::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::`2'::<lambda_3>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0> @ 1492d3640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0>::
~TFunction_OwnedObject<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l2::<lambda_8>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`2'::<lambda_8>,1,0>::
        _vftable_;
  return;
}

// ~TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_> @ 1492d36a0

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
::
~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
          (void *this)

{
  if (*(void **)((longlong)this + 0x198) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x198));
  }
  if (*(void **)((longlong)this + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// operator<< @ 1492d5250

FArchive * __cdecl operator<<(FArchive *param_1,FNiagaraTypeDefinitionHandle *param_2)

{
  int iVar1;
  UScriptStruct *this;
  FNiagaraTypeRegistry *pFVar2;
  FNiagaraTypeDefinition *pFVar3;
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  undefined8 local_1c;
  uint local_14;
  
  this = FNiagaraTypeDefinition::StaticStruct();
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_1c = 0xffffffffffffffff;
      local_28.DebugPtr = (UObject *)0x0;
      local_20 = 0;
      local_1e = 0;
      local_14 = 0xffffffff;
      iVar1 = -1;
      UScriptStruct::SerializeItem(this,param_1,&local_28,(void *)0x0);
      if (local_28.DebugPtr != (UObject *)0x0) {
        pFVar2 = FNiagaraTypeRegistry::Get();
        iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (pFVar2,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      }
      param_2->RegisteredTypeIndex = iVar1;
    }
  }
  else {
    pFVar2 = FNiagaraTypeRegistry::Get();
    pFVar3 = FNiagaraTypeRegistry::GetRegisteredType(pFVar2,param_2->RegisteredTypeIndex);
    local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = pFVar3->UnderlyingType;
    local_1e = pFVar3->Flags;
    local_1c._0_2_ = pFVar3->Size;
    local_1c._2_2_ = pFVar3->Alignment;
    local_1c._4_4_ = pFVar3->RegisteredTypeDefIndex;
    local_14 = pFVar3->UnderlyingTypePathNameHash;
    UScriptStruct::SerializeItem(this,param_1,&local_28,(void *)0x0);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{720}' @ 1492d81ac

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ANiagaraLensEffectBase::`vector deleting
   destructor'`adjustor{720}' (unsigned int) __ptr64 */

void * __thiscall
ANiagaraLensEffectBase::_vector_deleting_destructor__adjustor_720__
          (ANiagaraLensEffectBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANiagaraLensEffectBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{160}' @ 1492d81c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraMeshRendererProperties::`vector deleting
   destructor'`adjustor{160}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraMeshRendererProperties::_vector_deleting_destructor__adjustor_160__
          (UNiagaraMeshRendererProperties *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraMeshRendererProperties *)
                      &this[-1].PrevMeshOrientationBinding.DataSetName.Number,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1492d81e0

void * __thiscall
FNiagaraBoundsCalculatorHelper<0,1,0>::_scalar_deleting_destructor_
          (FNiagaraBoundsCalculatorHelper<0,1,0> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8220

void * __thiscall
IBaseDelegateInstance<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8250

void * __thiscall
IBaseDelegateInstance<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8280

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d82b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d82e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8310

void * __thiscall
IBaseDelegateInstance<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8340

void * __thiscall
IBaseDelegateInstance<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8370

void * __thiscall
TBaseFunctorDelegateInstance<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy,`INiagaraModule::StartupModule'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d83a0

void * __thiscall
TBaseFunctorDelegateInstance<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`INiagaraModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d83d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::__l8::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&,int,int,enum_EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy,TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy,TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d84c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`INiagaraModule::OnPostEngineInit'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d84f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy,`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy,`UNiagaraParameterCollectionInstance::Bind'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8550

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8580

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d85b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d85e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8610

void * __thiscall
TCommonDelegateInstanceState<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8640

void * __thiscall
TCommonDelegateInstanceState<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8670

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d86a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d86d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8700

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8730

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8760

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(int),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d87a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d87e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d88a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d88f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::`6'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::`20'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d89d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::`2'::<lambda_3>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`2'::<lambda_8>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8a50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraGpuFrameResults,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraGpuFrameResults,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8a90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRenderableStaticMesh,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraRenderableStaticMesh,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8ad0

void * __thiscall
FRDGAllocator::
TObject<`FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>'::__l2::FClearUniformBuffers>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>'::__l2::FClearUniformBuffers::
  ~FClearUniformBuffers((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8b10

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8b70

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8bd0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8c30

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8c90

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8cd0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 400));
  }
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8d50

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8db0

void * __thiscall
FRDGAllocator::TObject<FNiagaraGpuComputeDispatchParameters>::_scalar_deleting_destructor_
          (TObject<FNiagaraGpuComputeDispatchParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8de0

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8e40

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8ea0

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8f00

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8f60

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d8fa0

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9020

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9080

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d90e0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9140

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d91a0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9200

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9240

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d92c0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9320

void * __thiscall
TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l19::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9380

void * __thiscall
TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l20::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d93e0

void * __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadback'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x198) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x198));
  }
  if (*(FRHIResource **)((longlong)this + 0x188) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9470

void * __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x198) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x198));
  }
  if (*(FRHIResource **)((longlong)this + 0x188) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9500

void * __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x198) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x198));
  }
  if (*(FRHIResource **)((longlong)this + 0x188) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x188));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9590

void * __thiscall
TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'::__l126::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d95f0

void * __thiscall
TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'[::A]::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void * __thiscall
ANiagaraLensEffectBase::_scalar_deleting_destructor_(ANiagaraLensEffectBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__ANiagaraActor__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  pFVar1 = (this->EmittersToTreatAsSame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICameraLensEffectInterface__6B_;
  ANiagaraActor::~ANiagaraActor((ANiagaraActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d96e0

void * __thiscall
FNiagaraBoundsCalculatorLights::_scalar_deleting_destructor_
          (FNiagaraBoundsCalculatorLights *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FNiagaraGpuComputeDispatch::_scalar_deleting_destructor_
          (FNiagaraGpuComputeDispatch *this,uint param_1)

{
  ~FNiagaraGpuComputeDispatch(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x830);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FNiagaraGpuComputeDispatchInterface::_scalar_deleting_destructor_
          (FNiagaraGpuComputeDispatchInterface *this,uint param_1)

{
  ~FNiagaraGpuComputeDispatchInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d97a0

void * __thiscall
FNiagaraRenderableStaticMesh::_scalar_deleting_destructor_
          (FNiagaraRenderableStaticMesh *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7INiagaraRenderableMesh__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9810

void * __thiscall
UNiagaraEventReceiverEmitterAction::_scalar_deleting_destructor_
          (UNiagaraEventReceiverEmitterAction *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9870

void * __thiscall
UNiagaraEventReceiverEmitterAction_SpawnParticles::_scalar_deleting_destructor_
          (UNiagaraEventReceiverEmitterAction_SpawnParticles *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraEventReceiverEmitterAction__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d98d0

void * __thiscall
UNiagaraFunctionLibrary::_scalar_deleting_destructor_(UNiagaraFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9930

void * __thiscall
UNiagaraLightRendererProperties::_scalar_deleting_destructor_
          (UNiagaraLightRendererProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraLightRendererProperties__6B_;
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9990

void * __thiscall
UNiagaraMeshRendererProperties::_scalar_deleting_destructor_
          (UNiagaraMeshRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraRendererProperties__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshArrayInterface__;
  pFVar1 = (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSorting).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSorting).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).TextureParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).VectorParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MICOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraMeshMaterialOverride,int>
            ((FNiagaraMeshMaterialOverride *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraRenderableMeshArrayInterface__6B_;
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9af0

void * __thiscall
UNiagaraMessageDataBase::_scalar_deleting_destructor_(UNiagaraMessageDataBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraMessageDataBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9b50

void * __thiscall
UNiagaraParameterCollection::_scalar_deleting_destructor_
          (UNiagaraParameterCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraParameterCollection__6B_;
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492d9bd0

void * __thiscall
UNiagaraParameterCollectionInstance::_scalar_deleting_destructor_
          (UNiagaraParameterCollectionInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7UNiagaraParameterCollectionInstance__6B_;
  pFVar1 = (this->DirtyVectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtyScalarParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->ParameterStorage);
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->OverridenParameters).AllocatorInstance.Data,
             (this->OverridenParameters).ArrayNum);
  pFVar1 = (this->OverridenParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// BuildCollectionValues @ 1492dc070

void __cdecl
BuildCollectionValues
          (UMaterialParameterCollection *param_1,UMaterialParameterCollectionInstance *param_2,
          TArray<TTuple<FName,float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TTuple<FName,FLinearColor>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  
  iVar2 = (param_1->ScalarParameters).ArrayNum;
  local_res8 = (longlong)iVar2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  uVar9 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->ScalarParameters).ArrayNum) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar7 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar7 = uVar8;
      }
      uVar3 = *(undefined8 *)((param_1->ScalarParameters).AllocatorInstance.Data + lVar10);
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined8 *)((param_3->AllocatorInstance).Data + lVar11) = uVar3;
      uVar7 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_3->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->ScalarParameters).ArrayNum) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UMaterialParameterCollectionInstance::GetScalarParameterValue
                (param_2,(FCollectionScalarParameter *)
                         ((param_1->ScalarParameters).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x1c),
                 (float *)(pFVar4 + (longlong)(int)uVar9 * 0xc + 8));
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x1c;
      lVar11 = lVar11 + 0xc;
      local_res8 = local_res8 + -1;
    } while (local_res8 != 0);
  }
  iVar2 = (param_1->VectorParameters).ArrayNum;
  local_res8 = (longlong)iVar2;
  piVar1 = &param_4->ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,iVar2,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
  uVar9 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->VectorParameters).ArrayNum) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar7 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar7 = uVar8;
      }
      uVar3 = *(undefined8 *)((param_1->VectorParameters).AllocatorInstance.Data + lVar10);
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined8 *)((param_4->AllocatorInstance).Data + lVar11) = uVar3;
      uVar7 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->VectorParameters).ArrayNum) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UMaterialParameterCollectionInstance::GetVectorParameterValue
                (param_2,(FCollectionVectorParameter *)
                         ((param_1->VectorParameters).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x28),
                 (FLinearColor *)(pFVar4 + ((longlong)(int)uVar9 * 3 + 1) * 8));
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x28;
      lVar11 = lVar11 + 0x18;
      local_res8 = local_res8 + -1;
    } while (local_res8 != 0);
  }
  return;
}

// CreateNiagaraSystem @ 1492e0240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraComponent * __cdecl
CreateNiagaraSystem(UNiagaraSystem *param_1,UWorld *param_2,AActor *param_3,bool param_4,
                   ENCPoolMethod param_5)

{
  byte *pbVar1;
  UClass *pUVar2;
  UNiagaraComponent *pUVar3;
  FNiagaraWorldManager *pFVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (param_2 != (UWorld *)0x0)) {
    if (param_5 == None) {
      local_c8 = 0;
      if (param_3 != (AActor *)0x0) {
        param_2 = (UWorld *)param_3;
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar2);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._16_4_ = 0;
      local_b8._20_4_ = 0;
      local_b8._24_4_ = RF_Transient;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = param_2;
      pUVar3 = (UNiagaraComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar6 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      UNiagaraComponent::SetAsset(pUVar3,param_1,true);
      pbVar1 = (byte *)((longlong)&pUVar3->_padding_ + 2);
      *pbVar1 = *pbVar1 & 0xf7;
      UNiagaraComponent::SetAutoDestroy(pUVar3,param_4);
      pbVar1 = (byte *)((longlong)&pUVar3->_padding_ + 2);
      *pbVar1 = *pbVar1 | 4;
      UPrimitiveComponent::SetVisibleInRayTracing((UPrimitiveComponent *)pUVar3,false);
      return pUVar3;
    }
    pFVar4 = FNiagaraWorldManager::Get(param_2);
    if (pFVar4 != (FNiagaraWorldManager *)0x0) {
      pUVar3 = UNiagaraComponentPool::CreateWorldParticleSystem
                         ((pFVar4->ComponentPool).field0_0x0.DebugPtr,param_1,param_2,param_5);
      return pUVar3;
    }
  }
  return (UNiagaraComponent *)0x0;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEvents @ 1492e2ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEvents(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraFunctionLibrary @ 1492e2af0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraLensEffectBase @ 1492e2b00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraLensEffectBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraLightRendererProperties @ 1492e2b10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraLightRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties @ 1492e2b20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraMessageDataBase @ 1492e2b30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraMessageDataBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraMessageStore @ 1492e2b40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraMessageStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterBinding @ 1492e2b50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterCollection @ 1492e2b60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsSubscriber @ 1492e2b70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsSubscriber(void)

{
  return;
}

// GetTypeHash @ 1492f2230

uint __cdecl GetTypeHash(FNiagaraDrawIndirectArgGenTaskInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Flags;
  uVar3 = param_1->StartIndexLocation - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar1 = param_1->NumIndicesPerInstance - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar1) - uVar3 ^ uVar1 << 8;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 10;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = param_1->InstanceCountBufferOffset - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// IsStaticMeshSafeToUse @ 1492f8b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl
NiagaraMeshRendererPropertiesInternal::IsStaticMeshSafeToUse
          (FNiagaraEmitterInstance *param_1,UStaticMesh *param_2)

{
  UNiagaraSystem *pUVar1;
  bool bVar2;
  FStaticMeshRenderData *pFVar3;
  ForAnyElementType FVar4;
  EShaderPlatform EVar5;
  FNiagaraSystemInstance *pFVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2 != (UStaticMesh *)0x0) {
    EVar5 = GMaxRHIShaderPlatform;
    if (param_1 == (FNiagaraEmitterInstance *)0x0) {
      pFVar6 = (FNiagaraSystemInstance *)0x0;
    }
    else {
      pFVar6 = param_1->ParentSystemInstance;
      if (pFVar6 != (FNiagaraSystemInstance *)0x0) {
        EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)pFVar6->FeatureLevel];
      }
    }
    bVar2 = UStaticMesh::HasValidNaniteData(param_2);
    if ((!bVar2) || (bVar2 = UStaticMesh::HasNaniteFallbackMesh(param_2,EVar5), bVar2)) {
      pFVar3 = UStaticMesh::GetRenderData(param_2);
      return pFVar3 != (FStaticMeshRenderData *)0x0;
    }
    if (param_2->_padding_ == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    }
    if (((pFVar6 == (FNiagaraSystemInstance *)0x0) ||
        (pUVar1 = pFVar6->System, pUVar1 == (UNiagaraSystem *)0x0)) || (pUVar1->_padding_ == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_58,(UObject *)0x0,None);
    }
    ::FString::PrintfImpl
              (&local_38,
               L"NiagaraRenderableMesh does not have a fallback mesh. Enable Nanite fallback mesh to fix this issue. System: %s, Mesh: %s"
              );
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,(wchar_t *)FVar4.Data);
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulonglong)param_1 ^ (ulonglong)param_2,__real_41200000,FColor::Yellow,
               &local_28,true,&UE::Math::TVector2<double>::UnitVector);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar2 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar2) && (2 < (byte)LogNiagara._0_1_)) {
      if (param_2->_padding_ == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_58,(UObject *)0x0,None)
        ;
      }
      if (((pFVar6 == (FNiagaraSystemInstance *)0x0) ||
          (pUVar1 = pFVar6->System, pUVar1 == (UNiagaraSystem *)0x0)) || (pUVar1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_48,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// MakeParameters @ 1492f8e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraGpuComputeDispatchParameters * __cdecl
MakeParameters(FRDGBuilder *param_1,TRDGUniformBuffer<FSceneUniformParameters> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNiagaraGpuComputeDispatchParameters *pFVar6;
  FShaderParametersMetadata *pFVar7;
  EUniformBufferBindingFlags EVar8;
  undefined8 *local_28 [3];
  undefined7 uStack_f;
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraGpuComputeDispatchParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFNiagaraGpuComputeDispatchParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar5 + 3) = 1;
  }
  local_28[0] = puVar5;
  if (((undefined8 **)param_1->_padding_ <= local_28) &&
     (local_28 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraGpuComputeDispatchParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_28[0];
  pFVar7 = GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
  EVar8 = Static;
  if (pFVar7->BindingFlags != StaticAndShader) {
    EVar8 = pFVar7->BindingFlags;
  }
  puVar5[2] = param_2;
  puVar5[3] = CONCAT71(uStack_f,EVar8);
  return (FNiagaraGpuComputeDispatchParameters *)(puVar5 + 2);
}

// RebaseDataSet @ 149300cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl NiagaraLWCHelper::RebaseDataSet(TVector<float> *param_1,FNiagaraDataSet *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  FNiagaraDataBuffer *pFVar4;
  FNiagaraDataSetCompiledData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  FNiagaraTypeRegistry *this;
  FNiagaraTypeDefinition *pFVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong local_res18;
  ulonglong uVar12;
  
  pFVar4 = param_2->CurrentData;
  if ((pFVar4 != (FNiagaraDataBuffer *)0x0) && (pFVar4->NumInstances != 0)) {
    if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledData.Get() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x169,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (param_2->CompiledData).StructPtr;
    iVar2 = (pFVar5->VariableLayouts).ArrayNum;
    pFVar18 = (pFVar5->VariableLayouts).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledData.Get() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x169,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (param_2->CompiledData).StructPtr;
    iVar3 = (pFVar5->Variables).ArrayNum;
    pFVar17 = (pFVar5->Variables).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = 0;
    iVar8 = iVar3;
    if (iVar2 < iVar3) {
      iVar8 = iVar2;
    }
    local_res18 = (longlong)iVar8;
    if (0 < iVar8) {
      pFVar17 = pFVar17 + 8;
      do {
        uVar16 = 0;
        if ((int)uVar14 < iVar3) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this = FNiagaraTypeRegistry::Get();
        pFVar10 = FNiagaraTypeRegistry::GetRegisteredType(this,*(int *)pFVar17);
        if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
            (pFVar10->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
           (pFVar10->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
          uVar16 = 0;
          if ((int)uVar14 < iVar2) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(ushort *)(pFVar18 + 8) == 3) {
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar1 = *(ushort *)pFVar18;
            uVar16 = pFVar4->FloatStride;
            pFVar6 = (pFVar4->FloatData).AllocatorInstance.Data;
            uVar15 = uVar1 * uVar16;
            uVar13 = (uVar1 + 2) * uVar16;
            uVar16 = (uVar1 + 1) * uVar16;
            uVar11 = 0;
            if (pFVar4->NumInstances != 0) {
              do {
                uVar12 = (ulonglong)uVar11;
                *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar15) =
                     *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar15) +
                     (param_1->field0_0x0)._s_0.X;
                *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar16) =
                     (param_1->field0_0x0)._s_0.Y +
                     *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar16);
                *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar13) =
                     (param_1->field0_0x0)._s_0.Z +
                     *(float *)(pFVar6 + uVar12 * 4 + (ulonglong)uVar13);
                uVar11 = uVar11 + 1;
              } while (uVar11 < pFVar4->NumInstances);
            }
          }
          else {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2098727900810313535>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraLWCHelper.cpp"
                               ,0xc1,"VariableLayouts[iVariable].GetNumFloatComponents() == 3");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        uVar14 = uVar14 + 1;
        pFVar17 = pFVar17 + 0xc;
        pFVar18 = pFVar18 + 0x20;
        local_res18 = local_res18 + -1;
      } while (local_res18 != 0);
    }
  }
  return;
}

// RebaseDataSet @ 149300ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
NiagaraLWCHelper::RebaseDataSet(TVector<float> *param_1,FNiagaraDataSet *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  FNiagaraDataBuffer *pFVar3;
  FNiagaraDataSetCompiledData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  FNiagaraTypeRegistry *this;
  FNiagaraTypeDefinition *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  
  pFVar3 = param_2->CurrentData;
  if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (pFVar3->NumInstances <= param_3)) {
    if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledData.Get() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x169,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (param_2->CompiledData).StructPtr;
    iVar1 = (pFVar4->VariableLayouts).ArrayNum;
    pFVar13 = (pFVar4->VariableLayouts).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledData.Get() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x169,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (param_2->CompiledData).StructPtr;
    iVar2 = (pFVar4->Variables).ArrayNum;
    pFVar17 = (pFVar4->Variables).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = 0;
    iVar7 = iVar2;
    if (iVar1 < iVar2) {
      iVar7 = iVar1;
    }
    lVar16 = (longlong)iVar7;
    if (0 < iVar7) {
      pFVar17 = pFVar17 + 8;
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar2) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this = FNiagaraTypeRegistry::Get();
        pFVar10 = FNiagaraTypeRegistry::GetRegisteredType(this,*(int *)pFVar17);
        if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
            (pFVar10->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
           (pFVar10->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
          uVar9 = 0;
          if ((int)uVar12 < iVar1) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(ushort *)(pFVar13 + 8) == 3) {
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar14 = (uint)*(ushort *)pFVar13;
            lVar15 = (ulonglong)param_3 * 4;
            uVar9 = pFVar3->FloatStride;
            pFVar5 = (pFVar3->FloatData).AllocatorInstance.Data;
            lVar11 = (ulonglong)(uVar14 * uVar9) + lVar15;
            *(float *)(pFVar5 + lVar11) = *(float *)(pFVar5 + lVar11) + (param_1->field0_0x0)._s_0.X
            ;
            lVar11 = (ulonglong)((uVar14 + 1) * uVar9) + lVar15;
            *(float *)(pFVar5 + lVar11) = (param_1->field0_0x0)._s_0.Y + *(float *)(pFVar5 + lVar11)
            ;
            lVar15 = (ulonglong)((uVar14 + 2) * uVar9) + lVar15;
            *(float *)(pFVar5 + lVar15) = (param_1->field0_0x0)._s_0.Z + *(float *)(pFVar5 + lVar15)
            ;
          }
          else {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2098727900810313566>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraLWCHelper.cpp"
                               ,0xa2,"VariableLayouts[iVariable].GetNumFloatComponents() == 3");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        uVar12 = uVar12 + 1;
        pFVar17 = pFVar17 + 0xc;
        pFVar13 = pFVar13 + 0x20;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  return;
}

// RebaseEmitters @ 149301320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
NiagaraLWCHelper::RebaseEmitters
          (TVector<float> *param_1,TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *param_2,
          FNiagaraGpuComputeDispatchInterface *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraEmitterInstance *this;
  ForElementType<FNiagaraComputeExecutionContext_*> FVar4;
  code **ppcVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  longlong lVar7;
  ForElementType<FNiagaraComputeExecutionContext_*> _Dst;
  ulonglong uVar8;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar9;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar10;
  undefined1 auStackY_1d8 [32];
  FNiagaraComputeExecutionContext *local_188 [2];
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  ForElementType<FNiagaraComputeExecutionContext_*> local_148;
  int local_100;
  int local_fc;
  code *local_f8;
  float local_f0;
  ForElementType<FNiagaraComputeExecutionContext_*> local_e8;
  int local_a0;
  int local_9c;
  FNiagaraGpuComputeDispatchInterface *local_98;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar9 = param_2->DataPtr;
  pTVar10 = pTVar9 + param_2->ArrayNum;
  local_148.SecondaryData = (ForElementType<FNiagaraComputeExecutionContext_*>)0x0;
  local_100 = 0;
  local_fc = 8;
  iVar3 = local_100;
  for (; local_100 = iVar3, pTVar9 != pTVar10; pTVar9 = pTVar9 + 1) {
    this = (FNiagaraEmitterInstance *)(**(code **)(pTVar9->Object->_padding_ + 0x68))();
    if ((this == (FNiagaraEmitterInstance *)0x0) || (this->bLocalSpace != 0)) goto LAB_14930171d;
    local_188[0] = this->GPUExecContext;
    if (local_188[0] == (FNiagaraComputeExecutionContext *)0x0) {
      if ((this->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParticleDataSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                             ,0x39,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RebaseDataSet(param_1,this->ParticleDataSet);
    }
    else if ((param_3 != (FNiagaraGpuComputeDispatchInterface *)0x0) &&
            (iVar3 = FNiagaraEmitterInstance::GetNumParticles(this), 0 < iVar3)) {
      FVar4 = (ForElementType<FNiagaraComputeExecutionContext_*>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
        FVar4 = local_148.SecondaryData;
      }
      if ((ulonglong)FVar4 <= local_188) {
        FVar4 = (ForElementType<FNiagaraComputeExecutionContext_*>)&local_148;
        if (local_148.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
          FVar4 = local_148.SecondaryData;
        }
        if ((local_188 <
             (FNiagaraComputeExecutionContext **)((longlong)FVar4 + (longlong)local_fc * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_100 == local_fc) {
        local_100 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraComputeExecutionContext_*>_>
                              (0x808,&local_148,&local_fc);
      }
      lVar7 = (longlong)local_100;
      FVar4 = (ForElementType<FNiagaraComputeExecutionContext_*>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
        FVar4 = local_148.SecondaryData;
      }
      local_100 = local_100 + 1;
      *(FNiagaraComputeExecutionContext **)((longlong)FVar4 + lVar7 * 8) = local_188[0];
    }
    iVar3 = local_100;
  }
  if (0 < iVar3) {
    local_f0 = (param_1->field0_0x0)._s_0.Z;
    local_f8 = *(code **)&param_1->field0_0x0;
    FVar4 = (ForElementType<FNiagaraComputeExecutionContext_*>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
      FVar4 = local_148.SecondaryData;
    }
    local_e8.SecondaryData = (ForElementType<FNiagaraComputeExecutionContext_*>)0x0;
    local_a0 = iVar3;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraComputeExecutionContext_*>_>
              (8,8,iVar3,0,&local_e8,iVar3,&local_9c);
    _Dst = (ForElementType<FNiagaraComputeExecutionContext_*>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
      _Dst = local_e8.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)FVar4,(longlong)iVar3 << 3);
    local_178[0] = (code *)0x0;
    local_98 = param_3;
    ppcVar5 = FMemory::Malloc(0x70,8);
    *ppcVar5 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::`20'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar5[1] = local_f8;
    *(float *)(ppcVar5 + 2) = local_f0;
    ppcVar5[0xb] = (code *)0x0;
    local_150 = ppcVar5;
    if (local_e8.SecondaryData == (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
      memmove(ppcVar5 + 3,&local_e8,0x40);
    }
    if (ppcVar5[0xb] != (code *)0x0) {
      FMemory::Free(ppcVar5[0xb]);
    }
    *(ForElementType<FNiagaraComputeExecutionContext_*> *)(ppcVar5 + 0xb) = local_e8.SecondaryData;
    local_e8.SecondaryData = (ForElementType<FNiagaraComputeExecutionContext_*>)0x0;
    *(int *)(ppcVar5 + 0xc) = local_a0;
    *(int *)((longlong)ppcVar5 + 100) = local_9c;
    local_a0 = 0;
    local_9c = 8;
    ppcVar5[0xd] = (code *)local_98;
    if (ppcVar5 + 1 != (code **)0x0) {
      local_178[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_NiagaraLWCHelper::RebaseEmitters_::__l20::TSTR_RebaseGPUEmitter134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_178);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_178[0];
      local_60 = local_150;
      local_150 = (code **)0x0;
      local_88._16_8_ = local_168[0];
      local_88._24_8_ = local_168[1];
      local_88._32_8_ = local_168[2];
      local_178[0] = (code *)0x0;
      local_58 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`NiagaraLWCHelper::RebaseEmitters'::__l20::TSTR_RebaseGPUEmitter134>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar6);
      uVar8 = (ulonglong)local_58;
      if ((2 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar5 = local_60;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_88);
      }
    }
    if (local_178[0] != (code *)0x0) {
      ppcVar5 = local_178 + 2;
      if (local_150 != (code **)0x0) {
        ppcVar5 = local_150;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_e8.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
      FMemory::Free((void *)local_e8.SecondaryData);
    }
  }
LAB_14930171d:
  if (local_148.SecondaryData != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
    FMemory::Free((void *)local_148.SecondaryData);
  }
  return;
}

// RebaseGPUEmitters @ 149301780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NiagaraLWCHelper::RebaseGPUEmitters
          (FRHICommandListImmediate *param_1,TVector<float> *param_2,
          TArray<FNiagaraComputeExecutionContext_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_3,FNiagaraGpuComputeDispatchInterface *param_4)

{
  uchar *puVar1;
  int iVar2;
  ForElementType<FNiagaraComputeExecutionContext_*> FVar3;
  longlong lVar4;
  code *pcVar5;
  FRHIUnorderedAccessView *pFVar6;
  FNiagaraGpuComputeDispatchInterface *pFVar7;
  TVector<float> *pTVar8;
  ForElementType<FNiagaraComputeExecutionContext_*> FVar9;
  FRHICommandListImmediate *this;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForElementType<FRHITransitionInfo> FVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FParameters *pFVar19;
  int *piVar20;
  uint uVar21;
  ushort *puVar22;
  undefined1 auStackY_4a8 [32];
  undefined1 local_457;
  undefined1 local_456 [6];
  ForAnyElementType local_450;
  uint local_448;
  uint uStack_444;
  int local_440;
  int local_43c;
  ForElementType<FNiagaraComputeExecutionContext_*> local_438;
  longlong local_430;
  int *local_428;
  FRHIUnorderedAccessView *local_420;
  FNiagaraGpuComputeDispatchInterface *local_418;
  TVector<float> *local_410;
  ForElementType<FNiagaraComputeExecutionContext_*> local_408;
  FRHICommandListImmediate *local_400;
  ForElementType<FRHITransitionInfo> local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  ForElementType<FRHITransitionInfo> local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  TArrayView<FRHITransitionInfo_const_,int> local_3d8;
  TArrayView<FRHITransitionInfo_const_,int> local_3c8;
  FParameters local_3b8;
  ForElementType<FRHITransitionInfo> local_368;
  int local_1e0;
  int local_1dc;
  ForElementType<FRHITransitionInfo> local_1d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  FVar3 = (param_3->AllocatorInstance).SecondaryData;
  local_428 = &param_3->ArrayNum;
  local_1d8.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
  local_43c = *local_428;
  local_50 = 0;
  local_4c = 8;
  local_368.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
  local_1e0 = 0;
  local_1dc = 8;
  local_450.Data = (FScriptContainerElement *)0x0;
  local_448 = 0;
  uStack_444 = 0;
  if (FVar3 != (ForElementType<FNiagaraComputeExecutionContext_*>)0x0) {
    param_3 = (TArray<FNiagaraComputeExecutionContext_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  local_408 = (ForElementType<FNiagaraComputeExecutionContext_*>)
              ((longlong)param_3 + (longlong)local_43c * 8);
  local_438 = (ForElementType<FNiagaraComputeExecutionContext_*>)param_3;
  local_418 = param_4;
  local_410 = param_2;
  local_400 = param_1;
  while( true ) {
    FVar9 = local_408;
    pTVar8 = local_410;
    pFVar7 = local_418;
    FVar3 = local_438;
    if (*local_428 != local_43c) {
      local_457 = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_457);
    }
    iVar2 = local_50;
    if (FVar3 == FVar9) break;
    lVar14 = *(longlong *)(*(longlong *)FVar3 + 0x58);
    lVar4 = *(longlong *)(lVar14 + 0x78);
    if (((lVar4 == 0) || (uVar21 = *(uint *)(lVar4 + 0x5c), uVar21 == 0xffffffff)) ||
       (*(uint *)(lVar4 + 0x124) == 0)) goto LAB_149301fb0;
    local_420 = *(FRHIUnorderedAccessView **)(lVar4 + 0x68);
    local_3b8.CountBuffer = (FRHIShaderResourceView *)0x0;
    local_3b8.FloatBufferStride = *(uint *)(lVar4 + 300) >> 2;
    local_3b8.FloatBuffer = local_420;
    local_3b8.NumInstances = *(uint *)(lVar4 + 0x124);
    bVar10 = IsInParallelRenderingThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((pFVar7->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (pFVar7->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_3b8.CountBuffer = (pFVar7->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
    local_3b8.TileShift.field0_0x0._0_8_ = *(undefined8 *)&pTVar8->field0_0x0;
    local_3b8.TileShift.field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    local_3b8.CountBufferOffset = uVar21;
    if ((*(longlong *)(lVar14 + 8) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompiledData.Get() != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x169,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)(*(longlong *)(lVar14 + 8) + 0x18);
    puVar22 = *(ushort **)(*(longlong *)(lVar14 + 8) + 0x10);
    if ((iVar2 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(longlong *)(lVar14 + 8) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompiledData.Get() != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x169,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_440 = (int)(*(longlong **)(lVar14 + 8))[1];
    lVar14 = **(longlong **)(lVar14 + 8);
    if ((local_440 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = 0;
    uVar21 = 0;
    bVar10 = false;
    iVar12 = local_440;
    if (iVar2 < local_440) {
      iVar12 = iVar2;
    }
    local_430 = (longlong)iVar12;
    if (0 < iVar12) {
      piVar20 = (int *)(lVar14 + 8);
      do {
        uVar18 = 0;
        if ((int)uVar21 < local_440) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = FNiagaraTypeRegistry::Get();
        pFVar13 = FNiagaraTypeRegistry::GetRegisteredType(this_00,*piVar20);
        if ((((TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
            (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
           (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
          uVar18 = 0;
          if ((int)uVar21 < iVar2) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (puVar22[4] == 3) {
            if ((uVar18 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)(&local_3b8.PositionComponentOffsets.Elements[0].field_0x0 + uVar15 * 4) =
                 (uint)*puVar22;
            uVar18 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar18;
            if (7 < uVar18) {
              bVar10 = true;
              local_3b8.NumPositions = uVar18;
              if (((local_450.Data <= &local_3b8) &&
                  (&local_3b8 < (FParameters *)(local_450.Data + (longlong)(int)uStack_444 * 0x50)))
                 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_448 == uStack_444) {
                local_448 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x1050,&local_450,(int *)&uStack_444);
              }
              lVar14 = (longlong)(int)local_448;
              uVar15 = 0;
              *(FRHIUnorderedAccessView **)&local_450.Data[lVar14 * 0x50].field_0x0 =
                   local_3b8.FloatBuffer;
              *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 8) =
                   CONCAT44(local_3b8.NumInstances,local_3b8.FloatBufferStride);
              *(FRHIShaderResourceView **)(local_450.Data + lVar14 * 0x50 + 0x10) =
                   local_3b8.CountBuffer;
              *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 0x10 + 8) =
                   CONCAT44(local_3b8.NumPositions,local_3b8.CountBufferOffset);
              *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x20) =
                   local_3b8.PositionComponentOffsets.Elements[0]._0_8_;
              *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x20 + 8) =
                   local_3b8.PositionComponentOffsets.Elements[0]._8_8_;
              *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x30) =
                   local_3b8.PositionComponentOffsets.Elements[1]._0_8_;
              *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x30 + 8) =
                   local_3b8.PositionComponentOffsets.Elements[1]._8_8_;
              *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x40) =
                   local_3b8.TileShift.field0_0x0._0_8_;
              *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 0x40 + 8) =
                   CONCAT44(local_3b8._76_4_,local_3b8.TileShift.field0_0x0._s_0.Z);
              local_448 = local_448 + 1;
            }
          }
          else {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2098727900810313663>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraLWCHelper.cpp"
                                ,0x41,"VariableLayouts[iVariable].GetNumFloatComponents() == 3");
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        uVar21 = uVar21 + 1;
        piVar20 = piVar20 + 3;
        puVar22 = puVar22 + 0x10;
        local_430 = local_430 + -1;
      } while (local_430 != 0);
      uVar21 = (uint)uVar15;
      if (uVar21 == 0) {
        if (!bVar10) goto LAB_149301e70;
      }
      else {
        local_3b8.NumPositions = uVar21;
        if (((local_450.Data <= &local_3b8) &&
            (&local_3b8 < (FParameters *)(local_450.Data + (longlong)(int)uStack_444 * 0x50))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_448 == uStack_444) {
          local_448 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1050,&local_450,(int *)&uStack_444);
        }
        lVar14 = (longlong)(int)local_448;
        *(FRHIUnorderedAccessView **)&local_450.Data[lVar14 * 0x50].field_0x0 =
             local_3b8.FloatBuffer;
        *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 8) =
             CONCAT44(local_3b8.NumInstances,local_3b8.FloatBufferStride);
        *(FRHIShaderResourceView **)(local_450.Data + lVar14 * 0x50 + 0x10) = local_3b8.CountBuffer;
        *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 0x10 + 8) =
             CONCAT44(local_3b8.NumPositions,local_3b8.CountBufferOffset);
        *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x20) =
             local_3b8.PositionComponentOffsets.Elements[0]._0_8_;
        *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x20 + 8) =
             local_3b8.PositionComponentOffsets.Elements[0]._8_8_;
        *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x30) =
             local_3b8.PositionComponentOffsets.Elements[1]._0_8_;
        *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x30 + 8) =
             local_3b8.PositionComponentOffsets.Elements[1]._8_8_;
        *(undefined8 *)(local_450.Data + lVar14 * 0x50 + 0x40) =
             local_3b8.TileShift.field0_0x0._0_8_;
        *(ulonglong *)(local_450.Data + lVar14 * 0x50 + 0x40 + 8) =
             CONCAT44(local_3b8._76_4_,local_3b8.TileShift.field0_0x0._s_0.Z);
        local_448 = local_448 + 1;
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,&local_1d8,&local_4c);
      }
      pFVar6 = local_420;
      lVar14 = (longlong)local_50;
      FVar16 = (ForElementType<FRHITransitionInfo>)&local_1d8;
      if (local_1d8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar16 = local_1d8.SecondaryData;
      }
      local_50 = local_50 + 1;
      *(undefined4 *)((longlong)FVar16 + lVar14 * 0x30) = 0xffffffff;
      ((uchar *)((longlong)FVar16 + 4) + lVar14 * 0x30)[0] = 0xff;
      ((uchar *)((longlong)FVar16 + 4) + lVar14 * 0x30)[1] = 0xff;
      *(FRHIUnorderedAccessView **)((uchar *)((longlong)FVar16 + 8) + lVar14 * 0x30) = local_420;
      ((uchar *)((longlong)FVar16 + 0x10))[lVar14 * 0x30] = '\x03';
      puVar1 = (uchar *)((longlong)FVar16 + 0x14) + lVar14 * 0x30;
      puVar1[0] = 'p';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1 = (uchar *)((longlong)FVar16 + 0x18) + lVar14 * 0x30;
      puVar1[0] = '\0';
      puVar1[1] = '\x04';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      ((uchar *)((longlong)FVar16 + 0x1c))[lVar14 * 0x30] = '\0';
      ((uchar *)((longlong)FVar16 + 0x28))[lVar14 * 0x30] = '\0';
      if (local_1e0 == local_1dc) {
        local_1e0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                              (0x830,&local_368,&local_1dc);
      }
      lVar14 = (longlong)local_1e0;
      FVar16 = (ForElementType<FRHITransitionInfo>)&local_368;
      if (local_368.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar16 = local_368.SecondaryData;
      }
      local_1e0 = local_1e0 + 1;
      *(undefined4 *)((longlong)FVar16 + lVar14 * 0x30) = 0xffffffff;
      ((uchar *)((longlong)FVar16 + 4) + lVar14 * 0x30)[0] = 0xff;
      ((uchar *)((longlong)FVar16 + 4) + lVar14 * 0x30)[1] = 0xff;
      *(FRHIUnorderedAccessView **)((uchar *)((longlong)FVar16 + 8) + lVar14 * 0x30) = pFVar6;
      ((uchar *)((longlong)FVar16 + 0x10))[lVar14 * 0x30] = '\x03';
      puVar1 = (uchar *)((longlong)FVar16 + 0x14) + lVar14 * 0x30;
      puVar1[0] = '\0';
      puVar1[1] = '\x04';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1 = (uchar *)((longlong)FVar16 + 0x18) + lVar14 * 0x30;
      puVar1[0] = 'p';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      ((uchar *)((longlong)FVar16 + 0x1c))[lVar14 * 0x30] = '\0';
      ((uchar *)((longlong)FVar16 + 0x28))[lVar14 * 0x30] = '\0';
    }
LAB_149301e70:
    local_438 = (ForElementType<FNiagaraComputeExecutionContext_*>)((longlong)local_438 + 8);
  }
  if (0 < (int)local_448) {
    local_3f8 = (ForElementType<FRHITransitionInfo>)&local_1d8;
    if (local_1d8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      local_3f8 = local_1d8.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = local_400;
    iStack_3f0 = iVar2;
    local_3d8._12_4_ = uStack_3ec;
    local_3d8.ArrayNum = iVar2;
    local_3d8.DataPtr = (FRHITransitionInfo *)local_3f8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)local_400,&local_3d8,None);
    uVar21 = local_448;
    uVar15 = (ulonglong)(int)local_448;
    pFVar19 = (FParameters *)(local_450.Data + uVar15 * 0x50);
    FVar17.Data = local_450.Data;
    while( true ) {
      if ((uint)uVar15 != uVar21) {
        local_456[0] = 0;
        `TCheckedPointerIterator<FNiagaraLWCTileShiftPositionsCS::FParameters,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_456);
      }
      iVar2 = local_1e0;
      if ((FParameters *)FVar17.Data == pFVar19) break;
      FNiagaraLWCTileShiftPositionsCS::Execute
                ((FRHIComputeCommandList *)this,(FParameters *)FVar17.Data);
      uVar15 = (ulonglong)local_448;
      FVar17.Data = FVar17.Data + 0x50;
    }
    local_3e8 = (ForElementType<FRHITransitionInfo>)&local_368;
    if (local_368.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      local_3e8 = local_368.SecondaryData;
    }
    if ((local_1e0 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_3e0 = iVar2;
    local_3c8._12_4_ = uStack_3dc;
    local_3c8.ArrayNum = iVar2;
    local_3c8.DataPtr = (FRHITransitionInfo *)local_3e8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this,&local_3c8,None);
  }
LAB_149301fb0:
  if ((FParameters *)local_450.Data != (FParameters *)0x0) {
    FMemory::Free(local_450.Data);
  }
  if (local_368.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    FMemory::Free((void *)local_368.SecondaryData);
  }
  if (local_1d8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    FMemory::Free((void *)local_1d8.SecondaryData);
  }
  return;
}

// ResolveRenderableMeshInternal @ 149304eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
          (FNiagaraMeshRendererMeshProperties *param_1,FNiagaraEmitterInstance *param_2,
          INiagaraRenderableMeshInterface **param_3,UStaticMesh **param_4)

{
  FNiagaraParameterStore *this;
  bool bVar1;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar2;
  UNiagaraDataInterface *this_01;
  UClass *pUVar3;
  FObjectPtr_u_0 FVar4;
  FObjectPtr_u_0 FVar5;
  FObjectPtr_u_0 local_res10;
  FNiagaraVariable local_48;
  
  FVar5.Handle = (UObject *)0x0;
  *param_3 = (INiagaraRenderableMeshInterface *)0x0;
  *param_4 = (UStaticMesh *)0x0;
  if ((param_2 != (FNiagaraEmitterInstance *)0x0) &&
     ((param_1->MeshParameterBinding).ResolvedParameter.Name != (FName)0x0)) {
    this_00 = FNiagaraTypeRegistry::Get();
    pFVar2 = FNiagaraTypeRegistry::GetRegisteredType
                       (this_00,(param_1->MeshParameterBinding).ResolvedParameter.TypeDefHandle.
                                RegisteredTypeIndex);
    if ((pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      bVar1 = FNiagaraVariableBase::IsDataInterface
                        (&(param_1->MeshParameterBinding).ResolvedParameter);
      this = &param_2->RendererBindings;
      if (bVar1) {
        local_48._padding_ = *(longlong *)&(param_1->MeshParameterBinding).ResolvedParameter.Name;
        local_48._padding_._0_4_ =
             (param_1->MeshParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
        local_48.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.VarData.ArrayNum = 0;
        local_48.VarData.ArrayMax = 0;
        this_01 = FNiagaraParameterStore::GetDataInterface(this,&local_48);
        FVar4.Handle = FVar5.Handle;
        if (this_01 != (UNiagaraDataInterface *)0x0) {
          pUVar3 = Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();
          FVar4.Handle = UObjectBaseUtility::GetInterfaceAddress
                                   ((UObjectBaseUtility *)this_01,pUVar3);
        }
        *param_3 = (INiagaraRenderableMeshInterface *)FVar4;
        if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.VarData.AllocatorInstance.Data);
        }
        if (*param_3 != (INiagaraRenderableMeshInterface *)0x0) {
          return;
        }
      }
      local_48._padding_._0_4_ =
           (param_1->MeshParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
      local_48._padding_ = *(longlong *)&(param_1->MeshParameterBinding).ResolvedParameter.Name;
      local_48.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.VarData.ArrayNum = 0;
      local_48.VarData.ArrayMax = 0;
      (**(code **)(this->_padding_ + 0x58))(this,&local_48,0);
      FNiagaraParameterStore::GetUObject(this,(int)&local_res10);
      if ((UStaticMesh *)local_res10.Handle != (UStaticMesh *)0x0) {
        pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar3);
        if (bVar1) {
          FVar5 = local_res10;
        }
      }
      if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.VarData.AllocatorInstance.Data);
      }
      bVar1 = IsStaticMeshSafeToUse(param_2,(UStaticMesh *)FVar5.Handle);
      if (bVar1) {
        *param_4 = (UStaticMesh *)FVar5;
        return;
      }
    }
  }
  bVar1 = IsStaticMeshSafeToUse(param_2,(UStaticMesh *)param_1->_padding_);
  if (bVar1) {
    *param_4 = (UStaticMesh *)param_1->_padding_;
  }
  return;
}

// SetResultsForEditorStats @ 149306fd0

void __cdecl SetResultsForEditorStats(TSharedPtr<FNiagaraGpuFrameResults,1> *param_1)

{
  return;
}

// SetResultsForParticlePerfStats @ 149306fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl SetResultsForParticlePerfStats(TSharedPtr<FNiagaraGpuFrameResults,1> *param_1)

{
  ulong64 *puVar1;
  int iVar2;
  int iVar3;
  FNiagaraGpuFrameResults *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  UNiagaraComponent *this;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FParticlePerfStatsContext local_38;
  
  if ((param_1->Object == (FNiagaraGpuFrameResults *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_1->Object;
  iVar2 = (pFVar4->DispatchResults).ArrayNum;
  pFVar9 = (pFVar4->DispatchResults).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((pFVar4->DispatchResults).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraGpuFrameResults::FDispatchResults,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    this = (UNiagaraComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar9 + 4));
    if (this == (UNiagaraComponent *)0x0) {
      return;
    }
    pUVar8 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar3) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar8->_padding_) {
      return;
    }
    UNiagaraComponent::GetPerfStatsContext(this,&local_38);
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_38.WorldStats != (FParticlePerfStats *)0x0) {
      ((local_38.WorldStats)->GPUStats).NumInstances =
           ((local_38.WorldStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_38.WorldStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_38.SystemStats != (FParticlePerfStats *)0x0) {
      ((local_38.SystemStats)->GPUStats).NumInstances =
           ((local_38.SystemStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_38.SystemStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_38.ComponentStats != (FParticlePerfStats *)0x0) {
      ((local_38.ComponentStats)->GPUStats).NumInstances =
           ((local_38.ComponentStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_38.ComponentStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    pFVar9 = pFVar9 + 0x38;
  }
  return;
}

// Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister @ 14930dfe0

UClass * __cdecl Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLensEffectBase",
               &Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton,
               ANiagaraLensEffectBase::StaticRegisterNativesANiagaraLensEffectBase,0x360,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraLensEffectBase>,
               InternalVTableHelperCtorCaller<ANiagaraLensEffectBase>,local_res8,
               ANiagaraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister @ 14930e0a0

UClass * __cdecl Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton,
               UNiagaraEventReceiverEmitterAction::
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister @ 14930e150

UClass * __cdecl
Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction_SpawnParticles",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.
                InnerSingleton,
               UNiagaraEventReceiverEmitterAction_SpawnParticles::
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               local_res8,UNiagaraEventReceiverEmitterAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton
  ;
}

// Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister @ 14930e210

UClass * __cdecl Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton,
               UNiagaraFunctionLibrary::StaticRegisterNativesUNiagaraFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UNiagaraFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister @ 14930e2d0

UClass * __cdecl Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLightRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton,
               UNiagaraLightRendererProperties::StaticRegisterNativesUNiagaraLightRendererProperties
               ,0x230,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraLightRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraLightRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister @ 14930e390

UClass * __cdecl Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMeshRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton,
               UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties,
               0x488,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraMeshRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraMeshRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister @ 14930e450

UClass * __cdecl Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMessageDataBase",
               &Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton,
               UNiagaraMessageDataBase::StaticRegisterNativesUNiagaraMessageDataBase,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraMessageDataBase>
               ,InternalVTableHelperCtorCaller<UNiagaraMessageDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload @ 14930e500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraMessageStore @ 14930e580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMessageStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMessageStore.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMessageStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMessageStore.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraMessageStore.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue @ 14930e600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterBindingWithValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterBindingWithValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterBindingWithValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterBindingWithValue.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FParameterDefinitionsSubscription @ 14930e680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FParameterDefinitionsSubscription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FParameterDefinitionsSubscription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FParameterDefinitionsSubscription.InnerSingleton,
               &Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FParameterDefinitionsSubscription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FParameterDefinitionsSubscription.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_Niagara @ 149313640

void __cdecl IMPLEMENT_MODULE_Niagara(void)

{
  return;
}

// BoolStructs'' @ 150412be0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::BoolStructs__(void)

{
  FNiagaraTypeDefinition::BoolStructs.HashSize = 0;
  if (FNiagaraTypeDefinition::BoolStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
  {
    FMemory::Free((void *)FNiagaraTypeDefinition::BoolStructs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FNiagaraTypeDefinition::BoolStructs.Elements);
  return;
}

// DataInstance_Alive'' @ 150412c20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::DataInstance_Alive__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::DataInstance_Alive.VarData.AllocatorInstance.Data;
  if (INiagaraModule::DataInstance_Alive.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::DataInstance_Alive.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DeprecatedTagDefinition'' @ 150412c40

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::DeprecatedTagDefinition__(void)

{
  if (INiagaraModule::DeprecatedTagDefinition.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*INiagaraModule::DeprecatedTagDefinition.Description.TextData.Reference +
                0x10))();
  }
  if (INiagaraModule::DeprecatedTagDefinition.AssetTag.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150412c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*INiagaraModule::DeprecatedTagDefinition.AssetTag.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// Emitter_Age'' @ 150412c80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_Age__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_Age.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_Age.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (INiagaraModule::Emitter_Age.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_Determinism'' @ 150412ca0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_Determinism__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_Determinism.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_Determinism.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_Determinism.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_InterpSpawnStartDt'' @ 150412cc0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_InterpSpawnStartDt__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_InterpSpawnStartDt.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_InterpSpawnStartDt.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_InterpSpawnStartDt.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_InterpolatedSpawn'' @ 150412ce0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_InterpolatedSpawn__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_InterpolatedSpawn.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_InterpolatedSpawn.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_InterpolatedSpawn.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_LocalSpace'' @ 150412d00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_LocalSpace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_LocalSpace.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_LocalSpace.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_LocalSpace.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_OverrideGlobalSpawnCountScale'' @ 150412d20

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Emitter_OverrideGlobalSpawnCountScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_OverrideGlobalSpawnCountScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_RandomSeed'' @ 150412d40

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_RandomSeed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_RandomSeed.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_RandomSeed.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_RandomSeed.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_SimulationTarget'' @ 150412d60

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SimulationTarget__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_SimulationTarget.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_SimulationTarget.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_SimulationTarget.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_SpawnGroup'' @ 150412d80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnGroup__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_SpawnGroup.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_SpawnGroup.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_SpawnGroup.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_SpawnInterval'' @ 150412da0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnInterval__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_SpawnInterval.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_SpawnInterval.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_SpawnInterval.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Emitter_SpawnRate'' @ 150412dc0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Emitter_SpawnRate__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Emitter_SpawnRate.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Emitter_SpawnRate.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Emitter_SpawnRate.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_DeltaTime'' @ 150412de0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_DeltaTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_DeltaTime.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_DeltaTime.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_DeltaTime.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_ID'' @ 150412e00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_ID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_ID.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_ID.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_ID.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_InstanceSeed'' @ 150412e20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_InstanceSeed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_InstanceSeed.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_InstanceSeed.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_InstanceSeed.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_NumParticles'' @ 150412e40

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_NumParticles__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_NumParticles.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_NumParticles.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_NumParticles.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_SimulationPosition'' @ 150412e60

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_SimulationPosition__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_SimulationPosition.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_SimulationPosition.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_SimulationPosition.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_SpawnCountScale'' @ 150412e80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_SpawnCountScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_SpawnCountScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Emitter_TotalSpawnedParticles'' @ 150412ea0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Emitter_TotalSpawnedParticles__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Emitter_TotalSpawnedParticles.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_ExecIndex'' @ 150412ec0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_ExecIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_ExecIndex.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_ExecIndex.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_ExecIndex.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_ExecutionCount'' @ 150412ee0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_ExecutionCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_ExecutionCount.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_ExecutionCount.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_ExecutionCount.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_GlobalSpawnCountScale'' @ 150412f00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_GlobalSpawnCountScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_GlobalSpawnCountScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_GlobalSpawnCountScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_GlobalSpawnCountScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_GlobalSystemScale'' @ 150412f20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_GlobalSystemScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_GlobalSystemScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_GlobalSystemScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_GlobalSystemScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_InvDeltaTime'' @ 150412f40

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_InvDeltaTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_InvDeltaTime.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_InvDeltaTime.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_InvDeltaTime.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_NumSystemInstances'' @ 150412f60

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_NumSystemInstances__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_NumSystemInstances.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_NumSystemInstances.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_NumSystemInstances.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_ExecutionState'' @ 150412f80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_ExecutionState__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_ExecutionState.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_ExecutionState.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_ExecutionState.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_LODDistance'' @ 150412fa0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LODDistance__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_LODDistance.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_LODDistance.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_LODDistance.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_LODDistanceFraction'' @ 150412fc0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LODDistanceFraction__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_LODDistanceFraction.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_LWC_Tile'' @ 150412fe0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_LWC_Tile__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_Position'' @ 150413000

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Position__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_Position.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_Position.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_Position.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_Rotation'' @ 150413020

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_Rotation.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_Rotation.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_Rotation.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_Scale'' @ 150413040

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Scale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_Scale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_Scale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_Scale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemLocalToWorld'' @ 150413060

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorld__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemLocalToWorldNoScale'' @ 150413080

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.AllocatorInstance.Data
  ;
  if (INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemLocalToWorldNoScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemLocalToWorldTransposed'' @ 1504130a0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.AllocatorInstance.
               Data;
  if (INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemLocalToWorldTransposed.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemWorldToLocal'' @ 1504130c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemWorldToLocalNoScale'' @ 1504130e0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.AllocatorInstance.Data
  ;
  if (INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemWorldToLocalNoScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_SystemWorldToLocalTransposed'' @ 150413100

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.AllocatorInstance.
               Data;
  if (INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_SystemWorldToLocalTransposed.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_TimeSinceRendered'' @ 150413120

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_TimeSinceRendered__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_TimeSinceRendered.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_Velocity'' @ 150413140

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_Velocity__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_Velocity.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_Velocity.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_Velocity.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_XAxis'' @ 150413160

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_XAxis__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_XAxis.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_XAxis.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_XAxis.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_YAxis'' @ 150413180

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_YAxis__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_YAxis.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_YAxis.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_YAxis.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Owner_ZAxis'' @ 1504131a0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Owner_ZAxis__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Owner_ZAxis.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Owner_ZAxis.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_Owner_ZAxis.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_QualityLevel'' @ 1504131c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_QualityLevel__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_QualityLevel.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_QualityLevel.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_QualityLevel.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_RealTime'' @ 1504131e0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_RealTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_RealTime.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_RealTime.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_RealTime.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_Age'' @ 150413200

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_Age__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_Age.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_Age.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_Age.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_CurrentTimeStep'' @ 150413220

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_CurrentTimeStep__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_CurrentTimeStep.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_CurrentTimeStep.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_CurrentTimeStep.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_NumEmitters'' @ 150413240

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumEmitters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_NumEmitters.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_NumEmitters.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_NumEmitters.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_NumEmittersAlive'' @ 150413260

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumEmittersAlive__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_NumEmittersAlive.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_NumEmittersAlive.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_NumEmittersAlive.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_NumParticles'' @ 150413280

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumParticles__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_NumParticles.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_NumParticles.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_NumParticles.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_NumTimeSteps'' @ 1504132a0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_NumTimeSteps__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_NumTimeSteps.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_NumTimeSteps.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_NumTimeSteps.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_RandomSeed'' @ 1504132c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_RandomSeed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_RandomSeed.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_RandomSeed.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_RandomSeed.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_SignificanceIndex'' @ 1504132e0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_SignificanceIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_SignificanceIndex.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_SignificanceIndex.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_SignificanceIndex.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_TickCount'' @ 150413300

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_TickCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_TickCount.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_TickCount.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_TickCount.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_System_TimeStepFraction'' @ 150413320

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_System_TimeStepFraction__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_System_TimeStepFraction.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_System_TimeStepFraction.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_System_TimeStepFraction.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_Time'' @ 150413340

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_Time__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_Time.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_Time.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (INiagaraModule::Engine_Time.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Engine_WorldDeltaTime'' @ 150413360

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Engine_WorldDeltaTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Engine_WorldDeltaTime.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Engine_WorldDeltaTime.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Engine_WorldDeltaTime.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// FloatStructs'' @ 150413380

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::FloatStructs__(void)

{
  FNiagaraTypeDefinition::FloatStructs.HashSize = 0;
  if (FNiagaraTypeDefinition::FloatStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
  {
    FMemory::Free((void *)FNiagaraTypeDefinition::FloatStructs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FNiagaraTypeDefinition::FloatStructs.Elements);
  return;
}

// FunctionDebugState'' @ 1504133c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::FunctionDebugState__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::FunctionDebugState.VarData.AllocatorInstance.Data;
  if (INiagaraModule::FunctionDebugState.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::FunctionDebugState.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// HiddenAssetTagDefinition'' @ 1504133e0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::HiddenAssetTagDefinition__(void)

{
  if (INiagaraModule::HiddenAssetTagDefinition.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*INiagaraModule::HiddenAssetTagDefinition.Description.TextData.Reference
                + 0x10))();
  }
  if (INiagaraModule::HiddenAssetTagDefinition.AssetTag.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150413409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*INiagaraModule::HiddenAssetTagDefinition.AssetTag.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// IntStructs'' @ 150413420

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::IntStructs__(void)

{
  FNiagaraTypeDefinition::IntStructs.HashSize = 0;
  if (FNiagaraTypeDefinition::IntStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FNiagaraTypeDefinition::IntStructs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FNiagaraTypeDefinition::IntStructs.Elements);
  return;
}

// LearningContentTagDefinition'' @ 150413460

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::LearningContentTagDefinition__(void)

{
  if (INiagaraModule::LearningContentTagDefinition.Description.TextData.Reference !=
      (ITextData *)0x0) {
    (**(code **)((longlong)
                 *INiagaraModule::LearningContentTagDefinition.Description.TextData.Reference + 0x10
                ))();
  }
  if (INiagaraModule::LearningContentTagDefinition.AssetTag.TextData.Reference != (ITextData *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x000150413489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*INiagaraModule::LearningContentTagDefinition.AssetTag.TextData.Reference
                + 0x10))();
    return;
  }
  return;
}

// LightRendererPropertiesToDeferredInit'' @ 1504134a0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraLightRendererProperties::
LightRendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraLightRendererProperties::LightRendererPropertiesToDeferredInit.
               AllocatorInstance.Data;
  if (UNiagaraLightRendererProperties::LightRendererPropertiesToDeferredInit.AllocatorInstance.Data
      == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraLightRendererProperties::LightRendererPropertiesToDeferredInit.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// LightweightTagDefinition'' @ 1504134c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::LightweightTagDefinition__(void)

{
  if (INiagaraModule::LightweightTagDefinition.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*INiagaraModule::LightweightTagDefinition.Description.TextData.Reference
                + 0x10))();
  }
  if (INiagaraModule::LightweightTagDefinition.AssetTag.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504134e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*INiagaraModule::LightweightTagDefinition.AssetTag.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// MeshRendererPropertiesToDeferredInit'' @ 150413500

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraMeshRendererProperties::
MeshRendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.
               AllocatorInstance.Data;
  if (UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// NumericStructs'' @ 150413520

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::NumericStructs__(void)

{
  FNiagaraTypeDefinition::NumericStructs.HashSize = 0;
  if (FNiagaraTypeDefinition::NumericStructs.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FNiagaraTypeDefinition::NumericStructs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UScriptStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UScriptStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FNiagaraTypeDefinition::NumericStructs.Elements);
  return;
}

// OnFrameResults_GameThread'' @ 150413560

void __cdecl
`dynamic_atexit_destructor_for_'FNiagaraGPUProfilerInterface::OnFrameResults_GameThread__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNiagaraGPUProfilerInterface::OnFrameResults_GameThread._8_8_,
             FNiagaraGPUProfilerInterface::OnFrameResults_GameThread._16_4_);
  if (FNiagaraGPUProfilerInterface::OnFrameResults_GameThread._8_8_ != 0) {
    FMemory::Free((void *)FNiagaraGPUProfilerInterface::OnFrameResults_GameThread._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FNiagaraGPUProfilerInterface::OnFrameResults_GameThread);
  return;
}

// OnFrameResults_RenderThread'' @ 1504135a0

void __cdecl
`dynamic_atexit_destructor_for_'FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread._8_8_,
             FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread._16_4_);
  if (FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread._8_8_ != 0) {
    FMemory::Free((void *)FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FNiagaraGPUProfilerInterface::OnFrameResults_RenderThread);
  return;
}

// OrderedNumericTypes'' @ 1504135e0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::OrderedNumericTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data;
  if (FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Age'' @ 150413600

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Age__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Age.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Age.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (INiagaraModule::Particles_Age.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_CameraOffset'' @ 150413620

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_CameraOffset__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_CameraOffset.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_CameraOffset.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_CameraOffset.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Color'' @ 150413640

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Color__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Color.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Color.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_Color.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_ComponentsEnabled'' @ 150413660

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_ComponentsEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_ComponentsEnabled.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_ComponentsEnabled.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_ComponentsEnabled.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_DynamicMaterialParameter1'' @ 150413680

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter1__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_DynamicMaterialParameter1.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_DynamicMaterialParameter1.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_DynamicMaterialParameter1.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_DynamicMaterialParameter2'' @ 1504136a0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter2__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_DynamicMaterialParameter2.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_DynamicMaterialParameter2.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_DynamicMaterialParameter2.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_DynamicMaterialParameter3'' @ 1504136c0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter3__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_DynamicMaterialParameter3.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_DynamicMaterialParameter3.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_DynamicMaterialParameter3.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_DynamicMaterialParameter'' @ 1504136e0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Particles_DynamicMaterialParameter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_DynamicMaterialParameter.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_DynamicMaterialParameter.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_DynamicMaterialParameter.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_ID'' @ 150413700

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_ID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_ID.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_ID.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (INiagaraModule::Particles_ID.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Lifetime'' @ 150413720

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Lifetime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Lifetime.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Lifetime.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_Lifetime.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightDiffuseScale'' @ 150413740

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightDiffuseScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightDiffuseScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightDiffuseScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightDiffuseScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightEnabled'' @ 150413760

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightEnabled.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightEnabled.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightEnabled.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightExponent'' @ 150413780

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightExponent__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightExponent.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightExponent.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightExponent.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightRadius'' @ 1504137a0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightRadius__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightRadius.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightRadius.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightRadius.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightSpecularScale'' @ 1504137c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightSpecularScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightSpecularScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightSpecularScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightSpecularScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_LightVolumetricScattering'' @ 1504137e0

void __cdecl
`dynamic_atexit_destructor_for_'INiagaraModule::Particles_LightVolumetricScattering__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_LightVolumetricScattering.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_LightVolumetricScattering.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_LightVolumetricScattering.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_MaterialRandom'' @ 150413800

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_MaterialRandom__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_MaterialRandom.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_MaterialRandom.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_MaterialRandom.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_MeshIndex'' @ 150413820

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_MeshIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_MeshIndex.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_MeshIndex.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_MeshIndex.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_MeshOrientation'' @ 150413840

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_MeshOrientation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_MeshOrientation.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_MeshOrientation.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_MeshOrientation.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_NormalizedAge'' @ 150413860

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_NormalizedAge__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_NormalizedAge.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_NormalizedAge.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_NormalizedAge.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_PivotOffset'' @ 150413880

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_PivotOffset__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_PivotOffset.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_PivotOffset.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_PivotOffset.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Position'' @ 1504138a0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Position__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Position.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Position.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_Position.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonFacing'' @ 1504138c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonFacing__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonFacing.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonFacing.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonFacing.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonID'' @ 1504138e0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonID.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonID.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonID.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonLinkOrder'' @ 150413900

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonLinkOrder__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonLinkOrder.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonLinkOrder.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonLinkOrder.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonTwist'' @ 150413920

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonTwist__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonTwist.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonTwist.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonTwist.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonU0Override'' @ 150413940

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonU0Override__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonU0Override.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonU0Override.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonU0Override.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonU1Override'' @ 150413960

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonU1Override__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonU1Override.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonU1Override.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonU1Override.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonUVDistance'' @ 150413980

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonUVDistance__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonUVDistance.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonUVDistance.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonUVDistance.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonV0RangeOverride'' @ 1504139a0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonV0RangeOverride__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonV0RangeOverride.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonV0RangeOverride.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonV0RangeOverride.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonV1RangeOverride'' @ 1504139c0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonV1RangeOverride__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonV1RangeOverride.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonV1RangeOverride.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonV1RangeOverride.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_RibbonWidth'' @ 1504139e0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_RibbonWidth__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_RibbonWidth.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_RibbonWidth.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_RibbonWidth.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Scale'' @ 150413a00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Scale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Scale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Scale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_Scale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_SpriteAlignment'' @ 150413a20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteAlignment__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_SpriteAlignment.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_SpriteAlignment.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_SpriteAlignment.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_SpriteFacing'' @ 150413a40

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteFacing__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_SpriteFacing.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_SpriteFacing.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_SpriteFacing.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_SpriteRotation'' @ 150413a60

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_SpriteRotation.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_SpriteRotation.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_SpriteRotation.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_SpriteSize'' @ 150413a80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_SpriteSize__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_SpriteSize.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_SpriteSize.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_SpriteSize.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_SubImageIndex'' @ 150413aa0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_SubImageIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_SubImageIndex.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_SubImageIndex.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_SubImageIndex.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_UVScale'' @ 150413ac0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_UVScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_UVScale.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_UVScale.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_UVScale.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_UniqueID'' @ 150413ae0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_UniqueID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_UniqueID.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_UniqueID.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_UniqueID.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_Velocity'' @ 150413b00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_Velocity__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_Velocity.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_Velocity.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_Velocity.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Particles_VisibilityTag'' @ 150413b20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Particles_VisibilityTag__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Particles_VisibilityTag.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Particles_VisibilityTag.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Particles_VisibilityTag.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// ScalarStructs'' @ 150413b40

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeDefinition::ScalarStructs__(void)

{
  FNiagaraTypeDefinition::ScalarStructs.HashSize = 0;
  if (FNiagaraTypeDefinition::ScalarStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
     ) {
    FMemory::Free((void *)FNiagaraTypeDefinition::ScalarStructs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UScriptStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UScriptStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FNiagaraTypeDefinition::ScalarStructs.Elements);
  return;
}

// ScriptContext'' @ 150413b80

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::ScriptContext__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::ScriptContext.VarData.AllocatorInstance.Data;
  if (INiagaraModule::ScriptContext.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (INiagaraModule::ScriptContext.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// ScriptUsage'' @ 150413ba0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::ScriptUsage__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::ScriptUsage.VarData.AllocatorInstance.Data;
  if (INiagaraModule::ScriptUsage.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (INiagaraModule::ScriptUsage.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// TemplateTagDefinition'' @ 150413bc0

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::TemplateTagDefinition__(void)

{
  if (INiagaraModule::TemplateTagDefinition.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*INiagaraModule::TemplateTagDefinition.Description.TextData.Reference +
                0x10))();
  }
  if (INiagaraModule::TemplateTagDefinition.AssetTag.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150413be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*INiagaraModule::TemplateTagDefinition.AssetTag.TextData.Reference + 0x10
                ))();
    return;
  }
  return;
}

// Translator_BeginDefaults'' @ 150413c00

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Translator_BeginDefaults__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Translator_BeginDefaults.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Translator_BeginDefaults.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Translator_BeginDefaults.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Translator_CallID'' @ 150413c20

void __cdecl `dynamic_atexit_destructor_for_'INiagaraModule::Translator_CallID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = INiagaraModule::Translator_CallID.VarData.AllocatorInstance.Data;
  if (INiagaraModule::Translator_CallID.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (INiagaraModule::Translator_CallID.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// VectorVMOps'' @ 150413c40

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraFunctionLibrary::VectorVMOps__(void)

{
  DestructItems<FNiagaraFunctionSignature,int>
            ((FNiagaraFunctionSignature *)
             UNiagaraFunctionLibrary::VectorVMOps.AllocatorInstance.Data,
             UNiagaraFunctionLibrary::VectorVMOps.ArrayNum);
  if (UNiagaraFunctionLibrary::VectorVMOps.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(UNiagaraFunctionLibrary::VectorVMOps.AllocatorInstance.Data);
    return;
  }
  return;
}

// VectorVMOpsHLSL'' @ 150413c80

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraFunctionLibrary::VectorVMOpsHLSL__(void)

{
  DestructItems<FString,int>
            ((FString *)UNiagaraFunctionLibrary::VectorVMOpsHLSL.AllocatorInstance.Data,
             UNiagaraFunctionLibrary::VectorVMOpsHLSL.ArrayNum);
  if (UNiagaraFunctionLibrary::VectorVMOpsHLSL.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UNiagaraFunctionLibrary::VectorVMOpsHLSL.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CNiagaraIndirectArgsPoolBlockSizeFactor'' @ 150413cc0

void __cdecl _dynamic_atexit_destructor_for__CNiagaraIndirectArgsPoolBlockSizeFactor__(void)

{
  CNiagaraIndirectArgsPoolBlockSizeFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CNiagaraIndirectArgsPoolBlockSizeFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowFastPathFunctionLibrary'' @ 150413ce0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowFastPathFunctionLibrary__(void)

{
  CVarAllowFastPathFunctionLibrary._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowFastPathFunctionLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDataChannelEnabled'' @ 150413d00

void __cdecl _dynamic_atexit_destructor_for__CVarDataChannelEnabled__(void)

{
  CVarDataChannelEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDataChannelEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpSortedSimulations'' @ 150413d20

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_atexit_destructor_for__CVarDumpSortedSimulations__(void)

{
  CVarDumpSortedSimulations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpSortedSimulations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableVerboseNiagaraChangeIdLogging'' @ 150413d40

void __cdecl _dynamic_atexit_destructor_for__CVarEnableVerboseNiagaraChangeIdLogging__(void)

{
  CVarEnableVerboseNiagaraChangeIdLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableVerboseNiagaraChangeIdLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogCompileIdGeneration'' @ 150413d60

void __cdecl _dynamic_atexit_destructor_for__CVarLogCompileIdGeneration__(void)

{
  CVarLogCompileIdGeneration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogCompileIdGeneration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraBatcherFreeBufferEarly'' @ 150413d80

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraBatcherFreeBufferEarly__(void)

{
  CVarNiagaraBatcherFreeBufferEarly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraBatcherFreeBufferEarly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGPUCountBufferSlack'' @ 150413da0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGPUCountBufferSlack__(void)

{
  CVarNiagaraGPUCountBufferSlack._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGPUCountBufferSlack);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGPUCountManagerAllocateIncrement'' @ 150413dc0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGPUCountManagerAllocateIncrement__(void)

{
  CVarNiagaraGPUCountManagerAllocateIncrement._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGPUCountManagerAllocateIncrement);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuComputeDebug_DrawDebugEnabled'' @ 150413de0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_DrawDebugEnabled__(void)

{
  CVarNiagaraGpuComputeDebug_DrawDebugEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuComputeDebug_DrawDebugEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuComputeDebug_MaxLineInstances'' @ 150413e00

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MaxLineInstances__(void)

{
  CVarNiagaraGpuComputeDebug_MaxLineInstances._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuComputeDebug_MaxLineInstances);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuComputeDebug_MaxTextureHeight'' @ 150413e20

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MaxTextureHeight__(void)

{
  CVarNiagaraGpuComputeDebug_MaxTextureHeight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuComputeDebug_MaxTextureHeight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuComputeDebug_MinTextureHeight'' @ 150413e40

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuComputeDebug_MinTextureHeight__(void)

{
  CVarNiagaraGpuComputeDebug_MinTextureHeight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuComputeDebug_MinTextureHeight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuLowLatencyTranslucencyEnabled'' @ 150413e60

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuLowLatencyTranslucencyEnabled__(void)

{
  CVarNiagaraGpuLowLatencyTranslucencyEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuLowLatencyTranslucencyEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuProfilingEnabled'' @ 150413e80

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuProfilingEnabled__(void)

{
  CVarNiagaraGpuProfilingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGpuProfilingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuSubmitCommandHint'' @ 150413ea0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuSubmitCommandHint__(void)

{
  CVarNiagaraGpuSubmitCommandHint._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGpuSubmitCommandHint);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraIndirectArgsPoolAllowShrinking'' @ 150413ec0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolAllowShrinking__(void)

{
  CVarNiagaraIndirectArgsPoolAllowShrinking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraIndirectArgsPoolAllowShrinking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraIndirectArgsPoolLowWaterAmount'' @ 150413ee0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolLowWaterAmount__(void)

{
  CVarNiagaraIndirectArgsPoolLowWaterAmount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraIndirectArgsPoolLowWaterAmount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraIndirectArgsPoolLowWaterFrames'' @ 150413f00

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolLowWaterFrames__(void)

{
  CVarNiagaraIndirectArgsPoolLowWaterFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraIndirectArgsPoolLowWaterFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraIndirectArgsPoolMinSize'' @ 150413f20

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraIndirectArgsPoolMinSize__(void)

{
  CVarNiagaraIndirectArgsPoolMinSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraIndirectArgsPoolMinSize)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMaxCompilePollTimePerFrame'' @ 150413f40

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraMaxCompilePollTimePerFrame__(void)

{
  CVarNiagaraMaxCompilePollTimePerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraMaxCompilePollTimePerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMinCulledGPUInstanceCount'' @ 150413f60

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraMinCulledGPUInstanceCount__(void)

{
  CVarNiagaraMinCulledGPUInstanceCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraMinCulledGPUInstanceCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMinGPUInstanceCount'' @ 150413f80

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraMinGPUInstanceCount__(void)

{
  CVarNiagaraMinGPUInstanceCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraMinGPUInstanceCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraOptimizedCrossGPUTransferEnabled'' @ 150413fa0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraOptimizedCrossGPUTransferEnabled__(void)

{
  CVarNiagaraOptimizedCrossGPUTransferEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraOptimizedCrossGPUTransferEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraTickFlushMaxPendingTicks'' @ 150413fc0

void __cdecl
FNiagaraGpuComputeDispatchLocal::
_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMaxPendingTicks__(void)

{
  CVarNiagaraTickFlushMaxPendingTicks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraTickFlushMaxPendingTicks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraTickFlushMaxQueuedFrames'' @ 150413fe0

void __cdecl
FNiagaraGpuComputeDispatchLocal::
_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMaxQueuedFrames__(void)

{
  CVarNiagaraTickFlushMaxQueuedFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraTickFlushMaxQueuedFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraTickFlushMode'' @ 150414000

void __cdecl
FNiagaraGpuComputeDispatchLocal::_dynamic_atexit_destructor_for__CVarNiagaraTickFlushMode__(void)

{
  CVarNiagaraTickFlushMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraTickFlushMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiaraGlobalSystemCountScale'' @ 150414020

void __cdecl _dynamic_atexit_destructor_for__CVarNiaraGlobalSystemCountScale__(void)

{
  CVarNiaraGlobalSystemCountScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiaraGlobalSystemCountScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseGlobalFXBudget'' @ 150414040

void __cdecl _dynamic_atexit_destructor_for__CVarUseGlobalFXBudget__(void)

{
  CVarUseGlobalFXBudget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseGlobalFXBudget);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150414060

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414090

void __cdecl
```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l19::<lambda_3>::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504140b0

void __cdecl
```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l8::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504140b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504140d0

void __cdecl
```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>::operator()'::__l10::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504140d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504140f0

void __cdecl
``FNiagaraGPUInstanceCountManager::ProcessInitInstanceCountTasks'::__l10::<lambda_1>::operator()<>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504140f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414110

void __cdecl
``FNiagaraGPUInstanceCountManager::ResizeBuffers'::__l17::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414130

void __cdecl
``FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers'::__l24::<lambda_1>::operator()<>'::
__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414150

void __cdecl
```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l14::<lambda_2>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414170

void __cdecl
``FNiagaraGpuComputeDispatch::ExecuteTicks'::__l24::<lambda_4>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414190

void __cdecl
```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l22::<lambda_3>::
operator()<FName>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504141b0

void __cdecl
``FNiagaraGpuComputeDispatch::GenerateSortKeys'::__l19::<lambda_1>::operator()<FString>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504141b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1504141d0

void __cdecl
`UNiagaraFunctionLibrary::GetVectorVMFastPathOps'::__l5::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  DestructItems<FNiagaraFunctionSignature,int>
            ((FNiagaraFunctionSignature *)::Empty.AllocatorInstance.Data,::Empty.ArrayNum);
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FastPathBuildLock'' @ 150414210

void __cdecl
`UNiagaraFunctionLibrary::InitVectorVMFastPathOps'::__l2::
_dynamic_atexit_destructor_for__FastPathBuildLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&FastPathBuildLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150414230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&FastPathBuildLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FunctionHLSL'' @ 150414270

void __cdecl
`FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL'::__l2::
_dynamic_atexit_destructor_for__FunctionHLSL__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
               ::__l2::FunctionHLSL.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
      ::__l2::FunctionHLSL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
      ::__l2::FunctionHLSL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FunctionHLSL'' @ 150414290

void __cdecl
`FVectorKernelFastUniqueRandom::GetFunctionHLSL'::__l2::
_dynamic_atexit_destructor_for__FunctionHLSL__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
               ::__l2::FunctionHLSL.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'::
      __l2::FunctionHLSL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'::
      __l2::FunctionHLSL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPU'' @ 1504142b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPU__(void)

{
  GPUStat_NiagaraGPU._104_4_ = 0;
  if (GPUStat_NiagaraGPU._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPU._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPU.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPUClearIDTables'' @ 1504142f0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPUClearIDTables__(void)

{
  GPUStat_NiagaraGPUClearIDTables._104_4_ = 0;
  if (GPUStat_NiagaraGPUClearIDTables._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPUClearIDTables._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPUClearIDTables.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPUComputeFreeIDs'' @ 150414330

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPUComputeFreeIDs__(void)

{
  GPUStat_NiagaraGPUComputeFreeIDs._104_4_ = 0;
  if (GPUStat_NiagaraGPUComputeFreeIDs._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPUComputeFreeIDs._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPUComputeFreeIDs.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPUComputeFreeIDsEmitter'' @ 150414370

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPUComputeFreeIDsEmitter__(void)

{
  GPUStat_NiagaraGPUComputeFreeIDsEmitter._104_4_ = 0;
  if (GPUStat_NiagaraGPUComputeFreeIDsEmitter._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPUComputeFreeIDsEmitter._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPUComputeFreeIDsEmitter.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPUSimulation'' @ 1504143b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPUSimulation__(void)

{
  GPUStat_NiagaraGPUSimulation._104_4_ = 0;
  if (GPUStat_NiagaraGPUSimulation._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPUSimulation._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPUSimulation.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPUSorting'' @ 1504143f0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPUSorting__(void)

{
  GPUStat_NiagaraGPUSorting._104_4_ = 0;
  if (GPUStat_NiagaraGPUSorting._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPUSorting._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPUSorting.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150414430

void __cdecl
`FNiagaraGpuComputeDispatchParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGpuComputeDispatchParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_NiagaraGpuCompute'' @ 150414450

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NiagaraGpuCompute__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NiagaraGpuCompute.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NiagaraGpuCompute.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NiagaraGpuCompute.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

