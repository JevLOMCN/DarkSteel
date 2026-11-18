// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1480744c0

UClass * __cdecl UNetworkMetricsCSV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsCSV,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsCSV>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton;
}

// UNetworkMetricsCSV @ 14808b9d0

UNetworkMetricsCSV * __thiscall
UNetworkMetricsCSV::UNetworkMetricsCSV(UNetworkMetricsCSV *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNetworkMetricsCSV__6B_;
  return this;
}

// UNetworkMetricsCSV @ 14808ba10

UNetworkMetricsCSV * __thiscall UNetworkMetricsCSV::UNetworkMetricsCSV(UNetworkMetricsCSV *this)

{
  bool bVar1;
  int iVar2;
  FString *local_res8;
  FString local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNetworkMetricsCSV__6B_;
  this->CategoryIndex = -1;
  ::FString::FString(&local_18,"Networking");
  iVar2 = FCsvProfiler::GetCategoryIndex(&local_18);
  if (iVar2 == 1) {
    local_res8 = &local_18;
    bVar1 = `UNetworkMetricsCSV::SetCategory'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) goto LAB_14808ba7e;
  }
  this->CategoryIndex = iVar2;
LAB_14808ba7e:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UNetworkMetricsCSV @ 14808f230

void __thiscall UNetworkMetricsCSV::~UNetworkMetricsCSV(UNetworkMetricsCSV *this)

{
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            ((TInstancedStruct<FNetworkMetricsMutator> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a96d0

UClass * __cdecl UNetworkMetricsCSV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsCSV,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsCSV>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton;
}

// Report @ 1480caa90

void __thiscall UNetworkMetricsCSV::Report(UNetworkMetricsCSV *this,FNetworkMetricSnapshot *param_1)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  FName *local_res8;
  
  if ((this->CategoryIndex != -1) ||
     (bVar2 = `UNetworkMetricsCSV::Report'::__l3::<lambda_1>::operator()(&local_res8), bVar2)) {
    pFVar3 = (FName *)(param_1->MetricInts).AllocatorInstance.Data;
    iVar1 = (param_1->MetricInts).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 2;
    while( true ) {
      if ((param_1->MetricInts).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar3 == pFVar4) break;
      if ((pFVar3[1] == (FName)(longlong)(int)pFVar3[1].ComparisonIndex.Value) ||
         (local_res8 = pFVar3,
         bVar2 = `UNetworkMetricsCSV::Report'::__l10::<lambda_2>::operator()(&local_res8), bVar2)) {
        FCsvProfiler::RecordCustomStat
                  (pFVar3,this->CategoryIndex,pFVar3[1].ComparisonIndex.Value,Set);
      }
      pFVar3 = pFVar3 + 2;
    }
    iVar1 = (param_1->MetricFloats).ArrayNum;
    pFVar4 = (FName *)(param_1->MetricFloats).AllocatorInstance.Data;
    pFVar3 = (FName *)((longlong)pFVar4 + (longlong)iVar1 * 0xc);
    while( true ) {
      if ((param_1->MetricFloats).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar3) break;
      FCsvProfiler::RecordCustomStat
                (pFVar4,this->CategoryIndex,(float)pFVar4[1].ComparisonIndex.Value,Set);
      pFVar4 = (FName *)&pFVar4[1].Number;
    }
  }
  return;
}

// SetCategory @ 1480d2d00

void __thiscall UNetworkMetricsCSV::SetCategory(UNetworkMetricsCSV *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FString *local_res18 [2];
  
  iVar2 = FCsvProfiler::GetCategoryIndex(param_1);
  if ((iVar2 == 1) &&
     (local_res18[0] = param_1,
     bVar1 = `UNetworkMetricsCSV::SetCategory'::__l3::<lambda_1>::operator()(local_res18), !bVar1))
  {
    return;
  }
  this->CategoryIndex = iVar2;
  return;
}

// StaticRegisterNativesUNetworkMetricsCSV @ 1480d56e0

void __cdecl UNetworkMetricsCSV::StaticRegisterNativesUNetworkMetricsCSV(void)

{
  return;
}

// operator() @ 1505238f0

bool __thiscall `UNetworkMetricsCSV::Report'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836809>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836809>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150523930

bool __thiscall `UNetworkMetricsCSV::SetCategory'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836799>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7549168719444836799>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150524050

bool __thiscall `UNetworkMetricsCSV::Report'::__l10::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836813>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836813>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505240b7;
    }
  }
  bVar2 = false;
LAB_1505240b7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

