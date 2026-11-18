// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a178660

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionFromAxisAndAngle");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a1786e0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionFromAxisAndAngle::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionFromAxisAndAngle *this)

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

// Execute @ 14a1788f0

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
FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute
          (FRigVMFunction_MathQuaternionFromAxisAndAngle *this)

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
  StaticExecute(&local_118,&this->Axis,this->Angle,&this->Result);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0cf0

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
FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute
          (FRigVMFunction_MathQuaternionFromAxisAndAngle *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Axis,this->Angle,&this->Result);
  return;
}

// RigVMExecute @ 14a1c70b0

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
FRigVMFunction_MathQuaternionFromAxisAndAngle::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TQuat<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  float *pfVar8;
  FRigVMExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar3->Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar8;
  if (iVar2 < 3) {
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
  pTVar4 = (TQuat<double> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar9,pTVar7,fVar1,pTVar4);
  return;
}

// StaticExecute @ 14a1df090

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
FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,float param_3,
          TQuat<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  uint uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000) &&
      (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
      uVar6 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)) &&
     (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
     uVar6 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar7 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)) {
    param_4->X = UE::Math::TQuat<double>::Identity.X;
    param_4->Y = dVar3;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    param_4->Z = UE::Math::TQuat<double>::Identity.Z;
    param_4->W = dVar1;
    return;
  }
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = __real_3ff0000000000000 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar4 * dVar4);
  __libm_sse2_sincos_();
  param_4->X = dVar1 * dVar5 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  param_4->Y = dVar3 * dVar5 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  param_4->Z = dVar4 * dVar5 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  param_4->W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  return;
}

