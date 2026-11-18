// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 10

// StaticClass @ 14a0451b0

UClass * __cdecl AWN_Ultra_Sky::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_Ultra_Sky",
               &Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton,
               StaticRegisterNativesAWN_Ultra_Sky,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_Ultra_Sky>,
               InternalVTableHelperCtorCaller<AWN_Ultra_Sky>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton;
}

// AWN_Ultra_Sky @ 14a046e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_Ultra_Sky * __thiscall AWN_Ultra_Sky::AWN_Ultra_Sky(AWN_Ultra_Sky *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_Ultra_Sky__6B_;
  (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~AWN_Ultra_Sky @ 14a048190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::~AWN_Ultra_Sky(AWN_Ultra_Sky *this)

{
  this->_padding_ = (longlong)&___7AWN_Ultra_Sky__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b430

UClass * __cdecl AWN_Ultra_Sky::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_Ultra_Sky",
               &Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton,
               StaticRegisterNativesAWN_Ultra_Sky,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_Ultra_Sky>,
               InternalVTableHelperCtorCaller<AWN_Ultra_Sky>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Ultra_Sky.InnerSingleton;
}

// StaticRegisterNativesAWN_Ultra_Sky @ 14a04ba80

void __cdecl AWN_Ultra_Sky::StaticRegisterNativesAWN_Ultra_Sky(void)

{
  return;
}

// BeginDestroy @ 14a050380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::BeginDestroy(AWN_Ultra_Sky *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
    if (((this != (AWN_Ultra_Sky *)0x0) &&
        (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) != (AWN_Ultra_Sky *)0x0)) &&
       (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) == this)) {
      *(undefined8 *)(pUVar2 + 0xef) = 0;
      WN_gTOD = -1.0;
      WN_gDawnTOD = -1.0;
      WN_gDuskTOD = -1.0;
      WN_gTODDayNightTransitionRatio = -1.0;
    }
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// Destroyed @ 14a053ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::Destroyed(AWN_Ultra_Sky *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
    if (((this != (AWN_Ultra_Sky *)0x0) &&
        (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) != (AWN_Ultra_Sky *)0x0)) &&
       (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) == this)) {
      *(undefined8 *)(pUVar2 + 0xef) = 0;
      WN_gTOD = -1.0;
      WN_gDawnTOD = -1.0;
      WN_gDuskTOD = -1.0;
      WN_gTODDayNightTransitionRatio = -1.0;
    }
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14a0540c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::EndPlay(AWN_Ultra_Sky *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
    if (((this != (AWN_Ultra_Sky *)0x0) &&
        (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) != (AWN_Ultra_Sky *)0x0)) &&
       (*(AWN_Ultra_Sky **)(pUVar2 + 0xef) == this)) {
      *(undefined8 *)(pUVar2 + 0xef) = 0;
      WN_gTOD = -1.0;
      WN_gDawnTOD = -1.0;
      WN_gDuskTOD = -1.0;
      WN_gTODDayNightTransitionRatio = -1.0;
    }
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// OnConstruction @ 14a061f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::OnConstruction(AWN_Ultra_Sky *this,TTransform<double> *param_1)

{
  bool bVar1;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  UWN_UDS_Subsystem *local_res8;
  
  if (((this->_padding_ & 0x50) == 0) &&
     (bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                        (&this->UDS_Subsystem,(void *)0x0), bVar1)) {
    this_00 = AActor::GetWorld((AActor *)this);
    local_res8 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UWN_UDS_Subsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)&local_res8);
    bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                      (&this->UDS_Subsystem,(void *)0x0);
    if (!bVar1) {
      if (4 < (byte)Env._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Env);
      }
      this_01 = (UWN_UDS_Subsystem *)FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
      UWN_UDS_Subsystem::RegisterUDS(this_01,this);
    }
  }
  return;
}

// PostInitializeComponents @ 14a0631d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Ultra_Sky::PostInitializeComponents(AWN_Ultra_Sky *this)

{
  bool bVar1;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  UWN_UDS_Subsystem *local_res8;
  
  if (((this->_padding_ & 0x10) == 0) &&
     (bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                        (&this->UDS_Subsystem,(void *)0x0), bVar1)) {
    this_00 = AActor::GetWorld((AActor *)this);
    local_res8 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UWN_UDS_Subsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)&local_res8);
    bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                      (&this->UDS_Subsystem,(void *)0x0);
    if (!bVar1) {
      if (4 < (byte)Env._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Env);
      }
      this_01 = (UWN_UDS_Subsystem *)FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
      UWN_UDS_Subsystem::RegisterUDS(this_01,this);
    }
  }
  AActor::PostInitializeComponents((AActor *)this);
  return;
}

