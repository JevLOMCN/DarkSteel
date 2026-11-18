// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// UNavigationSystemConfig @ 14737cd50

UNavigationSystemConfig * __thiscall
UNavigationSystemConfig::UNavigationSystemConfig
          (UNavigationSystemConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationSystemConfig__6B_;
  *(undefined8 *)&this->NavigationSystemClass = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x8 = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x10 = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x18 = 0;
  (this->DefaultAgentName).Number = 0;
  this->SupportedAgentsMask = (FNavAgentSelector_u_0)0x7fffffff;
  (this->DefaultAgentName).ComparisonIndex = 0;
  return this;
}

// UNavigationSystemConfig @ 14737cda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNavigationSystemConfig * __thiscall
UNavigationSystemConfig::UNavigationSystemConfig
          (UNavigationSystemConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationSystemConfig__6B_;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x0 = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x8 = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x10 = 0;
  *(undefined8 *)&(this->NavigationSystemClass).field_0x18 = 0;
  (this->DefaultAgentName).Number = 0;
  this->SupportedAgentsMask = (FNavAgentSelector_u_0)0x7fffffff;
  (this->DefaultAgentName).ComparisonIndex = 0;
  if (GEngine != (UEngine *)0x0) {
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&this->NavigationSystemClass,
               (FSoftObjectPath *)&GEngine->NavigationSystemClassName);
  }
  return this;
}

// ~UNavigationSystemConfig @ 14737dba0

void __thiscall UNavigationSystemConfig::~UNavigationSystemConfig(UNavigationSystemConfig *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNavigationSystemConfig__6B_;
  pvVar1 = *(void **)&(this->NavigationSystemClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateAndConfigureNavigationSystem @ 1473876f0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationSystemBase * __thiscall
UNavigationSystemConfig::CreateAndConfigureNavigationSystem
          (UNavigationSystemConfig *this,UWorld *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UNavigationSystemBase *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pUVar5 = FSoftClassPath::ResolveClass(&this->NavigationSystemClass);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_147387749;
LAB_147387777:
    if ((*(longlong *)&this->NavigationSystemClass != 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5269321841603772446>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\NavigationSystemConfig.cpp"
                           ,0x1e,
                           "NavSysClass != nullptr || NavigationSystemClass.IsValid() == false"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UNavigationSystemBase *)(*pcVar2)();
      return pUVar7;
    }
    if (pUVar5 == (UClass *)0x0) {
      return (UNavigationSystemBase *)0x0;
    }
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_147387777;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_147387749:
    pUVar6 = UNavigationSystemBase::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_147387777;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147387777;
  }
  pUVar6 = UNavigationSystemBase::StaticClass();
  if (pUVar6 == (UClass *)0x0) {
    return (UNavigationSystemBase *)0x0;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UNavigationSystemBase *)0x0;
  }
  pUVar6 = UNavigationSystemBase::StaticClass();
  if (pUVar6 == (UClass *)0x0) {
LAB_14738781a:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pUVar6 = pUVar5;
    if (!bVar3) goto LAB_14738781a;
  }
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar8 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = UNavigationSystemBase::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UNavigationSystemBase *)(*pcVar2)();
    return pUVar7;
  }
  cVar4 = (**(code **)(*(longlong *)pUVar8 + 0x338))(pUVar8,param_1);
  if (cVar4 == '\0') {
    return (UNavigationSystemBase *)0x0;
  }
  pUVar6 = UNavigationSystemBase::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1473878cb;
  }
  pUVar5 = (UClass *)0x0;
LAB_1473878cb:
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UNavigationSystemBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pUVar8 != (UObject *)0x0) {
    (**(code **)(*(longlong *)&pUVar8->field_0x0 + 0x2c0))(pUVar8,this);
  }
  return (UNavigationSystemBase *)pUVar8;
}

// GetDefaultConfigClass @ 14739adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<UNavigationSystemConfig> __cdecl UNavigationSystemConfig::GetDefaultConfigClass(void)

{
  TObjectPtr<UClass> in_RCX;
  UClass *pUVar1;
  
  pUVar1 = (UClass *)0x0;
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar1 = (GEngine->NavigationSystemConfigClass).Class.field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending)) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UNavigationSystemConfig>)in_RCX.field0_0x0;
}

// GetPrivateStaticClass @ 1473a0cb0

UClass * __cdecl UNavigationSystemConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemConfig",
               &Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton,
               StaticRegisterNativesUNavigationSystemConfig,0x58,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton;
}

// StaticRegisterNativesUNavigationSystemConfig @ 1473b8980

void __cdecl UNavigationSystemConfig::StaticRegisterNativesUNavigationSystemConfig(void)

{
  return;
}

