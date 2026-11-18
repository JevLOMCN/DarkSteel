// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 14925e120

UScriptStruct * __cdecl FNiagaraSystemScalabilitySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings,
                         (UObject *)pUVar1,L"NiagaraSystemScalabilitySettings");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.OuterSingleton;
}

// FNiagaraSystemScalabilitySettings @ 1492768d0

FNiagaraSystemScalabilitySettings * __thiscall
FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings
          (FNiagaraSystemScalabilitySettings *this)

{
  FNiagaraSystemVisibilityCullingSettings *pFVar1;
  FNiagaraGlobalBudgetScaling *pFVar2;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  FNiagaraLinearRamp FVar7;
  FNiagaraSystemScalabilitySettings *pFVar8;
  uint local_res8;
  FNiagaraPlatformSet local_58;
  
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  this->MaxSystemProxies = 0x20;
  this->CullProxyMode = None;
  pFVar1->bCullWhenNotRendered = 0;
  pFVar1->bAllowPreCullingByViewFrustum = 0;
  pFVar1->bCullByViewFrustum = 0;
  pFVar2->bCullByGlobalBudget = 0;
  pFVar2->bScaleSystemInstanceCountByGlobalBudgetUse = 0;
  pFVar2->bScaleMaxInstanceCountByGlobalBudgetUse = 0;
  pFVar2->bScaleMaxDistanceByGlobalBudgetUse = 0;
  (this->VisibilityCulling).MaxTimeOutsideViewFrustum = 1.0;
  (this->VisibilityCulling).MaxTimeWithoutRender = 1.0;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX = 0.0;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY = 0.0;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX = 1.0;
  *(undefined8 *)&(this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY = 0x3f800000;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY = 0.0;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX = 1.0;
  *(undefined8 *)&(this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY = 0x3f800000;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY = 0.0;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX = 1.0;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY = 1.0;
  (this->BudgetScaling).MaxGlobalBudgetUsage = 1.0;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  pFVar8 = (FNiagaraSystemScalabilitySettings *)FNiagaraPlatformSet::FNiagaraPlatformSet(&local_58);
  if (this != pFVar8) {
    pFVar6 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->Platforms).DeviceProfileStates.AllocatorInstance.Data =
         (pFVar8->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    (pFVar8->Platforms).DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Platforms).DeviceProfileStates.ArrayNum =
         (pFVar8->Platforms).DeviceProfileStates.ArrayNum;
    (this->Platforms).DeviceProfileStates.ArrayMax =
         (pFVar8->Platforms).DeviceProfileStates.ArrayMax;
    (pFVar8->Platforms).DeviceProfileStates.ArrayNum = 0;
    (pFVar8->Platforms).DeviceProfileStates.ArrayMax = 0;
  }
  pTVar3 = &(pFVar8->Platforms).CVarConditions;
  pTVar4 = &(this->Platforms).CVarConditions;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Platforms).CVarConditions.ArrayNum = (pFVar8->Platforms).CVarConditions.ArrayNum;
    (this->Platforms).CVarConditions.ArrayMax = (pFVar8->Platforms).CVarConditions.ArrayMax;
    (pFVar8->Platforms).CVarConditions.ArrayNum = 0;
    (pFVar8->Platforms).CVarConditions.ArrayMax = 0;
  }
  (this->Platforms).QualityLevelMask = (pFVar8->Platforms).QualityLevelMask;
  puVar5 = &(this->Platforms).field_0x24;
  *(uint *)puVar5 =
       *(uint *)puVar5 ^
       ((this->Platforms).bEnabledForCurrentProfileAndEffectQuality ^
       (pFVar8->Platforms).bEnabledForCurrentProfileAndEffectQuality) & 1;
  (this->Platforms).LastBuiltFrame = (pFVar8->Platforms).LastBuiltFrame;
  if (local_58.CVarConditions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CVarConditions.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_58.DeviceProfileStates.AllocatorInstance.Data._4_4_,
                       (uint)local_58.DeviceProfileStates.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58.DeviceProfileStates.AllocatorInstance.Data._4_4_,
                                   (uint)local_58.DeviceProfileStates.AllocatorInstance.Data));
  }
  this->bCullByDistance = 0;
  this->bCullPerSystemMaxInstanceCount = 0;
  this->bCullMaxInstanceCount = 0;
  this->bCullByMaxTimeWithoutRender_DEPRECATED = 0;
  this->MaxDistance = 0.0;
  this->MaxInstances = 0;
  this->MaxSystemInstances = 0;
  this->MaxTimeWithoutRender_DEPRECATED = 0.0;
  *(uint *)&this->VisibilityCulling = local_res8 & 0xfffffff8;
  (this->VisibilityCulling).MaxTimeOutsideViewFrustum = 1.0;
  (this->VisibilityCulling).MaxTimeWithoutRender = 1.0;
  FVar7 = DefaultBudgetScaleRamp;
  this->CullProxyMode = None;
  local_58.DeviceProfileStates._8_8_ = FVar7._0_8_;
  this->MaxSystemProxies = 0x20;
  local_58.CVarConditions.AllocatorInstance.Data = FVar7._8_8_;
  *(ulonglong *)&this->BudgetScaling =
       CONCAT44(0x3f800000,(uint)local_58.DeviceProfileStates.AllocatorInstance.Data & 0xfffffff0);
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)&(this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)&(this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)
   &(this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  return this;
}

// operator= @ 14927bd40

FNiagaraSystemScalabilitySettings * __thiscall
FNiagaraSystemScalabilitySettings::operator=
          (FNiagaraSystemScalabilitySettings *this,FNiagaraSystemScalabilitySettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  FNiagaraPlatformSet::operator=(&this->Platforms,&param_1->Platforms);
  uVar4 = (this->bCullByDistance ^ param_1->bCullByDistance) & 1 ^ *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar4;
  *(uint *)&this->field_0x30 = uVar4;
  *(uint *)&this->field_0x30 = (uVar4 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar4;
  this->MaxDistance = param_1->MaxDistance;
  *(uint *)&this->field_0x38 =
       *(uint *)&this->field_0x38 ^
       (this->bCullByMaxTimeWithoutRender_DEPRECATED ^
       param_1->bCullByMaxTimeWithoutRender_DEPRECATED) & 1;
  this->MaxInstances = param_1->MaxInstances;
  this->MaxSystemInstances = param_1->MaxSystemInstances;
  this->MaxTimeWithoutRender_DEPRECATED = param_1->MaxTimeWithoutRender_DEPRECATED;
  this->CullProxyMode = param_1->CullProxyMode;
  this->MaxSystemProxies = param_1->MaxSystemProxies;
  fVar1 = (param_1->VisibilityCulling).MaxTimeOutsideViewFrustum;
  *(undefined4 *)&(this->VisibilityCulling).field_0x0 =
       *(undefined4 *)&(param_1->VisibilityCulling).field_0x0;
  (this->VisibilityCulling).MaxTimeOutsideViewFrustum = fVar1;
  (this->VisibilityCulling).MaxTimeWithoutRender = (param_1->VisibilityCulling).MaxTimeWithoutRender
  ;
  fVar1 = (param_1->BudgetScaling).MaxGlobalBudgetUsage;
  fVar2 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX;
  fVar3 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY;
  *(undefined4 *)&(this->BudgetScaling).field_0x0 =
       *(undefined4 *)&(param_1->BudgetScaling).field_0x0;
  (this->BudgetScaling).MaxGlobalBudgetUsage = fVar1;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX = fVar2;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY = fVar3;
  fVar1 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY;
  fVar2 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX;
  fVar3 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY = fVar1;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX = fVar2;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY = fVar3;
  fVar1 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY;
  fVar2 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX;
  fVar3 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY = fVar1;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX = fVar2;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY = fVar3;
  fVar1 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY = fVar1;
  return this;
}

// Clear @ 149289b60

void __thiscall FNiagaraSystemScalabilitySettings::Clear(FNiagaraSystemScalabilitySettings *this)

{
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraLinearRamp FVar5;
  FNiagaraSystemScalabilitySettings *pFVar6;
  uint local_res8;
  FNiagaraPlatformSet local_58;
  
  pFVar6 = (FNiagaraSystemScalabilitySettings *)FNiagaraPlatformSet::FNiagaraPlatformSet(&local_58);
  if (this != pFVar6) {
    pFVar4 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Platforms).DeviceProfileStates.AllocatorInstance.Data =
         (pFVar6->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    (pFVar6->Platforms).DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Platforms).DeviceProfileStates.ArrayNum =
         (pFVar6->Platforms).DeviceProfileStates.ArrayNum;
    (this->Platforms).DeviceProfileStates.ArrayMax =
         (pFVar6->Platforms).DeviceProfileStates.ArrayMax;
    (pFVar6->Platforms).DeviceProfileStates.ArrayNum = 0;
    (pFVar6->Platforms).DeviceProfileStates.ArrayMax = 0;
  }
  pTVar1 = &(pFVar6->Platforms).CVarConditions;
  pTVar2 = &(this->Platforms).CVarConditions;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Platforms).CVarConditions.ArrayNum = (pFVar6->Platforms).CVarConditions.ArrayNum;
    (this->Platforms).CVarConditions.ArrayMax = (pFVar6->Platforms).CVarConditions.ArrayMax;
    (pFVar6->Platforms).CVarConditions.ArrayNum = 0;
    (pFVar6->Platforms).CVarConditions.ArrayMax = 0;
  }
  (this->Platforms).QualityLevelMask = (pFVar6->Platforms).QualityLevelMask;
  puVar3 = &(this->Platforms).field_0x24;
  *(uint *)puVar3 =
       *(uint *)puVar3 ^
       ((this->Platforms).bEnabledForCurrentProfileAndEffectQuality ^
       (pFVar6->Platforms).bEnabledForCurrentProfileAndEffectQuality) & 1;
  (this->Platforms).LastBuiltFrame = (pFVar6->Platforms).LastBuiltFrame;
  if (local_58.CVarConditions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CVarConditions.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_58.DeviceProfileStates.AllocatorInstance.Data._4_4_,
                       (uint)local_58.DeviceProfileStates.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58.DeviceProfileStates.AllocatorInstance.Data._4_4_,
                                   (uint)local_58.DeviceProfileStates.AllocatorInstance.Data));
  }
  this->bCullByDistance = 0;
  this->bCullPerSystemMaxInstanceCount = 0;
  this->bCullMaxInstanceCount = 0;
  this->bCullByMaxTimeWithoutRender_DEPRECATED = 0;
  this->MaxDistance = 0.0;
  this->MaxInstances = 0;
  this->MaxSystemInstances = 0;
  this->MaxTimeWithoutRender_DEPRECATED = 0.0;
  *(uint *)&this->VisibilityCulling = local_res8 & 0xfffffff8;
  (this->VisibilityCulling).MaxTimeOutsideViewFrustum = 1.0;
  (this->VisibilityCulling).MaxTimeWithoutRender = 1.0;
  FVar5 = DefaultBudgetScaleRamp;
  this->CullProxyMode = None;
  local_58.DeviceProfileStates._8_8_ = FVar5._0_8_;
  this->MaxSystemProxies = 0x20;
  local_58.CVarConditions.AllocatorInstance.Data = FVar5._8_8_;
  *(ulonglong *)&this->BudgetScaling =
       CONCAT44(0x3f800000,(uint)local_58.DeviceProfileStates.AllocatorInstance.Data & 0xfffffff0);
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)&(this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)&(this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX =
       (float)local_58.DeviceProfileStates.ArrayNum;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY =
       (float)local_58.DeviceProfileStates.ArrayMax;
  *(FScriptContainerElement **)
   &(this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX =
       local_58.CVarConditions.AllocatorInstance.Data;
  return;
}

// PostLoad @ 1492af4d0

void __thiscall
FNiagaraSystemScalabilitySettings::PostLoad(FNiagaraSystemScalabilitySettings *this,int param_1)

{
  if (param_1 < 0x47) {
    *(uint *)&this->VisibilityCulling =
         *(uint *)&this->VisibilityCulling ^
         ((this->VisibilityCulling).bCullWhenNotRendered ^
         this->bCullByMaxTimeWithoutRender_DEPRECATED) & 1;
    (this->VisibilityCulling).MaxTimeWithoutRender = this->MaxTimeWithoutRender_DEPRECATED;
  }
  return;
}

// FNiagaraSystemScalabilitySettings @ 1493cded0

FNiagaraSystemScalabilitySettings * __thiscall
FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings
          (FNiagaraSystemScalabilitySettings *this,FNiagaraSystemScalabilitySettings *param_1)

{
  int *piVar1;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  
  piVar1 = &(this->Platforms).DeviceProfileStates.ArrayMax;
  (this->Platforms).DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Platforms).DeviceProfileStates.ArrayNum;
  pFVar5 = (param_1->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  (this->Platforms).DeviceProfileStates.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->Platforms).DeviceProfileStates.AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 4)
    ;
  }
  pTVar2 = &(this->Platforms).CVarConditions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Platforms).CVarConditions.ArrayMax;
  iVar4 = (param_1->Platforms).CVarConditions.ArrayNum;
  pFVar5 = (param_1->Platforms).CVarConditions.AllocatorInstance.Data;
  (this->Platforms).CVarConditions.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x30);
  }
  (this->Platforms).QualityLevelMask = (param_1->Platforms).QualityLevelMask;
  puVar3 = &(this->Platforms).field_0x24;
  *(uint *)puVar3 =
       *(uint *)puVar3 ^
       ((this->Platforms).bEnabledForCurrentProfileAndEffectQuality ^
       (param_1->Platforms).bEnabledForCurrentProfileAndEffectQuality) & 1;
  (this->Platforms).LastBuiltFrame = (param_1->Platforms).LastBuiltFrame;
  uVar9 = (this->bCullByDistance ^ param_1->bCullByDistance) & 1 ^ *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar9;
  uVar9 = (uVar9 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar9;
  *(uint *)&this->field_0x30 = uVar9;
  *(uint *)&this->field_0x30 = (uVar9 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar9;
  this->MaxDistance = param_1->MaxDistance;
  *(uint *)&this->field_0x38 =
       *(uint *)&this->field_0x38 ^
       (this->bCullByMaxTimeWithoutRender_DEPRECATED ^
       param_1->bCullByMaxTimeWithoutRender_DEPRECATED) & 1;
  this->MaxInstances = param_1->MaxInstances;
  this->MaxSystemInstances = param_1->MaxSystemInstances;
  this->MaxTimeWithoutRender_DEPRECATED = param_1->MaxTimeWithoutRender_DEPRECATED;
  this->CullProxyMode = param_1->CullProxyMode;
  this->MaxSystemProxies = param_1->MaxSystemProxies;
  fVar6 = (param_1->VisibilityCulling).MaxTimeOutsideViewFrustum;
  *(undefined4 *)&(this->VisibilityCulling).field_0x0 =
       *(undefined4 *)&(param_1->VisibilityCulling).field_0x0;
  (this->VisibilityCulling).MaxTimeOutsideViewFrustum = fVar6;
  (this->VisibilityCulling).MaxTimeWithoutRender = (param_1->VisibilityCulling).MaxTimeWithoutRender
  ;
  fVar6 = (param_1->BudgetScaling).MaxGlobalBudgetUsage;
  fVar7 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX;
  fVar8 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY;
  *(undefined4 *)&(this->BudgetScaling).field_0x0 =
       *(undefined4 *)&(param_1->BudgetScaling).field_0x0;
  (this->BudgetScaling).MaxGlobalBudgetUsage = fVar6;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX = fVar7;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY = fVar8;
  fVar6 = (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY;
  fVar7 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX;
  fVar8 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY = fVar6;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX = fVar7;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY = fVar8;
  fVar6 = (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY;
  fVar7 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX;
  fVar8 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY = fVar6;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX = fVar7;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY = fVar8;
  fVar6 = (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX =
       (param_1->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX;
  (this->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY = fVar6;
  return this;
}

