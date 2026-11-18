// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticStruct @ 14def4e50

UScriptStruct * __cdecl FRigUnit_IKRig::StaticStruct(void)

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
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IKRig,(UObject *)pUVar7,L"RigUnit_IKRig"
                        );
    this = FRigVMRegistry_RWLock::Get();
    pUVar8 = Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.OuterSingleton;
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
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_IKRig_Statics::RigVMFunctions;
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
          return Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.OuterSingleton;
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
  return Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.OuterSingleton;
}

// GetExecuteContextStruct @ 14def50a0

UScriptStruct * __thiscall FRigUnit_IKRig::GetExecuteContextStruct(FRigUnit_IKRig *this)

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

// Execute @ 14def50b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_IKRig::Execute(FRigUnit_IKRig *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FIKRigGoalInput_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  local_278.DataPtr = (FIKRigGoalInput *)(this->Goals).AllocatorInstance.Data;
  iVar1 = (this->Goals).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->IKRigAsset,&local_278,&this->WorkData)
  ;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// CacheRigElements @ 14df278e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IKRig::CacheRigElements
          (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,URigHierarchy *param_3)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FCachedRigElement *this;
  FName *pFVar6;
  undefined1 local_res10 [8];
  FRigElementKey local_38;
  
  uVar3 = param_2->ArrayNum;
  if (-1 < (int)uVar3) {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3,&param_1->AllocatorInstance,0,piVar1);
    }
    pFVar6 = (FName *)(param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar2 = pFVar6 + iVar4;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar6 == pFVar2) break;
      local_38.Name = *pFVar6;
      iVar5 = param_1->ArrayNum;
      local_38.Type = Bone;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      this = (FCachedRigElement *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
      (this->Key).Type = None;
      (this->Key).Name.ComparisonIndex = 0;
      (this->Key).Name.Number = 0;
      this->Index = 0xffff;
      this->ContainerVersion = -1;
      this->Element = (FRigBaseElement *)0x0;
      FCachedRigElement::UpdateCache(this,&local_38,param_3);
      pFVar6 = pFVar6 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Execute @ 14df31090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_IKRig::Execute(FRigUnit_IKRig *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FIKRigGoalInput_const_,int> local_18;
  
  local_18.DataPtr = (FIKRigGoalInput *)(this->Goals).AllocatorInstance.Data;
  iVar1 = (this->Goals).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->IKRigAsset,&local_18,&this->WorkData);
  return;
}

// RigVMExecute @ 14df51e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IKRig::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<UIKRigDefinition> *pTVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FIKRigWorkData *pFVar8;
  FControlRigExecuteContext *pFVar9;
  TArrayView<FIKRigGoalInput_const_,int> local_18;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TObjectPtr<UIKRigDefinition> *)pFVar2->Ptr;
  }
  else {
    pTVar5 = (TObjectPtr<UIKRigDefinition> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
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
  pFVar8 = (FIKRigWorkData *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  local_18.DataPtr = *(FIKRigGoalInput **)puVar6;
  local_18.ArrayNum = *(int *)(puVar6 + 8);
  if (local_18.ArrayNum < 0) {
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
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pTVar5,&local_18,pFVar8);
  return;
}

// StaticExecute @ 14df591e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IKRig::StaticExecute
          (FControlRigExecuteContext *param_1,TObjectPtr<UIKRigDefinition> *param_2,
          TArrayView<FIKRigGoalInput_const_,int> *param_3,FIKRigWorkData *param_4)

{
  int *piVar1;
  double dVar2;
  USkeletalMeshComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  FRigTransformElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  URigHierarchy *pUVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  UClass *pUVar25;
  USkeletalMesh *pUVar26;
  FIKRigGoalContainer *pFVar27;
  TRotator<double> *pTVar28;
  char *pcVar29;
  longlong lVar30;
  UScriptStruct *pUVar31;
  FCachedRigElement *this;
  atomic<unsigned_char> *paVar32;
  uint uVar33;
  FName *pFVar34;
  FScriptContainerElement *pFVar35;
  FName *pFVar36;
  TTransform<double> *pTVar37;
  longlong lVar38;
  FIKRigGoalInput *pFVar39;
  char *pcVar40;
  FIKRigGoalInput *pFVar41;
  longlong lVar42;
  undefined1 auStackY_2b8 [32];
  undefined1 local_277;
  undefined1 local_276;
  bool local_275;
  bool local_274;
  FLLMScope local_270 [2];
  URigHierarchy *local_268;
  undefined8 local_260;
  undefined8 local_258;
  FIKRigGoalContainer local_250;
  FIKRigGoalContainer local_238;
  TArrayView<FIKRigGoalInput_const_,int> *local_220;
  FControlRigExecuteContext *local_218;
  TObjectPtr<UIKRigDefinition>_u_0 *local_210;
  FMemScope local_208;
  FRigElementKey local_200 [2];
  FRigElementKey local_1e8;
  TQuat<double> local_1d8;
  FName local_1b8;
  FName FStack_1b0;
  FName local_1a8;
  TTransform<double> local_198;
  TRotator<double> local_138;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_220 = param_3;
  local_218 = param_1;
  local_210 = &param_2->field0_0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name12,L"Animation/IKRig");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_270,LLMScope_Name12,false,None,Default,true);
  FMemScope::FMemScope(&local_208,&LLMScope_Name12,true);
  local_268 = param_1->Hierarchy;
  if (local_268 == (URigHierarchy *)0x0) goto LAB_14df59b1e;
  pUVar26 = (USkeletalMesh *)0x0;
  if ((param_4->IKRigProcessor).bInitialized == false) {
    pUVar3 = *(USkeletalMeshComponent **)&param_1->field_0xd0;
    local_250.Goals.ArrayNum = 0;
    local_250.Goals.ArrayMax = 0;
    local_250.bRigNeedsInitialized = true;
    local_250._1_7_ = 0;
    local_250.Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pUVar3 != (USkeletalMeshComponent *)0x0) {
      pUVar25 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar24 = (int)pUVar25->_padding_;
      if ((iVar24 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
          &pUVar25->_padding_)) {
        pUVar25 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar24 = (int)pUVar25->_padding_;
        if ((iVar24 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
            &pUVar25->_padding_)) {
          pUVar26 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar3);
        }
      }
    }
    FIKRigProcessor::Initialize
              (&param_4->IKRigProcessor,(param_2->field0_0x0).DebugPtr,pUVar26,&local_250);
    if (local_250.Goals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Goals.AllocatorInstance.Data);
    }
    if ((param_4->IKRigProcessor).bInitialized != false) {
      uVar33 = (param_4->IKRigProcessor).Skeleton.BoneNames.ArrayNum;
      if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
      }
      piVar1 = &(param_4->CachedRigElements).ArrayMax;
      (param_4->CachedRigElements).ArrayNum = 0;
      if ((param_4->CachedRigElements).ArrayMax < (int)uVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar33,(ForAnyElementType *)param_4,0,piVar1);
      }
      pUVar19 = local_268;
      pFVar34 = (FName *)(param_4->IKRigProcessor).Skeleton.BoneNames.AllocatorInstance.Data;
      iVar24 = (param_4->IKRigProcessor).Skeleton.BoneNames.ArrayNum;
      pFVar36 = pFVar34 + iVar24;
      while( true ) {
        if ((param_4->IKRigProcessor).Skeleton.BoneNames.ArrayNum != iVar24) {
          local_277 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_277);
        }
        param_3 = local_220;
        if (pFVar34 == pFVar36) break;
        local_200[0].Name = *pFVar34;
        iVar22 = (param_4->CachedRigElements).ArrayNum;
        local_200[0].Type = Bone;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->CachedRigElements).ArrayNum = iVar22 + 1;
        this = (FCachedRigElement *)
               ((param_4->CachedRigElements).AllocatorInstance.Data + (longlong)iVar22 * 0x20);
        (this->Key).Type = None;
        (this->Key).Name.ComparisonIndex = 0;
        (this->Key).Name.Number = 0;
        this->Index = 0xffff;
        this->ContainerVersion = -1;
        this->Element = (FRigBaseElement *)0x0;
        FCachedRigElement::UpdateCache(this,local_200,pUVar19);
        pFVar34 = pFVar34 + 1;
      }
    }
  }
  if ((param_4->IKRigProcessor).bInitialized == false) goto LAB_14df59b1e;
  pFVar27 = FIKRigProcessor::GetGoalContainer(&param_4->IKRigProcessor);
  pFVar4 = (pFVar27->Goals).AllocatorInstance.Data;
  iVar24 = (pFVar27->Goals).ArrayNum;
  pFVar35 = pFVar4 + 0x5c;
  while( true ) {
    if ((pFVar27->Goals).ArrayNum != iVar24) {
      local_276 = 0;
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_276);
    }
    if (pFVar35 + -0x5c == pFVar4 + (longlong)iVar24 * 0xb0) break;
    *(undefined8 *)(pFVar35 + -4) = 0;
    pFVar35 = pFVar35 + 0xb0;
  }
  pFVar39 = param_3->DataPtr;
  pFVar41 = pFVar39 + param_3->ArrayNum;
  if (pFVar39 != pFVar41) {
    pTVar37 = &pFVar39->Transform;
    do {
      pFVar36 = (FName *)(pFVar27->Goals).AllocatorInstance.Data;
      pFVar34 = pFVar36 + (longlong)(pFVar27->Goals).ArrayNum * 0x16;
      for (; pFVar36 != pFVar34; pFVar36 = pFVar36 + 0x16) {
        if (*pFVar36 == pFVar39->GoalName) {
          if (pFVar36 != (FName *)0x0) {
            *(undefined1 *)&pFVar36[0x14].ComparisonIndex.Value = 1;
            local_1b8 = (FName)(pTVar37->Translation).XY.m128d_f64[0];
            FStack_1b0 = *(FName *)((pTVar37->Translation).XY.m128d_f64 + 1);
            local_1a8 = (FName)(pTVar37->Translation).ZW.m128d_f64[0];
            pFVar36[5] = local_1b8;
            pFVar36[6] = FStack_1b0;
            pFVar36[7] = local_1a8;
            local_1d8.X = (pTVar37->Rotation).XY.m128d_f64[0];
            local_1d8.Y = (pTVar37->Rotation).XY.m128d_f64[1];
            local_1d8.Z = (pTVar37->Rotation).ZW.m128d_f64[0];
            local_1d8.W = (pTVar37->Rotation).ZW.m128d_f64[1];
            pTVar28 = UE::Math::TQuat<double>::Rotator(&local_1d8,&local_138);
            FVar7 = (FName)pTVar28->Yaw;
            pFVar36[8] = (FName)pTVar28->Pitch;
            pFVar36[9] = FVar7;
            pFVar36[10] = (FName)pTVar28->Roll;
            pFVar36[0xb].ComparisonIndex.Value = (uint)(float)*(double *)(pTVar37 + 1);
            dVar2 = *(double *)((longlong)(pTVar37 + 1) + 8);
            *(undefined2 *)&pFVar36[0xc].ComparisonIndex.Value = 0;
            pFVar36[0xb].Number = (uint)(float)dVar2;
          }
          break;
        }
      }
      pFVar39 = pFVar39 + 1;
      pTVar37 = (TTransform<double> *)((longlong)(pTVar37 + 1) + 0x20);
    } while (pFVar39 != pFVar41);
  }
  if (((param_4->IKRigProcessor).bInitialized == false) &&
     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_727633314675949108>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                          ,0x1cc,"bInitialized"), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_4->IKRigProcessor).GoalContainer.bRigNeedsInitialized != false) {
    local_238.Goals.ArrayNum = 0;
    local_238.Goals.ArrayMax = 0;
    local_238.bRigNeedsInitialized = true;
    local_238._1_7_ = 0;
    pUVar3 = *(USkeletalMeshComponent **)&local_218->field_0xd0;
    local_238.Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pUVar3 == (USkeletalMeshComponent *)0x0) {
LAB_14df59624:
      pUVar26 = (USkeletalMesh *)0x0;
    }
    else {
      pUVar25 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar24 = (int)pUVar25->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar24) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
          &pUVar25->_padding_)) goto LAB_14df59624;
      pUVar25 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar24 = (int)pUVar25->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar24) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
          &pUVar25->_padding_)) goto LAB_14df59624;
      pUVar26 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar3);
    }
    FIKRigProcessor::Initialize(&param_4->IKRigProcessor,local_210->DebugPtr,pUVar26,&local_238);
    if (local_238.Goals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Goals.AllocatorInstance.Data);
    }
  }
  iVar24 = (param_4->CachedRigElements).ArrayNum;
  uVar33 = 0;
  if (0 < iVar24) {
    lVar42 = 0;
    lVar38 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar33 < iVar24) {
        uVar23 = ~uVar33 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar35 = (param_4->CachedRigElements).AllocatorInstance.Data;
      if ((((*(short *)(pFVar35 + lVar38 + 0xc) == -1) ||
           (bVar20 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar35 + lVar38 + 4)), !bVar20
           )) || (local_260 = 0, *(longlong *)(pFVar35 + lVar38 + 4) == 0)) ||
         (pFVar35[lVar38] == (FScriptContainerElement)0x0)) {
        pcVar29 = "CachedRigElement.IsValid()";
        iVar24 = 0x5a;
        pcVar40 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\AnimNodes\\RigUnit_IKRig.cpp"
        ;
        paVar32 = &bGEnsureHasExecuted<1634608168526938202>;
LAB_14df5983a:
        bVar20 = UE::Assert::Private::ExecCheckImplInternal(paVar32,false,pcVar40,iVar24,pcVar29);
        if (bVar20) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        uVar23 = 0xffffffff;
        if (*(ushort *)(pFVar35 + lVar38 + 0xc) != 0xffff) {
          uVar23 = (uint)*(ushort *)(pFVar35 + lVar38 + 0xc);
        }
        URigHierarchy::GetGlobalTransformByIndex(local_268,&local_118,uVar23,false);
        dVar18 = local_118.Scale3D.ZW.m128d_f64[1];
        dVar17 = local_118.Scale3D.ZW.m128d_f64[0];
        dVar16 = local_118.Scale3D.XY.m128d_f64[1];
        dVar15 = local_118.Scale3D.XY.m128d_f64[0];
        dVar14 = local_118.Translation.ZW.m128d_f64[1];
        dVar13 = local_118.Translation.ZW.m128d_f64[0];
        dVar12 = local_118.Translation.XY.m128d_f64[1];
        dVar11 = local_118.Translation.XY.m128d_f64[0];
        dVar10 = local_118.Rotation.ZW.m128d_f64[1];
        dVar9 = local_118.Rotation.ZW.m128d_f64[0];
        dVar8 = local_118.Rotation.XY.m128d_f64[1];
        dVar2 = local_118.Rotation.XY.m128d_f64[0];
        if (((int)uVar33 < 0) ||
           ((param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum <= (int)uVar33)) {
          pcVar29 = "Skeleton.CurrentPoseGlobal.IsValidIndex(InBoneIndex)";
          iVar24 = 0x143;
          pcVar40 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
          ;
          paVar32 = &bGEnsureHasExecuted<_727633314675949245>;
          goto LAB_14df5983a;
        }
        uVar23 = 0;
        if ((int)uVar33 < (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum) {
          uVar23 = ~uVar33 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar35 = (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.AllocatorInstance.Data;
        *(double *)(pFVar35 + lVar42) = dVar2;
        *(double *)(pFVar35 + lVar42 + 8) = dVar8;
        *(double *)(pFVar35 + lVar42 + 0x10) = dVar9;
        *(double *)(pFVar35 + lVar42 + 0x10 + 8) = dVar10;
        *(double *)(pFVar35 + lVar42 + 0x20) = dVar11;
        *(double *)(pFVar35 + lVar42 + 0x20 + 8) = dVar12;
        *(double *)(pFVar35 + lVar42 + 0x30) = dVar13;
        *(double *)(pFVar35 + lVar42 + 0x30 + 8) = dVar14;
        *(double *)(pFVar35 + lVar42 + 0x40) = dVar15;
        *(double *)(pFVar35 + lVar42 + 0x40 + 8) = dVar16;
        *(double *)(pFVar35 + lVar42 + 0x50) = dVar17;
        *(double *)(pFVar35 + lVar42 + 0x50 + 8) = dVar18;
      }
      iVar24 = (param_4->CachedRigElements).ArrayNum;
      uVar33 = uVar33 + 1;
      lVar38 = lVar38 + 0x20;
      lVar42 = lVar42 + 0x60;
    } while ((int)uVar33 < iVar24);
  }
  FIKRigProcessor::Solve(&param_4->IKRigProcessor,&UE::Math::TTransform<double>::Identity);
  uVar33 = 0;
  if (0 < (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum) {
    lVar42 = 0;
    lVar38 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar33 < (param_4->CachedRigElements).ArrayNum) {
        uVar23 = ~uVar33 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar35 = (param_4->CachedRigElements).AllocatorInstance.Data;
      if ((((*(short *)(pFVar35 + lVar38 + 0xc) != -1) &&
           (bVar21 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar35 + lVar38 + 4)),
           bVar20 = bInitial, bVar21)) && (local_258 = 0, *(longlong *)(pFVar35 + lVar38 + 4) != 0))
         && (pFVar35[lVar38] != (FScriptContainerElement)0x0)) {
        local_275 = bSetupUndo;
        local_274 = bAffectChildren;
        uVar23 = 0;
        if ((int)uVar33 < (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum) {
          uVar23 = ~uVar33 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar19 = local_268;
        pFVar4 = (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.AllocatorInstance.Data;
        local_1e8._0_8_ = *(undefined8 *)(pFVar35 + lVar38);
        dVar2 = *(double *)(pFVar4 + lVar42);
        dVar8 = *(double *)(pFVar4 + lVar42 + 8);
        dVar9 = *(double *)(pFVar4 + lVar42 + 0x10);
        dVar10 = *(double *)(pFVar4 + lVar42 + 0x10 + 8);
        dVar11 = *(double *)(pFVar4 + lVar42 + 0x20);
        dVar12 = *(double *)(pFVar4 + lVar42 + 0x20 + 8);
        dVar13 = *(double *)(pFVar4 + lVar42 + 0x30);
        dVar14 = *(double *)(pFVar4 + lVar42 + 0x30 + 8);
        dVar15 = *(double *)(pFVar4 + lVar42 + 0x40);
        dVar16 = *(double *)(pFVar4 + lVar42 + 0x40 + 8);
        dVar17 = *(double *)(pFVar4 + lVar42 + 0x50);
        dVar18 = *(double *)(pFVar4 + lVar42 + 0x50 + 8);
        local_1e8.Name.Number = *(uint *)(pFVar35 + lVar38 + 8);
        iVar24 = URigHierarchy::GetIndex(local_268,&local_1e8,true);
        local_198.Rotation.XY.m128d_f64[0] = dVar2;
        local_198.Rotation.XY.m128d_f64[1] = dVar8;
        local_198.Rotation.ZW.m128d_f64[0] = dVar9;
        local_198.Rotation.ZW.m128d_f64[1] = dVar10;
        local_198.Translation.XY.m128d_f64[0] = dVar11;
        local_198.Translation.XY.m128d_f64[1] = dVar12;
        local_198.Translation.ZW.m128d_f64[0] = dVar13;
        local_198.Translation.ZW.m128d_f64[1] = dVar14;
        local_198.Scale3D.XY.m128d_f64[0] = dVar15;
        local_198.Scale3D.XY.m128d_f64[1] = dVar16;
        local_198.Scale3D.ZW.m128d_f64[0] = dVar17;
        local_198.Scale3D.ZW.m128d_f64[1] = dVar18;
        if ((-1 < iVar24) && (iVar24 < (pUVar19->Elements).ArrayNum)) {
          if (((pUVar19->Elements).ArrayNum <= iVar24) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = *(FRigTransformElement **)
                    ((pUVar19->Elements).AllocatorInstance.Data + (longlong)iVar24 * 8);
          if (pFVar5 != (FRigTransformElement *)0x0) {
            lVar30 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
            pUVar31 = FRigTransformElement::StaticStruct();
            if (pUVar31 != (UScriptStruct *)0x0) {
              iVar24 = (int)pUVar31->_padding_;
              if ((*(int *)(lVar30 + 0x38) < iVar24) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar24 * 8)
                  != &pUVar31->_padding_)) {
                bVar21 = false;
              }
              else {
                bVar21 = true;
              }
              if (bVar21) {
                URigHierarchy::SetTransform
                          (local_268,pFVar5,&local_198,CurrentGlobal - (bVar20 != false),local_274,
                           local_275,false,false);
              }
            }
          }
        }
      }
      uVar33 = uVar33 + 1;
      lVar38 = lVar38 + 0x20;
      lVar42 = lVar42 + 0x60;
    } while ((int)uVar33 < (param_4->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum);
  }
LAB_14df59b1e:
  FMemScope::~FMemScope(&local_208);
  FLLMScope::~FLLMScope(local_270);
  return;
}

