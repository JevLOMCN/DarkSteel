// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a178980

UScriptStruct * __cdecl FRigVMFunction_MathRayIntersectPlane::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectPlane.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectPlane.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane,
                         (UObject *)pUVar1,L"RigVMFunction_MathRayIntersectPlane");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectPlane.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayIntersectPlane.OuterSingleton;
}

// GetExecuteContextStruct @ 14a178a10

UScriptStruct * __thiscall
FRigVMFunction_MathRayIntersectPlane::GetExecuteContextStruct
          (FRigVMFunction_MathRayIntersectPlane *this)

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

// Execute @ 14a179100

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
FRigVMFunction_MathRayIntersectPlane::Execute(FRigVMFunction_MathRayIntersectPlane *this)

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
  StaticExecute(&local_118,&this->Ray,&this->PlanePoint,&this->PlaneNormal,&this->Result,
                &this->Distance,&this->Ratio);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathRayIntersectPlane @ 14a18e710

FRigVMFunction_MathRayIntersectPlane * __thiscall
FRigVMFunction_MathRayIntersectPlane::FRigVMFunction_MathRayIntersectPlane
          (FRigVMFunction_MathRayIntersectPlane *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRayIntersectPlane__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Ray).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Ray).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->Ray).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->Ray).Direction.field0_0x0._s_0.X = 0.0;
  (this->Ray).Direction.field0_0x0._s_0.Y = 0.0;
  (this->Ray).Direction.field0_0x0._s_0.Z = 1.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = __real_3ff0000000000000;
  (this->Ray).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Ray).Origin.field0_0x0._s_0.Y = (double)uVar2;
  *(undefined4 *)((longlong)&(this->Ray).Origin.field0_0x0 + 0x10) = uVar3;
  *(undefined4 *)((longlong)&(this->Ray).Origin.field0_0x0 + 0x14) = uVar4;
  *(undefined4 *)&(this->Ray).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(this->Ray).Direction.field0_0x0 + 0x10) = (int)uVar1;
  *(int *)((longlong)&(this->Ray).Direction.field0_0x0 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PlanePoint).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PlanePoint).field0_0x0._s_0.Y = (double)uVar1;
  (this->PlanePoint).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->PlaneNormal).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->PlaneNormal).field0_0x0._s_0.Y = (double)uVar1;
  (this->PlaneNormal).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar1;
  (this->Result).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  this->Distance = 0.0;
  this->Ratio = 0.0;
  return this;
}

// Execute @ 14a1a1f20

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
FRigVMFunction_MathRayIntersectPlane::Execute
          (FRigVMFunction_MathRayIntersectPlane *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Ray,&this->PlanePoint,&this->PlaneNormal,&this->Result,
                &this->Distance,&this->Ratio);
  return;
}

// RigVMExecute @ 14a1caf80

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
FRigVMFunction_MathRayIntersectPlane::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TRay<double> *pTVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  TVector<double> *pTVar8;
  float *pfVar9;
  float *pfVar10;
  FRigVMExecuteContext *pFVar11;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar4 = (TRay<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TRay<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TVector<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar4,pTVar5,pTVar6,pTVar8,pfVar9,pfVar10);
  return;
}

// StaticExecute @ 14a1e2370

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
FRigVMFunction_MathRayIntersectPlane::StaticExecute
          (FRigVMExecuteContext *param_1,TRay<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float *param_6,float *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar12 = (param_4->field0_0x0)._s_0.X;
  dVar7 = (param_4->field0_0x0)._s_0.Z;
  dVar6 = (param_4->field0_0x0)._s_0.Y;
  dVar11 = dVar6 * dVar6 + dVar12 * dVar12 + dVar7 * dVar7;
  if (dVar11 == __real_3ff0000000000000) {
    uVar13 = (param_4->field0_0x0)._s_0.Z;
    uVar14 = (param_4->field0_0x0)._s_0.X;
    uVar1 = (param_4->field0_0x0)._s_0.Y;
  }
  else {
    uVar13 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    uVar14 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar13 = dVar7 * dVar11;
      uVar14 = dVar12 * dVar11;
      uVar1 = dVar6 * dVar11;
    }
  }
  dVar12 = (double)uVar1 * (param_2->Direction).field0_0x0._s_0.Y +
           (double)uVar14 * (param_2->Direction).field0_0x0._s_0.X +
           (double)uVar13 * (param_2->Direction).field0_0x0._s_0.Z;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar7 = (param_3->field0_0x0)._s_0.Y * (double)uVar1 +
            (param_3->field0_0x0)._s_0.X * (double)uVar14 +
            (param_3->field0_0x0)._s_0.Z * (double)uVar13;
    fVar5 = (float)(((dVar7 * (double)uVar14 - (param_2->Origin).field0_0x0._s_0.X) * (double)uVar14
                     + (dVar7 * (double)uVar1 - (param_2->Origin).field0_0x0._s_0.Y) * (double)uVar1
                    + (dVar7 * (double)uVar13 - (param_2->Origin).field0_0x0._s_0.Z) *
                      (double)uVar13) / dVar12);
    *param_7 = fVar5;
    dVar10 = (double)fVar5;
    dVar12 = (param_2->Direction).field0_0x0._s_0.Y;
    dVar7 = (param_2->Direction).field0_0x0._s_0.Z;
    dVar6 = (param_2->Origin).field0_0x0._s_0.Y;
    dVar11 = (param_2->Origin).field0_0x0._s_0.Z;
    (param_5->field0_0x0)._s_0.X =
         dVar10 * (param_2->Direction).field0_0x0._s_0.X + (param_2->Origin).field0_0x0._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar10 * dVar12 + dVar6;
    (param_5->field0_0x0)._s_0.Z = dVar10 * dVar7 + dVar11;
    dVar7 = __real_3f1a36e2e0000000;
    *param_6 = 0.0;
    dVar12 = (param_2->Origin).field0_0x0._s_0.X - (param_5->field0_0x0)._s_0.X;
    if (((dVar7 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar3,SUB84(dVar12,0) & uVar2
                                  )) ||
        (dVar6 = (param_2->Origin).field0_0x0._s_0.Y - (param_5->field0_0x0)._s_0.Y,
        dVar7 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar3,SUB84(dVar6,0) & uVar2)))
       || (dVar6 = (param_2->Origin).field0_0x0._s_0.Z - (param_5->field0_0x0)._s_0.Z,
          dVar7 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar3,SUB84(dVar6,0) & uVar2))
       ) {
      dVar7 = (param_2->Origin).field0_0x0._s_0.Y - (param_5->field0_0x0)._s_0.Y;
      dVar6 = (param_2->Origin).field0_0x0._s_0.Z - (param_5->field0_0x0)._s_0.Z;
      auVar8._0_8_ = dVar7 * dVar7;
      auVar8._8_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar12 * dVar12 + auVar8._0_8_ + dVar6 * dVar6;
      auVar9 = sqrtpd(auVar8,auVar9);
      *param_6 = (float)auVar9._0_8_;
    }
    return;
  }
  (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y = (double)uVar4;
  (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_7 = 0.0;
  *param_6 = 0.0;
  return;
}

