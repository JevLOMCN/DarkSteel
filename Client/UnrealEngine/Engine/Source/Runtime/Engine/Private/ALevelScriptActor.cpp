// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 147e42480

UClass * __cdecl ALevelScriptActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelScriptActor",
               &Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton,
               StaticRegisterNativesALevelScriptActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelScriptActor>,
               InternalVTableHelperCtorCaller<ALevelScriptActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton;
}

// ALevelScriptActor @ 147e54450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelScriptActor * __thiscall
ALevelScriptActor::ALevelScriptActor(ALevelScriptActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
  return this;
}

// ALevelScriptActor @ 147e54480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelScriptActor * __thiscall
ALevelScriptActor::ALevelScriptActor(ALevelScriptActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->bInputEnabled = 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~ALevelScriptActor @ 147e57110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelScriptActor::~ALevelScriptActor(ALevelScriptActor *this)

{
  this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// DisableInput @ 147e63dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALevelScriptActor::DisableInput(ALevelScriptActor *this,APlayerController *param_1)

{
  if ((param_1 != (APlayerController *)0x0) && (2 < (byte)LogLevel._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
    this->bInputEnabled = 0;
    return;
  }
  this->bInputEnabled = 0;
  return;
}

// EnableInput @ 147e64490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALevelScriptActor::EnableInput(ALevelScriptActor *this,APlayerController *param_1)

{
  if ((param_1 != (APlayerController *)0x0) && (2 < (byte)LogLevel._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
    this->bInputEnabled = 1;
    return;
  }
  this->bInputEnabled = 1;
  return;
}

// GetPrivateStaticClass @ 147e696d0

UClass * __cdecl ALevelScriptActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelScriptActor",
               &Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton,
               StaticRegisterNativesALevelScriptActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelScriptActor>,
               InternalVTableHelperCtorCaller<ALevelScriptActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton;
}

// LevelReset @ 147e6e680

void __thiscall ALevelScriptActor::LevelReset(ALevelScriptActor *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ALevelScriptActor_LevelReset);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147e6e6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// PreInitializeComponents @ 147e726d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelScriptActor::PreInitializeComponents(ALevelScriptActor *this)

{
  bool bVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UActorComponent *this_00;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = UInputDelegateBinding::SupportsInputDelegate((UClass *)this->_padding_);
  if ((bVar1) && (this->_padding_ == 0)) {
    local_a8 = 0;
    pUVar2 = UInputSettings::GetDefaultInputComponentClass();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    this_00 = (UActorComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UActorComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    this->_padding_ = (longlong)this_00;
    UActorComponent::RegisterComponent(this_00);
    UInputDelegateBinding::BindInputDelegates
              ((UClass *)this->_padding_,(UInputComponent *)this->_padding_,(UObject *)0x0);
  }
  AActor::PreInitializeComponents((AActor *)this);
  return;
}

// RemoteEvent @ 147e79150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ALevelScriptActor::RemoteEvent(ALevelScriptActor *this,FName param_1)

{
  longlong lVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UWorld *this_01;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar5;
  UFunction *pUVar6;
  bool bVar7;
  int iVar8;
  
  bVar7 = false;
  this_01 = AActor::GetWorld((AActor *)this);
  pTVar5 = UWorld::GetLevels(this_01);
  for (iVar8 = 0; (-1 < iVar8 && (iVar8 < pTVar5->ArrayNum)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lVar1 = *(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar8 * 8);
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x240) & 0x20) != 0)) &&
       (this_00 = *(UObject **)(lVar1 + 0xf0), this_00 != (UObject *)0x0)) {
      pUVar6 = UObject::FindFunction(this_00,param_1);
      if ((pUVar6 != (UFunction *)0x0) && (pUVar6->NumParms == '\0')) {
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,0);
        bVar7 = true;
      }
    }
  }
  return bVar7;
}

// SetCinematicMode @ 147e7e140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ALevelScriptActor::SetCinematicMode
          (ALevelScriptActor *this,bool param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  UObject *pUVar6;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_28);
  while( true ) {
    iVar3 = local_28.Index;
    pTVar2 = local_28.Container;
    if (local_28.Index < 0) {
      return;
    }
    if ((local_28.Container)->ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < (local_28.Container)->ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
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
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (pUVar6 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar6 + 0xc18))(pUVar6,param_1,param_2,param_3,param_4,param_5);
    }
    local_28.Index = local_28.Index + 1;
  }
  return;
}

// StaticRegisterNativesALevelScriptActor @ 147e821b0

void __cdecl ALevelScriptActor::StaticRegisterNativesALevelScriptActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ALevelScriptActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WorldOriginLocationChanged @ 147e86e60

void __thiscall
ALevelScriptActor::WorldOriginLocationChanged
          (ALevelScriptActor *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2)

{
  UFunction *pUVar1;
  undefined8 local_28;
  int local_20;
  undefined8 local_1c;
  int local_14;
  
  local_28 = *(undefined8 *)&param_1->field0_0x0;
  local_20 = (param_1->field0_0x0)._s_0.Z;
  local_1c = *(undefined8 *)&param_2->field0_0x0;
  local_14 = (param_2->field0_0x0)._s_0.Z;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ALevelScriptActor_WorldOriginLocationChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// execRemoteEvent @ 147e8b740

void __cdecl ALevelScriptActor::execRemoteEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetCinematicMode @ 147e8b7f0

void __cdecl ALevelScriptActor::execSetCinematicMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_48 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  bVar5 = local_48 != 0;
  local_44[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_44);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x768))(param_1,bVar2,bVar3,bVar4,bVar5,local_44[0] != 0);
  return;
}

