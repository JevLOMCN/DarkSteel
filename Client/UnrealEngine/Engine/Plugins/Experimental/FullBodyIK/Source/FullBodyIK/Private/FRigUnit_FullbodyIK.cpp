// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 8

// StaticStruct @ 14df6c790

UScriptStruct * __cdecl FRigUnit_FullbodyIK::StaticStruct(void)

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
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_FullBodyIK();
    Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK,(UObject *)pUVar7,
                         L"RigUnit_FullbodyIK");
    this = FRigVMRegistry_RWLock::Get();
    pUVar8 = Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK.OuterSingleton;
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
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::RigVMFunctions;
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
          return Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK.OuterSingleton;
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
  return Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14df6c9e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_FullbodyIK::GetExecuteContextStruct(FRigUnit_FullbodyIK *this)

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

// Execute @ 14df6c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FullbodyIK::Execute(FRigUnit_FullbodyIK *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2d8 [32];
  TArrayView<FFBIKConstraintOption_const_,int> local_288;
  TArrayView<FFBIKEndEffector_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
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
  local_278.DataPtr = (FFBIKEndEffector *)(this->Effectors).AllocatorInstance.Data;
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
  local_288.DataPtr = (FFBIKConstraintOption *)(this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
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
  local_288.ArrayNum = iVar2;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Root,&local_278,&local_288,
                &this->SolverProperty,&this->MotionProperty,this->bPropagateToChildren,
                &this->DebugOption,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14df6ce10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FullbodyIK::GetUpgradeInfo
          (FRigUnit_FullbodyIK *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_FullbodyIK @ 14df73cd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_FullbodyIK * __thiscall FRigUnit_FullbodyIK::FRigUnit_FullbodyIK(FRigUnit_FullbodyIK *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  __m128 _Var10;
  double dVar11;
  double dVar12;
  
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_FullbodyIK__6B_;
  (this->Root).Name.ComparisonIndex = 0;
  (this->Root).Name.Number = 0;
  (this->Root).Type = Bone;
  (this->Effectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors).ArrayNum = 0;
  (this->Effectors).ArrayMax = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->SolverProperty).bUseJacobianTranspose = false;
  (this->MotionProperty).bForceEffectorRotationTarget = false;
  (this->MotionProperty).bOnlyApplyWhenReachedToTarget = false;
  (this->SolverProperty).LinearMotionStrength = 3.0;
  (this->SolverProperty).MinLinearMotionStrength = 2.0;
  (this->SolverProperty).AngularMotionStrength = 3.0;
  (this->SolverProperty).MinAngularMotionStrength = 2.0;
  (this->SolverProperty).DefaultTargetClamp = 0.2;
  (this->SolverProperty).Precision = 0.1;
  (this->SolverProperty).Damping = 30.0;
  (this->SolverProperty).MaxIterations = 0x1e;
  this->bPropagateToChildren = true;
  (this->DebugOption).bDrawDebugHierarchy = false;
  (this->DebugOption).bColorAngularMotionStrength = false;
  (this->DebugOption).bColorLinearMotionStrength = false;
  (this->DebugOption).bDrawDebugAxes = false;
  (this->DebugOption).bDrawDebugEffector = false;
  (this->DebugOption).bDrawDebugConstraints = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Rotation.ZW.m128d_f64 = auVar4;
  _Var10 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Translation.XY.m128d_f64 = auVar5;
  dVar12 = _UNK_151444f58;
  dVar11 = ___xmm_0000000000000000403e000000000000;
  dVar9 = (double)_Var10.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var10.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugOption).DrawWorldOffset.Scale3D.ZW.m128d_f64 = auVar8;
  (this->DebugOption).DrawSize = 5.0;
  (this->DebugOption).DrawWorldOffset.Translation.XY.m128d_f64[0] = dVar11;
  (this->DebugOption).DrawWorldOffset.Translation.XY.m128d_f64[1] = dVar12;
  (this->DebugOption).DrawWorldOffset.Translation.ZW.m128d_f64[0] = 0.0;
  (this->DebugOption).DrawWorldOffset.Translation.ZW.m128d_f64[1] = 0.0;
  FRigUnit_FullbodyIK_WorkData::FRigUnit_FullbodyIK_WorkData(&this->WorkData);
  (this->MotionProperty).bForceEffectorRotationTarget = true;
  return this;
}

// Execute @ 14df7f040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FullbodyIK::Execute(FRigUnit_FullbodyIK *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FFBIKConstraintOption_const_,int> local_28;
  TArrayView<FFBIKEndEffector_const_,int> local_18;
  
  local_18.DataPtr = (FFBIKEndEffector *)(this->Effectors).AllocatorInstance.Data;
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
  local_28.DataPtr = (FFBIKConstraintOption *)(this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
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
  local_28.ArrayNum = iVar2;
  StaticExecute(param_1,&this->Root,&local_18,&local_28,&this->SolverProperty,&this->MotionProperty,
                this->bPropagateToChildren,&this->DebugOption,&this->WorkData);
  return;
}

// RigVMExecute @ 14df82940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FullbodyIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  uchar *puVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  FSolverInput *pFVar9;
  FMotionProcessInput *pFVar10;
  uchar *puVar11;
  FFBIKDebugOption *pFVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_FullbodyIK_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FFBIKConstraintOption_const_,int> local_58;
  TArrayView<FFBIKEndEffector_const_,int> local_48;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar8[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar1 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FSolverInput *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FMotionProcessInput *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = (FFBIKDebugOption *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_FullbodyIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar13->Offset + pFVar13->Index);
  local_58.DataPtr = *(FFBIKConstraintOption **)puVar7;
  local_58.ArrayNum = *(int *)(puVar7 + 8);
  if (local_58.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.DataPtr = *(FFBIKEndEffector **)puVar6;
  iVar1 = *(int *)(puVar6 + 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.ArrayNum = iVar1;
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar5,&local_48,&local_58,pFVar9,pFVar10,bVar3,pFVar12,pFVar14);
  return;
}

// StaticExecute @ 14df83860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FRigUnit_FullbodyIK::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          TArrayView<FFBIKEndEffector_const_,int> *param_3,
          TArrayView<FFBIKConstraintOption_const_,int> *param_4,FSolverInput *param_5,
          FMotionProcessInput *param_6,bool param_7,FFBIKDebugOption *param_8,
          FRigUnit_FullbodyIK_WorkData *param_9)

{
  int *piVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double adVar5 [2];
  FFBIKLinkData *pFVar6;
  FScriptContainerElement *pFVar7;
  FJacobianDebugData *pFVar8;
  FFBIKConstraintOption *pFVar9;
  FRigVMDrawInterface *pFVar10;
  FRigTransformElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  TArrayView<FFBIKEndEffector_const_,int> *pTVar41;
  FSolverInput *pFVar42;
  TArrayView<FFBIKConstraintOption_const_,int> *pTVar43;
  bool bVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> *pTVar48;
  undefined8 *puVar49;
  ulong64 uVar50;
  TTuple<int,FRigElementKey> *pTVar51;
  float *pfVar52;
  TQuat<double> *pTVar53;
  TVector<double> *pTVar54;
  TVector<double> *pTVar55;
  TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *pTVar56;
  uint *puVar57;
  FMaterialRenderProxy *pFVar58;
  TVector<double>_u_0 *pTVar59;
  UScriptStruct *pUVar60;
  ulonglong uVar61;
  longlong lVar62;
  undefined1 *puVar63;
  longlong lVar64;
  FPoleVectorConstraint *this;
  char cVar65;
  uint uVar66;
  URigHierarchy *pUVar67;
  float *pfVar68;
  longlong lVar69;
  undefined1 *puVar70;
  undefined8 *puVar71;
  uint uVar72;
  ulonglong uVar73;
  FScriptContainerElement *pFVar74;
  undefined8 *puVar75;
  uint uVar76;
  TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *pTVar77;
  TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
  *pTVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  float fVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar113;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined8 uVar131;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  double dVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  double dVar142;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar143;
  float fVar144;
  double dVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined4 uVar153;
  undefined4 uVar154;
  undefined4 uVar155;
  undefined4 uVar156;
  float fVar157;
  double dVar158;
  double dVar159;
  FLinearColor_u_0 FVar160;
  double dVar163;
  double dVar164;
  undefined1 auVar161 [16];
  double dVar165;
  undefined1 auVar162 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  double dVar169;
  undefined1 auVar168 [16];
  float fVar170;
  double dVar171;
  TArrayView<FFBIKEndEffector_const_,int> *pTVar172;
  undefined1 auVar173 [16];
  double dVar176;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  float fVar177;
  float fVar178;
  undefined1 auStackY_1118 [32];
  ForAnyElementType local_10b8;
  undefined8 local_10b0;
  char local_10a8;
  undefined1 local_10a7;
  undefined1 local_10a6 [6];
  undefined8 *local_10a0;
  undefined1 local_1098 [16];
  undefined1 local_1088 [16];
  FFBIKDebugOption *local_1078;
  URigHierarchy *local_1070;
  undefined1 local_1068 [16];
  TArrayView<FFBIKEndEffector_const_,int> *local_1058;
  double dStack_1050;
  undefined1 local_1048 [16];
  FSolverParameter local_1038 [2];
  FSolverInput *local_1028;
  double dStack_1020;
  undefined1 local_1018 [16];
  TVector<double>_u_0 local_1008;
  uint local_ff0 [2];
  uint local_fe8 [2];
  TArrayView<FFBIKConstraintOption_const_,int> *local_fe0;
  double dStack_fd8;
  undefined1 local_fd0 [12];
  undefined4 uStack_fc4;
  double local_fc0;
  double dStack_fb8;
  double local_fb0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_fa8;
  TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
  *local_f88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f80;
  TVector<double>_u_0 local_f60;
  TVector<double>_u_0 local_f48;
  TVector<double>_u_0 local_f30;
  TVector<double>_u_0 local_f18;
  FRigElementKey local_ef8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_ee8;
  FRigElementKey local_ec8;
  double local_eb8;
  double local_eb0;
  double dStack_ea8;
  double local_ea0;
  TArrayView<FFBIKEndEffector_const_,int> local_e98;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e88;
  TArrayView<FFBIKConstraintOption_const_,int> local_e78;
  TVector<double>_u_0 local_e68;
  double local_e50;
  double dStack_e48;
  double local_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined1 local_e28 [16];
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined1 local_e08 [16];
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  TMatrix<double> local_dd8;
  TMatrix<double> local_d58;
  TMatrix<double> local_cd8;
  TVector<double>_u_0 local_c58;
  TVector<double>_u_0 local_c40;
  TVector<double>_u_0 local_c28;
  TVector<double>_u_0 local_c10;
  TVector<double>_u_0 local_bf8;
  TVector<double>_u_0 local_be0;
  double local_bc8;
  double dStack_bc0;
  double local_bb8;
  double dStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined1 local_b98 [16];
  TQuat<double> local_b88;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_b68;
  TTransform<double> local_b48;
  TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
  *local_ae8;
  undefined8 uStack_ae0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ad8;
  undefined1 auStack_ad0 [16];
  TQuat<double> local_ab8;
  undefined1 local_a98 [16];
  double local_a88;
  double local_a80;
  double dStack_a78;
  double local_a70;
  double local_a68 [2];
  FFBIKDebugOption *local_a58;
  double local_a50;
  double dStack_a48;
  double local_a40;
  double local_a38 [2];
  FFBIKDebugOption *local_a28;
  double local_a20 [2];
  double local_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double local_9f0 [2];
  FFBIKDebugOption *local_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  undefined1 local_9c0 [16];
  TArrayView<FFBIKEndEffector_const_,int> *local_9b0;
  undefined1 local_9a8 [16];
  FSolverInput *local_998;
  double local_990;
  double dStack_988;
  double local_980;
  undefined1 local_978 [16];
  double local_968;
  undefined1 local_960 [16];
  double local_950;
  TTransform<double> local_948;
  undefined1 local_8e8 [16];
  double local_8d8;
  double dStack_8d0;
  undefined1 local_8c8 [16];
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  undefined8 uStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  undefined1 local_848 [16];
  double local_838;
  double dStack_830;
  undefined1 local_828 [16];
  double local_818;
  double dStack_810;
  undefined1 local_808 [16];
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  undefined1 local_7c8 [16];
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  undefined1 local_768 [16];
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  TVector<double> local_668;
  TVector<double> local_650;
  TVector<double> local_638;
  TQuat<double> local_618;
  TQuat<double> local_5f8;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1118;
  local_1070 = param_1->Hierarchy;
  local_1088._0_8_ = param_2;
  local_1048._0_8_ = param_1;
  local_1078 = param_8;
  local_1028 = param_5;
  local_1018._0_8_ = param_9;
  if (local_1070 != (URigHierarchy *)0x0) {
    local_1058 = param_3;
    local_fe0 = param_4;
    bVar44 = FRigElementKey::IsValid(param_2);
    pUVar67 = local_1070;
    if ((bVar44) &&
       (*(int *)&(param_9->LinkDataToHierarchyIndices).field_0x8 ==
        *(int *)&(param_9->LinkDataToHierarchyIndices).field_0x34)) {
      FStatsHierarchical::BeginMeasurement("TEXT(\"Init\")");
      iVar45 = (param_9->LinkData).ArrayNum;
      pFVar6 = (FFBIKLinkData *)(param_9->LinkData).AllocatorInstance.Data;
      if ((param_9->LinkData).ArrayMax < 0) {
        DestructItems<FFBIKLinkData,int>(pFVar6,iVar45);
        piVar1 = &(param_9->LinkData).ArrayMax;
        (param_9->LinkData).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x130,0x10,0,(ForAnyElementType *)param_9,0,piVar1);
        }
      }
      else {
        DestructItems<FFBIKLinkData,int>(pFVar6,iVar45);
        (param_9->LinkData).ArrayNum = 0;
      }
      TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
               *)&param_9->EffectorTargets);
      TArray<int,TSizedDefaultAllocator<32>_>::Reset(&param_9->EffectorLinkIndices,0);
      TSet<TTuple<int,FRigElementKey>,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,FRigElementKey>,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>,FDefaultSetAllocator>
               *)&param_9->LinkDataToHierarchyIndices);
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_9->HierarchyToLinkDataMap);
      local_e98.ArrayNum = param_3->ArrayNum;
      local_e98.DataPtr = param_3->DataPtr;
      if ((local_e98.ArrayNum < 0) &&
         (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar44)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pUVar67 = local_1070;
      AddEffectors(local_1070,(FRigElementKey *)local_1088._0_8_,&local_e98,&param_9->LinkData,
                   &param_9->EffectorTargets,&param_9->EffectorLinkIndices,
                   &param_9->LinkDataToHierarchyIndices,&param_9->HierarchyToLinkDataMap,param_5);
      FStatsHierarchical::EndMeasurement();
    }
    FStatsHierarchical::BeginMeasurement("TEXT(\"Update\")");
    if (0 < *(int *)&(param_9->LinkDataToHierarchyIndices).field_0x8 -
            *(int *)&(param_9->LinkDataToHierarchyIndices).field_0x34) {
      if (0 < param_4->ArrayNum) {
        FStatsHierarchical::BeginMeasurement("TEXT(\"Build Constraint\")");
        local_e78.ArrayNum = param_4->ArrayNum;
        local_e78.DataPtr = param_4->DataPtr;
        if ((local_e78.ArrayNum < 0) &&
           (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar44)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FBIKConstraintLib::BuildConstraints
                  (&local_e78,&param_9->InternalConstraints,pUVar67,&param_9->LinkData,
                   &param_9->LinkDataToHierarchyIndices,&param_9->HierarchyToLinkDataMap);
        FStatsHierarchical::EndMeasurement();
      }
      if ((param_9->InternalConstraints).ArrayNum < 1) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_9->IKSolver).field_0x68);
      }
      else {
        local_ee8._0_8_ = 0;
        local_ee8._8_8_ = 0;
        local_ee8._16_4_ = 0;
        pTVar48 = TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
                  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_b68,&local_ee8);
        puVar49 = UE::Core::Private::DelegateAllocate(0x20,pTVar48->Allocation);
        if (puVar49 != (undefined8 *)0x0) {
          *puVar49 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_UFFBIKLinkData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__PEAV__TArray_V__TVariant_UFRotationLimitConstraint__UFPositionLimitConstraint__UFPoleVectorConstraint____V__TSizedDefaultAllocator__0CA_______6B_
          ;
          puVar49[1] = &param_9->InternalConstraints;
          uVar50 = FDelegateHandle::GenerateNewID();
          puVar49[2] = uVar50;
          *puVar49 = &
                     ___7__TBaseStaticDelegateInstance___A6AXAEAV__TArray_UFFBIKLinkData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__PEAV__TArray_V__TVariant_UFRotationLimitConstraint__UFPositionLimitConstraint__UFPoleVectorConstraint____V__TSizedDefaultAllocator__0CA_______6B_
          ;
          puVar49[3] = FBIKConstraintLib::ApplyConstraint;
        }
        if (local_b68.WriteScope.DestructionSentinel.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_b68.WriteScope.DestructionSentinel.Accessor,
                     (FDestructionSentinel *)&local_b68);
        }
        TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
        ::operator=((TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                     *)&(param_9->IKSolver).field_0x68,
                    (TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                     *)&local_ee8);
        TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
        ::
        ~TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                    *)&local_ee8);
      }
      pUVar67 = local_1070;
      iVar45 = (param_9->LinkData).ArrayNum;
      uVar73 = 0;
      uVar61 = uVar73;
      if (0 < iVar45) {
        do {
          uVar66 = (uint)uVar61;
          pTVar51 = TSet<TTuple<int,FRigElementKey>,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<int,FRigElementKey>,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>,FDefaultSetAllocator>
                            *)&param_9->LinkDataToHierarchyIndices,uVar66);
          local_10a0 = (undefined8 *)&pTVar51->field_0x4;
          if (pTVar51 == (TTuple<int,FRigElementKey> *)0x0) {
            local_10a0 = (undefined8 *)0x0;
          }
          uVar76 = 0;
          if ((int)uVar66 < iVar45) {
            uVar76 = ~uVar66 >> 0x1f;
          }
          if ((uVar76 == 0) &&
             (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar44)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_ef8._0_8_ = *local_10a0;
          pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
          local_ef8.Name.Number = *(uint *)(local_10a0 + 1);
          iVar45 = URigHierarchy::GetIndex(pUVar67,&local_ef8,true);
          URigHierarchy::GetGlobalTransformByIndex(pUVar67,&local_218,iVar45,false);
          *(double *)(pFVar74 + uVar73 + 0x10) = local_218.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x10 + 8) = local_218.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar74 + uVar73 + 0x20) = local_218.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x20 + 8) = local_218.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar74 + uVar73 + 0x30) = local_218.Translation.XY.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x30 + 8) = local_218.Translation.XY.m128d_f64[1];
          *(double *)(pFVar74 + uVar73 + 0x40) = local_218.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x40 + 8) = local_218.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar74 + uVar73 + 0x50) = local_218.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x50 + 8) = local_218.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar74 + uVar73 + 0x60) = local_218.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar74 + uVar73 + 0x60 + 8) = local_218.Scale3D.ZW.m128d_f64[1];
          local_8e8 = *(undefined1 (*) [16])(pFVar74 + uVar73 + 0x10);
          local_8d8 = *(double *)(pFVar74 + uVar73 + 0x20);
          dStack_8d0 = *(double *)(pFVar74 + uVar73 + 0x20 + 8);
          dVar145 = local_8d8 * local_8d8 + local_8e8._0_8_ * local_8e8._0_8_;
          dVar84 = dStack_8d0 * dStack_8d0 + local_8e8._8_8_ * local_8e8._8_8_;
          auVar146._8_4_ = SUB84(dVar84,0);
          auVar146._0_8_ = dVar145;
          auVar146._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
          auVar162._0_8_ = auVar146._8_8_ + dVar145;
          auVar162._8_8_ = dVar145 + dVar84;
          local_8a8 = *(double *)(pFVar74 + uVar73 + 0x10);
          dStack_8a0 = *(double *)(pFVar74 + uVar73 + 0x10 + 8);
          auVar133 = sqrtpd(local_8e8,auVar162);
          uVar79 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar162._0_8_);
          uVar81 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar162._8_8_);
          uVar80 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar162._0_8_);
          uVar82 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar162._8_8_);
          local_898 = *(double *)(pFVar74 + uVar73 + 0x20);
          dStack_890 = *(double *)(pFVar74 + uVar73 + 0x20 + 8);
          auVar146 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar133)
          ;
          auVar133 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar133)
          ;
          auVar147._0_8_ = uVar79 & (ulonglong)(auVar146._0_8_ * local_898);
          uVar61 = uVar81 & (ulonglong)(auVar146._8_8_ * dStack_890);
          auVar147._8_4_ = (undefined4)uVar61;
          auVar147._12_4_ = (undefined4)(uVar61 >> 0x20);
          auVar115._0_4_ = ~(uint)uVar79 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar115._4_4_ =
               ~(uint)(uVar79 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar115._8_4_ = ~(uint)uVar81 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar115._12_4_ =
               ~(uint)(uVar81 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          auVar87._0_8_ = uVar80 & (ulonglong)(auVar133._0_8_ * local_8a8);
          uVar61 = uVar82 & (ulonglong)(auVar133._8_8_ * dStack_8a0);
          auVar87._8_4_ = (undefined4)uVar61;
          auVar87._12_4_ = (undefined4)(uVar61 >> 0x20);
          auVar133._4_4_ =
               ~(uint)(uVar80 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar133._0_4_ = ~(uint)uVar80 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar133._8_4_ = ~(uint)uVar82 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar133._12_4_ =
               ~(uint)(uVar82 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar74 + uVar73 + 0x10) = auVar87 | auVar133;
          *(undefined1 (*) [16])(pFVar74 + uVar73 + 0x20) = auVar147 | auVar115;
          uVar76 = 0;
          if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
            uVar76 = ~uVar66 >> 0x1f;
          }
          local_8c8 = local_8e8;
          local_8b8 = local_8d8;
          dStack_8b0 = dStack_8d0;
          if ((uVar76 == 0) &&
             (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar44)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
          *(undefined4 *)(pFVar74 + uVar73 + 0xd0) = 0;
          if (*(int *)(pFVar74 + uVar73 + 0xe0) < 1) {
            *(undefined4 *)(pFVar74 + uVar73 + 0xd4) = 0;
          }
          else {
            uVar61 = (ulonglong)*(int *)(pFVar74 + uVar73 + 0xe0);
            pfVar68 = *(float **)(pFVar74 + uVar73 + 0xd8);
            local_1098._0_4_ = *(int *)(pFVar74 + uVar73 + 0xe0);
            pfVar52 = pfVar68 + uVar61;
            local_1088._0_8_ = pfVar52;
            while( true ) {
              if (*(int *)(pFVar74 + uVar73 + 0xe0) != (int)uVar61) {
                local_10a7 = 0;
                `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_10a7);
                uVar61 = (ulonglong)(uint)local_1098._0_4_;
                pfVar52 = (float *)local_1088._0_8_;
              }
              if (pfVar68 == pfVar52) break;
              fVar178 = *(float *)(pFVar74 + uVar73 + 0xd0);
              if (*(float *)(pFVar74 + uVar73 + 0xd0) <= *pfVar68) {
                fVar178 = *pfVar68;
              }
              pfVar68 = pfVar68 + 1;
              *(float *)(pFVar74 + uVar73 + 0xd0) = fVar178;
            }
            *(undefined4 *)(pFVar74 + uVar73 + 0xd4) = 0;
            uVar61 = (ulonglong)*(int *)(pFVar74 + uVar73 + 0xf0);
            pfVar68 = *(float **)(pFVar74 + uVar73 + 0xe8);
            local_1098._0_4_ = *(int *)(pFVar74 + uVar73 + 0xf0);
            pfVar52 = pfVar68 + uVar61;
            local_1088._0_8_ = pfVar52;
            while( true ) {
              if (*(int *)(pFVar74 + uVar73 + 0xf0) != (int)uVar61) {
                local_10a6[0] = 0;
                `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_10a6);
                uVar61 = (ulonglong)(uint)local_1098._0_4_;
                pfVar52 = (float *)local_1088._0_8_;
              }
              if (pfVar68 == pfVar52) break;
              fVar178 = *pfVar68;
              pfVar68 = pfVar68 + 1;
              if (fVar178 <= *(float *)(pFVar74 + uVar73 + 0xd4)) {
                fVar178 = *(float *)(pFVar74 + uVar73 + 0xd4);
              }
              *(float *)(pFVar74 + uVar73 + 0xd4) = fVar178;
            }
          }
          iVar45 = (param_9->LinkData).ArrayNum;
          uVar73 = uVar73 + 0x130;
          uVar61 = (ulonglong)(uVar66 + 1);
        } while ((int)(uVar66 + 1) < iVar45);
        param_5 = local_1028;
        param_1 = (FControlRigExecuteContext *)local_1048._0_8_;
        param_8 = local_1078;
      }
      fVar177 = __real_3f333333;
      fVar178 = __real_3f800000;
      dVar145 = __real_3e45798ee0000000;
      uVar61 = 0;
      fVar157 = param_5->LinearMotionStrength;
      if (param_5->LinearMotionStrength <= param_5->MinLinearMotionStrength) {
        fVar157 = param_5->MinLinearMotionStrength;
      }
      fVar83 = param_5->AngularMotionStrength;
      if (param_5->AngularMotionStrength <= param_5->MinAngularMotionStrength) {
        fVar83 = param_5->MinAngularMotionStrength;
      }
      fVar3 = param_5->MinLinearMotionStrength;
      fVar4 = param_5->MinAngularMotionStrength;
      fVar170 = 0.0;
      if (0 < local_1058->ArrayNum) {
        local_10a0 = (undefined8 *)0x0;
        uVar73 = uVar61;
        do {
          puVar49 = local_10a0;
          uVar76 = (uint)uVar61;
          local_1098._0_4_ = ~uVar76 >> 0x1f;
          uVar66 = 0;
          if ((int)uVar76 < (param_9->EffectorLinkIndices).ArrayNum) {
            uVar66 = ~uVar76 >> 0x1f;
          }
          if ((uVar66 == 0) &&
             (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar44)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar66 = *(uint *)((param_9->EffectorLinkIndices).AllocatorInstance.Data +
                            (longlong)puVar49 * 4);
          if ((uVar66 != 0xffffffff) &&
             (local_ff0[0] = uVar66,
             iVar45 = TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<int>
                                ((TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                                  *)&param_9->EffectorTargets,uVar66,(int *)local_ff0), iVar45 != -1
             )) {
            lVar69 = (longlong)iVar45 * 0xa0 + *(longlong *)&param_9->EffectorTargets;
            puVar70 = (undefined1 *)(lVar69 + 0x10);
            if (lVar69 == 0) {
              puVar70 = (undefined1 *)0x0;
            }
            if (puVar70 != (undefined1 *)0x0) {
              iVar45 = 0;
              if ((int)uVar76 < local_1058->ArrayNum) {
                iVar45 = local_1098._0_4_;
              }
              if ((iVar45 == 0) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_1098._0_8_ = local_1058->DataPtr;
              local_1068._0_4_ = ~uVar66 >> 0x1f;
              uVar72 = 0;
              if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                uVar72 = ~uVar66 >> 0x1f;
              }
              if ((uVar72 == 0) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar7 = (param_9->LinkData).AllocatorInstance.Data;
              lVar69 = (longlong)(int)uVar66 * 0x130;
              local_1088._0_8_ = lVar69;
              pFVar74 = pFVar7 + lVar69 + 0x30;
              local_fc0 = *(double *)pFVar74;
              dStack_fb8 = *(double *)(pFVar74 + 8);
              pFVar7 = pFVar7 + lVar69 + 0x40;
              local_fb0 = *(double *)pFVar7;
              uStack_870 = *(undefined8 *)(pFVar7 + 8);
              iVar45 = 0;
              if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                iVar45 = local_1068._0_4_;
              }
              local_888 = local_fc0;
              dStack_880 = dStack_fb8;
              local_878 = local_fb0;
              if (iVar45 == 0) {
                bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar44) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar69 = local_1088._0_8_;
              }
              pFVar7 = (param_9->LinkData).AllocatorInstance.Data;
              pFVar74 = pFVar7 + lVar69 + 0x10;
              local_b88.X = *(double *)pFVar74;
              local_b88.Y = *(double *)(pFVar74 + 8);
              pFVar7 = pFVar7 + lVar69 + 0x20;
              local_b88.Z = *(double *)pFVar7;
              local_b88.W = *(double *)(pFVar7 + 8);
              lVar69 = uVar73 + local_1098._0_8_;
              dVar84 = *(double *)(uVar73 + 0x18 + local_1098._0_8_);
              dVar114 = *(double *)(uVar73 + 0x20 + local_1098._0_8_);
              dVar132 = (double)*(float *)(uVar73 + 0x28 + local_1098._0_8_);
              *(double *)(puVar70 + 8) =
                   (*(double *)(uVar73 + 0x10 + local_1098._0_8_) - local_fc0) * dVar132 + local_fc0
              ;
              *(double *)(puVar70 + 0x10) = (dVar84 - dStack_fb8) * dVar132 + dStack_fb8;
              *(double *)(puVar70 + 0x18) = (dVar114 - local_fb0) * dVar132 + local_fb0;
              local_868 = local_b88.X;
              dStack_860 = local_b88.Y;
              local_858 = local_b88.Z;
              dStack_850 = local_b88.W;
              pTVar53 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                  (&local_618,&local_b88,(TQuat<double> *)(lVar69 + 0x30),
                                   (double)*(float *)(uVar73 + 0x50 + local_1098._0_8_));
              UE::Math::TQuat<double>::GetNormalized(pTVar53,&local_ab8,dVar145);
              *(double *)(puVar70 + 0x30) = local_ab8.X;
              *(double *)(puVar70 + 0x38) = local_ab8.Y;
              *(double *)(puVar70 + 0x40) = local_ab8.Z;
              *(double *)(puVar70 + 0x48) = local_ab8.W;
              dVar114 = *(double *)(uVar73 + 0x10 + local_1098._0_8_) - local_fc0;
              dVar84 = *(double *)(uVar73 + 0x18 + local_1098._0_8_) - dStack_fb8;
              dVar132 = *(double *)(uVar73 + 0x20 + local_1098._0_8_) - local_fb0;
              auVar88._0_8_ = dVar84 * dVar84;
              auVar88._8_8_ = 0;
              auVar116._0_8_ = dVar114 * dVar114 + auVar88._0_8_ + dVar132 * dVar132;
              auVar116._8_8_ = 0;
              auVar133 = sqrtpd(auVar88,auVar116);
              *(float *)(puVar70 + 0x68) = (float)auVar133._0_8_;
              pTVar54 = FBIKUtil::GetScaledRotationAxis(&local_668,(TQuat<double> *)(lVar69 + 0x30))
              ;
              pTVar55 = FBIKUtil::GetScaledRotationAxis(&local_650,&local_b88);
              dVar114 = (pTVar54->field0_0x0)._s_0.X - (pTVar55->field0_0x0)._s_0.X;
              dVar132 = (pTVar54->field0_0x0)._s_0.Z - (pTVar55->field0_0x0)._s_0.Z;
              dVar84 = (pTVar54->field0_0x0)._s_0.Y - (pTVar55->field0_0x0)._s_0.Y;
              auVar89._0_8_ = dVar84 * dVar84;
              auVar89._8_8_ = 0;
              auVar117._0_8_ = dVar114 * dVar114 + auVar89._0_8_ + dVar132 * dVar132;
              auVar117._8_8_ = 0;
              auVar133 = sqrtpd(auVar89,auVar117);
              *(float *)(puVar70 + 0x6c) = (float)auVar133._0_8_;
              fVar143 = *(float *)(uVar73 + 0x58 + local_1098._0_8_);
              fVar144 = param_5->DefaultTargetClamp;
              if (fVar177 <= param_5->DefaultTargetClamp) {
                fVar144 = fVar177;
              }
              if (fVar144 <= 0.0) {
                fVar144 = fVar170;
              }
              if (fVar178 <= fVar143) {
                fVar143 = fVar178;
              }
              if (fVar143 <= 0.0) {
                fVar143 = fVar170;
              }
              fVar144 = fVar143 * (fVar178 - fVar144) + fVar144;
              *(float *)(puVar70 + 0x50) =
                   fVar144 * (fVar157 - fVar3) + param_5->MinLinearMotionStrength;
              *(float *)(puVar70 + 0x54) =
                   fVar144 * (fVar83 - fVar4) + param_5->MinAngularMotionStrength;
              *(float *)(puVar70 + 0x58) = fVar144;
              *(float *)(puVar70 + 0x60) = fVar144;
              *puVar70 = 1;
              puVar70[0x20] = 1;
            }
          }
          uVar61 = (ulonglong)(uVar76 + 1);
          local_10a0 = (undefined8 *)((longlong)local_10a0 + 1);
          uVar73 = uVar73 + 0x60;
        } while ((int)(uVar76 + 1) < local_1058->ArrayNum);
        param_1 = (FControlRigExecuteContext *)local_1048._0_8_;
        param_8 = local_1078;
      }
      pTVar172 = local_1058;
      pTVar77 = &param_9->DebugData;
      piVar1 = &(param_9->DebugData).ArrayMax;
      iVar45 = (param_9->DebugData).ArrayNum;
      pFVar8 = (FJacobianDebugData *)(pTVar77->AllocatorInstance).Data;
      if ((param_9->DebugData).ArrayMax < 0) {
        DestructItems<FJacobianDebugData,int>(pFVar8,iVar45);
        (param_9->DebugData).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&pTVar77->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FJacobianDebugData,int>(pFVar8,iVar45);
        (param_9->DebugData).ArrayNum = 0;
      }
      if (((param_8->bDrawDebugHierarchy == false) && (param_8->bDrawDebugEffector == false)) &&
         (param_8->bDrawDebugConstraints == false)) {
        cVar65 = '\0';
      }
      else {
        cVar65 = '\x01';
      }
      local_10a8 = cVar65;
      FStatsHierarchical::BeginMeasurement("TEXT(\"Solver\")");
      auVar119 = ZEXT416((uint)param_5->Precision);
      local_1038[0].DampingValue = param_5->Damping;
      local_1038[0].JacobianSolver = param_5->bUseJacobianTranspose == false;
      INSERT(local_1038[0]._5_1_,false,1,1);
      INSERT(local_1038[0]._5_1_,true,0,1);
      pTVar56 = (TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *)0x0;
      if (cVar65 != '\0') {
        pTVar56 = pTVar77;
      }
      FJacobianSolverBase::SolveJacobianIK
                ((FJacobianSolverBase *)&param_9->IKSolver,&param_9->LinkData,
                 &param_9->EffectorTargets,local_1038,param_5->MaxIterations,param_5->Precision,
                 pTVar56);
      pTVar41 = local_1058;
      if ((param_6->bForceEffectorRotationTarget != false) && (uVar61 = 0, 0 < pTVar172->ArrayNum))
      {
        auVar39._8_8_ = 0;
        auVar39._0_8_ = local_1088._8_8_;
        local_1088 = auVar39 << 0x40;
        uVar73 = uVar61;
        do {
          uVar76 = (uint)uVar73;
          uVar66 = 0;
          if ((int)uVar76 < (param_9->EffectorLinkIndices).ArrayNum) {
            uVar66 = ~uVar76 >> 0x1f;
          }
          if ((uVar66 == 0) &&
             (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar44)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar66 = *(uint *)((param_9->EffectorLinkIndices).AllocatorInstance.Data + uVar61);
          if (uVar66 != 0xffffffff) {
            local_fe8[0] = uVar66;
            iVar45 = TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<int>
                               ((TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                                 *)&param_9->EffectorTargets,uVar66,(int *)local_fe8);
            uVar131 = auVar119._8_8_;
            if (iVar45 != -1) {
              lVar64 = (longlong)iVar45 * 0xa0 + *(longlong *)&param_9->EffectorTargets;
              lVar69 = lVar64 + 0x10;
              if (lVar64 == 0) {
                lVar69 = 0;
              }
              if ((lVar69 != 0) && (*(char *)(lVar69 + 0x20) != '\0')) {
                if (param_6->bOnlyApplyWhenReachedToTarget != false) {
                  uVar72 = 0;
                  if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                    uVar72 = ~uVar66 >> 0x1f;
                  }
                  if (uVar72 == 0) {
                    bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    uVar131 = auVar119._8_8_;
                    if (bVar44) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                  }
                  pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                  lVar64 = (longlong)(int)uVar66 * 0x130;
                  local_a98 = *(undefined1 (*) [16])(pFVar74 + lVar64 + 0x30);
                  pFVar74 = pFVar74 + lVar64 + 0x40;
                  local_a88 = *(double *)pFVar74;
                  dStack_830 = *(double *)(pFVar74 + 8);
                  auVar28._4_8_ = uVar131;
                  auVar28._0_4_ = local_a98._4_4_;
                  auVar118._0_8_ = auVar28._0_8_ << 0x20;
                  auVar118._8_4_ = local_a98._8_4_;
                  auVar118._12_4_ = local_a98._12_4_;
                  dVar84 = auVar118._8_8_ - *(double *)(lVar69 + 0x10);
                  dVar145 = local_a98._0_8_ - *(double *)(lVar69 + 8);
                  dVar114 = local_a88 - *(double *)(lVar69 + 0x18);
                  auVar119._0_8_ = dVar84 * dVar84;
                  auVar119._8_8_ = local_a98._8_8_;
                  local_848 = local_a98;
                  local_838 = local_a88;
                  if ((double)(param_5->Precision * param_5->Precision) <
                      dVar145 * dVar145 + auVar119._0_8_ + dVar114 * dVar114) goto LAB_14df847d2;
                }
                uVar131 = *(undefined8 *)(lVar69 + 0x30);
                uVar29 = *(undefined8 *)(lVar69 + 0x38);
                auVar133 = *(undefined1 (*) [16])(lVar69 + 0x40);
                local_1098._0_4_ = ~uVar66 >> 0x1f;
                uVar72 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  uVar72 = ~uVar66 >> 0x1f;
                }
                local_ba8 = uVar131;
                uStack_ba0 = uVar29;
                local_b98 = auVar133;
                if ((uVar72 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                lVar69 = (longlong)(int)uVar66 * 0x130;
                uVar30 = *(undefined8 *)(pFVar74 + lVar69 + 0x30);
                uVar31 = *(undefined8 *)(pFVar74 + lVar69 + 0x30 + 8);
                auVar146 = *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x40);
                uVar32 = *(undefined8 *)(pFVar74 + lVar69 + 0x50);
                uVar33 = *(undefined8 *)(pFVar74 + lVar69 + 0x50 + 8);
                uVar34 = *(undefined8 *)(pFVar74 + lVar69 + 0x60);
                uVar35 = *(undefined8 *)(pFVar74 + lVar69 + 0x60 + 8);
                iVar45 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  iVar45 = local_1098._0_4_;
                }
                local_e38 = uVar131;
                uStack_e30 = uVar29;
                local_e28 = auVar133;
                local_e18 = uVar30;
                uStack_e10 = uVar31;
                local_e08 = auVar146;
                local_df8 = uVar32;
                uStack_df0 = uVar33;
                local_de8 = uVar34;
                uStack_de0 = uVar35;
                if ((iVar45 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                *(undefined8 *)(pFVar74 + lVar69 + 0x10) = uVar131;
                *(undefined8 *)(pFVar74 + lVar69 + 0x10 + 8) = uVar29;
                *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x20) = auVar133;
                *(undefined8 *)(pFVar74 + lVar69 + 0x30) = uVar30;
                *(undefined8 *)(pFVar74 + lVar69 + 0x30 + 8) = uVar31;
                *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x40) = auVar146;
                *(undefined8 *)(pFVar74 + lVar69 + 0x50) = uVar32;
                *(undefined8 *)(pFVar74 + lVar69 + 0x50 + 8) = uVar33;
                *(undefined8 *)(pFVar74 + lVar69 + 0x60) = uVar34;
                *(undefined8 *)(pFVar74 + lVar69 + 0x60 + 8) = uVar35;
                local_828 = *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x10);
                local_818 = *(double *)(pFVar74 + lVar69 + 0x20);
                dStack_810 = *(double *)(pFVar74 + lVar69 + 0x20 + 8);
                dVar145 = local_818 * local_818 + local_828._0_8_ * local_828._0_8_;
                dVar84 = dStack_810 * dStack_810 + local_828._8_8_ * local_828._8_8_;
                auVar90._8_4_ = SUB84(dVar84,0);
                auVar90._0_8_ = dVar145;
                auVar90._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
                auVar91._0_8_ = auVar90._8_8_ + dVar145;
                auVar91._8_8_ = dVar145 + dVar84;
                local_748 = *(double *)(pFVar74 + lVar69 + 0x10);
                dStack_740 = *(double *)(pFVar74 + lVar69 + 0x10 + 8);
                auVar133 = sqrtpd(local_828,auVar91);
                uVar73 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                          auVar91._0_8_);
                uVar80 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                          auVar91._8_8_);
                uVar79 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                          auVar91._0_8_);
                uVar81 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                          auVar91._8_8_);
                local_738 = *(double *)(pFVar74 + lVar69 + 0x20);
                dStack_730 = *(double *)(pFVar74 + lVar69 + 0x20 + 8);
                auVar146 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                 auVar133);
                auVar133 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                 auVar133);
                auVar148._0_8_ = uVar73 & (ulonglong)(auVar146._0_8_ * local_738);
                uVar61 = uVar80 & (ulonglong)(auVar146._8_8_ * dStack_730);
                auVar148._8_4_ = (undefined4)uVar61;
                auVar148._12_4_ = (undefined4)(uVar61 >> 0x20);
                auVar119._0_4_ =
                     ~(uint)uVar73 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                auVar119._4_4_ =
                     ~(uint)(uVar73 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                auVar119._8_4_ =
                     ~(uint)uVar80 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                auVar119._12_4_ =
                     ~(uint)(uVar80 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                auVar92._0_8_ = uVar79 & (ulonglong)(auVar133._0_8_ * local_748);
                uVar61 = uVar81 & (ulonglong)(auVar133._8_8_ * dStack_740);
                auVar92._8_4_ = (undefined4)uVar61;
                auVar92._12_4_ = (undefined4)(uVar61 >> 0x20);
                auVar16._4_4_ =
                     ~(uint)(uVar79 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                auVar16._0_4_ =
                     ~(uint)uVar79 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                auVar16._8_4_ =
                     ~(uint)uVar81 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                auVar16._12_4_ =
                     ~(uint)(uVar81 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x10) = auVar92 | auVar16;
                *(undefined1 (*) [16])(pFVar74 + lVar69 + 0x20) = auVar148 | auVar119;
                local_808 = local_828;
                local_7f8 = local_818;
                dStack_7f0 = dStack_810;
              }
            }
          }
LAB_14df847d2:
          uVar73 = (ulonglong)(uVar76 + 1);
          uVar61 = local_1088._0_8_ + 4;
          local_1088._0_8_ = uVar61;
        } while ((int)(uVar76 + 1) < pTVar41->ArrayNum);
        param_1 = (FControlRigExecuteContext *)local_1048._0_8_;
        param_8 = local_1078;
        cVar65 = local_10a8;
      }
      pTVar77 = &param_9->DebugData;
      FStatsHierarchical::EndMeasurement();
      fVar177 = __real_bf800000;
      if ((cVar65 != '\0') && (*(longlong *)&param_1->field_0x58 != 0)) {
        iVar45 = (param_9->DebugData).ArrayNum;
        local_eb8 = 0.0;
        local_1058 = (TArrayView<FFBIKEndEffector_const_,int> *)CONCAT44(local_1058._4_4_,iVar45);
        if (0 < iVar45) {
          uVar66 = iVar45 - 1;
          local_1068._0_4_ = uVar66;
          if (-1 < (int)uVar66) {
            uVar153 = FLinearColor::Black.field0_0x0._0_4_;
            uVar154 = FLinearColor::Black.field0_0x0._4_4_;
            uVar155 = FLinearColor::Black.field0_0x0._8_4_;
            uVar156 = FLinearColor::Black.field0_0x0._12_4_;
            lVar69 = (longlong)(int)uVar66 * 0x30;
            FVar160 = FLinearColor::White.field0_0x0;
            do {
              uVar76 = 0;
              if ((int)uVar66 < pTVar77->ArrayNum) {
                uVar76 = ~uVar66 >> 0x1f;
              }
              if (uVar76 == 0) {
                bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar44) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar153 = FLinearColor::Black.field0_0x0._0_4_;
                uVar154 = FLinearColor::Black.field0_0x0._4_4_;
                uVar155 = FLinearColor::Black.field0_0x0._8_4_;
                uVar156 = FLinearColor::Black.field0_0x0._12_4_;
                FVar160 = FLinearColor::White.field0_0x0;
              }
              pFVar42 = local_1028;
              uVar61 = 0;
              pFVar74 = (pTVar77->AllocatorInstance).Data;
              local_4b8.Rotation.XY.m128d_f64[0] =
                   (param_8->DrawWorldOffset).Rotation.XY.m128d_f64[0];
              local_4b8.Rotation.XY.m128d_f64[1] =
                   (param_8->DrawWorldOffset).Rotation.XY.m128d_f64[1];
              local_1088._0_8_ = pFVar74;
              local_4b8.Rotation.ZW.m128d_f64[0] =
                   (param_8->DrawWorldOffset).Rotation.ZW.m128d_f64[0];
              local_4b8.Rotation.ZW.m128d_f64[1] =
                   (param_8->DrawWorldOffset).Rotation.ZW.m128d_f64[1];
              local_990 = (param_8->DrawWorldOffset).Translation.XY.m128d_f64[0];
              dStack_988 = (param_8->DrawWorldOffset).Translation.XY.m128d_f64[1];
              local_980 = (param_8->DrawWorldOffset).Translation.ZW.m128d_f64[0];
              local_4b8.Scale3D.XY.m128d_f64[0] = (param_8->DrawWorldOffset).Scale3D.XY.m128d_f64[0]
              ;
              local_4b8.Scale3D.XY.m128d_f64[1] = (param_8->DrawWorldOffset).Scale3D.XY.m128d_f64[1]
              ;
              local_4b8.Scale3D.ZW.m128d_f64[0] = (param_8->DrawWorldOffset).Scale3D.ZW.m128d_f64[0]
              ;
              local_4b8.Scale3D.ZW.m128d_f64[1] = (param_8->DrawWorldOffset).Scale3D.ZW.m128d_f64[1]
              ;
              local_a20[1] = (double)(int)((int)local_1058 - uVar66);
              local_a10 = local_980 * local_a20[1];
              local_a20[0] = local_990 * local_a20[1];
              local_a20[1] = dStack_988 * local_a20[1];
              local_4b8.Translation.ZW.m128d_f64[0] = local_a10;
              local_4b8.Translation.ZW.m128d_f64[1] = 0.0;
              local_4b8.Translation.XY.m128d_f64[0] = local_a20[0];
              local_4b8.Translation.XY.m128d_f64[1] = local_a20[1];
              if ((param_8->bDrawDebugHierarchy != false) &&
                 (iVar45 = *(int *)(pFVar74 + lVar69 + 8), uVar73 = uVar61, 0 < iVar45)) {
                do {
                  uVar76 = (uint)uVar73;
                  uVar66 = 0;
                  if ((int)uVar76 < iVar45) {
                    uVar66 = ~uVar76 >> 0x1f;
                  }
                  if (uVar66 == 0) {
                    bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar44) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    uVar153 = FLinearColor::Black.field0_0x0._0_4_;
                    uVar154 = FLinearColor::Black.field0_0x0._4_4_;
                    uVar155 = FLinearColor::Black.field0_0x0._8_4_;
                    uVar156 = FLinearColor::Black.field0_0x0._12_4_;
                    FVar160 = FLinearColor::White.field0_0x0;
                  }
                  lVar64 = *(longlong *)(pFVar74 + lVar69);
                  fVar157 = 0.0;
                  if (param_8->bColorAngularMotionStrength == false) {
                    fVar157 = fVar170;
                    _local_fd0 = FVar160;
                    if (param_8->bColorLinearMotionStrength != false) {
                      local_fd0._4_4_ = uVar154;
                      local_fd0._0_4_ = uVar153;
                      local_fd0._8_4_ = uVar155;
                      uStack_fc4 = uVar156;
                      if (param_8->bColorLinearMotionStrength != false) {
                        fVar83 = pFVar42->LinearMotionStrength - pFVar42->MinLinearMotionStrength;
                        if (fVar83 <= 0.0) {
                          fVar83 = fVar170;
                        }
                        if (0.0 < fVar83) {
                          fVar157 = (*(float *)(uVar61 + 0xd0 + lVar64) -
                                    pFVar42->MinLinearMotionStrength) / fVar83;
                          if (fVar178 <= fVar157) {
                            fVar157 = fVar178;
                          }
                          if (fVar157 <= 0.0) {
                            fVar157 = fVar170;
                          }
                          local_fd0._8_4_ = fVar157;
                        }
                      }
                    }
                  }
                  else {
                    local_fd0._4_4_ = uVar154;
                    local_fd0._0_4_ = uVar153;
                    local_fd0._8_4_ = uVar155;
                    uStack_fc4 = uVar156;
                    fVar83 = pFVar42->AngularMotionStrength - pFVar42->MinAngularMotionStrength;
                    if (fVar83 <= 0.0) {
                      fVar83 = fVar170;
                    }
                    if (0.0 < fVar83) {
                      fVar157 = (*(float *)(uVar61 + 0xd4 + lVar64) -
                                pFVar42->MinAngularMotionStrength) / fVar83;
                      if (fVar178 <= fVar157) {
                        fVar157 = fVar178;
                      }
                      if (fVar157 <= 0.0) {
                        fVar157 = fVar170;
                      }
                      local_fd0._0_4_ = fVar157;
                    }
                  }
                  uVar66 = *(uint *)(uVar61 + lVar64);
                  local_1098._0_4_ = uVar66;
                  if (uVar66 != 0xffffffff) {
                    uVar72 = 0;
                    if ((int)uVar66 < *(int *)(pFVar74 + lVar69 + 8)) {
                      uVar72 = ~uVar66 >> 0x1f;
                    }
                    if ((uVar72 == 0) &&
                       (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar44)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pdVar2 = (double *)
                             ((longlong)(int)local_1098._0_4_ * 0x130 + 0x90 +
                             *(longlong *)(pFVar74 + lVar69));
                    local_c58._s_0.X = *pdVar2;
                    local_c58._s_0.Y = pdVar2[1];
                    pdVar2 = (double *)
                             ((longlong)(int)local_1098._0_4_ * 0x130 + 0xa0 +
                             *(longlong *)(pFVar74 + lVar69));
                    local_c58._s_0.Z = *pdVar2;
                    dStack_7d0 = pdVar2[1];
                    local_c40._0_16_ = *(undefined1 (*) [16])(uVar61 + 0x90 + lVar64);
                    pdVar2 = (double *)(uVar61 + 0xa0 + lVar64);
                    local_c40._s_0.Z = *pdVar2;
                    dStack_7b0 = pdVar2[1];
                    local_7e8 = local_c58._s_0.X;
                    dStack_7e0 = local_c58._s_0.Y;
                    local_7d8 = local_c58._s_0.Z;
                    local_7c8 = local_c40._0_16_;
                    local_7b8 = local_c40._s_0.Z;
                    FRigVMDrawInterface::DrawLine
                              (*(FRigVMDrawInterface **)(local_1048._0_8_ + 0x58),&local_4b8,
                               (TVector<double> *)&local_c40._s_0,(TVector<double> *)&local_c58._s_0
                               ,(FLinearColor *)local_fd0,fVar157,SDPG_Foreground,fVar177);
                    uVar153 = FLinearColor::Black.field0_0x0._0_4_;
                    uVar154 = FLinearColor::Black.field0_0x0._4_4_;
                    uVar155 = FLinearColor::Black.field0_0x0._8_4_;
                    uVar156 = FLinearColor::Black.field0_0x0._12_4_;
                    FVar160 = FLinearColor::White.field0_0x0;
                  }
                  param_1 = (FControlRigExecuteContext *)local_1048._0_8_;
                  if (param_8->bDrawDebugAxes != false) {
                    FRigVMDrawInterface::DrawAxes
                              (*(FRigVMDrawInterface **)(local_1048._0_8_ + 0x58),&local_4b8,
                               (TTransform<double> *)(lVar64 + 0x70 + uVar61),param_8->DrawSize,0.0,
                               SDPG_Foreground,fVar177);
                    uVar153 = FLinearColor::Black.field0_0x0._0_4_;
                    uVar154 = FLinearColor::Black.field0_0x0._4_4_;
                    uVar155 = FLinearColor::Black.field0_0x0._8_4_;
                    uVar156 = FLinearColor::Black.field0_0x0._12_4_;
                    FVar160 = FLinearColor::White.field0_0x0;
                  }
                  iVar45 = *(int *)(pFVar74 + lVar69 + 8);
                  uVar61 = uVar61 + 0x130;
                  uVar73 = (ulonglong)(uVar76 + 1);
                } while ((int)(uVar76 + 1) < iVar45);
                pTVar77 = (TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *)
                          (local_1018._0_8_ + 0x1a0);
                pFVar74 = (FScriptContainerElement *)local_1088._0_8_;
                param_9 = (FRigUnit_FullbodyIK_WorkData *)local_1018._0_8_;
                uVar66 = local_1068._0_4_;
              }
              if (param_8->bDrawDebugEffector != false) {
                local_fa8._padding_._4_4_ = 1;
                local_fa8._padding_._0_4_ = 0;
                local_fa8.Array =
                     (TBitArray<FDefaultBitArrayAllocator> *)&(param_9->EffectorTargets).field_0x10;
                local_fa8.UnvisitedBitMask = 0xffffffff;
                local_fa8.CurrentBitIndex = 0;
                local_fa8.BaseBitIndex = 0;
                if (*(int *)&(param_9->EffectorTargets).field_0x28 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_fa8);
                }
                local_f88 = &param_9->EffectorTargets;
                auVar36._4_4_ = local_fa8.CurrentBitIndex;
                auVar36._8_4_ = local_fa8.BaseBitIndex;
                auVar36._0_4_ = local_fa8.UnvisitedBitMask;
                auStack_ad0._12_4_ = local_fa8._28_4_;
                auStack_ad0._0_12_ = auVar36;
                TStack_f80._16_8_ = auVar36._0_8_;
                local_ae8 = local_f88;
                uStack_ae0 = CONCAT44(local_fa8._padding_._4_4_,(undefined4)local_fa8._padding_);
                pTStack_ad8 = local_fa8.Array;
                TStack_f80._padding_._0_4_ = (undefined4)local_fa8._padding_;
                TStack_f80._padding_._4_4_ = local_fa8._padding_._4_4_;
                TStack_f80.BaseBitIndex = local_fa8.BaseBitIndex;
                uVar61 = (ulonglong)TStack_f80._16_8_ >> 0x20;
                TStack_f80._28_4_ = local_fa8._28_4_;
                TStack_f80.Array = local_fa8.Array;
                if (local_fa8.CurrentBitIndex < (local_fa8.Array)->NumBits) {
                  do {
                    lVar64 = *(longlong *)local_f88;
                    lVar62 = (longlong)(int)uVar61 * 0xa0;
                    if (*(char *)(lVar62 + 0x10 + lVar64) != '\0') {
                      local_158.Rotation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_158.Rotation.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[1];
                      local_158.Rotation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[2];
                      local_158.Rotation.ZW.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[3];
                      local_158.Translation.ZW.m128d_f64[0] = *(double *)(lVar62 + 0x28 + lVar64);
                      pdVar2 = (double *)(lVar62 + 0x18 + lVar64);
                      local_158.Translation.XY.m128d_f64[0] = *pdVar2;
                      local_158.Translation.XY.m128d_f64[1] = pdVar2[1];
                      local_158.Translation.ZW.m128d_f64[1] = 0.0;
                      local_158.Scale3D.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      local_158.Scale3D.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[1];
                      local_158.Scale3D.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_158.Scale3D.ZW.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[3];
                      FRigVMDrawInterface::DrawBox
                                (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_4b8,&local_158
                                 ,&FLinearColor::Yellow,param_8->DrawSize,SDPG_Foreground,fVar177);
                    }
                    fVar157 = param_8->DrawSize;
                    local_1088._0_8_ = *(undefined8 *)&param_1->field_0x58;
                    uVar66 = *(uint *)((longlong)TStack_f80.CurrentBitIndex * 0xa0 +
                                      *(longlong *)local_f88);
                    local_1098._0_4_ = uVar66;
                    uVar76 = 0;
                    if ((int)uVar66 < *(int *)(pFVar74 + lVar69 + 8)) {
                      uVar76 = ~uVar66 >> 0x1f;
                    }
                    if (uVar76 == 0) {
                      bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar44) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      uVar66 = local_1098._0_4_;
                    }
                    FRigVMDrawInterface::DrawBox
                              ((FRigVMDrawInterface *)local_1088._0_8_,&local_4b8,
                               (TTransform<double> *)
                               (*(longlong *)(pFVar74 + lVar69) +
                               (longlong)(int)uVar66 * 0x130 + 0x70),&FLinearColor::Green,fVar157,
                               SDPG_Foreground,fVar177);
                    TStack_f80.UnvisitedBitMask =
                         TStack_f80.UnvisitedBitMask & ~TStack_f80._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f80);
                    uVar61 = (ulonglong)(uint)TStack_f80.CurrentBitIndex;
                  } while (TStack_f80.CurrentBitIndex < (TStack_f80.Array)->NumBits);
                  uVar66 = local_1068._0_4_;
                }
                uVar73 = 0;
                local_10a0 = (undefined8 *)0x0;
                uVar76 = ~uVar66 >> 0x1f;
                auVar40._8_8_ = 0;
                auVar40._0_8_ = local_1098._8_8_;
                local_1098 = auVar40 << 0x40;
                uVar61 = uVar73;
                while( true ) {
                  uVar72 = 0;
                  if ((int)uVar66 < pTVar77->ArrayNum) {
                    uVar72 = uVar76;
                  }
                  if ((uVar72 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar72 = (uint)uVar73;
                  if (*(int *)((pTVar77->AllocatorInstance).Data + lVar69 + 0x18) <= (int)uVar72)
                  break;
                  local_1068._0_8_ = *(undefined8 *)&param_1->field_0x58;
                  uVar46 = 0;
                  if ((int)uVar66 < pTVar77->ArrayNum) {
                    uVar46 = uVar76;
                  }
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar74 = (pTVar77->AllocatorInstance).Data;
                  local_1088._0_8_ = pFVar74;
                  uVar46 = 0;
                  if ((int)uVar72 < *(int *)(pFVar74 + lVar69 + 0x18)) {
                    uVar46 = ~uVar72 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar64 = *(longlong *)(local_1088._0_8_ + 0x10 + lVar69);
                  pdVar2 = (double *)(lVar64 + 0x20 + local_1098._0_8_);
                  local_eb0 = *pdVar2;
                  dStack_ea8 = pdVar2[1];
                  pdVar2 = (double *)(lVar64 + 0x30 + local_1098._0_8_);
                  local_ea0 = *pdVar2;
                  dStack_790 = pdVar2[1];
                  uVar46 = 0;
                  if ((int)uVar66 < pTVar77->ArrayNum) {
                    uVar46 = uVar76;
                  }
                  local_7a8 = local_eb0;
                  dStack_7a0 = dStack_ea8;
                  local_798 = local_ea0;
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar74 = (pTVar77->AllocatorInstance).Data;
                  local_1088._0_8_ = pFVar74;
                  uVar46 = 0;
                  if ((int)uVar72 < *(int *)(pFVar74 + lVar69 + 0x28)) {
                    uVar46 = ~uVar72 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar64 = *(longlong *)(local_1088._0_8_ + 0x20 + lVar69);
                  local_e68._s_0.X = local_eb0 + *(double *)(lVar64 + uVar61);
                  local_e68._s_0.Y = dStack_ea8 + *(double *)(lVar64 + 8 + uVar61);
                  local_e68._s_0.Z = local_ea0 + *(double *)(lVar64 + 0x10 + uVar61);
                  uVar46 = 0;
                  if ((int)uVar66 < pTVar77->ArrayNum) {
                    uVar46 = uVar76;
                  }
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar74 = (pTVar77->AllocatorInstance).Data;
                  uVar46 = 0;
                  if ((int)uVar72 < *(int *)(pFVar74 + lVar69 + 0x18)) {
                    uVar46 = ~uVar72 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar64 = *(longlong *)(pFVar74 + lVar69 + 0x10);
                  uVar131 = local_1098._0_8_;
                  pdVar2 = (double *)(lVar64 + 0x20 + local_1098._0_8_);
                  local_c28._s_0.X = *pdVar2;
                  local_c28._s_0.Y = pdVar2[1];
                  pdVar2 = (double *)(lVar64 + 0x30 + local_1098._0_8_);
                  local_c28._s_0.Z = *pdVar2;
                  dStack_770 = pdVar2[1];
                  local_788 = local_c28._s_0.X;
                  dStack_780 = local_c28._s_0.Y;
                  local_778 = local_c28._s_0.Z;
                  FRigVMDrawInterface::DrawLine
                            ((FRigVMDrawInterface *)local_1068._0_8_,&local_4b8,
                             (TVector<double> *)&local_c28._s_0,(TVector<double> *)&local_e68._s_0,
                             &FLinearColor::Red,0.0,SDPG_Foreground,fVar177);
                  local_10a0 = (undefined8 *)((longlong)local_10a0 + 1);
                  uVar73 = (ulonglong)(uVar72 + 1);
                  local_1098._0_8_ = uVar131 + 0x60;
                  uVar61 = uVar61 + 0x18;
                  param_1 = (FControlRigExecuteContext *)local_1048._0_8_;
                }
                uVar153 = FLinearColor::Black.field0_0x0._0_4_;
                uVar154 = FLinearColor::Black.field0_0x0._4_4_;
                uVar155 = FLinearColor::Black.field0_0x0._8_4_;
                uVar156 = FLinearColor::Black.field0_0x0._12_4_;
                param_9 = (FRigUnit_FullbodyIK_WorkData *)local_1018._0_8_;
                param_8 = local_1078;
                FVar160 = FLinearColor::White.field0_0x0;
              }
              uVar66 = uVar66 - 1;
              lVar69 = lVar69 + -0x30;
              local_1068._0_4_ = uVar66;
            } while (-1 < (int)uVar66);
          }
        }
        pTVar43 = local_fe0;
        fVar157 = __real_40000000;
        uVar61 = 0;
        if ((param_8->bDrawDebugConstraints != false) &&
           ((param_9->InternalConstraints).ArrayNum != 0)) {
          local_518.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_518.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_518.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_518.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_518.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_518.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          iVar45 = local_fe0->ArrayNum;
          uVar73 = uVar61;
          if (0 < iVar45) {
            do {
              uVar76 = (uint)uVar73;
              uVar66 = 0;
              if ((int)uVar76 < iVar45) {
                uVar66 = ~uVar76 >> 0x1f;
              }
              if ((uVar66 == 0) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if ((&pTVar43->DataPtr->bEnabled)[uVar61] != false) {
                uVar66 = 0;
                if ((int)uVar76 < pTVar43->ArrayNum) {
                  uVar66 = ~uVar76 >> 0x1f;
                }
                if ((uVar66 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar9 = pTVar43->DataPtr;
                bVar44 = ::FName::IsWithinBounds
                                   ((FNameEntryId)
                                    *(uint *)((longlong)&(pFVar9->Item).Name.ComparisonIndex.Value +
                                             uVar61));
                if (((bVar44) &&
                    (*(longlong *)((longlong)&(pFVar9->Item).Name.ComparisonIndex.Value + uVar61) !=
                     0)) && ((&(pFVar9->Item).Type)[uVar61] != None)) {
                  uVar66 = 0;
                  if ((int)uVar76 < pTVar43->ArrayNum) {
                    uVar66 = ~uVar76 >> 0x1f;
                  }
                  if ((uVar66 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar9 = pTVar43->DataPtr;
                  uVar66 = ::GetTypeHash(&pFVar9[(int)uVar76].Item);
                  iVar45 = TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FRigElementKey>
                                     ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                                       *)&param_9->HierarchyToLinkDataMap,uVar66,
                                      &pFVar9[(int)uVar76].Item);
                  if (iVar45 != -1) {
                    lVar69 = *(longlong *)&param_9->HierarchyToLinkDataMap + (longlong)iVar45 * 0x18
                    ;
                    puVar57 = (uint *)(lVar69 + 0xc);
                    if (lVar69 == 0) {
                      puVar57 = (uint *)0x0;
                    }
                    if (puVar57 != (uint *)0x0) {
                      uVar66 = *puVar57;
                      uVar72 = 0;
                      if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                        uVar72 = ~uVar66 >> 0x1f;
                      }
                      if ((uVar72 == 0) &&
                         (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar44)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                      lVar69 = (longlong)(int)uVar66 * 0x130;
                      local_3f8.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar74 + lVar69 + 0x10);
                      local_3f8.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar74 + lVar69 + 0x20);
                      local_3f8.Translation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x30);
                      local_3f8.Translation.XY.m128d_f64[1] =
                           *(double *)(pFVar74 + lVar69 + 0x30 + 8);
                      local_3f8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x40);
                      local_3f8.Translation.ZW.m128d_f64[1] =
                           *(double *)(pFVar74 + lVar69 + 0x40 + 8);
                      local_3f8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x50);
                      local_3f8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x50 + 8);
                      local_3f8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x60);
                      local_3f8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x60 + 8);
                      uVar66 = 0;
                      if ((int)uVar76 < pTVar43->ArrayNum) {
                        uVar66 = ~uVar76 >> 0x1f;
                      }
                      if ((uVar66 == 0) &&
                         (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar44)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pTVar53 = UE::Math::TRotator<double>::Quaternion
                                          (&pTVar43->DataPtr[(int)uVar76].OffsetRotation,&local_5f8)
                      ;
                      dVar145 = local_3f8.Rotation.XY.m128d_f64[0];
                      local_758 = pTVar53->Z;
                      dStack_750 = pTVar53->W;
                      local_768._0_8_ = pTVar53->X;
                      local_768._8_8_ = pTVar53->Y;
                      dVar84 = local_3f8.Rotation.XY.m128d_f64[1];
                      auVar134._8_4_ = local_3f8.Rotation.XY.m128d_f64[0]._0_4_;
                      auVar134._0_8_ = dVar145;
                      auVar134._12_4_ = local_3f8.Rotation.XY.m128d_f64[0]._4_4_;
                      dVar114 = local_3f8.Rotation.ZW.m128d_f64[0];
                      dVar132 = local_3f8.Rotation.ZW.m128d_f64[1];
                      auVar93._8_4_ = local_3f8.Rotation.ZW.m128d_f64[1]._0_4_;
                      auVar93._0_8_ = dVar132;
                      auVar93._12_4_ = local_3f8.Rotation.ZW.m128d_f64[1]._4_4_;
                      auVar94._8_4_ = (int)local_768._0_8_;
                      auVar94._0_8_ = local_768._8_8_;
                      auVar94._12_4_ = (int)((ulonglong)local_768._0_8_ >> 0x20);
                      local_3f8.Rotation.XY.m128d_f64[0] =
                           dVar145 * dStack_750 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                           dVar132 * (double)local_768._0_8_ +
                           local_758 * dVar84 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                           (double)local_768._8_8_ * dVar114 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                      local_3f8.Rotation.XY.m128d_f64[1] =
                           auVar134._8_8_ * local_758 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                           auVar93._8_8_ * (double)local_768._8_8_ +
                           dStack_750 * dVar84 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                           auVar94._8_8_ * dVar114 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                      local_3f8.Rotation.ZW.m128d_f64[0] =
                           dVar145 * (double)local_768._8_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar132 * local_758 +
                           (double)local_768._0_8_ * dVar84 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           dStack_750 * dVar114 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                      local_3f8.Rotation.ZW.m128d_f64[1] =
                           dVar145 * (double)local_768._0_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           dVar132 * dStack_750 +
                           (double)local_768._8_8_ * dVar84 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           local_758 * dVar114 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                      FRigVMDrawInterface::DrawAxes
                                (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_518,&local_3f8
                                 ,fVar157,0.0,SDPG_Foreground,fVar177);
                    }
                  }
                }
              }
              iVar45 = pTVar43->ArrayNum;
              uVar61 = uVar61 + 0xa0;
              uVar73 = (ulonglong)(uVar76 + 1);
            } while ((int)(uVar76 + 1) < iVar45);
          }
          pTVar78 = &param_9->InternalConstraints;
          uVar61 = 0;
          iVar45 = (param_9->InternalConstraints).ArrayNum;
          if (0 < iVar45) {
            local_fe0 = ___xmm_403e000000000000403e000000000000;
            dStack_fd8 = _UNK_15185d548;
            local_10a0 = (undefined8 *)0x0;
            local_1078 = __real_403e000000000000;
            local_1088 = ___xmm_00000000000000003ff0000000000000;
            uVar73 = uVar61;
            fVar157 = __real_3f99999a;
            fVar83 = __real_40a00000;
            do {
              uVar76 = (uint)uVar61;
              uVar66 = 0;
              if ((int)uVar76 < iVar45) {
                uVar66 = ~uVar76 >> 0x1f;
              }
              if ((uVar66 == 0) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar61 = (ulonglong)(byte)(pTVar78->AllocatorInstance).Data[uVar73 + 0xb0];
              if ((2 < uVar61) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0x12f,L""), bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FPoleVectorConstraint,FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar61 + 4) != '\0') {
                uVar66 = 0;
                if ((int)uVar76 < (param_9->InternalConstraints).ArrayNum) {
                  uVar66 = ~uVar76 >> 0x1f;
                }
                if ((uVar66 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (pTVar78->AllocatorInstance).Data;
                if ((pFVar74[uVar73 + 0xb0] != (FScriptContainerElement)0x0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index == TypeIndex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                        ,0x97,L""), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar66 = *(uint *)(pFVar74 + uVar73 + 4);
                dVar145 = *(double *)(pFVar74 + uVar73 + 0x30);
                dVar84 = *(double *)(pFVar74 + uVar73 + 0x30 + 8);
                dVar114 = *(double *)(pFVar74 + uVar73 + 0x40);
                dVar132 = *(double *)(pFVar74 + uVar73 + 0x40 + 8);
                uVar72 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  uVar72 = ~uVar66 >> 0x1f;
                }
                local_1028 = (FSolverInput *)dVar114;
                dStack_1020 = dVar132;
                local_bc8 = dVar145;
                dStack_bc0 = dVar84;
                local_bb8 = dVar114;
                dStack_bb0 = dVar132;
                local_1018._0_8_ = dVar145;
                local_1018._8_8_ = dVar84;
                if ((uVar72 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar7 = (param_9->LinkData).AllocatorInstance.Data;
                lVar69 = (longlong)(int)uVar66 * 0x130;
                local_578.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar7 + lVar69 + 0x10);
                local_578.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar7 + lVar69 + 0x20);
                local_578.Translation.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar69 + 0x30);
                local_578.Translation.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar69 + 0x30 + 8);
                local_578.Translation.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar69 + 0x40);
                local_578.Translation.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar69 + 0x40 + 8);
                local_578.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar69 + 0x50);
                local_578.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar69 + 0x50 + 8);
                local_578.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar69 + 0x60);
                local_578.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar69 + 0x60 + 8);
                local_1b8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_1b8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_1b8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_1b8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_1b8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_1b8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_1b8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_1b8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_1b8.Rotation.XY.m128d_f64[0] = dVar145;
                local_1b8.Rotation.XY.m128d_f64[1] = dVar84;
                local_1b8.Rotation.ZW.m128d_f64[0] = dVar114;
                local_1b8.Rotation.ZW.m128d_f64[1] = dVar132;
                UE::Math::TTransform<double>::GetRelativeTransformReverse
                          (&local_1b8,&local_5d8,&local_578);
                auVar133 = *(undefined1 (*) [16])(pFVar74 + uVar73 + 0x20);
                dVar114 = *(double *)(pFVar74 + uVar73 + 0x10);
                dVar132 = *(double *)(pFVar74 + uVar73 + 0x10 + 8);
                dVar85 = dVar114 * local_5d8.Rotation.ZW.m128d_f64[1];
                dVar113 = dVar132 * local_5d8.Rotation.ZW.m128d_f64[1];
                dVar145 = auVar133._0_8_;
                dVar169 = auVar133._8_8_;
                auVar135._8_4_ = auVar133._0_4_;
                auVar135._0_8_ = dVar169;
                auVar135._12_4_ = auVar133._4_4_;
                dVar142 = auVar135._8_8_ * local_5d8.Rotation.XY.m128d_f64[0];
                auVar95._8_4_ = SUB84(local_5d8.Rotation.ZW.m128d_f64[0],0);
                auVar95._0_8_ = local_5d8.Rotation.ZW.m128d_f64[0];
                auVar95._12_4_ = (int)((ulonglong)local_5d8.Rotation.ZW.m128d_f64[0] >> 0x20);
                dVar86 = local_5d8.Rotation.ZW.m128d_f64[0] * dVar132;
                auVar120._8_4_ = SUB84(local_5d8.Rotation.XY.m128d_f64[1],0);
                auVar120._0_8_ = local_5d8.Rotation.XY.m128d_f64[1];
                auVar120._12_4_ = (int)((ulonglong)local_5d8.Rotation.XY.m128d_f64[1] >> 0x20);
                dVar84 = local_5d8.Rotation.ZW.m128d_f64[0] * dVar145;
                local_5d8.Rotation.ZW.m128d_f64[0] =
                     dVar132 * local_5d8.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar145 * local_5d8.Rotation.ZW.m128d_f64[1] +
                     local_5d8.Rotation.XY.m128d_f64[1] * dVar114 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     local_5d8.Rotation.ZW.m128d_f64[0] * dVar169 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                local_5d8.Rotation.ZW.m128d_f64[1] =
                     dVar114 * local_5d8.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar169 * local_5d8.Rotation.ZW.m128d_f64[1] +
                     local_5d8.Rotation.XY.m128d_f64[1] * dVar132 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                local_5d8.Rotation.XY.m128d_f64[0] =
                     dVar169 * local_5d8.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar85 +
                     local_5d8.Rotation.XY.m128d_f64[1] * dVar145 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar86 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                local_5d8.Rotation.XY.m128d_f64[1] =
                     dVar142 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar113 + auVar120._8_8_ * dVar169 *
                               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar95._8_8_ * dVar114 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                FRigVMDrawInterface::DrawAxes
                          (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_518,&local_5d8,
                           fVar83,fVar178,SDPG_Foreground,fVar177);
                fVar177 = __real_bf800000;
                fVar178 = __real_3f800000;
                dVar158 = local_5d8.Rotation.XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar163 = local_5d8.Rotation.XY.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                dVar17 = local_5d8.Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar19 = local_5d8.Rotation.ZW.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                auVar149._8_4_ = SUB84(dVar19,0);
                auVar149._0_8_ = dVar17;
                auVar149._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
                dVar142 = local_578.Rotation.XY.m128d_f64[0];
                dVar20 = local_578.Rotation.XY.m128d_f64[1];
                dVar113 = local_578.Rotation.ZW.m128d_f64[0];
                dVar18 = local_578.Rotation.ZW.m128d_f64[1];
                auVar173._8_4_ = local_578.Rotation.ZW.m128d_f64[0]._0_4_;
                auVar173._0_8_ = dVar18;
                auVar173._12_4_ = local_578.Rotation.ZW.m128d_f64[0]._4_4_;
                dVar159 = (double)local_1028 *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar164 = dStack_1020 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
                ;
                dVar145 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
                dVar132 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
                dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                dVar84 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
                dVar85 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
                auVar96._8_4_ = local_578.Rotation.XY.m128d_f64[0]._0_4_;
                auVar96._0_8_ = dVar20;
                auVar96._12_4_ = local_578.Rotation.XY.m128d_f64[0]._4_4_;
                dVar114 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                dVar86 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                dVar171 = dVar18 * dVar158 * dVar84 + dVar142 * auVar149._8_8_ +
                          dVar113 * dVar163 * dVar145 + dVar20 * dVar17 * dVar114;
                dVar176 = auVar173._8_8_ * dVar158 * dVar85 + dVar20 * dVar19 +
                          dVar18 * dVar163 * dVar132 + auVar96._8_8_ * dVar17 * dVar86;
                dVar169 = (double)local_1018._0_8_ *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar165 = (double)local_1018._8_8_ *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                dVar21 = dVar20 * dVar158 * dVar26 + dVar113 * auVar149._8_8_ +
                         dVar142 * dVar163 * dVar24 + dVar18 * dVar17 * dVar22;
                dVar17 = dVar142 * dVar158 * dVar27 + dVar18 * dVar19 + dVar20 * dVar163 * dVar25 +
                         dVar113 * dVar17 * dVar23;
                auVar150._8_4_ = SUB84(dVar17,0);
                auVar150._0_8_ = dVar21;
                auVar150._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
                auVar97._8_4_ = SUB84(dVar164,0);
                auVar97._0_8_ = dVar164;
                auVar97._12_4_ = (int)((ulonglong)dVar164 >> 0x20);
                auVar121._8_4_ = SUB84(dVar165,0);
                auVar121._0_8_ = dVar165;
                auVar121._12_4_ = (int)((ulonglong)dVar165 >> 0x20);
                auVar98._8_4_ = SUB84(dVar159,0);
                auVar98._0_8_ = dVar159;
                auVar98._12_4_ = (int)((ulonglong)dVar159 >> 0x20);
                auVar136._8_4_ = SUB84(dVar176,0);
                auVar136._0_8_ = dVar171;
                auVar136._12_4_ = (int)((ulonglong)dVar176 >> 0x20);
                dVar113 = dVar169 * auVar150._8_8_ * dVar84 + dVar164 * dVar171 +
                          dVar165 * dVar21 * dVar145 + dVar159 * auVar136._8_8_ * dVar114;
                dVar142 = dVar169 * dVar21 * dVar85 + auVar97._8_8_ * dVar176 +
                          auVar121._8_8_ * dVar17 * dVar132 + auVar98._8_8_ * dVar171 * dVar86;
                uVar153 = (undefined4)((ulonglong)dVar142 >> 0x20);
                dVar18 = dVar169 * auVar136._8_8_ * dVar26 + dVar164 * dVar21 +
                         dVar165 * dVar171 * dVar24 + dVar159 * auVar150._8_8_ * dVar22;
                dVar169 = dVar169 * dVar171 * dVar27 + dVar164 * dVar17 + dVar165 * dVar176 * dVar25
                          + dVar159 * dVar21 * dVar23;
                uVar154 = (undefined4)((ulonglong)dVar169 >> 0x20);
                auVar99._8_4_ = SUB84(dVar142,0);
                auVar99._0_8_ = dVar113;
                auVar99._12_4_ = uVar153;
                auVar161._8_4_ = SUB84(dVar142,0);
                auVar161._0_8_ = dVar113;
                auVar161._12_4_ = uVar153;
                dVar165 = auVar161._8_8_;
                auVar151._8_4_ = SUB84(dVar169,0);
                auVar151._0_8_ = dVar18;
                auVar151._12_4_ = uVar154;
                auVar137._8_8_ = local_5d8.Rotation.XY.m128d_f64[0];
                auVar137._0_8_ = local_5d8.Rotation.XY.m128d_f64[0];
                auVar100._8_4_ = SUB84(dVar113,0);
                auVar100._0_8_ = dVar165;
                auVar100._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
                auVar122._8_4_ = SUB84(dVar169,0);
                auVar122._0_8_ = dVar18;
                auVar122._12_4_ = uVar154;
                dVar145 = auVar151._8_8_ * local_5d8.Rotation.XY.m128d_f64[0] * dVar84 +
                          dVar113 * local_5d8.Rotation.ZW.m128d_f64[1] +
                          dVar18 * local_5d8.Rotation.XY.m128d_f64[1] * dVar145 +
                          dVar165 * local_5d8.Rotation.ZW.m128d_f64[0] * dVar114;
                dVar84 = dVar18 * local_5d8.Rotation.XY.m128d_f64[0] * dVar85 +
                         auVar99._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] +
                         auVar122._8_8_ * local_5d8.Rotation.XY.m128d_f64[1] * dVar132 +
                         auVar100._8_8_ * local_5d8.Rotation.ZW.m128d_f64[0] * dVar86;
                auVar101._8_4_ = SUB84(dVar84,0);
                auVar101._0_8_ = dVar145;
                auVar101._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
                dVar85 = dVar165 * local_5d8.Rotation.XY.m128d_f64[0] * dVar26 +
                         dVar18 * local_5d8.Rotation.ZW.m128d_f64[1] +
                         dVar113 * local_5d8.Rotation.XY.m128d_f64[1] * dVar24 +
                         auVar151._8_8_ * local_5d8.Rotation.ZW.m128d_f64[0] * dVar22;
                dVar86 = dVar113 * local_5d8.Rotation.XY.m128d_f64[0] * dVar27 +
                         dVar169 * local_5d8.Rotation.ZW.m128d_f64[1] +
                         dVar142 * local_5d8.Rotation.XY.m128d_f64[1] * dVar25 +
                         dVar18 * local_5d8.Rotation.ZW.m128d_f64[0] * dVar23;
                auVar123._8_4_ = SUB84(dVar86,0);
                auVar123._0_8_ = dVar85;
                auVar123._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
                dVar114 = dVar85 * dVar85 + dVar145 * dVar145;
                dVar132 = auVar123._8_8_ * dVar86 + auVar101._8_8_ * dVar84;
                auVar102._8_4_ = SUB84(dVar132,0);
                auVar102._0_8_ = dVar114;
                auVar102._12_4_ = (int)((ulonglong)dVar132 >> 0x20);
                auVar103._0_8_ = auVar102._8_8_ + dVar114;
                auVar103._8_8_ = dVar114 + dVar132;
                auVar133 = sqrtpd(auVar137,auVar103);
                uVar79 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                          auVar103._0_8_);
                uVar81 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                          auVar103._8_8_);
                uVar80 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                          auVar103._0_8_);
                uVar82 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                          auVar103._8_8_);
                auVar146 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                 auVar133);
                auVar133 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                 auVar133);
                auVar124._0_8_ = uVar79 & (ulonglong)(auVar146._0_8_ * dVar145);
                uVar61 = uVar81 & (ulonglong)(auVar146._8_8_ * dVar84);
                auVar124._8_4_ = (undefined4)uVar61;
                auVar124._12_4_ = (undefined4)(uVar61 >> 0x20);
                auVar13._4_4_ =
                     ~(uint)(uVar79 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                auVar13._0_4_ =
                     ~(uint)uVar79 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                auVar13._8_4_ =
                     ~(uint)uVar81 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                auVar13._12_4_ =
                     ~(uint)(uVar81 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                local_578.Rotation.XY.m128d_f64 = (double  [2])(auVar124 | auVar13);
                auVar104._0_8_ = (ulonglong)(auVar133._0_8_ * dVar85) & uVar80;
                uVar61 = uVar82 & (ulonglong)(auVar133._8_8_ * dVar86);
                auVar104._8_4_ = (undefined4)uVar61;
                auVar104._12_4_ = (undefined4)(uVar61 >> 0x20);
                auVar152._0_4_ =
                     ~(uint)uVar80 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                auVar152._4_4_ =
                     ~(uint)(uVar80 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                auVar152._8_4_ =
                     ~(uint)uVar82 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                auVar152._12_4_ =
                     ~(uint)(uVar82 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                local_578.Rotation.ZW.m128d_f64 = (double  [2])(auVar104 | auVar152);
                local_578.Translation.XY.m128d_f64[0] = local_5d8.Translation.XY.m128d_f64[0];
                local_578.Translation.XY.m128d_f64[1] = local_5d8.Translation.XY.m128d_f64[1];
                local_a50 = local_5d8.Translation.XY.m128d_f64[0];
                dStack_a48 = local_5d8.Translation.XY.m128d_f64[1];
                local_a40 = local_5d8.Translation.ZW.m128d_f64[0];
                local_578.Translation.ZW.m128d_f64[0] = local_5d8.Translation.ZW.m128d_f64[0];
                local_578.Translation.ZW.m128d_f64[1] = 0.0;
                FRigVMDrawInterface::DrawAxes
                          (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_518,&local_578,
                           __real_41200000,__real_3f800000,SDPG_Foreground,__real_bf800000);
                dVar85 = local_eb8;
                auVar133 = ___xmm_3ff00000000000000000000000000000;
                dVar132 = __real_3ff0000000000000;
                local_960 = local_1088;
                auVar38._8_8_ = local_5d8.Rotation.ZW.m128d_f64[1];
                auVar38._0_8_ = local_5d8.Rotation.ZW.m128d_f64[0];
                auVar37._8_8_ = local_5d8.Rotation.XY.m128d_f64[1];
                auVar37._0_8_ = local_5d8.Rotation.XY.m128d_f64[0];
                auVar14._8_8_ = 0;
                auVar14._0_8_ = local_eb8;
                auVar146 = blendpd(local_1088,auVar14,2);
                dVar145 = local_1088._8_8_;
                auVar162 = blendpd(auVar37,auVar38,2);
                dVar84 = local_eb8 * local_5d8.Rotation.XY.m128d_f64[1] -
                         dVar145 * local_5d8.Rotation.ZW.m128d_f64[0];
                dVar86 = auVar162._0_8_;
                local_950 = local_eb8;
                dVar113 = auVar162._8_8_;
                auVar166._8_4_ = SUB84(dVar84,0);
                auVar166._0_8_ =
                     dVar145 * local_5d8.Rotation.XY.m128d_f64[0] -
                     local_1088._0_8_ * local_5d8.Rotation.XY.m128d_f64[1];
                auVar166._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
                local_968 = local_eb8;
                auVar125._0_8_ =
                     auVar146._0_8_ * local_5d8.Rotation.ZW.m128d_f64[0] - dVar86 * local_eb8;
                auVar125._8_8_ = auVar146._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] - dVar113 * 0.0
                ;
                auVar105._8_4_ = SUB84(local_5d8.Rotation.ZW.m128d_f64[0],0);
                auVar105._0_8_ = local_5d8.Rotation.XY.m128d_f64[1];
                auVar105._12_4_ = (int)((ulonglong)local_5d8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar146 = blendpd(auVar166,auVar125,2);
                auVar167._0_8_ = auVar146._0_8_ + auVar146._0_8_;
                auVar167._8_8_ = auVar146._8_8_ + auVar146._8_8_;
                dVar84 = dVar84 + dVar84;
                dVar114 = auVar125._0_8_ + auVar125._0_8_;
                uVar153 = (undefined4)((ulonglong)dVar114 >> 0x20);
                auVar138._8_4_ = SUB84(dVar114,0);
                auVar138._0_8_ = dVar84;
                auVar138._12_4_ = uVar153;
                auVar126._8_4_ = SUB84(dVar114,0);
                auVar126._0_8_ = dVar84;
                auVar126._12_4_ = uVar153;
                auVar146 = blendpd(auVar126,auVar167,2);
                auVar139._0_8_ =
                     auVar138._8_8_ * local_5d8.Rotation.XY.m128d_f64[0] -
                     local_5d8.Rotation.XY.m128d_f64[1] * dVar84;
                auVar139._8_8_ =
                     auVar167._0_8_ * local_5d8.Rotation.XY.m128d_f64[1] - auVar105._8_8_ * dVar114;
                auVar127._0_8_ =
                     auVar146._0_8_ * local_5d8.Rotation.ZW.m128d_f64[0] - dVar86 * auVar167._0_8_;
                auVar127._8_8_ =
                     auVar146._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] - dVar113 * auVar167._8_8_;
                auVar106._8_4_ = SUB84(auVar139._8_8_,0);
                auVar106._0_8_ = auVar139._0_8_;
                auVar106._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
                auVar146 = blendpd(auVar139,auVar127,2);
                local_1028 = (FSolverInput *)
                             (auVar167._0_8_ * local_5d8.Rotation.ZW.m128d_f64[1] + local_eb8 +
                             auVar146._0_8_);
                dStack_1020 = auVar167._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] + 0.0 +
                              auVar146._8_8_;
                dVar84 = dVar84 * local_5d8.Rotation.ZW.m128d_f64[1] + local_1088._0_8_ +
                         auVar106._8_8_;
                dVar145 = dVar114 * local_5d8.Rotation.ZW.m128d_f64[1] + dVar145 + auVar127._0_8_;
                uVar154 = SUB84(dVar145,0);
                uVar155 = (undefined4)((ulonglong)dVar145 >> 0x20);
                auVar15._8_8_ = 0;
                auVar15._0_8_ = local_eb8;
                auVar146 = blendpd(___xmm_3ff00000000000000000000000000000,auVar15,2);
                auVar108._0_8_ = (double)__xmm_3ff00000000000000000000000000000;
                dVar142 = __xmm_3ff00000000000000000000000000000._8_8_;
                local_1098._8_4_ = uVar154;
                local_1098._0_8_ = dVar84;
                local_1098._12_4_ = uVar155;
                dVar114 = local_eb8 * local_5d8.Rotation.XY.m128d_f64[1] -
                          dVar142 * local_5d8.Rotation.ZW.m128d_f64[0];
                auVar174._8_4_ = SUB84(dVar114,0);
                auVar174._0_8_ =
                     dVar142 * local_5d8.Rotation.XY.m128d_f64[0] -
                     auVar108._0_8_ * local_5d8.Rotation.XY.m128d_f64[1];
                auVar174._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
                local_9a8._8_4_ = uVar154;
                local_9a8._0_8_ = dVar84;
                local_9a8._12_4_ = uVar155;
                auVar128._0_8_ =
                     auVar146._0_8_ * local_5d8.Rotation.ZW.m128d_f64[0] - dVar86 * local_eb8;
                auVar128._8_8_ = auVar146._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] - dVar113 * 0.0
                ;
                local_978 = ___xmm_3ff00000000000000000000000000000;
                auVar146 = blendpd(auVar174,auVar128,2);
                dVar114 = dVar114 + dVar114;
                dVar169 = auVar128._0_8_ + auVar128._0_8_;
                auVar175._0_8_ = auVar146._0_8_ + auVar146._0_8_;
                auVar175._8_8_ = auVar146._8_8_ + auVar146._8_8_;
                auVar140._8_4_ = SUB84(dVar169,0);
                auVar140._0_8_ = dVar114;
                uVar153 = (undefined4)((ulonglong)dVar169 >> 0x20);
                auVar140._12_4_ = uVar153;
                auVar129._8_4_ = SUB84(dVar169,0);
                auVar129._0_8_ = dVar114;
                auVar129._12_4_ = uVar153;
                auVar146 = blendpd(auVar129,auVar175,2);
                auVar141._0_8_ =
                     auVar140._8_8_ * local_5d8.Rotation.XY.m128d_f64[0] -
                     local_5d8.Rotation.XY.m128d_f64[1] * dVar114;
                auVar141._8_8_ =
                     auVar175._0_8_ * local_5d8.Rotation.XY.m128d_f64[1] -
                     local_5d8.Rotation.ZW.m128d_f64[0] * dVar169;
                auVar130._0_8_ =
                     auVar146._0_8_ * local_5d8.Rotation.ZW.m128d_f64[0] - dVar86 * auVar175._0_8_;
                auVar130._8_8_ =
                     auVar146._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] - dVar113 * auVar175._8_8_;
                auVar107._8_4_ = SUB84(auVar141._8_8_,0);
                auVar107._0_8_ = auVar141._0_8_;
                auVar107._12_4_ = (int)((ulonglong)auVar141._8_8_ >> 0x20);
                auVar168._0_8_ =
                     dVar114 * local_5d8.Rotation.ZW.m128d_f64[1] + auVar108._0_8_ + auVar107._8_8_;
                auVar168._8_8_ =
                     dVar169 * local_5d8.Rotation.ZW.m128d_f64[1] + dVar142 + auVar130._0_8_;
                auVar146 = blendpd(auVar141,auVar130,2);
                pTVar172 = (TArrayView<FFBIKEndEffector_const_,int> *)
                           (auVar175._0_8_ * local_5d8.Rotation.ZW.m128d_f64[1] + local_eb8 +
                           auVar146._0_8_);
                dStack_1050 = auVar175._8_8_ * local_5d8.Rotation.ZW.m128d_f64[1] + 0.0 +
                              auVar146._8_8_;
                local_be0._s_0.Z = __real_3ff0000000000000;
                local_be0._s_0.X = 0.0;
                local_be0._s_0.Y = 0.0;
                local_1058 = pTVar172;
                local_1048 = auVar168;
                local_9c0 = auVar168;
                UE::Math::TTransform<double>::TransformVectorNoScale
                          (&local_5d8,(TVector<double> *)&local_f60._s_0,
                           (TVector<double> *)&local_be0._s_0);
                local_1068._8_4_ = uVar154;
                local_1068._0_8_ = dVar145;
                local_1068._12_4_ = uVar155;
                local_1018._8_4_ = SUB84(auVar168._8_8_,0);
                local_1018._0_8_ = auVar168._8_8_;
                local_1018._12_4_ = (int)((ulonglong)auVar168._8_8_ >> 0x20);
                local_998 = local_1028;
                local_9b0 = pTVar172;
                uVar153 = auVar133._0_4_;
                uVar154 = auVar133._4_4_;
                dVar114 = auVar168._8_8_;
                dVar86 = auVar168._0_8_;
                if (((byte)pFVar74[uVar73 + 0x90] & 1) != 0) {
                  local_d58.M[3][0] = local_5d8.Translation.XY.m128d_f64[0];
                  local_9d8 = local_5d8.Translation.XY.m128d_f64[0];
                  dStack_9d0 = local_5d8.Translation.XY.m128d_f64[1];
                  local_d58.M[1][0] =
                       (double)pTVar172 * dVar145 - (double)local_1028 * auVar168._8_8_;
                  local_d58.M[1][1] =
                       (double)local_1028 * auVar168._0_8_ - (double)pTVar172 * dVar84;
                  local_d58.M[0][3] = dVar85;
                  local_d58.M[1][3] = dVar85;
                  local_d58.M[1][2] = dVar84 * auVar168._8_8_ - dVar145 * auVar168._0_8_;
                  local_d58.M[2][2] = (double)local_1028;
                  local_d58.M[2][3] = dVar85;
                  local_d58.M[3][1] = local_5d8.Translation.XY.m128d_f64[1];
                  local_d58.M[3][2] = local_5d8.Translation.ZW.m128d_f64[0];
                  local_d58.M[3][3] = dVar132;
                  local_9c8 = local_5d8.Translation.ZW.m128d_f64[0];
                  local_d58.M[0][0] = auVar168._0_8_;
                  local_d58.M[0][1] = auVar168._8_8_;
                  local_d58.M[0][2] = (double)pTVar172;
                  local_d58.M[2][0] = dVar84;
                  local_d58.M[2][1] = dVar145;
                  UE::Math::TTransform<double>::SetFromMatrix(&local_338,&local_d58);
                  dVar145 = local_338.Rotation.XY.m128d_f64[1] * 0.0;
                  dVar132 = local_338.Rotation.XY.m128d_f64[0] * 0.0;
                  auVar108._8_4_ = uVar153;
                  auVar108._12_4_ = uVar154;
                  dVar86 = auVar108._0_8_ * local_338.Rotation.XY.m128d_f64[0];
                  dVar114 = auVar108._0_8_ * local_338.Rotation.ZW.m128d_f64[1];
                  dVar84 = local_338.Rotation.XY.m128d_f64[0] * 0.0 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           local_338.Rotation.ZW.m128d_f64[1] * dVar142 +
                           local_338.Rotation.XY.m128d_f64[1] * 0.0 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           auVar108._8_8_ * local_338.Rotation.ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_338.Rotation.XY.m128d_f64[0] =
                       local_338.Rotation.ZW.m128d_f64[1] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       local_338.Rotation.XY.m128d_f64[0] * dVar142 +
                       local_338.Rotation.ZW.m128d_f64[0] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       auVar108._0_8_ * local_338.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_338.Rotation.XY.m128d_f64[1] =
                       local_338.Rotation.ZW.m128d_f64[0] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       local_338.Rotation.XY.m128d_f64[1] * dVar142 +
                       local_338.Rotation.ZW.m128d_f64[1] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       dVar86 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_9f0[1] = dStack_fd8;
                  local_9f0[0] = (double)local_fe0;
                  local_338.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar84,0);
                  local_338.Rotation.ZW.m128d_f64[0] =
                       dVar145 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       local_338.Rotation.ZW.m128d_f64[0] * dVar142 +
                       dVar132 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar114 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  local_338.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar84 >> 0x20);
                  local_9e0 = local_1078;
                  local_338.Scale3D.ZW.m128d_f64[0] = (double)local_1078;
                  local_338.Scale3D.ZW.m128d_f64[1] = 0.0;
                  pFVar10 = *(FRigVMDrawInterface **)&param_1->field_0x58;
                  local_338.Scale3D.XY.m128d_f64 = local_9f0;
                  pFVar58 = (FMaterialRenderProxy *)
                            (**(code **)(((GEngine->ConstraintLimitMaterialX).field0_0x0.DebugPtr)->
                                         _padding_ + 0x310))();
                  FRigVMDrawInterface::DrawCone
                            (pFVar10,&local_518,&local_338,
                             (float)*(double *)(pFVar74 + uVar73 + 0x98),0.0,0x18,false,
                             &FLinearColor::Red,pFVar58,fVar178,SDPG_Foreground,fVar177);
                  dVar114 = (double)local_1018._0_8_;
                  dVar86 = (double)local_1048._0_8_;
                }
                if (((byte)pFVar74[uVar73 + 0x90] & 2) != 0) {
                  local_dd8.M[3][0] = local_5d8.Translation.XY.m128d_f64[0];
                  local_dd8.M[1][0] =
                       local_f60._s_0.Z * dVar114 - local_f60._s_0.Y * (double)local_1058;
                  local_dd8.M[0][0] = local_f60._s_0.X;
                  local_dd8.M[0][1] = local_f60._s_0.Y;
                  local_a08 = local_5d8.Translation.XY.m128d_f64[0];
                  dStack_a00 = local_5d8.Translation.XY.m128d_f64[1];
                  local_dd8.M[1][1] =
                       local_f60._s_0.X * (double)local_1058 - local_f60._s_0.Z * dVar86;
                  local_dd8.M[0][2] = local_f60._s_0.Z;
                  local_dd8.M[0][3] = dVar85;
                  local_dd8.M[1][3] = dVar85;
                  local_dd8.M[2][1] = (double)local_1018._0_8_;
                  local_dd8.M[1][2] =
                       local_f60._s_0.Y * dVar86 - local_f60._s_0.X * (double)local_1018._0_8_;
                  local_dd8.M[2][2] = (double)local_1058;
                  local_dd8.M[2][3] = dVar85;
                  local_dd8.M[3][1] = local_5d8.Translation.XY.m128d_f64[1];
                  local_dd8.M[3][2] = local_5d8.Translation.ZW.m128d_f64[0];
                  local_dd8.M[3][3] = __real_3ff0000000000000;
                  local_9f8 = local_5d8.Translation.ZW.m128d_f64[0];
                  local_dd8.M[2][0] = dVar86;
                  UE::Math::TTransform<double>::SetFromMatrix(&local_2d8,&local_dd8);
                  dVar114 = local_2d8.Rotation.ZW.m128d_f64[0];
                  auVar109._8_4_ = auVar133._8_4_;
                  auVar109._0_8_ = dVar142;
                  auVar109._12_4_ = auVar133._12_4_;
                  dVar132 = local_2d8.Rotation.ZW.m128d_f64[1];
                  auVar110._8_4_ = uVar153;
                  auVar110._0_8_ = auVar108._0_8_;
                  auVar110._12_4_ = uVar154;
                  dVar145 = local_2d8.Rotation.XY.m128d_f64[0] * 0.0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            auVar109._8_8_ * dVar132 +
                            local_2d8.Rotation.XY.m128d_f64[1] * 0.0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            auVar110._8_8_ * dVar114 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  dVar84 = auVar108._0_8_ * local_2d8.Rotation.XY.m128d_f64[0];
                  local_a38[1] = dStack_fd8;
                  local_a38[0] = (double)local_fe0;
                  local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar145,0);
                  local_2d8.Rotation.ZW.m128d_f64[0] =
                       local_2d8.Rotation.XY.m128d_f64[1] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar142 * dVar114 +
                       local_2d8.Rotation.XY.m128d_f64[0] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       auVar108._0_8_ * dVar132 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar145 >> 0x20);
                  local_2d8.Rotation.XY.m128d_f64[0] =
                       dVar132 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar142 * local_2d8.Rotation.XY.m128d_f64[0] +
                       dVar114 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       auVar108._0_8_ * local_2d8.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_2d8.Rotation.XY.m128d_f64[1] =
                       dVar114 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dVar142 * local_2d8.Rotation.XY.m128d_f64[1] +
                       dVar132 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_a28 = local_1078;
                  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)local_1078;
                  local_2d8.Scale3D.ZW.m128d_f64[1] = 0.0;
                  pFVar10 = *(FRigVMDrawInterface **)&param_1->field_0x58;
                  local_2d8.Scale3D.XY.m128d_f64 = local_a38;
                  pFVar58 = (FMaterialRenderProxy *)
                            (**(code **)(((GEngine->ConstraintLimitMaterialY).field0_0x0.DebugPtr)->
                                         _padding_ + 0x310))();
                  FRigVMDrawInterface::DrawCone
                            (pFVar10,&local_518,&local_2d8,
                             (float)*(double *)(pFVar74 + uVar73 + 0xa0),0.0,0x18,false,
                             &FLinearColor::Green,pFVar58,fVar178,SDPG_Foreground,fVar177);
                }
                fVar157 = __real_3f99999a;
                fVar83 = __real_40a00000;
                if (((byte)pFVar74[uVar73 + 0x90] & 4) != 0) {
                  local_cd8.M[3][0] = local_5d8.Translation.XY.m128d_f64[0];
                  local_cd8.M[1][0] =
                       local_f60._s_0.Y * (double)local_1028 -
                       local_f60._s_0.Z * (double)local_1068._0_8_;
                  local_cd8.M[0][0] = (double)local_1098._0_8_;
                  local_cd8.M[0][1] = (double)local_1068._0_8_;
                  local_a80 = local_5d8.Translation.XY.m128d_f64[0];
                  dStack_a78 = local_5d8.Translation.XY.m128d_f64[1];
                  local_cd8.M[1][1] =
                       local_f60._s_0.Z * (double)local_1098._0_8_ -
                       local_f60._s_0.X * (double)local_1028;
                  local_cd8.M[0][2] = (double)local_1028;
                  local_cd8.M[0][3] = dVar85;
                  local_cd8.M[1][2] =
                       local_f60._s_0.X * (double)local_1068._0_8_ -
                       local_f60._s_0.Y * (double)local_1098._0_8_;
                  local_cd8.M[1][3] = dVar85;
                  local_cd8.M[2][0] = local_f60._s_0.X;
                  local_cd8.M[2][1] = local_f60._s_0.Y;
                  local_cd8.M[2][2] = local_f60._s_0.Z;
                  local_cd8.M[2][3] = dVar85;
                  local_cd8.M[3][1] = local_5d8.Translation.XY.m128d_f64[1];
                  local_cd8.M[3][2] = local_5d8.Translation.ZW.m128d_f64[0];
                  local_cd8.M[3][3] = __real_3ff0000000000000;
                  local_a70 = local_5d8.Translation.ZW.m128d_f64[0];
                  UE::Math::TTransform<double>::SetFromMatrix(&local_278,&local_cd8);
                  dVar84 = local_278.Rotation.ZW.m128d_f64[0];
                  auVar111._8_4_ = auVar133._8_4_;
                  auVar111._0_8_ = dVar142;
                  auVar111._12_4_ = auVar133._12_4_;
                  dVar114 = local_278.Rotation.ZW.m128d_f64[1];
                  auVar112._8_4_ = uVar153;
                  auVar112._0_8_ = auVar108._0_8_;
                  auVar112._12_4_ = uVar154;
                  dVar145 = local_278.Rotation.XY.m128d_f64[0] * 0.0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            auVar111._8_8_ * dVar114 +
                            local_278.Rotation.XY.m128d_f64[1] * 0.0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            auVar112._8_8_ * dVar84 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_a68[1] = dStack_fd8;
                  local_a68[0] = (double)local_fe0;
                  local_278.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar145,0);
                  local_278.Rotation.ZW.m128d_f64[0] =
                       local_278.Rotation.XY.m128d_f64[1] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar142 * dVar84 +
                       local_278.Rotation.XY.m128d_f64[0] * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       auVar108._0_8_ * dVar114 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  local_278.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar145 >> 0x20);
                  dVar145 = auVar108._0_8_ * local_278.Rotation.XY.m128d_f64[0];
                  local_278.Rotation.XY.m128d_f64[0] =
                       dVar114 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar142 * local_278.Rotation.XY.m128d_f64[0] +
                       dVar84 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       auVar108._0_8_ * local_278.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_278.Rotation.XY.m128d_f64[1] =
                       dVar84 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dVar142 * local_278.Rotation.XY.m128d_f64[1] +
                       dVar114 * 0.0 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       dVar145 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_a58 = local_1078;
                  local_278.Scale3D.ZW.m128d_f64[0] = (double)local_1078;
                  local_278.Scale3D.ZW.m128d_f64[1] = 0.0;
                  pFVar10 = *(FRigVMDrawInterface **)&param_1->field_0x58;
                  local_278.Scale3D.XY.m128d_f64 = local_a68;
                  pFVar58 = (FMaterialRenderProxy *)
                            (**(code **)(((GEngine->ConstraintLimitMaterialZ).field0_0x0.DebugPtr)->
                                         _padding_ + 0x310))();
                  FRigVMDrawInterface::DrawCone
                            (pFVar10,&local_518,&local_278,
                             (float)*(double *)(pFVar74 + uVar73 + 0xa8),0.0,0x18,false,
                             &FLinearColor::Blue,pFVar58,fVar178,SDPG_Foreground,fVar177);
                  fVar157 = __real_3f99999a;
                  fVar83 = __real_40a00000;
                }
              }
              uVar66 = 0;
              if ((int)uVar76 < (param_9->InternalConstraints).ArrayNum) {
                uVar66 = ~uVar76 >> 0x1f;
              }
              if ((uVar66 == 0) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar61 = (ulonglong)(byte)(pTVar78->AllocatorInstance).Data[uVar73 + 0xb0];
              if ((2 < uVar61) &&
                 (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0x12f,L""), bVar44)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FPoleVectorConstraint,FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar61) != '\0') {
                uVar66 = 0;
                if ((int)uVar76 < (param_9->InternalConstraints).ArrayNum) {
                  uVar66 = ~uVar76 >> 0x1f;
                }
                if ((uVar66 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                this = (FPoleVectorConstraint *)((pTVar78->AllocatorInstance).Data + uVar73);
                if ((*(char *)&this[4].PoleVector.field0_0x0 != '\x02') &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index == TypeIndex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                        ,0x97,L""), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar66 = this->ParentBoneIndex;
                uVar72 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  uVar72 = ~uVar66 >> 0x1f;
                }
                if ((uVar72 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                lVar69 = (longlong)(int)uVar66 * 0x130;
                local_458.Rotation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x10);
                local_458.Rotation.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x10 + 8);
                local_458.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x20);
                local_458.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x20 + 8);
                local_458.Translation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x30);
                local_458.Translation.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x30 + 8);
                local_458.Translation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x40);
                local_458.Translation.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x40 + 8);
                local_458.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x50);
                local_458.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x50 + 8);
                local_458.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x60);
                local_458.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x60 + 8);
                uVar66 = this->BoneIndex;
                uVar72 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  uVar72 = ~uVar66 >> 0x1f;
                }
                if ((uVar72 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                lVar69 = (longlong)(int)uVar66 * 0x130;
                local_398.Rotation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x10);
                local_398.Rotation.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x10 + 8);
                local_398.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x20);
                local_398.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x20 + 8);
                local_398.Translation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x30);
                local_398.Translation.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x30 + 8);
                local_398.Translation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x40);
                local_398.Translation.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x40 + 8);
                local_398.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x50);
                local_398.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x50 + 8);
                local_398.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x60);
                local_398.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x60 + 8);
                uVar66 = this->ChildBoneIndex;
                uVar72 = 0;
                if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                  uVar72 = ~uVar66 >> 0x1f;
                }
                if ((uVar72 == 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
                lVar69 = (longlong)(int)uVar66 * 0x130;
                dVar145 = *(double *)(pFVar74 + lVar69 + 0x30);
                dVar84 = *(double *)(pFVar74 + lVar69 + 0x30 + 8);
                adVar5 = *(double (*) [2])(pFVar74 + lVar69 + 0x40);
                local_b48.Rotation.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x10);
                local_b48.Rotation.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x10 + 8);
                local_b48.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x20);
                local_b48.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x20 + 8);
                local_b48.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x50);
                local_b48.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x50 + 8);
                local_b48.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar74 + lVar69 + 0x60);
                local_b48.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar74 + lVar69 + 0x60 + 8);
                local_b48.Translation.XY.m128d_f64[0] = dVar145;
                local_b48.Translation.XY.m128d_f64[1] = dVar84;
                local_b48.Translation.ZW.m128d_f64[0] = adVar5[0];
                local_b48.Translation.ZW.m128d_f64[1] = adVar5[1];
                if (this->bUseLocalDir == false) {
                  pTVar59 = &local_c10;
                  local_c10._s_0.X = (this->PoleVector).field0_0x0._s_0.X;
                  local_c10._s_0.Y = (this->PoleVector).field0_0x0._s_0.Y;
                  local_c10._s_0.Z = (this->PoleVector).field0_0x0._s_0.Z;
                }
                else {
                  uVar66 = this->BoneIndex;
                  uVar72 = 0;
                  if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
                    uVar72 = ~uVar66 >> 0x1f;
                  }
                  if ((uVar72 == 0) &&
                     (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar44)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pTVar59 = &FPoleVectorConstraint::CalculateCurrentPoleVectorDir
                                       (this,&local_638,&local_458,&local_398,&local_b48,
                                        (TQuat<double> *)
                                        ((param_9->LinkData).AllocatorInstance.Data +
                                        (longlong)(int)uVar66 * 0x130 + 0x110))->field0_0x0;
                }
                local_1008._s_0.X = (((TVector<double>_u_0 *)&(pTVar59->_s_0).X)->_s_0).X;
                local_1008._s_0.Y = (pTVar59->_s_0).Y;
                local_1008._s_0.Z = (pTVar59->_s_0).Z;
                local_e40 = local_458.Translation.ZW.m128d_f64[0];
                local_10b8.Data = (FScriptContainerElement *)0x0;
                local_10b0 = 0;
                local_e50 = local_458.Translation.XY.m128d_f64[0];
                dStack_e48 = local_458.Translation.XY.m128d_f64[1];
                iVar47 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                iVar45 = iVar47 + 1;
                *(double *)(local_10b8.Data + (longlong)iVar47 * 0x18) = local_e50;
                *(double *)(local_10b8.Data + (longlong)iVar47 * 0x18 + 8) = dStack_e48;
                *(double *)(local_10b8.Data + (longlong)iVar47 * 0x18 + 0x10) = local_e40;
                dVar114 = adVar5[0];
                local_f48._s_0.X = dVar145;
                local_f48._s_0.Y = dVar84;
                local_f48._s_0.Z = dVar114;
                local_10b0._0_4_ = iVar45;
                if (((local_10b8.Data <= &local_f48) &&
                    (&local_f48 <
                     (TVector<double>_u_0 *)(local_10b8.Data + (longlong)local_10b0._4_4_ * 0x18)))
                   && (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((int)local_10b0 == local_10b0._4_4_) {
                  local_10b0._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                }
                iVar45 = (int)local_10b0 + 1;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18) = local_f48._s_0.X;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 8) =
                     local_f48._s_0.Y;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 0x10) =
                     local_f48._s_0.Z;
                local_f30._s_0.X = dVar145;
                local_f30._s_0.Y = dVar84;
                local_f30._s_0.Z = dVar114;
                local_10b0._0_4_ = iVar45;
                if (((local_10b8.Data <= &local_f30) &&
                    (&local_f30 <
                     (TVector<double>_u_0 *)(local_10b8.Data + (longlong)local_10b0._4_4_ * 0x18)))
                   && (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((int)local_10b0 == local_10b0._4_4_) {
                  local_10b0._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                }
                iVar45 = (int)local_10b0 + 1;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18) = local_f30._s_0.X;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 8) =
                     local_f30._s_0.Y;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 0x10) =
                     local_f30._s_0.Z;
                local_10b0._0_4_ = iVar45;
                if (((local_10b8.Data <= &local_1008) &&
                    (&local_1008 <
                     (TVector<double>_u_0 *)(local_10b8.Data + (longlong)local_10b0._4_4_ * 0x18)))
                   && (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((int)local_10b0 == local_10b0._4_4_) {
                  local_10b0._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                }
                iVar45 = (int)local_10b0 + 1;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18) = local_1008._s_0.X;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 8) =
                     local_1008._s_0.Y;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 0x10) =
                     local_1008._s_0.Z;
                local_10b0._0_4_ = iVar45;
                if (((local_10b8.Data <= &local_1008) &&
                    (&local_1008 <
                     (TVector<double>_u_0 *)(local_10b8.Data + (longlong)local_10b0._4_4_ * 0x18)))
                   && (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((int)local_10b0 == local_10b0._4_4_) {
                  local_10b0._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                }
                iVar45 = (int)local_10b0 + 1;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18) = local_1008._s_0.X;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 8) =
                     local_1008._s_0.Y;
                *(double *)(local_10b8.Data + (longlong)(int)local_10b0 * 0x18 + 0x10) =
                     local_1008._s_0.Z;
                local_f18._s_0.Z = local_458.Translation.ZW.m128d_f64[0];
                local_f18._s_0.X = local_458.Translation.XY.m128d_f64[0];
                local_f18._s_0.Y = local_458.Translation.XY.m128d_f64[1];
                local_10b0._0_4_ = iVar45;
                if (((local_10b8.Data <= &local_f18) &&
                    (&local_f18 <
                     (TVector<double>_u_0 *)(local_10b8.Data + (longlong)local_10b0._4_4_ * 0x18)))
                   && (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((int)local_10b0 == local_10b0._4_4_) {
                  local_10b0._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_10b8,(int *)((longlong)&local_10b0 + 4));
                }
                iVar45 = (int)local_10b0 + 1;
                lVar69 = (longlong)(int)local_10b0;
                local_10b0 = CONCAT44(local_10b0._4_4_,iVar45);
                *(double *)(local_10b8.Data + lVar69 * 0x18) = local_f18._s_0.X;
                *(double *)(local_10b8.Data + lVar69 * 0x18 + 8) = local_f18._s_0.Y;
                *(double *)(local_10b8.Data + lVar69 * 0x18 + 0x10) = local_f18._s_0.Z;
                pFVar10 = *(FRigVMDrawInterface **)&param_1->field_0x58;
                local_e88.DataPtr = (TVector<double> *)local_10b8.Data;
                if ((iVar45 < 0) &&
                   (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar44)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_e88.ArrayNum = iVar45;
                FRigVMDrawInterface::DrawLines
                          (pFVar10,&local_518,&local_e88,&FLinearColor::Gray,fVar157,SDPG_Foreground
                           ,fVar177);
                local_bf8._s_0.X = local_398.Translation.XY.m128d_f64[0];
                local_bf8._s_0.Y = local_398.Translation.XY.m128d_f64[1];
                local_bf8._s_0.Z = local_398.Translation.ZW.m128d_f64[0];
                FRigVMDrawInterface::DrawLine
                          (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_518,
                           (TVector<double> *)&local_bf8._s_0,(TVector<double> *)&local_1008._s_0,
                           &FLinearColor::Red,fVar157,SDPG_Foreground,fVar177);
                if ((TVector<double>_u_0 *)local_10b8.Data != (TVector<double>_u_0 *)0x0) {
                  FMemory::Free(local_10b8.Data);
                }
              }
              local_10a0 = (undefined8 *)((longlong)local_10a0 + 1);
              uVar61 = (ulonglong)(uVar76 + 1);
              iVar45 = (param_9->InternalConstraints).ArrayNum;
              uVar73 = uVar73 + 0xc0;
            } while ((int)(uVar76 + 1) < iVar45);
          }
        }
      }
    }
    pUVar67 = local_1070;
    uVar73 = 0;
    uVar61 = uVar73;
    if (0 < (param_9->LinkData).ArrayNum) {
      do {
        puVar75 = (undefined8 *)0x0;
        uVar66 = (uint)uVar73;
        puVar49 = puVar75;
        if (*(int *)&(param_9->LinkDataToHierarchyIndices).field_0x8 !=
            *(int *)&(param_9->LinkDataToHierarchyIndices).field_0x34) {
          puVar70 = *(undefined1 **)&(param_9->LinkDataToHierarchyIndices).field_0x40;
          puVar63 = &(param_9->LinkDataToHierarchyIndices).field_0x38;
          if (puVar70 != (undefined1 *)0x0) {
            puVar63 = puVar70;
          }
          iVar45 = *(int *)(puVar63 +
                           (*(int *)&(param_9->LinkDataToHierarchyIndices).field_0x48 - 1 & uVar73)
                           * 4);
          if (iVar45 != -1) {
            do {
              puVar49 = (undefined8 *)
                        (*(longlong *)&param_9->LinkDataToHierarchyIndices + (longlong)iVar45 * 0x18
                        );
              if (*(uint *)(*(longlong *)&param_9->LinkDataToHierarchyIndices +
                           (longlong)iVar45 * 0x18) == uVar66) break;
              iVar45 = *(int *)(puVar49 + 2);
              puVar49 = puVar75;
            } while (iVar45 != -1);
          }
        }
        puVar71 = (undefined8 *)((longlong)puVar49 + 4);
        if (puVar49 == (undefined8 *)0x0) {
          puVar71 = puVar75;
        }
        uVar76 = 0;
        if ((int)uVar66 < (param_9->LinkData).ArrayNum) {
          uVar76 = ~uVar66 >> 0x1f;
        }
        if ((uVar76 == 0) &&
           (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar44)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar74 = (param_9->LinkData).AllocatorInstance.Data;
        local_ec8._0_8_ = *puVar71;
        dVar145 = *(double *)(pFVar74 + uVar61 + 0x10);
        dVar84 = *(double *)(pFVar74 + uVar61 + 0x10 + 8);
        dVar114 = *(double *)(pFVar74 + uVar61 + 0x20);
        dVar132 = *(double *)(pFVar74 + uVar61 + 0x20 + 8);
        dVar85 = *(double *)(pFVar74 + uVar61 + 0x30);
        dVar86 = *(double *)(pFVar74 + uVar61 + 0x30 + 8);
        dVar113 = *(double *)(pFVar74 + uVar61 + 0x40);
        dVar142 = *(double *)(pFVar74 + uVar61 + 0x40 + 8);
        dVar169 = *(double *)(pFVar74 + uVar61 + 0x50);
        dVar165 = *(double *)(pFVar74 + uVar61 + 0x50 + 8);
        dVar18 = *(double *)(pFVar74 + uVar61 + 0x60);
        dVar17 = *(double *)(pFVar74 + uVar61 + 0x60 + 8);
        local_ec8.Name.Number = *(uint *)(puVar71 + 1);
        local_6e8 = dVar145;
        dStack_6e0 = dVar84;
        local_6d8 = dVar114;
        dStack_6d0 = dVar132;
        local_6c8 = dVar85;
        dStack_6c0 = dVar86;
        local_6b8 = dVar113;
        dStack_6b0 = dVar142;
        local_6a8 = dVar169;
        dStack_6a0 = dVar165;
        local_698 = dVar18;
        dStack_690 = dVar17;
        uVar76 = URigHierarchy::GetIndex(pUVar67,&local_ec8,true);
        local_948.Rotation.XY.m128d_f64[0] = dVar145;
        local_948.Rotation.XY.m128d_f64[1] = dVar84;
        local_948.Rotation.ZW.m128d_f64[0] = dVar114;
        local_948.Rotation.ZW.m128d_f64[1] = dVar132;
        local_948.Translation.XY.m128d_f64[0] = dVar85;
        local_948.Translation.XY.m128d_f64[1] = dVar86;
        local_948.Translation.ZW.m128d_f64[0] = dVar113;
        local_948.Translation.ZW.m128d_f64[1] = dVar142;
        local_948.Scale3D.XY.m128d_f64[0] = dVar169;
        local_948.Scale3D.XY.m128d_f64[1] = dVar165;
        local_948.Scale3D.ZW.m128d_f64[0] = dVar18;
        local_948.Scale3D.ZW.m128d_f64[1] = dVar17;
        if ((-1 < (int)uVar76) && ((int)uVar76 < (pUVar67->Elements).ArrayNum)) {
          uVar72 = 0;
          if ((int)uVar76 < (pUVar67->Elements).ArrayNum) {
            uVar72 = ~uVar76 >> 0x1f;
          }
          if ((uVar72 == 0) &&
             (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar44)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar11 = *(FRigTransformElement **)
                     ((pUVar67->Elements).AllocatorInstance.Data + (longlong)(int)uVar76 * 8);
          if (pFVar11 != (FRigTransformElement *)0x0) {
            lVar69 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11);
            pUVar60 = FRigTransformElement::StaticStruct();
            if (pUVar60 != (UScriptStruct *)0x0) {
              iVar45 = (int)pUVar60->_padding_;
              if ((*(int *)(lVar69 + 0x38) < iVar45) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar69 + 0x30) + (longlong)iVar45 * 8)
                  != &pUVar60->_padding_)) {
                bVar44 = false;
              }
              else {
                bVar44 = true;
              }
              if (bVar44) {
                URigHierarchy::SetTransform
                          (pUVar67,pFVar11,&local_948,CurrentGlobal,param_7,false,false,false);
              }
            }
          }
        }
        uVar73 = (ulonglong)(uVar66 + 1);
        uVar61 = uVar61 + 0x130;
      } while ((int)(uVar66 + 1) < (param_9->LinkData).ArrayNum);
    }
    FStatsHierarchical::EndMeasurement();
  }
  return;
}

