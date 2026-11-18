// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 148075620

UScriptStruct * __cdecl FNetworkMetricsMutatorAvg::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutatorAvg,(UObject *)pUVar1,
                         L"NetworkMetricsMutatorAvg");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.OuterSingleton;
}

// ProcessFrame @ 148075660

void __thiscall
FNetworkMetricsMutatorAvg::ProcessFrame
          (FNetworkMetricsMutatorAvg *this,FNetworkMetricSnapshot *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar2 = (param_1->MetricInts).ArrayNum;
  pFVar4 = (param_1->MetricInts).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->MetricInts).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar3) break;
    this->IntTotal = this->IntTotal + *(longlong *)(pFVar4 + 8);
    this->NumSamples = this->NumSamples + 1;
    pFVar4 = pFVar4 + 0x10;
  }
  iVar2 = (param_1->MetricFloats).ArrayNum;
  pFVar3 = (param_1->MetricFloats).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((param_1->MetricFloats).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    fVar1 = *(float *)(pFVar3 + 8);
    this->NumSamples = this->NumSamples + 1;
    pFVar3 = pFVar3 + 0xc;
    this->FloatTotal = fVar1 + this->FloatTotal;
  }
  return;
}

// Reset @ 148075720

void __thiscall FNetworkMetricsMutatorAvg::Reset(FNetworkMetricsMutatorAvg *this)

{
  this->IntTotal = 0;
  this->FloatTotal = 0.0;
  this->NumSamples = 0;
  return;
}

// GetValue @ 148075740

TVariant<float,__int64> * __thiscall
FNetworkMetricsMutatorAvg::GetValue
          (FNetworkMetricsMutatorAvg *this,TVariant<float,__int64> *__return_storage_ptr__)

{
  if (this->NumSamples != 0) {
    *(float *)&__return_storage_ptr__->_padding_ =
         ((float)this->IntTotal + this->FloatTotal) / (float)this->NumSamples;
    __return_storage_ptr__->TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetAllMetricNames @ 148075790

TArrayView<FName_const_,int> * __thiscall
FNetworkMetricsMutatorAvg::GetAllMetricNames
          (FNetworkMetricsMutatorAvg *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 1;
  __return_storage_ptr__->DataPtr = &this->MetricName;
  return __return_storage_ptr__;
}

// GetNameInternal @ 1480757b0

FName __thiscall FNetworkMetricsMutatorAvg::GetNameInternal(FNetworkMetricsMutatorAvg *this)

{
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName in_RDX;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (this->MutatorName == (FName)0x0) {
    pFVar1 = ::FName::GetPlainNameString(&this->MetricName,&local_18);
    ::FString::ConcatFC(&local_28,pFVar1,L"Avg");
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    this->MutatorName = *pFVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  *(FName *)in_RDX = this->MutatorName;
  return in_RDX;
}

// AddFloatSample @ 1480931e0

void __thiscall
FNetworkMetricsMutatorAvg::AddFloatSample(FNetworkMetricsMutatorAvg *this,float param_1)

{
  this->NumSamples = this->NumSamples + 1;
  this->FloatTotal = param_1 + this->FloatTotal;
  return;
}

// AddIntSample @ 148093200

void __thiscall
FNetworkMetricsMutatorAvg::AddIntSample(FNetworkMetricsMutatorAvg *this,long64 param_1)

{
  this->IntTotal = this->IntTotal + param_1;
  this->NumSamples = this->NumSamples + 1;
  return;
}

