// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f0df70

UClass * __cdecl UEnvQueryContext_NavigationData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_NavigationData",
               &Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_NavigationData,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_NavigationData>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_NavigationData>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton;
}

// UEnvQueryContext_NavigationData @ 146f2a5c0

UEnvQueryContext_NavigationData * __thiscall
UEnvQueryContext_NavigationData::UEnvQueryContext_NavigationData
          (UEnvQueryContext_NavigationData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryContext_NavigationData__6B_;
  *(byte *)&(this->NavAgentProperties)._padding_ = (byte)(this->NavAgentProperties)._padding_ & 0xe0
  ;
  (this->NavAgentProperties).AgentRadius = -1.0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  return this;
}

// UEnvQueryContext_NavigationData @ 146f2a620

UEnvQueryContext_NavigationData * __thiscall
UEnvQueryContext_NavigationData::UEnvQueryContext_NavigationData
          (UEnvQueryContext_NavigationData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryContext_NavigationData__6B_;
  *(byte *)&(this->NavAgentProperties)._padding_ = (byte)(this->NavAgentProperties)._padding_ & 0xe0
  ;
  (this->NavAgentProperties).AgentRadius = -1.0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  return this;
}

// ~UEnvQueryContext_NavigationData @ 146f2e8d0

void __thiscall
UEnvQueryContext_NavigationData::~UEnvQueryContext_NavigationData
          (UEnvQueryContext_NavigationData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryContext_NavigationData__6B_;
  pvVar1 = *(void **)&(this->NavAgentProperties).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f57ce0

UClass * __cdecl UEnvQueryContext_NavigationData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_NavigationData",
               &Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_NavigationData,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_NavigationData>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_NavigationData>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton;
}

// ProvideContext @ 146f63f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UEnvQueryContext_NavigationData::ProvideContext
          (UEnvQueryContext_NavigationData *this,FEnvQueryInstance *param_1,
          FEnvQueryContextData *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar2 == 0) {
    return;
  }
  plVar5 = *(longlong **)(lVar2 + 0x1a0);
  if (plVar5 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f63fd8;
  }
  plVar5 = (longlong *)0x0;
LAB_146f63fd8:
  if ((plVar5 != (longlong *)0x0) &&
     (pUVar4 = (UObject *)(**(code **)(*plVar5 + 0x358))(plVar5,&this->NavAgentProperties),
     pUVar4 != (UObject *)0x0)) {
    pUVar3 = UEnvQueryItemType_Actor::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (param_2->ValueType).Class.field0_0x0.DebugPtr = pUVar3;
    param_2->NumValues = 1;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_2->RawData,8,Default);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    *(FWeakObjectPtr *)(param_2->RawData).AllocatorInstance.Data = local_res8;
  }
  return;
}

// StaticRegisterNativesUEnvQueryContext_NavigationData @ 146f76c70

void __cdecl
UEnvQueryContext_NavigationData::StaticRegisterNativesUEnvQueryContext_NavigationData(void)

{
  return;
}

