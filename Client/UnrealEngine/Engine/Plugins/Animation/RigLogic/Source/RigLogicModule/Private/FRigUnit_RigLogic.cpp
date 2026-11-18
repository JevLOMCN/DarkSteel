// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 30

// StaticStruct @ 14a65ab90

UScriptStruct * __cdecl FRigUnit_RigLogic::StaticStruct(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  UPackage *pUVar7;
  FRigVMRegistry_RWLock *this;
  UScriptStruct *pUVar8;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigLogic,(UObject *)pUVar7,
                         L"RigUnit_RigLogic");
    this = FRigVMRegistry_RWLock::Get();
    pUVar8 = Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.OuterSingleton;
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)this);
    local_20 = '\x01';
    local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    local_18 = this;
    AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    LOCK();
    local_18->WriteLockOwnerThread = aVar5;
    UNLOCK();
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      local_18->LockType = local_10;
      UNLOCK();
    }
    else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
            (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                ,0x249,"DesiredLockType != LockType_Write"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UScriptStruct *)(*pcVar3)();
      return pUVar8;
    }
    local_38.ArrayNum = 1;
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::RigVMFunctions;
    FRigVMRegistry_NoLock::RegisterCompiledInStruct_NoLock
              ((FRigVMRegistry_NoLock *)this,pUVar8,&local_38);
    if (local_20 != '\0') {
      LOCK();
      paVar1 = &local_18->LockCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        LOCK();
        local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
        if (((int)aVar2 + -1 < 0) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538070>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x26a,"CurrentLockCount >= 0"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar3)();
          return pUVar8;
        }
        aVar5 = local_18->WriteLockOwnerThread;
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar5 != aVar6) {
          ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
          return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.OuterSingleton;
        }
      }
      else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
        if ((aVar2 != (atomic<int>)0x1) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538060>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x274,"CurrentLockCount == 0"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar3)();
          return pUVar8;
        }
        LOCK();
        local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
        UNLOCK();
        ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
      }
    }
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.OuterSingleton;
}

// GetExecuteContextStruct @ 14a65ade0

UScriptStruct * __thiscall FRigUnit_RigLogic::GetExecuteContextStruct(FRigUnit_RigLogic *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a65adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_RigLogic::Execute(FRigUnit_RigLogic *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Data,&this->bIsInitialized);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// TestAccessor @ 14a660b50

TestAccessor * __thiscall
FRigUnit_RigLogic::TestAccessor::TestAccessor(TestAccessor *this,FRigUnit_RigLogic *param_1)

{
  this->Unit = param_1;
  (this->RawCtrlName).ComparisonIndex = 0;
  (this->RawCtrlName).Number = 0;
  (this->Hierarchy).Object = (UObject *)0x0;
  return this;
}

// AddToTransformArray @ 14a662330

void __thiscall
FRigUnit_RigLogic::TestAccessor::AddToTransformArray
          (TestAccessor *this,float *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  *param_1 = (float)(param_2->Translation).XY.m128d_f64[0];
  param_1[1] = (float)dVar1;
  param_1[2] = (float)dVar2;
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  param_1[3] = (float)(param_2->Rotation).XY.m128d_f64[0];
  param_1[4] = (float)dVar1;
  param_1[5] = (float)dVar2;
  param_1[6] = (float)dVar3;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[0];
  param_1[7] = (float)(param_2->Scale3D).XY.m128d_f64[0];
  param_1[8] = (float)dVar1;
  param_1[9] = (float)dVar2;
  return;
}

// CreateBehaviorReaderEmpty @ 14a669e60

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderEmpty
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar3;
  TSharedPtr<TestBehaviorReader,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x180);
  if (pTVar3 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    pTVar3 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar3);
    if (&pTVar3->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar3->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    if (pTVar3 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  return __return_storage_ptr__;
}

// CreateBehaviorReaderNoBlendshapes @ 14a669f10

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderNoBlendshapes
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1)

{
  TestBehaviorReader *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar4;
  TSharedPtr<TestBehaviorReader,1> *pTVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  pTVar4 = ::operator_new(0x180);
  if (pTVar4 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    pTVar4 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar4);
    if (&pTVar4->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar4->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar4;
    if (pTVar4 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar4->_padding_ = (int)pTVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar4);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  this_00 = __return_storage_ptr__->Object;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FString::FString(&local_18,pwVar7);
  TestBehaviorReader::addMeshName(this_00,pFVar6);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateBehaviorReaderOneAnimatedMap @ 14a66a060

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderOneAnimatedMap
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  TestBehaviorReader *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar7;
  TSharedPtr<TestBehaviorReader,1> *pTVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined2 local_28 [8];
  
  pTVar7 = ::operator_new(0x180);
  if (pTVar7 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    pTVar7 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar7);
    if (&pTVar7->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar7->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar7;
    if (pTVar7 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  pTVar9 = &pTVar2->animatedMaps;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(pTVar2->animatedMaps).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (pTVar2->animatedMaps).ArrayNum;
  piVar1 = &(pTVar2->animatedMaps).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
  }
  (pTVar2->animatedMaps).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  pTVar10 = &pTVar2->animatedMapIndicesLOD0;
  local_28[0] = 0;
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar3 + (longlong)(pTVar2->animatedMapIndicesLOD0).ArrayMax * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (pTVar2->animatedMapIndicesLOD0).ArrayNum;
  piVar1 = &(pTVar2->animatedMapIndicesLOD0).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&pTVar10->AllocatorInstance,piVar1);
  }
  (pTVar2->animatedMapIndicesLOD0).ArrayNum = iVar6 + 1;
  *(undefined2 *)((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 2) = local_28[0];
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// CreateBehaviorReaderOneBlendShape @ 14a66a320

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderOneBlendShape
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1,FString *param_2)

{
  int *piVar1;
  TestBehaviorReader *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar7;
  TSharedPtr<TestBehaviorReader,1> *pTVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined2 local_58 [4];
  FString local_50;
  FString local_40;
  FString local_30;
  
  pTVar7 = ::operator_new(0x180);
  if (pTVar7 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    pTVar7 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar7);
    if (&pTVar7->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar7->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar7;
    if (pTVar7 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar9 = ::FString::FString(&local_50,pwVar10);
  TestBehaviorReader::addBlendShapeChannelName(pTVar2,pFVar9);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar9 = ::FString::FString(&local_40,pwVar10);
  TestBehaviorReader::addBlendShapeChannelName(pTVar2,pFVar9);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar9 = ::FString::FString(&local_30,pwVar10);
  TestBehaviorReader::addMeshName(pTVar2,pFVar9);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TestBehaviorReader::addBlendShapeMapping(__return_storage_ptr__->Object,0,0);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  pTVar11 = &pTVar2->blendShapeMappingIndicesLOD0;
  local_58[0] = 0;
  pFVar3 = (pTVar11->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 <
      pFVar3 + (longlong)(pTVar2->blendShapeMappingIndicesLOD0).ArrayMax * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (pTVar2->blendShapeMappingIndicesLOD0).ArrayNum;
  piVar1 = &(pTVar2->blendShapeMappingIndicesLOD0).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&pTVar11->AllocatorInstance,piVar1);
  }
  (pTVar2->blendShapeMappingIndicesLOD0).ArrayNum = iVar6 + 1;
  *(undefined2 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 2) = local_58[0];
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// CreateBehaviorReaderOneCurve @ 14a66a670

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderOneCurve
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  TestBehaviorReader *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar7;
  TSharedPtr<TestBehaviorReader,1> *pTVar8;
  
  pTVar7 = ::operator_new(0x180);
  if (pTVar7 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    pTVar7 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar7);
    if (&pTVar7->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar7->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar7;
    if (pTVar7 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = __return_storage_ptr__->Object;
  pFVar3 = (pTVar2->rawControls).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(pTVar2->rawControls).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (pTVar2->rawControls).ArrayNum;
  piVar1 = &(pTVar2->rawControls).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pTVar2->rawControls).AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->rawControls).AllocatorInstance.Data;
  (pTVar2->rawControls).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)(pFVar3 + (longlong)iVar6 * 0x10),param_1);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// CreateBehaviorReaderTwoBlendShapes @ 14a66a830

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderTwoBlendShapes
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1,FString *param_2,FString *param_3)

{
  TestBehaviorReader *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar5;
  TSharedPtr<TestBehaviorReader,1> *pTVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar5 = ::operator_new(0x180);
  if (pTVar5 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    pTVar5 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar5);
    if (&pTVar5->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar5->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar5;
    if (pTVar5 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar5->_padding_ = (int)pTVar5->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar5);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = __return_storage_ptr__->Object;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::FString(&local_48,pwVar8);
  TestBehaviorReader::addBlendShapeChannelName(pTVar1,pFVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = __return_storage_ptr__->Object;
  if ((param_3->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::FString(&local_38,pwVar8);
  TestBehaviorReader::addBlendShapeChannelName(pTVar1,pFVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = __return_storage_ptr__->Object;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::FString(&local_28,pwVar8);
  TestBehaviorReader::addMeshName(pTVar1,pFVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  TestBehaviorReader::addBlendShapeMapping(__return_storage_ptr__->Object,0,0);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  TestBehaviorReader::addBlendShapeMapping(__return_storage_ptr__->Object,0,1);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// CreateBehaviorReaderTwoJoints @ 14a66aae0

TSharedPtr<TestBehaviorReader,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBehaviorReaderTwoJoints
          (TestAccessor *this,TSharedPtr<TestBehaviorReader,1> *__return_storage_ptr__,
          FString *param_1,FString *param_2)

{
  TestBehaviorReader *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TIntrusiveReferenceController<TestBehaviorReader,1> *pTVar5;
  TSharedPtr<TestBehaviorReader,1> *pTVar6;
  FString *pFVar7;
  FString local_38;
  FString local_28;
  
  pTVar5 = ::operator_new(0x180);
  if (pTVar5 == (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
    pTVar5 = (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0;
    __return_storage_ptr__->Object = (TestBehaviorReader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
             TIntrusiveReferenceController<TestBehaviorReader,1><>(pTVar5);
    if (&pTVar5->ObjectStorage == (TTypeCompatibleBytes<TestBehaviorReader> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (TestBehaviorReader *)&pTVar5->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar5;
    if (pTVar5 != (TIntrusiveReferenceController<TestBehaviorReader,1> *)0x0) {
      LOCK();
      *(int *)&pTVar5->_padding_ = (int)pTVar5->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar5);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = __return_storage_ptr__->Object;
  pFVar7 = ::FString::FString(&local_38,param_1);
  TestBehaviorReader::addJoint(pTVar1,pFVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = __return_storage_ptr__->Object;
  pFVar7 = ::FString::FString(&local_28,param_2);
  TestBehaviorReader::addJoint(pTVar1,pFVar7);
  if (__return_storage_ptr__->Object == (TestBehaviorReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<TestBehaviorReader,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object->LODCount = 1;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// CreateBoneHierarchyEmpty @ 14a66ac80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FRigUnit_RigLogic::TestAccessor::CreateBoneHierarchyEmpty(TestAccessor *this)

{
  UObject *pUVar1;
  URigHierarchy *this_00;
  UObject *in_RDX;
  
  pUVar1 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar1);
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (URigHierarchy *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    *(URigHierarchy **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// CreateBoneHierarchyTwoBones @ 14a66acd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
FRigUnit_RigLogic::TestAccessor::CreateBoneHierarchyTwoBones
          (TestAccessor *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  UObject *pUVar12;
  URigHierarchy *this_00;
  TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar13;
  URigHierarchyController *this_01;
  FName *pFVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  undefined8 *in_R9;
  FName local_res10;
  FName local_res18;
  uint local_1a8;
  FRigElementKey local_198;
  FRigElementKey local_188;
  FRigElementKey local_178;
  FRigElementKey local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8 [2];
  
  pUVar12 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar12);
  pwVar16 = L"";
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (this_00 == (URigHierarchy *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      TVar13.Object = (UObject *)(*pcVar2)();
      return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              )TVar13.Object;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)this_00);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  }
  this_01 = URigHierarchy::GetController
                      ((URigHierarchy *)(param_1->Data).AllocatorInstance.Data,true);
  local_158.Translation.XY.m128d_f64[1] = _UNK_150689518;
  local_158.Translation.XY.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8 = local_1a8 & 0xffffff00;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  if ((param_2->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_res10,pwVar15);
  local_198._0_8_ = ZEXT48(local_1a8);
  local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_158.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_158.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_158.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_158.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_158.Translation.ZW.m128d_f64[0] = 0.0;
  local_158.Translation.ZW.m128d_f64[1] = 0.0;
  local_158.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_158.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_158.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_158.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_158.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_158.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_198.Name.Number = 0;
  URigHierarchyController::AddBone
            (this_01,&local_188,*pFVar14,&local_198,&local_158,true,User,false,false);
  local_f8[0].Translation.ZW.m128d_f64[1] = _UNK_15076acf8;
  local_f8[0].Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004008000000000000;
  local_f8[0].Translation.XY.m128d_f64[1] = _UNK_150744178;
  local_f8[0].Translation.XY.m128d_f64[0] = ___xmm_40000000000000003ff0000000000000;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  if (*(int *)(in_R9 + 1) != 0) {
    pwVar16 = (wchar_t *)*in_R9;
  }
  pFVar14 = ::FName::FName(&local_res18,pwVar16);
  local_f8[0].Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_f8[0].Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_f8[0].Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_f8[0].Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_f8[0].Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_f8[0].Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_f8[0].Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_f8[0].Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_f8[0].Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_f8[0].Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_178.Type = local_188.Type;
  local_178._1_3_ = local_188._1_3_;
  local_178.Name.ComparisonIndex.Value = local_188.Name.ComparisonIndex.Value;
  local_178.Name.Number = local_188.Name.Number;
  URigHierarchyController::AddBone
            (this_01,&local_168,*pFVar14,&local_178,local_f8,true,User,false,false);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)*in_R9 != (void *)0x0) {
    FMemory::Free((void *)*in_R9);
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// CreateCurveContainerEmpty @ 14a66af50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FRigUnit_RigLogic::TestAccessor::CreateCurveContainerEmpty(TestAccessor *this)

{
  UObject *pUVar1;
  URigHierarchy *this_00;
  UObject *in_RDX;
  
  pUVar1 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar1);
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (URigHierarchy *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    *(URigHierarchy **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// CreateCurveContainerOneCurve @ 14a66afa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
FRigUnit_RigLogic::TestAccessor::CreateCurveContainerOneCurve(TestAccessor *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  URigHierarchy *this_00;
  TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  URigHierarchyController *this_01;
  FName *pFVar5;
  wchar_t *pwVar6;
  undefined8 *in_R8;
  FName local_res10;
  FRigElementKey local_18;
  
  pUVar3 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar3);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar6 = L"";
  if (this_00 == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Object = (UObject *)(*pcVar1)();
      return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              )TVar4.Object;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)this_00);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  }
  this_01 = URigHierarchy::GetController
                      ((URigHierarchy *)(param_1->Data).AllocatorInstance.Data,true);
  if (*(int *)(in_R8 + 1) != 0) {
    pwVar6 = (wchar_t *)*in_R8;
  }
  pFVar5 = ::FName::FName(&local_res10,pwVar6);
  URigHierarchyController::AddCurve(this_01,&local_18,*pFVar5,0.0,true,false);
  if ((void *)*in_R8 != (void *)0x0) {
    FMemory::Free((void *)*in_R8);
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// CreateCurveContainerOneMorphTarget @ 14a66b080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
FRigUnit_RigLogic::TestAccessor::CreateCurveContainerOneMorphTarget
          (TestAccessor *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  URigHierarchy *this_00;
  TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  URigHierarchyController *this_01;
  FName *pFVar5;
  wchar_t *pwVar6;
  undefined8 *in_R8;
  FName local_res10;
  FRigElementKey local_18;
  
  pUVar3 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar3);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar6 = L"";
  if (this_00 == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Object = (UObject *)(*pcVar1)();
      return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              )TVar4.Object;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)this_00);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  }
  this_01 = URigHierarchy::GetController
                      ((URigHierarchy *)(param_1->Data).AllocatorInstance.Data,true);
  if (*(int *)(in_R8 + 1) != 0) {
    pwVar6 = (wchar_t *)*in_R8;
  }
  pFVar5 = ::FName::FName(&local_res10,pwVar6);
  URigHierarchyController::AddCurve(this_01,&local_18,*pFVar5,0.0,true,false);
  if ((void *)*in_R8 != (void *)0x0) {
    FMemory::Free((void *)*in_R8);
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// CreateCurveContainerTwoMorphTargets @ 14a66b160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
FRigUnit_RigLogic::TestAccessor::CreateCurveContainerTwoMorphTargets
          (TestAccessor *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  URigHierarchy *this_00;
  TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  URigHierarchyController *this_01;
  FName *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 *in_R9;
  FName local_res10;
  FName local_res18;
  FRigElementKey local_38;
  FRigElementKey local_2c;
  
  pUVar4 = GetTransientPackageAsObject();
  this_00 = NewObject<URigHierarchy>(pUVar4);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar8 = L"";
  if (this_00 == (URigHierarchy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Object = (UObject *)(*pcVar2)();
      return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              )TVar5.Object;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)this_00);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  }
  this_01 = URigHierarchy::GetController
                      ((URigHierarchy *)(param_1->Data).AllocatorInstance.Data,true);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res10,pwVar7);
  URigHierarchyController::AddCurve(this_01,&local_38,*pFVar6,0.0,true,false);
  if (*(int *)(in_R9 + 1) != 0) {
    pwVar8 = (wchar_t *)*in_R9;
  }
  pFVar6 = ::FName::FName(&local_res18,pwVar8);
  URigHierarchyController::AddCurve(this_01,&local_2c,*pFVar6,0.0,true,false);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)*in_R9 != (void *)0x0) {
    FMemory::Free((void *)*in_R9);
  }
  return (TStrongObjectPtr<URigHierarchy,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// CreateTwoJointNeutralTransforms @ 14a66b4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArrayView<float_const_,int> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateTwoJointNeutralTransforms
          (TestAccessor *this,TArrayView<float_const_,int> *__return_storage_ptr__,float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  TQuat<double> *pTVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar52;
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  double dVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  TVector<double>_u_0 local_148;
  TTransform<double> local_128;
  TQuat<double> local_c8 [6];
  
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar64 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar67 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar54 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar62 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  local_148._s_0.X = ___xmm_00000000000000004056800000000000;
  local_148._s_0.Y = _UNK_150b45b78;
  local_148._s_0.Z = 0.0;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  pTVar17 = UE::Math::TQuat<double>::MakeFromEuler(local_c8,(TVector<double> *)&local_148._s_0);
  dVar66 = _UNK_150689688;
  dVar63 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = pTVar17->Z;
  dVar12 = pTVar17->W;
  uVar1 = pTVar17->X;
  uVar3 = pTVar17->Y;
  auVar46._8_4_ = SUB84(dVar62,0);
  auVar46._0_8_ = dVar54;
  uVar52 = (undefined4)((ulonglong)dVar62 >> 0x20);
  auVar46._12_4_ = uVar52;
  dVar51 = auVar46._8_8_;
  auVar18._8_4_ = SUB84(dVar62,0);
  auVar18._0_8_ = dVar51;
  auVar18._12_4_ = uVar52;
  auVar31._8_4_ = SUB84(dVar67,0);
  auVar31._0_8_ = dVar67;
  auVar31._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
  auVar19._8_4_ = (int)uVar1;
  auVar19._0_8_ = uVar3;
  auVar19._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar16 = (double)uVar3 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + dVar51 * dVar13 +
           dVar67 * (double)uVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar12 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar55 = (double)uVar1 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar62 * dVar12 +
           dVar67 * (double)uVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar13 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar65 = ___xmm_00000000000000003ff0000000000000 * (double)fVar11;
  dVar68 = _UNK_150689518 * (double)fVar7;
  dVar62 = dVar12 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar51 * (double)uVar1 +
           dVar67 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)uVar3 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar54 = dVar13 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar18._8_8_ * (double)uVar3 +
           auVar31._8_8_ * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + auVar19._8_8_ * dVar54 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar51 = (double)fVar5 * 0.0;
  dVar13 = (double)fVar8 * 0.0;
  auVar47._8_4_ = SUB84(dVar54,0);
  auVar47._0_8_ = dVar62;
  auVar47._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  auVar56._8_4_ = SUB84(dVar68,0);
  auVar56._0_8_ = dVar65;
  uVar52 = (undefined4)((ulonglong)dVar68 >> 0x20);
  auVar56._12_4_ = uVar52;
  auVar15._8_4_ = SUB84(dVar55,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
  auVar48 = blendpd(auVar47,auVar15,2);
  auVar32._8_4_ = SUB84(dVar68,0);
  auVar32._0_8_ = dVar65;
  auVar32._12_4_ = uVar52;
  auVar20._8_4_ = SUB84(dVar16,0);
  auVar20._0_8_ = dVar54;
  auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar33._8_4_ = SUB84(dVar13,0);
  auVar33._0_8_ = dVar51;
  auVar33._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar33 = blendpd(auVar32,auVar33,2);
  auVar57._0_8_ = auVar56._8_8_ * dVar62 - dVar54 * dVar65;
  auVar57._8_8_ = dVar51 * dVar54 - auVar20._8_8_ * dVar68;
  auVar34._0_8_ = auVar33._0_8_ * dVar16 - auVar48._0_8_ * dVar51;
  auVar34._8_8_ = auVar33._8_8_ * dVar55 - auVar48._8_8_ * dVar13;
  auVar33 = blendpd(auVar57,auVar34,2);
  dVar13 = auVar57._8_8_ + auVar57._8_8_;
  dVar12 = auVar34._0_8_ + auVar34._0_8_;
  uVar52 = SUB84(dVar12,0);
  uVar53 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar58._0_8_ = auVar33._0_8_ + auVar33._0_8_;
  auVar58._8_8_ = auVar33._8_8_ + auVar33._8_8_;
  auVar42._8_4_ = uVar52;
  auVar42._0_8_ = dVar13;
  auVar42._12_4_ = uVar53;
  auVar21._8_4_ = uVar52;
  auVar21._0_8_ = dVar13;
  auVar21._12_4_ = uVar53;
  auVar35._8_4_ = uVar52;
  auVar35._0_8_ = dVar13;
  auVar35._12_4_ = uVar53;
  auVar33 = blendpd(auVar35,auVar58,2);
  auVar43._0_8_ = auVar42._8_8_ * dVar62 - dVar13 * dVar54;
  auVar43._8_8_ = auVar58._0_8_ * dVar54 - auVar21._8_8_ * dVar16;
  auVar22._8_4_ = SUB84(auVar58._8_8_,0);
  auVar22._0_8_ = auVar58._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  auVar36._0_8_ = auVar33._0_8_ * dVar16 - auVar58._0_8_ * auVar48._0_8_;
  auVar36._8_8_ = auVar33._8_8_ * dVar55 - auVar22._8_8_ * auVar48._8_8_;
  auVar23._8_4_ = SUB84(auVar43._8_8_,0);
  auVar23._0_8_ = auVar43._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar33 = blendpd(auVar43,auVar36,2);
  *param_1 = (float)(dVar13 * dVar55 + dVar65 + auVar23._8_8_ + (double)fVar10);
  param_1[1] = (float)(dVar12 * dVar55 + dVar68 + auVar36._0_8_ + (double)fVar9);
  param_1[2] = (float)(auVar58._0_8_ * dVar55 + dVar51 + auVar33._0_8_ + (double)fVar6);
  param_1[3] = (float)dVar62;
  param_1[4] = (float)dVar54;
  param_1[5] = (float)dVar16;
  param_1[6] = (float)dVar55;
  param_1[7] = (float)dVar63;
  param_1[8] = (float)dVar66;
  param_1[9] = 0.0;
  dVar66 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar64 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar55 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar63 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  local_148._s_0.X = ___xmm_00000000000000004056800000000000;
  local_148._s_0.Y = _UNK_150b45b78;
  local_148._s_0.Z = 0.0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar17 = UE::Math::TQuat<double>::MakeFromEuler(local_c8,(TVector<double> *)&local_148._s_0);
  dVar13 = pTVar17->Z;
  dVar12 = pTVar17->W;
  auVar49._8_4_ = SUB84(dVar63,0);
  auVar49._0_8_ = dVar55;
  uVar52 = (undefined4)((ulonglong)dVar63 >> 0x20);
  auVar49._12_4_ = uVar52;
  uVar2 = pTVar17->X;
  uVar4 = pTVar17->Y;
  dVar51 = auVar49._8_8_;
  auVar24._8_4_ = SUB84(dVar63,0);
  auVar24._0_8_ = dVar51;
  auVar24._12_4_ = uVar52;
  auVar25._8_4_ = (int)uVar2;
  auVar25._0_8_ = uVar4;
  auVar25._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar37._8_4_ = SUB84(dVar64,0);
  auVar37._0_8_ = dVar64;
  auVar37._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
  dVar62 = dVar12 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar51 * (double)uVar2 +
           dVar64 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)uVar4 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar54 = dVar13 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar24._8_8_ * (double)uVar4 +
           auVar37._8_8_ * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + auVar25._8_8_ * dVar55 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar71 = (undefined4)((ulonglong)dVar54 >> 0x20);
  dVar16 = (double)uVar4 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + dVar51 * dVar13 +
           dVar64 * (double)uVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar12 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar55 = (double)uVar2 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar63 * dVar12 +
           dVar64 * (double)uVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar13 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar72 = (undefined4)((ulonglong)dVar55 >> 0x20);
  dVar63 = ___xmm_00000000000000003ff0000000000000 * (double)fVar11;
  dVar66 = _UNK_150689518 * (double)fVar8;
  dVar51 = (double)fVar6 * 0.0;
  dVar13 = (double)fVar9 * 0.0;
  uVar69 = SUB84(dVar13,0);
  uVar70 = (undefined4)((ulonglong)dVar13 >> 0x20);
  uVar52 = SUB84(dVar66,0);
  auVar59._8_4_ = uVar52;
  auVar59._0_8_ = dVar63;
  uVar53 = (undefined4)((ulonglong)dVar66 >> 0x20);
  auVar59._12_4_ = uVar53;
  local_128.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar54,0);
  local_128.Rotation.XY.m128d_f64[0] = dVar62;
  local_128.Rotation.XY.m128d_f64[1]._4_4_ = uVar71;
  auVar26._8_4_ = uVar52;
  auVar26._0_8_ = dVar63;
  auVar26._12_4_ = uVar53;
  auVar50._8_4_ = SUB84(dVar54,0);
  auVar50._0_8_ = dVar62;
  auVar50._12_4_ = uVar71;
  local_128.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar55,0);
  local_128.Rotation.ZW.m128d_f64[0] = dVar16;
  local_128.Rotation.ZW.m128d_f64[1]._4_4_ = uVar72;
  auVar60._0_8_ = auVar59._8_8_ * dVar62 - dVar63 * dVar54;
  auVar60._8_8_ = dVar51 * dVar54 - auVar26._8_8_ * dVar16;
  auVar38._8_4_ = uVar52;
  auVar38._0_8_ = dVar63;
  auVar38._12_4_ = uVar53;
  auVar27._8_4_ = uVar69;
  auVar27._0_8_ = dVar51;
  auVar27._12_4_ = uVar70;
  auVar48._8_4_ = uVar69;
  auVar48._0_8_ = dVar51;
  auVar48._12_4_ = uVar70;
  auVar33 = blendpd(auVar38,auVar48,2);
  auVar14._8_4_ = SUB84(dVar55,0);
  auVar14._0_8_ = dVar16;
  auVar14._12_4_ = uVar72;
  auVar48 = blendpd(auVar50,auVar14,2);
  auVar39._0_8_ = auVar33._0_8_ * dVar16 - dVar51 * auVar48._0_8_;
  auVar39._8_8_ = auVar33._8_8_ * dVar55 - auVar27._8_8_ * auVar48._8_8_;
  dVar13 = auVar60._8_8_ + auVar60._8_8_;
  dVar12 = auVar39._0_8_ + auVar39._0_8_;
  uVar52 = SUB84(dVar12,0);
  uVar53 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar33 = blendpd(auVar60,auVar39,2);
  auVar61._0_8_ = auVar33._0_8_ + auVar33._0_8_;
  auVar61._8_8_ = auVar33._8_8_ + auVar33._8_8_;
  auVar44._8_4_ = uVar52;
  auVar44._0_8_ = dVar13;
  auVar44._12_4_ = uVar53;
  auVar28._8_4_ = uVar52;
  auVar28._0_8_ = dVar13;
  auVar28._12_4_ = uVar53;
  local_128.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_128.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar40._8_4_ = uVar52;
  auVar40._0_8_ = dVar13;
  auVar40._12_4_ = uVar53;
  auVar33 = blendpd(auVar40,auVar61,2);
  auVar45._0_8_ = auVar44._8_8_ * dVar62 - dVar13 * dVar54;
  auVar45._8_8_ = auVar61._0_8_ * dVar54 - auVar28._8_8_ * dVar16;
  auVar29._8_4_ = SUB84(auVar61._8_8_,0);
  auVar29._0_8_ = auVar61._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar41._0_8_ = auVar33._0_8_ * dVar16 - auVar61._0_8_ * auVar48._0_8_;
  auVar41._8_8_ = auVar33._8_8_ * dVar55 - auVar29._8_8_ * auVar48._8_8_;
  auVar30._8_4_ = SUB84(auVar45._8_8_,0);
  auVar30._0_8_ = auVar45._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
  auVar33 = blendpd(auVar45,auVar41,2);
  local_128.Translation.ZW.m128d_f64[0] =
       auVar61._0_8_ * dVar55 + dVar51 + auVar33._0_8_ + (double)fVar5;
  dVar12 = dVar12 * dVar55 + dVar66 + auVar41._0_8_ + (double)fVar7;
  local_128.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_128.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  local_128.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
  local_128.Translation.XY.m128d_f64[0] = dVar13 * dVar55 + dVar63 + auVar30._8_8_ + (double)fVar10;
  local_128.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
  AddToTransformArray(this,param_1 + 10,&local_128);
  __return_storage_ptr__->DataPtr = param_1;
  __return_storage_ptr__->ArrayNum = 0x14;
  return __return_storage_ptr__;
}

// CreateTwoJointVariableAttributes @ 14a66ba80

TArrayView<unsigned_short_const_,int> * __thiscall
FRigUnit_RigLogic::TestAccessor::CreateTwoJointVariableAttributes
          (TestAccessor *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort *param_1,uchar param_2)

{
  param_1[0] = 0;
  param_1[1] = 1;
  param_1[2] = 2;
  param_1[3] = 3;
  param_1[4] = 4;
  param_1[5] = 5;
  param_1[6] = 6;
  param_1[7] = 7;
  param_1[8] = 8;
  param_1[9] = 9;
  __return_storage_ptr__->DataPtr = param_1;
  if (param_2 == '\0') {
    param_1[10] = 10;
    param_1[0xb] = 0xb;
    param_1[0xc] = 0xc;
    param_1[0xd] = 0xd;
    param_1[0xe] = 0xe;
    param_1[0xf] = 0xf;
    param_1[0x10] = 0x10;
    param_1[0x11] = 0x11;
    param_1[0x12] = 0x12;
    param_1[0x13] = 0x13;
    __return_storage_ptr__->ArrayNum = 0x14;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = 10;
  return __return_storage_ptr__;
}

// Exec_MapInputCurve @ 14a66c1b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::TestAccessor::Exec_MapInputCurve(TestAccessor *this,URigHierarchy *param_1)

{
  FRigUnit_RigLogic_Data::MapInputCurveIndices(&this->Unit->Data,param_1);
  return;
}

// Exec_MapJoints @ 14a66c1d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::TestAccessor::Exec_MapJoints(TestAccessor *this,URigHierarchy *param_1)

{
  FRigUnit_RigLogic_Data::MapJoints(&this->Unit->Data,param_1);
  return;
}

// Exec_MapMaskMultipliers @ 14a66c1f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::TestAccessor::Exec_MapMaskMultipliers(TestAccessor *this,URigHierarchy *param_1)

{
  FRigUnit_RigLogic_Data::MapMaskMultipliers(&this->Unit->Data,param_1);
  return;
}

// Exec_MapMorphTargets @ 14a66c210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::TestAccessor::Exec_MapMorphTargets(TestAccessor *this,URigHierarchy *param_1)

{
  FRigUnit_RigLogic_Data::MapMorphTargets(&this->Unit->Data,param_1);
  return;
}

// Exec_UpdateJoints @ 14a66c230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::TestAccessor::Exec_UpdateJoints
          (TestAccessor *this,URigHierarchy *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3)

{
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FRigUnit_RigLogic_Data::UpdateJoints(&this->Unit->Data,param_1,&local_18,&local_28);
  return;
}

// Execute @ 14a66c270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic::Execute(FRigUnit_RigLogic *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Data,&this->bIsInitialized);
  return;
}

// GetSharedRigRuntimeContext @ 14a678ef0

TSharedPtr<FSharedRigRuntimeContext,1> * __cdecl
FRigUnit_RigLogic::GetSharedRigRuntimeContext
          (TSharedPtr<FSharedRigRuntimeContext,1> *__return_storage_ptr__,USkeletalMesh *param_1)

{
  int iVar1;
  code *pcVar2;
  UDNAAsset *this;
  UClass *pUVar3;
  UClass *local_res10;
  
  pcVar2 = *(code **)(param_1->_padding_ + 0x18);
  local_res10 = UDNAAsset::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  this = (UDNAAsset *)(*pcVar2)(&param_1->_padding_,&local_res10);
  if (this == (UDNAAsset *)0x0) {
    __return_storage_ptr__->Object = (FSharedRigRuntimeContext *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pUVar3 = UDNAAsset::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    this = (UDNAAsset *)0x0;
  }
  UDNAAsset::GetRigRuntimeContext(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSharedRigRuntimeContext @ 14a678fb0

TSharedPtr<FSharedRigRuntimeContext,1> * __thiscall
FRigUnit_RigLogic::TestAccessor::GetSharedRigRuntimeContext
          (TestAccessor *this,TSharedPtr<FSharedRigRuntimeContext,1> *__return_storage_ptr__,
          USkeletalMesh *param_1)

{
  FRigUnit_RigLogic::GetSharedRigRuntimeContext(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a681be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RigLogic::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRigVMSlice *pFVar3;
  FRigUnit_RigLogic_Data *pFVar4;
  bool *pbVar5;
  FControlRigExecuteContext *pFVar6;
  
  if (param_2->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar4 = (FRigUnit_RigLogic_Data *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr,false,pFVar3->Offset + pFVar3->Index);
  if (param_2->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar5 = (bool *)FRigVMMemoryHandle::GetData_Internal
                             (param_2->DataPtr + 1,false,pFVar3->Offset + pFVar3->Index);
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar6,pFVar4,pbVar5);
  return;
}

// StaticExecute @ 14a682990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_RigLogic::StaticExecute
          (FControlRigExecuteContext *param_1,FRigUnit_RigLogic_Data *param_2,bool *param_3)

{
  int *piVar1;
  int iVar2;
  URigHierarchy *pUVar3;
  UAnimationDataSourceRegistry *this;
  RigLogic *pRVar4;
  RigInstance *pRVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float *pfVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FRigUnit_RigLogic::StaticExecute(FControlRigExecuteContext_&,FRigUnit_RigLogic_Data_&,bool_&)_::_2_::FStat_STAT_RigUnit_RigLogic_Execute>
  FVar14;
  UClass *pUVar15;
  FName FVar16;
  USkeletalMeshComponent *pUVar17;
  USkeletalMesh *pUVar18;
  UObject *pUVar19;
  FSharedRigRuntimeContext *pFVar20;
  FRigLogic *pFVar21;
  FRigLogic *pFVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar23;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  FName local_168;
  FName local_158;
  float *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  LARGE_INTEGER local_138;
  FStatMessage local_130;
  float *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  FName local_c8;
  FName local_c0;
  TSharedPtr<FSharedRigRuntimeContext,1> local_b8;
  TSharedPtr<FSharedRigRuntimeContext,1> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic::StaticExecute");
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RigUnit_RigLogic_Execute ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_FRigUnit_RigLogic::StaticExecute(FControlRigExecuteContext_&,FRigUnit_RigLogic_Data_&,bool_&)_::_2_::FStat_STAT_RigUnit_RigLogic_Execute>
           )0x0) {
        pFVar13 = ::FName::FName(&local_c8,"STAT_RigUnit_RigLogic_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_Execute,*pFVar13,
                   L"STAT_RigUnit_RigLogic_Execute","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_STAT_RigUnit_RigLogic_Execute;
  if (StatPtr_STAT_RigUnit_RigLogic_Execute ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FRigUnit_RigLogic::StaticExecute(FControlRigExecuteContext_&,FRigUnit_RigLogic_Data_&,bool_&)_::_2_::FStat_STAT_RigUnit_RigLogic_Execute>
       )0x0) {
    pFVar13 = ::FName::FName(&local_c0,"STAT_RigUnit_RigLogic_Execute");
    FVar14 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FRigUnit_RigLogic::StaticExecute(FControlRigExecuteContext_&,FRigUnit_RigLogic_Data_&,bool_&)_::_2_::FStat_STAT_RigUnit_RigLogic_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_Execute,
                          *pFVar13,L"STAT_RigUnit_RigLogic_Execute","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar16 = *(FName *)FVar14;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res20.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x204);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_158 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar10 = true;
      local_168 = FVar16;
    }
  }
  pUVar3 = param_1->Hierarchy;
  if (pUVar3 == (URigHierarchy *)0x0) goto LAB_14a682e86;
  if (*param_3 == false) {
    bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
    if (!bVar12) {
      this = (param_1->UnitContext).DataSourceRegistry;
      pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      FVar16 = (FName)UAnimationDataSourceRegistry::RequestSource
                                (this,&UControlRig::OwnerComponent,pUVar15);
      if (FVar16 != (FName)0x0) {
        pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar2 = (int)pUVar15->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar15->_padding_)) {
          FVar23 = FVar16;
        }
      }
      local_158 = FVar23;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar23 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar23);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)&local_158);
    }
    bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
    if (!bVar12) goto LAB_14a682e86;
    pUVar17 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    pUVar18 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar17);
    if (pUVar18 == (USkeletalMesh *)0x0) goto LAB_14a682e86;
    pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    param_2->CurrentLOD = *(uint *)&pUVar19[0x31].field_0xc;
    pUVar17 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    pUVar18 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar17);
    GetSharedRigRuntimeContext(&local_b8,pUVar18);
    local_a8.Object = local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FRigUnit_RigLogic_Data::InitializeRigLogic(param_2,pUVar3,&local_a8);
    *param_3 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
  if ((((bVar12) && ((param_2->LocalRigRuntimeContext).Object != (FSharedRigRuntimeContext *)0x0))
      && ((((param_2->LocalRigRuntimeContext).Object)->RigLogic).Object != (FRigLogic *)0x0)) &&
     ((param_2->RigInstance).Ptr != (FRigInstance *)0x0)) {
    pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    param_2->CurrentLOD = *(uint *)&pUVar19[0x31].field_0xc;
    pFVar20 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&param_2->LocalRigRuntimeContext);
    pFVar21 = TSharedPtr<FRigLogic,1>::operator->(&pFVar20->RigLogic);
    pFVar20 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&param_2->LocalRigRuntimeContext);
    pFVar22 = TSharedPtr<FRigLogic,1>::operator->(&pFVar20->RigLogic);
    pRVar4 = (pFVar22->RigLogic).Ptr;
    (**(code **)((longlong)*pRVar4 + 0x48))(pRVar4,&local_120);
    local_f8 = local_120;
    iStack_f0 = local_118;
    if (local_118 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pRVar5 = (((param_2->RigInstance).Ptr)->RigInstance).Ptr;
    (**(code **)((longlong)*pRVar5 + 0xb8))(pRVar5,&local_110);
    local_148 = local_110;
    iStack_140 = local_108;
    if (local_108 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pfVar11 = local_f8;
    uVar7._4_4_ = uStack_ec;
    uVar7._0_4_ = iStack_f0;
    local_98.DataPtr = local_f8;
    local_98._8_8_ = uVar7;
    FRigUnit_RigLogic_Data::CalculateRigLogic(param_2,pUVar3,&local_98);
    if ((pFVar21->Configuration).LoadJoints != false) {
      local_88._12_4_ = uStack_13c;
      local_88.ArrayNum = iStack_140;
      local_88.DataPtr = local_148;
      local_78.DataPtr = pfVar11;
      local_78._8_8_ = uVar7;
      FRigUnit_RigLogic_Data::UpdateJoints(param_2,pUVar3,&local_78,&local_88);
    }
    if ((pFVar21->Configuration).LoadBlendShapes != false) {
      pRVar5 = (((param_2->RigInstance).Ptr)->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar5 + 0xc0))(pRVar5,&local_e8);
      local_148 = local_e8;
      iStack_140 = local_e0;
      if (local_e0 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_68._12_4_ = uStack_13c;
      local_68.ArrayNum = iStack_140;
      local_68.DataPtr = local_148;
      FRigUnit_RigLogic_Data::UpdateBlendShapeCurves(param_2,pUVar3,&local_68);
    }
    if ((pFVar21->Configuration).LoadAnimatedMaps != false) {
      pRVar5 = (((param_2->RigInstance).Ptr)->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar5 + 200))(pRVar5,&local_d8);
      local_148 = local_d8;
      iStack_140 = local_d0;
      if (local_d0 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_58[0]._12_4_ = uStack_13c;
      local_58[0].ArrayNum = iStack_140;
      local_58[0].DataPtr = local_148;
      FRigUnit_RigLogic_Data::UpdateAnimMapCurves(param_2,pUVar3,local_58);
    }
  }
LAB_14a682e86:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (local_168 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_130.NameAndInfo.Index = local_168.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = local_168.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_130);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

