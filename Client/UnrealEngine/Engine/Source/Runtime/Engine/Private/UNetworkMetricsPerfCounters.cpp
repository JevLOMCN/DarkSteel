// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148074780

UClass * __cdecl UNetworkMetricsPerfCounters::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsPerfCounters",
               &Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsPerfCounters,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsPerfCounters>,
               InternalVTableHelperCtorCaller<UNetworkMetricsPerfCounters>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton;
}

// UNetworkMetricsPerfCounters @ 14808beb0

UNetworkMetricsPerfCounters * __thiscall
UNetworkMetricsPerfCounters::UNetworkMetricsPerfCounters
          (UNetworkMetricsPerfCounters *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UNetworkMetricsPerfCounters__6B_;
  return this;
}

// UNetworkMetricsPerfCounters @ 14808bef0

UNetworkMetricsPerfCounters * __thiscall
UNetworkMetricsPerfCounters::UNetworkMetricsPerfCounters(UNetworkMetricsPerfCounters *this)

{
  UObject::UObject((UObject *)this);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UNetworkMetricsPerfCounters__6B_;
  return this;
}

// ~UNetworkMetricsPerfCounters @ 14808f410

void __thiscall
UNetworkMetricsPerfCounters::~UNetworkMetricsPerfCounters(UNetworkMetricsPerfCounters *this)

{
  *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            (*(TInstancedStruct<FNetworkMetricsMutator> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9a70

UClass * __cdecl UNetworkMetricsPerfCounters::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsPerfCounters",
               &Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsPerfCounters,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsPerfCounters>,
               InternalVTableHelperCtorCaller<UNetworkMetricsPerfCounters>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton;
}

// Report @ 1480caeb0

void __thiscall
UNetworkMetricsPerfCounters::Report
          (UNetworkMetricsPerfCounters *this,FNetworkMetricSnapshot *param_1)

{
  return;
}

// StaticRegisterNativesUNetworkMetricsPerfCounters @ 1480d5730

void __cdecl UNetworkMetricsPerfCounters::StaticRegisterNativesUNetworkMetricsPerfCounters(void)

{
  return;
}

