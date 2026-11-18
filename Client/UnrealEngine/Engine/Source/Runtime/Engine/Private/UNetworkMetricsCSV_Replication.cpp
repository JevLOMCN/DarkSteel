// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148074600

UClass * __cdecl UNetworkMetricsCSV_Replication::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV_Replication",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsCSV_Replication,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsCSV_Replication>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV_Replication>,local_res8,
               UNetworkMetricsCSV::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton;
}

// UNetworkMetricsCSV_Replication @ 14808bab0

UNetworkMetricsCSV_Replication * __thiscall
UNetworkMetricsCSV_Replication::UNetworkMetricsCSV_Replication
          (UNetworkMetricsCSV_Replication *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UNetworkMetricsCSV_Replication__6B_;
  return this;
}

// ~UNetworkMetricsCSV_Replication @ 14808f270

void __thiscall
UNetworkMetricsCSV_Replication::~UNetworkMetricsCSV_Replication
          (UNetworkMetricsCSV_Replication *this)

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

// GetPrivateStaticClass @ 1480a9790

UClass * __cdecl UNetworkMetricsCSV_Replication::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV_Replication",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsCSV_Replication,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsCSV_Replication>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV_Replication>,local_res8,
               UNetworkMetricsCSV::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton;
}

// StaticRegisterNativesUNetworkMetricsCSV_Replication @ 1480d56f0

void __cdecl
UNetworkMetricsCSV_Replication::StaticRegisterNativesUNetworkMetricsCSV_Replication(void)

{
  return;
}

