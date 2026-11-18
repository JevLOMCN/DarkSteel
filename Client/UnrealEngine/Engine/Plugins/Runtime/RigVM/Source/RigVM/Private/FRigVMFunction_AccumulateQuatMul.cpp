// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13bd80

UScriptStruct * __cdecl FRigVMFunction_AccumulateQuatMul::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatMul.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatMul.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateQuatMul");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatMul.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateQuatMul.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13be80

UScriptStruct * __thiscall
FRigVMFunction_AccumulateQuatMul::GetExecuteContextStruct(FRigVMFunction_AccumulateQuatMul *this)

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

// Initialize @ 14a13c440

void __thiscall FRigVMFunction_AccumulateQuatMul::Initialize(FRigVMFunction_AccumulateQuatMul *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a13c450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_AccumulateQuatMul::Execute(FRigVMFunction_AccumulateQuatMul *this)

{
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  StaticExecute(&local_118,&this->Multiplier,&this->InitialValue,this->bFlipOrder,
                this->bIntegrateDeltaTime,&this->Result,&this->AccumulatedValue,
                &this->bIsInitialized);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19dac0

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
FRigVMFunction_AccumulateQuatMul::Execute
          (FRigVMFunction_AccumulateQuatMul *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Multiplier,&this->InitialValue,this->bFlipOrder,
                this->bIntegrateDeltaTime,&this->Result,&this->AccumulatedValue,
                &this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b4f00

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
FRigVMFunction_AccumulateQuatMul::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  TQuat<double> *pTVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  TQuat<double> *pTVar9;
  FRigVMSlice *pFVar10;
  TQuat<double> *pTVar11;
  bool *pbVar12;
  FRigVMExecuteContext *pFVar13;
  
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
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  bVar4 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar1 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar11 = (TQuat<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar12 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar13,pTVar5,pTVar6,bVar4,bVar1,pTVar9,pTVar11,pbVar12);
  return;
}

// StaticExecute @ 14a1d8f90

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
FRigVMFunction_AccumulateQuatMul::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,bool param_4,
          bool param_5,TQuat<double> *param_6,TQuat<double> *param_7,bool *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  ulonglong uVar12;
  TQuat<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  TQuat<double> local_78 [3];
  
  if (*param_8 == false) {
    dVar3 = param_3->Y;
    param_7->X = param_3->X;
    param_7->Y = dVar3;
    dVar3 = param_3->W;
    param_7->Z = param_3->Z;
    param_7->W = dVar3;
    dVar3 = param_7->Y;
    param_6->X = param_7->X;
    param_6->Y = dVar3;
    dVar3 = param_7->W;
    param_6->Z = param_7->Z;
    param_6->W = dVar3;
    *param_8 = true;
  }
  local_98._0_8_ = param_2->X;
  local_98._8_8_ = param_2->Y;
  local_88._0_8_ = param_2->Z;
  local_88._8_8_ = param_2->W;
  if (param_5) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = param_1->DeltaTime;
    pTVar13 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_78,&UE::Math::TQuat<double>::Identity,(TQuat<double> *)local_98,
                         param_1->DeltaTime);
    dVar22 = pTVar13->X;
    dVar23 = pTVar13->Y;
    dVar33 = pTVar13->Z;
    dVar35 = pTVar13->W;
    dVar16 = dVar33 * dVar33 + dVar22 * dVar22;
    dVar20 = dVar35 * dVar35 + dVar23 * dVar23;
    dVar3 = dVar20 + dVar16;
    dVar16 = dVar16 + dVar20;
    auVar25._8_4_ = SUB84(dVar16,0);
    auVar25._0_8_ = dVar3;
    auVar25._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar25 = sqrtpd(auVar24,auVar25);
    uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
    uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
    uVar28 = (uint)(uVar14 >> 0x20);
    uVar29 = (uint)(uVar15 >> 0x20);
    auVar32._0_8_ = uVar14 & (ulonglong)(auVar31._0_8_ * dVar22);
    uVar12 = uVar15 & (ulonglong)(auVar31._8_8_ * dVar23);
    auVar32._8_4_ = (undefined4)uVar12;
    auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar31._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar31._4_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar31._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar31._12_4_ =
         ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_98 = auVar32 | auVar31;
    auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
    auVar34._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar34._4_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar34._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar34._12_4_ =
         ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar18._0_8_ = (ulonglong)(auVar25._0_8_ * dVar33) & uVar14;
    uVar15 = (ulonglong)(auVar25._8_8_ * dVar35) & uVar15;
    auVar18._8_4_ = (undefined4)uVar15;
    auVar18._12_4_ = (undefined4)(uVar15 >> 0x20);
    local_88 = auVar34 | auVar18;
  }
  uVar1 = param_7->X;
  uVar2 = param_7->Y;
  dVar3 = param_7->Z;
  dVar16 = param_7->W;
  dVar22 = local_98._0_8_;
  dVar23 = local_98._8_8_;
  dVar33 = local_88._0_8_;
  dVar35 = local_88._8_8_;
  if (param_4) {
    dVar7 = dVar22 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            (double)uVar1 * dVar35;
    dVar8 = dVar22 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            (double)uVar2 * dVar35;
    dVar20 = (double)uVar2 * dVar33;
    dVar4 = (double)uVar1 * dVar33;
    dVar17 = dVar3 * dVar23;
    dVar21 = dVar16 * dVar23;
    dVar11 = (double)uVar2 * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar3 * dVar35 +
             (double)uVar1 * dVar23 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar33 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar3 = (double)uVar1 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
            + dVar16 * dVar35 +
            (double)uVar2 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
            + dVar33 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  }
  else {
    auVar19._8_4_ = (int)uVar2;
    auVar19._0_8_ = uVar2;
    auVar19._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    dVar7 = (double)uVar1 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
            + dVar16 * dVar22;
    dVar8 = (double)uVar1 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
            + dVar16 * dVar23;
    dVar17 = (double)uVar2 * dVar33;
    dVar21 = auVar19._8_8_ * dVar35;
    dVar20 = dVar3 * dVar23;
    dVar4 = dVar3 * dVar22;
    dVar11 = (double)uVar1 * dVar23 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar33 * dVar16 +
             (double)uVar2 * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar3 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar3 = (double)uVar1 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
            + dVar35 * dVar16 +
            (double)uVar2 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
            + dVar3 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  }
  uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar16 = dVar7 + dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar22 = dVar8 + dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar26 = SUB84(dVar22,0);
  uVar27 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar5._8_4_ = uVar26;
  auVar5._0_8_ = dVar16;
  auVar5._12_4_ = uVar27;
  param_7->X = dVar16;
  param_7->Y = (double)auVar5._8_8_;
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = dVar11;
  auVar9._12_4_ = uVar30;
  param_7->Z = dVar11;
  param_7->W = (double)auVar9._8_8_;
  auVar6._8_4_ = uVar26;
  auVar6._0_8_ = dVar16;
  auVar6._12_4_ = uVar27;
  param_6->X = dVar16;
  param_6->Y = (double)auVar6._8_8_;
  auVar10._8_4_ = SUB84(dVar3,0);
  auVar10._0_8_ = dVar11;
  auVar10._12_4_ = uVar30;
  param_6->Z = dVar11;
  param_6->W = (double)auVar10._8_8_;
  return;
}

