// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a140b10

UScriptStruct * __cdecl FRigVMFunction_AccumulateQuatLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateQuatLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatLerp.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a140ba0

UScriptStruct * __thiscall
FRigVMFunction_AccumulateQuatLerp::GetExecuteContextStruct(FRigVMFunction_AccumulateQuatLerp *this)

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

// Initialize @ 14a140e20

void __thiscall
FRigVMFunction_AccumulateQuatLerp::Initialize(FRigVMFunction_AccumulateQuatLerp *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a140e30

void __thiscall FRigVMFunction_AccumulateQuatLerp::Execute(FRigVMFunction_AccumulateQuatLerp *this)

{
  TQuat<double> *pTVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  TQuat<double> local_158 [10];
  
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
  pTVar1 = &this->AccumulatedValue;
  bVar3 = this->bIntegrateDeltaTime;
  fVar2 = this->Blend;
  if (this->bIsInitialized == false) {
    dVar16 = (this->InitialValue).Y;
    pTVar1->X = (this->InitialValue).X;
    (this->AccumulatedValue).Y = dVar16;
    dVar16 = (this->InitialValue).W;
    (this->AccumulatedValue).Z = (this->InitialValue).Z;
    (this->AccumulatedValue).W = dVar16;
    dVar16 = (this->AccumulatedValue).Y;
    (this->Result).X = pTVar1->X;
    (this->Result).Y = dVar16;
    dVar16 = (this->AccumulatedValue).W;
    (this->Result).Z = (this->AccumulatedValue).Z;
    (this->Result).W = dVar16;
    this->bIsInitialized = true;
  }
  dVar16 = (double)fVar2;
  if (bVar3 != false) {
    dVar16 = dVar16 * 0.0;
  }
  if (__real_3ff0000000000000 <= dVar16) {
    dVar16 = __real_3ff0000000000000;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  pTVar10 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_158,pTVar1,&this->TargetValue,dVar16)
  ;
  dVar6 = pTVar10->X;
  dVar7 = pTVar10->Y;
  dVar8 = pTVar10->Z;
  dVar9 = pTVar10->W;
  dVar13 = dVar8 * dVar8 + dVar6 * dVar6;
  dVar15 = dVar9 * dVar9 + dVar7 * dVar7;
  dVar16 = dVar15 + dVar13;
  dVar13 = dVar13 + dVar15;
  auVar18._8_4_ = SUB84(dVar13,0);
  auVar18._0_8_ = dVar16;
  auVar18._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar18 = sqrtpd(in_XMM4,auVar18);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
  uVar21 = (uint)(uVar11 >> 0x20);
  uVar22 = (uint)(uVar12 >> 0x20);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar20._0_8_ = uVar11 & (ulonglong)(auVar19._0_8_ * dVar6);
  uVar5 = uVar12 & (ulonglong)(auVar19._8_8_ * dVar7);
  auVar20._8_4_ = (undefined4)uVar5;
  auVar20._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar19._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar19._4_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar19._12_4_ =
       ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar20 = auVar20 | auVar19;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  pTVar1->X = (double)auVar20._0_8_;
  pTVar1->Y = (double)auVar20._8_8_;
  auVar14._0_8_ = (ulonglong)(auVar18._0_8_ * dVar8) & uVar11;
  uVar5 = (ulonglong)(auVar18._8_8_ * dVar9) & uVar12;
  auVar14._8_4_ = (undefined4)uVar5;
  auVar14._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar11 & SUB84((double)fVar2,0);
  auVar17._4_4_ = ~uVar21 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar17._8_4_ = ~(uint)uVar12 & SUB84((double)fVar4,0);
  auVar17._12_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar4 >> 0x20);
  auVar17 = auVar17 | auVar14;
  (this->AccumulatedValue).Z = (double)auVar17._0_8_;
  (this->AccumulatedValue).W = (double)auVar17._8_8_;
  (this->Result).X = (double)auVar20._0_8_;
  (this->Result).Y = (double)auVar20._8_8_;
  (this->Result).Z = (double)auVar17._0_8_;
  (this->Result).W = (double)auVar17._8_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19da70

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
FRigVMFunction_AccumulateQuatLerp::Execute
          (FRigVMFunction_AccumulateQuatLerp *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->TargetValue,&this->InitialValue,this->Blend,this->bIntegrateDeltaTime
                ,&this->Result,&this->AccumulatedValue,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b4cc0

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
FRigVMFunction_AccumulateQuatLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  TQuat<double> *pTVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  TQuat<double> *pTVar10;
  FRigVMSlice *pFVar11;
  TQuat<double> *pTVar12;
  bool *pbVar13;
  FRigVMExecuteContext *pFVar14;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TQuat<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TQuat<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar12 = (TQuat<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar13 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar5,pTVar6,fVar1,bVar4,pTVar10,pTVar12,pbVar13);
  return;
}

// StaticExecute @ 14a1d8e60

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
FRigVMFunction_AccumulateQuatLerp::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,float param_4
          ,bool param_5,TQuat<double> *param_6,TQuat<double> *param_7,bool *param_8)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  TQuat<double> local_48 [2];
  
  if (*param_8 == false) {
    dVar14 = param_3->Y;
    param_7->X = param_3->X;
    param_7->Y = dVar14;
    dVar14 = param_3->W;
    param_7->Z = param_3->Z;
    param_7->W = dVar14;
    dVar14 = param_7->Y;
    param_6->X = param_7->X;
    param_6->Y = dVar14;
    dVar14 = param_7->W;
    param_6->Z = param_7->Z;
    param_6->W = dVar14;
    *param_8 = true;
  }
  dVar14 = (double)param_4;
  if (param_5) {
    dVar14 = dVar14 * param_1->DeltaTime;
  }
  if (__real_3ff0000000000000 <= dVar14) {
    dVar14 = __real_3ff0000000000000;
  }
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_48,param_7,param_2,dVar14);
  dVar4 = pTVar8->X;
  dVar5 = pTVar8->Y;
  dVar6 = pTVar8->Z;
  dVar7 = pTVar8->W;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar13 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar14 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar16._8_4_ = SUB84(dVar11,0);
  auVar16._0_8_ = dVar14;
  auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar16 = sqrtpd(in_XMM4,auVar16);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar14);
  uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar11);
  uVar19 = (uint)(uVar9 >> 0x20);
  uVar20 = (uint)(uVar10 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar18._0_8_ = uVar9 & (ulonglong)(auVar17._0_8_ * dVar4);
  uVar3 = uVar10 & (ulonglong)(auVar17._8_8_ * dVar5);
  auVar18._8_4_ = (undefined4)uVar3;
  auVar18._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar18 = auVar18 | auVar17;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  param_7->X = (double)auVar18._0_8_;
  param_7->Y = (double)auVar18._8_8_;
  auVar12._0_8_ = (ulonglong)(auVar16._0_8_ * dVar6) & uVar9;
  uVar3 = (ulonglong)(auVar16._8_8_ * dVar7) & uVar10;
  auVar12._8_4_ = (undefined4)uVar3;
  auVar12._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar9 & SUB84((double)fVar1,0);
  auVar15._4_4_ = ~uVar19 & (uint)((ulonglong)(double)fVar1 >> 0x20);
  auVar15._8_4_ = ~(uint)uVar10 & SUB84((double)fVar2,0);
  auVar15._12_4_ = ~uVar20 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar15 = auVar15 | auVar12;
  param_7->Z = (double)auVar15._0_8_;
  param_7->W = (double)auVar15._8_8_;
  param_6->X = (double)auVar18._0_8_;
  param_6->Y = (double)auVar18._8_8_;
  param_6->Z = (double)auVar15._0_8_;
  param_6->W = (double)auVar15._8_8_;
  return;
}

