// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 148a748d0

UClass * __cdecl ANavigationDataChunkActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataChunkActor",
               &Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton,
               StaticRegisterNativesANavigationDataChunkActor,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavigationDataChunkActor>,
               InternalVTableHelperCtorCaller<ANavigationDataChunkActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton;
}

// ANavigationDataChunkActor @ 148a7ee30

ANavigationDataChunkActor * __thiscall
ANavigationDataChunkActor::ANavigationDataChunkActor
          (ANavigationDataChunkActor *this,FVTableHelper *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANavigationDataChunkActor__6B_;
  (this->NavDataChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavDataChunks).ArrayNum = 0;
  (this->NavDataChunks).ArrayMax = 0;
  (this->DataChunkActorBounds).IsValid = '\0';
  return this;
}

// ANavigationDataChunkActor @ 148a7ee70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationDataChunkActor * __thiscall
ANavigationDataChunkActor::ANavigationDataChunkActor
          (ANavigationDataChunkActor *this,FObjectInitializer *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANavigationDataChunkActor__6B_;
  (this->NavDataChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavDataChunks).ArrayNum = 0;
  (this->NavDataChunks).ArrayMax = 0;
  (this->DataChunkActorBounds).IsValid = '\0';
  AActor::SetCanBeDamaged((AActor *)this,false);
  AActor::SetActorEnableCollision((AActor *)this,false);
  return this;
}

// ~ANavigationDataChunkActor @ 148a81640

void __thiscall
ANavigationDataChunkActor::~ANavigationDataChunkActor(ANavigationDataChunkActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANavigationDataChunkActor__6B_;
  pFVar1 = (this->NavDataChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// AddNavigationDataChunkToWorld @ 148a8aca0

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
ANavigationDataChunkActor::AddNavigationDataChunkToWorld(ANavigationDataChunkActor *this)

{
  UNavigationSystemBase *pUVar1;
  UWorld *pUVar2;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pUVar1 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     pUVar1 != (UNavigationSystemBase *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a8acca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x318))(pUVar1,this);
    return;
  }
  return;
}

// BeginPlay @ 148a8b210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationDataChunkActor::BeginPlay(ANavigationDataChunkActor *this)

{
  UNavigationSystemBase *pUVar1;
  UWorld *pUVar2;
  undefined1 auStack_178 [32];
  FName local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"ANavigationDataChunkActor::BeginPlay",0x24,Yes);
  if (5 < (byte)LogNavigation._0_1_) {
    local_158 = (FName)this->_padding_;
    ::FName::ToString(&local_158,&local_150);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  AActor::BeginPlay((AActor *)this);
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pUVar1 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     pUVar1 != (UNavigationSystemBase *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0x318))(pUVar1,this);
  }
  return;
}

// CollectNavData @ 148a8bec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ANavigationDataChunkActor::CollectNavData
          (ANavigationDataChunkActor *this,TBox<double> *param_1,TBox<double> *param_2)

{
  UNavigationSystemBase *pUVar1;
  UWorld *pUVar2;
  bool bVar3;
  undefined1 auStack_198 [32];
  FName local_178;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId83,"ANavigationDataChunkActor::CollectNavData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\NavigationData\\NavigationDataChunkActor.cpp"
               ,0x53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId83);
  }
  local_158._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_158,"ANavigationDataChunkActor::CollectNavData",0x29,Yes);
  if (5 < (byte)LogNavigation._0_1_) {
    local_178 = (FName)this->_padding_;
    ::FName::ToString(&local_178,&local_170);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pUVar1 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     pUVar1 != (UNavigationSystemBase *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0x328))(pUVar1,param_1,this,param_2);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndPlay @ 148a8f750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationDataChunkActor::EndPlay(ANavigationDataChunkActor *this,Type param_1)

{
  UNavigationSystemBase *pUVar1;
  UWorld *pUVar2;
  undefined1 auStack_178 [32];
  FName local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"ANavigationDataChunkActor::EndPlay",0x22,Yes);
  if (5 < (byte)LogNavigation._0_1_) {
    local_158 = (FName)this->_padding_;
    ::FName::ToString(&local_158,&local_150);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pUVar1 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     pUVar1 != (UNavigationSystemBase *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 800))(pUVar1,this);
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetActorBounds @ 148a93e10

void __thiscall
ANavigationDataChunkActor::GetActorBounds
          (ANavigationDataChunkActor *this,bool param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((this->DataChunkActorBounds).Max.field0_0x0._s_0.X -
          (this->DataChunkActorBounds).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar4 = ((this->DataChunkActorBounds).Max.field0_0x0._s_0.Y -
          (this->DataChunkActorBounds).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar3 = ((this->DataChunkActorBounds).Max.field0_0x0._s_0.Z -
          (this->DataChunkActorBounds).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar5;
  (param_3->field0_0x0)._s_0.Y = dVar4;
  (param_3->field0_0x0)._s_0.Z = dVar3;
  dVar1 = (this->DataChunkActorBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->DataChunkActorBounds).Min.field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X = dVar5 + (this->DataChunkActorBounds).Min.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar4 + dVar1;
  (param_2->field0_0x0)._s_0.Z = dVar3 + dVar2;
  return;
}

// GetBounds @ 148a94120

TBox<double> * __thiscall
ANavigationDataChunkActor::GetBounds
          (ANavigationDataChunkActor *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->DataChunkActorBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->DataChunkActorBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->DataChunkActorBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (this->DataChunkActorBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->DataChunkActorBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->DataChunkActorBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->DataChunkActorBounds).IsValid;
  uVar6 = (this->DataChunkActorBounds).Pad[0];
  uVar7 = (this->DataChunkActorBounds).Pad[1];
  uVar8 = (this->DataChunkActorBounds).Pad[2];
  uVar9 = (this->DataChunkActorBounds).Pad[3];
  uVar10 = (this->DataChunkActorBounds).Pad[4];
  uVar11 = (this->DataChunkActorBounds).Pad[5];
  uVar12 = (this->DataChunkActorBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148a958c0

UClass * __cdecl ANavigationDataChunkActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataChunkActor",
               &Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton,
               StaticRegisterNativesANavigationDataChunkActor,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavigationDataChunkActor>,
               InternalVTableHelperCtorCaller<ANavigationDataChunkActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton;
}

// Log @ 148a9a950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ANavigationDataChunkActor::Log(ANavigationDataChunkActor *this,wchar_t *param_1)

{
  FName local_res18 [2];
  FString local_18;
  
  if (5 < (byte)LogNavigation._0_1_) {
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveNavigationDataChunkFromWorld @ 148aa1640

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
ANavigationDataChunkActor::RemoveNavigationDataChunkFromWorld(ANavigationDataChunkActor *this)

{
  UNavigationSystemBase *pUVar1;
  UWorld *pUVar2;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pUVar1 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     pUVar1 != (UNavigationSystemBase *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148aa166a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 800))(pUVar1,this);
    return;
  }
  return;
}

// StaticRegisterNativesANavigationDataChunkActor @ 148aa28a0

void __cdecl ANavigationDataChunkActor::StaticRegisterNativesANavigationDataChunkActor(void)

{
  return;
}

