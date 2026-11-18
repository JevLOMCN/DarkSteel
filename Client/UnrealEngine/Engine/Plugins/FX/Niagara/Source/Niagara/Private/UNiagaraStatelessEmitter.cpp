// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// ForEachEnabledRendererWithIndex<TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)>_> @ 14926ee90

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessEmitter::
ForEachEnabledRendererWithIndex<TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)>_>
          (UNiagaraStatelessEmitter *this,
          TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *param_1)

{
  code *pcVar1;
  ENiagaraSimTarget EVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint local_38 [2];
  longlong *local_30;
  
  if ((this->RendererProperties).ArrayNum == 0) {
    if (*(longlong *)param_1 == 0) {
      return;
    }
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  else {
    EVar2 = ComputeSimTarget(this);
    uVar9 = 0;
    if (0 < (this->RendererProperties).ArrayNum) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->RendererProperties).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar7 = *(longlong **)((this->RendererProperties).AllocatorInstance.Data + lVar10);
        if (((plVar7 != (longlong *)0x0) &&
            (cVar4 = (**(code **)(*plVar7 + 0x318))(plVar7), cVar4 != '\0')) &&
           (cVar4 = (**(code **)(*plVar7 + 0x2e8))(plVar7,EVar2), cVar4 != '\0')) {
          local_38[0] = uVar9;
          local_30 = plVar7;
          UE::Core::Private::Function::CheckCallable(*(void **)param_1);
          pcVar1 = *(code **)param_1;
          plVar7 = *(longlong **)&param_1->field_0x28;
          if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
            plVar7 = (longlong *)&param_1->field_0x10;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar1)(uVar6,&local_30,local_38);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (this->RendererProperties).ArrayNum);
    }
    if (*(longlong *)param_1 == 0) {
      return;
    }
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  plVar8 = (longlong *)&param_1->field_0x10;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  (**(code **)(*plVar8 + 0x10))();
  return;
}

// StaticClass @ 14940ec20

UClass * __cdecl UNiagaraStatelessEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitter",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitter,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraStatelessEmitter>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitter>,local_res8,
               UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton;
}

// UNiagaraStatelessEmitter @ 149428ae0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

UNiagaraStatelessEmitter * __thiscall
UNiagaraStatelessEmitter::UNiagaraStatelessEmitter
          (UNiagaraStatelessEmitter *this,FVTableHelper *param_1)

{
  UNiagaraEmitterBase::UNiagaraEmitterBase((UNiagaraEmitterBase *)this,param_1);
  this->bDeterministic = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
  this->AllowedFeatureMask = 3;
  this->RandomSeed = 0;
  (this->StatelessEmitterData).Object = (FNiagaraStatelessEmitterData *)0x0;
  (this->StatelessEmitterData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EmitterTemplate).field0_0x0.DebugPtr = (UNiagaraStatelessEmitterTemplate *)0x0;
  (this->FixedBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->FixedBounds).IsValid = '\x01';
  FNiagaraEmitterStateData::FNiagaraEmitterStateData(&this->EmitterState);
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->RendererProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererProperties).ArrayNum = 0;
  (this->RendererProperties).ArrayMax = 0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalabilityOverrides).Overrides.ArrayNum = 0;
  (this->ScalabilityOverrides).Overrides.ArrayMax = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->ParticleDataSetCompiledData);
  (this->ShaderOutputVariableOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderOutputVariableOffsets).ArrayNum = 0;
  (this->ShaderOutputVariableOffsets).ArrayMax = 0;
  (this->CachedParameterCollectionReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedParameterCollectionReferences).ArrayNum = 0;
  (this->CachedParameterCollectionReferences).ArrayMax = 0;
  return this;
}

// UNiagaraStatelessEmitter @ 149428be0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

UNiagaraStatelessEmitter * __thiscall
UNiagaraStatelessEmitter::UNiagaraStatelessEmitter
          (UNiagaraStatelessEmitter *this,FObjectInitializer *param_1)

{
  UNiagaraEmitterBase::UNiagaraEmitterBase((UNiagaraEmitterBase *)this,param_1);
  this->bDeterministic = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
  this->AllowedFeatureMask = 3;
  this->RandomSeed = 0;
  (this->StatelessEmitterData).Object = (FNiagaraStatelessEmitterData *)0x0;
  (this->StatelessEmitterData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EmitterTemplate).field0_0x0.DebugPtr = (UNiagaraStatelessEmitterTemplate *)0x0;
  (this->FixedBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->FixedBounds).IsValid = '\x01';
  FNiagaraEmitterStateData::FNiagaraEmitterStateData(&this->EmitterState);
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->RendererProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererProperties).ArrayNum = 0;
  (this->RendererProperties).ArrayMax = 0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalabilityOverrides).Overrides.ArrayNum = 0;
  (this->ScalabilityOverrides).Overrides.ArrayMax = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->ParticleDataSetCompiledData);
  (this->ShaderOutputVariableOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderOutputVariableOffsets).ArrayNum = 0;
  (this->ShaderOutputVariableOffsets).ArrayMax = 0;
  (this->CachedParameterCollectionReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedParameterCollectionReferences).ArrayNum = 0;
  (this->CachedParameterCollectionReferences).ArrayMax = 0;
  return this;
}

// ~UNiagaraStatelessEmitter @ 14942c550

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraStatelessEmitter::~UNiagaraStatelessEmitter(UNiagaraStatelessEmitter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
  pFVar1 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderOutputVariableOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->ParticleDataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->ParticleDataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->ParticleDataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleDataSetCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraEmitterScalabilityOverride,int>
            ((FNiagaraEmitterScalabilityOverride *)
             (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data,
             (this->ScalabilityOverrides).Overrides.ArrayNum);
  pFVar1 = (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraStatelessSpawnInfo,int>
            ((FNiagaraStatelessSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDelay._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDuration._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatelessEmitterData).SharedReferenceCount.ReferenceController);
  UNiagaraEmitterBase::~UNiagaraEmitterBase((UNiagaraEmitterBase *)this);
  return;
}

// AllocateShaderParameters @ 149430f40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FCommonShaderParameters * __thiscall
UNiagaraStatelessEmitter::AllocateShaderParameters
          (UNiagaraStatelessEmitter *this,FNiagaraStatelessSpaceTransforms *param_1,
          FNiagaraParameterStore *param_2)

{
  int iVar1;
  int iVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  FScriptContainerElement *pFVar4;
  UNiagaraStatelessEmitterTemplate *pUVar5;
  code *pcVar6;
  bool bVar7;
  FCommonShaderParameters *pFVar8;
  FShaderParametersMetadata *pFVar9;
  uchar *_Dst;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  TArrayView<unsigned_char_const_,int> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  FNiagaraStatelessSetShaderParameterContext local_68;
  
  if ((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar9 = FNiagaraStatelessEmitterData::GetShaderParametersMetadata
                     ((this->StatelessEmitterData).Object);
  uVar11 = pFVar9->Size;
  _Dst = FMemory::Malloc((longlong)(int)uVar11,0x10);
  memset(_Dst,0,(longlong)(int)uVar11);
  if ((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar3 = (this->StatelessEmitterData).Object;
  pFVar4 = (pFVar3->BuiltData).AllocatorInstance.Data;
  iVar1 = (pFVar3->BuiltData).ArrayNum;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar10 = (param_2->ParameterData).AllocatorInstance.Data;
  iVar2 = (param_2->ParameterData).ArrayNum;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  local_98._12_4_ = uStack_bc;
  local_98.ArrayNum = iVar1;
  local_88._12_4_ = uStack_ac;
  local_88.ArrayNum = iVar2;
  local_98.DataPtr = (uchar *)pFVar4;
  local_88.DataPtr = (uchar *)pFVar10;
  FNiagaraStatelessSetShaderParameterContext::FNiagaraStatelessSetShaderParameterContext
            (&local_68,param_1,&local_88,&local_98,pFVar9,_Dst);
  uVar11 = local_68.ParameterOffset + 0xf & 0xfffffff0;
  pFVar9 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(&local_68,uVar11,pFVar9);
  pFVar9 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
  pFVar10 = (this->Modules).AllocatorInstance.Data;
  iVar1 = (this->Modules).ArrayNum;
  local_68.ParameterOffset = pFVar9->Size + uVar11;
  pFVar4 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraStatelessModule>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar4) break;
    (**(code **)(**(longlong **)pFVar10 + 0x2c8))(*(longlong **)pFVar10,&local_68);
    pFVar10 = pFVar10 + 8;
  }
  pUVar5 = (this->EmitterTemplate).field0_0x0.DebugPtr;
  pcVar6 = *(code **)(pUVar5->_padding_ + 0x2c8);
  if ((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar3 = (this->StatelessEmitterData).Object;
  pFVar4 = (pFVar3->ShaderOutputVariableOffsets).AllocatorInstance.Data;
  iVar1 = (pFVar3->ShaderOutputVariableOffsets).ArrayNum;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCommonShaderParameters *)(*pcVar6)();
      return pFVar8;
    }
  }
  local_a8 = SUB84(pFVar4,0);
  uStack_a4 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_78 = local_a8;
  uStack_74 = uStack_a4;
  iStack_70 = iVar1;
  (*pcVar6)(pUVar5,_Dst,&local_78);
  return (FCommonShaderParameters *)(local_68.ShaderParametersBase + uVar11);
}

// BuildCompiledDataSet @ 1494318f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraStatelessEmitter::BuildCompiledDataSet(UNiagaraStatelessEmitter *this)

{
  int *piVar1;
  int iVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  FNiagaraStatelessEmitterData *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FNiagaraDataSetCompiledData,1> *pTVar7;
  TSharedPtr<FNiagaraDataSetCompiledData,1> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FNiagaraDataSetCompiledData *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FNiagaraDataSetCompiledData,1> local_18;
  
  pTVar7 = MakeShared<FNiagaraDataSetCompiledData,1,FNiagaraDataSetCompiledData_&>
                     (&local_18,&this->ParticleDataSetCompiledData);
  local_20.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar7->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar3;
  if (((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->StatelessEmitterData).Object;
  pTVar8 = &pFVar4->ParticleDataSetCompiledData;
  if (pTVar8 != (TSharedPtr<FNiagaraDataSetCompiledData,1> *)&local_28) {
    pTVar8->Object = pFVar3;
    local_28 = (FNiagaraDataSetCompiledData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar4->ParticleDataSetCompiledData).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->StatelessEmitterData).Object;
  pTVar9 = &pFVar4->ShaderOutputVariableOffsets;
  if (pTVar9 != &this->ShaderOutputVariableOffsets) {
    iVar2 = (this->ShaderOutputVariableOffsets).ArrayNum;
    piVar1 = &(pFVar4->ShaderOutputVariableOffsets).ArrayMax;
    _Src = (this->ShaderOutputVariableOffsets).AllocatorInstance.Data;
    (pFVar4->ShaderOutputVariableOffsets).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,*piVar1,&pTVar9->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
    }
  }
  return;
}

// CacheFromCompiledData @ 14943adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraStatelessEmitter::CacheFromCompiledData(UNiagaraStatelessEmitter *this)

{
  TSharedPtr<FNiagaraStatelessEmitterData,1> *this_00;
  ENiagaraStatelessFeatureMask *pEVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TObjectPtr<UNiagaraStatelessEmitterTemplate>_u_0 TVar6;
  UNiagaraStatelessModule *this_01;
  longlong *plVar7;
  FNiagaraDataSetCompiledData *pFVar8;
  FNiagaraStatelessSpawnInfo *pFVar9;
  FNiagaraStatelessEmitterData *pFVar10;
  FNiagaraStatelessEmitterData *pFVar11;
  FNiagaraStatelessEmitterData *pFVar12;
  UObject *pUVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  UNiagaraStatelessEmitter *pUVar29;
  TArray<TObjectPtr<UNiagaraStatelessModule>,TSizedDefaultAllocator<32>_> *pTVar30;
  bool bVar31;
  char cVar32;
  bool bVar33;
  ENiagaraStatelessFeatureMask EVar34;
  int iVar35;
  int iVar36;
  UPackage *pUVar37;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *pTVar38;
  TSharedRef<FNiagaraDataSetCompiledData,1> *pTVar39;
  UClass *pUVar40;
  UNiagaraSystem *this_02;
  UNiagaraEffectType *this_03;
  FNiagaraEmitterScalabilitySettings *pFVar41;
  FNiagaraStatelessEmitterData *pFVar42;
  FParticleSimulationExecData *pFVar43;
  FShaderParametersMetadata *pFVar44;
  uint uVar45;
  TSharedPtr<FNiagaraDataSetCompiledData,1> *pTVar46;
  FInstancedStruct *pFVar47;
  ENiagaraSimTarget EVar48;
  FScriptContainerElement *pFVar49;
  FNiagaraStatelessSpawnInfo *this_04;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *pTVar50;
  FNiagaraPlatformSet *this_05;
  TArray<TObjectPtr<UNiagaraParameterCollection>,TSizedDefaultAllocator<32>_> *pTVar51;
  UNiagaraStatelessEmitter *pUVar52;
  FScriptContainerElement *pFVar53;
  FNiagaraStatelessSpawnInfo *pFVar54;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar55;
  TArray<FNiagaraStatelessSpawnInfo,TSizedDefaultAllocator<32>_> *pTVar56;
  FNiagaraPlatformSet *pFVar57;
  float fVar58;
  float fVar59;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined1 local_1b0 [8];
  UNiagaraStatelessEmitter *local_1a8;
  UObject *local_1a0;
  TArray<TObjectPtr<UNiagaraStatelessModule>,TSizedDefaultAllocator<32>_> *local_198;
  FNiagaraDataSetCompiledData *local_190;
  FSharedReferencer<1> local_188;
  float local_180;
  undefined1 local_17c;
  UNiagaraStatelessModule_InitializeParticle *local_178;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *local_170;
  FParticleSimulationExecData *local_168;
  undefined8 local_160;
  uint local_158;
  TRawPtrProxyWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>_>
  local_150;
  FString local_140;
  TSharedRef<FNiagaraDataSetCompiledData,1> local_130;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> local_120;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a8 = this;
  local_150.Object = ::operator_new(0x230);
  if (local_150.Object == (FNiagaraStatelessEmitterData *)0x0) {
    local_150.Object = (FNiagaraStatelessEmitterData *)0x0;
  }
  else {
    (local_150.Object)->field_0x33 = 0;
    memset(&(local_150.Object)->EmitterState,0,0x1b0);
    (local_150.Object)->SimTarget = GPUComputeSim;
    ((local_150.Object)->DebugSimulationName).ComparisonIndex = 0;
    ((local_150.Object)->DebugSimulationName).Number = 0;
    ((local_150.Object)->DebugEmitterName).ComparisonIndex = 0;
    ((local_150.Object)->DebugEmitterName).Number = 0;
    ((local_150.Object)->ShaderOutputVariableOffsets).ArrayNum = 0;
    ((local_150.Object)->ShaderOutputVariableOffsets).ArrayMax = 0;
    (local_150.Object)->bCanEverExecute = false;
    (local_150.Object)->bDeterministic = false;
    (local_150.Object)->FeatureMask = None;
    (local_150.Object)->RandomSeed = 0;
    ((local_150.Object)->LifetimeRange).Min = 0.0;
    ((local_150.Object)->LifetimeRange).Max = 0.0;
    ((local_150.Object)->LifetimeRange).ParameterOffset = -1;
    ((local_150.Object)->FixedBounds).Min.field0_0x0._s_0.X = 0.0;
    ((local_150.Object)->FixedBounds).Min.field0_0x0._s_0.Y = 0.0;
    ((local_150.Object)->FixedBounds).Min.field0_0x0._s_0.Z = 0.0;
    ((local_150.Object)->FixedBounds).Max.field0_0x0._s_0.X = 0.0;
    ((local_150.Object)->FixedBounds).Max.field0_0x0._s_0.Y = 0.0;
    ((local_150.Object)->FixedBounds).Max.field0_0x0._s_0.Z = 0.0;
    ((local_150.Object)->ParticleDataSetCompiledData).Object = (FNiagaraDataSetCompiledData *)0x0;
    ((local_150.Object)->ParticleDataSetCompiledData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    ((local_150.Object)->ShaderOutputVariableOffsets).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_150.Object)->FixedBounds).IsValid = '\0';
    ((local_150.Object)->FixedBounds).Pad[0] = '\0';
    ((local_150.Object)->FixedBounds).Pad[1] = '\0';
    ((local_150.Object)->FixedBounds).Pad[2] = '\0';
    ((local_150.Object)->FixedBounds).Pad[3] = '\0';
    ((local_150.Object)->FixedBounds).Pad[4] = '\0';
    ((local_150.Object)->FixedBounds).Pad[5] = '\0';
    ((local_150.Object)->FixedBounds).Pad[6] = '\0';
    FNiagaraEmitterStateData::FNiagaraEmitterStateData(&(local_150.Object)->EmitterState);
    ((local_150.Object)->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_150.Object)->SpawnInfos).ArrayNum = 0;
    ((local_150.Object)->SpawnInfos).ArrayMax = 0;
    (local_150.Object)->SpawnCountScale = 1.0;
    ((local_150.Object)->RendererProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    ((local_150.Object)->RendererProperties).ArrayNum = 0;
    ((local_150.Object)->RendererProperties).ArrayMax = 0;
    ((local_150.Object)->BoundParameterCollections).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_150.Object)->BoundParameterCollections).ArrayNum = 0;
    ((local_150.Object)->BoundParameterCollections).ArrayMax = 0;
    (local_150.Object)->bModulesHaveRendererBindings = false;
    FNiagaraParameterStore::FNiagaraParameterStore(&(local_150.Object)->RendererBindings);
    ((local_150.Object)->Expressions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_150.Object)->Expressions).ArrayNum = 0;
    ((local_150.Object)->Expressions).ArrayMax = 0;
    (local_150.Object)->EmitterTemplate = (UNiagaraStatelessEmitterTemplate *)0x0;
    ((local_150.Object)->BuiltData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_150.Object)->BuiltData).ArrayNum = 0;
    ((local_150.Object)->BuiltData).ArrayMax = 0;
    ((local_150.Object)->StaticDataBufferCpu).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_150.Object)->StaticDataBufferCpu).ArrayNum = 0;
    ((local_150.Object)->StaticDataBufferCpu).ArrayMax = 0;
    ((local_150.Object)->StaticDataBufferGpu).Buffer.Reference = (FRHIBuffer *)0x0;
    ((local_150.Object)->StaticDataBufferGpu).SRV.Reference = (FRHIShaderResourceView *)0x0;
    ((local_150.Object)->StaticDataBufferGpu).NumBytes = 0;
    (local_150.Object)->ParticleSimExecData = (FParticleSimulationExecData *)0x0;
  }
  this_00 = &this->StatelessEmitterData;
  TSharedPtr<FNiagaraStatelessEmitterData,1>::
  operator=<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>_>
            (this_00,&local_150);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->bCanEverExecute = true;
  pUVar37 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  uVar4 = *(undefined4 *)&pUVar37->_padding_;
  uVar5 = *(undefined4 *)((longlong)&pUVar37->_padding_ + 4);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  (pFVar42->DebugSimulationName).ComparisonIndex = (FNameEntryId)uVar4;
  (pFVar42->DebugSimulationName).Number = uVar5;
  uVar4 = *(undefined4 *)&this->_padding_;
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  (pFVar42->DebugEmitterName).ComparisonIndex = (FNameEntryId)uVar4;
  (pFVar42->DebugEmitterName).Number = uVar5;
  TVar6 = (this->EmitterTemplate).field0_0x0;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->EmitterTemplate = (UNiagaraStatelessEmitterTemplate *)TVar6;
  EVar34 = NiagaraStatelessCommon::GGlobals.FeatureMask;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->FeatureMask = EVar34;
  EVar34 = this->AllowedFeatureMask;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_198 = &this->Modules;
  pEVar1 = &this_00->Object->FeatureMask;
  *pEVar1 = *pEVar1 & EVar34;
  pFVar49 = (local_198->AllocatorInstance).Data;
  iVar36 = (this->Modules).ArrayNum;
  pFVar53 = pFVar49 + (longlong)iVar36 * 8;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar36) {
      local_1b8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraStatelessModule>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b8);
    }
    pUVar29 = local_1a8;
    if (pFVar49 == pFVar53) break;
    this_01 = *(UNiagaraStatelessModule **)pFVar49;
    bVar31 = UNiagaraStatelessModule::IsModuleEnabled(this_01);
    if (bVar31) {
      EVar34 = (**(code **)(this_01->_padding_ + 0x2b0))(this_01);
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pEVar1 = &this_00->Object->FeatureMask;
      *pEVar1 = *pEVar1 & EVar34;
    }
    pFVar49 = pFVar49 + 8;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar38 = FNiagaraStatelessEmitterData::GetShader(this_00->Object,&local_120);
  if (pTVar38->ShaderContent == (FSimulationShader *)0x0) {
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pEVar1 = &this_00->Object->FeatureMask;
    *pEVar1 = *pEVar1 & ~ExecuteGPU;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (this_00->Object->FeatureMask == None) {
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this_00->Object->bCanEverExecute = false;
    if (4 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar29,&local_140,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
  }
  local_170 = &pUVar29->RendererProperties;
  pFVar49 = (local_170->AllocatorInstance).Data;
  iVar36 = (pUVar29->RendererProperties).ArrayNum;
  pFVar53 = pFVar49 + (longlong)iVar36 * 8;
  while( true ) {
    if ((pUVar29->RendererProperties).ArrayNum != iVar36) {
      local_1b7 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1b7);
    }
    if (pFVar49 == pFVar53) {
      EVar48 = GPUComputeSim;
      goto LAB_14943b2fc;
    }
    plVar7 = *(longlong **)pFVar49;
    if (((plVar7 != (longlong *)0x0) &&
        (cVar32 = (**(code **)(*plVar7 + 0x318))(plVar7), cVar32 != '\0')) &&
       (cVar32 = (**(code **)(*plVar7 + 0x2e8))(plVar7,1), cVar32 == '\0')) break;
    pFVar49 = pFVar49 + 8;
  }
  EVar48 = CPUSim;
LAB_14943b2fc:
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->SimTarget = EVar48;
  pTVar39 = MakeShared<FNiagaraDataSetCompiledData,1,FNiagaraDataSetCompiledData_&>
                      (&local_130,&pUVar29->ParticleDataSetCompiledData);
  local_188.ReferenceController = (pTVar39->SharedReferenceCount).ReferenceController;
  pFVar8 = pTVar39->Object;
  if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_188.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_190 = pFVar8;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  pTVar46 = &pFVar42->ParticleDataSetCompiledData;
  if (pTVar46 != (TSharedPtr<FNiagaraDataSetCompiledData,1> *)&local_190) {
    pTVar46->Object = pFVar8;
    local_190 = (FNiagaraDataSetCompiledData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar42->ParticleDataSetCompiledData).SharedReferenceCount,&local_188);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  pTVar55 = &pFVar42->ShaderOutputVariableOffsets;
  if (pTVar55 != &pUVar29->ShaderOutputVariableOffsets) {
    iVar36 = (pUVar29->ShaderOutputVariableOffsets).ArrayNum;
    piVar2 = &(pFVar42->ShaderOutputVariableOffsets).ArrayMax;
    pFVar53 = (pUVar29->ShaderOutputVariableOffsets).AllocatorInstance.Data;
    (pFVar42->ShaderOutputVariableOffsets).ArrayNum = iVar36;
    if ((iVar36 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar36,*piVar2,&pTVar55->AllocatorInstance,iVar36,piVar2);
      if (iVar36 != 0) {
        memcpy((pTVar55->AllocatorInstance).Data,pFVar53,(longlong)iVar36 << 2);
      }
    }
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  (pFVar42->EmitterState).InactiveResponse = (pUVar29->EmitterState).InactiveResponse;
  (pFVar42->EmitterState).LoopBehavior = (pUVar29->EmitterState).LoopBehavior;
  (pFVar42->EmitterState).LoopCount = (pUVar29->EmitterState).LoopCount;
  (pFVar42->EmitterState).LoopDurationMode = (pUVar29->EmitterState).LoopDurationMode;
  FNiagaraDistributionBase::operator=
            ((FNiagaraDistributionBase *)&(pFVar42->EmitterState).LoopDuration,
             (FNiagaraDistributionBase *)&(pUVar29->EmitterState).LoopDuration);
  (pFVar42->EmitterState).LoopDuration.Min = (pUVar29->EmitterState).LoopDuration.Min;
  (pFVar42->EmitterState).LoopDuration.Max = (pUVar29->EmitterState).LoopDuration.Max;
  FNiagaraDistributionBase::operator=
            ((FNiagaraDistributionBase *)&(pFVar42->EmitterState).LoopDelay,
             (FNiagaraDistributionBase *)&(pUVar29->EmitterState).LoopDelay);
  (pFVar42->EmitterState).LoopDelay.Min = (pUVar29->EmitterState).LoopDelay.Min;
  (pFVar42->EmitterState).LoopDelay.Max = (pUVar29->EmitterState).LoopDelay.Max;
  uVar4 = *(undefined4 *)&(pFVar42->EmitterState).field_0x70;
  uVar45 = (ZPULL(uVar4,0,1) ^ (pUVar29->EmitterState).bLoopDelayEnabled) & 1 ^ uVar4;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 2 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 4 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 8 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 0x10 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 0x20 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 0x40 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  uVar45 = (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 0x80 ^ uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 = uVar45;
  *(uint *)&(pFVar42->EmitterState).field_0x70 =
       (uVar45 ^ *(uint *)&(pUVar29->EmitterState).field_0x70) & 0x100 ^ uVar45;
  (pFVar42->EmitterState).MinDistance = (pUVar29->EmitterState).MinDistance;
  (pFVar42->EmitterState).MinDistanceReaction = (pUVar29->EmitterState).MinDistanceReaction;
  (pFVar42->EmitterState).MaxDistance = (pUVar29->EmitterState).MaxDistance;
  (pFVar42->EmitterState).MaxDistanceReaction = (pUVar29->EmitterState).MaxDistanceReaction;
  (pFVar42->EmitterState).VisibilityCullReaction = (pUVar29->EmitterState).VisibilityCullReaction;
  (pFVar42->EmitterState).VisibilityCullDelay = (pUVar29->EmitterState).VisibilityCullDelay;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((this_00->Object->EmitterState).bEnableDistanceCulling != 0) {
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    *(uint *)&(this_00->Object->EmitterState).field_0x70 =
         (((this_00->Object->EmitterState).bMaxDistanceEnabled |
          (this_00->Object->EmitterState).bMinDistanceEnabled) & 1) << 4 ^
         *(uint *)&(this_00->Object->EmitterState).field_0x70 & 0xffffffef;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar58 = __real_38d1b717;
  fVar59 = (this_00->Object->EmitterState).LoopDuration.Min;
  if (fVar59 <= __real_38d1b717) {
    fVar59 = __real_38d1b717;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  (this_00->Object->EmitterState).LoopDuration.Min = fVar59;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar59 = (this_00->Object->EmitterState).LoopDuration.Max;
  if (fVar59 <= fVar58) {
    fVar59 = fVar58;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  (this_00->Object->EmitterState).LoopDuration.Max = fVar59;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->bDeterministic = pUVar29->bDeterministic;
  uVar45 = pUVar29->RandomSeed;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->RandomSeed = uVar45 ^ 0xdefa081;
  uVar4 = *(undefined4 *)&(pUVar29->FixedBounds).Min.field0_0x0;
  uVar5 = *(undefined4 *)((longlong)&(pUVar29->FixedBounds).Min.field0_0x0 + 4);
  uVar15 = *(undefined4 *)((longlong)&(pUVar29->FixedBounds).Min.field0_0x0 + 8);
  uVar16 = *(undefined4 *)((longlong)&(pUVar29->FixedBounds).Min.field0_0x0 + 0xc);
  dVar17 = (pUVar29->FixedBounds).Min.field0_0x0._s_0.Z;
  dVar18 = (pUVar29->FixedBounds).Max.field0_0x0._s_0.X;
  dVar19 = (pUVar29->FixedBounds).Max.field0_0x0._s_0.Y;
  dVar20 = (pUVar29->FixedBounds).Max.field0_0x0._s_0.Z;
  uVar21 = (pUVar29->FixedBounds).IsValid;
  uVar22 = (pUVar29->FixedBounds).Pad[0];
  uVar23 = (pUVar29->FixedBounds).Pad[1];
  uVar24 = (pUVar29->FixedBounds).Pad[2];
  uVar25 = (pUVar29->FixedBounds).Pad[3];
  uVar26 = (pUVar29->FixedBounds).Pad[4];
  uVar27 = (pUVar29->FixedBounds).Pad[5];
  uVar28 = (pUVar29->FixedBounds).Pad[6];
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  *(undefined4 *)&(pFVar42->FixedBounds).Min.field0_0x0 = uVar4;
  *(undefined4 *)((longlong)&(pFVar42->FixedBounds).Min.field0_0x0 + 4) = uVar5;
  *(undefined4 *)((longlong)&(pFVar42->FixedBounds).Min.field0_0x0 + 8) = uVar15;
  *(undefined4 *)((longlong)&(pFVar42->FixedBounds).Min.field0_0x0 + 0xc) = uVar16;
  (pFVar42->FixedBounds).Min.field0_0x0._s_0.Z = dVar17;
  (pFVar42->FixedBounds).Max.field0_0x0._s_0.X = dVar18;
  (pFVar42->FixedBounds).Max.field0_0x0._s_0.Y = dVar19;
  (pFVar42->FixedBounds).Max.field0_0x0._s_0.Z = dVar20;
  (pFVar42->FixedBounds).IsValid = uVar21;
  (pFVar42->FixedBounds).Pad[0] = uVar22;
  (pFVar42->FixedBounds).Pad[1] = uVar23;
  (pFVar42->FixedBounds).Pad[2] = uVar24;
  (pFVar42->FixedBounds).Pad[3] = uVar25;
  (pFVar42->FixedBounds).Pad[4] = uVar26;
  (pFVar42->FixedBounds).Pad[5] = uVar27;
  (pFVar42->FixedBounds).Pad[6] = uVar28;
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  uVar45 = (pUVar29->SpawnInfos).ArrayNum;
  if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
  }
  if ((pFVar42->SpawnInfos).ArrayMax < (int)uVar45) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,uVar45,&(pFVar42->SpawnInfos).AllocatorInstance,(pFVar42->SpawnInfos).ArrayNum
               ,&(pFVar42->SpawnInfos).ArrayMax);
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar36 = (pUVar29->SpawnInfos).ArrayNum;
  pFVar42 = this_00->Object;
  this_04 = (FNiagaraStatelessSpawnInfo *)(pUVar29->SpawnInfos).AllocatorInstance.Data;
  pTVar56 = &pFVar42->SpawnInfos;
  pFVar54 = this_04 + iVar36;
  while( true ) {
    if ((pUVar29->SpawnInfos).ArrayNum != iVar36) {
      local_1b6 = 0;
      `TCheckedPointerIterator<FNiagaraStatelessSpawnInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b6);
    }
    if (this_04 == pFVar54) break;
    local_180 = (pUVar29->EmitterState).LoopDuration.Max;
    local_17c = 1;
    bVar31 = FNiagaraStatelessSpawnInfo::IsValid(this_04,(TOptional<float>)&local_180);
    if (bVar31) {
      pFVar9 = (FNiagaraStatelessSpawnInfo *)(pTVar56->AllocatorInstance).Data;
      if (((pFVar9 <= this_04) && (this_04 < pFVar9 + (pFVar42->SpawnInfos).ArrayMax)) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar35 = (pFVar42->SpawnInfos).ArrayNum;
      piVar2 = &(pFVar42->SpawnInfos).ArrayMax;
      if (iVar35 == *piVar2) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8c0,&pTVar56->AllocatorInstance,piVar2);
      }
      (pFVar42->SpawnInfos).ArrayNum = iVar35 + 1;
      FNiagaraStatelessSpawnInfo::FNiagaraStatelessSpawnInfo
                ((FNiagaraStatelessSpawnInfo *)
                 ((pTVar56->AllocatorInstance).Data + (longlong)iVar35 * 0xc0),this_04);
    }
    this_04 = this_04 + 1;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  pTVar50 = &pFVar42->RendererProperties;
  if (pTVar50 != &pUVar29->RendererProperties) {
    iVar36 = (pUVar29->RendererProperties).ArrayNum;
    piVar2 = &(pFVar42->RendererProperties).ArrayMax;
    pFVar53 = (pUVar29->RendererProperties).AllocatorInstance.Data;
    (pFVar42->RendererProperties).ArrayNum = iVar36;
    if ((iVar36 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar36,*piVar2,&pTVar50->AllocatorInstance,iVar36,piVar2);
      ConstructItems<TObjectPtr<UNiagaraRendererProperties>,TObjectPtr<UNiagaraRendererProperties>,int>
                ((pTVar50->AllocatorInstance).Data,(TObjectPtr<UNiagaraRendererProperties> *)pFVar53
                 ,iVar36);
    }
  }
  pTVar50 = local_170;
  pFVar49 = (local_170->AllocatorInstance).Data;
  iVar36 = local_170->ArrayNum;
  pFVar53 = pFVar49 + (longlong)iVar36 * 8;
  while( true ) {
    if (pTVar50->ArrayNum != iVar36) {
      local_1b5 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b5);
    }
    pUVar29 = local_1a8;
    if (pFVar49 == pFVar53) break;
    plVar7 = *(longlong **)pFVar49;
    if ((plVar7 != (longlong *)0x0) &&
       (cVar32 = (**(code **)(*plVar7 + 0x318))(plVar7), cVar32 != '\0')) {
      pcVar14 = *(code **)(*plVar7 + 0x328);
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (*pcVar14)(plVar7,(this_00->Object->ParticleDataSetCompiledData).Object);
    }
    pFVar49 = pFVar49 + 8;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  bVar31 = pFVar42->bCanEverExecute;
  if ((pFVar42 == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar33)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  bVar33 = NiagaraStatelessInternal::IsValid(this_00->Object);
  pFVar42->bCanEverExecute = (bool)(bVar33 & bVar31);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar42 = this_00->Object;
  bVar31 = pFVar42->bCanEverExecute;
  bVar33 = FNiagaraPlatformSet::IsActive(&pUVar29->Platforms);
  pFVar42->bCanEverExecute = (bool)(bVar33 & bVar31);
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00->Object->SpawnCountScale = 1.0;
  pUVar40 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_02 = (UNiagaraSystem *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar29,pUVar40);
  if (((this_02 != (UNiagaraSystem *)0x0) &&
      (this_03 = UNiagaraSystem::GetEffectType(this_02), this_03 != (UNiagaraEffectType *)0x0)) &&
     (pFVar41 = UNiagaraEffectType::GetActiveEmitterScalabilitySettings(this_03),
     pFVar41->bScaleSpawnCount != 0)) {
    fVar59 = pFVar41->SpawnCountScale;
    pFVar42 = TSharedPtr<FNiagaraStatelessEmitterData,1>::operator->(this_00);
    pFVar42->SpawnCountScale = fVar59;
  }
  fVar59 = __real_3f800000;
  iVar36 = (pUVar29->ScalabilityOverrides).Overrides.ArrayNum;
  this_05 = (FNiagaraPlatformSet *)(pUVar29->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar57 = (FNiagaraPlatformSet *)((longlong)this_05 + (longlong)iVar36 * 0x40);
  while( true ) {
    if ((pUVar29->ScalabilityOverrides).Overrides.ArrayNum != iVar36) {
      local_1b4 = 0;
      `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b4);
    }
    if (this_05 == pFVar57) break;
    bVar31 = FNiagaraPlatformSet::IsActive(this_05);
    if ((bVar31) && ((this_05[1].DeviceProfileStates.ArrayNum & 1) != 0)) {
      fVar58 = fVar59;
      if (((ulonglong)this_05[1].DeviceProfileStates.AllocatorInstance.Data & 1) != 0) {
        fVar58 = *(float *)((longlong)&this_05[1].DeviceProfileStates.AllocatorInstance.Data + 4);
      }
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      this_00->Object->SpawnCountScale = fVar58;
    }
    this_05 = (FNiagaraPlatformSet *)&this_05[1].CVarConditions;
  }
  if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (this_00->Object->bCanEverExecute != false) {
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((this_00->Object->FeatureMask & ExecuteCPU) != None) {
      pFVar43 = ::operator_new(0x38);
      if (pFVar43 == (FParticleSimulationExecData *)0x0) {
        pFVar43 = (FParticleSimulationExecData *)0x0;
      }
      else {
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar43 = NiagaraStateless::FParticleSimulationExecData::FParticleSimulationExecData
                            (pFVar43,(this_00->Object->ParticleDataSetCompiledData).Object);
      }
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      this_00->Object->ParticleSimExecData = pFVar43;
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_168 = this_00->Object->ParticleSimExecData;
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar42 = this_00->Object;
    if ((pFVar42 == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar10 = this_00->Object;
    if ((pFVar10 == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar11 = this_00->Object;
    if ((pFVar11 == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar12 = this_00->Object;
    if ((pFVar12 == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_108._0_8_ = (this_00->Object->ParticleDataSetCompiledData).Object;
    local_108._8_8_ = &pFVar12->RendererBindings;
    local_108._16_8_ = &pFVar11->Expressions;
    local_108._24_8_ = &pFVar10->BuiltData;
    local_108._32_8_ = &pFVar42->StaticDataBufferCpu;
    local_108._40_8_ = local_168;
    local_108._48_4_ = 0;
    local_108._52_4_ = 0;
    local_108._56_4_ = 0;
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    local_c8._32_8_ = 0;
    local_c8._40_4_ = 0;
    local_c8._44_4_ = 0x80;
    local_c8._48_4_ = 0xffffffff;
    local_c8._52_4_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_160 = 0;
    pFVar44 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
    pTVar30 = local_198;
    local_158 = pFVar44->Size;
    pFVar49 = (local_198->AllocatorInstance).Data;
    iVar36 = local_198->ArrayNum;
    pFVar53 = pFVar49 + (longlong)iVar36 * 8;
    while( true ) {
      if (pTVar30->ArrayNum != iVar36) {
        local_1b3 = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraStatelessModule>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1b3);
      }
      pUVar29 = local_1a8;
      if (pFVar49 == pFVar53) break;
      plVar7 = *(longlong **)pFVar49;
      FNiagaraStatelessEmitterDataBuildContext::PreModuleBuild
                ((FNiagaraStatelessEmitterDataBuildContext *)local_108,local_158);
      (**(code **)(*plVar7 + 0x2c0))(plVar7,&local_160);
      (**(code **)(*plVar7 + 0x2b8))(plVar7,(FNiagaraStatelessEmitterDataBuildContext *)local_108);
      pFVar49 = pFVar49 + 8;
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    iVar36 = (this_00->Object->RendererBindings).SortedParameterOffsets.ArrayNum;
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this_00->Object->bModulesHaveRendererBindings = 0 < iVar36;
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((this_00->Object->StaticDataBufferCpu).ArrayNum < 0x10) {
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar42 = this_00->Object;
      if ((pFVar42 == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar35 = 0x10 - (this_00->Object->StaticDataBufferCpu).ArrayNum;
      iVar36 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar35,&(pFVar42->StaticDataBufferCpu).AllocatorInstance,
                          &(pFVar42->StaticDataBufferCpu).ArrayNum,
                          &(pFVar42->StaticDataBufferCpu).ArrayMax);
      memset((pFVar42->StaticDataBufferCpu).AllocatorInstance.Data + iVar36,0,(longlong)iVar35);
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FNiagaraStatelessEmitterData::InitRenderResources(this_00->Object);
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar42 = this_00->Object;
    uVar45 = (pUVar29->CachedParameterCollectionReferences).ArrayNum;
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
    (pFVar42->BoundParameterCollections).ArrayNum = 0;
    if ((pFVar42->BoundParameterCollections).ArrayMax < (int)uVar45) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar45,&(pFVar42->BoundParameterCollections).AllocatorInstance,0,
                 &(pFVar42->BoundParameterCollections).ArrayMax);
    }
    pFVar53 = (pUVar29->CachedParameterCollectionReferences).AllocatorInstance.Data;
    iVar36 = (pUVar29->CachedParameterCollectionReferences).ArrayNum;
    pUVar52 = (UNiagaraStatelessEmitter *)(pFVar53 + (longlong)iVar36 * 8);
    local_1a8 = pUVar52;
    while( true ) {
      if ((pUVar29->CachedParameterCollectionReferences).ArrayNum != iVar36) {
        local_1b2 = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1b2);
      }
      if ((UNiagaraStatelessEmitter *)pFVar53 == pUVar52) break;
      pUVar13 = *(UObject **)pFVar53;
      if (pUVar13 != (UObject *)0x0) {
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar42 = this_00->Object;
        pTVar51 = &pFVar42->BoundParameterCollections;
        local_1a0 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar49 = (pTVar51->AllocatorInstance).Data;
        if (((pFVar49 <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 <
             pFVar49 + (longlong)(pFVar42->BoundParameterCollections).ArrayMax * 8)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar35 = (pFVar42->BoundParameterCollections).ArrayNum;
        piVar2 = &(pFVar42->BoundParameterCollections).ArrayMax;
        if (iVar35 == *piVar2) {
          iVar35 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar51->AllocatorInstance,piVar2);
        }
        (pFVar42->BoundParameterCollections).ArrayNum = iVar35 + 1;
        *(UObject **)((pTVar51->AllocatorInstance).Data + (longlong)iVar35 * 8) = local_1a0;
        pUVar52 = local_1a8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a0);
          pUVar52 = local_1a8;
        }
      }
      pFVar53 = pFVar53 + 8;
    }
    local_178 = (UNiagaraStatelessModule_InitializeParticle *)0x0;
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (this_00->Object->EmitterTemplate != (UNiagaraStatelessEmitterTemplate *)0x0) {
      TArray<TObjectPtr<UNiagaraStatelessModule>,TSizedDefaultAllocator<32>_>::
      FindItemByClass<UNiagaraStatelessModule_InitializeParticle>(local_198,&local_178,(int *)0x0,0)
      ;
      if (local_178 == (UNiagaraStatelessModule_InitializeParticle *)0x0) {
        bVar31 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5467241751443930644>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitter.cpp"
                            ,0x1ec,"InitializeParticleModule");
        if (bVar31) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      else {
        cVar32 = (char)(local_178->LifetimeDistribution)._padding_;
        if (cVar32 == '\x01') {
          fVar58 = 0.0;
          fVar59 = 0.0;
          iVar36 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                              (FNiagaraVariableBase *)
                              ((longlong)&(local_178->LifetimeDistribution)._padding_ + 4));
        }
        else if (cVar32 == '\x02') {
          fVar58 = 0.0;
          fVar59 = 0.0;
          iVar36 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                              (FInstancedStruct *)&(local_178->LifetimeDistribution)._padding_);
        }
        else {
          fVar59 = (local_178->LifetimeDistribution).Min;
          fVar58 = fVar59;
          if (cVar32 != '\x03') {
            fVar58 = (local_178->LifetimeDistribution).Max;
          }
          iVar36 = -1;
        }
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar42 = this_00->Object;
        (pFVar42->LifetimeRange).ParameterOffset = iVar36;
        (pFVar42->LifetimeRange).Min = fVar59;
        (pFVar42->LifetimeRange).Max = fVar58;
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((this_00->Object->LifetimeRange).Min <= 0.0) {
          if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar31)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          if ((this_00->Object->LifetimeRange).Max <= 0.0) {
            if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar31)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((this_00->Object->LifetimeRange).ParameterOffset == -1) {
              if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar31)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              this_00->Object->bCanEverExecute = false;
            }
          }
        }
      }
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar42 = this_00->Object;
    cVar32 = (char)(pFVar42->EmitterState).LoopDuration._padding_;
    if (cVar32 == '\x01') {
      FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                 (FNiagaraVariableBase *)
                 ((longlong)&(pFVar42->EmitterState).LoopDuration._padding_ + 4));
    }
    else if (cVar32 == '\x02') {
      FNiagaraStatelessEmitterDataBuildContext::AddExpression
                ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                 (FInstancedStruct *)&(pFVar42->EmitterState).LoopDuration._padding_);
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar42 = this_00->Object;
    cVar32 = (char)(pFVar42->EmitterState).LoopDelay._padding_;
    if (cVar32 == '\x01') {
      FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                 (FNiagaraVariableBase *)
                 ((longlong)&(pFVar42->EmitterState).LoopDelay._padding_ + 4));
    }
    else if (cVar32 == '\x02') {
      FNiagaraStatelessEmitterDataBuildContext::AddExpression
                ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                 (FInstancedStruct *)&(pFVar42->EmitterState).LoopDelay._padding_);
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar42 = this_00->Object;
    iVar36 = (pFVar42->SpawnInfos).ArrayNum;
    pFVar53 = (pFVar42->SpawnInfos).AllocatorInstance.Data;
    pFVar49 = pFVar53 + (longlong)iVar36 * 0xc0;
    while( true ) {
      if ((pFVar42->SpawnInfos).ArrayNum != iVar36) {
        local_1b1 = 0;
        `TCheckedPointerIterator<FNiagaraStatelessSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1b1);
      }
      pTVar50 = local_170;
      if (pFVar53 == pFVar49) break;
      if (*(int *)pFVar53 == 1) {
        if (pFVar53[0x38] == (FScriptContainerElement)0x1) {
          FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                    ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                     (FNiagaraVariableBase *)(pFVar53 + 0x3c));
        }
        else if (pFVar53[0x38] == (FScriptContainerElement)0x2) {
          pFVar47 = (FInstancedStruct *)(pFVar53 + 0x48);
LAB_14943c706:
          FNiagaraStatelessEmitterDataBuildContext::AddExpression
                    ((FNiagaraStatelessEmitterDataBuildContext *)local_108,pFVar47);
        }
      }
      else if (pFVar53[8] == (FScriptContainerElement)0x1) {
        FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                  ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                   (FNiagaraVariableBase *)(pFVar53 + 0xc));
      }
      else if (pFVar53[8] == (FScriptContainerElement)0x2) {
        pFVar47 = (FInstancedStruct *)(pFVar53 + 0x18);
        goto LAB_14943c706;
      }
      if (pFVar53[0x70] == (FScriptContainerElement)0x1) {
        FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                  ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                   (FNiagaraVariableBase *)(pFVar53 + 0x74));
      }
      else if (pFVar53[0x70] == (FScriptContainerElement)0x2) {
        FNiagaraStatelessEmitterDataBuildContext::AddExpression
                  ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                   (FInstancedStruct *)(pFVar53 + 0x80));
      }
      if (pFVar53[0x98] == (FScriptContainerElement)0x1) {
        FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                  ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                   (FNiagaraVariableBase *)(pFVar53 + 0x9c));
        pFVar53 = pFVar53 + 0xc0;
      }
      else {
        if (pFVar53[0x98] == (FScriptContainerElement)0x2) {
          FNiagaraStatelessEmitterDataBuildContext::AddExpression
                    ((FNiagaraStatelessEmitterDataBuildContext *)local_108,
                     (FInstancedStruct *)(pFVar53 + 0xa8));
        }
        pFVar53 = pFVar53 + 0xc0;
      }
    }
    pFVar49 = (local_170->AllocatorInstance).Data;
    iVar36 = local_170->ArrayNum;
    pFVar53 = pFVar49 + (longlong)iVar36 * 8;
    while( true ) {
      if (pTVar50->ArrayNum != iVar36) {
        local_1b0[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1b0);
      }
      if (pFVar49 == pFVar53) break;
      plVar7 = *(longlong **)pFVar49;
      if ((plVar7 != (longlong *)0x0) &&
         (cVar32 = (**(code **)(*plVar7 + 0x318))(plVar7), cVar32 != '\0')) {
        pcVar14 = *(code **)(*plVar7 + 0x2f8);
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        (*pcVar14)(plVar7,&this_00->Object->RendererBindings);
      }
      pFVar49 = pFVar49 + 8;
    }
    if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (this_00->Object->SimTarget == CPUSim) {
      if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if ((this_00->Object->FeatureMask & ExecuteCPU) == None) {
        if ((this_00->Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        this_00->Object->bCanEverExecute = false;
      }
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
  }
  return;
}

// CanObtainEmitterAttribute @ 14943dc40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraStatelessEmitter::CanObtainEmitterAttribute
          (UNiagaraStatelessEmitter *this,FNiagaraVariableBase *param_1,
          FNiagaraTypeDefinition *param_2)

{
  return false;
}

// CanObtainParticleAttribute @ 14943dc50

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraStatelessEmitter::CanObtainParticleAttribute
          (UNiagaraStatelessEmitter *this,FNiagaraVariableBase *param_1,FGuid *param_2,
          FNiagaraTypeDefinition *param_3)

{
  return false;
}

// ComputeSimTarget @ 14943e280

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

ENiagaraSimTarget __thiscall
UNiagaraStatelessEmitter::ComputeSimTarget(UNiagaraStatelessEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->RendererProperties).AllocatorInstance.Data;
  iVar2 = (this->RendererProperties).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RendererProperties).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (((plVar3 != (longlong *)0x0) &&
        (cVar4 = (**(code **)(*plVar3 + 0x318))(plVar3), cVar4 != '\0')) &&
       (cVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,1), cVar4 == '\0')) {
      return CPUSim;
    }
    pFVar5 = pFVar5 + 8;
  }
  return GPUComputeSim;
}

// GetEmitterTemplate @ 149449c30

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

UNiagaraStatelessEmitterTemplate * __thiscall
UNiagaraStatelessEmitter::GetEmitterTemplate(UNiagaraStatelessEmitter *this)

{
  return (this->EmitterTemplate).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14944b2f0

UClass * __cdecl UNiagaraStatelessEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitter",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitter,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraStatelessEmitter>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitter>,local_res8,
               UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton;
}

// IsAllowedByScalability @ 1494534d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall UNiagaraStatelessEmitter::IsAllowedByScalability(UNiagaraStatelessEmitter *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraPlatformSet::IsActive(&this->Platforms);
  return bVar1;
}

// NeedsLoadForTargetPlatform @ 1494552b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNiagaraStatelessEmitter::NeedsLoadForTargetPlatform
          (UNiagaraStatelessEmitter *this,ITargetPlatform *param_1)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraSystem *this_00;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FText *pFVar8;
  FNiagaraEmitterHandle *this_01;
  undefined4 local_res18 [2];
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  local_res18[0] = 0;
  pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if (this_00 != (UNiagaraSystem *)0x0) {
    pTVar6 = UNiagaraSystem::GetEmitterHandles(this_00);
    iVar2 = pTVar6->ArrayNum;
    this_01 = (FNiagaraEmitterHandle *)(pTVar6->AllocatorInstance).Data;
    pFVar1 = this_01 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (this_01 == pFVar1) goto LAB_149455344;
      if ((this_01->StatelessEmitter).field0_0x0.DebugPtr == this) break;
      this_01 = this_01 + 1;
    }
    bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
    if (!bVar3) {
      return false;
    }
  }
LAB_149455344:
  pFVar7 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_48);
  bVar3 = FNiagaraPlatformSet::ShouldPruneEmittersOnCook(pFVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return true;
  }
  if (this_00 != (UNiagaraSystem *)0x0) {
    pFVar7 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_48);
    bVar4 = true;
    bVar3 = FNiagaraPlatformSet::IsEnabledForPlatform(&this_00->Platforms,pFVar7);
    if (!bVar3) {
      bVar3 = true;
      goto LAB_1494553ac;
    }
  }
  bVar3 = false;
LAB_1494553ac:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (5 < (byte)LogNiagara._0_1_) {
      pFVar8 = (FText *)(**(code **)(*(longlong *)&param_1->field_0x8 + 0x18))
                                  (&param_1->field_0x8,&local_38);
      FText::ToString(pFVar8);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_38.Data.AllocatorInstance.Data + 0x10))();
      }
    }
    return false;
  }
  pFVar7 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,&local_38);
  bVar4 = FNiagaraPlatformSet::IsEnabledForPlatform(&this->Platforms,pFVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return true;
  }
  if ((byte)LogNiagara._0_1_ < 6) {
    return false;
  }
  pFVar8 = (FText *)(**(code **)(*(longlong *)&param_1->field_0x8 + 0x18))
                              (&param_1->field_0x8,&local_48);
  FText::ToString(pFVar8);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_48.Data.AllocatorInstance.Data + 0x10))();
    return false;
  }
  return false;
}

// PostLoad @ 149460250

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraStatelessEmitter::PostLoad(UNiagaraStatelessEmitter *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraStatelessEmitter **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ResolveScalabilitySettings @ 149464070

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraStatelessEmitter::ResolveScalabilitySettings(UNiagaraStatelessEmitter *this)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraSystem *this_00;
  UNiagaraEffectType *this_01;
  FNiagaraEmitterScalabilitySettings *pFVar6;
  FNiagaraStatelessEmitterData *pFVar7;
  FNiagaraPlatformSet *this_02;
  FNiagaraPlatformSet *pFVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if (((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ((this->StatelessEmitterData).Object)->SpawnCountScale = 1.0;
  pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if (((this_00 != (UNiagaraSystem *)0x0) &&
      (this_01 = UNiagaraSystem::GetEffectType(this_00), this_01 != (UNiagaraEffectType *)0x0)) &&
     (pFVar6 = UNiagaraEffectType::GetActiveEmitterScalabilitySettings(this_01),
     pFVar6->bScaleSpawnCount != 0)) {
    fVar1 = pFVar6->SpawnCountScale;
    pFVar7 = TSharedPtr<FNiagaraStatelessEmitterData,1>::operator->(&this->StatelessEmitterData);
    pFVar7->SpawnCountScale = fVar1;
  }
  fVar1 = __real_3f800000;
  iVar2 = (this->ScalabilityOverrides).Overrides.ArrayNum;
  this_02 = (FNiagaraPlatformSet *)(this->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar8 = (FNiagaraPlatformSet *)((longlong)this_02 + (longlong)iVar2 * 0x40);
  do {
    if ((this->ScalabilityOverrides).Overrides.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_02 == pFVar8) {
      return;
    }
    bVar4 = FNiagaraPlatformSet::IsActive(this_02);
    if ((bVar4) && ((this_02[1].DeviceProfileStates.ArrayNum & 1) != 0)) {
      fVar9 = fVar1;
      if (((ulonglong)this_02[1].DeviceProfileStates.AllocatorInstance.Data & 1) != 0) {
        fVar9 = *(float *)((longlong)&this_02[1].DeviceProfileStates.AllocatorInstance.Data + 4);
      }
      if (((this->StatelessEmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ((this->StatelessEmitterData).Object)->SpawnCountScale = fVar9;
    }
    this_02 = (FNiagaraPlatformSet *)&this_02[1].CVarConditions;
  } while( true );
}

// Serialize @ 149464630

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessEmitter::Serialize(UNiagaraStatelessEmitter *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  UNiagaraStatelessEmitterTemplate *pUVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  FString *pFVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  FString local_58;
  FString local_48;
  FString local_38;
  
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar3 = (this->EmitterTemplate).field0_0x0.DebugPtr,
     pUVar3 != (UNiagaraStatelessEmitterTemplate *)0x0)) {
    pFVar4 = (pUVar3->Modules).AllocatorInstance.Data;
    pwVar15 = L"";
    iVar1 = (pUVar3->Modules).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar12 = 0;
    if (0 < (this->Modules).ArrayNum) {
      lVar16 = 0;
      do {
        uVar14 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < (this->Modules).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(longlong *)((this->Modules).AllocatorInstance.Data + lVar16) == 0) {
          uVar9 = 0;
          if ((int)uVar12 < iVar1) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar10 = *(UClass **)(pFVar4 + lVar16);
          if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar10);
          }
          pUVar5 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar5 == (UObject *)0x0) {
            pFVar11 = GetTypeName<UNiagaraStatelessModule>(&local_38);
            if ((pFVar11->Data).ArrayNum != 0) {
              pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar15);
          }
          pUVar10 = Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();
          iVar2 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar10->_padding_)) {
            pFVar11 = GetTypeName<UNiagaraStatelessModule>(&local_58);
            if ((pFVar11->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            pFVar11 = GetFullNameForCastLogError<UObject>(&local_48,pUVar5);
            if ((pFVar11->Data).ArrayNum != 0) {
              pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar15,pwVar13);
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->Modules).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->Modules).AllocatorInstance.Data;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(UObject **)(pFVar6 + lVar16) = pUVar5;
        }
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 8;
      } while ((int)uVar12 < (this->Modules).ArrayNum);
    }
  }
  return;
}

// Serialize @ 1494648d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessEmitter::Serialize(UNiagaraStatelessEmitter *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraStatelessEmitter @ 149469bd0

void __cdecl UNiagaraStatelessEmitter::StaticRegisterNativesUNiagaraStatelessEmitter(void)

{
  return;
}

// UsesCollection @ 14946e7a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraStatelessEmitter::UsesCollection
          (UNiagaraStatelessEmitter *this,UNiagaraParameterCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->CachedParameterCollectionReferences).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UNiagaraParameterCollection **)pFVar2 == (UNiagaraParameterCollection *)0x0) {
      bVar3 = param_1 == (UNiagaraParameterCollection *)0x0;
    }
    else {
      bVar3 = *(UNiagaraParameterCollection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

