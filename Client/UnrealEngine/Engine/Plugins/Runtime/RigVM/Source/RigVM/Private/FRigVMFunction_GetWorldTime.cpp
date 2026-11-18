// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a16fe10

UScriptStruct * __cdecl FRigVMFunction_GetWorldTime::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_GetWorldTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_GetWorldTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime,(UObject *)pUVar1,
                         L"RigVMFunction_GetWorldTime");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_GetWorldTime.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_GetWorldTime.OuterSingleton;
}

// GetExecuteContextStruct @ 14a16fed0

UScriptStruct * __thiscall
FRigVMFunction_GetWorldTime::GetExecuteContextStruct(FRigVMFunction_GetWorldTime *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a1700b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_GetWorldTime::Execute(FRigVMFunction_GetWorldTime *this)

{
  FRigVMExecuteContext local_118;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  StaticExecute(&local_118,&this->Year,&this->Month,&this->Day,&this->WeekDay,&this->Hours,
                &this->Minutes,&this->Seconds,&this->OverallSeconds);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19e9c0

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
FRigVMFunction_GetWorldTime::Execute
          (FRigVMFunction_GetWorldTime *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Year,&this->Month,&this->Day,&this->WeekDay,&this->Hours,
                &this->Minutes,&this->Seconds,&this->OverallSeconds);
  return;
}

// RigVMExecute @ 14a1b9880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_GetWorldTime::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  FRigVMMemoryHandle *pFVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  FRigVMExecuteContext *pFVar13;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar2 = (float *)param_2->DataPtr->Ptr;
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar3 = (float *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar4 = (float *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar13,pfVar2,pfVar3,pfVar4,pfVar8,pfVar9,pfVar10,pfVar11,pfVar12);
  return;
}

// StaticExecute @ 14a1db6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_GetWorldTime::StaticExecute
          (FRigVMExecuteContext *param_1,float *param_2,float *param_3,float *param_4,float *param_5
          ,float *param_6,float *param_7,float *param_8,float *param_9)

{
  int iVar1;
  EDayOfWeek EVar2;
  longlong lVar3;
  longlong lVar4;
  FDateTime local_res10;
  
  FDateTime::Now();
  iVar1 = FDateTime::GetYear(&local_res10);
  *param_2 = (float)iVar1;
  iVar1 = FDateTime::GetMonth(&local_res10);
  *param_3 = (float)iVar1;
  iVar1 = FDateTime::GetDay(&local_res10);
  *param_4 = (float)iVar1;
  EVar2 = FDateTime::GetDayOfWeek(&local_res10);
  *param_5 = (float)(int)EVar2;
  *param_6 = (float)((int)(local_res10.Ticks / 36000000000) +
                    (int)((local_res10.Ticks / 36000000000) / 0x18) * -0x18);
  lVar4 = local_res10.Ticks / 600000000;
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
  *param_7 = (float)((int)lVar4 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c);
  lVar4 = local_res10.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res10.Ticks),8);
  lVar3 = (lVar4 >> 0x17) - (lVar4 >> 0x3f);
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  *param_8 = (float)((int)(local_res10.Ticks / 10000) +
                    (int)((local_res10.Ticks / 10000) / 1000) * -1000) * __real_3a83126f +
             (float)((int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c);
  QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
  *param_9 = (float)((double)(longlong)param_5 * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000);
  return;
}

