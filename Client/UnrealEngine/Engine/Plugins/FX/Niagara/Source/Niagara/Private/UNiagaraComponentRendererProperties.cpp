// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 32

// StaticClass @ 148fe63c0

UClass * __cdecl UNiagaraComponentRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponentRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraComponentRendererProperties,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponentRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraComponentRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton;
}

// UNiagaraComponentRendererProperties @ 149024450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraComponentRendererProperties * __thiscall
UNiagaraComponentRendererProperties::UNiagaraComponentRendererProperties
          (UNiagaraComponentRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraComponentRendererProperties__6B_;
  (this->ComponentType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EnabledBinding).RootName.ComparisonIndex = 0;
  (this->EnabledBinding).RootName.Number = 0;
  (this->EnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->EnabledBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->EnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->EnabledBinding).bBindingExistsOnSource = '\0';
  (this->EnabledBinding).bIsCachedParticleValue = '\x01';
  (this->EnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->EnabledBinding).DataSetName.Number = 0;
  (this->EnabledBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).RootName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).RootName.Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  this->bCreateComponentFirstParticleFrame = false;
  (this->TemplateComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->PropertyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindings).ArrayNum = 0;
  (this->PropertyBindings).ArrayMax = 0;
  *(undefined8 *)&this->SetterFunctionMapping = 0;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x8 = 0;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x20 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x28 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x34 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x40 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x48 = 0;
  this->IsSetterMappingDirty = (atomic<bool>)0x0;
  return this;
}

// UNiagaraComponentRendererProperties @ 149024580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraComponentRendererProperties * __thiscall
UNiagaraComponentRendererProperties::UNiagaraComponentRendererProperties
          (UNiagaraComponentRendererProperties *this)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  longlong *plVar6;
  int iVar7;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this->_padding_);
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar7 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar7;
  plVar6 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pFVar4 = &this->EnabledBinding;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *plVar6 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *piVar2 = 0;
  this->_padding_ = (longlong)&___7UNiagaraComponentRendererProperties__6B_;
  (this->ComponentType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ComponentCountLimit = 0xf;
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->EnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->EnabledBinding).ParamMapVariable.Name.Number = 0;
  iVar7 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->EnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar7;
  pFVar5 = &this->RendererVisibilityTagBinding;
  (this->EnabledBinding).bBindingExistsOnSource = '\0';
  (this->EnabledBinding).bIsCachedParticleValue = '\x01';
  (this->EnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->EnabledBinding).DataSetName.Number = 0;
  (this->EnabledBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar7 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar7;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  this->bAssignComponentsOnParticleID = true;
  this->bCreateComponentFirstParticleFrame = false;
  this->bOnlyActivateNewlyAquiredComponents = true;
  this->RendererVisibility = 0;
  (this->TemplateComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->PropertyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindings).ArrayNum = 0;
  (this->PropertyBindings).ArrayMax = 0;
  *(undefined8 *)&this->SetterFunctionMapping = 0;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x8 = 0;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x20 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x28 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x34 = 0;
  *(undefined8 *)&(this->SetterFunctionMapping).field_0x40 = 0;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x48 = 0;
  this->IsSetterMappingDirty = (atomic<bool>)0x0;
  iVar7 = *piVar2;
  *(undefined4 *)&this->_padding_ = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,iVar7,(ForAnyElementType *)plVar6,2,piVar2);
  plVar6 = (longlong *)*plVar6;
  *plVar6 = (longlong)pFVar4;
  plVar6[1] = (longlong)pFVar5;
  LOCK();
  this->IsSetterMappingDirty = (atomic<bool>)0x1;
  UNLOCK();
  return this;
}

// ~UNiagaraComponentRendererProperties @ 1490268d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::~UNiagaraComponentRendererProperties
          (UNiagaraComponentRendererProperties *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraComponentRendererProperties__6B_;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SetterFunctionMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPropertySetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPropertySetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPropertySetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SetterFunctionMapping);
  DestructItems<FNiagaraComponentPropertyBinding,int>
            ((FNiagaraComponentPropertyBinding *)(this->PropertyBindings).AllocatorInstance.Data,
             (this->PropertyBindings).ArrayNum);
  pFVar2 = (this->PropertyBindings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 1490305c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::CacheFromCompiledData
          (UNiagaraComponentRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  bool bVar2;
  FVersionedNiagaraEmitter local_28;
  
  (**(code **)(this->_padding_ + 0x358))(this,0,0);
  if ((this->TemplateComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    this_00 = UNiagaraRendererProperties::GetOuterEmitter
                        ((UNiagaraRendererProperties *)this,&local_28);
    pFVar1 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
    if (pFVar1 == (FVersionedNiagaraEmitterData *)0x0) {
      bVar2 = true;
    }
    else {
      bVar2 = pFVar1->bLocalSpace == false;
    }
    USceneComponent::SetAbsolute((this->TemplateComponent).field0_0x0.DebugPtr,bVar2,bVar2,bVar2);
    return;
  }
  return;
}

// CreateBoundsCalculator @ 149034660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraBoundsCalculator * __thiscall
UNiagaraComponentRendererProperties::CreateBoundsCalculator
          (UNiagaraComponentRendererProperties *this)

{
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14903b260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraRenderer * __thiscall
UNiagaraComponentRendererProperties::CreateEmitterRenderer
          (UNiagaraComponentRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  atomic<bool> aVar1;
  FNiagaraRendererComponents *this_00;
  FNiagaraRendererComponents *pFVar2;
  
  pFVar2 = (FNiagaraRendererComponents *)0x0;
  LOCK();
  aVar1 = this->IsSetterMappingDirty;
  this->IsSetterMappingDirty = (atomic<bool>)0x0;
  UNLOCK();
  if (aVar1 != (atomic<bool>)0x0) {
    UpdateSetterFunctions(this);
  }
  this_00 = ::operator_new(400);
  if (this_00 != (FNiagaraRendererComponents *)0x0) {
    pFVar2 = FNiagaraRendererComponents::FNiagaraRendererComponents
                       (this_00,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar2->_padding_ + 8))(pFVar2,this,param_2,param_3);
  return (FNiagaraRenderer *)pFVar2;
}

// CreateTemplateComponent @ 14903bf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::CreateTemplateComponent
          (UNiagaraComponentRendererProperties *this)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar6;
  longlong *plVar7;
  UClass *pUVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  FName local_b8;
  FVersionedNiagaraEmitter local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar8 = (this->ComponentType).Class.field0_0x0.DebugPtr;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if (pUVar8 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar8 = (this->ComponentType).Class.field0_0x0.DebugPtr;
        goto LAB_14903bfc5;
      }
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_14903bfc5:
  FVar2 = local_b8;
  if (local_b8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  FVar3 = local_b8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_b8.ComparisonIndex = FVar2.ComparisonIndex.Value;
  local_b8.Number = FVar2.Number;
  local_98._16_4_ = local_b8.ComparisonIndex.Value;
  local_98._20_4_ = local_b8.Number;
  local_98._24_4_ = RF_ArchetypeObject;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_b8 = FVar3;
  local_98._8_8_ = this;
  pUVar5 = (USceneComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TemplateComponent).field0_0x0.DebugPtr = pUVar5;
  USceneComponent::SetVisibility(pUVar5,false,DirtyOnly);
  pUVar5 = (this->TemplateComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x2d8))(pUVar5,0);
  pUVar5 = (this->TemplateComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x420))(pUVar5,0);
  if ((this->TemplateComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    this_00 = UNiagaraRendererProperties::GetOuterEmitter
                        ((UNiagaraRendererProperties *)this,&local_b0);
    pFVar6 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
    if (pFVar6 == (FVersionedNiagaraEmitterData *)0x0) {
      bVar9 = true;
    }
    else {
      bVar9 = pFVar6->bLocalSpace == false;
    }
    USceneComponent::SetAbsolute((this->TemplateComponent).field0_0x0.DebugPtr,bVar9,bVar9,bVar9);
  }
  return;
}

// GetDoubleDef @ 149045d70

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetDoubleDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::DoubleDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeHelper::DoubleDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeHelper::DoubleDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeHelper::DoubleDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeHelper::DoubleDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeHelper::DoubleDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetFColorDef @ 1490466d0

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFColorDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  UPackage *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  int *piVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10;
  TStringView<wchar_t> local_18;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.Size = 0x13;
      local_18.DataPtr = L"/Script/CoreUObject";
      pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
      CoreUObjectPkg = (UPackage *)StaticFindObjectChecked(pUVar3,(UObject *)0x0,&local_18,None);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    pUVar1 = CoreUObjectPkg;
    if (::_TSS1 == -1) {
      local_18.DataPtr = L"Color";
      local_18.Size = 5;
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      ColorStruct = (UScriptStruct *)
                    StaticFindObjectChecked(pUVar3,(UObject *)pUVar1,&local_18,None);
      _Init_thread_footer(&::_TSS1);
    }
  }
  local_res8 = ColorStruct;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)ColorStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  __return_storage_ptr__->UnderlyingType = 2;
  __return_storage_ptr__->Flags = '\0';
  __return_storage_ptr__->Size = -1;
  __return_storage_ptr__->Alignment = -1;
  __return_storage_ptr__->RegisteredTypeDefIndex = -1;
  __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
  bVar2 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_res8,UserFacing);
  if (!bVar2) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFQuatDef @ 1490468d0

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFQuatDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::QuatDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeHelper::QuatDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeHelper::QuatDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeHelper::QuatDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeHelper::QuatDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeHelper::QuatDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetFRotatorDef @ 149046950

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFRotatorDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  UPackage *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  int *piVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10;
  TStringView<wchar_t> local_18;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.Size = 0x13;
      local_18.DataPtr = L"/Script/CoreUObject";
      pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
      CoreUObjectPkg = (UPackage *)StaticFindObjectChecked(pUVar3,(UObject *)0x0,&local_18,None);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    pUVar1 = CoreUObjectPkg;
    if (::_TSS1 == -1) {
      local_18.DataPtr = L"Rotator";
      local_18.Size = 7;
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      RotatorStruct =
           (UScriptStruct *)StaticFindObjectChecked(pUVar3,(UObject *)pUVar1,&local_18,None);
      _Init_thread_footer(&::_TSS1);
    }
  }
  local_res8 = RotatorStruct;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)RotatorStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  __return_storage_ptr__->UnderlyingType = 2;
  __return_storage_ptr__->Flags = '\0';
  __return_storage_ptr__->Size = -1;
  __return_storage_ptr__->Alignment = -1;
  __return_storage_ptr__->RegisteredTypeDefIndex = -1;
  __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
  bVar2 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_res8,UserFacing);
  if (!bVar2) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFVector2DDef @ 149046af0

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFVector2DDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::Vector2DDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeHelper::Vector2DDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeHelper::Vector2DDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeHelper::Vector2DDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeHelper::Vector2DDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeHelper::Vector2DDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetFVector3fDef @ 149046b70

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFVector3fDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec3Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec3Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec3Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetFVector4Def @ 149046bf0

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFVector4Def(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::Vector4Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeHelper::Vector4Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeHelper::Vector4Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeHelper::Vector4Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeHelper::Vector4Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeHelper::Vector4Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetFVectorDef @ 149046c70

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::GetFVectorDef(FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::VectorDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeHelper::VectorDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeHelper::VectorDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeHelper::VectorDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeHelper::VectorDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeHelper::VectorDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1490483a0

UClass * __cdecl UNiagaraComponentRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponentRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraComponentRendererProperties,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponentRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraComponentRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 14904ab10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::GetUsedMaterials
          (UNiagaraComponentRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// HasPropertyBinding @ 14904c7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraComponentRendererProperties::HasPropertyBinding
          (UNiagaraComponentRendererProperties *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyBindings).ArrayNum;
  pFVar3 = (this->PropertyBindings).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x98;
  while( true ) {
    if ((this->PropertyBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraComponentPropertyBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(FName *)(pFVar3 + 0x20) == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x98;
  }
  return false;
}

// InitCDOPropertiesAfterModuleStartup @ 149057dd0

void __cdecl UNiagaraComponentRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  UClass *pUVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  UObject *pUVar9;
  FNiagaraTypeDefinition *pFVar10;
  FString *pFVar11;
  ulonglong uVar12;
  ForAnyElementType this;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 local_res8 [8];
  undefined1 local_78 [16];
  FNiagaraVariableAttributeBinding local_68;
  FNiagaraVariableAttributeBinding local_48;
  FNiagaraVariableAttributeBinding local_28;
  
  pUVar7 = StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar9 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar9 == (UObject *)0x0) {
    pFVar11 = GetTypeName<UNiagaraComponentRendererProperties>((FString *)&local_68);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar7 = StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar7->_padding_)) {
    pFVar11 = GetTypeName<UNiagaraComponentRendererProperties>((FString *)&local_68);
    pwVar13 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UObject>((FString *)local_78,pUVar9);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar14);
  }
  pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_68,(FNiagaraVariableBase *)&INiagaraModule::Particles_ComponentsEnabled
                     );
  uVar4 = (pFVar8->RootName).Number;
  FVar5.Value = (pFVar8->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar6 = (pFVar8->ParamMapVariable).Name.Number;
  *(uint *)&pUVar9[4].field_0xc = (pFVar8->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar9[4].field_0x10 = uVar4;
  *(uint *)&pUVar9[4].field_0x14 = FVar5.Value;
  *(uint *)&pUVar9[4].field_0x18 = uVar6;
  uVar3 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&pUVar9[4].field_0x1c = *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar9[4].field_0x24 = uVar3;
  pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_68,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  uVar4 = (pFVar8->RootName).Number;
  FVar5.Value = (pFVar8->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar6 = (pFVar8->ParamMapVariable).Name.Number;
  *(uint *)&pUVar9[5].field_0x4 = (pFVar8->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar9[5].field_0x8 = uVar4;
  *(uint *)&pUVar9[5].field_0xc = FVar5.Value;
  *(uint *)&pUVar9[5].field_0x10 = uVar6;
  uVar3 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&pUVar9[5].field_0x14 = *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar9[5].field_0x1c = uVar3;
  iVar2 = ComponentRendererPropertiesToDeferredInit.ArrayNum;
  uVar12 = (ulonglong)ComponentRendererPropertiesToDeferredInit.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)
           (ComponentRendererPropertiesToDeferredInit.AllocatorInstance.Data + uVar12 * 8);
  this = ComponentRendererPropertiesToDeferredInit.AllocatorInstance;
  do {
    if ((int)uVar12 != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraComponentRendererProperties,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this.Data == pFVar1) {
      return;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    if (pUVar9 != (UObject *)0x0) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar9[4].field_0x20 == 0) {
LAB_149057eef:
        pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                           (&local_48,
                            (FNiagaraVariableBase *)&INiagaraModule::Particles_ComponentsEnabled);
        local_78._0_8_ = pFVar8->RootName;
        local_78._8_8_ = (pFVar8->ParamMapVariable).Name;
        local_68.RootName = *(FName *)&(pFVar8->ParamMapVariable).TypeDefHandle;
        local_68.ParamMapVariable.Name = *(FName *)&(pFVar8->DataSetName).Number;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        *(undefined8 *)&pUVar9[4].field_0xc = local_78._0_8_;
        *(undefined8 *)&pUVar9[4].field_0x14 = local_78._8_8_;
        *(uint *)&pUVar9[4].field_0x1c = local_68.RootName.ComparisonIndex.Value;
        *(uint *)&pUVar9[4].field_0x20 = local_68.RootName.Number;
        *(FName *)&pUVar9[4].field_0x24 = local_68.ParamMapVariable.Name;
      }
      else {
        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar9[4].field_0x1c);
        if ((pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_149057eef;
      }
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar9[5].field_0x18 != 0) {
        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar9[5].field_0x14);
        if ((pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_149057f97;
      }
      pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag
                         );
      local_68.RootName = pFVar8->RootName;
      local_68.ParamMapVariable.Name = (pFVar8->ParamMapVariable).Name;
      local_78._0_8_ = *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      local_78._8_8_ = *(undefined8 *)&(pFVar8->DataSetName).Number;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar9[5].field_0x4 = local_68.RootName.ComparisonIndex.Value;
      *(uint *)&pUVar9[5].field_0x8 = local_68.RootName.Number;
      *(uint *)&pUVar9[5].field_0xc = local_68.ParamMapVariable.Name.ComparisonIndex.Value;
      *(uint *)&pUVar9[5].field_0x10 = local_68.ParamMapVariable.Name.Number;
      *(undefined8 *)&pUVar9[5].field_0x14 = local_78._0_8_;
      *(undefined8 *)&pUVar9[5].field_0x1c = local_78._8_8_;
    }
LAB_149057f97:
    uVar12 = (ulonglong)(uint)ComponentRendererPropertiesToDeferredInit.ArrayNum;
    this.Data = this.Data + 8;
  } while( true );
}

// IsConvertible @ 1490592f0

bool __cdecl
UNiagaraComponentRendererProperties::IsConvertible
          (FNiagaraTypeDefinition *param_1,FNiagaraTypeDefinition *param_2)

{
  UObject *pUVar1;
  uchar uVar2;
  FNiagaraTypeDefinition *pFVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  UStruct *pUVar5;
  UStruct *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  TObjectPtr<UObject>_u_0 TVar9;
  bool bVar10;
  TObjectPtr<UObject>_u_0 local_38;
  ushort local_30;
  uchar local_2e;
  short local_2c;
  short local_2a;
  int local_28;
  uint local_24;
  
  pUVar1 = (param_2->ClassStructOrEnum).field0_0x0.DebugPtr;
  TVar8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  if (((TVar8.DebugPtr == pUVar1) && (param_1->UnderlyingType == param_2->UnderlyingType)) &&
     (param_1->Flags == param_2->Flags)) {
LAB_1490597d0:
    bVar10 = true;
  }
  else {
    TVar9.DebugPtr = (UObject *)0x0;
    if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
          FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::ColorDef.Flags)) {
      TVar8 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
      if ((param_2->UnderlyingType != 3) &&
         (TVar8.DebugPtr = TVar9.DebugPtr, pUVar1 != (UObject *)0x0)) {
        pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)param_2,pUVar7);
        if (bVar10) {
          TVar8.DebugPtr = (param_2->ClassStructOrEnum).field0_0x0.DebugPtr;
        }
      }
      pFVar3 = GetFColorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      TVar4 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
      if ((pFVar3->UnderlyingType != 3) &&
         (TVar4.DebugPtr = TVar9.DebugPtr,
         (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
        pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar3,pUVar7);
        if (bVar10) {
          TVar4.DebugPtr = (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
        }
      }
      if (TVar8.DebugPtr == TVar4.DebugPtr) goto LAB_1490597d0;
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
      pFVar3 = GetFColorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar6 == pUVar5) goto LAB_1490597d0;
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
      pFVar3 = GetFRotatorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar6 == pUVar5) goto LAB_1490597d0;
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
      local_38 = FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0);
      }
      local_2e = FNiagaraTypeHelper::Vector2DDef.Flags;
      local_30 = FNiagaraTypeHelper::Vector2DDef.UnderlyingType;
      local_2c = FNiagaraTypeHelper::Vector2DDef.Size;
      local_2a = FNiagaraTypeHelper::Vector2DDef.Alignment;
      local_28 = FNiagaraTypeHelper::Vector2DDef.RegisteredTypeDefIndex;
      local_24 = FNiagaraTypeHelper::Vector2DDef.UnderlyingTypePathNameHash;
      TVar8 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
      if (FNiagaraTypeHelper::Vector2DDef.UnderlyingType != 3) {
        if (local_38.DebugPtr != (UObject *)0x0) {
          pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
          bVar10 = FObjectPtr::IsA(&local_38.ObjectPtr,pUVar7);
          TVar8 = local_38;
          if (bVar10) goto LAB_149059536;
        }
        TVar8.DebugPtr = TVar9.DebugPtr;
      }
LAB_149059536:
      pUVar5 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar5 == (UStruct *)TVar8.DebugPtr) goto LAB_1490597d0;
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
      pFVar3 = GetFVectorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar6 == pUVar5) goto LAB_1490597d0;
    }
    uVar2 = FNiagaraTypeDefinition::Vec4Def.Flags;
    if ((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
        FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) {
      if ((param_1->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType) &&
         (param_1->Flags == uVar2)) {
        pFVar3 = GetFVector4Def((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
        pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
        pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
        if (pUVar6 == pUVar5) goto LAB_1490597d0;
        uVar2 = FNiagaraTypeDefinition::Vec4Def.Flags;
      }
      if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
            FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
          (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
         (param_1->Flags == uVar2)) {
        pFVar3 = GetFColorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
        pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
        pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
        if (pUVar6 == pUVar5) goto LAB_1490597d0;
      }
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
      pFVar3 = GetFQuatDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar6 == pUVar5) goto LAB_1490597d0;
    }
    if ((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) {
      if ((param_1->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType) &&
         (param_1->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
        pFVar3 = GetFVectorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
        pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
        pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
        if (pUVar6 == pUVar5) goto LAB_1490597d0;
      }
      if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
            FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
          (param_1->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
         (param_1->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
        local_38 = FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0);
        }
        local_2e = FNiagaraTypeDefinition::Vec3Def.Flags;
        local_30 = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
        local_2c = FNiagaraTypeDefinition::Vec3Def.Size;
        local_2a = FNiagaraTypeDefinition::Vec3Def.Alignment;
        local_28 = FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
        local_24 = FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
        TVar8 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
        if ((FNiagaraTypeDefinition::Vec3Def.UnderlyingType != 3) &&
           (TVar8.DebugPtr = TVar9.DebugPtr, local_38.DebugPtr != (UObject *)0x0)) {
          pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
          bVar10 = FObjectPtr::IsA(&local_38.ObjectPtr,pUVar7);
          if (bVar10) {
            TVar8 = local_38;
          }
        }
        pUVar5 = FNiagaraTypeDefinition::GetStruct(param_2);
        if (pUVar5 == (UStruct *)TVar8.DebugPtr) goto LAB_1490597d0;
      }
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
      pFVar3 = GetDoubleDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      if (pUVar6 == pUVar5) goto LAB_1490597d0;
    }
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
      pFVar3 = GetFRotatorDef((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
      pUVar5 = FNiagaraTypeDefinition::GetStruct(pFVar3);
      pUVar6 = FNiagaraTypeDefinition::GetStruct(param_2);
      bVar10 = pUVar6 == pUVar5;
    }
    else {
      bVar10 = false;
    }
  }
  return bVar10;
}

// IsSimTargetSupported @ 14905ac80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraComponentRendererProperties::IsSimTargetSupported
          (UNiagaraComponentRendererProperties *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// NeedsSystemCompletion @ 14905bd40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraComponentRendererProperties::NeedsSystemCompletion
          (UNiagaraComponentRendererProperties *this)

{
  return true;
}

// NeedsSystemPostTick @ 14905bd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraComponentRendererProperties::NeedsSystemPostTick(UNiagaraComponentRendererProperties *this)

{
  return true;
}

// PostDuplicate @ 14905dc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::PostDuplicate
          (UNiagaraComponentRendererProperties *this,bool param_1)

{
  UClass *pUVar1;
  USceneComponent *pUVar2;
  
  pUVar2 = (this->TemplateComponent).field0_0x0.DebugPtr;
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar2 = (USceneComponent *)
           DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,(UObject *)this,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TemplateComponent).field0_0x0.DebugPtr = pUVar2;
  return;
}

// PostInitProperties @ 14905de30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::PostInitProperties(UNiagaraComponentRendererProperties *this)

{
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  bool bVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  longlong lVar8;
  UNiagaraComponentRendererProperties *local_res8;
  FName local_res10;
  FWeakObjectPtr local_58;
  FNiagaraVariableAttributeBinding local_50;
  FNiagaraVariableAttributeBinding local_30;
  
  UNiagaraRendererProperties::PostInitProperties((UNiagaraRendererProperties *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_res10,"Niagara");
    bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
    if (!bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res8);
      if (((ComponentRendererPropertiesToDeferredInit.AllocatorInstance.Data <= &local_58) &&
          (&local_58 <
           (FWeakObjectPtr *)
           (ComponentRendererPropertiesToDeferredInit.AllocatorInstance.Data +
           (longlong)ComponentRendererPropertiesToDeferredInit.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (ComponentRendererPropertiesToDeferredInit.ArrayNum ==
          ComponentRendererPropertiesToDeferredInit.ArrayMax) {
        ComponentRendererPropertiesToDeferredInit.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&ComponentRendererPropertiesToDeferredInit.AllocatorInstance,
                        &ComponentRendererPropertiesToDeferredInit.ArrayMax);
      }
      lVar8 = (longlong)ComponentRendererPropertiesToDeferredInit.ArrayNum;
      ComponentRendererPropertiesToDeferredInit.ArrayNum =
           ComponentRendererPropertiesToDeferredInit.ArrayNum + 1;
      *(FWeakObjectPtr *)
       (ComponentRendererPropertiesToDeferredInit.AllocatorInstance.Data + lVar8 * 8) = local_58;
      return;
    }
    if (((this->EnabledBinding).DataSetName == (FName)0x0) ||
       (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle),
       (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_50,
                          (FNiagaraVariableBase *)&INiagaraModule::Particles_ComponentsEnabled);
      FVar2 = (pFVar7->ParamMapVariable).Name;
      (this->EnabledBinding).RootName = pFVar7->RootName;
      (this->EnabledBinding).ParamMapVariable.Name = FVar2;
      uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
      *(undefined8 *)&(this->EnabledBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->EnabledBinding).DataSetName.Number = uVar3;
    }
    if (((this->RendererVisibilityTagBinding).DataSetName == (FName)0x0) ||
       (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle),
       (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag
                         );
      FVar2 = (pFVar7->ParamMapVariable).Name;
      (this->RendererVisibilityTagBinding).RootName = pFVar7->RootName;
      (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar2;
      uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
      *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar3;
    }
  }
  return;
}

// PostLoad @ 14905e850

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::PostLoad(UNiagaraComponentRendererProperties *this)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  FName _Src;
  code *pcVar4;
  TObjectPtr<UObject> TVar5;
  ushort uVar6;
  uchar uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  FNiagaraVariableAttributeBinding *pFVar11;
  bool bVar12;
  FNiagaraTypeDefinition *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uchar *puVar16;
  size_t _Size;
  FName *pFVar17;
  FNiagaraVariableAttributeBinding *this_00;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  FNiagaraTypeDefinitionHandle local_res20 [2];
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  FName local_88;
  FNiagaraTypeDefinitionHandle local_80 [2];
  void *local_78;
  undefined8 local_70;
  FNiagaraVariableAttributeBinding *local_68;
  FVersionedNiagaraEmitterBase local_60;
  
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  if ((FNiagaraConstants::OldPositionTypes.ArrayNum == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OldPositionTypes.Num() != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                          ,0x2c8,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = (this->PropertyBindings).ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  this_00 = (FNiagaraVariableAttributeBinding *)(this->PropertyBindings).AllocatorInstance.Data;
  puVar16 = (uchar *)((longlong)&this_00[1].ParamMapVariable.TypeDefHandle.RegisteredTypeIndex + 2);
  local_68 = (FNiagaraVariableAttributeBinding *)((longlong)this_00 + uVar14 * 0x98);
  do {
    pFVar11 = local_68;
    if ((this->PropertyBindings).ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<FNiagaraComponentPropertyBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    iVar10 = FNiagaraConstants::OldPositionTypes.ArrayNum;
    if (this_00 == pFVar11) {
                    /* WARNING: Could not recover jumptable at 0x00014905eafa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x350))(this,0);
      return;
    }
    pFVar17 = (FName *)(FNiagaraConstants::OldPositionTypes.AllocatorInstance.Data +
                       (longlong)FNiagaraConstants::OldPositionTypes.ArrayNum * 0x20);
    FVar15.Data = FNiagaraConstants::OldPositionTypes.AllocatorInstance.Data;
    while( true ) {
      if (FNiagaraConstants::OldPositionTypes.ArrayNum != iVar10) {
        `TCheckedPointerIterator<FNiagaraVariable_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FName *)FVar15.Data == pFVar17) goto LAB_14905eac1;
      local_90 = (((FName *)((longlong)FVar15.Data + 0x18))->ComparisonIndex).Value;
      _Size = (size_t)(int)local_90;
      FVar1 = *(FName *)FVar15.Data;
      uVar3 = (((FName *)((longlong)FVar15.Data + 8))->ComparisonIndex).Value;
      _Src = *(FName *)((longlong)FVar15.Data + 0x10);
      local_98.Data = (FScriptContainerElement *)0x0;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_90,0,&local_98,local_90,&local_8c);
        memcpy(local_98.Data,(void *)_Src,_Size);
      }
      if ((*(FName *)(puVar16 + -0x2a) == FVar1) && (*(uint *)(puVar16 + -0x22) == uVar3)) break;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      FVar15.Data = FVar15.Data + 0x20;
    }
    local_88 = FVar1;
    local_80[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_80,&FNiagaraTypeDefinition::PositionDef);
    this_00->RootName = local_88;
    local_78 = (void *)0x0;
    local_70 = 0;
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve(local_80);
    local_res20[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_res20,pFVar13)
    ;
    *(int *)(puVar16 + -0x22) = local_res20[0].RegisteredTypeIndex;
    local_60.Emitter = (UNiagaraEmitterBase *)0x0;
    local_60.Version.A = 0;
    local_60.Version.B = 0;
    local_60.Version.C = 0;
    local_60.Version.D = 0;
    FNiagaraVariableAttributeBinding::SetValue(this_00,&local_88,&local_60,Particles);
    TVar5 = FNiagaraTypeHelper::VectorDef.ClassStructOrEnum;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0)
      ;
    }
    iVar10 = FNiagaraTypeHelper::VectorDef.RegisteredTypeDefIndex;
    sVar9 = FNiagaraTypeHelper::VectorDef.Alignment;
    sVar8 = FNiagaraTypeHelper::VectorDef.Size;
    uVar7 = FNiagaraTypeHelper::VectorDef.Flags;
    uVar6 = FNiagaraTypeHelper::VectorDef.UnderlyingType;
    local_res10[0] = FNiagaraTypeHelper::VectorDef.UnderlyingTypePathNameHash;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.field0_0x0 != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar5.field0_0x0);
    }
    (((TObjectPtr<UObject>_u_0 *)(puVar16 + -10))->ObjectPtr).field0_0x0 =
         (FObjectPtr_u_0)TVar5.field0_0x0;
    *(uint *)(puVar16 + 10) = local_res10[0];
    *(ushort *)(puVar16 + -2) = uVar6;
    *puVar16 = uVar7;
    *(short *)(puVar16 + 2) = sVar8;
    *(short *)(puVar16 + 4) = sVar9;
    *(int *)(puVar16 + 6) = iVar10;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
LAB_14905eac1:
    this_00 = (FNiagaraVariableAttributeBinding *)&this_00[4].DataSetName.Number;
    puVar16 = puVar16 + 0x98;
    uVar14 = (ulonglong)uVar2;
  } while( true );
}

// StaticRegisterNativesUNiagaraComponentRendererProperties @ 14906a510

void __cdecl
UNiagaraComponentRendererProperties::StaticRegisterNativesUNiagaraComponentRendererProperties(void)

{
  return;
}

// ToNiagaraType @ 14906c250

FNiagaraTypeDefinition * __cdecl
UNiagaraComponentRendererProperties::ToNiagaraType
          (FNiagaraTypeDefinition *__return_storage_ptr__,FProperty *param_1)

{
  FFieldClass *pFVar1;
  ulonglong uVar2;
  bool bVar3;
  FNameEntryId FVar4;
  FFieldClass *pFVar5;
  FFieldClass *pFVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  FName *pFVar7;
  UScriptStruct *pUVar8;
  bool bVar9;
  FName local_res10;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar5 = FBoolProperty::StaticClass();
  pFVar6 = pFVar1;
  if (pFVar5->Id == CASTCLASS_None) {
    for (; pFVar6 != (FFieldClass *)0x0; pFVar6 = pFVar6->SuperClass) {
      if (pFVar6 == pFVar5) {
        bVar9 = true;
        goto LAB_14906c2b0;
      }
    }
    bVar9 = false;
  }
  else {
    bVar9 = (pFVar1->CastFlags & pFVar5->Id) != CASTCLASS_None;
  }
LAB_14906c2b0:
  if (bVar9) {
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0);
    }
    __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::BoolDef.UnderlyingType;
    __return_storage_ptr__->Flags = FNiagaraTypeDefinition::BoolDef.Flags;
    __return_storage_ptr__->Size = FNiagaraTypeDefinition::BoolDef.Size;
    __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::BoolDef.Alignment;
    __return_storage_ptr__->RegisteredTypeDefIndex =
         FNiagaraTypeDefinition::BoolDef.RegisteredTypeDefIndex;
    __return_storage_ptr__->UnderlyingTypePathNameHash =
         FNiagaraTypeDefinition::BoolDef.UnderlyingTypePathNameHash;
  }
  else {
    pFVar5 = FIntProperty::StaticClass();
    bVar9 = false;
    pFVar6 = pFVar1;
    if (pFVar5->Id == CASTCLASS_None) {
      for (; bVar3 = bVar9, pFVar6 != (FFieldClass *)0x0; pFVar6 = pFVar6->SuperClass) {
        if (pFVar6 == pFVar5) {
          bVar3 = true;
          break;
        }
      }
    }
    else {
      bVar3 = (pFVar1->CastFlags & pFVar5->Id) != CASTCLASS_None;
    }
    if (bVar3) {
      (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0);
      }
      __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::IntDef.UnderlyingType;
      __return_storage_ptr__->Flags = FNiagaraTypeDefinition::IntDef.Flags;
      __return_storage_ptr__->Size = FNiagaraTypeDefinition::IntDef.Size;
      __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::IntDef.Alignment;
      __return_storage_ptr__->RegisteredTypeDefIndex =
           FNiagaraTypeDefinition::IntDef.RegisteredTypeDefIndex;
      __return_storage_ptr__->UnderlyingTypePathNameHash =
           FNiagaraTypeDefinition::IntDef.UnderlyingTypePathNameHash;
    }
    else {
      pFVar5 = FFloatProperty::StaticClass();
      pFVar6 = pFVar1;
      if (pFVar5->Id == CASTCLASS_None) {
        for (; bVar3 = bVar9, pFVar6 != (FFieldClass *)0x0; pFVar6 = pFVar6->SuperClass) {
          if (pFVar6 == pFVar5) {
            bVar3 = true;
            break;
          }
        }
      }
      else {
        bVar3 = (pFVar1->CastFlags & pFVar5->Id) != CASTCLASS_None;
      }
      if (bVar3) {
        FNiagaraTypeDefinition::FNiagaraTypeDefinition
                  (__return_storage_ptr__,&FNiagaraTypeDefinition::FloatDef);
      }
      else {
        pFVar5 = FDoubleProperty::StaticClass();
        pFVar6 = pFVar1;
        if (pFVar5->Id == CASTCLASS_None) {
          for (; bVar3 = bVar9, pFVar6 != (FFieldClass *)0x0; pFVar6 = pFVar6->SuperClass) {
            if (pFVar6 == pFVar5) {
              bVar3 = true;
              break;
            }
          }
        }
        else {
          bVar3 = (pFVar1->CastFlags & pFVar5->Id) != CASTCLASS_None;
        }
        if (bVar3) {
          GetDoubleDef(__return_storage_ptr__);
        }
        else {
          pFVar6 = FStructProperty::StaticClass();
          if (pFVar6->Id == CASTCLASS_None) {
            for (; (bVar3 = bVar9, pFVar1 != (FFieldClass *)0x0 && (bVar3 = true, pFVar1 != pFVar6))
                ; pFVar1 = pFVar1->SuperClass) {
            }
          }
          else {
            bVar3 = (pFVar1->CastFlags & pFVar6->Id) != CASTCLASS_None;
          }
          if ((bVar3) && (param_1[1]._padding_ != 0)) {
            uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
            FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
            if ((uVar2 == *(uint *)CONCAT44(extraout_var,FVar4.Value)) ||
               (uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
               FVar4 = FNameEntryId::FromValidEName((EName)&local_res10),
               uVar2 == *(uint *)CONCAT44(extraout_var_00,FVar4.Value))) {
              GetFVector2DDef(__return_storage_ptr__);
            }
            else {
              uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
              FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
              if ((uVar2 == *(uint *)CONCAT44(extraout_var_01,FVar4.Value)) ||
                 (uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
                 FVar4 = FNameEntryId::FromValidEName((EName)&local_res10),
                 uVar2 == *(uint *)CONCAT44(extraout_var_02,FVar4.Value))) {
                GetFVectorDef(__return_storage_ptr__);
              }
              else {
                uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
                FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
                if ((uVar2 == *(uint *)CONCAT44(extraout_var_03,FVar4.Value)) ||
                   (uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
                   FVar4 = FNameEntryId::FromValidEName((EName)&local_res10),
                   uVar2 == *(uint *)CONCAT44(extraout_var_04,FVar4.Value))) {
                  GetFVector4Def(__return_storage_ptr__);
                }
                else {
                  uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
                  FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
                  if ((uVar2 == *(uint *)CONCAT44(extraout_var_05,FVar4.Value)) ||
                     (uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
                     FVar4 = FNameEntryId::FromValidEName((EName)&local_res10),
                     uVar2 == *(uint *)CONCAT44(extraout_var_06,FVar4.Value))) {
                    GetFQuatDef(__return_storage_ptr__);
                  }
                  else {
                    pFVar7 = ::FName::FName(&local_res10,"NiagaraPosition");
                    pUVar8 = (UScriptStruct *)param_1[1]._padding_;
                    if ((FName)((UScriptStruct *)param_1[1]._padding_)->_padding_ == *pFVar7) {
                      pUVar8 = FNiagaraTypeDefinition::PositionStruct;
                    }
                    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,pUVar8);
                  }
                }
              }
            }
          }
          else {
            (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)0x0;
            __return_storage_ptr__->UnderlyingType = 0;
            __return_storage_ptr__->Flags = '\0';
            __return_storage_ptr__->Size = -1;
            __return_storage_ptr__->Alignment = -1;
            __return_storage_ptr__->RegisteredTypeDefIndex = -1;
            __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// UpdateSetterFunctions @ 14906ecf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::UpdateSetterFunctions
          (UNiagaraComponentRendererProperties *this)

{
  UFunction **ppUVar1;
  TMap<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>_>
  *this_00;
  undefined1 *puVar2;
  FName FVar3;
  FProperty *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UFunction *pUVar8;
  FName *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  FNiagaraPropertySetter *pFVar14;
  longlong lVar15;
  FNiagaraPropertySetter *pFVar16;
  ForAnyElementType FVar17;
  UFunction **ppUVar18;
  UFunction *pUVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  TPairInitializer<FName_const_&,FNiagaraPropertySetter_const_&> local_res18;
  TObjectPtr<UObject>_u_0 local_c0;
  ushort local_b8;
  uchar local_b6;
  FString local_b0;
  UFunction *local_a0;
  undefined1 local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FNiagaraPropertySetter *local_60;
  UFunction **local_58;
  FName local_50 [2];
  
  this_00 = &this->SetterFunctionMapping;
  bVar5 = 1 < *(int *)&(this->SetterFunctionMapping).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->SetterFunctionMapping).field_0xc;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x34 = 0;
  iVar7 = *(int *)&(this->SetterFunctionMapping).field_0x2c;
  *(undefined4 *)&(this->SetterFunctionMapping).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->SetterFunctionMapping).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SetterFunctionMapping).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->SetterFunctionMapping).field_0x48 = 1;
    TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_res10 = (this->PropertyBindings).ArrayNum;
  uVar11 = (ulonglong)(int)local_res10;
  pFVar16 = (FNiagaraPropertySetter *)(this->PropertyBindings).AllocatorInstance.Data;
  pFVar14 = (FNiagaraPropertySetter *)((longlong)pFVar16 + uVar11 * 0x98);
  local_res18.Value = pFVar14;
  do {
    if ((this->PropertyBindings).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FNiagaraComponentPropertyBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar14) {
      return;
    }
    if ((this->TemplateComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
      pUVar8 = pFVar16[2].Function;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)pUVar8);
      if (*(int *)&(this->SetterFunctionMapping).field_0x8 !=
          *(int *)&(this->SetterFunctionMapping).field_0x34) {
        puVar2 = *(undefined1 **)&(this->SetterFunctionMapping).field_0x40;
        puVar13 = &(this->SetterFunctionMapping).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar13 = puVar2;
        }
        iVar7 = *(int *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(this->SetterFunctionMapping).field_0x48 - 1U &
                        (int)((ulonglong)pUVar8 >> 0x20) + uVar6) * 4);
        if (iVar7 != -1) {
          do {
            pFVar14 = local_res18.Value;
            if (*(UFunction **)((longlong)iVar7 * 0x20 + *(longlong *)&this->SetterFunctionMapping)
                == pUVar8) goto LAB_14906f0c4;
            iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 +
                            *(longlong *)&this->SetterFunctionMapping);
          } while (iVar7 != -1);
        }
      }
      pUVar8 = (UFunction *)0x0;
      if (((FName)pFVar16[4].Function == (FName)0x0) ||
         (pUVar8 = UObject::FindFunction
                             ((UObject *)(this->TemplateComponent).field0_0x0.DebugPtr,
                              (FName)pFVar16[4].Function), pUVar8 == (UFunction *)0x0)) {
        ::FName::ToString((FName *)(pFVar16 + 2),&local_70);
        if (((TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&pFVar16[2].bIgnoreConversion ==
             FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) &&
           ((*(ushort *)&pFVar16[3].Function == FNiagaraTypeDefinition::BoolDef.UnderlyingType &&
            (*(uchar *)((longlong)&pFVar16[3].Function + 2) == FNiagaraTypeDefinition::BoolDef.Flags
            )))) {
          ::FString::FString(&local_90,"b");
          iVar7 = local_90.Data.ArrayNum;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (iVar7 != 0) {
            FVar17.Data = local_90.Data.AllocatorInstance.Data;
          }
          pUVar19 = (UFunction *)(ulonglong)(iVar7 - 1);
          if (iVar7 == 0) {
            pUVar19 = (UFunction *)0x0;
          }
          ::FString::RemoveFromStart(&local_70,(wchar_t *)FVar17.Data,(int)pUVar19,CaseSensitive);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FString::FString((FString *)&local_c0.ObjectPtr,"Set");
          ::FString::FString(&local_b0,"K2_Set");
          SetterPrefixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          SetterPrefixes.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,2,0,&SetterPrefixes.AllocatorInstance,2,&SetterPrefixes.ArrayMax);
          ConstructItems<FString,FString,int>
                    (SetterPrefixes.AllocatorInstance.Data,(FString *)&local_c0.ObjectPtr,2);
          ppUVar18 = &local_a0;
          lVar15 = 2;
          do {
            ppUVar1 = ppUVar18 + -2;
            ppUVar18 = ppUVar18 + -2;
            lVar15 = lVar15 + -1;
            if (*ppUVar1 != (UFunction *)0x0) {
              FMemory::Free(*ppUVar1);
            }
          } while (lVar15 != 0);
          atexit(`UNiagaraComponentRendererProperties::UpdateSetterFunctions'::__l15::
                 _dynamic_atexit_destructor_for__SetterPrefixes__);
          _Init_thread_footer(&::_TSS1);
        }
        iVar7 = SetterPrefixes.ArrayNum;
        uVar11 = (ulonglong)SetterPrefixes.ArrayNum;
        pFVar20 = SetterPrefixes.AllocatorInstance.Data + uVar11 * 0x10;
        FVar17.Data = SetterPrefixes.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar7) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar17.Data == pFVar20) break;
          ::FString::ConcatFF(&local_80,(FString *)FVar17.Data,&local_70);
          iVar12 = local_80.Data.ArrayNum + -1;
          if (local_80.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          pFVar9 = ::FName::FName(local_50,iVar12,(wchar_t *)local_80.Data.AllocatorInstance.Data,
                                  FNAME_Find);
          FVar3 = *pFVar9;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if ((FVar3 != (FName)0x0) &&
             (pUVar8 = UObject::FindFunction
                                 ((UObject *)(this->TemplateComponent).field0_0x0.DebugPtr,FVar3),
             pUVar8 != (UFunction *)0x0)) break;
          uVar11 = (ulonglong)(uint)SetterPrefixes.ArrayNum;
          FVar17.Data = FVar17.Data + 0x10;
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      local_98 = 0;
      local_a0 = pUVar8;
      if (pUVar8 != (UFunction *)0x0) {
        bVar5 = true;
        for (pFVar4 = (FProperty *)pUVar8->_padding_; pFVar4 != (FProperty *)0x0;
            pFVar4 = pFVar4->PropertyLinkNext) {
          if ((((pFVar4->ElementSize * pFVar4->ArrayDim + pFVar4->Offset_Internal <=
                 (int)(uint)pUVar8->ParmsSize) && ((char)pFVar4->PropertyFlags < '\0')) &&
              ((pFVar4->PropertyFlags >> 10 & 1) == 0)) && (bVar5)) {
            ToNiagaraType((FNiagaraTypeDefinition *)&local_c0.ObjectPtr,pFVar4);
            if (((((local_c0.DebugPtr == *(UObject **)&pFVar16[2].bIgnoreConversion) &&
                  (local_b8 == *(ushort *)&pFVar16[3].Function)) &&
                 (local_b6 == *(uchar *)((longlong)&pFVar16[3].Function + 2))) ||
                ((pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                      ((FNiagaraTypeDefinitionHandle *)(pFVar16 + 1)),
                 local_c0.DebugPtr != (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ||
                 (local_b8 != pFVar10->UnderlyingType)))) || (local_b6 != pFVar10->Flags)) {
              if (((local_c0.DebugPtr != *(UObject **)&pFVar16[2].bIgnoreConversion) ||
                  (local_b8 != *(ushort *)&pFVar16[3].Function)) ||
                 (local_b6 != *(uchar *)((longlong)&pFVar16[3].Function + 2))) {
                local_a0 = (UFunction *)0x0;
              }
            }
            else {
              local_98 = 1;
            }
            bVar5 = false;
          }
        }
      }
      local_58 = &local_a0;
      local_60 = pFVar16 + 2;
      TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FNiagaraPropertySetter_const_&>_>
                ((TSet<TTuple<FName,FNiagaraPropertySetter>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>,FDefaultSetAllocator>
                  *)&this->SetterFunctionMapping,&local_res18,(bool *)&local_60);
      pFVar14 = local_res18.Value;
    }
LAB_14906f0c4:
    uVar11 = (ulonglong)local_res10;
    pFVar16 = (FNiagaraPropertySetter *)&pFVar16[9].bIgnoreConversion;
  } while( true );
}

// UpdateSourceModeDerivates @ 14906f980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::UpdateSourceModeDerivates
          (UNiagaraComponentRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
          bool param_2)

{
  int iVar1;
  FNiagaraVariableAttributeBinding *this_00;
  FNiagaraVariableAttributeBinding *pFVar2;
  undefined1 local_res20 [8];
  FVersionedNiagaraEmitterBase local_38;
  
  UNiagaraRendererProperties::GetOuterEmitterBase((UNiagaraRendererProperties *)this,&local_38);
  if (local_38.Emitter != (UNiagaraEmitterBase *)0x0) {
    FNiagaraVariableAttributeBinding::CacheValues(&this->EnabledBinding,&local_38,param_1);
    FNiagaraVariableAttributeBinding::CacheValues
              (&this->RendererVisibilityTagBinding,&local_38,param_1);
    iVar1 = (this->PropertyBindings).ArrayNum;
    this_00 = (FNiagaraVariableAttributeBinding *)(this->PropertyBindings).AllocatorInstance.Data;
    pFVar2 = (FNiagaraVariableAttributeBinding *)((longlong)this_00 + (longlong)iVar1 * 0x98);
    while( true ) {
      if ((this->PropertyBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraComponentPropertyBinding,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar2) break;
      FNiagaraVariableAttributeBinding::CacheValues(this_00,&local_38,param_1);
      this_00 = (FNiagaraVariableAttributeBinding *)&this_00[4].DataSetName.Number;
    }
  }
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,false);
  return;
}

// UpdateTemplateCoordinateSpace @ 14906fae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentRendererProperties::UpdateTemplateCoordinateSpace
          (UNiagaraComponentRendererProperties *this)

{
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  bool bVar2;
  FVersionedNiagaraEmitter local_28;
  
  if ((this->TemplateComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    this_00 = UNiagaraRendererProperties::GetOuterEmitter
                        ((UNiagaraRendererProperties *)this,&local_28);
    pFVar1 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
    if (pFVar1 == (FVersionedNiagaraEmitterData *)0x0) {
      bVar2 = true;
    }
    else {
      bVar2 = pFVar1->bLocalSpace == false;
    }
    USceneComponent::SetAbsolute((this->TemplateComponent).field0_0x0.DebugPtr,bVar2,bVar2,bVar2);
    return;
  }
  return;
}

