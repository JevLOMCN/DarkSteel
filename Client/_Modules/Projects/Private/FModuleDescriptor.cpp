// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 18

// FModuleDescriptor @ 141e0cb90

FModuleDescriptor * __thiscall
FModuleDescriptor::FModuleDescriptor(FModuleDescriptor *this,FModuleDescriptor *param_1)

{
  Type TVar1;
  
  this->Name = param_1->Name;
  this->Type = param_1->Type;
  TVar1 = param_1->LoadingPhase;
  (this->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LoadingPhase = TVar1;
  (this->PlatformAllowList).AllocatorInstance.Data =
       (param_1->PlatformAllowList).AllocatorInstance.Data;
  (param_1->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformAllowList).ArrayNum = (param_1->PlatformAllowList).ArrayNum;
  (this->PlatformAllowList).ArrayMax = (param_1->PlatformAllowList).ArrayMax;
  (param_1->PlatformAllowList).ArrayNum = 0;
  (param_1->PlatformAllowList).ArrayMax = 0;
  (this->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).AllocatorInstance.Data =
       (param_1->PlatformDenyList).AllocatorInstance.Data;
  (param_1->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).ArrayNum = (param_1->PlatformDenyList).ArrayNum;
  (this->PlatformDenyList).ArrayMax = (param_1->PlatformDenyList).ArrayMax;
  (param_1->PlatformDenyList).ArrayNum = 0;
  (param_1->PlatformDenyList).ArrayMax = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x0 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->PlatformArchitectureAllowList,
             (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformArchitectureAllowList);
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x0 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->PlatformArchitectureDenyList,
             (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformArchitectureDenyList);
  (this->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).AllocatorInstance.Data = (param_1->TargetAllowList).AllocatorInstance.Data
  ;
  (param_1->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).ArrayNum = (param_1->TargetAllowList).ArrayNum;
  (this->TargetAllowList).ArrayMax = (param_1->TargetAllowList).ArrayMax;
  (param_1->TargetAllowList).ArrayNum = 0;
  (param_1->TargetAllowList).ArrayMax = 0;
  (this->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).AllocatorInstance.Data = (param_1->TargetDenyList).AllocatorInstance.Data;
  (param_1->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).ArrayNum = (param_1->TargetDenyList).ArrayNum;
  (this->TargetDenyList).ArrayMax = (param_1->TargetDenyList).ArrayMax;
  (param_1->TargetDenyList).ArrayNum = 0;
  (param_1->TargetDenyList).ArrayMax = 0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data =
       (param_1->TargetConfigurationAllowList).AllocatorInstance.Data;
  (param_1->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).ArrayNum = (param_1->TargetConfigurationAllowList).ArrayNum;
  (this->TargetConfigurationAllowList).ArrayMax = (param_1->TargetConfigurationAllowList).ArrayMax;
  (param_1->TargetConfigurationAllowList).ArrayNum = 0;
  (param_1->TargetConfigurationAllowList).ArrayMax = 0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data =
       (param_1->TargetConfigurationDenyList).AllocatorInstance.Data;
  (param_1->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).ArrayNum = (param_1->TargetConfigurationDenyList).ArrayNum;
  (this->TargetConfigurationDenyList).ArrayMax = (param_1->TargetConfigurationDenyList).ArrayMax;
  (param_1->TargetConfigurationDenyList).ArrayNum = 0;
  (param_1->TargetConfigurationDenyList).ArrayMax = 0;
  (this->ProgramAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramAllowList).AllocatorInstance.Data =
       (param_1->ProgramAllowList).AllocatorInstance.Data;
  (param_1->ProgramAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramAllowList).ArrayNum = (param_1->ProgramAllowList).ArrayNum;
  (this->ProgramAllowList).ArrayMax = (param_1->ProgramAllowList).ArrayMax;
  (param_1->ProgramAllowList).ArrayNum = 0;
  (param_1->ProgramAllowList).ArrayMax = 0;
  (this->ProgramDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramDenyList).AllocatorInstance.Data = (param_1->ProgramDenyList).AllocatorInstance.Data
  ;
  (param_1->ProgramDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramDenyList).ArrayNum = (param_1->ProgramDenyList).ArrayNum;
  (this->ProgramDenyList).ArrayMax = (param_1->ProgramDenyList).ArrayMax;
  (param_1->ProgramDenyList).ArrayNum = 0;
  (param_1->ProgramDenyList).ArrayMax = 0;
  (this->GameTargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetAllowList).AllocatorInstance.Data =
       (param_1->GameTargetAllowList).AllocatorInstance.Data;
  (param_1->GameTargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetAllowList).ArrayNum = (param_1->GameTargetAllowList).ArrayNum;
  (this->GameTargetAllowList).ArrayMax = (param_1->GameTargetAllowList).ArrayMax;
  (param_1->GameTargetAllowList).ArrayNum = 0;
  (param_1->GameTargetAllowList).ArrayMax = 0;
  (this->GameTargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetDenyList).AllocatorInstance.Data =
       (param_1->GameTargetDenyList).AllocatorInstance.Data;
  (param_1->GameTargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetDenyList).ArrayNum = (param_1->GameTargetDenyList).ArrayNum;
  (this->GameTargetDenyList).ArrayMax = (param_1->GameTargetDenyList).ArrayMax;
  (param_1->GameTargetDenyList).ArrayNum = 0;
  (param_1->GameTargetDenyList).ArrayMax = 0;
  (this->AdditionalDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDependencies).AllocatorInstance.Data =
       (param_1->AdditionalDependencies).AllocatorInstance.Data;
  (param_1->AdditionalDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDependencies).ArrayNum = (param_1->AdditionalDependencies).ArrayNum;
  (this->AdditionalDependencies).ArrayMax = (param_1->AdditionalDependencies).ArrayMax;
  (param_1->AdditionalDependencies).ArrayNum = 0;
  (param_1->AdditionalDependencies).ArrayMax = 0;
  this->bHasExplicitPlatforms = param_1->bHasExplicitPlatforms;
  return this;
}

// FModuleDescriptor @ 141e0cea0

FModuleDescriptor * __thiscall
FModuleDescriptor::FModuleDescriptor(FModuleDescriptor *this,FModuleDescriptor *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<EBuildTargetType,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EBuildConfiguration,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = &this->PlatformAllowList;
  this->Name = param_1->Name;
  this->Type = param_1->Type;
  this->LoadingPhase = param_1->LoadingPhase;
  piVar2 = &(this->PlatformAllowList).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PlatformAllowList).ArrayNum;
  pFVar6 = (param_1->PlatformAllowList).AllocatorInstance.Data;
  (this->PlatformAllowList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar1 = &this->PlatformDenyList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PlatformDenyList).ArrayMax;
  iVar5 = (param_1->PlatformDenyList).ArrayNum;
  pFVar6 = (param_1->PlatformDenyList).AllocatorInstance.Data;
  (this->PlatformDenyList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x0 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PlatformArchitectureAllowList,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PlatformArchitectureAllowList);
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x0 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PlatformArchitectureDenyList,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PlatformArchitectureDenyList);
  pTVar3 = &this->TargetAllowList;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TargetAllowList).ArrayMax;
  iVar5 = (param_1->TargetAllowList).ArrayNum;
  pFVar6 = (param_1->TargetAllowList).AllocatorInstance.Data;
  (this->TargetAllowList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar3 = &this->TargetDenyList;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TargetDenyList).ArrayMax;
  iVar5 = (param_1->TargetDenyList).ArrayNum;
  pFVar6 = (param_1->TargetDenyList).AllocatorInstance.Data;
  (this->TargetDenyList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar4 = &this->TargetConfigurationAllowList;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TargetConfigurationAllowList).ArrayMax;
  iVar5 = (param_1->TargetConfigurationAllowList).ArrayNum;
  pFVar6 = (param_1->TargetConfigurationAllowList).AllocatorInstance.Data;
  (this->TargetConfigurationAllowList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar4 = &this->TargetConfigurationDenyList;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TargetConfigurationDenyList).ArrayMax;
  iVar5 = (param_1->TargetConfigurationDenyList).ArrayNum;
  pFVar6 = (param_1->TargetConfigurationDenyList).AllocatorInstance.Data;
  (this->TargetConfigurationDenyList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar1 = &this->ProgramAllowList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ProgramAllowList).ArrayMax;
  iVar5 = (param_1->ProgramAllowList).ArrayNum;
  pFVar6 = (param_1->ProgramAllowList).AllocatorInstance.Data;
  (this->ProgramAllowList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar1 = &this->ProgramDenyList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ProgramDenyList).ArrayMax;
  iVar5 = (param_1->ProgramDenyList).ArrayNum;
  pFVar6 = (param_1->ProgramDenyList).AllocatorInstance.Data;
  (this->ProgramDenyList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar1 = &this->GameTargetAllowList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GameTargetAllowList).ArrayMax;
  iVar5 = (param_1->GameTargetAllowList).ArrayNum;
  pFVar6 = (param_1->GameTargetAllowList).AllocatorInstance.Data;
  (this->GameTargetAllowList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar1 = &this->GameTargetDenyList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GameTargetDenyList).ArrayMax;
  iVar5 = (param_1->GameTargetDenyList).ArrayNum;
  pFVar6 = (param_1->GameTargetDenyList).AllocatorInstance.Data;
  (this->GameTargetDenyList).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar1 = &this->AdditionalDependencies;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalDependencies).ArrayMax;
  iVar5 = (param_1->AdditionalDependencies).ArrayNum;
  pFVar6 = (param_1->AdditionalDependencies).AllocatorInstance.Data;
  (this->AdditionalDependencies).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  this->bHasExplicitPlatforms = param_1->bHasExplicitPlatforms;
  return this;
}

// FModuleDescriptor @ 141e0d330

FModuleDescriptor * __thiscall
FModuleDescriptor::FModuleDescriptor
          (FModuleDescriptor *this,FName param_1,Type param_2,Type param_3)

{
  this->Name = param_1;
  (this->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformAllowList).ArrayNum = 0;
  (this->PlatformAllowList).ArrayMax = 0;
  (this->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).ArrayNum = 0;
  (this->PlatformDenyList).ArrayMax = 0;
  *(undefined8 *)&this->PlatformArchitectureAllowList = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x20 = 0;
  this->Type = param_2;
  this->LoadingPhase = param_3;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformArchitectureAllowList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x48 = 0;
  *(undefined8 *)&this->PlatformArchitectureDenyList = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformArchitectureDenyList).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x48 = 0;
  (this->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).ArrayNum = 0;
  (this->TargetAllowList).ArrayMax = 0;
  (this->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).ArrayNum = 0;
  (this->TargetDenyList).ArrayMax = 0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).ArrayNum = 0;
  (this->TargetConfigurationAllowList).ArrayMax = 0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).ArrayNum = 0;
  (this->TargetConfigurationDenyList).ArrayMax = 0;
  (this->ProgramAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramAllowList).ArrayNum = 0;
  (this->ProgramAllowList).ArrayMax = 0;
  (this->ProgramDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgramDenyList).ArrayNum = 0;
  (this->ProgramDenyList).ArrayMax = 0;
  (this->GameTargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetAllowList).ArrayNum = 0;
  (this->GameTargetAllowList).ArrayMax = 0;
  (this->GameTargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetDenyList).ArrayNum = 0;
  (this->GameTargetDenyList).ArrayMax = 0;
  (this->AdditionalDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDependencies).ArrayNum = 0;
  (this->AdditionalDependencies).ArrayMax = 0;
  this->bHasExplicitPlatforms = false;
  return this;
}

// ~FModuleDescriptor @ 141e0f0b0

void __thiscall FModuleDescriptor::~FModuleDescriptor(FModuleDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AdditionalDependencies).AllocatorInstance.Data,
             (this->AdditionalDependencies).ArrayNum);
  pFVar1 = (this->AdditionalDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->GameTargetDenyList).AllocatorInstance.Data,
             (this->GameTargetDenyList).ArrayNum);
  pFVar1 = (this->GameTargetDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->GameTargetAllowList).AllocatorInstance.Data,
             (this->GameTargetAllowList).ArrayNum);
  pFVar1 = (this->GameTargetAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ProgramDenyList).AllocatorInstance.Data,
             (this->ProgramDenyList).ArrayNum);
  pFVar1 = (this->ProgramDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ProgramAllowList).AllocatorInstance.Data,
             (this->ProgramAllowList).ArrayNum);
  pFVar1 = (this->ProgramAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PlatformArchitectureDenyList).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlatformArchitectureDenyList).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformArchitectureDenyList);
  *(undefined4 *)&(this->PlatformArchitectureAllowList).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlatformArchitectureAllowList).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformArchitectureAllowList);
  DestructItems<FString,int>
            ((FString *)(this->PlatformDenyList).AllocatorInstance.Data,
             (this->PlatformDenyList).ArrayNum);
  pFVar1 = (this->PlatformDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PlatformAllowList).AllocatorInstance.Data,
             (this->PlatformAllowList).ArrayNum);
  pFVar1 = (this->PlatformAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 141e12200

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`FModuleDescriptor::UpdateJson'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<FJsonValue,1> *pTVar3;
  code *pcVar4;
  FString *pFVar5;
  ForAnyElementType _Src;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  TJsonValueString<wchar_t> *this_00;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  TJsonValueString<wchar_t> *pTVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FString *pFVar20;
  undefined1 local_res10 [8];
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_res18;
  undefined1 local_res20 [8];
  uint local_f8;
  TSharedPtr<FJsonValue,1> local_f0;
  FString *local_e0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_a0;
  FString *local_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  FString local_88;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString local_48;
  
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = *(int *)&param_1->field_0x28;
  iStack_d0 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  local_b8 = iStack_d0;
  if (iVar8 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar15 = *puVar18;
    local_b8 = 0;
    iStack_d0 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_141e122ae;
      uVar15 = puVar18[lVar10 + 1];
    }
    uStack_cc = -uVar15 & uVar15;
    uVar11 = (ulonglong)uStack_cc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a8 = (int)lVar10;
    iStack_bc = local_b8 + -1 + local_a8;
    if (iVar8 < iStack_bc) {
      iStack_bc = iVar8;
    }
  }
LAB_141e122ae:
  local_f8 = *(uint *)&param_1->field_0x28;
  iStack_b0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar15 = local_f8 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_cc,iStack_d0);
  uStack_c0 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_bc;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)local_f8 >> 5;
  TStack_70._28_4_ = iStack_bc;
  TStack_70.BaseBitIndex = local_b8;
  uStack_50 = CONCAT44(uStack_ac,iStack_b0);
  local_res18 = param_1;
  local_d8 = param_1;
  local_c8 = (undefined1 *)pTVar19;
  iStack_b4 = iStack_bc;
  local_90 = pTVar19;
  local_78 = param_1;
  TStack_70.Array = pTVar19;
  if ((((int)local_f8 < 0) || (iVar8 < (int)local_f8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  uVar2 = *(uint *)&param_1->field_0x28;
  if (local_f8 != uVar2) {
    puVar17 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar19;
    }
    uVar16 = -1 << ((byte)local_f8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      local_f8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141e123d0;
      uVar16 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a4 = (int)lVar10;
    local_f8 = local_a4 + -1 + uVar15;
    if ((int)uVar2 < (int)local_f8) {
      local_f8 = uVar2;
    }
  }
LAB_141e123d0:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == local_f8) && (TStack_70.Array == pTVar19)) &&
       (pTVar6 == local_res18)) {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pTVar6;
    pFVar20 = *(FString **)(lVar10 + 0x10 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    local_e0 = (FString *)(lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    uVar15 = local_e0[1].Data.ArrayNum;
    uVar11 = (ulonglong)(int)uVar15;
    local_98 = pFVar20 + uVar11;
    while( true ) {
      pFVar5 = local_98;
      pTVar14 = (TJsonValueString<wchar_t> *)0x0;
      if (local_e0[1].Data.ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar20 == pFVar5) break;
      ::FString::ConcatFC(&local_48,local_e0,L":");
      ::FString::ConcatFF(&local_88,&local_48,pFVar20);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_00 = ::operator_new(0x20);
      if (this_00 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        _Src.Data = local_88.Data.AllocatorInstance.Data;
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        piVar1 = &(this_00->Value).Data.ArrayMax;
        (this_00->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar8 = local_88.Data.ArrayNum;
        (this_00->Value).Data.ArrayNum = iVar8;
        pTVar14 = this_00;
        if (iVar8 == 0) {
          *piVar1 = 0;
          *(EJson *)&this_00->_padding_ = String;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)&this_00->Value,iVar8,piVar1);
          memcpy((this_00->Value).Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
          *(EJson *)&this_00->_padding_ = String;
        }
      }
      local_a0.Object = pTVar14;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_f0,&local_a0);
      pTVar3 = (TSharedPtr<FJsonValue,1> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pTVar3 <= &local_f0) && (&local_f0 < pTVar3 + __return_storage_ptr__->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(FJsonValue **)pFVar12 = local_f0.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) =
           local_f0.SharedReferenceCount.ReferenceController;
      local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_f0.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar20 = pFVar20 + 1;
      uVar11 = (ulonglong)uVar15;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar19 = local_90;
  } while( true );
}

// IsCompiledInConfiguration @ 141e260d0

bool __thiscall
FModuleDescriptor::IsCompiledInConfiguration
          (FModuleDescriptor *this,FString *param_1,EBuildConfiguration param_2,FString *param_3,
          EBuildTargetType param_4,bool param_5,bool param_6,FString *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  wchar_t *pwVar10;
  FString local_38;
  
  if ((((this->bHasExplicitPlatforms != false) || (0 < (this->PlatformAllowList).ArrayNum)) &&
      (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                         (&this->PlatformAllowList,param_1), !bVar3)) ||
     (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->PlatformDenyList,param_1), bVar3)) {
switchD_141e26453_default:
    param_5 = false;
  }
  else {
    if (1 < (param_7->Data).ArrayNum) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar10 = L"";
        iVar6 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      iVar6 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->PlatformArchitectureAllowList,uVar5,param_1);
      if (iVar6 != -1) {
        pTVar7 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->PlatformArchitectureAllowList,param_1);
        if ((pTVar7 == (TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          ((TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar7->field_0x10,
                           param_7);
        if (!bVar3) goto switchD_141e26453_default;
      }
    }
    iVar1 = (param_1->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar10 = L"";
      iVar6 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
    iVar6 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->PlatformArchitectureDenyList,uVar5,param_1);
    if (iVar6 != -1) {
      if ((param_7->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(param_7->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"MULTI");
      if (iVar6 == 0) {
        ::FName::ToString(&this->Name,&local_38);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(PlatformArchitectureDenyList.Contains(Platform) && Architecture == L\"MULTI\")"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ModuleDescriptor.cpp"
                           ,0x21e,
                           L"PlatformArchitectureDenyList does not support %s Multi-architecture builds (%s)"
                          );
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    if (1 < (param_7->Data).ArrayNum) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar10 = L"";
        iVar6 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      iVar6 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->PlatformArchitectureDenyList,uVar5,param_1);
      if (iVar6 != -1) {
        pTVar7 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->PlatformArchitectureDenyList,param_1);
        if ((pTVar7 == (TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          ((TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar7->field_0x10,
                           param_7);
        if (bVar3) goto switchD_141e26453_default;
      }
    }
    iVar6 = (this->TargetAllowList).ArrayNum;
    if (0 < iVar6) {
      pFVar8 = (this->TargetAllowList).AllocatorInstance.Data;
      pFVar9 = pFVar8 + iVar6;
      for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
        if (*pFVar8 == (FScriptContainerElement)param_4) goto LAB_141e26361;
      }
      goto switchD_141e26453_default;
    }
LAB_141e26361:
    pFVar8 = (this->TargetDenyList).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (this->TargetDenyList).ArrayNum;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
      if (*pFVar8 == (FScriptContainerElement)param_4) goto switchD_141e26453_default;
    }
    iVar6 = (this->TargetConfigurationAllowList).ArrayNum;
    if (0 < iVar6) {
      pFVar8 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
      pFVar9 = pFVar8 + iVar6;
      for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
        if (*pFVar8 == (FScriptContainerElement)param_2) goto LAB_141e263b7;
      }
      goto switchD_141e26453_default;
    }
LAB_141e263b7:
    pFVar8 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (this->TargetConfigurationDenyList).ArrayNum;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
      if (*pFVar8 == (FScriptContainerElement)param_2) goto switchD_141e26453_default;
    }
    if (param_4 == Program) {
      if (0 < (this->ProgramAllowList).ArrayNum) {
        bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          (&this->ProgramAllowList,param_3);
        return bVar3;
      }
      this_00 = &this->ProgramDenyList;
    }
    else {
      if ((0 < (this->GameTargetAllowList).ArrayNum) &&
         (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                            (&this->GameTargetAllowList,param_3), !bVar3))
      goto switchD_141e26453_default;
      this_00 = &this->GameTargetDenyList;
    }
    bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,param_3);
    if (bVar3) goto switchD_141e26453_default;
    switch(this->Type) {
    case Runtime:
    case RuntimeNoCommandlet:
      param_5 = param_4 != Program;
      break;
    case CookedOnly:
      param_5 = param_6;
      break;
    case UncookedOnly:
      param_5 = !param_6;
      break;
    case Developer:
    case EditorAndProgram:
      param_5 = (byte)(param_4 - Editor) < 2;
      break;
    case DeveloperTool:
      break;
    case Editor:
    case EditorNoCommandlet:
      param_5 = param_4 == Editor;
      break;
    case Program:
      param_5 = param_4 == Program;
      break;
    case ServerOnly:
      param_5 = (param_4 - Client & 0xfd) != 0;
      break;
    case ClientOnly:
    case ClientOnlyNoCommandlet:
      if ((param_4 == Program) || (param_4 == Server)) goto switchD_141e26453_default;
    case RuntimeAndProgram:
      param_5 = true;
      break;
    default:
      goto switchD_141e26453_default;
    }
  }
  return param_5;
}

// IsCompiledInCurrentConfiguration @ 141e26520

bool __thiscall FModuleDescriptor::IsCompiledInCurrentConfiguration(FModuleDescriptor *this)

{
  EBuildTargetType EVar1;
  EBuildConfiguration EVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar4 = FGenericPlatformMisc::GetUBTArchitecture();
  ::FString::FString(&local_18,pwVar4);
  EVar1 = FApp::GetBuildTargetType();
  ::FString::FString(&local_28,"ProjectDS");
  EVar2 = FApp::GetBuildConfiguration();
  pwVar4 = FGenericPlatformMisc::GetUBTPlatform();
  ::FString::FString(&local_38,pwVar4);
  bVar3 = IsCompiledInConfiguration(this,&local_38,EVar2,&local_28,EVar1,true,true,&local_18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsLoadedInCurrentConfiguration @ 141e26810

bool __thiscall FModuleDescriptor::IsLoadedInCurrentConfiguration(FModuleDescriptor *this)

{
  bool bVar1;
  EBuildTargetType EVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FString local_18;
  
  bVar1 = IsCompiledInCurrentConfiguration(this);
  if (bVar1) {
    EVar2 = FApp::GetBuildTargetType();
    if (EVar2 == Program) {
      ::FString::FString(&local_18,"ProjectDS");
      iVar3 = (this->ProgramAllowList).ArrayNum;
      if (0 < iVar3) {
        pFVar5 = (this->ProgramAllowList).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
        uVar4 = local_18.Data._8_8_;
        for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x10) {
          iVar3 = *(int *)(pFVar5 + 8);
          if (iVar3 == (int)uVar4) {
            if (1 < iVar3) {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)pFVar5,(wchar_t *)local_18.Data.AllocatorInstance.Data
                                );
              bVar1 = iVar3 == 0;
              uVar4 = local_18.Data._8_8_;
              goto LAB_141e2689a;
            }
LAB_141e268ce:
            bVar1 = true;
            goto LAB_141e268ac;
          }
          bVar1 = iVar3 + (int)uVar4 == 1;
LAB_141e2689a:
          if (bVar1) goto LAB_141e268ce;
        }
LAB_141e268aa:
        bVar1 = false;
LAB_141e268ac:
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return bVar1;
      }
      pFVar5 = (this->ProgramDenyList).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)(this->ProgramDenyList).ArrayNum * 0x10;
      uVar4 = local_18.Data._8_8_;
      for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x10) {
        iVar3 = *(int *)(pFVar5 + 8);
        if (iVar3 == (int)uVar4) {
          if (iVar3 < 2) goto LAB_141e268aa;
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar5,(wchar_t *)local_18.Data.AllocatorInstance.Data);
          bVar1 = iVar3 == 0;
          uVar4 = local_18.Data._8_8_;
        }
        else {
          bVar1 = iVar3 + (int)uVar4 == 1;
        }
        if (bVar1) goto LAB_141e268aa;
      }
    }
    else {
      ::FString::FString(&local_18,"ProjectDS");
      iVar3 = (this->GameTargetAllowList).ArrayNum;
      uVar4 = local_18.Data._8_8_;
      if (0 < iVar3) {
        pFVar5 = (this->GameTargetAllowList).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
        for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x10) {
          iVar3 = *(int *)(pFVar5 + 8);
          if (iVar3 == (int)uVar4) {
            if (iVar3 < 2) goto LAB_141e269df;
            iVar3 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar5,(wchar_t *)local_18.Data.AllocatorInstance.Data);
            bVar1 = iVar3 == 0;
            uVar4 = local_18.Data._8_8_;
          }
          else {
            bVar1 = iVar3 + (int)uVar4 == 1;
          }
          if (bVar1) goto LAB_141e269df;
        }
LAB_141e269b9:
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return false;
      }
LAB_141e269df:
      pFVar5 = (this->GameTargetDenyList).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)(this->GameTargetDenyList).ArrayNum * 0x10;
      for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x10) {
        iVar3 = *(int *)(pFVar5 + 8);
        if (iVar3 == (int)uVar4) {
          if (iVar3 < 2) goto LAB_141e269b9;
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar5,(wchar_t *)local_18.Data.AllocatorInstance.Data);
          bVar1 = iVar3 == 0;
          uVar4 = local_18.Data._8_8_;
        }
        else {
          bVar1 = iVar3 + (int)uVar4 == 1;
        }
        if (bVar1) goto LAB_141e269b9;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    switch(this->Type) {
    case Runtime:
    case RuntimeNoCommandlet:
    case RuntimeAndProgram:
    case CookedOnly:
    case DeveloperTool:
    case ServerOnly:
    case ClientOnly:
      return true;
    case ClientOnlyNoCommandlet:
      return PRIVATE_GIsRunningCommandlet == false;
    }
  }
  return false;
}

// LoadModulesForPhase @ 141e28850

void __cdecl
FModuleDescriptor::LoadModulesForPhase
          (Type param_1,TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FName,EModuleLoadResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EModuleLoadResult,0>_>
          *param_3)

{
  code *pcVar1;
  float fVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  uint uVar5;
  FText *pFVar6;
  FModuleManager *pFVar7;
  IModuleInterface *pIVar8;
  uint uVar9;
  FModuleDescriptor *this;
  longlong lVar10;
  EModuleLoadResult local_res10 [6];
  FModuleDescriptor *local_c8;
  EModuleLoadResult *local_c0;
  FText local_b8;
  FText local_a8;
  FSlowTask local_98;
  
  pFVar3 = GWarn;
  pFVar6 = FText::FText(&local_b8);
  FSlowTask::FSlowTask(&local_98,(float)param_2->ArrayNum,pFVar6,true,pFVar3);
  FSlowTask::Initialize(&local_98);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  fVar2 = __real_3f800000;
  uVar9 = 0;
  if (0 < param_2->ArrayNum) {
    lVar10 = 0;
    do {
      pFVar6 = FText::FText(&local_a8);
      FSlowTask::EnterProgressFrame(&local_98,fVar2,pFVar6);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      uVar5 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = (FModuleDescriptor *)((param_2->AllocatorInstance).Data + lVar10);
      pFVar7 = FModuleManager::Get();
      bVar4 = FModuleManager::IsModuleLoaded(pFVar7,this->Name);
      if (((!bVar4) && (param_1 == this->LoadingPhase)) &&
         (bVar4 = IsLoadedInCurrentConfiguration(this), bVar4)) {
        pFVar7 = FModuleManager::Get();
        pIVar8 = FModuleManager::LoadModuleWithFailureReason(pFVar7,this->Name,local_res10,None);
        if (pIVar8 == (IModuleInterface *)0x0) {
          local_c0 = local_res10;
          local_c8 = this;
          TSet<TTuple<FName,enum_EModuleLoadResult>,TDefaultMapHashableKeyFuncs<FName,enum_EModuleLoadResult,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,enum_EModuleLoadResult_const_&>_>
                    (param_3,(TPairInitializer<FName_const_&,EModuleLoadResult_const_&> *)
                             (local_res10 + 4),(bool *)&local_c8);
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x168;
    } while ((int)uVar9 < param_2->ArrayNum);
  }
  FSlowTask::Destroy(&local_98);
  if (local_98.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_98.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.DefaultMessage.TextData.Reference + 0x10))();
  }
  return;
}

// Read @ 141e2d3e0

bool __thiscall FModuleDescriptor::Read(FModuleDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FModuleDescriptor>(param_1,this,param_2);
  return bVar1;
}

// Read @ 141e2d400

bool __thiscall FModuleDescriptor::Read(FModuleDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FModuleDescriptor>(param_1,this,param_2);
  return bVar1;
}

// ReadArray @ 141e32820

bool __cdecl
FModuleDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FModuleDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// ReadArray @ 141e32830

bool __cdecl
FModuleDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FModuleDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// UnloadModulesForPhase @ 141e3dcb0

void __cdecl
FModuleDescriptor::UnloadModulesForPhase
          (Type param_1,TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FName,EModuleUnloadResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EModuleUnloadResult,0>_>
          *param_3,bool param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  FFeedbackContext *pFVar4;
  char cVar5;
  bool bVar6;
  FText *pFVar7;
  FModuleManager *pFVar8;
  IModuleInterface *pIVar9;
  FName *pFVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  undefined4 local_d8;
  undefined1 local_d4 [4];
  FName *local_d0;
  undefined4 *local_c8;
  FText local_c0;
  FText local_b0;
  FSlowTask local_98;
  
  pFVar4 = GWarn;
  pFVar7 = FText::FText(&local_c0);
  FSlowTask::FSlowTask(&local_98,(float)param_2->ArrayNum,pFVar7,true,pFVar4);
  FSlowTask::Initialize(&local_98);
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  fVar3 = __real_3f800000;
  iVar1 = param_2->ArrayNum;
  pFVar10 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x2d;
LAB_141e3dd50:
  do {
    if (param_2->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar11) {
      FSlowTask::Destroy(&local_98);
      if (local_98.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_98.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DefaultMessage.TextData.Reference + 0x10))();
      }
      return;
    }
    pFVar7 = FText::FText(&local_b0);
    FSlowTask::EnterProgressFrame(&local_98,fVar3,pFVar7);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (param_1 == pFVar10[1].Number) {
      pFVar8 = FModuleManager::Get();
      pIVar9 = FModuleManager::GetModule(pFVar8,*pFVar10);
      if (pIVar9 != (IModuleInterface *)0x0) {
        cVar5 = (**(code **)((longlong)*pIVar9 + 0x28))(pIVar9);
        if (cVar5 == '\0') {
          local_c8 = &local_d8;
          local_d8 = 1;
          local_d0 = pFVar10;
          TSet<TTuple<FName,enum_EModuleUnloadResult>,TDefaultMapHashableKeyFuncs<FName,enum_EModuleUnloadResult,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,enum_EModuleUnloadResult_&&>_>
                    (param_3,(TPairInitializer<FName_const_&,EModuleUnloadResult_&&> *)local_d4,
                     (bool *)(local_d4 + 4));
          pFVar10 = pFVar10 + 0x2d;
          goto LAB_141e3dd50;
        }
        if (!param_4) {
          (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
          pFVar8 = FModuleManager::Get();
          bVar6 = FModuleManager::UnloadModule(pFVar8,*pFVar10,false,param_5);
          if (!bVar6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FModuleManager::Get().UnloadModule(Descriptor.Name, false, bAllowUnloadCode)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ModuleDescriptor.cpp"
                               ,0x346,L"");
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
    }
    pFVar10 = pFVar10 + 0x2d;
  } while( true );
}

// UpdateArray @ 141e3ee10

void __cdecl
FModuleDescriptor::UpdateArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_40;
  FString local_28;
  
  local_40._16_8_ = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_80;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ModuleDescriptor::UpdateModuleJsonObject;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ModuleDescriptor::TryGetModuleJsonObjectKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ModuleDescriptor::GetModuleKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  ::FString::FString(&local_28,param_2);
  FJsonObjectArrayUpdater<FModuleDescriptor,FString>::Execute
            (param_1,&local_28,param_3,
             (TDelegate<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy> *)
             local_58,(TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                       *)local_70,
             (TDelegate<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
              *)local_88,&local_40);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateJson @ 141e3fbf0

void __thiscall FModuleDescriptor::UpdateJson(FModuleDescriptor *this,FJsonObject *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TJsonValueString<wchar_t> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TJsonValueString<wchar_t> *pTVar11;
  TJsonValueString<wchar_t> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8 [2];
  FJsonObject *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_678;
  undefined1 local_677;
  undefined1 local_676;
  undefined1 local_675;
  undefined1 local_674;
  undefined1 local_673;
  undefined1 local_672;
  undefined1 local_671;
  undefined1 local_670 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_668;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_658;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_648;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_638;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_628;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_618;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_608;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_5e8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_5d8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_5c8;
  TSharedPtr<FJsonValue,1> local_5b8;
  TSharedPtr<FJsonValue,1> local_5a8;
  TSharedPtr<FJsonValue,1> local_598;
  FString local_588;
  TSharedPtr<FJsonValue,1> local_578;
  FString local_568;
  TSharedPtr<FJsonValue,1> local_558;
  FString local_548;
  TSharedPtr<FJsonValue,1> local_538;
  FString local_528;
  TSharedPtr<FJsonValue,1> local_518;
  TSharedPtr<FJsonValue,1> local_508;
  TSharedPtr<FJsonValue,1> local_4f8;
  TSharedPtr<FJsonValue,1> local_4e8;
  TSharedPtr<FJsonValue,1> local_4d8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4c8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4c0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4b8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4b0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4a8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_4a0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_498;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_490;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_488;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_480;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_478;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_470;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  wchar_t *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  FString local_3f8;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  FString local_3d8;
  wchar_t *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FString local_3b8;
  wchar_t *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  wchar_t *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  FString local_378;
  wchar_t *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  FString local_358;
  wchar_t *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  FString local_338;
  wchar_t *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  FString local_318;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FString local_2d8;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FString local_298;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  FString local_278;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  bVar5 = false;
  local_res8[0] = 0;
  local_res10 = param_1;
  pFVar7 = ::FName::ToString(&this->Name,&local_1d8);
  ::FString::FString(&local_450,L"Name");
  FJsonObject::SetStringField(param_1,&local_450,pFVar7);
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pwVar8 = EHostType::ToString(this->Type);
  pFVar7 = ::FString::FString(&local_1c8,pwVar8);
  ::FString::FString(&local_440,L"Type");
  FJsonObject::SetStringField(param_1,&local_440,pFVar7);
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pwVar8 = ELoadingPhase::ToString(this->LoadingPhase);
  pFVar7 = ::FString::FString(&local_1b8,pwVar8);
  ::FString::FString(&local_430,L"LoadingPhase");
  FJsonObject::SetStringField(param_1,&local_430,pFVar7);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  iVar2 = (this->PlatformAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_400 = 0x11;
    local_408 = L"PlatformAllowList";
    local_1a8._12_4_ = uStack_3fc;
    local_1a8.Size = 0x11;
    local_1a8.DataPtr = L"PlatformAllowList";
    FJsonObject::RemoveField(param_1,&local_1a8);
  }
  else {
    pFVar14 = (this->PlatformAllowList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_668.ArrayNum = 0;
    local_668.ArrayMax = 0;
    while( true ) {
      if ((this->PlatformAllowList).ArrayNum != iVar2) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar13) break;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_4c8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_5b8,&local_4c8);
      if (((local_668.AllocatorInstance.Data <= &local_5b8) &&
          (&local_5b8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_668.ArrayNum;
      if (local_668.ArrayNum == local_668.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_668.AllocatorInstance,&local_668.ArrayMax);
      }
      local_668.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_668.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_5b8.Object;
      *(TReferenceControllerBase<1> **)
       (local_668.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_5b8.SharedReferenceCount.ReferenceController;
      local_5b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_5b8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_420,L"PlatformAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_420,&local_668);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_668.AllocatorInstance.Data,local_668.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_668.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_668.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->PlatformDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_3e0 = 0x10;
    local_3e8 = L"PlatformDenyList";
    local_198._12_4_ = uStack_3dc;
    local_198.Size = 0x10;
    local_198.DataPtr = L"PlatformDenyList";
    FJsonObject::RemoveField(param_1,&local_198);
  }
  else {
    pFVar14 = (this->PlatformDenyList).AllocatorInstance.Data;
    local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_658.ArrayNum = 0;
    local_658.ArrayMax = 0;
    while( true ) {
      if ((this->PlatformDenyList).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar14 == pFVar13) break;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_4c0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_5a8,&local_4c0);
      if (((local_658.AllocatorInstance.Data <= &local_5a8) &&
          (&local_5a8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_658.AllocatorInstance.Data + (longlong)local_658.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_658.ArrayNum;
      if (local_658.ArrayNum == local_658.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_658.AllocatorInstance,&local_658.ArrayMax);
      }
      local_658.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_658.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_5a8.Object;
      *(TReferenceControllerBase<1> **)
       (local_658.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_5a8.SharedReferenceCount.ReferenceController;
      local_5a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_5a8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_3f8,L"PlatformDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_3f8,&local_658);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_658.AllocatorInstance.Data,local_658.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_658.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_658.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->PlatformArchitectureAllowList).field_0x8 -
      *(int *)&(this->PlatformArchitectureAllowList).field_0x34 < 1) {
    uStack_3c0 = 0x1d;
    local_3c8 = L"PlatformArchitectureAllowList";
    local_188._12_4_ = uStack_3bc;
    local_188.Size = 0x1d;
    local_188.DataPtr = L"PlatformArchitectureAllowList";
    FJsonObject::RemoveField(param_1,&local_188);
  }
  else {
    pTVar10 = `FModuleDescriptor::UpdateJson'::__l2::<lambda_1>::operator()
                        (local_res20,&local_470,&this->PlatformArchitectureAllowList);
    ::FString::FString(&local_3d8,L"PlatformArchitectureAllowList");
    FJsonObject::SetArrayField(param_1,&local_3d8,pTVar10);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_470.AllocatorInstance.Data,local_470.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_470.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_470.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->PlatformArchitectureDenyList).field_0x8 -
      *(int *)&(this->PlatformArchitectureDenyList).field_0x34 < 1) {
    uStack_3a0 = 0x1c;
    local_3a8 = L"PlatformArchitectureDenyList";
    local_178._12_4_ = uStack_39c;
    local_178.Size = 0x1c;
    local_178.DataPtr = L"PlatformArchitectureDenyList";
    FJsonObject::RemoveField(param_1,&local_178);
  }
  else {
    pTVar10 = `FModuleDescriptor::UpdateJson'::__l2::<lambda_1>::operator()
                        (local_res20,&local_460,&this->PlatformArchitectureDenyList);
    ::FString::FString(&local_3b8,L"PlatformArchitectureDenyList");
    FJsonObject::SetArrayField(param_1,&local_3b8,pTVar10);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_460.AllocatorInstance.Data,local_460.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_460.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_460.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->TargetAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_380 = 0xf;
    local_388 = L"TargetAllowList";
    local_168._12_4_ = uStack_37c;
    local_168.Size = 0xf;
    local_168.DataPtr = L"TargetAllowList";
    FJsonObject::RemoveField(param_1,&local_168);
  }
  else {
    pFVar13 = (this->TargetAllowList).AllocatorInstance.Data;
    local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_648.ArrayNum = 0;
    local_648.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((this->TargetAllowList).ArrayNum != iVar2) {
        local_678 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_678);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&local_588,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = local_588.Data.AllocatorInstance.Data;
        local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = local_588.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = local_588.Data.ArrayMax;
        local_588.Data.ArrayNum = 0;
        local_588.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_4b8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_598,&local_4b8);
      if (((local_648.AllocatorInstance.Data <= &local_598) &&
          (&local_598 <
           (TSharedPtr<FJsonValue,1> *)
           (local_648.AllocatorInstance.Data + (longlong)local_648.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_648.ArrayNum;
      if (local_648.ArrayNum == local_648.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_648.AllocatorInstance,&local_648.ArrayMax);
      }
      local_648.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_648.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_598.Object;
      *(TReferenceControllerBase<1> **)
       (local_648.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_598.SharedReferenceCount.ReferenceController;
      local_598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_598.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&local_398,L"TargetAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_398,&local_648);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_648.AllocatorInstance.Data,local_648.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_648.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_648.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (this->TargetDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_360 = 0xe;
    local_368 = L"TargetDenyList";
    local_158._12_4_ = uStack_35c;
    local_158.Size = 0xe;
    local_158.DataPtr = L"TargetDenyList";
    FJsonObject::RemoveField(param_1,&local_158);
  }
  else {
    pFVar13 = (this->TargetDenyList).AllocatorInstance.Data;
    local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_638.ArrayNum = 0;
    local_638.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((this->TargetDenyList).ArrayNum != iVar2) {
        local_677 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_677);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&local_568,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = local_568.Data.AllocatorInstance.Data;
        local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = local_568.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = local_568.Data.ArrayMax;
        local_568.Data.ArrayNum = 0;
        local_568.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_4b0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_578,&local_4b0);
      if (((local_638.AllocatorInstance.Data <= &local_578) &&
          (&local_578 <
           (TSharedPtr<FJsonValue,1> *)
           (local_638.AllocatorInstance.Data + (longlong)local_638.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_638.ArrayNum;
      if (local_638.ArrayNum == local_638.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_638.AllocatorInstance,&local_638.ArrayMax);
      }
      local_638.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_638.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_578.Object;
      *(TReferenceControllerBase<1> **)
       (local_638.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_578.SharedReferenceCount.ReferenceController;
      local_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_578.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_568.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&local_378,L"TargetDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_378,&local_638);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_638.AllocatorInstance.Data,local_638.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_638.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_638.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (this->TargetConfigurationAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_340 = 0x1c;
    local_348 = L"TargetConfigurationAllowList";
    local_148._12_4_ = uStack_33c;
    local_148.Size = 0x1c;
    local_148.DataPtr = L"TargetConfigurationAllowList";
    FJsonObject::RemoveField(param_1,&local_148);
  }
  else {
    pFVar13 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
    local_5d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5d8.ArrayNum = 0;
    local_5d8.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((this->TargetConfigurationAllowList).ArrayNum != iVar2) {
        local_676 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_676);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&local_548,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = local_548.Data.AllocatorInstance.Data;
        local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = local_548.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = local_548.Data.ArrayMax;
        local_548.Data.ArrayNum = 0;
        local_548.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_4a8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_558,&local_4a8);
      if (((local_5d8.AllocatorInstance.Data <= &local_558) &&
          (&local_558 <
           (TSharedPtr<FJsonValue,1> *)
           (local_5d8.AllocatorInstance.Data + (longlong)local_5d8.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_5d8.ArrayNum;
      if (local_5d8.ArrayNum == local_5d8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_5d8.AllocatorInstance,&local_5d8.ArrayMax);
      }
      local_5d8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_5d8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_558.Object;
      *(TReferenceControllerBase<1> **)
       (local_5d8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_558.SharedReferenceCount.ReferenceController;
      local_558.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_558.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&local_358,L"TargetConfigurationAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_358,&local_5d8);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_5d8.AllocatorInstance.Data,local_5d8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_5d8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_5d8.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (this->TargetConfigurationDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_320 = 0x1b;
    local_328 = L"TargetConfigurationDenyList";
    local_138._12_4_ = uStack_31c;
    local_138.Size = 0x1b;
    local_138.DataPtr = L"TargetConfigurationDenyList";
    FJsonObject::RemoveField(param_1,&local_138);
  }
  else {
    pFVar13 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
    local_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.ArrayNum = 0;
    local_608.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((this->TargetConfigurationDenyList).ArrayNum != iVar2) {
        local_675 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_675);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&local_528,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = local_528.Data.AllocatorInstance.Data;
        local_528.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = local_528.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = local_528.Data.ArrayMax;
        local_528.Data.ArrayNum = 0;
        local_528.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      local_480.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_538,&local_480);
      if (((local_608.AllocatorInstance.Data <= &local_538) &&
          (&local_538 <
           (TSharedPtr<FJsonValue,1> *)
           (local_608.AllocatorInstance.Data + (longlong)local_608.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_608.ArrayNum;
      if (local_608.ArrayNum == local_608.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_608.AllocatorInstance,&local_608.ArrayMax);
      }
      local_608.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_608.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_538.Object;
      *(TReferenceControllerBase<1> **)
       (local_608.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_538.SharedReferenceCount.ReferenceController;
      local_538.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_538.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&local_338,L"TargetConfigurationDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_338,&local_608);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_608.AllocatorInstance.Data,local_608.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_608.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_608.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->ProgramAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_300 = 0x10;
    local_308 = L"ProgramAllowList";
    local_128._12_4_ = uStack_2fc;
    local_128.Size = 0x10;
    local_128.DataPtr = L"ProgramAllowList";
    FJsonObject::RemoveField(param_1,&local_128);
  }
  else {
    pFVar14 = (this->ProgramAllowList).AllocatorInstance.Data;
    local_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_5f8.ArrayNum = 0;
    local_5f8.ArrayMax = 0;
    while( true ) {
      if ((this->ProgramAllowList).ArrayNum != iVar2) {
        local_674 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_674);
      }
      if (pFVar14 == pFVar13) break;
      pTVar11 = ::operator_new(0x20);
      pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar11 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar11);
        pTVar11->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar11->Value,(FString *)pFVar14);
        *(EJson *)&pTVar11->_padding_ = String;
        pTVar9 = pTVar11;
      }
      local_4a0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_518,&local_4a0);
      if (((local_5f8.AllocatorInstance.Data <= &local_518) &&
          (&local_518 <
           (TSharedPtr<FJsonValue,1> *)
           (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_5f8.ArrayNum;
      if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
      }
      local_5f8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_5f8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_518.Object;
      *(TReferenceControllerBase<1> **)
       (local_5f8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_518.SharedReferenceCount.ReferenceController;
      local_518.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_518.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_318,L"ProgramAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_318,&local_5f8);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_5f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_5f8.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->ProgramDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_2e0 = 0xf;
    local_2e8 = L"ProgramDenyList";
    local_118._12_4_ = uStack_2dc;
    local_118.Size = 0xf;
    local_118.DataPtr = L"ProgramDenyList";
    FJsonObject::RemoveField(param_1,&local_118);
  }
  else {
    pFVar14 = (this->ProgramDenyList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e8.ArrayNum = 0;
    local_5e8.ArrayMax = 0;
    while( true ) {
      if ((this->ProgramDenyList).ArrayNum != iVar2) {
        local_673 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_673);
      }
      if (pFVar14 == pFVar13) break;
      pTVar11 = ::operator_new(0x20);
      pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar11 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar11);
        pTVar11->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar11->Value,(FString *)pFVar14);
        *(EJson *)&pTVar11->_padding_ = String;
        pTVar9 = pTVar11;
      }
      local_498.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_508,&local_498);
      if (((local_5e8.AllocatorInstance.Data <= &local_508) &&
          (&local_508 <
           (TSharedPtr<FJsonValue,1> *)
           (local_5e8.AllocatorInstance.Data + (longlong)local_5e8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_5e8.ArrayNum;
      if (local_5e8.ArrayNum == local_5e8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_5e8.AllocatorInstance,&local_5e8.ArrayMax);
      }
      local_5e8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_5e8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_508.Object;
      *(TReferenceControllerBase<1> **)
       (local_5e8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_508.SharedReferenceCount.ReferenceController;
      local_508.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_508.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_2f8,L"ProgramDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2f8,&local_5e8);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_5e8.AllocatorInstance.Data,local_5e8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_5e8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_5e8.AllocatorInstance.Data);
    }
  }
  pTVar9 = (TJsonValueString<wchar_t> *)0x0;
  if ((this->GameTargetAllowList).ArrayNum < 1) {
    uStack_2c0 = 0x13;
    local_2c8 = L"GameTargetAllowList";
    local_108._12_4_ = uStack_2bc;
    local_108.Size = 0x13;
    local_108.DataPtr = L"GameTargetAllowList";
    FJsonObject::RemoveField(param_1,&local_108);
  }
  else {
    iVar2 = (this->ProgramAllowList).ArrayNum;
    pFVar14 = (this->ProgramAllowList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_618.ArrayNum = 0;
    local_618.ArrayMax = 0;
    while( true ) {
      if ((this->ProgramAllowList).ArrayNum != iVar2) {
        local_672 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_672);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      local_490.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_4f8,&local_490);
      if (((local_618.AllocatorInstance.Data <= &local_4f8) &&
          (&local_4f8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_618.AllocatorInstance.Data + (longlong)local_618.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_618.ArrayNum;
      if (local_618.ArrayNum == local_618.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_618.AllocatorInstance,&local_618.ArrayMax);
      }
      local_618.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_618.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_4f8.Object;
      *(TReferenceControllerBase<1> **)
       (local_618.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_4f8.SharedReferenceCount.ReferenceController;
      local_4f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_4f8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_2d8,L"GameTargetAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2d8,&local_618);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_618.AllocatorInstance.Data,local_618.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_618.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
  }
  if ((this->GameTargetDenyList).ArrayNum < 1) {
    uStack_2a0 = 0x12;
    local_2a8 = L"GameTargetDenyList";
    local_f8._12_4_ = uStack_29c;
    local_f8.Size = 0x12;
    local_f8.DataPtr = L"GameTargetDenyList";
    FJsonObject::RemoveField(param_1,&local_f8);
  }
  else {
    iVar2 = (this->ProgramDenyList).ArrayNum;
    pFVar14 = (this->ProgramDenyList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5c8.ArrayNum = 0;
    local_5c8.ArrayMax = 0;
    while( true ) {
      if ((this->ProgramDenyList).ArrayNum != iVar2) {
        local_671 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_671);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      local_478.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_4e8,&local_478);
      if (((local_5c8.AllocatorInstance.Data <= &local_4e8) &&
          (&local_4e8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_5c8.ArrayNum;
      if (local_5c8.ArrayNum == local_5c8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_5c8.AllocatorInstance,&local_5c8.ArrayMax);
      }
      local_5c8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_5c8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_4e8.Object;
      *(TReferenceControllerBase<1> **)
       (local_5c8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_4e8.SharedReferenceCount.ReferenceController;
      local_4e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_4e8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_2b8,L"GameTargetDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2b8,&local_5c8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_5c8.AllocatorInstance.Data,local_5c8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_5c8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_5c8.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->AdditionalDependencies).ArrayNum;
  if (iVar2 < 1) {
    uStack_280 = 0x16;
    local_288 = L"AdditionalDependencies";
    local_e8._12_4_ = uStack_27c;
    local_e8.Size = 0x16;
    local_e8.DataPtr = L"AdditionalDependencies";
    FJsonObject::RemoveField(param_1,&local_e8);
  }
  else {
    pFVar14 = (this->AdditionalDependencies).AllocatorInstance.Data;
    local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    local_628.ArrayNum = 0;
    local_628.ArrayMax = 0;
    while( true ) {
      if ((this->AdditionalDependencies).ArrayNum != iVar2) {
        local_670[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_670);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      local_488.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_4d8,&local_488);
      if (((local_628.AllocatorInstance.Data <= &local_4d8) &&
          (&local_4d8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_628.ArrayNum;
      if (local_628.ArrayNum == local_628.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      local_628.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_628.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_4d8.Object;
      *(TReferenceControllerBase<1> **)
       (local_628.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_4d8.SharedReferenceCount.ReferenceController;
      local_4d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_4d8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_298,L"AdditionalDependencies");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_298,&local_628);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_628.AllocatorInstance.Data,local_628.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_628.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_628.AllocatorInstance.Data);
    }
  }
  bVar5 = this->bHasExplicitPlatforms;
  if (bVar5 == false) {
    uStack_260 = 0x14;
    local_268 = L"HasExplicitPlatforms";
    local_d8._12_4_ = uStack_25c;
    local_d8.Size = 0x14;
    local_d8.DataPtr = L"HasExplicitPlatforms";
    FJsonObject::RemoveField(param_1,&local_d8);
  }
  else {
    ::FString::FString(&local_278,L"HasExplicitPlatforms");
    FJsonObject::SetBoolField(param_1,&local_278,bVar5);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  uStack_250 = 0x12;
  local_258 = L"WhitelistPlatforms";
  local_c8._12_4_ = uStack_24c;
  local_c8.Size = 0x12;
  local_c8.DataPtr = L"WhitelistPlatforms";
  FJsonObject::RemoveField(param_1,&local_c8);
  uStack_240 = 0x12;
  local_248 = L"BlacklistPlatforms";
  local_b8._12_4_ = uStack_23c;
  local_b8.Size = 0x12;
  local_b8.DataPtr = L"BlacklistPlatforms";
  FJsonObject::RemoveField(param_1,&local_b8);
  uStack_230 = 0x10;
  local_238 = L"WhitelistTargets";
  local_a8._12_4_ = uStack_22c;
  local_a8.Size = 0x10;
  local_a8.DataPtr = L"WhitelistTargets";
  FJsonObject::RemoveField(param_1,&local_a8);
  uStack_220 = 0x10;
  local_228 = L"BlacklistTargets";
  local_98._12_4_ = uStack_21c;
  local_98.Size = 0x10;
  local_98.DataPtr = L"BlacklistTargets";
  FJsonObject::RemoveField(param_1,&local_98);
  uStack_210 = 0x1d;
  local_218 = L"WhitelistTargetConfigurations";
  local_88._12_4_ = uStack_20c;
  local_88.Size = 0x1d;
  local_88.DataPtr = L"WhitelistTargetConfigurations";
  FJsonObject::RemoveField(param_1,&local_88);
  uStack_200 = 0x1d;
  local_208 = L"BlacklistTargetConfigurations";
  local_78._12_4_ = uStack_1fc;
  local_78.Size = 0x1d;
  local_78.DataPtr = L"BlacklistTargetConfigurations";
  FJsonObject::RemoveField(param_1,&local_78);
  uStack_1f0 = 0x11;
  local_1f8 = L"WhitelistPrograms";
  local_68._12_4_ = uStack_1ec;
  local_68.Size = 0x11;
  local_68.DataPtr = L"WhitelistPrograms";
  FJsonObject::RemoveField(param_1,&local_68);
  uStack_1e0 = 0x11;
  local_1e8 = L"BlacklistPrograms";
  local_58._12_4_ = uStack_1dc;
  local_58.Size = 0x11;
  local_58.DataPtr = L"BlacklistPrograms";
  FJsonObject::RemoveField(param_1,&local_58);
  return;
}

// Write @ 141e45110

void __thiscall
FModuleDescriptor::Write
          (FModuleDescriptor *this,TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1)

{
  TSharedRef<FJsonObject,1> local_18;
  
  MakeShared<FJsonObject,1>(&local_18);
  UpdateJson(this,local_18.Object);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
            ((TSharedPtr<FJsonObject,1> *)&local_18,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// WriteArray @ 141e46a20

void __cdecl
FModuleDescriptor::WriteArray
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,wchar_t *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FSharedReferencer<1> FVar2;
  FModuleDescriptor *pFVar3;
  FModuleDescriptor *this;
  wchar_t *local_res10;
  undefined1 local_res18 [16];
  TSharedRef<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38;
  
  if (0 < param_3->ArrayNum) {
    local_res10 = param_2;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
              (param_1,&local_res10);
    iVar1 = param_3->ArrayNum;
    this = (FModuleDescriptor *)(param_3->AllocatorInstance).Data;
    pFVar3 = this + iVar1;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this == pFVar3) break;
      MakeShared<FJsonObject,1>(&local_48);
      UpdateJson(this,local_48.Object);
      FVar2.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_38.Object = local_48.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_38,param_1,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      this = this + 1;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  return;
}

