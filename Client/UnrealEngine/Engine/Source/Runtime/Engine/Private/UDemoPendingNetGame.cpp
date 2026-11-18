// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147268b80

UClass * __cdecl UDemoPendingNetGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPendingNetGame::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoPendingNetGame",
               &Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton,
               StaticRegisterNativesUDemoPendingNetGame,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDemoPendingNetGame>,
               InternalVTableHelperCtorCaller<UDemoPendingNetGame>,local_res8,
               UPendingNetGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton;
}

// UDemoPendingNetGame @ 14726cce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDemoPendingNetGame * __thiscall
UDemoPendingNetGame::UDemoPendingNetGame(UDemoPendingNetGame *this,FVTableHelper *param_1)

{
  UPendingNetGame::UPendingNetGame((UPendingNetGame *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FNetworkNotify__;
  return this;
}

// ~UDemoPendingNetGame @ 14726d470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDemoPendingNetGame::~UDemoPendingNetGame(UDemoPendingNetGame *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FNetworkNotify__;
  UPendingNetGame::~UPendingNetGame((UPendingNetGame *)this);
  return;
}

// GetPrivateStaticClass @ 14726f5c0

UClass * __cdecl UDemoPendingNetGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPendingNetGame::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoPendingNetGame",
               &Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton,
               StaticRegisterNativesUDemoPendingNetGame,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDemoPendingNetGame>,
               InternalVTableHelperCtorCaller<UDemoPendingNetGame>,local_res8,
               UPendingNetGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoPendingNetGame.InnerSingleton;
}

// StaticRegisterNativesUDemoPendingNetGame @ 147270a20

void __cdecl UDemoPendingNetGame::StaticRegisterNativesUDemoPendingNetGame(void)

{
  return;
}

// UDemoPendingNetGame @ 147abd830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDemoPendingNetGame * __thiscall
UDemoPendingNetGame::UDemoPendingNetGame(UDemoPendingNetGame *this,FObjectInitializer *param_1)

{
  UPendingNetGame::UPendingNetGame((UPendingNetGame *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FNetworkNotify__;
  return this;
}

// LoadMapCompleted @ 147af86d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoPendingNetGame::LoadMapCompleted
          (UDemoPendingNetGame *this,UEngine *param_1,FWorldContext *param_2,bool param_3,
          FString *param_4)

{
  UDemoNetDriver *this_00;
  FName FVar1;
  UGameInstance *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UEnum *pUVar6;
  wchar_t *pwVar7;
  UEnum *local_res8;
  undefined8 local_38;
  FWeakObjectPtr local_30;
  UEnum *local_28;
  FString local_20;
  longlong local_10;
  
  this_00 = *(UDemoNetDriver **)&this->field_0x38;
  this->field_0xaa = param_3;
  if ((this_00 == (UDemoNetDriver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TheDriver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x15d9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (this->field_0xaa == '\0') {
    UDemoNetDriver::StopDemo(this_00);
    if ((param_2->ThisCurrentWorld).field0_0x0.DebugPtr == (UWorld *)0x0) {
      FVar1.ComparisonIndex.Value = *(uint *)&this_00->field_0x218;
      FVar1.Number = *(uint *)&this_00->field_0x21c;
      UEngine::DestroyNamedNetDriver(GEngine,(param_2->PendingNetGame).field0_0x0.DebugPtr,FVar1);
    }
    (param_2->PendingNetGame).field0_0x0.DebugPtr = (UPendingNetGame *)0x0;
    UEngine::BrowseToDefaultMap(GEngine,param_2);
    if (1 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar2 = (param_2->OwningGameInstance).field0_0x0.DebugPtr;
    if (pUVar2 != (UGameInstance *)0x0) {
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x340);
      pUVar6 = StaticEnum<enum_EReplayResult>();
      local_38 = 6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_30.ObjectIndex = 0;
      local_30.ObjectSerialNumber = 0;
      local_res8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&local_30,(FObjectPtr)&local_res8);
      local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_20.Data.ArrayNum = 0;
      local_20.Data.ArrayMax = 0;
      local_10 = 0;
      local_28 = pUVar6;
      pwVar7 = ::LexToString(LoadMap);
      ::FString::operator=(&local_20,pwVar7);
      (*pcVar3)(pUVar2,&local_38);
      if (local_10 != 0) {
        (**(code **)(local_10 + -0x10))(local_10 + -0x10);
      }
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// SendJoin @ 147b10920

void __thiscall UDemoPendingNetGame::SendJoin(UDemoPendingNetGame *this)

{
  return;
}

// Tick @ 147b182d0

void __thiscall UDemoPendingNetGame::Tick(UDemoPendingNetGame *this,float param_1)

{
  return;
}

