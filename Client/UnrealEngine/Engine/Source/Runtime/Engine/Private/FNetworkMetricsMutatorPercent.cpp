// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 1480762a0

UScriptStruct * __cdecl FNetworkMetricsMutatorPercent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutatorPercent,(UObject *)pUVar1,
                         L"NetworkMetricsMutatorPercent");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.OuterSingleton;
}

// UpdateFromSnapshotValue<float> @ 148087240

void __cdecl
FNetworkMetricsMutatorPercent::UpdateFromSnapshotValue<float>
          (TVariant<float,__int64> *param_1,float param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = param_1->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar2 = param_1->TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    if (1 < (ulonglong)bVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar2])(param_1);
    param_1->TypeIndex = '\0';
  }
  else {
    if (bVar2 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2 = param_2 + *(float *)&param_1->_padding_;
  }
  *(float *)&param_1->_padding_ = param_2;
  return;
}

// UpdateFromSnapshotValue<__int64> @ 148087330

void __cdecl
FNetworkMetricsMutatorPercent::UpdateFromSnapshotValue<__int64>
          (TVariant<float,__int64> *param_1,long64 param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = param_1->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar2 = param_1->TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (1 < (ulonglong)bVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar2])(param_1);
    param_1->_padding_ = param_2;
    param_1->TypeIndex = '\x01';
  }
  else {
    if (bVar2 != 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_1->_padding_ = param_1->_padding_ + param_2;
  }
  return;
}

// operator= @ 14808fc30

FNetworkMetricsMutatorPercent * __thiscall
FNetworkMetricsMutatorPercent::operator=
          (FNetworkMetricsMutatorPercent *this,FNetworkMetricsMutatorPercent *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<FName> _Dst;
  ForElementType<FName> _Src;
  
  this->_padding_ = param_1->_padding_;
  if (this != param_1) {
    iVar2 = (this->SourceMetricNames).ArrayMax;
    piVar1 = &(this->SourceMetricNames).ArrayMax;
    _Src = (param_1->SourceMetricNames).AllocatorInstance.SecondaryData;
    iVar3 = (param_1->SourceMetricNames).ArrayNum;
    if (_Src == (ForElementType<FName>)0x0) {
      _Src = (ForElementType<FName>)&param_1->SourceMetricNames;
    }
    (this->SourceMetricNames).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,iVar3,iVar2,&(this->SourceMetricNames).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<FName>)0x0) {
          _Dst = (ForElementType<FName>)&this->SourceMetricNames;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 3);
      }
    }
  }
  TVariant<float,__int64>::operator=(&this->Numerator,&param_1->Numerator);
  TVariant<float,__int64>::operator=(&this->Denominator,&param_1->Denominator);
  this->NumeratorName = param_1->NumeratorName;
  this->DenominatorName = param_1->DenominatorName;
  this->MutatorName = param_1->MutatorName;
  return this;
}

// GetAllMetricNames @ 1480a3bb0

TArrayView<FName_const_,int> * __thiscall
FNetworkMetricsMutatorPercent::GetAllMetricNames
          (FNetworkMetricsMutatorPercent *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FName *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArrayView<FName_const_,int> *pTVar7;
  ForElementType<FName> FVar8;
  
  pTVar1 = &this->SourceMetricNames;
  if ((this->SourceMetricNames).ArrayNum == 0) {
    pFVar2 = &this->NumeratorName;
    FVar8 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar1;
    }
    if (((ulonglong)FVar8 <= pFVar2) &&
       (pFVar2 < (undefined1 *)((longlong)FVar8 + (longlong)(this->SourceMetricNames).ArrayMax * 8))
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<FName_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = (this->SourceMetricNames).ArrayNum;
    if (iVar6 == (this->SourceMetricNames).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->SourceMetricNames).ArrayMax);
    }
    (this->SourceMetricNames).ArrayNum = iVar6 + 1;
    FVar8 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
    pFVar3 = &this->DenominatorName;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar1;
    }
    *(FName *)((longlong)FVar8 + (longlong)iVar6 * 8) = *pFVar2;
    FVar8 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar1;
    }
    if (((ulonglong)FVar8 <= pFVar3) &&
       (pFVar3 < (undefined1 *)((longlong)FVar8 + (longlong)(this->SourceMetricNames).ArrayMax * 8))
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<FName_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = (this->SourceMetricNames).ArrayNum;
    if (iVar6 == (this->SourceMetricNames).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->SourceMetricNames).ArrayMax);
    }
    (this->SourceMetricNames).ArrayNum = iVar6 + 1;
    FVar8 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar1;
    }
    *(FName *)((longlong)FVar8 + (longlong)iVar6 * 8) = *pFVar3;
  }
  FVar8 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FName>)0x0) {
    FVar8 = (ForElementType<FName>)pTVar1;
  }
  iVar6 = (this->SourceMetricNames).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArrayView<FName_const_,int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = (FName *)FVar8;
  return __return_storage_ptr__;
}

// GetNameInternal @ 1480a61e0

FName __thiscall FNetworkMetricsMutatorPercent::GetNameInternal(FNetworkMetricsMutatorPercent *this)

{
  FString *pFVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  FName in_RDX;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->MutatorName == (FName)0x0) {
    pFVar1 = ::FName::GetPlainNameString(&this->DenominatorName,&local_18);
    pFVar2 = ::FName::GetPlainNameString(&this->NumeratorName,&local_28);
    ::FString::ConcatFF(&local_38,pFVar2,pFVar1);
    ::FString::ConcatFC(&local_48,&local_38,L"Pct");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    this->MutatorName = *pFVar3;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
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

// GetValue @ 1480abad0

TVariant<float,__int64> * __thiscall
FNetworkMetricsMutatorPercent::GetValue
          (FNetworkMetricsMutatorPercent *this,TVariant<float,__int64> *__return_storage_ptr__)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<float,__int64> *pTVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  uVar5 = (ulonglong)(this->Denominator).TypeIndex;
  if (1 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar1 = (this->Denominator).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    if (uVar1 != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
        return pTVar4;
      }
    }
    fVar7 = (float)(this->Denominator)._padding_;
  }
  else {
    if (uVar1 != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
        return pTVar4;
      }
    }
    fVar7 = *(float *)&(this->Denominator)._padding_;
  }
  if (__real_322bcc77 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    uVar5 = (ulonglong)(this->Numerator).TypeIndex;
    if (1 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
        return pTVar4;
      }
    }
    uVar1 = (this->Numerator).TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if (uVar1 != '\x01') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
          return pTVar4;
        }
      }
      fVar6 = (float)(this->Numerator)._padding_;
    }
    else {
      if (uVar1 != '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
          return pTVar4;
        }
      }
      fVar6 = *(float *)&(this->Numerator)._padding_;
    }
    *(float *)&__return_storage_ptr__->_padding_ = (fVar6 / fVar7) * __real_42c80000;
  }
  else {
    *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  }
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ProcessFrame @ 1480be500

void __thiscall
FNetworkMetricsMutatorPercent::ProcessFrame
          (FNetworkMetricsMutatorPercent *this,FNetworkMetricSnapshot *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->MetricInts).ArrayNum;
  pFVar2 = (FName *)(param_1->MetricInts).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if ((param_1->MetricInts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == this->NumeratorName) {
      UpdateFromSnapshotValue<__int64>(&this->Numerator,(long64)pFVar2[1]);
    }
    if (*pFVar2 == this->DenominatorName) {
      UpdateFromSnapshotValue<__int64>(&this->Denominator,(long64)pFVar2[1]);
    }
    pFVar2 = pFVar2 + 2;
  }
  iVar1 = (param_1->MetricFloats).ArrayNum;
  pFVar3 = (FName *)(param_1->MetricFloats).AllocatorInstance.Data;
  pFVar2 = (FName *)((longlong)pFVar3 + (longlong)iVar1 * 0xc);
  while( true ) {
    if ((param_1->MetricFloats).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == this->NumeratorName) {
      UpdateFromSnapshotValue<float>(&this->Numerator,(float)pFVar3[1].ComparisonIndex.Value);
    }
    if (*pFVar3 == this->DenominatorName) {
      UpdateFromSnapshotValue<float>(&this->Denominator,(float)pFVar3[1].ComparisonIndex.Value);
    }
    pFVar3 = (FName *)&pFVar3[1].Number;
  }
  return;
}

// Reset @ 1480cc070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNetworkMetricsMutatorPercent::Reset(FNetworkMetricsMutatorPercent *this)

{
  undefined1 auStack_48 [32];
  TVariant<float,__int64> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28._padding_ = 0;
  local_28.TypeIndex = '\x01';
  TVariant<float,__int64>::operator=(&this->Numerator,&local_28);
  local_28._padding_ = 0;
  local_28.TypeIndex = '\x01';
  TVariant<float,__int64>::operator=(&this->Denominator,&local_28);
  return;
}

