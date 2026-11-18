// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 40

// StaticClass @ 149263d90

UClass * __cdecl UNiagaraEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitter",
               &Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton,
               StaticRegisterNativesUNiagaraEmitter,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEmitter>,InternalVTableHelperCtorCaller<UNiagaraEmitter>,
               local_res8,UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton;
}

// UNiagaraEmitter @ 1492788f0

UNiagaraEmitter * __thiscall
UNiagaraEmitter::UNiagaraEmitter(UNiagaraEmitter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraEmitterBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  (this->StatID_GT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_GT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ExposedVersion).A = 0;
  (this->ExposedVersion).B = 0;
  (this->ExposedVersion).C = 0;
  (this->ExposedVersion).D = 0;
  this->bVersioningEnabled = false;
  (this->VersionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionData).ArrayNum = 0;
  (this->VersionData).ArrayMax = 0;
  this->bFullyLoaded = false;
  return this;
}

// UNiagaraEmitter @ 149278960

UNiagaraEmitter * __thiscall
UNiagaraEmitter::UNiagaraEmitter(UNiagaraEmitter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraEmitterBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  (this->StatID_GT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_GT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ExposedVersion).A = 0;
  (this->ExposedVersion).B = 0;
  (this->ExposedVersion).C = 0;
  (this->ExposedVersion).D = 0;
  this->bVersioningEnabled = false;
  (this->VersionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionData).ArrayNum = 0;
  (this->VersionData).ArrayMax = 0;
  this->bFullyLoaded = false;
  return this;
}

// ~UNiagaraEmitter @ 14927ac30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::~UNiagaraEmitter(UNiagaraEmitter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraEmitterBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  DestructItems<FVersionedNiagaraEmitterData,int>
            ((FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data,
             (this->VersionData).ArrayNum);
  pFVar1 = (this->VersionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddEventHandler @ 149283fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::AddEventHandler
          (UNiagaraEmitter *this,FNiagaraEventScriptProperties *param_1,FGuid *param_2)

{
  int *piVar1;
  TArray<FNiagaraEventScriptProperties,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraEventScriptProperties *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  
  pFVar7 = GetEmitterData(this,param_2);
  pTVar2 = &pFVar7->EventHandlerScriptProps;
  pFVar3 = (FNiagaraEventScriptProperties *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar7->EventHandlerScriptProps).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar7->EventHandlerScriptProps).ArrayNum;
  piVar1 = &(pFVar7->EventHandlerScriptProps).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar7->EventHandlerScriptProps).ArrayNum = iVar6 + 1;
  FNiagaraEventScriptProperties::FNiagaraEventScriptProperties
            ((FNiagaraEventScriptProperties *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x58),param_1);
  DestructItems<FNiagaraEventGeneratorProperties,int>
            ((FNiagaraEventGeneratorProperties *)param_1->_padding_,(int)param_1->_padding_);
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  return;
}

// AddRenderer @ 149284690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::AddRenderer
          (UNiagaraEmitter *this,UNiagaraRendererProperties *param_1,FGuid *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UNiagaraSystem *pUVar11;
  FVersionedNiagaraEmitterData *pFVar12;
  UNiagaraRendererProperties *local_a8;
  FNiagaraSystemUpdateContext local_a0;
  
  local_a0.bOnlyActive = false;
  local_a0.bDestroySystemSim = true;
  local_a0.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToReset.ArrayNum = 0;
  local_a0.ComponentsToReset.ArrayMax = 0;
  local_a0.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToReInit.ArrayNum = 0;
  local_a0.ComponentsToReInit.ArrayMax = 0;
  local_a0.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_a0.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_a0.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToDestroyInstance.ArrayNum = 0;
  local_a0.ComponentsToDestroyInstance.ArrayMax = 0;
  local_a0.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.SystemSimsToDestroy.ArrayNum = 0;
  local_a0.SystemSimsToDestroy.ArrayMax = 0;
  local_a0.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.SystemSimsToRecache.ArrayNum = 0;
  local_a0.SystemSimsToRecache.ArrayMax = 0;
  local_a0.PreWork._0_8_ = 0;
  local_a0.PreWork._8_8_ = 0;
  local_a0.PreWork._16_4_ = 0;
  local_a0.PostWork._0_8_ = 0;
  local_a0.PostWork._8_8_ = 0;
  local_a0.PostWork._16_4_ = 0;
  local_a0.bDestroyOnAdd = true;
  pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar11 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  if (pUVar11 != (UNiagaraSystem *)0x0) {
    FNiagaraSystemUpdateContext::Add(&local_a0,pUVar11,true);
  }
  uVar5 = param_2->B;
  uVar6 = param_2->C;
  uVar7 = param_2->D;
  (param_1->OuterEmitterVersion).A = param_2->A;
  (param_1->OuterEmitterVersion).B = uVar5;
  (param_1->OuterEmitterVersion).C = uVar6;
  (param_1->OuterEmitterVersion).D = uVar7;
  pFVar12 = GetEmitterData(this,param_2);
  pTVar2 = &pFVar12->RendererProperties;
  local_a8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(pFVar12->RendererProperties).ArrayMax * 8)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (pFVar12->RendererProperties).ArrayNum;
  piVar1 = &(pFVar12->RendererProperties).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar12->RendererProperties).ArrayNum = iVar9 + 1;
  *(UNiagaraRendererProperties **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) =
       local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UNiagaraRendererProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_a0);
  return;
}

// AddSimulationStage @ 149284aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::AddSimulationStage
          (UNiagaraEmitter *this,UNiagaraSimulationStageBase *param_1,FGuid *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  UNiagaraSimulationStageBase *local_18 [2];
  
  pFVar7 = GetEmitterData(this,param_2);
  pTVar2 = &pFVar7->SimulationStages;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraSimulationStageBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar7->SimulationStages).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar7->SimulationStages).ArrayNum;
  piVar1 = &(pFVar7->SimulationStages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar7->SimulationStages).ArrayNum = iVar6 + 1;
  *(UNiagaraSimulationStageBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UNiagaraSimulationStageBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// BeginDestroy @ 149284e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraEmitter::BeginDestroy(UNiagaraEmitter *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UNiagaraEmitter **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CanObtainEmitterAttribute @ 1492883f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraEmitter::CanObtainEmitterAttribute
          (UNiagaraEmitter *this,FNiagaraVariableBase *param_1,FNiagaraTypeDefinition *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  
  if (((uint)this->_padding_ >> 0xc & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyFlags(RF_NeedPostLoad)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                       ,0x99d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UNiagaraSystem *)0x0) {
    if (((uint)this_00->_padding_ >> 0xc & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Sys->HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                         ,0x9a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UNiagaraSystem::CanObtainEmitterAttribute(this_00,param_1,param_2);
    return bVar2;
  }
  return false;
}

// CanObtainParticleAttribute @ 1492884d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraEmitter::CanObtainParticleAttribute
          (UNiagaraEmitter *this,FNiagaraVariableBase *param_1,FGuid *param_2,
          FNiagaraTypeDefinition *param_3)

{
  FName *pFVar1;
  UNiagaraScript *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FVersionedNiagaraEmitterData *pFVar8;
  FNiagaraTypeDefinition *pFVar9;
  FName *pFVar10;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  if ((((uint)this->_padding_ >> 0xc & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                         ,0x985,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar8 = GetEmitterData(this,param_2);
  if ((pFVar8 == (FVersionedNiagaraEmitterData *)0x0) ||
     (pUVar2 = (pFVar8->SpawnScriptProps).Script.field0_0x0.DebugPtr,
     pUVar2 == (UNiagaraScript *)0x0)) {
    bVar5 = false;
  }
  else {
    if ((((uint)pUVar2->_padding_ >> 0xc & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SpawnScriptProps.Script->HasAnyFlags(RF_NeedPostLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                           ,0x98c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar2 = (pFVar8->SpawnScriptProps).Script.field0_0x0.DebugPtr;
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    FVar3 = param_1->Name;
    local_20.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_20,pFVar9);
    pFVar10 = (FName *)(pUVar2->CachedScriptVM).Attributes.AllocatorInstance.Data;
    pFVar1 = (FName *)((longlong)pFVar10 +
                      (longlong)(pUVar2->CachedScriptVM).Attributes.ArrayNum * 0xc);
    for (; pFVar10 != pFVar1; pFVar10 = (FName *)&pFVar10[1].Number) {
      if ((*pFVar10 == FVar3) && (pFVar10[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex))
      {
        bVar5 = pFVar10 != (FName *)0x0;
        if (pFVar10 != (FName *)0x0) {
          return bVar5;
        }
        goto LAB_1492885de;
      }
    }
    bVar5 = false;
LAB_1492885de:
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar9->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar9->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      FNiagaraTypeDefinition::operator=(param_3,&FNiagaraTypeDefinition::Vec3Def);
      local_1c = param_1->Name;
      pUVar2 = (pFVar8->SpawnScriptProps).Script.field0_0x0.DebugPtr;
      uVar7 = FNiagaraTypeDefinitionHandle::Register(local_14,param_3);
      pFVar10 = (FName *)(pUVar2->CachedScriptVM).Attributes.AllocatorInstance.Data;
      pFVar1 = (FName *)((longlong)pFVar10 +
                        (longlong)(pUVar2->CachedScriptVM).Attributes.ArrayNum * 0xc);
      for (; pFVar10 != pFVar1; pFVar10 = (FName *)&pFVar10[1].Number) {
        if ((*pFVar10 == local_1c) && (pFVar10[1].ComparisonIndex.Value == uVar7))
        goto LAB_149288675;
      }
      pFVar10 = (FName *)0x0;
LAB_149288675:
      bVar5 = pFVar10 != (FName *)0x0;
    }
  }
  return bVar5;
}

// GenerateStatID @ 14929f560

void __thiscall UNiagaraEmitter::GenerateStatID(UNiagaraEmitter *this)

{
  FString *pFVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  FName local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  FName local_res20;
  TStatIdData *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FName *local_50;
  undefined4 *local_48;
  FName *local_40;
  undefined1 *local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar5 = this->_padding_ == 0;
  if (bVar5) {
    pFVar1 = ::FString::FString(&local_60,L"");
  }
  else {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    pFVar1 = ::FName::ToString(&local_res8,&local_80);
  }
  local_70.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_70.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar5) {
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar5) && ((FName)local_80.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatCF(&local_80,L"/",(FString *)&this->_padding_);
  iVar4 = local_80.Data.ArrayNum + -1;
  if (local_80.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_70,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar4);
  if ((FName)local_80.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_60,&local_70,L"[GT]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar3.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName((FName *)&local_80,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_50 = &local_res20;
  local_48 = local_res18;
  local_40 = &local_res8;
  local_38 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraEmitters>'::__l2::<lambda_1>::
  operator()(&local_50);
  (this->StatID_GT).StatIdPtr = local_88;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_60,&local_70,L"[GT_CNC]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar3.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName((FName *)&local_80,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_50 = &local_res20;
  local_48 = local_res18;
  local_40 = &local_res8;
  local_38 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraEmitters>'::__l2::<lambda_1>::
  operator()(&local_50);
  (this->StatID_GT_CNC).StatIdPtr = local_88;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_60,&local_70,L"[RT]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar3.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName((FName *)&local_80,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_50 = &local_res20;
  local_48 = local_res18;
  local_40 = &local_res8;
  local_38 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraEmitters>'::__l2::<lambda_1>::
  operator()(&local_50);
  (this->StatID_RT).StatIdPtr = local_88;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_60,&local_70,L"[RT_CNC]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar3.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName((FName *)&local_80,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_50 = &local_res20;
  local_48 = local_res18;
  local_40 = &local_res8;
  local_38 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraEmitters>'::__l2::<lambda_1>::
  operator()(&local_50);
  (this->StatID_RT_CNC).StatIdPtr = local_88;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAllAvailableVersions @ 1492a06f0

TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraEmitter::GetAllAvailableVersions
          (UNiagaraEmitter *this,
          TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (int)this->_padding_;
  pFVar9 = (FScriptContainerElement *)this->_padding_;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x3c8;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x1c))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x41c,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    uVar4 = *(undefined8 *)(pFVar9 + 8);
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x1c;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar9;
    *(undefined8 *)(pFVar8 + 8) = uVar4;
    *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
    pFVar2 = pFVar9 + 0x18;
    pFVar9 = pFVar9 + 0x3c8;
    *(undefined4 *)(pFVar8 + 0x18) = *(undefined4 *)pFVar2;
  }
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 1492a0820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::GetAssetRegistryTags
          (UNiagaraEmitter *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UNiagaraEmitter *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UNiagaraEmitter **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UNiagaraEmitter **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UNiagaraEmitter **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1492a0830

void __thiscall
UNiagaraEmitter::GetAssetRegistryTags(UNiagaraEmitter *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetEmitterData @ 1492a1d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
UNiagaraEmitter::GetEmitterData(UNiagaraEmitter *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  UNiagaraEmitter *local_res20;
  
  iVar1 = (this->VersionData).ArrayNum;
  if (iVar1 == 0) {
    return (FVersionedNiagaraEmitterData *)0x0;
  }
  if (this->bVersioningEnabled != false) {
    pFVar4 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
    pFVar5 = pFVar4 + iVar1;
    if (((param_1->C == 0 && param_1->D == 0) && param_1->B == 0) && param_1->A == 0) {
      while( true ) {
        if ((this->VersionData).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar5) {
          local_res20 = this;
          `UNiagaraEmitter::GetEmitterData'::__l11::<lambda_1>::operator()(&local_res20);
          return (FVersionedNiagaraEmitterData *)0x0;
        }
        if ((((pFVar4->Version).VersionGuid.D == (this->ExposedVersion).D &&
             (pFVar4->Version).VersionGuid.C == (this->ExposedVersion).C) &&
            (pFVar4->Version).VersionGuid.B == (this->ExposedVersion).B) &&
            (pFVar4->Version).VersionGuid.A == (this->ExposedVersion).A) break;
        pFVar4 = pFVar4 + 1;
      }
    }
    else {
      while( true ) {
        if ((this->VersionData).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar4 == pFVar5) {
          return (FVersionedNiagaraEmitterData *)0x0;
        }
        if ((((pFVar4->Version).VersionGuid.C == param_1->C &&
             (pFVar4->Version).VersionGuid.D == param_1->D) &&
            (pFVar4->Version).VersionGuid.B == param_1->B) &&
            (pFVar4->Version).VersionGuid.A == param_1->A) break;
        pFVar4 = pFVar4 + 1;
      }
    }
    return pFVar4;
  }
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVersionedNiagaraEmitterData *)(*pcVar2)();
    return pFVar4;
  }
  return (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
}

// GetEmitterData @ 1492a1ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
UNiagaraEmitter::GetEmitterData(UNiagaraEmitter *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  undefined1 auStackX_8 [16];
  undefined1 auStackX_18 [8];
  UNiagaraEmitter *pUStackX_20;
  
  iVar1 = (this->VersionData).ArrayNum;
  if (iVar1 == 0) {
    return (FVersionedNiagaraEmitterData *)0x0;
  }
  if (this->bVersioningEnabled != false) {
    pFVar4 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
    pFVar5 = pFVar4 + iVar1;
    if (((param_1->C == 0 && param_1->D == 0) && param_1->B == 0) && param_1->A == 0) {
      while( true ) {
        if ((this->VersionData).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (pFVar4 == pFVar5) {
          pUStackX_20 = this;
          `UNiagaraEmitter::GetEmitterData'::__l11::<lambda_1>::operator()(&pUStackX_20);
          return (FVersionedNiagaraEmitterData *)0x0;
        }
        if ((((pFVar4->Version).VersionGuid.D == (this->ExposedVersion).D &&
             (pFVar4->Version).VersionGuid.C == (this->ExposedVersion).C) &&
            (pFVar4->Version).VersionGuid.B == (this->ExposedVersion).B) &&
            (pFVar4->Version).VersionGuid.A == (this->ExposedVersion).A) break;
        pFVar4 = pFVar4 + 1;
      }
    }
    else {
      while( true ) {
        if ((this->VersionData).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_18);
        }
        if (pFVar4 == pFVar5) {
          return (FVersionedNiagaraEmitterData *)0x0;
        }
        if ((((pFVar4->Version).VersionGuid.C == param_1->C &&
             (pFVar4->Version).VersionGuid.D == param_1->D) &&
            (pFVar4->Version).VersionGuid.B == param_1->B) &&
            (pFVar4->Version).VersionGuid.A == param_1->A) break;
        pFVar4 = pFVar4 + 1;
      }
    }
    return pFVar4;
  }
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVersionedNiagaraEmitterData *)(*pcVar2)();
    return pFVar4;
  }
  return (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
}

// GetLatestEmitterData @ 1492a47b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
UNiagaraEmitter::GetLatestEmitterData(UNiagaraEmitter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  UNiagaraEmitter *local_res8;
  
  iVar1 = (this->VersionData).ArrayNum;
  if (iVar1 == 0) {
    return (FVersionedNiagaraEmitterData *)0x0;
  }
  if (this->bVersioningEnabled == false) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVersionedNiagaraEmitterData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  }
  pFVar4 = GetEmitterData(this,&this->ExposedVersion);
  if (pFVar4 == (FVersionedNiagaraEmitterData *)0x0) {
    local_res8 = this;
    `UNiagaraEmitter::GetLatestEmitterData'::__l2::<lambda_1>::operator()(&local_res8);
  }
  return pFVar4;
}

// GetLatestEmitterData @ 1492a4850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
UNiagaraEmitter::GetLatestEmitterData(UNiagaraEmitter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  UNiagaraEmitter *local_res8;
  
  iVar1 = (this->VersionData).ArrayNum;
  if (iVar1 == 0) {
    return (FVersionedNiagaraEmitterData *)0x0;
  }
  if (this->bVersioningEnabled == false) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVersionedNiagaraEmitterData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  }
  pFVar4 = GetEmitterData(this,&this->ExposedVersion);
  if (pFVar4 == (FVersionedNiagaraEmitterData *)0x0) {
    local_res8 = this;
    `UNiagaraEmitter::GetLatestEmitterData'::__l2::<lambda_1>::operator()(&local_res8);
  }
  return pFVar4;
}

// GetPrivateStaticClass @ 1492a6320

UClass * __cdecl UNiagaraEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitter",
               &Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton,
               StaticRegisterNativesUNiagaraEmitter,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEmitter>,InternalVTableHelperCtorCaller<UNiagaraEmitter>,
               local_res8,UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton;
}

// GetResolvedDIBinding @ 1492a69d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraVariableBase * __thiscall
UNiagaraEmitter::GetResolvedDIBinding
          (UNiagaraEmitter *this,FNiagaraVariableBase *__return_storage_ptr__,
          FNiagaraVariableBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  FNiagaraVariableBase *pFVar5;
  UNiagaraEmitter *local_res8;
  
  iVar1 = (this->VersionData).ArrayNum;
  if (iVar1 == 0) {
    pFVar4 = (FVersionedNiagaraEmitterData *)0x0;
  }
  else if (this->bVersioningEnabled == false) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNiagaraVariableBase *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar4 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  }
  else {
    pFVar4 = GetEmitterData(this,&this->ExposedVersion);
    if (pFVar4 == (FVersionedNiagaraEmitterData *)0x0) {
      local_res8 = this;
      `UNiagaraEmitter::GetLatestEmitterData'::__l2::<lambda_1>::operator()(&local_res8);
    }
  }
  pFVar5 = TMapBase<FNiagaraVariableBase,FNiagaraVariableBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableBase,0>_>
           ::Find((TMapBase<FNiagaraVariableBase,FNiagaraVariableBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableBase,0>_>
                   *)&pFVar4->ResolvedDIBindings,param_1);
  if (pFVar5 != (FNiagaraVariableBase *)0x0) {
    param_1 = pFVar5;
  }
  iVar1 = (param_1->TypeDefHandle).RegisteredTypeIndex;
  __return_storage_ptr__->Name = param_1->Name;
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex = iVar1;
  return __return_storage_ptr__;
}

// GetStatID @ 1492a7bd0

TStatId __thiscall UNiagaraEmitter::GetStatID(UNiagaraEmitter *this,bool param_1,bool param_2)

{
  TAtomic<FMinimalName> TVar1;
  undefined7 in_register_00000011;
  char in_R9B;
  
  TVar1 = ((this->StatID_GT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    GenerateStatID(this);
  }
  if (param_2) {
    if (in_R9B == '\0') {
      TVar1 = (TAtomic<FMinimalName>)(this->StatID_GT).StatIdPtr;
    }
    else {
      TVar1 = (TAtomic<FMinimalName>)(this->StatID_GT_CNC).StatIdPtr;
    }
  }
  else if (in_R9B == '\0') {
    TVar1 = (TAtomic<FMinimalName>)(this->StatID_RT).StatIdPtr;
  }
  else {
    TVar1 = (TAtomic<FMinimalName>)(this->StatID_RT_CNC).StatIdPtr;
  }
  ((TStatIdData *)CONCAT71(in_register_00000011,param_1))->Name = TVar1;
  return (TStatId)(TStatIdData *)CONCAT71(in_register_00000011,param_1);
}

// IsEditorOnly @ 1492ad480

bool __thiscall UNiagaraEmitter::IsEditorOnly(UNiagaraEmitter *this)

{
  return false;
}

// IsEnabledOnPlatform @ 1492ad490

bool __thiscall UNiagaraEmitter::IsEnabledOnPlatform(UNiagaraEmitter *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->VersionData).ArrayNum;
  pFVar3 = (this->VersionData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x3c8;
  while( true ) {
    if ((this->VersionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = FNiagaraPlatformSet::IsEnabledForPlatform
                      ((FNiagaraPlatformSet *)(pFVar3 + 0x90),param_1);
    if (bVar2) {
      return true;
    }
    pFVar3 = pFVar3 + 0x3c8;
  }
  return false;
}

// MoveRenderer @ 1492addf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::MoveRenderer
          (UNiagaraEmitter *this,UNiagaraRendererProperties *param_1,int param_2,FGuid *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  int iVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  UClass *pUVar5;
  UNiagaraSystem *pUVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  UNiagaraRendererProperties *local_b8;
  FNiagaraSystemUpdateContext local_b0;
  
  pFVar4 = GetEmitterData(this,param_3);
  this_00 = &pFVar4->RendererProperties;
  pFVar7 = (this_00->AllocatorInstance).Data;
  iVar3 = (pFVar4->RendererProperties).ArrayNum;
  pFVar9 = pFVar7;
  while( true ) {
    if (pFVar9 == pFVar7 + (longlong)iVar3 * 8) {
      return;
    }
    if (*(UNiagaraRendererProperties **)pFVar9 == (UNiagaraRendererProperties *)0x0) {
      bVar10 = param_1 == (UNiagaraRendererProperties *)0x0;
    }
    else {
      bVar10 = *(UNiagaraRendererProperties **)pFVar9 == param_1;
    }
    if (bVar10) break;
    pFVar9 = pFVar9 + 8;
  }
  iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar7 >> 3);
  if (iVar8 == -1) {
    return;
  }
  if (iVar8 == param_2) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  if (iVar3 <= param_2) {
    return;
  }
  local_b0.bOnlyActive = false;
  local_b0.bDestroySystemSim = true;
  local_b0.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToReset.ArrayNum = 0;
  local_b0.ComponentsToReset.ArrayMax = 0;
  local_b0.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToReInit.ArrayNum = 0;
  local_b0.ComponentsToReInit.ArrayMax = 0;
  local_b0.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_b0.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_b0.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToDestroyInstance.ArrayNum = 0;
  local_b0.ComponentsToDestroyInstance.ArrayMax = 0;
  local_b0.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.SystemSimsToDestroy.ArrayNum = 0;
  local_b0.SystemSimsToDestroy.ArrayMax = 0;
  local_b0.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.SystemSimsToRecache.ArrayNum = 0;
  local_b0.SystemSimsToRecache.ArrayMax = 0;
  local_b0.PreWork._0_8_ = 0;
  local_b0.PreWork._8_8_ = 0;
  local_b0.PreWork._16_4_ = 0;
  local_b0.PostWork._0_8_ = 0;
  local_b0.PostWork._8_8_ = 0;
  local_b0.PostWork._16_4_ = 0;
  local_b0.bDestroyOnAdd = true;
  pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar6 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if (pUVar6 != (UNiagaraSystem *)0x0) {
    FNiagaraSystemUpdateContext::Add(&local_b0,pUVar6,true);
  }
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_>::RemoveAt
            (this_00,iVar8,Default);
  local_b8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraRendererProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (this_00->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar7 + (longlong)(pFVar4->RendererProperties).ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (pFVar4->RendererProperties).ArrayNum;
  piVar1 = &(pFVar4->RendererProperties).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this_00->AllocatorInstance,piVar1);
  }
  pFVar7 = (this_00->AllocatorInstance).Data;
  (pFVar4->RendererProperties).ArrayNum = iVar3 + 1;
  pFVar7 = pFVar7 + (longlong)param_2 * 8;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar3 - param_2) << 3);
  *(UNiagaraRendererProperties **)((this_00->AllocatorInstance).Data + (longlong)param_2 * 8) =
       local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b8 != (UNiagaraRendererProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_b0);
  return;
}

// MoveSimulationStageToIndex @ 1492ae030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::MoveSimulationStageToIndex
          (UNiagaraEmitter *this,UNiagaraSimulationStageBase *param_1,int param_2,FGuid *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  int iVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  bool bVar8;
  UNiagaraSimulationStageBase *local_28;
  TObjectPtr<UNiagaraSimulationStageBase>_u_0 local_20;
  
  pFVar4 = GetEmitterData(this,param_3);
  this_00 = &pFVar4->SimulationStages;
  pFVar5 = (this_00->AllocatorInstance).Data;
  pFVar6 = pFVar5;
  do {
    if (pFVar6 == pFVar5 + (longlong)(pFVar4->SimulationStages).ArrayNum * 8) {
      iVar3 = -1;
LAB_1492ae08e:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                         ,0xcb0,
                         L"Simulation stage could not be moved because it is not owned by this emitter."
                        );
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_1492ae0b4:
      if (param_2 != iVar3) {
        iVar7 = param_2 + -1;
        if (param_2 < iVar3) {
          iVar7 = param_2;
        }
        local_20.DebugPtr = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UNiagaraSimulationStageBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_>::Remove
                  (this_00,(TObjectPtr<UNiagaraSimulationStageBase> *)&local_20.ObjectPtr);
        local_28 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UNiagaraSimulationStageBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar5 + (longlong)(pFVar4->SimulationStages).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar3 = (pFVar4->SimulationStages).ArrayNum;
        piVar1 = &(pFVar4->SimulationStages).ArrayMax;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&this_00->AllocatorInstance,piVar1);
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        (pFVar4->SimulationStages).ArrayNum = iVar3 + 1;
        pFVar5 = pFVar5 + (longlong)iVar7 * 8;
        memmove(pFVar5 + 8,pFVar5,(longlong)(iVar3 - iVar7) << 3);
        *(UNiagaraSimulationStageBase **)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28 != (UNiagaraSimulationStageBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28);
        }
      }
      return;
    }
    if (*(UNiagaraSimulationStageBase **)pFVar6 == (UNiagaraSimulationStageBase *)0x0) {
      bVar8 = param_1 == (UNiagaraSimulationStageBase *)0x0;
    }
    else {
      bVar8 = *(UNiagaraSimulationStageBase **)pFVar6 == param_1;
    }
    if (bVar8) {
      iVar3 = (int)((longlong)pFVar6 - (longlong)pFVar5 >> 3);
      if (iVar3 == -1) goto LAB_1492ae08e;
      goto LAB_1492ae0b4;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// NeedsLoadForTargetPlatform @ 1492ae260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNiagaraEmitter::NeedsLoadForTargetPlatform(UNiagaraEmitter *this,ITargetPlatform *param_1)

{
  int iVar1;
  UNiagaraEmitter *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  FString *pFVar6;
  FText *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined4 local_res18 [4];
  FString local_58;
  FString local_48;
  
  bVar3 = false;
  local_res18[0] = 0;
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UNiagaraSystem *)0x0) {
    pTVar5 = UNiagaraSystem::GetEmitterHandles(this_00);
    iVar1 = pTVar5->ArrayNum;
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    pFVar8 = pFVar9 + (longlong)iVar1 * 0x48;
    do {
      if (pTVar5->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar9 == pFVar8) break;
      pUVar2 = *(UNiagaraEmitter **)(pFVar9 + 0x28);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 == (UNiagaraEmitter *)0x0) goto LAB_1492ae307;
LAB_1492ae2f2:
        bVar10 = pUVar2 == this;
      }
      else {
        if (pUVar2 != (UNiagaraEmitter *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
          goto LAB_1492ae2f2;
        }
LAB_1492ae307:
        bVar10 = this == (UNiagaraEmitter *)0x0;
      }
      if (bVar10) goto LAB_1492ae30c;
      pFVar9 = pFVar9 + 0x48;
    } while( true );
  }
LAB_1492ae31e:
  pFVar6 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_58);
  bVar10 = FNiagaraPlatformSet::ShouldPruneEmittersOnCook(pFVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (!bVar10) {
    return true;
  }
  if (this_00 != (UNiagaraSystem *)0x0) {
    pFVar6 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_58);
    bVar3 = true;
    bVar10 = FNiagaraPlatformSet::IsEnabledForPlatform(&this_00->Platforms,pFVar6);
    if (!bVar10) {
      bVar10 = true;
      goto LAB_1492ae384;
    }
  }
  bVar10 = false;
LAB_1492ae384:
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar10) {
    if (5 < (byte)LogNiagara._0_1_) {
      pFVar7 = (FText *)(**(code **)(*(longlong *)&param_1->field_0x8 + 0x18))
                                  (&param_1->field_0x8,&local_48);
      FText::ToString(pFVar7);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_48.Data.AllocatorInstance.Data + 0x10))();
      }
    }
    return false;
  }
  pFVar6 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_48);
  iVar1 = (this->VersionData).ArrayNum;
  pFVar8 = (this->VersionData).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x3c8;
  while( true ) {
    if ((this->VersionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar9) break;
    bVar3 = FNiagaraPlatformSet::IsEnabledForPlatform((FNiagaraPlatformSet *)(pFVar8 + 0x90),pFVar6)
    ;
    if (bVar3) {
      bVar3 = true;
LAB_1492ae49b:
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar3 != false) {
        return bVar3;
      }
      if ((byte)LogNiagara._0_1_ < 6) {
        return false;
      }
      pFVar7 = (FText *)(**(code **)(*(longlong *)&param_1->field_0x8 + 0x18))
                                  (&param_1->field_0x8,&local_58);
      FText::ToString(pFVar7);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_58.Data.AllocatorInstance.Data + 0x10))();
        return false;
      }
      return false;
    }
    pFVar8 = pFVar8 + 0x3c8;
  }
  bVar3 = false;
  goto LAB_1492ae49b;
LAB_1492ae30c:
  if (pFVar9[0x20] == (FScriptContainerElement)0x0) {
    return false;
  }
  goto LAB_1492ae31e;
}

// PostInitProperties @ 1492af430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::PostInitProperties(UNiagaraEmitter *this)

{
  int iVar1;
  FVersionedNiagaraEmitterData *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    this_00 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
    iVar1 = (this->VersionData).ArrayNum;
    pFVar2 = this_00 + iVar1;
    while( true ) {
      if ((this->VersionData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (this_00 == pFVar2) break;
      FVersionedNiagaraEmitterData::PostInitProperties(this_00,this);
      this_00 = this_00 + 1;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,L"Emitter");
  ResolveScalabilitySettings(this);
  return;
}

// PostLoad @ 1492afcb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::PostLoad(UNiagaraEmitter *this)

{
  int iVar1;
  int iVar2;
  FVersionedNiagaraEmitterData *pFVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FGuid local_38;
  
  UObject::PostLoad((UObject *)this);
  local_38 = FNiagaraCustomVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  local_38 = FUE5MainStreamObjectVersion::GUID;
  UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  iVar1 = (this->VersionData).ArrayNum;
  pFVar4 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  pFVar3 = pFVar4 + iVar1;
  while( true ) {
    if ((this->VersionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    FVersionedNiagaraEmitterData::PostLoad(pFVar4,this,iVar2);
    pFVar4 = pFVar4 + 1;
  }
  if (this->bFullyLoaded == false) {
    this->bFullyLoaded = true;
    FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
    FMemScope::FMemScope(local_res18,Niagara,true);
    ResolveScalabilitySettings(this);
    iVar1 = (this->VersionData).ArrayNum;
    pFVar4 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
    pFVar3 = pFVar4 + iVar1;
    while( true ) {
      if ((this->VersionData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar4 == pFVar3) break;
      FVersionedNiagaraEmitterData::UpdateDebugName(pFVar4,this,(FNiagaraDataSetCompiledData *)0x0);
      pFVar4 = pFVar4 + 1;
    }
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

// RemoveEventHandlerByUsageId @ 1492b4140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::RemoveEventHandlerByUsageId(UNiagaraEmitter *this,FGuid *param_1,FGuid *param_2)

{
  FVersionedNiagaraEmitterData *pFVar1;
  FGuid local_18;
  
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar1 = GetEmitterData(this,param_2);
  TArray<FNiagaraEventScriptProperties,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UNiagaraEmitter::RemoveEventHandlerByUsageId_::__l2::<lambda_1>_>
            (&pFVar1->EventHandlerScriptProps,(<lambda_1> *)&local_18);
  return;
}

// RemoveRenderer @ 1492b41c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::RemoveRenderer
          (UNiagaraEmitter *this,UNiagaraRendererProperties *param_1,FGuid *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraSystem *pUVar5;
  FVersionedNiagaraEmitterData *pFVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  UNiagaraRendererProperties *pUVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint local_res10;
  UNiagaraRendererProperties *local_d8;
  FNiagaraSystemUpdateContext local_d0;
  
  uVar9 = 0;
  local_d0.bOnlyActive = false;
  local_d0.bDestroySystemSim = true;
  local_d0.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ComponentsToReset.ArrayNum = 0;
  local_d0.ComponentsToReset.ArrayMax = 0;
  local_d0.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ComponentsToReInit.ArrayNum = 0;
  local_d0.ComponentsToReInit.ArrayMax = 0;
  local_d0.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_d0.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_d0.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ComponentsToDestroyInstance.ArrayNum = 0;
  local_d0.ComponentsToDestroyInstance.ArrayMax = 0;
  local_d0.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.SystemSimsToDestroy.ArrayNum = 0;
  local_d0.SystemSimsToDestroy.ArrayMax = 0;
  local_d0.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.SystemSimsToRecache.ArrayNum = 0;
  local_d0.SystemSimsToRecache.ArrayMax = 0;
  local_d0.PreWork._0_8_ = 0;
  local_d0.PreWork._8_8_ = 0;
  local_d0.PreWork._16_4_ = 0;
  local_d0.PostWork._0_8_ = 0;
  local_d0.PostWork._8_8_ = 0;
  local_d0.PostWork._16_4_ = 0;
  local_d0.bDestroyOnAdd = true;
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar5 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 != (UNiagaraSystem *)0x0) {
    FNiagaraSystemUpdateContext::Add(&local_d0,pUVar5,true);
  }
  pFVar6 = GetEmitterData(this,param_2);
  local_d8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraRendererProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (pFVar6->RendererProperties).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 <
       pFVar1 + (longlong)(pFVar6->RendererProperties).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar14 = (pFVar6->RendererProperties).ArrayNum;
  lVar7 = (longlong)iVar14;
  if (iVar14 != 0) {
    pFVar1 = (pFVar6->RendererProperties).AllocatorInstance.Data;
    local_res10 = 0;
    bVar3 = *(UNiagaraRendererProperties **)pFVar1 != local_d8;
    pUVar10 = local_d8;
    uVar12 = uVar9;
    uVar13 = uVar9;
    do {
      uVar11 = (uint)uVar12;
      uVar13 = uVar13 + 1;
      uVar12 = (ulonglong)(uVar11 + 1);
      if ((longlong)uVar13 < lVar7) {
        do {
          if (bVar3 != (*(UNiagaraRendererProperties **)(pFVar1 + uVar13 * 8) != pUVar10)) break;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < lVar7);
        uVar9 = (ulonglong)local_res10;
      }
      uVar8 = (uint)uVar9;
      iVar14 = (int)uVar12 - uVar11;
      if (bVar3 != false) {
        if (uVar8 != uVar11) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(int)uVar11 * 8,
                  (longlong)iVar14 << 3);
          pUVar10 = local_d8;
          uVar8 = local_res10;
        }
        local_res10 = uVar8 + iVar14;
        uVar9 = (ulonglong)local_res10;
      }
      bVar3 = (bool)(bVar3 ^ 1);
    } while ((longlong)uVar13 < lVar7);
    (pFVar6->RendererProperties).ArrayNum = (int)uVar9;
  }
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_d0);
  return;
}

// RemoveSimulationStage @ 1492b43f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraEmitter::RemoveSimulationStage
          (UNiagaraEmitter *this,UNiagaraSimulationStageBase *param_1,FGuid *param_2)

{
  FVersionedNiagaraEmitterData *pFVar1;
  TObjectPtr<UNiagaraSimulationStageBase>_u_0 local_res10 [3];
  
  pFVar1 = GetEmitterData(this,param_2);
  local_res10[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraSimulationStageBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_>::Remove
            (&pFVar1->SimulationStages,
             (TObjectPtr<UNiagaraSimulationStageBase> *)&local_res10[0].ObjectPtr);
  return;
}

// ResolveScalabilitySettings @ 1492b5020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::ResolveScalabilitySettings(UNiagaraEmitter *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  UNiagaraEffectType *pUVar5;
  ulonglong uVar6;
  FNiagaraEmitterScalabilitySettings *this_01;
  FNiagaraPlatformSet *this_02;
  FNiagaraEmitterScalabilitySettings *pFVar7;
  FNiagaraPlatformSet *pFVar8;
  uint *puVar9;
  FVersionedNiagaraEmitterData *pFVar10;
  FVersionedNiagaraEmitterData *this_03;
  undefined1 local_res8 [8];
  uint local_res10;
  
  this_03 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  local_res10 = (this->VersionData).ArrayNum;
  uVar6 = (ulonglong)(int)local_res10;
  puVar9 = (uint *)&(this_03->CurrentScalabilitySettings).field_0x30;
  pFVar10 = this_03 + uVar6;
  do {
    if ((this->VersionData).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_03 == pFVar10) {
      return;
    }
    *puVar9 = *puVar9 & 0xfffffffe;
    puVar9[1] = 0x3f800000;
    pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4)
    ;
    if (this_00 != (UNiagaraSystem *)0x0) {
      pUVar5 = UNiagaraSystem::GetEffectType(this_00);
      if (pUVar5 != (UNiagaraEffectType *)0x0) {
        iVar1 = (pUVar5->EmitterScalabilitySettings).Settings.ArrayNum;
        this_01 = (FNiagaraEmitterScalabilitySettings *)
                  (pUVar5->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
        pFVar7 = this_01 + iVar1;
        while( true ) {
          if ((pUVar5->EmitterScalabilitySettings).Settings.ArrayNum != iVar1) {
            `TCheckedPointerIterator<FNiagaraEmitterScalabilitySettings_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res8);
          }
          if (this_01 == pFVar7) break;
          bVar3 = FNiagaraPlatformSet::IsActive(&this_01->Platforms);
          if (bVar3) goto LAB_1492b5108;
          this_01 = this_01 + 1;
        }
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            FNiagaraPlatformSet::FNiagaraPlatformSet(&::Dummy.Platforms);
            ::Dummy.bScaleSpawnCount = 0;
            ::Dummy.SpawnCountScale = 1.0;
            atexit(`UNiagaraEffectType::GetActiveEmitterScalabilitySettings'::__l2::
                   _dynamic_atexit_destructor_for__Dummy__);
            _Init_thread_footer(&::_TSS1);
          }
        }
        this_01 = &::Dummy;
LAB_1492b5108:
        FNiagaraPlatformSet::operator=((FNiagaraPlatformSet *)(puVar9 + -0xc),&this_01->Platforms);
        *puVar9 = *puVar9 ^ (*puVar9 ^ this_01->bScaleSpawnCount) & 1;
        puVar9[1] = (uint)this_01->SpawnCountScale;
      }
    }
    uVar2 = puVar9[-0x7a];
    this_02 = *(FNiagaraPlatformSet **)(puVar9 + -0x7c);
    pFVar8 = (FNiagaraPlatformSet *)((longlong)(int)uVar2 * 0x40 + (longlong)this_02);
    while( true ) {
      if (puVar9[-0x7a] != uVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_02 == pFVar8) break;
      bVar3 = FNiagaraPlatformSet::IsActive(this_02);
      if ((bVar3) && ((this_02[1].DeviceProfileStates.ArrayNum & 1) != 0)) {
        *puVar9 = *puVar9 ^ (*puVar9 ^
                            *(uint *)&this_02[1].DeviceProfileStates.AllocatorInstance.Data) & 1;
        puVar9[1] = *(uint *)((longlong)&this_02[1].DeviceProfileStates.AllocatorInstance.Data + 4);
      }
      this_02 = (FNiagaraPlatformSet *)&this_02[1].CVarConditions;
    }
    if (0 < (int)puVar9[0x23]) {
      FVersionedNiagaraEmitterData::ClearRuntimeAllocationEstimate(this_03,0xffffffffffffffff);
    }
    uVar6 = (ulonglong)local_res10;
    this_03 = this_03 + 1;
    puVar9 = puVar9 + 0xf2;
  } while( true );
}

// Serialize @ 1492b53f0

void __thiscall UNiagaraEmitter::Serialize(UNiagaraEmitter *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x0001492b5423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  return;
}

// Serialize @ 1492b5430

void __thiscall UNiagaraEmitter::Serialize(UNiagaraEmitter *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FNiagaraCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUNiagaraEmitter @ 1492b6970

void __cdecl UNiagaraEmitter::StaticRegisterNativesUNiagaraEmitter(void)

{
  return;
}

// UpdateEmitterAfterLoad @ 1492bf270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::UpdateEmitterAfterLoad(UNiagaraEmitter *this)

{
  int iVar1;
  FVersionedNiagaraEmitterData *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if (this->bFullyLoaded == false) {
    this->bFullyLoaded = true;
    FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,Niagara,true);
    ResolveScalabilitySettings(this);
    iVar1 = (this->VersionData).ArrayNum;
    this_00 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
    pFVar2 = this_00 + iVar1;
    while( true ) {
      if ((this->VersionData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (this_00 == pFVar2) break;
      FVersionedNiagaraEmitterData::UpdateDebugName(this_00,this,(FNiagaraDataSetCompiledData *)0x0)
      ;
      this_00 = this_00 + 1;
    }
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

// UpdateScalability @ 1492bfcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraEmitter::UpdateScalability(UNiagaraEmitter *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  UNiagaraEffectType *pUVar5;
  ulonglong uVar6;
  FNiagaraEmitterScalabilitySettings *this_01;
  FNiagaraPlatformSet *this_02;
  FNiagaraEmitterScalabilitySettings *pFVar7;
  FNiagaraPlatformSet *pFVar8;
  uint *puVar9;
  FVersionedNiagaraEmitterData *pFVar10;
  FVersionedNiagaraEmitterData *this_03;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  
  this_03 = (FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data;
  uStackX_10 = (this->VersionData).ArrayNum;
  uVar6 = (ulonglong)(int)uStackX_10;
  puVar9 = (uint *)&(this_03->CurrentScalabilitySettings).field_0x30;
  pFVar10 = this_03 + uVar6;
  do {
    if ((this->VersionData).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FVersionedNiagaraEmitterData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (this_03 == pFVar10) {
      return;
    }
    *puVar9 = *puVar9 & 0xfffffffe;
    puVar9[1] = 0x3f800000;
    pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4)
    ;
    if (this_00 != (UNiagaraSystem *)0x0) {
      pUVar5 = UNiagaraSystem::GetEffectType(this_00);
      if (pUVar5 != (UNiagaraEffectType *)0x0) {
        iVar1 = (pUVar5->EmitterScalabilitySettings).Settings.ArrayNum;
        this_01 = (FNiagaraEmitterScalabilitySettings *)
                  (pUVar5->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
        pFVar7 = this_01 + iVar1;
        while( true ) {
          if ((pUVar5->EmitterScalabilitySettings).Settings.ArrayNum != iVar1) {
            `TCheckedPointerIterator<FNiagaraEmitterScalabilitySettings_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(auStackX_8);
          }
          if (this_01 == pFVar7) break;
          bVar3 = FNiagaraPlatformSet::IsActive(&this_01->Platforms);
          if (bVar3) goto LAB_1492b5108;
          this_01 = this_01 + 1;
        }
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            FNiagaraPlatformSet::FNiagaraPlatformSet(&::Dummy.Platforms);
            ::Dummy.bScaleSpawnCount = 0;
            ::Dummy.SpawnCountScale = 1.0;
            atexit(`UNiagaraEffectType::GetActiveEmitterScalabilitySettings'::__l2::
                   _dynamic_atexit_destructor_for__Dummy__);
            _Init_thread_footer(&::_TSS1);
          }
        }
        this_01 = &::Dummy;
LAB_1492b5108:
        FNiagaraPlatformSet::operator=((FNiagaraPlatformSet *)(puVar9 + -0xc),&this_01->Platforms);
        *puVar9 = *puVar9 ^ (*puVar9 ^ this_01->bScaleSpawnCount) & 1;
        puVar9[1] = (uint)this_01->SpawnCountScale;
      }
    }
    uVar2 = puVar9[-0x7a];
    this_02 = *(FNiagaraPlatformSet **)(puVar9 + -0x7c);
    pFVar8 = (FNiagaraPlatformSet *)((longlong)(int)uVar2 * 0x40 + (longlong)this_02);
    while( true ) {
      if (puVar9[-0x7a] != uVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (this_02 == pFVar8) break;
      bVar3 = FNiagaraPlatformSet::IsActive(this_02);
      if ((bVar3) && ((this_02[1].DeviceProfileStates.ArrayNum & 1) != 0)) {
        *puVar9 = *puVar9 ^ (*puVar9 ^
                            *(uint *)&this_02[1].DeviceProfileStates.AllocatorInstance.Data) & 1;
        puVar9[1] = *(uint *)((longlong)&this_02[1].DeviceProfileStates.AllocatorInstance.Data + 4);
      }
      this_02 = (FNiagaraPlatformSet *)&this_02[1].CVarConditions;
    }
    if (0 < (int)puVar9[0x23]) {
      FVersionedNiagaraEmitterData::ClearRuntimeAllocationEstimate(this_03,0xffffffffffffffff);
    }
    uVar6 = (ulonglong)uStackX_10;
    this_03 = this_03 + 1;
    puVar9 = puVar9 + 0xf2;
  } while( true );
}

// UpdateStatID @ 1492bfed0

void __thiscall UNiagaraEmitter::UpdateStatID(UNiagaraEmitter *this)

{
  TAtomic<FMinimalName> TVar1;
  
  TVar1 = ((this->StatID_GT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    return;
  }
  GenerateStatID(this);
  return;
}

// operator() @ 15053f900

bool __thiscall `UNiagaraEmitter::GetLatestEmitterData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8166792025996260940>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8166792025996260940>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053f96a;
    }
  }
  bVar2 = false;
LAB_15053f96a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053fb80

bool __thiscall `UNiagaraEmitter::GetEmitterData'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8166792025996260904>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8166792025996260904>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053fbea;
    }
  }
  bVar2 = false;
LAB_15053fbea:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

