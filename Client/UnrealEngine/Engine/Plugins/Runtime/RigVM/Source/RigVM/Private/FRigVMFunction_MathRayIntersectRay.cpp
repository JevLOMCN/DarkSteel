// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a176ce0

UScriptStruct * __cdecl FRigVMFunction_MathRayIntersectRay::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectRay.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectRay.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay,
                         (UObject *)pUVar1,L"RigVMFunction_MathRayIntersectRay");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectRay.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectRay.OuterSingleton;
}

// GetExecuteContextStruct @ 14a176d60

UScriptStruct * __thiscall
FRigVMFunction_MathRayIntersectRay::GetExecuteContextStruct
          (FRigVMFunction_MathRayIntersectRay *this)

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

// Execute @ 14a176f80

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
FRigVMFunction_MathRayIntersectRay::Execute(FRigVMFunction_MathRayIntersectRay *this)

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
  StaticExecute(&local_118,&this->A,&this->B,&this->Result,&this->Distance,&this->RatioA,
                &this->RatioB);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathRayIntersectRay @ 14a18e7f0

FRigVMFunction_MathRayIntersectRay * __thiscall
FRigVMFunction_MathRayIntersectRay::FRigVMFunction_MathRayIntersectRay
          (FRigVMFunction_MathRayIntersectRay *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRayIntersectRay__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->A).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->A).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->A).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->A).Direction.field0_0x0._s_0.X = 0.0;
  (this->A).Direction.field0_0x0._s_0.Y = 0.0;
  (this->A).Direction.field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->B).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->B).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->B).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->B).Direction.field0_0x0._s_0.X = 0.0;
  (this->B).Direction.field0_0x0._s_0.Y = 0.0;
  (this->B).Direction.field0_0x0._s_0.Z = 1.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar1 = __real_3ff0000000000000;
  (this->B).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->B).Origin.field0_0x0._s_0.Y = (double)uVar3;
  uVar6 = (undefined4)uVar1;
  uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  (this->A).Origin.field0_0x0._s_0.X = (double)uVar2;
  (this->A).Origin.field0_0x0._s_0.Y = (double)uVar3;
  *(undefined4 *)((longlong)&(this->B).Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->B).Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->B).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->B).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->A).Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->A).Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->A).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->A).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->B).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->B).Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->B).Direction.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->B).Direction.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)((longlong)&(this->A).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->A).Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->A).Direction.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->A).Direction.field0_0x0 + 0x14) = uVar7;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar1;
  (this->Result).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  this->RatioA = 0.0;
  this->RatioB = 0.0;
  this->Distance = 0.0;
  return this;
}

// Execute @ 14a1a1f70

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
FRigVMFunction_MathRayIntersectRay::Execute
          (FRigVMFunction_MathRayIntersectRay *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->A,&this->B,&this->Result,&this->Distance,&this->RatioA,&this->RatioB)
  ;
  return;
}

// RigVMExecute @ 14a1cb180

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
FRigVMFunction_MathRayIntersectRay::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TVector<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TRay<double> *pTVar5;
  TRay<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  FRigVMExecuteContext *pFVar11;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TRay<double> *)pFVar7->Ptr;
  }
  else {
    pTVar5 = (TRay<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TRay<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar6 = (TRay<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
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
  pTVar2 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar5,pTVar6,pTVar2,pfVar8,pfVar9,pfVar10);
  return;
}

// StaticExecute @ 14a1e25d0

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
FRigVMFunction_MathRayIntersectRay::StaticExecute
          (FRigVMExecuteContext *param_1,TRay<double> *param_2,TRay<double> *param_3,
          TVector<double> *param_4,float *param_5,float *param_6,float *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [6];
  
  dVar15 = (param_3->Origin).field0_0x0._s_0.X;
  dVar17 = (param_3->Origin).field0_0x0._s_0.Z;
  dVar18 = (param_3->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_2->Origin).field0_0x0._s_0.X;
  dVar2 = (param_2->Origin).field0_0x0._s_0.Y;
  dVar3 = (param_2->Origin).field0_0x0._s_0.Z;
  dVar4 = (param_3->Direction).field0_0x0._s_0.Z * __real_40c3880000000000;
  dVar8 = (param_2->Direction).field0_0x0._s_0.Y * __real_40c3880000000000;
  dVar5 = (param_3->Direction).field0_0x0._s_0.Y * __real_40c3880000000000;
  dVar6 = (param_3->Direction).field0_0x0._s_0.X * __real_40c3880000000000;
  dVar9 = (param_2->Direction).field0_0x0._s_0.X * __real_40c3880000000000;
  dVar7 = (param_2->Direction).field0_0x0._s_0.Z * __real_40c3880000000000;
  local_138._s_0.Y = dVar5 + dVar18;
  local_138._s_0.X = dVar6 + dVar15;
  local_118._s_0.X = dVar15 - dVar6;
  local_118._s_0.Y = dVar18 - dVar5;
  local_f8._s_0.Y = dVar8 + dVar2;
  local_138._s_0.Z = dVar4 + dVar17;
  local_118._s_0.Z = dVar17 - dVar4;
  local_d8._s_0.Y = dVar2 - dVar8;
  local_f8._s_0.X = dVar9 + dVar1;
  local_d8._s_0.X = dVar1 - dVar9;
  local_f8._s_0.Z = dVar7 + dVar3;
  local_d8._s_0.Z = dVar3 - dVar7;
  FMath::SegmentDistToSegmentSafe<double>
            ((TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0,
             (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0[0]._s_0);
  dVar18 = (local_b8._s_0.Y + (double)local_a0[0]._8_8_) * __real_3fe0000000000000;
  dVar15 = (local_b8._s_0.Z + (double)local_a0[0]._16_8_) * __real_3fe0000000000000;
  dVar17 = local_b8._s_0.X - (double)local_a0[0]._0_8_;
  (param_4->field0_0x0)._s_0.X =
       (local_b8._s_0.X + (double)local_a0[0]._0_8_) * __real_3fe0000000000000;
  (param_4->field0_0x0)._s_0.Y = dVar18;
  (param_4->field0_0x0)._s_0.Z = dVar15;
  dVar15 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  *param_5 = 0.0;
  if (((dVar15 < (double)CONCAT44(uVar14,uVar12)) ||
      (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_b8._s_0.Y - (double)local_a0[0]._8_8_) >>
                                       0x20) & uVar11,
                                 SUB84(local_b8._s_0.Y - (double)local_a0[0]._8_8_,0) & uVar10))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_b8._s_0.Z - (double)local_a0[0]._16_8_) >>
                                      0x20) & uVar11,
                                SUB84(local_b8._s_0.Z - (double)local_a0[0]._16_8_,0) & uVar10))) {
    auVar13._0_8_ =
         (local_b8._s_0.Z - (double)local_a0[0]._16_8_) *
         (local_b8._s_0.Z - (double)local_a0[0]._16_8_);
    auVar13._8_8_ = 0;
    auVar16._0_8_ =
         (local_b8._s_0.Y - (double)local_a0[0]._8_8_) *
         (local_b8._s_0.Y - (double)local_a0[0]._8_8_) + dVar17 * dVar17 + auVar13._0_8_;
    auVar16._8_8_ = 0;
    auVar13 = sqrtpd(auVar13,auVar16);
    *param_5 = (float)auVar13._0_8_;
  }
  *param_6 = (float)((local_b8._s_0.X - (param_2->Origin).field0_0x0._s_0.X) *
                     (param_2->Direction).field0_0x0._s_0.X +
                     (local_b8._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y) *
                     (param_2->Direction).field0_0x0._s_0.Y +
                    (local_b8._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z) *
                    (param_2->Direction).field0_0x0._s_0.Z);
  *param_7 = (float)(((double)local_a0[0]._0_8_ - (param_3->Origin).field0_0x0._s_0.X) *
                     (param_3->Direction).field0_0x0._s_0.X +
                     ((double)local_a0[0]._8_8_ - (param_3->Origin).field0_0x0._s_0.Y) *
                     (param_3->Direction).field0_0x0._s_0.Y +
                    ((double)local_a0[0]._16_8_ - (param_3->Origin).field0_0x0._s_0.Z) *
                    (param_3->Direction).field0_0x0._s_0.Z);
  return;
}

