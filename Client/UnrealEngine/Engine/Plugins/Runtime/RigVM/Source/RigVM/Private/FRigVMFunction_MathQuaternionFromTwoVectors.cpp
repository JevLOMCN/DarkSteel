// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a17b6c0

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionFromTwoVectors");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a17b7a0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionFromTwoVectors::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionFromTwoVectors *this)

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

// Execute @ 14a17b9c0

void __thiscall
FRigVMFunction_MathQuaternionFromTwoVectors::Execute
          (FRigVMFunction_MathQuaternionFromTwoVectors *this)

{
  undefined8 uVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  TQuat<double> local_28;
  
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
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  uVar1 = *(undefined8 *)&(this->A).field0_0x0;
  uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 8),
       uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 0x10),
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) &&
     (((uVar1 = *(undefined8 *)&(this->B).field0_0x0,
       uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000 ||
       (uVar1 = *(undefined8 *)((longlong)&(this->B).field0_0x0 + 8),
       uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->B).field0_0x0 + 0x10),
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)))) {
    pTVar3 = FRigVMMathLibrary::FindQuatBetweenVectors(&local_28,&this->A,&this->B);
    dVar2 = pTVar3->Y;
    (this->Result).X = pTVar3->X;
    (this->Result).Y = dVar2;
    dVar2 = pTVar3->W;
    (this->Result).Z = pTVar3->Z;
    (this->Result).W = dVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  (this->Result).X = UE::Math::TQuat<double>::Identity.X;
  (this->Result).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Result).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Result).W = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0e60

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
FRigVMFunction_MathQuaternionFromTwoVectors::Execute
          (FRigVMFunction_MathQuaternionFromTwoVectors *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->A,&this->B,&this->Result);
  return;
}

// RigVMExecute @ 14a1c75a0

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
FRigVMFunction_MathQuaternionFromTwoVectors::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TQuat<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
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
  pTVar3 = (TQuat<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1df250

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
FRigVMFunction_MathQuaternionFromTwoVectors::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TQuat<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  TQuat<double> local_28;
  
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  uVar4 = (uint)*(undefined8 *)&param_2->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) &&
     (((uVar4 = (uint)*(undefined8 *)&param_3->field0_0x0 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000 ||
       (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
       uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)))) {
    pTVar3 = FRigVMMathLibrary::FindQuatBetweenVectors(&local_28,param_2,param_3);
    dVar2 = pTVar3->Y;
    param_4->X = pTVar3->X;
    param_4->Y = dVar2;
    dVar2 = pTVar3->W;
    param_4->Z = pTVar3->Z;
    param_4->W = dVar2;
    return;
  }
  param_4->X = UE::Math::TQuat<double>::Identity.X;
  param_4->Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  param_4->Z = UE::Math::TQuat<double>::Identity.Z;
  param_4->W = dVar2;
  return;
}

