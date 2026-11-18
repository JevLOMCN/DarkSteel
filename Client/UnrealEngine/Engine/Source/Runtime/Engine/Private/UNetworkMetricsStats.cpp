// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1480748c0

UClass * __cdecl UNetworkMetricsStats::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsStats",
               &Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsStats,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsStats>,
               InternalVTableHelperCtorCaller<UNetworkMetricsStats>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton;
}

// UNetworkMetricsStats @ 14808bf30

UNetworkMetricsStats * __thiscall
UNetworkMetricsStats::UNetworkMetricsStats(UNetworkMetricsStats *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsStats__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->StatName).ComparisonIndex = 0;
  (this->StatName).Number = 0;
  return this;
}

// UNetworkMetricsStats @ 14808bf70

UNetworkMetricsStats * __thiscall
UNetworkMetricsStats::UNetworkMetricsStats(UNetworkMetricsStats *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNetworkMetricsStats__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->StatName).ComparisonIndex = 0;
  (this->StatName).Number = 0;
  return this;
}

// ~UNetworkMetricsStats @ 14808f450

void __thiscall UNetworkMetricsStats::~UNetworkMetricsStats(UNetworkMetricsStats *this)

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

// GetPrivateStaticClass @ 1480a9b30

UClass * __cdecl UNetworkMetricsStats::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsStats",
               &Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsStats,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsStats>,
               InternalVTableHelperCtorCaller<UNetworkMetricsStats>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton;
}

// Report @ 1480caec0

void __thiscall
UNetworkMetricsStats::Report(UNetworkMetricsStats *this,FNetworkMetricSnapshot *param_1)

{
  float fVar1;
  FName FVar2;
  uchar auVar3 [8];
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  FStatMessage local_48 [2];
  
  if (FThreadStats::bPrimaryEnable) {
    iVar6 = (param_1->MetricFloats).ArrayNum + (param_1->MetricInts).ArrayNum;
    if (1 < iVar6) {
      `UNetworkMetricsStats::Report'::__l6::<lambda_1>::operator()(&local_res18);
      return;
    }
    if (iVar6 == 1) {
      pFVar7 = (param_1->MetricInts).AllocatorInstance.Data;
      iVar6 = (param_1->MetricInts).ArrayNum;
      pFVar8 = pFVar7 + (longlong)iVar6 * 0x10;
      while( true ) {
        if ((param_1->MetricInts).ArrayNum != iVar6) {
          `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_res18);
        }
        if (pFVar7 == pFVar8) break;
        FVar2 = this->StatName;
        auVar3 = *(uchar (*) [8])(pFVar7 + 8);
        if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
           (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_1480cb00d:
          pFVar7 = pFVar7 + 0x10;
        }
        else {
          pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar4 == (FThreadStats *)0x0) {
            pFVar5 = FThreadStatsPool::Get();
            pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
          }
          local_48[0].NameAndInfo.Index = FVar2.ComparisonIndex.Value;
          local_48[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
          local_res18 = FVar2;
          local_48[0].StatData.Pad = auVar3;
          FThreadStats::AddStatMessage(pFVar4,local_48);
          FStatsTrace::Set(&local_res18,(long64)auVar3);
          if (pFVar4->ScopeCount != 0) {
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar4,false,false);
            }
            goto LAB_1480cb00d;
          }
          FThreadStats::Flush(pFVar4,false,false);
          pFVar7 = pFVar7 + 0x10;
        }
      }
      iVar6 = (param_1->MetricFloats).ArrayNum;
      pFVar8 = (param_1->MetricFloats).AllocatorInstance.Data;
      pFVar7 = pFVar8 + (longlong)iVar6 * 0xc;
      while( true ) {
        if ((param_1->MetricFloats).ArrayNum != iVar6) {
          `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar8 == pFVar7) break;
        FVar2 = this->StatName;
        fVar1 = *(float *)(pFVar8 + 8);
        if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
           (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_1480cb115:
          pFVar8 = pFVar8 + 0xc;
        }
        else {
          pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar4 == (FThreadStats *)0x0) {
            pFVar5 = FThreadStatsPool::Get();
            pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
          }
          local_48[0].NameAndInfo.Index = FVar2.ComparisonIndex.Value;
          local_48[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
          local_res18 = FVar2;
          local_48[0].StatData.Pad = (uchar  [8])(double)fVar1;
          FThreadStats::AddStatMessage(pFVar4,local_48);
          FStatsTrace::Set(&local_res18,(double)fVar1);
          if (pFVar4->ScopeCount != 0) {
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar4,false,false);
            }
            goto LAB_1480cb115;
          }
          FThreadStats::Flush(pFVar4,false,false);
          pFVar8 = pFVar8 + 0xc;
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUNetworkMetricsStats @ 1480d5740

void __cdecl UNetworkMetricsStats::StaticRegisterNativesUNetworkMetricsStats(void)

{
  return;
}

// operator() @ 150523b80

bool __thiscall `UNetworkMetricsStats::Report'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836867>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836867>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

