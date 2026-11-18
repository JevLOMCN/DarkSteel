// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f4430

UScriptStruct * __cdecl FRigUnit_EndProfilingTimer::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_EndProfilingTimer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_EndProfilingTimer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer,(UObject *)pUVar1,
                         L"RigUnit_EndProfilingTimer");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_EndProfilingTimer.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_EndProfilingTimer.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f44b0

UScriptStruct * __thiscall
FRigUnit_EndProfilingTimer::GetExecuteContextStruct(FRigUnit_EndProfilingTimer *this)

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

// Execute @ 14a4f4ad0

void __thiscall FRigUnit_EndProfilingTimer::Execute(FRigUnit_EndProfilingTimer *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  FString local_28 [2];
  
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
  iVar1 = this->NumberOfMeasurements;
  if (this->bIsInitialized == false) {
    this->AccumulatedTime = 0.0;
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    this->MeasurementsLeft = iVar2;
    this->bIsInitialized = true;
  }
  ::FString::FString(local_28,"");
  fVar3 = UKismetAnimationLibrary::K2_EndProfilingTimer(false,local_28);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (0 < this->MeasurementsLeft) {
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    this->AccumulatedTime = fVar3 / (float)iVar2 + this->AccumulatedTime;
    this->MeasurementsLeft = this->MeasurementsLeft + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a527420

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
FRigUnit_EndProfilingTimer::Execute(FRigUnit_EndProfilingTimer *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,this->NumberOfMeasurements,&this->Prefix,&this->AccumulatedTime,
                &this->MeasurementsLeft,&this->bIsInitialized,
                (FRigVMDebugDrawSettings *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a53dfc0

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
FRigUnit_EndProfilingTimer::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FString *pFVar7;
  FRigVMSlice *pFVar8;
  float *pfVar9;
  bool *pbVar10;
  FRigVMDebugDrawSettings *pFVar11;
  FRigVMExecuteContext *pFVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar3->Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  iVar2 = *piVar6;
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FString *)pFVar3[1].Ptr;
  }
  else {
    pFVar7 = (FString *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal
                              (param_2->DataPtr + 2,false,pFVar8->Offset + pFVar8->Index);
  if (param_2->ArrayNum < 4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar6 = (int *)FRigVMMemoryHandle::GetData_Internal
                            (param_2->DataPtr + 3,false,pFVar8->Offset + pFVar8->Index);
  if (param_2->ArrayNum < 5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar10 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (param_2->DataPtr + 4,false,pFVar8->Offset + pFVar8->Index);
  if (param_2->ArrayNum < 6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[5].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = (FRigVMDebugDrawSettings *)pFVar3[5].Ptr;
  }
  else {
    pFVar11 = (FRigVMDebugDrawSettings *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar3[5].PropertyPath,pFVar3[5].Ptr,pFVar3[5].Property);
  }
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar12,iVar2,pFVar7,pfVar9,piVar6,pbVar10,pFVar11);
  return;
}

// StaticExecute @ 14a56ee60

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
FRigUnit_EndProfilingTimer::StaticExecute
          (FRigVMExecuteContext *param_1,int param_2,FString *param_3,float *param_4,int *param_5,
          bool *param_6,FRigVMDebugDrawSettings *param_7)

{
  int iVar1;
  float fVar2;
  FString local_28 [2];
  
  if (*param_6 == false) {
    *param_4 = 0.0;
    iVar1 = 1;
    if (1 < param_2) {
      iVar1 = param_2;
    }
    *param_5 = iVar1;
    *param_6 = true;
  }
  ::FString::FString(local_28,"");
  fVar2 = UKismetAnimationLibrary::K2_EndProfilingTimer(false,local_28);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (0 < *param_5) {
    iVar1 = 1;
    if (1 < param_2) {
      iVar1 = param_2;
    }
    *param_4 = fVar2 / (float)iVar1 + *param_4;
    *param_5 = *param_5 + -1;
  }
  return;
}

