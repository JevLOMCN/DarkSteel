// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f2d60

UScriptStruct * __cdecl FRigUnit_StartProfilingTimer::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_StartProfilingTimer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_StartProfilingTimer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer,(UObject *)pUVar1,
                         L"RigUnit_StartProfilingTimer");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_StartProfilingTimer.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_StartProfilingTimer.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f2ea0

UScriptStruct * __thiscall
FRigUnit_StartProfilingTimer::GetExecuteContextStruct(FRigUnit_StartProfilingTimer *this)

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

// Execute @ 14a4f3470

void __thiscall FRigUnit_StartProfilingTimer::Execute(FRigUnit_StartProfilingTimer *this)

{
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
      UKismetAnimationLibrary::K2_StartProfilingTimer();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return;
    }
  }
  UKismetAnimationLibrary::K2_StartProfilingTimer();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a52e8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRigUnit_StartProfilingTimer::Execute
          (FRigUnit_StartProfilingTimer *this,FRigVMExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 auStack_98 [32];
  double *pdStack_78;
  FTlsAutoCleanup FStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  LARGE_INTEGER LStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  double dStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&LStack_40);
  puStack_30 = auStack_48;
  pcStack_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  dStack_28 = ((double)LStack_40.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) * __real_408f400000000000;
  uStack_20 = 0;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar2 = pFVar6[2];
  if (((ulonglong)FVar2 <= &dStack_28) &&
     (&dStack_28 < (double *)((longlong)*(int *)&pFVar6[3].field_0x4 * 0x10 + (longlong)FVar2))) {
    lStack_60 = (longlong)*(int *)(pFVar6 + 3);
    uStack_58 = 0x10;
    pdStack_78 = &dStack_28;
    FStack_70 = FVar2;
    lStack_68 = (longlong)*(int *)&pFVar6[3].field_0x4;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(pFVar6 + 3);
  if (iVar5 == *(int *)&pFVar6[3].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar6 + 2),(int *)&pFVar6[3].field_0x4);
  }
  *(int *)(pFVar6 + 3) = iVar5 + 1;
  pFVar1 = *(FScriptContainerElement **)(pFVar6 + 2) + (longlong)iVar5 * 0x10;
  *(double *)pFVar1 = dStack_28;
  *(undefined8 *)(pFVar1 + 8) = uStack_20;
  return;
}

// RigVMExecute @ 14a558d00

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
FRigUnit_StartProfilingTimer::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_2->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
  }
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  UKismetAnimationLibrary::K2_StartProfilingTimer();
  return;
}

// StaticExecute @ 14a59d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRigUnit_StartProfilingTimer::StaticExecute
          (FRigVMExecuteContext *param_1,FRigVMDebugDrawSettings *param_2)

{
  FScriptContainerElement *pFVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 auStack_98 [32];
  double *pdStack_78;
  FTlsAutoCleanup FStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  LARGE_INTEGER LStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  double dStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&LStack_40);
  puStack_30 = auStack_48;
  pcStack_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  dStack_28 = ((double)LStack_40.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) * __real_408f400000000000;
  uStack_20 = 0;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar2 = pFVar6[2];
  if (((ulonglong)FVar2 <= &dStack_28) &&
     (&dStack_28 < (double *)((longlong)*(int *)&pFVar6[3].field_0x4 * 0x10 + (longlong)FVar2))) {
    lStack_60 = (longlong)*(int *)(pFVar6 + 3);
    uStack_58 = 0x10;
    pdStack_78 = &dStack_28;
    FStack_70 = FVar2;
    lStack_68 = (longlong)*(int *)&pFVar6[3].field_0x4;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(pFVar6 + 3);
  if (iVar5 == *(int *)&pFVar6[3].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar6 + 2),(int *)&pFVar6[3].field_0x4);
  }
  *(int *)(pFVar6 + 3) = iVar5 + 1;
  pFVar1 = *(FScriptContainerElement **)(pFVar6 + 2) + (longlong)iVar5 * 0x10;
  *(double *)pFVar1 = dStack_28;
  *(undefined8 *)(pFVar1 + 8) = uStack_20;
  return;
}

