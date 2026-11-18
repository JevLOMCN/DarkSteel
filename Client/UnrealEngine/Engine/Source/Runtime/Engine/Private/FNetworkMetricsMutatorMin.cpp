// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 148075880

UScriptStruct * __cdecl FNetworkMetricsMutatorMin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutatorMin,(UObject *)pUVar1,
                         L"NetworkMetricsMutatorMin");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.OuterSingleton;
}

// ProcessFrame @ 1480758c0

void __thiscall
FNetworkMetricsMutatorMin::ProcessFrame
          (FNetworkMetricsMutatorMin *this,FNetworkMetricSnapshot *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((param_1->MetricFloats).ArrayNum + (param_1->MetricInts).ArrayNum != 1) {
    local_res10[0] = 0;
    `FNetworkMetricsMutatorMin::ProcessFrame'::__l2::<lambda_1>::operator()(local_res10);
  }
  iVar2 = (param_1->MetricInts).ArrayNum;
  pFVar6 = (param_1->MetricInts).AllocatorInstance.Data;
  pFVar9 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->MetricInts).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    fVar3 = __real_7f7fffff;
    if (pFVar6 == pFVar9) break;
    uVar7 = (ulonglong)(this->MinValue).TypeIndex;
    if (1 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7 + 4) == '\0') {
      uVar7 = (ulonglong)(this->MinValue).TypeIndex;
      lVar8 = 0x7fffffffffffffff;
      if (*(longlong *)(pFVar6 + 8) < 0x7fffffffffffffff) {
        lVar8 = *(longlong *)(pFVar6 + 8);
      }
      if (1 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pcVar5 = UE::Core::Private::TDestructorCaller<__int64>::Destruct;
    }
    else {
      if ((this->MinValue).TypeIndex != '\x01') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar8 = (this->MinValue)._padding_;
      uVar7 = (ulonglong)(this->MinValue).TypeIndex;
      if (*(longlong *)(pFVar6 + 8) < lVar8) {
        lVar8 = *(longlong *)(pFVar6 + 8);
      }
      if (1 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pcVar5 = UE::Core::Private::TDestructorCaller<float>::Destruct;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] != pcVar5) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(&this->MinValue);
    }
    (this->MinValue)._padding_ = lVar8;
    pFVar6 = pFVar6 + 0x10;
    (this->MinValue).TypeIndex = '\x01';
  }
  iVar2 = (param_1->MetricFloats).ArrayNum;
  pFVar9 = (param_1->MetricFloats).AllocatorInstance.Data;
  pFVar6 = pFVar9 + (longlong)iVar2 * 0xc;
  do {
    if ((param_1->MetricFloats).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar9 == pFVar6) {
      return;
    }
    uVar7 = (ulonglong)(this->MinValue).TypeIndex;
    if (1 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7) == '\0') {
      uVar7 = (ulonglong)(this->MinValue).TypeIndex;
      fVar10 = *(float *)(pFVar9 + 8);
      if (fVar3 <= *(float *)(pFVar9 + 8)) {
        fVar10 = fVar3;
      }
      if (1 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pcVar5 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                         ::__l2::Destructors)[uVar7];
      if (pcVar5 != UE::Core::Private::TDestructorCaller<float>::Destruct) goto LAB_148075bb9;
    }
    else {
      if ((this->MinValue).TypeIndex != '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar7 = (ulonglong)(this->MinValue).TypeIndex;
      fVar1 = *(float *)&(this->MinValue)._padding_;
      fVar10 = *(float *)(pFVar9 + 8);
      if (fVar1 <= *(float *)(pFVar9 + 8)) {
        fVar10 = fVar1;
      }
      if (1 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pcVar5 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
                         ::__l2::Destructors)[uVar7];
LAB_148075bb9:
      (*pcVar5)(&this->MinValue);
    }
    *(float *)&(this->MinValue)._padding_ = fVar10;
    pFVar9 = pFVar9 + 0xc;
    (this->MinValue).TypeIndex = '\0';
  } while( true );
}

// Reset @ 148075c00

void __thiscall FNetworkMetricsMutatorMin::Reset(FNetworkMetricsMutatorMin *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->MinValue).TypeIndex;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,__int64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&this->MinValue);
  (this->MinValue).TypeIndex = '\x01';
  (this->MinValue)._padding_ = 0x7fffffffffffffff;
  return;
}

// GetValue @ 148075c70

TVariant<float,__int64> * __thiscall
FNetworkMetricsMutatorMin::GetValue
          (FNetworkMetricsMutatorMin *this,TVariant<float,__int64> *__return_storage_ptr__)

{
  TVariant<float,__int64>::TVariant<float,__int64>(__return_storage_ptr__,&this->MinValue);
  return __return_storage_ptr__;
}

// GetAllMetricNames @ 148075ca0

TArrayView<FName_const_,int> * __thiscall
FNetworkMetricsMutatorMin::GetAllMetricNames
          (FNetworkMetricsMutatorMin *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 1;
  __return_storage_ptr__->DataPtr = &this->MetricName;
  return __return_storage_ptr__;
}

// GetNameInternal @ 148075cc0

FName __thiscall FNetworkMetricsMutatorMin::GetNameInternal(FNetworkMetricsMutatorMin *this)

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
    ::FString::ConcatFC(&local_28,pFVar1,L"Min");
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

// operator() @ 150523730

bool __thiscall `FNetworkMetricsMutatorMin::ProcessFrame'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6739904289973469271>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6739904289973469271>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

