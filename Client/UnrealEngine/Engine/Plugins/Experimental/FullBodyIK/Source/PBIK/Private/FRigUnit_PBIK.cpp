// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 8

// StaticStruct @ 14ded3940

UScriptStruct * __cdecl FRigUnit_PBIK::StaticStruct(void)

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
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PBIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_PBIK();
    Z_Registration_Info_UScriptStruct_FRigUnit_PBIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PBIK,(UObject *)pUVar7,L"RigUnit_PBIK");
    this = FRigVMRegistry_RWLock::Get();
    pUVar8 = Z_Registration_Info_UScriptStruct_FRigUnit_PBIK.OuterSingleton;
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
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::RigVMFunctions;
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
          return Z_Registration_Info_UScriptStruct_FRigUnit_PBIK.OuterSingleton;
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
  return Z_Registration_Info_UScriptStruct_FRigUnit_PBIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14ded3b90

UScriptStruct * __thiscall FRigUnit_PBIK::GetExecuteContextStruct(FRigUnit_PBIK *this)

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

// Execute @ 14ded3ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PBIK::Execute(FRigUnit_PBIK *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2e8 [32];
  TArrayView<FName_const_,int> local_298;
  TArrayView<FPBIKBoneSetting_const_,int> local_288;
  TArrayView<FPBIKEffector_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
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
  local_278.DataPtr = (FPBIKEffector *)(this->Effectors).AllocatorInstance.Data;
  iVar1 = (this->Effectors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.DataPtr = (FPBIKBoneSetting *)(this->BoneSettings).AllocatorInstance.Data;
  iVar2 = (this->BoneSettings).ArrayNum;
  local_278.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_298.DataPtr = (FName *)(this->ExcludedBones).AllocatorInstance.Data;
  iVar1 = (this->ExcludedBones).ArrayNum;
  local_288.ArrayNum = iVar2;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_298.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Root,&local_278,
                &this->EffectorSolverIndices,&local_288,&local_298,&this->Settings,&this->Debug,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_PBIK @ 14ded66c0

FRigUnit_PBIK * __thiscall FRigUnit_PBIK::FRigUnit_PBIK(FRigUnit_PBIK *this)

{
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_PBIK__6B_;
  (this->Root).ComparisonIndex = 0;
  (this->Root).Number = 0;
  (this->Effectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors).ArrayNum = 0;
  (this->Effectors).ArrayMax = 0;
  (this->EffectorSolverIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectorSolverIndices).ArrayNum = 0;
  (this->EffectorSolverIndices).ArrayMax = 0;
  (this->BoneSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSettings).ArrayNum = 0;
  (this->BoneSettings).ArrayMax = 0;
  (this->ExcludedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedBones).ArrayNum = 0;
  (this->ExcludedBones).ArrayMax = 0;
  (this->Settings).bAllowStretch = false;
  (this->Settings).RootBehavior = PrePull;
  (this->Settings).PrePullRootSettings.RotationAlpha = 0.0;
  (this->Debug).bDrawDebug = false;
  (this->WorkData).BoneSettingToSolverBoneIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorkData).BoneSettingToSolverBoneIndex.ArrayNum = 0;
  (this->WorkData).BoneSettingToSolverBoneIndex.ArrayMax = 0;
  (this->WorkData).SolverBoneToElementIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).SolverBoneToElementIndex.ArrayNum = 0;
  (this->WorkData).SolverBoneToElementIndex.ArrayMax = 0;
  (this->WorkData).Solver.SolverRoot = (FBone *)0x0;
  (this->WorkData).Solver.Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Solver.Bones.ArrayNum = 0;
  (this->WorkData).Solver.Bones.ArrayMax = 0;
  (this->WorkData).Solver.Bodies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Solver.Bodies.ArrayNum = 0;
  (this->WorkData).Solver.Bodies.ArrayMax = 0;
  (this->WorkData).Solver.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Solver.Constraints.ArrayNum = 0;
  (this->WorkData).Solver.Constraints.ArrayMax = 0;
  (this->WorkData).Solver.Effectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Solver.Effectors.ArrayNum = 0;
  (this->WorkData).Solver.Effectors.ArrayMax = 0;
  (this->WorkData).Solver.bHasSubChains = false;
  (this->WorkData).Solver.bReadyToSimulate = false;
  (this->Settings).Iterations = 0x14;
  (this->Settings).SubIterations = 0;
  (this->Settings).MassMultiplier = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaX = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaY = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaZ = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlpha = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaX = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaY = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaZ = 1.0;
  (this->Settings).GlobalPullChainAlpha = 1.0;
  (this->Settings).MaxAngle = 30.0;
  (this->Settings).OverRelaxation = 1.3;
  (this->Settings).bStartSolveFromInputPose_DEPRECATED = true;
  (this->Debug).DrawScale = 1.0;
  (this->WorkData).bNeedsInit = true;
  (this->WorkData).HashInitializedWith = 0xffffffff;
  return this;
}

// ~FRigUnit_PBIK @ 14ded6990

void __thiscall FRigUnit_PBIK::~FRigUnit_PBIK(FRigUnit_PBIK *this)

{
  FScriptContainerElement *pFVar1;
  
  FPBIKSolver::~FPBIKSolver(&(this->WorkData).Solver);
  pFVar1 = (this->WorkData).SolverBoneToElementIndex.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).BoneSettingToSolverBoneIndex.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExcludedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectorSolverIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Effectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14deda200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PBIK::Execute(FRigUnit_PBIK *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FName_const_,int> local_38;
  TArrayView<FPBIKBoneSetting_const_,int> local_28;
  TArrayView<FPBIKEffector_const_,int> local_18;
  
  local_18.DataPtr = (FPBIKEffector *)(this->Effectors).AllocatorInstance.Data;
  iVar1 = (this->Effectors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = (FPBIKBoneSetting *)(this->BoneSettings).AllocatorInstance.Data;
  iVar2 = (this->BoneSettings).ArrayNum;
  local_18.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.DataPtr = (FName *)(this->ExcludedBones).AllocatorInstance.Data;
  iVar1 = (this->ExcludedBones).ArrayNum;
  local_28.ArrayNum = iVar2;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.ArrayNum = iVar1;
  StaticExecute(param_1,&this->Root,&local_18,&this->EffectorSolverIndices,&local_28,&local_38,
                &this->Settings,&this->Debug,&this->WorkData);
  return;
}

// RigVMExecute @ 14dedc8f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PBIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uchar *puVar9;
  FRigVMMemoryHandle *pFVar10;
  uchar *puVar11;
  FPBIKSolverSettings *pFVar12;
  FPBIKDebug *pFVar13;
  FPBIKWorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FName_const_,int> local_68;
  TArrayView<FPBIKBoneSetting_const_,int> local_58;
  TArrayView<FPBIKEffector_const_,int> local_48;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar10->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar10[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  if (param_2->ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[3].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar10[3].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[3].PropertyPath,pFVar10[3].Ptr,pFVar10[3].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FPBIKSolverSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = (FPBIKDebug *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FPBIKWorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar7->Offset + pFVar7->Index);
  local_68.DataPtr = *(FName **)puVar11;
  local_68.ArrayNum = *(int *)(puVar11 + 8);
  if (local_68.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58.DataPtr = *(FPBIKBoneSetting **)puVar9;
  iVar1 = *(int *)(puVar9 + 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.DataPtr = *(FPBIKEffector **)puVar6;
  iVar2 = *(int *)(puVar6 + 8);
  local_58.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.ArrayNum = iVar2;
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar5,&local_48,pTVar8,&local_58,&local_68,pFVar12,pFVar13,pFVar14);
  return;
}

// StaticExecute @ 14dede1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_PBIK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,
          TArrayView<FPBIKEffector_const_,int> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<FPBIKBoneSetting_const_,int> *param_5,TArrayView<FName_const_,int> *param_6,
          FPBIKSolverSettings *param_7,FPBIKDebug *param_8,FPBIKWorkData *param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  URigHierarchy *pUVar20;
  URigHierarchy *this;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  TArrayView<FPBIKBoneSetting_const_,int> *pTVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  FRigBaseElement *pFVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  FName *pFVar32;
  ulonglong uVar33;
  FName *pFVar34;
  FPBIKEffector *pFVar35;
  FPBIKBoneSetting *pFVar36;
  longlong lVar37;
  uint uVar38;
  FPBIKEffector *pFVar39;
  FPBIKBoneSetting *pFVar40;
  ulonglong uVar41;
  TArrayView<FPBIKEffector_const_,int> *pTVar42;
  uint uVar43;
  longlong lVar44;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386 [2];
  undefined4 local_384;
  uint local_380;
  undefined4 local_37c;
  void *local_378;
  undefined8 local_370;
  uint local_368;
  URigHierarchy *local_360;
  TArray<int,TSizedDefaultAllocator<32>_> *local_358;
  FPBIKWorkData *local_350;
  FLLMScope local_348 [2];
  longlong local_340;
  TArrayView<FPBIKBoneSetting_const_,int> *local_338;
  TArrayView<FPBIKEffector_const_,int> *local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  uint local_318;
  uint local_314;
  FName *local_310;
  FMemScope local_308;
  FRigElementKey local_300;
  FPBIKSolverSettings *local_2f0;
  FControlRigExecuteContext *local_2e8;
  FString local_2e0;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  FLinearColor_u_0 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258 [2];
  undefined **local_248;
  ForAnyElementType *local_240;
  void **local_238;
  undefined8 local_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_2f0 = param_7;
  local_350 = param_9;
  local_338 = param_5;
  local_358 = param_4;
  local_330 = param_3;
  local_310 = param_2;
  local_2e8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name16,L"Animation/FBIK");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_348,LLMScope_Name16,false,None,Default,true);
  FMemScope::FMemScope(&local_308,&LLMScope_Name16,true);
  local_360 = param_1->Hierarchy;
  if (local_360 != (URigHierarchy *)0x0) {
    pFVar39 = param_3->DataPtr;
    uVar43 = 0xffffffff;
    pFVar35 = pFVar39 + param_3->ArrayNum;
    for (; pFVar39 != pFVar35; pFVar39 = pFVar39 + 1) {
      FVar7 = pFVar39->Bone;
      uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      uVar43 = uVar43 ^ uVar24 + 0x9e3779b9 + FVar7.Number + uVar43 * 0x40 + (uVar43 >> 2);
      param_5 = local_338;
    }
    pFVar40 = param_5->DataPtr;
    pFVar36 = pFVar40 + param_5->ArrayNum;
    for (; pFVar40 != pFVar36; pFVar40 = pFVar40 + 1) {
      FVar7 = pFVar40->Bone;
      uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      uVar43 = uVar43 ^ uVar24 + 0x9e3779b9 + FVar7.Number + uVar43 * 0x40 + (uVar43 >> 2);
    }
    local_314 = ~uVar43;
    if (param_9->bNeedsInit == false) {
      bVar23 = local_314 != param_9->HashInitializedWith;
    }
    else {
      bVar23 = true;
    }
    param_9->bNeedsInit = bVar23;
    if (bVar23 != false) {
      (param_9->BoneSettingToSolverBoneIndex).ArrayNum = 0;
      if ((param_9->BoneSettingToSolverBoneIndex).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(param_9->BoneSettingToSolverBoneIndex).AllocatorInstance,0,
                   &(param_9->BoneSettingToSolverBoneIndex).ArrayMax);
      }
      FPBIKSolver::Reset(&param_9->Solver);
      piVar1 = &(param_9->SolverBoneToElementIndex).ArrayMax;
      (param_9->SolverBoneToElementIndex).ArrayNum = 0;
      if ((param_9->SolverBoneToElementIndex).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(param_9->SolverBoneToElementIndex).AllocatorInstance,0,piVar1);
      }
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
      this = local_360;
      pFVar39 = local_330->DataPtr;
      pFVar35 = pFVar39 + local_330->ArrayNum;
      iVar27 = 0;
      pUVar20 = local_360;
      for (; local_360 = pUVar20, pFVar39 != pFVar35; pFVar39 = pFVar39 + 1) {
        local_300.Name = pFVar39->Bone;
        local_300.Type = Bone;
        iVar25 = URigHierarchy::GetIndex(this,&local_300,true);
        iVar26 = iVar27 + 1;
        if (iVar25 == -1) {
          iVar26 = iVar27;
        }
        param_2 = local_310;
        iVar27 = iVar26;
        pUVar20 = local_360;
      }
      if ((iVar27 < 1) || (*param_2 == (FName)0x0)) goto LAB_14dedf6a0;
      local_378 = (void *)0x0;
      local_328.Data = (FScriptContainerElement *)0x0;
      iVar27 = (pUVar20->Elements).ArrayNum;
      local_370 = 0;
      local_320 = 0;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar27,&local_328,(int *)&local_320,(int *)((longlong)&local_320 + 4))
      ;
      memset(local_328.Data + iVar26,0,(longlong)iVar27);
      local_230 = 0;
      local_248 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigBoneElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBoneElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_240 = &local_328;
      local_238 = &local_378;
      local_258[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
                     ::Call;
      URigHierarchy::Traverse
                (pUVar20,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_258,true);
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      uVar33 = 0;
      uVar41 = uVar33;
      if (0 < (int)local_370) {
        do {
          uVar24 = (uint)uVar33;
          uVar43 = 0;
          if ((int)uVar24 < (int)local_370) {
            uVar43 = ~uVar24 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_384 = *(undefined4 *)(*(longlong *)(uVar41 + (longlong)local_378) + 0x1c);
          pFVar8 = (param_9->SolverBoneToElementIndex).AllocatorInstance.Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_384) &&
              ((FScriptContainerElement *)&local_384 < pFVar8 + (longlong)*piVar1 * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar27 = (param_9->SolverBoneToElementIndex).ArrayNum;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(param_9->SolverBoneToElementIndex).AllocatorInstance,piVar1)
            ;
          }
          uVar33 = (ulonglong)(uVar24 + 1);
          (param_9->SolverBoneToElementIndex).ArrayNum = iVar27 + 1;
          *(undefined4 *)
           ((param_9->SolverBoneToElementIndex).AllocatorInstance.Data + (longlong)iVar27 * 4) =
               local_384;
          uVar41 = uVar41 + 8;
        } while ((int)(uVar24 + 1) < (int)local_370);
      }
      local_368 = 0;
      if (0 < (int)local_370) {
        local_340 = 0;
        iVar27 = (int)local_370;
        do {
          lVar37 = local_340;
          uVar43 = local_368;
          uVar38 = ~local_368 >> 0x1f;
          uVar24 = 0;
          if ((int)local_368 < iVar27) {
            uVar24 = uVar38;
          }
          local_318 = uVar38;
          if (uVar24 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar27 = (int)local_370;
          }
          uVar24 = 0;
          if ((int)uVar43 < iVar27) {
            uVar24 = uVar38;
          }
          iVar27 = -1;
          uVar9 = *(undefined8 *)(*(longlong *)((longlong)local_378 + lVar37 * 8) + 0x14);
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pUVar20 = local_360;
          for (pFVar29 = URigHierarchy::GetFirstParent
                                   (local_360,
                                    *(FRigBaseElement **)((longlong)local_378 + local_340 * 8));
              pFVar29 != (FRigBaseElement *)0x0;
              pFVar29 = URigHierarchy::GetFirstParent(pUVar20,pFVar29)) {
            pFVar32 = param_6->DataPtr;
            pFVar34 = pFVar32 + param_6->ArrayNum;
            if (pFVar32 == pFVar34) {
LAB_14dede7a2:
              iVar27 = pFVar29->Index;
              break;
            }
            while (*pFVar32 != (pFVar29->Key).Name) {
              pFVar32 = pFVar32 + 1;
              if (pFVar32 == pFVar34) goto LAB_14dede7a2;
            }
          }
          uVar38 = 0;
          uVar24 = 0xffffffff;
          if (0 < (param_9->SolverBoneToElementIndex).ArrayNum) {
            lVar37 = 0;
            do {
              uVar43 = 0;
              if ((int)uVar38 < (param_9->SolverBoneToElementIndex).ArrayNum) {
                uVar43 = ~uVar38 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar43 = local_368;
              uVar24 = uVar38;
              if (*(int *)((param_9->SolverBoneToElementIndex).AllocatorInstance.Data + lVar37) ==
                  iVar27) break;
              uVar38 = uVar38 + 1;
              lVar37 = lVar37 + 4;
              uVar24 = 0xffffffff;
            } while ((int)uVar38 < (param_9->SolverBoneToElementIndex).ArrayNum);
          }
          uVar38 = local_318;
          lVar37 = local_340;
          uVar28 = 0;
          if ((int)uVar43 < (int)local_370) {
            uVar28 = local_318;
          }
          if ((uVar28 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          URigHierarchy::GetTransform
                    (local_360,&local_168,
                     *(FRigTransformElement **)((longlong)local_378 + lVar37 * 8),InitialGlobal);
          dVar16 = local_168.Translation.ZW.m128d_f64[0];
          dVar15 = local_168.Translation.XY.m128d_f64[1];
          dVar14 = local_168.Translation.XY.m128d_f64[0];
          dVar13 = local_168.Rotation.ZW.m128d_f64[1];
          dVar12 = local_168.Rotation.ZW.m128d_f64[0];
          dVar6 = local_168.Rotation.XY.m128d_f64[1];
          dVar5 = local_168.Rotation.XY.m128d_f64[0];
          uVar28 = 0;
          if ((int)uVar43 < (int)local_370) {
            uVar28 = uVar38;
          }
          local_2a8 = local_168.Translation.ZW.m128d_f64[0];
          local_2b8 = local_168.Translation.XY.m128d_f64[0];
          dStack_2b0 = local_168.Translation.XY.m128d_f64[1];
          if ((uVar28 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          piVar1 = &(param_9->Solver).Bones.ArrayMax;
          FVar7 = *local_310;
          FVar10 = *(FName *)(*(longlong *)((longlong)local_378 + lVar37 * 8) + 0x14);
          iVar27 = (param_9->Solver).Bones.ArrayNum;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10f0,&(param_9->Solver).Bones.AllocatorInstance,piVar1);
          }
          (param_9->Solver).Bones.ArrayNum = iVar27 + 1;
          local_368 = uVar43 + 1;
          local_340 = lVar37 + 1;
          lVar37 = (longlong)iVar27 * 0xf0;
          pFVar8 = (param_9->Solver).Bones.AllocatorInstance.Data;
          *(undefined8 *)(pFVar8 + lVar37 + 200) = 0;
          *(undefined8 *)(pFVar8 + lVar37 + 0xd0) = 0;
          *(double *)(pFVar8 + lVar37 + 0x10) = dVar14;
          *(double *)(pFVar8 + lVar37 + 0x10 + 8) = dVar15;
          *(undefined8 *)(pFVar8 + lVar37 + 0xb8) = 0;
          *(double *)(pFVar8 + lVar37 + 0x20) = dVar16;
          *(undefined8 *)(pFVar8 + lVar37 + 0xc0) = 0;
          *(undefined4 *)(pFVar8 + lVar37 + 0xd8) = 0xffffffff;
          *(undefined2 *)(pFVar8 + lVar37 + 0xdd) = 0;
          pFVar8[lVar37 + 0xdf] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar8 + lVar37 + 0xe0) = 0;
          *(undefined8 *)(pFVar8 + lVar37) = uVar9;
          *(uint *)(pFVar8 + lVar37 + 8) = uVar24;
          *(double *)(pFVar8 + lVar37 + 0x30) = dVar5;
          *(double *)(pFVar8 + lVar37 + 0x30 + 8) = dVar6;
          *(double *)(pFVar8 + lVar37 + 0x40) = dVar12;
          *(double *)(pFVar8 + lVar37 + 0x40 + 8) = dVar13;
          pFVar8[lVar37 + 0xdc] = (FScriptContainerElement)(FVar10 == FVar7);
          iVar27 = (int)local_370;
        } while ((int)local_368 < (int)local_370);
      }
      pFVar39 = local_330->DataPtr;
      pFVar35 = pFVar39 + local_330->ArrayNum;
      for (; pFVar39 != pFVar35; pFVar39 = pFVar39 + 1) {
        iVar27 = (param_9->Solver).Bones.ArrayNum;
        pFVar34 = (FName *)(param_9->Solver).Bones.AllocatorInstance.Data;
        FVar7 = pFVar39->Bone;
        pFVar32 = pFVar34 + (longlong)iVar27 * 0x1e;
        while( true ) {
          if ((param_9->Solver).Bones.ArrayNum != iVar27) {
            local_388 = 0;
            `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_388);
          }
          if (pFVar34 == pFVar32) {
            uVar43 = 0xffffffff;
            goto LAB_14dedeb3a;
          }
          if (*pFVar34 == FVar7) break;
          pFVar34 = pFVar34 + 0x1e;
        }
        uVar43 = (param_9->Solver).Effectors.ArrayNum;
        piVar1 = &(param_9->Solver).Effectors.ArrayMax;
        if (uVar43 == *piVar1) {
          uVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x110,0x10,&(param_9->Solver).Effectors.AllocatorInstance,piVar1);
          (param_9->Solver).Effectors.ArrayNum = uVar43;
        }
        (param_9->Solver).Effectors.ArrayNum = uVar43 + 1;
        lVar37 = (longlong)(int)uVar43 * 0x110;
        pFVar8 = (param_9->Solver).Effectors.AllocatorInstance.Data;
        *(undefined4 *)(pFVar8 + lVar37 + 0xc0) = 0x3f800000;
        *(undefined4 *)(pFVar8 + lVar37 + 0xc4) = 0x3f800000;
        *(undefined8 *)(pFVar8 + lVar37 + 200) = 0x3f800000;
        *(undefined4 *)(pFVar8 + lVar37 + 0xd0) = 0x3f800000;
        *(undefined4 *)(pFVar8 + lVar37 + 0xd4) = 0x3f800000;
        *(undefined8 *)(pFVar8 + lVar37 + 0xe8) = 0;
        *(undefined4 *)(pFVar8 + lVar37 + 0xf0) = 0xffffffff;
        *(undefined8 *)(pFVar8 + lVar37 + 0xf8) = 0;
        *(undefined8 *)(pFVar8 + lVar37 + 0x100) = 0;
        *(FName **)(pFVar8 + lVar37 + 0xd8) = pFVar34;
        FVar7 = pFVar34[3];
        *(FName *)(pFVar8 + lVar37 + 0x80) = pFVar34[2];
        ((FName *)(pFVar8 + lVar37 + 0x80))[1] = FVar7;
        *(FName *)(pFVar8 + lVar37 + 0x90) = pFVar34[4];
        FVar7 = pFVar34[7];
        *(FName *)(pFVar8 + lVar37 + 0xa0) = pFVar34[6];
        ((FName *)(pFVar8 + lVar37 + 0xa0))[1] = FVar7;
        FVar7 = pFVar34[9];
        *(FName *)(pFVar8 + lVar37 + 0xb0) = pFVar34[8];
        ((FName *)(pFVar8 + lVar37 + 0xb0))[1] = FVar7;
        pFVar34[0x1b].ComparisonIndex.Value = uVar43;
LAB_14dedeb3a:
        pTVar21 = local_358;
        pFVar8 = (local_358->AllocatorInstance).Data;
        local_380 = uVar43;
        if (((pFVar8 <= (FScriptContainerElement *)&local_380) &&
            ((FScriptContainerElement *)&local_380 < pFVar8 + (longlong)local_358->ArrayMax * 4)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar27 = pTVar21->ArrayNum;
        if (iVar27 == pTVar21->ArrayMax) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
        }
        pTVar21->ArrayNum = iVar27 + 1;
        *(uint *)((pTVar21->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_380;
      }
      bVar23 = FPBIKSolver::Initialize(&param_9->Solver);
      if ((!bVar23) && (2 < (byte)LogPBIKSolver._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_360,&local_2e0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
      }
      param_9->bNeedsInit = false;
      param_9->HashInitializedWith = local_314;
      param_4 = local_358;
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
        param_4 = local_358;
      }
    }
    pTVar42 = local_330;
    pUVar20 = local_360;
    if (((param_9->Solver).bReadyToSimulate != false) && (param_4->ArrayNum == local_330->ArrayNum))
    {
      uVar43 = 0;
      if (0 < (param_9->Solver).Bones.ArrayNum) {
        lVar37 = 0;
        do {
          uVar24 = 0;
          if ((int)uVar43 < (param_9->SolverBoneToElementIndex).ArrayNum) {
            uVar24 = ~uVar43 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          URigHierarchy::GetGlobalTransformByIndex
                    (pUVar20,&local_108,
                     *(int *)((param_9->SolverBoneToElementIndex).AllocatorInstance.Data + lVar37),
                     false);
          FPBIKSolver::SetBoneTransform(&param_9->Solver,uVar43,&local_108);
          uVar43 = uVar43 + 1;
          lVar37 = lVar37 + 4;
          param_4 = local_358;
        } while ((int)uVar43 < (param_9->Solver).Bones.ArrayNum);
      }
      pTVar22 = local_338;
      iVar27 = local_338->ArrayNum;
      if ((param_9->BoneSettingToSolverBoneIndex).ArrayNum != iVar27) {
        piVar1 = &(param_9->BoneSettingToSolverBoneIndex).ArrayMax;
        (param_9->BoneSettingToSolverBoneIndex).ArrayNum = 0;
        if ((param_9->BoneSettingToSolverBoneIndex).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(param_9->BoneSettingToSolverBoneIndex).AllocatorInstance,0,piVar1);
        }
        iVar27 = pTVar22->ArrayNum;
        if ((param_9->BoneSettingToSolverBoneIndex).ArrayNum < iVar27) {
          do {
            pFVar8 = (param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data;
            local_37c = 0xffffffff;
            if (((pFVar8 <= (FScriptContainerElement *)&local_37c) &&
                ((FScriptContainerElement *)&local_37c < pFVar8 + (longlong)*piVar1 * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar27 = (param_9->BoneSettingToSolverBoneIndex).ArrayNum;
            if (iVar27 == *piVar1) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(param_9->BoneSettingToSolverBoneIndex).AllocatorInstance,
                                  piVar1);
            }
            (param_9->BoneSettingToSolverBoneIndex).ArrayNum = iVar27 + 1;
            *(undefined4 *)
             ((param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data + (longlong)iVar27 * 4)
                 = local_37c;
            iVar27 = pTVar22->ArrayNum;
          } while ((param_9->BoneSettingToSolverBoneIndex).ArrayNum < iVar27);
        }
      }
      uVar43 = 0;
      if (0 < iVar27) {
        lVar37 = 0;
        lVar44 = 0;
        do {
          uVar38 = ~uVar43 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar43 < iVar27) {
            uVar24 = uVar38;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar24 = 0;
          if ((int)uVar43 < (param_9->BoneSettingToSolverBoneIndex).ArrayNum) {
            uVar24 = uVar38;
          }
          pFVar40 = local_338->DataPtr;
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data + lVar37 * 4)
              == -1) {
            pFVar8 = (param_9->Solver).Bones.AllocatorInstance.Data;
            for (pFVar30 = pFVar8;
                pFVar30 != pFVar8 + (longlong)(param_9->Solver).Bones.ArrayNum * 0xf0;
                pFVar30 = pFVar30 + 0xf0) {
              if (*(longlong *)pFVar30 ==
                  *(longlong *)((longlong)&(pFVar40->Bone).ComparisonIndex.Value + lVar44)) {
                lVar31 = ((longlong)pFVar30 - (longlong)pFVar8) +
                         SUB168(SEXT816(-0x7777777777777777) *
                                SEXT816((longlong)pFVar30 - (longlong)pFVar8),8);
                iVar27 = (int)(lVar31 >> 7) - (int)(lVar31 >> 0x3f);
                goto LAB_14dedef2d;
              }
            }
            iVar27 = -1;
LAB_14dedef2d:
            uVar24 = 0;
            if ((int)uVar43 < (param_9->BoneSettingToSolverBoneIndex).ArrayNum) {
              uVar24 = uVar38;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(int *)((param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data + lVar37 * 4) =
                 iVar27;
            uVar24 = 0;
            if ((int)uVar43 < (param_9->BoneSettingToSolverBoneIndex).ArrayNum) {
              uVar24 = uVar38;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (*(int *)((param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data + lVar37 * 4
                        ) != -1) goto LAB_14dedefd2;
          }
          else {
LAB_14dedefd2:
            uVar24 = 0;
            if ((int)uVar43 < (param_9->BoneSettingToSolverBoneIndex).ArrayNum) {
              uVar24 = uVar38;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar24 = *(uint *)((param_9->BoneSettingToSolverBoneIndex).AllocatorInstance.Data +
                              lVar37 * 4);
            if ((param_9->Solver).bReadyToSimulate == false) {
              local_387 = 0;
              bVar23 = `FPBIKSolver::GetBoneSettings'::__l3::<lambda_1>::operator()(&local_387);
              if (!bVar23) goto LAB_14dedf1a2;
            }
            if (((int)uVar24 < 0) || ((param_9->Solver).Bones.ArrayNum <= (int)uVar24)) {
              local_386[0] = 0;
              bVar23 = `FPBIKSolver::GetBoneSettings'::__l6::<lambda_2>::operator()(local_386);
              if (!bVar23) goto LAB_14dedf1a2;
            }
            uVar38 = 0;
            if ((int)uVar24 < (param_9->Solver).Bones.ArrayNum) {
              uVar38 = ~uVar24 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            param_9 = local_350;
            if (*(longlong *)
                 ((local_350->Solver).Bones.AllocatorInstance.Data +
                 (longlong)(int)uVar24 * 0xf0 + 0xb8) != 0) {
              uVar38 = 0;
              if ((int)uVar24 < (local_350->Solver).Bones.ArrayNum) {
                uVar38 = ~uVar24 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar31 = *(longlong *)
                        ((local_350->Solver).Bones.AllocatorInstance.Data +
                        (longlong)(int)uVar24 * 0xf0 + 0xb8);
              param_9 = local_350;
              if ((undefined4 *)(lVar31 + 8) != (undefined4 *)0x0) {
                *(undefined4 *)(lVar31 + 8) =
                     *(undefined4 *)((longlong)&pFVar40->RotationStiffness + lVar44);
                *(undefined4 *)(lVar31 + 0xc) =
                     *(undefined4 *)((longlong)&pFVar40->PositionStiffness + lVar44);
                *(EPBIKLimitType *)(lVar31 + 0x10) = (&pFVar40->X)[lVar44];
                *(undefined4 *)(lVar31 + 0x14) = *(undefined4 *)((longlong)&pFVar40->MinX + lVar44);
                *(undefined4 *)(lVar31 + 0x18) = *(undefined4 *)((longlong)&pFVar40->MaxX + lVar44);
                *(EPBIKLimitType *)(lVar31 + 0x1c) = (&pFVar40->Y)[lVar44];
                *(undefined4 *)(lVar31 + 0x20) = *(undefined4 *)((longlong)&pFVar40->MinY + lVar44);
                *(undefined4 *)(lVar31 + 0x24) = *(undefined4 *)((longlong)&pFVar40->MaxY + lVar44);
                *(EPBIKLimitType *)(lVar31 + 0x28) = (&pFVar40->Z)[lVar44];
                *(undefined4 *)(lVar31 + 0x2c) = *(undefined4 *)((longlong)&pFVar40->MinZ + lVar44);
                *(undefined4 *)(lVar31 + 0x30) = *(undefined4 *)((longlong)&pFVar40->MaxZ + lVar44);
                *(bool *)(lVar31 + 0x34) = (&pFVar40->bUsePreferredAngles)[lVar44];
                *(undefined8 *)(lVar31 + 0x38) =
                     *(undefined8 *)((longlong)&(pFVar40->PreferredAngles).field0_0x0 + lVar44 + 8);
                *(undefined8 *)(lVar31 + 0x40) =
                     *(undefined8 *)
                      ((longlong)&(pFVar40->PreferredAngles).field0_0x0 + lVar44 + 0x10);
                *(undefined8 *)(lVar31 + 0x48) =
                     *(undefined8 *)((longlong)&(pFVar40->PreferredAngles).field0_0x0 + lVar44);
              }
            }
          }
LAB_14dedf1a2:
          uVar43 = uVar43 + 1;
          lVar37 = lVar37 + 1;
          lVar44 = lVar44 + 0x50;
          iVar27 = local_338->ArrayNum;
          pTVar42 = local_330;
          param_4 = local_358;
        } while ((int)uVar43 < iVar27);
      }
      uVar43 = 0;
      if (0 < pTVar42->ArrayNum) {
        lVar44 = 0;
        lVar37 = 0;
        do {
          uVar38 = ~uVar43 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar43 < param_4->ArrayNum) {
            uVar24 = uVar38;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((param_4->AllocatorInstance).Data + lVar44 * 4) != -1) {
            uVar24 = 0;
            if ((int)uVar43 < pTVar42->ArrayNum) {
              uVar24 = uVar38;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar39 = pTVar42->DataPtr;
            puVar2 = (undefined8 *)
                     ((longlong)(pFVar39->Transform).Translation.XY.m128d_f64 + lVar37);
            local_2a0 = *puVar2;
            uStack_298 = puVar2[1];
            local_290 = *(undefined8 *)
                         ((longlong)(pFVar39->Transform).Translation.ZW.m128d_f64 + lVar37);
            uStack_2c4 = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37 + 0xc);
            uVar3 = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37 + 0x10);
            uVar4 = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37 + 0x14);
            puVar2 = (undefined8 *)((longlong)(pFVar39->Transform).Rotation.ZW.m128d_f64 + lVar37);
            local_268 = *puVar2;
            uStack_260 = puVar2[1];
            local_2d0 = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37);
            puVar2 = (undefined8 *)((longlong)(pFVar39->Transform).Rotation.XY.m128d_f64 + lVar37);
            local_278 = *puVar2;
            uStack_270 = puVar2[1];
            uStack_2c8 = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37 + 8);
            uStack_2cc = *(undefined4 *)((longlong)(&pFVar39->Transform + 1) + lVar37 + 4);
            uVar24 = 0;
            if ((int)uVar43 < param_4->ArrayNum) {
              uVar24 = uVar38;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar24 = *(uint *)((param_4->AllocatorInstance).Data + lVar44 * 4);
            if ((((int)uVar24 < 0) || ((param_9->Solver).Effectors.ArrayNum <= (int)uVar24)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index >= 0 && Index < Effectors.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                                    ,0x3fa,L""), bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar38 = 0;
            if ((int)uVar24 < (param_9->Solver).Effectors.ArrayNum) {
              uVar38 = ~uVar24 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (param_9->Solver).Effectors.AllocatorInstance.Data;
            lVar31 = (longlong)(int)uVar24 * 0x110;
            *(ulonglong *)(pFVar8 + lVar31 + 0xc0) = CONCAT44(uStack_2cc,local_2d0);
            *(ulonglong *)(pFVar8 + lVar31 + 0xc0 + 8) = CONCAT44(uStack_2c4,uStack_2c8);
            *(ulonglong *)(pFVar8 + lVar31 + 0xd0) = CONCAT44(uVar4,uVar3);
            *(undefined8 *)(pFVar8 + lVar31 + 0x80) = local_2a0;
            *(undefined8 *)(pFVar8 + lVar31 + 0x80 + 8) = uStack_298;
            *(undefined8 *)(pFVar8 + lVar31 + 0x90) = local_290;
            *(undefined8 *)(pFVar8 + lVar31 + 0xa0) = local_278;
            *(undefined8 *)(pFVar8 + lVar31 + 0xa0 + 8) = uStack_270;
            *(undefined8 *)(pFVar8 + lVar31 + 0xb0) = local_268;
            *(undefined8 *)(pFVar8 + lVar31 + 0xb0 + 8) = uStack_260;
          }
          uVar43 = uVar43 + 1;
          lVar44 = lVar44 + 1;
          lVar37 = lVar37 + 0x90;
        } while ((int)uVar43 < pTVar42->ArrayNum);
      }
      FPBIKSolver::Solve(&param_9->Solver,local_2f0);
      iVar27 = (param_9->Solver).Bones.ArrayNum;
      uVar43 = 0;
      if (0 < iVar27) {
        lVar44 = 0;
        lVar37 = 0;
        do {
          if ((((int)uVar43 < 0) || (iVar27 <= (int)uVar43)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < Bones.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                                  ,1000,L""), bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar24 = 0;
          if ((int)uVar43 < (param_9->Solver).Bones.ArrayNum) {
            uVar24 = ~uVar43 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = (param_9->Solver).Bones.AllocatorInstance.Data;
          dVar12 = *(double *)(pFVar8 + lVar37 + 0x10);
          dVar13 = *(double *)(pFVar8 + lVar37 + 0x10 + 8);
          dVar5 = *(double *)(pFVar8 + lVar37 + 0x20);
          dVar14 = *(double *)(pFVar8 + lVar37 + 0x30);
          dVar15 = *(double *)(pFVar8 + lVar37 + 0x30 + 8);
          dVar16 = *(double *)(pFVar8 + lVar37 + 0x40);
          dVar17 = *(double *)(pFVar8 + lVar37 + 0x40 + 8);
          dVar18 = *(double *)(pFVar8 + lVar37 + 0x50);
          dVar19 = *(double *)(pFVar8 + lVar37 + 0x50 + 8);
          dVar6 = *(double *)(pFVar8 + lVar37 + 0x60);
          uVar24 = 0;
          if ((int)uVar43 < (param_9->SolverBoneToElementIndex).ArrayNum) {
            uVar24 = ~uVar43 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_228.Translation.ZW.m128d_f64[1] = 0.0;
          local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_228.Rotation.XY.m128d_f64[0] = dVar14;
          local_228.Rotation.XY.m128d_f64[1] = dVar15;
          local_228.Rotation.ZW.m128d_f64[0] = dVar16;
          local_228.Rotation.ZW.m128d_f64[1] = dVar17;
          local_228.Translation.XY.m128d_f64[0] = dVar12;
          local_228.Translation.XY.m128d_f64[1] = dVar13;
          local_228.Translation.ZW.m128d_f64[0] = dVar5;
          local_228.Scale3D.XY.m128d_f64[0] = dVar18;
          local_228.Scale3D.XY.m128d_f64[1] = dVar19;
          local_228.Scale3D.ZW.m128d_f64[0] = dVar6;
          URigHierarchy::SetGlobalTransformByIndex
                    (local_360,
                     *(int *)((param_9->SolverBoneToElementIndex).AllocatorInstance.Data +
                             lVar44 * 4),&local_228,false,false,false,false);
          iVar27 = (param_9->Solver).Bones.ArrayNum;
          uVar43 = uVar43 + 1;
          lVar44 = lVar44 + 1;
          lVar37 = lVar37 + 0xf0;
        } while ((int)uVar43 < iVar27);
      }
      if (((*(FRigVMDrawInterface **)&local_2e8->field_0x58 != (FRigVMDrawInterface *)0x0) &&
          (param_9 != (FPBIKWorkData *)0xffffffffffffffd8)) && (param_8->bDrawDebug != false)) {
        local_288._0_8_ = ___xmm_3f8000003f8000003f80000000000000;
        local_288._8_8_ = _UNK_15090c6e8;
        local_1c8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
        local_1c8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
        local_1c8.Translation.XY.m128d_f64[0] = 0.0;
        local_1c8.Translation.XY.m128d_f64[1] = 0.0;
        local_1c8.Translation.ZW.m128d_f64[0] = 0.0;
        local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1c8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
        local_1c8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
        local_1c8.Scale3D.XY.m128d_f64[0] = (double)param_8->DrawScale * __real_3fb99999a0000000;
        local_1c8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_1c8.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[0];
        local_1c8.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
        FRigVMDrawInterface::DrawBox
                  (*(FRigVMDrawInterface **)&local_2e8->field_0x58,
                   &UE::Math::TTransform<double>::Identity,&local_1c8,
                   (FLinearColor *)&local_288._s_0,0.0,SDPG_Foreground,__real_bf800000);
      }
    }
  }
LAB_14dedf6a0:
  FMemScope::~FMemScope(&local_308);
  FLLMScope::~FLLMScope(local_348);
  return;
}

