// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 22

// StaticClass @ 146f14b50

UClass * __cdecl AEQSTestingPawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSTestingPawn",
               &Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton,
               StaticRegisterNativesAEQSTestingPawn,0x720,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AEQSTestingPawn>,
               InternalVTableHelperCtorCaller<AEQSTestingPawn>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton;
}

// AEQSTestingPawn @ 146f285a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AEQSTestingPawn * __thiscall
AEQSTestingPawn::AEQSTestingPawn(AEQSTestingPawn *this,FVTableHelper *param_1)

{
  ACharacter::ACharacter((ACharacter *)this,param_1);
  (this->NavAgentProperties).AgentRadius = -1.0;
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7AEQSTestingPawn__6B_;
  *(byte *)&(this->NavAgentProperties)._padding_ = (byte)(this->NavAgentProperties)._padding_ & 0xe0
  ;
  (this->QueryTemplate).field0_0x0.DebugPtr = (UEnvQuery *)0x0;
  (this->QueryParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryParams).ArrayNum = 0;
  (this->QueryParams).ArrayMax = 0;
  (this->QueryConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryConfig).ArrayNum = 0;
  (this->QueryConfig).ArrayMax = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
  (this->QueryInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StepResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepResults).ArrayNum = 0;
  (this->StepResults).ArrayMax = 0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  return this;
}

// AEQSTestingPawn @ 146f28670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AEQSTestingPawn * __thiscall
AEQSTestingPawn::AEQSTestingPawn(AEQSTestingPawn *this,FObjectInitializer *param_1)

{
  FNavAgentProperties *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  ACharacter::ACharacter((ACharacter *)this,param_1);
  this->TimeLimitPerStep = -1.0;
  this_00 = &this->NavAgentProperties;
  (this->QueryTemplate).field0_0x0.DebugPtr = (UEnvQuery *)0x0;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xe0;
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7AEQSTestingPawn__6B_;
  (this->QueryParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryParams).ArrayNum = 0;
  (this->QueryParams).ArrayMax = 0;
  puVar2 = &this->field_0x6b4;
  this->bDrawLabels = 1;
  pvVar5 = ThreadLocalStoragePointer;
  this->bRunQueryOnSelectionChanged = 0;
  this->bReRunQueryOnlyOnFinishedMove = 1;
  this->bDrawFailedItems = 1;
  (this->QueryConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryConfig).ArrayNum = 0;
  (this->QueryConfig).ArrayMax = 0;
  this->StepToDebugDraw = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
  (this->QueryInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StepResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepResults).ArrayNum = 0;
  (this->StepResults).ArrayMax = 0;
  uVar6 = (ulonglong)_tls_index;
  (this->QueryingMode).Value = '\x03';
  (this->NavAgentProperties).AgentRadius = -1.0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"NoCollision");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(**(longlong **)&this->field_0x350 + 0x788))
            (*(longlong **)&this->field_0x350,CollisionProfileName,1);
  FNavAgentProperties::operator=(this_00,&FNavAgentProperties::DefaultProperties);
  this->field_0x32 = this->field_0x32 & 0xfd;
  this->field_0x32 = this->field_0x32 | 4;
  if (*(longlong *)&this->field_0x348 != 0) {
    *(undefined1 *)(*(longlong *)&this->field_0x348 + 0x558) = 0;
  }
  return this;
}

// ~AEQSTestingPawn @ 146f2e090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::~AEQSTestingPawn(AEQSTestingPawn *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7AEQSTestingPawn__6B_;
  DestructItems<FEnvQueryInstance,int>
            ((FEnvQueryInstance *)(this->StepResults).AllocatorInstance.Data,
             (this->StepResults).ArrayNum);
  pFVar1 = (this->StepResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryInstance).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->NavAgentProperties).PreferredNavData.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FAIDynamicParam,int>
            ((FAIDynamicParam *)(this->QueryConfig).AllocatorInstance.Data,
             (this->QueryConfig).ArrayNum);
  pFVar1 = (this->QueryConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueryParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x678 = &___7IEQSQueryResultSourceInterface__6B_;
  ACharacter::~ACharacter((ACharacter *)this);
  return;
}

// AddReferencedObjects @ 146f35030

void __cdecl AEQSTestingPawn::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  void *pvVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<AEQSTestingPawn>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    pvVar2 = *(void **)&param_1[0x2c].field_0x18;
    if (pvVar2 != (void *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar4 = Z_Construct_UPackage__Script_AIModule();
        Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstance,(UObject *)pUVar4,
                             L"EnvQueryInstance");
      }
      FReferenceCollector::AddPropertyReferencesWithStructARO
                (param_2,Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton,pvVar2,
                 param_1);
    }
    AActor::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar5 = GetTypeName<AEQSTestingPawn>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// GetHighlightRangePct @ 146f56350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AEQSTestingPawn::GetHighlightRangePct(AEQSTestingPawn *this)

{
  if (this->field_0x38 == '\x02') {
    return __real_3f400000;
  }
  if (this->field_0x38 == '\x01') {
    return __real_3f733333;
  }
  return __real_3f800000;
}

// GetNavAgentPropertiesRef @ 146f56fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavAgentProperties * __thiscall AEQSTestingPawn::GetNavAgentPropertiesRef(AEQSTestingPawn *this)

{
  return (FNavAgentProperties *)&this->field_0x400;
}

// GetPrivateStaticClass @ 146f574c0

UClass * __cdecl AEQSTestingPawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSTestingPawn",
               &Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton,
               StaticRegisterNativesAEQSTestingPawn,0x720,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AEQSTestingPawn>,
               InternalVTableHelperCtorCaller<AEQSTestingPawn>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton;
}

// GetQueryInstance @ 146f59950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryInstance * __thiscall AEQSTestingPawn::GetQueryInstance(AEQSTestingPawn *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FEnvQueryInstance *pFVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x34;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&this->field_0x98)) {
    uVar5 = 0;
    if ((int)uVar1 < *(int *)&this->field_0x98) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FEnvQueryInstance *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FEnvQueryInstance *)((longlong)(int)uVar1 * 0x1b8 + *(longlong *)&this->field_0x90);
  }
  return (FEnvQueryInstance *)0x0;
}

// GetQueryResult @ 146f59a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryResult * __thiscall AEQSTestingPawn::GetQueryResult(AEQSTestingPawn *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FEnvQueryResult *pFVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x34;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&this->field_0x98)) {
    uVar5 = 0;
    if ((int)uVar1 < *(int *)&this->field_0x98) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FEnvQueryResult *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FEnvQueryResult *)((longlong)(int)uVar1 * 0x1b8 + *(longlong *)&this->field_0x90);
  }
  return (FEnvQueryResult *)0x0;
}

// GetShouldDebugDrawLabels @ 146f5a340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AEQSTestingPawn::GetShouldDebugDrawLabels(AEQSTestingPawn *this)

{
  return (bool)(this->field_0x3c & 1);
}

// GetShouldDrawFailedItems @ 146f5a360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AEQSTestingPawn::GetShouldDrawFailedItems(AEQSTestingPawn *this)

{
  return (bool)((byte)(*(uint *)&this->field_0x3c >> 1) & 1);
}

// MakeOneStep @ 146f5d650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::MakeOneStep(AEQSTestingPawn *this)

{
  int *piVar1;
  TArray<FEnvQueryInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  UEnvQueryManager *this_00;
  code *pcVar4;
  FEnvQueryInstance *pFVar5;
  FEnvQueryInstance *pFVar6;
  bool bVar7;
  int iVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  UBlackboardComponent *pUVar11;
  TSharedPtr<FEnvQueryInstance,1> *pTVar12;
  longlong lVar13;
  TSharedPtr<FEnvQueryInstance,1> *pTVar14;
  UAISystemBase *pUVar15;
  FAIDynamicParam *pFVar16;
  FAIDynamicParam *pFVar17;
  undefined1 auStack_118 [32];
  FEnvQueryInstance *local_f8;
  FEnvQueryInstance *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined1 local_c7 [7];
  UClass *local_c0;
  TSharedPtr<FEnvQueryInstance,1> local_b8;
  TObjectPtr<UEnvQuery>_u_0 local_a8;
  AEQSTestingPawn *local_a0;
  undefined8 local_98;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_90;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar9 = AActor::GetWorld((AActor *)this);
  if (pUVar9 == (UWorld *)0x0) {
    return;
  }
  pUVar15 = (pUVar9->AISystem).field0_0x0.DebugPtr;
  if (pUVar15 != (UAISystemBase *)0x0) {
    pUVar10 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar10->_padding_)) goto LAB_146f5d6c0;
  }
  pUVar15 = (UAISystemBase *)0x0;
LAB_146f5d6c0:
  if ((pUVar15 != (UAISystemBase *)0x0) &&
     (this_00 = (UEnvQueryManager *)pUVar15[2].OnMatchStateSetHandle.ID,
     this_00 != (UEnvQueryManager *)0x0)) {
    if (((this->QueryInstance).Object == (FEnvQueryInstance *)0x0) &&
       ((this->QueryTemplate).field0_0x0.DebugPtr != (UEnvQuery *)0x0)) {
      pcVar4 = *(code **)(*(longlong *)this + 0x738);
      local_c0 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_c0);
      }
      pUVar11 = (UBlackboardComponent *)(*pcVar4)(this,&local_c0);
      local_a8 = (TObjectPtr<UEnvQuery>_u_0)(this->QueryTemplate).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_a8.DebugPtr != (UEnvQuery *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a8.DebugPtr);
      }
      local_a0 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      iVar8 = (this->QueryConfig).ArrayNum;
      pFVar16 = (FAIDynamicParam *)(this->QueryConfig).AllocatorInstance.Data;
      local_98 = 0;
      TStack_90._0_8_ = 0;
      TStack_90._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      TStack_90._48_8_ = _UNK_150631d98;
      TStack_90._8_8_ = 0;
      pFVar17 = pFVar16 + iVar8;
      TStack_90._32_8_ = 0;
      local_50 = (void *)0x0;
      local_48 = 0;
      while( true ) {
        if ((this->QueryConfig).ArrayNum != iVar8) {
          local_c8 = 0;
          `TCheckedPointerIterator<FAIDynamicParam,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_c8);
        }
        if (pFVar16 == pFVar17) break;
        uVar3 = (pFVar16->BBKey).SelectedKeyID;
        if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
           (local_f8 = (FEnvQueryInstance *)(longlong)(int)uVar3,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((short)uVar3 == -1) || (pUVar11 != (UBlackboardComponent *)0x0)) {
LAB_146f5d858:
          FEnvQueryRequest::SetDynamicParam((FEnvQueryRequest *)&local_a8.ObjectPtr,pFVar16,pUVar11)
          ;
        }
        else {
          local_c7[0] = 0;
          bVar7 = `AEQSTestingPawn::MakeOneStep'::__l13::<lambda_1>::operator()(local_c7);
          if (bVar7) goto LAB_146f5d858;
        }
        pFVar16 = pFVar16 + 1;
      }
      pTVar12 = UEnvQueryManager::PrepareQueryInstance
                          (this_00,&local_b8,(FEnvQueryRequest *)&local_a8.ObjectPtr,
                           (uint)(this->QueryingMode).Value);
      pTVar14 = &this->QueryInstance;
      if (pTVar14 != pTVar12) {
        pTVar14->Object = pTVar12->Object;
        pTVar12->Object = (FEnvQueryInstance *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->QueryInstance).SharedReferenceCount,&pTVar12->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      if (pTVar14->Object != (FEnvQueryInstance *)0x0) {
        UEnvQueryManager::RegisterExternalQuery(this_00,pTVar14);
      }
      local_48 = 0;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_90);
    }
    pTVar14 = &this->QueryInstance;
    if ((pTVar14->Object != (FEnvQueryInstance *)0x0) && ((int)pTVar14->Object->_padding_ == 0)) {
      FEnvQueryInstance::ExecuteOneStep(pTVar14->Object,(double)this->TimeLimitPerStep);
      pFVar5 = pTVar14->Object;
      pTVar2 = &this->StepResults;
      pFVar6 = (FEnvQueryInstance *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar5) &&
         (lVar13 = (longlong)(this->StepResults).ArrayMax, pFVar5 < pFVar6 + lVar13)) {
        local_e0 = (longlong)(this->StepResults).ArrayNum;
        local_d8 = 0x1b8;
        local_f8 = pFVar5;
        local_f0 = pFVar6;
        local_e8 = lVar13;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = (this->StepResults).ArrayNum;
      piVar1 = &(this->StepResults).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1b8,8,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->StepResults).ArrayNum = iVar8 + 1;
      FEnvQueryInstance::FEnvQueryInstance
                ((FEnvQueryInstance *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x1b8),
                 pFVar5);
      if ((pTVar14->Object == (FEnvQueryInstance *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)pTVar14->Object->_padding_ != 0) {
        this->StepToDebugDraw = (this->StepResults).ArrayNum + -1;
      }
    }
  }
  return;
}

// PostLoad @ 146f5f770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::PostLoad(AEQSTestingPawn *this)

{
  int *piVar1;
  byte *pbVar2;
  TArray<FEnvNamedValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  UWorld *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  UClass *local_res8;
  
  ACharacter::PostLoad((ACharacter *)this);
  pcVar5 = *(code **)(*(longlong *)this + 0x738);
  local_res8 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  lVar7 = (*pcVar5)(this,&local_res8);
  if (lVar7 != 0) {
    *(byte *)(lVar7 + 0x1a9) =
         (~((byte)*(undefined4 *)&this->field_0x6b4 & 0xf8) ^ *(byte *)(lVar7 + 0x1a9)) & 8 ^
         *(byte *)(lVar7 + 0x1a9);
  }
  pTVar3 = &this->QueryParams;
  iVar4 = (this->QueryParams).ArrayNum;
  if (0 < iVar4) {
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    pFVar9 = pFVar8 + (longlong)iVar4 * 0x10;
    while( true ) {
      if ((this->QueryParams).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FEnvNamedValue,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar8 == pFVar9) break;
      if (2 < (byte)pFVar8[8]) {
        pFVar8[8] = (FScriptContainerElement)0x0;
      }
      pFVar8 = pFVar8 + 0x10;
    }
    FAIDynamicParam::GenerateConfigurableParamsFromNamedValues
              ((UObject *)this,&this->QueryConfig,pTVar3);
    piVar1 = &(this->QueryParams).ArrayMax;
    (this->QueryParams).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    bVar6 = UWorld::IsGameWorld(this_00);
    if ((!bVar6) || (this->bTickDuringGame != 0)) {
      this->field_0x32 = this->field_0x32 | 2;
      return;
    }
  }
  this->field_0x32 = this->field_0x32 & 0xfd;
  if (*(longlong *)&this->field_0x348 != 0) {
    pbVar2 = (byte *)(*(longlong *)&this->field_0x348 + 0x42);
    *pbVar2 = *pbVar2 & 0xfd;
  }
  if (*(longlong *)&this->field_0x340 != 0) {
    pbVar2 = (byte *)(*(longlong *)&this->field_0x340 + 0x42);
    *pbVar2 = *pbVar2 & 0xfd;
  }
  return;
}

// Reset @ 146f67110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::Reset(AEQSTestingPawn *this)

{
  int *piVar1;
  int iVar2;
  FEnvQueryInstance *pFVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->QueryInstance != (TSharedPtr<FEnvQueryInstance,1> *)&local_18) {
    (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->QueryInstance).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->StepToDebugDraw = 0;
  piVar1 = &(this->StepResults).ArrayMax;
  pFVar3 = (FEnvQueryInstance *)(this->StepResults).AllocatorInstance.Data;
  iVar2 = (this->StepResults).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FEnvQueryInstance,int>(pFVar3,iVar2);
    (this->StepResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1b8,8,0,&(this->StepResults).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FEnvQueryInstance,int>(pFVar3,iVar2);
    (this->StepResults).ArrayNum = 0;
  }
  if (*(longlong *)&this->field_0x2f0 == 0) {
    (**(code **)(*(longlong *)this + 0x860))(this);
  }
  return;
}

// RunEQSQuery @ 146f67e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::RunEQSQuery(AEQSTestingPawn *this)

{
  FEnvQueryInstance *pFVar1;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    (**(code **)(*(longlong *)this + 0x6f8))();
    do {
      MakeOneStep(this);
      if (0.0 < this->TimeLimitPerStep) {
        return;
      }
      pFVar1 = (this->QueryInstance).Object;
      if (pFVar1 == (FEnvQueryInstance *)0x0) {
        return;
      }
    } while ((int)pFVar1->_padding_ == 0);
  }
  return;
}

// StaticRegisterNativesAEQSTestingPawn @ 146f76b60

void __cdecl AEQSTestingPawn::StaticRegisterNativesAEQSTestingPawn(void)

{
  return;
}

// TickActor @ 146f7a150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AEQSTestingPawn::TickActor
          (AEQSTestingPawn *this,float param_1,ELevelTick param_2,FActorTickFunction *param_3)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UAISystemBase *pUVar4;
  
  AActor::Tick((AActor *)this,param_1);
  if ((this->QueryTemplate).field0_0x0.DebugPtr != (UEnvQuery *)0x0) {
    if ((this->QueryInstance).Object != (FEnvQueryInstance *)0x0) goto LAB_146f7a227;
    pUVar2 = AActor::GetWorld((AActor *)this);
    if (pUVar2 == (UWorld *)0x0) goto LAB_146f7a21d;
    pUVar4 = (pUVar2->AISystem).field0_0x0.DebugPtr;
    if (pUVar4 == (UAISystemBase *)0x0) {
LAB_146f7a1bf:
      pUVar4 = (UAISystemBase *)0x0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_146f7a1bf;
    }
    if ((pUVar4 != (UAISystemBase *)0x0) && ((*(uint *)&this->field_0x8 >> 4 & 1) == 0)) {
      (**(code **)(*(longlong *)this + 0x6f8))(this);
      do {
        MakeOneStep(this);
        if ((0.0 < this->TimeLimitPerStep) ||
           ((this->QueryInstance).Object == (FEnvQueryInstance *)0x0)) break;
      } while ((int)((this->QueryInstance).Object)->_padding_ == 0);
    }
  }
LAB_146f7a21d:
  if ((this->QueryInstance).Object == (FEnvQueryInstance *)0x0) {
    return;
  }
LAB_146f7a227:
  if ((int)((this->QueryInstance).Object)->_padding_ != 0) {
    return;
  }
  MakeOneStep(this);
  return;
}

// UpdateDrawing @ 146f7cba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AEQSTestingPawn::UpdateDrawing(AEQSTestingPawn *this)

{
  return;
}

// _getUObject @ 146f7f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall AEQSTestingPawn::_getUObject(AEQSTestingPawn *this)

{
  return (UObject *)&this[-1].field_0x460;
}

// _getUObject`adjustor{952}' @ 146f7f380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   AEQSTestingPawn::_getUObject`adjustor{952}' (void)const __ptr64 */

UObject * __thiscall AEQSTestingPawn::_getUObject_adjustor_952__(AEQSTestingPawn *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AEQSTestingPawn *)&this[-1].field_0x368);
  return (UObject *)pUVar1;
}

// operator() @ 1504ff580

bool __thiscall `AEQSTestingPawn::MakeOneStep'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8812209143956897515>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8812209143956897515>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

