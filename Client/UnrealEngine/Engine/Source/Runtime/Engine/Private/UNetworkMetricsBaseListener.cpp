// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148074170

UClass * __cdecl UNetworkMetricsBaseListener::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsBaseListener",
               &Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsBaseListener,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsBaseListener>,
               InternalVTableHelperCtorCaller<UNetworkMetricsBaseListener>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton;
}

// UNetworkMetricsBaseListener @ 14808b950

UNetworkMetricsBaseListener * __thiscall
UNetworkMetricsBaseListener::UNetworkMetricsBaseListener
          (UNetworkMetricsBaseListener *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  (this->Mutators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mutators).ArrayNum = 0;
  (this->Mutators).ArrayMax = 0;
  return this;
}

// UNetworkMetricsBaseListener @ 14808b990

UNetworkMetricsBaseListener * __thiscall
UNetworkMetricsBaseListener::UNetworkMetricsBaseListener(UNetworkMetricsBaseListener *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  this->IntervalSeconds = 0.0;
  (this->Mutators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mutators).ArrayNum = 0;
  (this->Mutators).ArrayMax = 0;
  return this;
}

// ~UNetworkMetricsBaseListener @ 14808f1f0

void __thiscall
UNetworkMetricsBaseListener::~UNetworkMetricsBaseListener(UNetworkMetricsBaseListener *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            ((TInstancedStruct<FNetworkMetricsMutator> *)(this->Mutators).AllocatorInstance.Data,
             (this->Mutators).ArrayNum);
  pFVar1 = (this->Mutators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9620

UClass * __cdecl UNetworkMetricsBaseListener::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsBaseListener",
               &Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsBaseListener,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsBaseListener>,
               InternalVTableHelperCtorCaller<UNetworkMetricsBaseListener>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton;
}

// Report @ 1480caa80

void __thiscall
UNetworkMetricsBaseListener::Report
          (UNetworkMetricsBaseListener *this,FNetworkMetricSnapshot *param_1)

{
  return;
}

// StaticRegisterNativesUNetworkMetricsBaseListener @ 1480d56d0

void __cdecl UNetworkMetricsBaseListener::StaticRegisterNativesUNetworkMetricsBaseListener(void)

{
  return;
}

// operator() @ 150520930

bool __thiscall `UNetworkMetricsBaseListener::SetInterval'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2895400443947516070>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2895400443947516070>,
                       &`public:___cdecl_`public:_void___cdecl_UNetworkMetricsBaseListener::SetInterval(double)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

