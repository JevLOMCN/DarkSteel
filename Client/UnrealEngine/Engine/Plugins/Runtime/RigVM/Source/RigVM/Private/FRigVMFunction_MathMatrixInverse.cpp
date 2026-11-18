// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a14a2f0

UScriptStruct * __cdecl FRigVMFunction_MathMatrixInverse::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixInverse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixInverse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixInverse");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixInverse.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixInverse.OuterSingleton;
}

// GetExecuteContextStruct @ 14a14a370

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixInverse::GetExecuteContextStruct(FRigVMFunction_MathMatrixInverse *this)

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

// Execute @ 14a14a470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_MathMatrixInverse::Execute(FRigVMFunction_MathMatrixInverse *this)

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
  StaticExecute(&local_118,(TMatrix<double> *)&this->field_0x10,(TMatrix<double> *)&this->field_0x90
               );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathMatrixInverse @ 14a18dcc0

FRigVMFunction_MathMatrixInverse * __thiscall
FRigVMFunction_MathMatrixInverse::FRigVMFunction_MathMatrixInverse
          (FRigVMFunction_MathMatrixInverse *this)

{
  double dVar1;
  
  *(undefined ***)this = &___7FRigVMFunction_MathMatrixUnaryOp__6B_;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  *(double *)&this->field_0x90 = UE::Math::TMatrix<double>::Identity.M[0][0];
  *(double *)&this->field_0x98 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  *(double *)&this->field_0xa0 = UE::Math::TMatrix<double>::Identity.M[0][2];
  *(double *)&this->field_0xa8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  *(double *)&this->field_0xb0 = UE::Math::TMatrix<double>::Identity.M[1][0];
  *(double *)&this->field_0xb8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  *(double *)&this->field_0xc0 = UE::Math::TMatrix<double>::Identity.M[1][2];
  *(double *)&this->field_0xc8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  *(double *)&this->field_0xd0 = UE::Math::TMatrix<double>::Identity.M[2][0];
  *(double *)&this->field_0xd8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  *(double *)&this->field_0xe0 = UE::Math::TMatrix<double>::Identity.M[2][2];
  *(double *)&this->field_0xe8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  *(double *)&this->field_0xf0 = UE::Math::TMatrix<double>::Identity.M[3][0];
  *(double *)&this->field_0xf8 = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  *(double *)&this->field_0x100 = UE::Math::TMatrix<double>::Identity.M[3][2];
  *(double *)&this->field_0x108 = dVar1;
  *(undefined ***)this = &___7FRigVMFunction_MathMatrixInverse__6B_;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&this->field_0x90;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&this->field_0x98;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&this->field_0xa0;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&this->field_0xa8;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&this->field_0xb0;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&this->field_0xb8;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&this->field_0xc0;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&this->field_0xc8;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)&this->field_0xd0;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&this->field_0xd8;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&this->field_0xe0;
  *(undefined8 *)&this->field_0x68 = *(undefined8 *)&this->field_0xe8;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&this->field_0xf0;
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)&this->field_0xf8;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&this->field_0x100;
  *(undefined8 *)&this->field_0x88 = *(undefined8 *)&this->field_0x108;
  return this;
}

// Execute @ 14a1a0b90

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
FRigVMFunction_MathMatrixInverse::Execute
          (FRigVMFunction_MathMatrixInverse *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,(TMatrix<double> *)&this->field_0x10,(TMatrix<double> *)&this->field_0x90);
  return;
}

// RigVMExecute @ 14a1c68a0

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
FRigVMFunction_MathMatrixInverse::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TMatrix<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TMatrix<double> *pTVar6;
  FRigVMExecuteContext *pFVar7;
  
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
    pTVar6 = (TMatrix<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TMatrix<double> *)
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
  pTVar3 = (TMatrix<double> *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar7,pTVar6,pTVar3);
  return;
}

// StaticExecute @ 14a1ded70

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
FRigVMFunction_MathMatrixInverse::StaticExecute
          (FRigVMExecuteContext *param_1,TMatrix<double> *param_2,TMatrix<double> *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_d8 [32];
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  dVar7 = param_2->M[0][0];
  uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
           (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000) ||
         (dVar7 = param_2->M[0][1],
         uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
         (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000)) ||
        (dVar7 = param_2->M[0][2],
        uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
        (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000)) ||
       ((dVar7 = param_2->M[1][0],
        uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
        (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000 ||
        (dVar7 = param_2->M[1][1],
        uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
        (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000)))) ||
      ((dVar7 = param_2->M[1][2],
       uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
       (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000 ||
       ((dVar7 = param_2->M[2][0],
        uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
        (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000 ||
        (dVar7 = param_2->M[2][1],
        uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
        (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000)))))) ||
     (dVar7 = param_2->M[2][2],
     uVar1 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar3 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     uVar2 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
     uVar4 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
     uVar5 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
     uVar6 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
     uVar9 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
     uVar10 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
     uVar11 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
     uVar12 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
     uVar13 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
     uVar14 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
     uVar15 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
     uVar16 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
     uVar17 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
     uVar18 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
     uVar19 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
     uVar20 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
     uVar21 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
     uVar22 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
     uVar23 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
     uVar24 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
     uVar25 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
     uVar26 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
     uVar27 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
     uVar28 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
     uVar29 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
     uVar30 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
     uVar31 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
     uVar32 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
     dVar7 = UE::Math::TMatrix<double>::Identity.M[0][2],
     dVar8 = UE::Math::TMatrix<double>::Identity.M[0][3],
     __real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar1) &&
     (double)CONCAT44(uVar3,uVar1) != __real_3e45798ee0000000)) {
    FMath::MatrixInverse(&local_b8,param_2);
    uVar2 = local_b8.M[0][0]._0_4_;
    uVar4 = local_b8.M[0][0]._4_4_;
    uVar5 = local_b8.M[0][1]._0_4_;
    uVar6 = local_b8.M[0][1]._4_4_;
    uVar9 = local_b8.M[1][0]._0_4_;
    uVar10 = local_b8.M[1][0]._4_4_;
    uVar11 = local_b8.M[1][1]._0_4_;
    uVar12 = local_b8.M[1][1]._4_4_;
    uVar13 = local_b8.M[1][2]._0_4_;
    uVar14 = local_b8.M[1][2]._4_4_;
    uVar15 = local_b8.M[1][3]._0_4_;
    uVar16 = local_b8.M[1][3]._4_4_;
    uVar17 = local_b8.M[2][0]._0_4_;
    uVar18 = local_b8.M[2][0]._4_4_;
    uVar19 = local_b8.M[2][1]._0_4_;
    uVar20 = local_b8.M[2][1]._4_4_;
    uVar21 = local_b8.M[2][2]._0_4_;
    uVar22 = local_b8.M[2][2]._4_4_;
    uVar23 = local_b8.M[2][3]._0_4_;
    uVar24 = local_b8.M[2][3]._4_4_;
    uVar25 = local_b8.M[3][0]._0_4_;
    uVar26 = local_b8.M[3][0]._4_4_;
    uVar27 = local_b8.M[3][1]._0_4_;
    uVar28 = local_b8.M[3][1]._4_4_;
    uVar29 = local_b8.M[3][2]._0_4_;
    uVar30 = local_b8.M[3][2]._4_4_;
    uVar31 = local_b8.M[3][3]._0_4_;
    uVar32 = local_b8.M[3][3]._4_4_;
    dVar7 = local_b8.M[0][2];
    dVar8 = local_b8.M[0][3];
  }
  *(undefined4 *)param_3->M[0] = uVar2;
  *(undefined4 *)((longlong)param_3->M[0] + 4) = uVar4;
  *(undefined4 *)(param_3->M[0] + 1) = uVar5;
  *(undefined4 *)((longlong)param_3->M[0] + 0xc) = uVar6;
  param_3->M[0][2] = dVar7;
  param_3->M[0][3] = dVar8;
  *(undefined4 *)param_3->M[1] = uVar9;
  *(undefined4 *)((longlong)param_3->M[1] + 4) = uVar10;
  *(undefined4 *)(param_3->M[1] + 1) = uVar11;
  *(undefined4 *)((longlong)param_3->M[1] + 0xc) = uVar12;
  *(undefined4 *)(param_3->M[1] + 2) = uVar13;
  *(undefined4 *)((longlong)param_3->M[1] + 0x14) = uVar14;
  *(undefined4 *)(param_3->M[1] + 3) = uVar15;
  *(undefined4 *)((longlong)param_3->M[1] + 0x1c) = uVar16;
  *(undefined4 *)param_3->M[2] = uVar17;
  *(undefined4 *)((longlong)param_3->M[2] + 4) = uVar18;
  *(undefined4 *)(param_3->M[2] + 1) = uVar19;
  *(undefined4 *)((longlong)param_3->M[2] + 0xc) = uVar20;
  *(undefined4 *)(param_3->M[2] + 2) = uVar21;
  *(undefined4 *)((longlong)param_3->M[2] + 0x14) = uVar22;
  *(undefined4 *)(param_3->M[2] + 3) = uVar23;
  *(undefined4 *)((longlong)param_3->M[2] + 0x1c) = uVar24;
  *(undefined4 *)param_3->M[3] = uVar25;
  *(undefined4 *)((longlong)param_3->M[3] + 4) = uVar26;
  *(undefined4 *)(param_3->M[3] + 1) = uVar27;
  *(undefined4 *)((longlong)param_3->M[3] + 0xc) = uVar28;
  *(undefined4 *)(param_3->M[3] + 2) = uVar29;
  *(undefined4 *)((longlong)param_3->M[3] + 0x14) = uVar30;
  *(undefined4 *)(param_3->M[3] + 3) = uVar31;
  *(undefined4 *)((longlong)param_3->M[3] + 0x1c) = uVar32;
  return;
}

