// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a47fd20

UScriptStruct * __cdecl FRigUnit_ChainHarmonicsPerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem,(UObject *)pUVar1,
                         L"RigUnit_ChainHarmonicsPerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton;
}

// FRigUnit_ChainHarmonicsPerItem @ 14a50cde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ChainHarmonicsPerItem * __thiscall
FRigUnit_ChainHarmonicsPerItem::FRigUnit_ChainHarmonicsPerItem(FRigUnit_ChainHarmonicsPerItem *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined8 uVar9;
  FRuntimeFloatCurve *pFVar10;
  FRichCurve *pFVar11;
  undefined1 in_R9B;
  float fVar12;
  undefined1 auStackY_f8 [32];
  uint in_stack_ffffffffffffff28;
  FKeyHandle FVar13;
  FKeyHandle local_c8;
  FKeyHandle local_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  void *local_50;
  ForAnyElementType local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  (this->ChainRoot).Type = None;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_ChainHarmonicsPerItem__6B_;
  (this->ChainRoot).Name.ComparisonIndex = 0;
  (this->ChainRoot).Name.Number = 0;
  (this->Reach).bEnabled = true;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Reach).ReachTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Reach).ReachTarget.field0_0x0._s_0.Y = (double)uVar9;
  (this->Reach).ReachTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Reach).ReachAxis.field0_0x0._s_0.X = 1.0;
  (this->Reach).ReachAxis.field0_0x0._s_0.Y = 0.0;
  (this->Reach).ReachAxis.field0_0x0._s_0.Z = 0.0;
  (this->Reach).ReachMinimum = 0.0;
  (this->Reach).ReachMaximum = 0.0;
  (this->Reach).ReachEase = Linear;
  (this->Wave).bEnabled = true;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.X = 0.0;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.Y = 1.0;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.Z = 0.0;
  (this->Wave).WaveFrequency.field0_0x0._s_0.X = 1.0;
  (this->Wave).WaveFrequency.field0_0x0._s_0.Y = 0.6000000238418579;
  (this->Wave).WaveFrequency.field0_0x0._s_0.Z = 0.800000011920929;
  (this->Wave).WaveOffset.field0_0x0._s_0.X = 0.0;
  (this->Wave).WaveOffset.field0_0x0._s_0.Y = 1.0;
  (this->Wave).WaveOffset.field0_0x0._s_0.Z = 2.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Wave).WaveNoise.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->Wave).WaveNoise.field0_0x0._s_0.Y = (double)uVar9;
  (this->Wave).WaveNoise.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  (this->Wave).WaveMinimum = 0.0;
  (this->Wave).WaveMaximum = 1.0;
  (this->Wave).WaveEase = Linear;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->WaveCurve);
  (this->Pendulum).bEnabled = true;
  (this->Pendulum).PendulumStiffness = 2.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.Y = (double)uVar9;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Pendulum).PendulumBlend = 0.75;
  (this->Pendulum).PendulumDrag = 0.98;
  (this->Pendulum).PendulumMinimum = 0.0;
  (this->Pendulum).PendulumMaximum = 0.1;
  (this->Pendulum).PendulumEase = Linear;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.X = 0.0;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.Y = 1.0;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.Z = 0.0;
  (this->Pendulum).UnwindMinimum = 0.2;
  (this->Pendulum).UnwindMaximum = 0.05;
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar2._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar2._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar2._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Rotation.XY.m128d_f64 = auVar2;
  auVar3._8_4_ = SUB84((double)fVar1,0);
  auVar3._0_8_ = (double)fVar12;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Rotation.ZW.m128d_f64 = auVar3;
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Translation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar1,0);
  auVar5._0_8_ = (double)fVar12;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Translation.ZW.m128d_f64 = auVar5;
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Scale3D.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar1,0);
  auVar7._0_8_ = (double)fVar12;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Scale3D.ZW.m128d_f64 = auVar7;
  (this->WorkData).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Items.ArrayNum = 0;
  (this->WorkData).Items.ArrayMax = 0;
  (this->WorkData).Ratio.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Ratio.ArrayNum = 0;
  (this->WorkData).Ratio.ArrayMax = 0;
  (this->WorkData).LocalTip.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).LocalTip.ArrayNum = 0;
  (this->WorkData).LocalTip.ArrayMax = 0;
  (this->WorkData).PendulumTip.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumTip.ArrayNum = 0;
  (this->WorkData).PendulumTip.ArrayMax = 0;
  (this->WorkData).PendulumPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumPosition.ArrayNum = 0;
  (this->WorkData).PendulumPosition.ArrayMax = 0;
  (this->WorkData).PendulumVelocity.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumVelocity.ArrayNum = 0;
  (this->WorkData).PendulumVelocity.ArrayMax = 0;
  (this->WorkData).HierarchyLine.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).HierarchyLine.ArrayNum = 0;
  (this->WorkData).HierarchyLine.ArrayMax = 0;
  (this->WorkData).VelocityLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).VelocityLines.ArrayNum = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorkData).VelocityLines.ArrayMax = 0;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  uStack_bc = 0;
  (this->WorkData).Time.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorkData).Time.field0_0x0._s_0.Y = (double)uVar9;
  (this->WorkData).Time.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = (ulonglong)local_c0;
  (this->ChainRoot).Type = (char)uVar8;
  *(int3 *)&(this->ChainRoot).field_0x1 = (int3)(uVar8 >> 8);
  (this->ChainRoot).Name.ComparisonIndex = (FNameEntryId)(int)(uVar8 >> 0x20);
  (this->ChainRoot).Name.Number = 0;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Speed).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Speed).field0_0x0._s_0.Y = (double)uVar9;
  (this->Speed).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Reach).bEnabled = false;
  (this->Wave).bEnabled = true;
  (this->Pendulum).bEnabled = false;
  pFVar10 = FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_a8);
  FRuntimeFloatCurve::operator=(&this->WaveCurve,pFVar10);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_a8._0_8_ = &___7FIndexedCurve__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  pFVar11 = FRuntimeFloatCurve::GetRichCurve(&this->WaveCurve);
  FKeyHandle::FKeyHandle(&local_c8);
  FVar13.Index = in_stack_ffffffffffffff28 & 0xffffff00;
  FRichCurve::AddKey(pFVar11,fVar12,0.0,(bool)in_R9B,FVar13);
  pFVar11 = FRuntimeFloatCurve::GetRichCurve(&this->WaveCurve);
  FKeyHandle::FKeyHandle(&local_c4);
  FRichCurve::AddKey(pFVar11,fVar12,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar13.Index & 0xffffff00));
  this->bDrawDebug = true;
  *&(this->DrawWorldOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DrawWorldOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DrawWorldOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DrawWorldOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DrawWorldOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DrawWorldOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~FRigUnit_ChainHarmonicsPerItem @ 14a518340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ChainHarmonicsPerItem::~FRigUnit_ChainHarmonicsPerItem
          (FRigUnit_ChainHarmonicsPerItem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  FRigUnit_ChainHarmonics_WorkData::~FRigUnit_ChainHarmonics_WorkData(&this->WorkData);
  pFVar1 = (this->WaveCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WaveCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->WaveCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->WaveCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->WaveCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WaveCurve).EditorCurveData._padding_);
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a524f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ChainHarmonicsPerItem::Execute
          (FRigUnit_ChainHarmonicsPerItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->ChainRoot,&this->Speed,&this->Reach,&this->Wave,&this->WaveCurve,
                &this->Pendulum,this->bDrawDebug,&this->DrawWorldOffset,&this->WorkData);
  return;
}

// Execute @ 14a525010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ChainHarmonicsPerItem::Execute(FRigUnit_ChainHarmonicsPerItem *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->ChainRoot,&this->Speed,&this->Reach,
                &this->Wave,&this->WaveCurve,&this->Pendulum,this->bDrawDebug,&this->DrawWorldOffset
                ,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5309a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ChainHarmonicsPerItem::GetExecuteContextStruct(FRigUnit_ChainHarmonicsPerItem *this)

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

// RigVMExecute @ 14a536bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ChainHarmonicsPerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigElementKey *pFVar4;
  TVector<double> *pTVar5;
  FRigUnit_ChainHarmonics_Reach *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_ChainHarmonics_Wave *pFVar8;
  FRuntimeFloatCurve *pFVar9;
  FRigUnit_ChainHarmonics_Pendulum *pFVar10;
  uchar *puVar11;
  TTransform<double> *pTVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_ChainHarmonics_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
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
    pFVar4 = (FRigElementKey *)pFVar7->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
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
    pFVar6 = (FRigUnit_ChainHarmonics_Reach *)pFVar7[2].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_ChainHarmonics_Reach *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_ChainHarmonics_Wave *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = (FRuntimeFloatCurve *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FRigUnit_ChainHarmonics_Pendulum *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1)
  ;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_ChainHarmonics_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar13->Offset + pFVar13->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar4,pTVar5,pFVar6,pFVar8,pFVar9,pFVar10,bVar3,pTVar12,pFVar14);
  return;
}

// StaticExecute @ 14a563ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ChainHarmonicsPerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,TVector<double> *param_3,
          FRigUnit_ChainHarmonics_Reach *param_4,FRigUnit_ChainHarmonics_Wave *param_5,
          FRuntimeFloatCurve *param_6,FRigUnit_ChainHarmonics_Pendulum *param_7,bool param_8,
          TTransform<double> *param_9,FRigUnit_ChainHarmonics_WorkData *param_10)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *this;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  float fVar5;
  ushort uVar6;
  FCachedRigElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FRigVMDrawInterface *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  ulonglong uVar31;
  FRigBaseElement *pFVar32;
  undefined1 auVar33 [16];
  TTransform<double> *pTVar34;
  bool bVar35;
  int iVar36;
  FCachedRigElement *pFVar37;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar38;
  FRichCurve *pFVar39;
  TQuat<double> *pTVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  URigHierarchy *this_00;
  uint uVar44;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_01;
  FControlRigExecuteContext *pFVar45;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_02;
  TArray<float,TSizedDefaultAllocator<32>_> *this_03;
  longlong lVar46;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_04;
  ulonglong uVar47;
  ulonglong uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar64 [16];
  double extraout_XMM0_Qb_00;
  undefined1 auVar65 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar95;
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
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
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
  double dVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined4 uVar149;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined4 uVar150;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar151;
  undefined8 uVar152;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  uint uVar158;
  undefined1 auVar157 [16];
  double dVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  double dVar167;
  undefined8 uVar168;
  double dVar169;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  double dVar172;
  undefined8 uVar173;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  double dVar183;
  undefined1 auVar182 [16];
  double dVar184;
  double dVar185;
  double dVar186;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  double dVar189;
  undefined4 uVar194;
  double dVar195;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  double dVar190;
  double dVar196;
  undefined1 auVar193 [16];
  undefined4 uVar197;
  undefined4 uVar198;
  undefined4 uVar199;
  undefined1 auStackY_988 [32];
  longlong local_938;
  longlong local_928;
  TQuat<double> local_918;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_8f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_8f0;
  undefined1 local_8e8 [16];
  FRigUnit_ChainHarmonics_Wave *local_8d8;
  FRigUnit_ChainHarmonics_Pendulum *local_8d0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_8c8;
  FControlRigExecuteContext *local_8b8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_8b0;
  FRigUnit_ChainHarmonics_Reach *local_8a8;
  TVector<double>_u_0 local_8a0;
  URigHierarchy *local_888;
  FRigElementKey local_880;
  FCachedRigElement local_870;
  FRuntimeFloatCurve *local_850;
  TVector<double> *local_848;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_840;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_838;
  TTransform<double> *local_830;
  FRigElementKey local_828;
  FRigElementKey local_818;
  FRigElementKey local_808;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  TVector<double>_u_0 local_7e0;
  double local_7b8;
  TVector<double>_u_0 local_7a8;
  double local_790;
  double dStack_788;
  double local_780;
  FRigElementKey local_778;
  double local_768;
  double dStack_760;
  double local_758;
  TArrayView<UE::Math::TVector<double>_const_,int> local_750;
  TArrayView<UE::Math::TVector<double>_const_,int> local_740;
  TArrayView<UE::Math::TVector<double>_const_,int> local_730;
  undefined1 local_720 [16];
  double local_710;
  TVector<double>_u_0 local_708;
  TVector<double>_u_0 local_6f0;
  undefined8 local_6d8;
  double local_6d0;
  double local_6c8;
  undefined8 local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  undefined1 local_698 [16];
  double local_688;
  undefined1 local_680 [16];
  double local_670;
  TVector<double>_u_0 local_668;
  undefined1 local_650 [16];
  double local_640;
  undefined1 local_638 [16];
  double local_628;
  undefined1 local_620 [16];
  double local_610;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_608;
  FLinearColor_u_0 local_5f8;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  TQuat<double> local_588;
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  double local_548;
  double dStack_540;
  double local_538;
  undefined1 local_530 [16];
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  TTransform<double> local_4c8;
  FCachedRigElement local_428;
  TQuat<double> local_408;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_988;
  this_00 = param_1->Hierarchy;
  local_8d0 = param_7;
  local_8d8 = param_5;
  local_850 = param_6;
  local_830 = param_9;
  if (this_00 == (URigHierarchy *)0x0) {
    return;
  }
  local_840 = &param_10->HierarchyLine;
  pTVar1 = &param_10->PendulumTip;
  this_01 = &param_10->LocalTip;
  this_02 = &param_10->PendulumVelocity;
  this_03 = &param_10->Ratio;
  this = &param_10->Items;
  this_04 = &param_10->PendulumPosition;
  local_8e8._0_8_ = this_01;
  local_8f8 = pTVar1;
  local_8f0 = this_02;
  local_8b8 = param_1;
  local_8b0 = this_03;
  local_8a8 = param_4;
  local_888 = this_00;
  local_848 = param_3;
  local_838 = this_04;
  if ((param_10->Items).ArrayNum == 0) {
    bVar35 = FRigElementKey::IsValid(param_2);
    if (!bVar35) {
      return;
    }
    pFVar37 = FCachedRigElement::FCachedRigElement(&local_428,param_2,this_00,false);
    pFVar7 = (FCachedRigElement *)(this->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar37) && (pFVar37 < pFVar7 + (param_10->Items).ArrayMax)) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar35)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar36 = (param_10->Items).ArrayNum;
    piVar2 = &(param_10->Items).ArrayMax;
    if (iVar36 == *piVar2) {
      iVar36 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&this->AllocatorInstance,piVar2);
    }
    (param_10->Items).ArrayNum = iVar36 + 1;
    pFVar8 = (this->AllocatorInstance).Data;
    uVar173 = *(undefined8 *)&(pFVar37->Key).Name.Number;
    pFVar3 = pFVar8 + (longlong)iVar36 * 0x20;
    *(undefined8 *)pFVar3 = *(undefined8 *)&pFVar37->Key;
    *(undefined8 *)(pFVar3 + 8) = uVar173;
    pFVar32 = pFVar37->Element;
    pFVar8 = pFVar8 + (longlong)iVar36 * 0x20 + 0x10;
    *(undefined8 *)pFVar8 = *(undefined8 *)&pFVar37->ContainerVersion;
    *(FRigBaseElement **)(pFVar8 + 8) = pFVar32;
    iVar36 = (param_10->Items).ArrayNum;
    uVar42 = iVar36 - 1;
    uVar43 = 0;
    if ((int)uVar42 < iVar36) {
      uVar43 = ~uVar42 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar3 = (this->AllocatorInstance).Data;
    lVar41 = (longlong)(param_10->Items).ArrayNum * 0x20;
    local_778._0_8_ = *(undefined8 *)(pFVar3 + lVar41 + -0x20);
    local_778.Name.Number = *(uint *)(pFVar3 + lVar41 + -0x18);
    URigHierarchy::GetChildren(this_00,&local_8c8,&local_778,false);
    while (0 < local_8c8.ArrayNum) {
      if ((local_8c8.ArrayNum < 1) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_870.Key._0_4_ = local_870.Key._0_4_ & 0xffffff00;
      local_870.Key.Name.ComparisonIndex.Value = 0;
      local_870.Key.Name.Number = 0;
      local_870.Index = 0xffff;
      local_870.ContainerVersion = -1;
      local_870.Element = (FRigBaseElement *)0x0;
      FCachedRigElement::UpdateCache
                (&local_870,(FRigElementKey *)local_8c8.AllocatorInstance.Data,this_00);
      pFVar7 = (FCachedRigElement *)(this->AllocatorInstance).Data;
      if (((pFVar7 <= &local_870) && (&local_870 < pFVar7 + (param_10->Items).ArrayMax)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar36 = (param_10->Items).ArrayNum;
      if (iVar36 == (param_10->Items).ArrayMax) {
        iVar36 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&this->AllocatorInstance,&(param_10->Items).ArrayMax);
      }
      (param_10->Items).ArrayNum = iVar36 + 1;
      pFVar8 = (this->AllocatorInstance).Data;
      pFVar3 = pFVar8 + (longlong)iVar36 * 0x20;
      *(ulonglong *)pFVar3 = CONCAT44(local_870.Key.Name.ComparisonIndex.Value,local_870.Key._0_4_);
      *(ulonglong *)(pFVar3 + 8) =
           CONCAT26(local_870._14_2_,CONCAT24(local_870.Index,local_870.Key.Name.Number));
      pFVar8 = pFVar8 + (longlong)iVar36 * 0x20 + 0x10;
      *(ulonglong *)pFVar8 = CONCAT44(local_870._20_4_,local_870.ContainerVersion);
      *(FRigBaseElement **)(pFVar8 + 8) = local_870.Element;
      if ((local_8c8.ArrayNum < 1) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_828._0_8_ = *(undefined8 *)local_8c8.AllocatorInstance.Data;
      local_828.Name.Number = *(uint *)(local_8c8.AllocatorInstance.Data + 8);
      pTVar38 = URigHierarchy::GetChildren(this_00,&local_608,&local_828,false);
      if (&local_8c8 != pTVar38) {
        if ((FRigElementKey *)local_8c8.AllocatorInstance.Data != (FRigElementKey *)0x0) {
          FMemory::Free(local_8c8.AllocatorInstance.Data);
        }
        local_8c8.AllocatorInstance.Data = (pTVar38->AllocatorInstance).Data;
        (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_8c8.ArrayNum = pTVar38->ArrayNum;
        local_8c8.ArrayMax = pTVar38->ArrayMax;
        pTVar38->ArrayNum = 0;
        pTVar38->ArrayMax = 0;
      }
      pTVar1 = local_8f8;
      this_03 = local_8b0;
      if (local_608.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.AllocatorInstance.Data);
        pTVar1 = local_8f8;
        this_03 = local_8b0;
      }
    }
    iVar36 = (param_10->Items).ArrayNum;
    if (iVar36 < 2) {
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::Reset(this,0);
      if ((FRigElementKey *)local_8c8.AllocatorInstance.Data == (FRigElementKey *)0x0) {
        return;
      }
      FMemory::Free(local_8c8.AllocatorInstance.Data);
      return;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(this_03,iVar36,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_01,(param_10->Items).ArrayNum,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (pTVar1,(param_10->Items).ArrayNum,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_04,(param_10->Items).ArrayNum,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_02,(param_10->Items).ArrayNum,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&param_10->VelocityLines,(param_10->Items).ArrayNum * 2,Default);
    iVar36 = (param_10->Items).ArrayNum;
    uVar43 = 0;
    if (0 < iVar36) {
      lVar41 = 0;
      local_928 = 0;
      local_938 = 0;
      do {
        uVar44 = ~uVar43 >> 0x1f;
        uVar42 = 0;
        if ((int)uVar43 < this_03->ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(float *)((this_03->AllocatorInstance).Data + lVar41 * 4) =
             (float)(int)uVar43 / (float)(iVar36 + -1);
        uVar42 = 0;
        if ((int)uVar43 < (param_10->Items).ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar42 = 0xffffffff;
        uVar6 = *(ushort *)((this->AllocatorInstance).Data + local_938 + 0xc);
        if (uVar6 != 0xffff) {
          uVar42 = (uint)uVar6;
        }
        URigHierarchy::GetLocalTransformByIndex(this_00,&local_268,uVar42,false);
        dVar95 = local_268.Translation.ZW.m128d_f64[0];
        dVar184 = local_268.Translation.XY.m128d_f64[1];
        dVar172 = local_268.Translation.XY.m128d_f64[0];
        local_4e8 = local_268.Translation.XY.m128d_f64[0];
        dStack_4e0 = local_268.Translation.XY.m128d_f64[1];
        local_4d8 = local_268.Translation.ZW.m128d_f64[0];
        uVar42 = 0;
        if ((int)uVar43 < (param_10->LocalTip).ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (param_10->LocalTip).AllocatorInstance.Data;
        pFVar3 = pFVar8 + local_928;
        *(double *)pFVar3 = dVar172;
        *(double *)(pFVar3 + 8) = dVar184;
        *(double *)(pFVar8 + local_928 + 0x10) = dVar95;
        uVar42 = 0;
        if ((int)uVar43 < (param_10->Items).ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar42 = 0xffffffff;
        uVar6 = *(ushort *)((this->AllocatorInstance).Data + local_938 + 0xc);
        if (uVar6 != 0xffff) {
          uVar42 = (uint)uVar6;
        }
        URigHierarchy::GetGlobalTransformByIndex(this_00,&local_208,uVar42,false);
        dVar95 = local_208.Translation.ZW.m128d_f64[0];
        dVar184 = local_208.Translation.XY.m128d_f64[1];
        dVar172 = local_208.Translation.XY.m128d_f64[0];
        local_4f0 = local_208.Translation.ZW.m128d_f64[0];
        local_500 = local_208.Translation.XY.m128d_f64[0];
        dStack_4f8 = local_208.Translation.XY.m128d_f64[1];
        uVar42 = 0;
        if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar43 = uVar43 + 1;
        pFVar8 = (this_04->AllocatorInstance).Data;
        lVar41 = lVar41 + 1;
        local_938 = local_938 + 0x20;
        pFVar3 = pFVar8 + local_928;
        *(double *)pFVar3 = dVar172;
        *(double *)(pFVar3 + 8) = dVar184;
        *(double *)(pFVar8 + local_928 + 0x10) = dVar95;
        local_928 = local_928 + 0x18;
        iVar36 = (param_10->Items).ArrayNum;
      } while ((int)uVar43 < iVar36);
      this_01 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_8e8._0_8_;
      this_02 = local_8f0;
    }
    if (0 < iVar36 + -1) {
      lVar41 = 0;
      uVar43 = 0;
      do {
        uVar44 = uVar43 + 1;
        uVar42 = 0;
        if ((int)uVar44 < this_01->ArrayNum) {
          uVar42 = ~uVar44 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (this_01->AllocatorInstance).Data;
        local_8e8._0_8_ = lVar41 + 0x18;
        pFVar3 = pFVar8 + lVar41 + 0x18;
        uVar168 = *(undefined8 *)pFVar3;
        uVar152 = *(undefined8 *)(pFVar3 + 8);
        uVar173 = *(undefined8 *)(pFVar8 + lVar41 + 0x28);
        uVar42 = 0;
        if ((int)uVar43 < (param_10->PendulumTip).ArrayNum) {
          uVar42 = ~uVar43 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (param_10->PendulumTip).AllocatorInstance.Data;
        pFVar3 = pFVar8 + lVar41;
        *(undefined8 *)pFVar3 = uVar168;
        *(undefined8 *)(pFVar3 + 8) = uVar152;
        *(undefined8 *)(pFVar8 + lVar41 + 0x10) = uVar173;
        this_00 = local_888;
        this_02 = local_8f0;
        lVar41 = local_8e8._0_8_;
        uVar43 = uVar44;
      } while ((int)uVar44 < (param_10->Items).ArrayNum + -1);
    }
    pTVar1 = local_8f8;
    uVar42 = local_8f8->ArrayNum - 2;
    uVar43 = 0;
    if ((int)uVar42 < local_8f8->ArrayNum) {
      uVar43 = ~uVar42 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar44 = pTVar1->ArrayNum - 1;
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar8 + (longlong)(int)uVar42 * 0x18;
    uVar168 = *(undefined8 *)pFVar3;
    uVar152 = *(undefined8 *)(pFVar3 + 8);
    uVar173 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar42 * 0x18 + 0x10);
    uVar43 = 0;
    if ((int)uVar44 < pTVar1->ArrayNum) {
      uVar43 = ~uVar44 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    uVar43 = 0;
    pFVar3 = pFVar8 + (longlong)(int)uVar44 * 0x18;
    *(undefined8 *)pFVar3 = uVar168;
    *(undefined8 *)(pFVar3 + 8) = uVar152;
    *(undefined8 *)(pFVar8 + (longlong)(int)uVar44 * 0x18 + 0x10) = uVar173;
    iVar36 = (param_10->Items).ArrayNum;
    if (0 < iVar36) {
      lVar41 = 0;
      local_928 = 0;
      do {
        uVar44 = ~uVar43 >> 0x1f;
        uVar42 = 0;
        if ((int)uVar43 < iVar36) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar42 = 0xffffffff;
        uVar6 = *(ushort *)((this->AllocatorInstance).Data + lVar41 + 0xc);
        if (uVar6 != 0xffff) {
          uVar42 = (uint)uVar6;
        }
        URigHierarchy::GetGlobalTransformByIndex(this_00,&local_328,uVar42,false);
        uVar42 = 0;
        if ((int)uVar43 < (param_10->PendulumTip).ArrayNum) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        dVar159 = local_328.Rotation.ZW.m128d_f64[0];
        pFVar8 = (param_10->PendulumTip).AllocatorInstance.Data;
        dVar167 = local_328.Rotation.ZW.m128d_f64[1];
        dVar151 = local_328.Rotation.XY.m128d_f64[1];
        auVar160 = blendpd((undefined1  [16])local_328.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_328.Rotation.ZW.m128d_f64,2);
        pFVar3 = pFVar8 + local_928;
        dVar172 = *(double *)(pFVar8 + local_928 + 0x10) * local_328.Scale3D.ZW.m128d_f64[0];
        dVar184 = local_328.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar189 = local_328.Scale3D.XY.m128d_f64[0] * *(double *)pFVar3;
        dVar195 = local_328.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar3 + 8);
        auVar101._8_4_ = local_328.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar101._0_8_ = dVar151;
        auVar101._12_4_ = local_328.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar174._8_4_ = SUB84(dVar195,0);
        auVar174._0_8_ = dVar189;
        uVar149 = (undefined4)((ulonglong)dVar195 >> 0x20);
        auVar174._12_4_ = uVar149;
        auVar96._8_4_ = SUB84(dVar195,0);
        auVar96._0_8_ = dVar189;
        auVar96._12_4_ = uVar149;
        auVar97._8_4_ = SUB84(dVar184,0);
        auVar97._0_8_ = dVar172;
        auVar97._12_4_ = (int)((ulonglong)dVar184 >> 0x20);
        auVar97 = blendpd(auVar96,auVar97,2);
        auVar175._0_8_ = auVar174._8_8_ * local_328.Rotation.XY.m128d_f64[0] - dVar151 * dVar189;
        auVar175._8_8_ = dVar172 * dVar151 - auVar101._8_8_ * dVar195;
        auVar98._0_8_ = auVar97._0_8_ * dVar159 - auVar160._0_8_ * dVar172;
        auVar98._8_8_ = auVar97._8_8_ * dVar167 - auVar160._8_8_ * dVar184;
        auVar97 = blendpd(auVar175,auVar98,2);
        dVar184 = auVar175._8_8_ + auVar175._8_8_;
        dVar95 = auVar98._0_8_ + auVar98._0_8_;
        uVar149 = SUB84(dVar95,0);
        uVar150 = (undefined4)((ulonglong)dVar95 >> 0x20);
        auVar176._0_8_ = auVar97._0_8_ + auVar97._0_8_;
        auVar176._8_8_ = auVar97._8_8_ + auVar97._8_8_;
        auVar131._8_4_ = uVar149;
        auVar131._0_8_ = dVar184;
        auVar131._12_4_ = uVar150;
        auVar161._8_4_ = uVar149;
        auVar161._0_8_ = dVar184;
        auVar161._12_4_ = uVar150;
        auVar99._8_4_ = uVar149;
        auVar99._0_8_ = dVar184;
        auVar99._12_4_ = uVar150;
        auVar97 = blendpd(auVar99,auVar176,2);
        auVar132._0_8_ = auVar131._8_8_ * local_328.Rotation.XY.m128d_f64[0] - dVar184 * dVar151;
        auVar132._8_8_ = auVar176._0_8_ * dVar151 - auVar161._8_8_ * dVar159;
        auVar53._8_4_ = SUB84(auVar176._8_8_,0);
        auVar53._0_8_ = auVar176._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar176._8_8_ >> 0x20);
        auVar100._0_8_ = auVar97._0_8_ * dVar159 - auVar176._0_8_ * auVar160._0_8_;
        auVar100._8_8_ = auVar97._8_8_ * dVar167 - auVar53._8_8_ * auVar160._8_8_;
        auVar160._8_4_ = SUB84(auVar132._8_8_,0);
        auVar160._0_8_ = auVar132._0_8_;
        auVar160._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
        auVar97 = blendpd(auVar132,auVar100,2);
        dVar184 = dVar184 * dVar167 + dVar189 + auVar160._8_8_ +
                  local_328.Translation.XY.m128d_f64[0];
        dVar95 = dVar95 * dVar167 + dVar195 + auVar100._0_8_ + local_328.Translation.XY.m128d_f64[1]
        ;
        uVar149 = SUB84(dVar95,0);
        uVar150 = (undefined4)((ulonglong)dVar95 >> 0x20);
        dVar172 = auVar176._0_8_ * dVar167 + dVar172 + auVar97._0_8_ +
                  local_328.Translation.ZW.m128d_f64[0];
        local_530._8_4_ = uVar149;
        local_530._0_8_ = dVar184;
        local_530._12_4_ = uVar150;
        uVar42 = 0;
        if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
          uVar42 = uVar44;
        }
        local_520 = dVar172;
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar3 = (this_04->AllocatorInstance).Data;
        uVar43 = uVar43 + 1;
        lVar41 = lVar41 + 0x20;
        auVar12._8_4_ = uVar149;
        auVar12._0_8_ = dVar184;
        auVar12._12_4_ = uVar150;
        *(undefined1 (*) [16])(pFVar3 + local_928) = auVar12;
        *(double *)(pFVar3 + local_928 + 0x10) = dVar172;
        local_928 = local_928 + 0x18;
        iVar36 = (param_10->Items).ArrayNum;
        this_02 = local_8f0;
        this_03 = local_8b0;
      } while ((int)uVar43 < iVar36);
    }
    if ((FRigElementKey *)local_8c8.AllocatorInstance.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_8c8.AllocatorInstance.Data);
    }
  }
  if (1 < (param_10->Items).ArrayNum) {
    local_388.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_388.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_388.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_388.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_388.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_388.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pFVar3 = (this->AllocatorInstance).Data;
    local_818._0_8_ = *(undefined8 *)pFVar3;
    local_818.Name.Number = *(uint *)(pFVar3 + 8);
    URigHierarchy::GetFirstParent(this_00,&local_880,&local_818);
    bVar35 = ::FName::IsWithinBounds(local_880.Name.ComparisonIndex);
    if (((bVar35) && (CONCAT44(local_880.Name.Number,local_880.Name.ComparisonIndex.Value) != 0)) &&
       (local_880.Type != None)) {
      local_808.Name.Number = local_880.Name.Number;
      iVar36 = URigHierarchy::GetIndex(this_00,&local_808,true);
      URigHierarchy::GetGlobalTransformByIndex(this_00,&local_2c8,iVar36,false);
      local_388.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
      local_388.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
      local_388.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
      local_388.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
      local_388.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
      local_388.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
      local_388.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
      local_388.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
      local_388.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
      local_388.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
      local_388.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
      local_388.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
    }
    iVar36 = (param_10->Items).ArrayNum;
    uVar43 = 0;
    if (0 < iVar36) {
      lVar41 = 0;
      uVar149 = (undefined4)__real_4022666660000000;
      uVar150 = (undefined4)((ulonglong)__real_4022666660000000 >> 0x20);
      uVar194 = SUB84(__real_3e45798ee0000000,0);
      uVar197 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      uVar198 = SUB84(__real_3ff0000000000000,0);
      uVar199 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_8f0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      local_8f8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      do {
        dVar172 = __real_40608cccc0000000;
        fVar49 = __real_3f800000;
        uVar44 = ~uVar43 >> 0x1f;
        uVar42 = 0;
        if ((int)uVar43 < iVar36) {
          uVar42 = uVar44;
        }
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar42 = 0xffffffff;
        uVar6 = *(ushort *)((this->AllocatorInstance).Data + lVar41 * 0x20 + 0xc);
        if (uVar6 != 0xffff) {
          uVar42 = (uint)uVar6;
        }
        URigHierarchy::GetLocalTransformByIndex(local_888,&local_148,uVar42,false);
        local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_3e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_3e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_3e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_3e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_3e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_3e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_3e8,&local_148,&local_388);
        local_918.X = local_3e8.Rotation.XY.m128d_f64[0];
        local_918.Y = local_3e8.Rotation.XY.m128d_f64[1];
        local_918.Z = local_3e8.Rotation.ZW.m128d_f64[0];
        local_918.W = local_3e8.Rotation.ZW.m128d_f64[1];
        if (local_8a8->bEnabled != false) {
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar49 = FRigVMMathLibrary::EaseFloat
                             ((local_8a8->ReachMaximum - local_8a8->ReachMinimum) *
                              *(float *)((this_03->AllocatorInstance).Data +
                                        (longlong)&(local_8f0->AllocatorInstance).Data) +
                              local_8a8->ReachMinimum,local_8a8->ReachEase);
          dVar167 = local_388.Rotation.ZW.m128d_f64[0];
          dVar189 = local_388.Rotation.ZW.m128d_f64[1];
          dVar159 = local_388.Rotation.XY.m128d_f64[1];
          auVar97 = *(undefined1 (*) [16])&(local_8a8->ReachAxis).field0_0x0;
          dVar172 = (local_8a8->ReachAxis).field0_0x0._s_0.Z;
          auVar161 = blendpd((undefined1  [16])local_388.Rotation.XY.m128d_f64,
                             (undefined1  [16])local_388.Rotation.ZW.m128d_f64,2);
          dVar151 = auVar97._8_8_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = dVar172;
          auVar101 = blendpd(auVar97,auVar11,2);
          auVar177._0_8_ = dVar151 * local_388.Rotation.XY.m128d_f64[0] - auVar97._0_8_ * dVar159;
          auVar177._8_8_ = dVar172 * dVar159 - dVar151 * dVar167;
          auVar102._0_8_ = auVar101._0_8_ * dVar167 - dVar172 * auVar161._0_8_;
          auVar102._8_8_ = auVar101._8_8_ * dVar189 - auVar161._8_8_ * 0.0;
          auVar101 = blendpd(auVar177,auVar102,2);
          dVar184 = auVar177._8_8_ + auVar177._8_8_;
          dVar95 = auVar102._0_8_ + auVar102._0_8_;
          uVar149 = SUB84(dVar95,0);
          uVar150 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar178._0_8_ = auVar101._0_8_ + auVar101._0_8_;
          auVar178._8_8_ = auVar101._8_8_ + auVar101._8_8_;
          auVar133._8_4_ = uVar149;
          auVar133._0_8_ = dVar184;
          auVar133._12_4_ = uVar150;
          auVar54._8_4_ = uVar149;
          auVar54._0_8_ = dVar184;
          auVar54._12_4_ = uVar150;
          auVar103._8_4_ = uVar149;
          auVar103._0_8_ = dVar184;
          auVar103._12_4_ = uVar150;
          auVar101 = blendpd(auVar103,auVar178,2);
          auVar134._0_8_ = auVar133._8_8_ * local_388.Rotation.XY.m128d_f64[0] - dVar184 * dVar159;
          auVar134._8_8_ = auVar178._0_8_ * dVar159 - auVar54._8_8_ * dVar167;
          auVar55._8_4_ = SUB84(auVar178._8_8_,0);
          auVar55._0_8_ = auVar178._0_8_;
          auVar55._12_4_ = (int)((ulonglong)auVar178._8_8_ >> 0x20);
          auVar104._0_8_ = auVar101._0_8_ * dVar167 - auVar178._0_8_ * auVar161._0_8_;
          auVar104._8_8_ = auVar101._8_8_ * dVar189 - auVar55._8_8_ * auVar161._8_8_;
          auVar56._8_4_ = SUB84(auVar134._8_8_,0);
          auVar56._0_8_ = auVar134._0_8_;
          auVar56._12_4_ = (int)((ulonglong)auVar134._8_8_ >> 0x20);
          auVar101 = blendpd(auVar134,auVar104,2);
          local_698._8_8_ = local_3e8.Translation.XY.m128d_f64[1];
          local_698._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
          dVar184 = dVar184 * dVar189 + auVar97._0_8_ + auVar56._8_8_;
          dVar95 = dVar95 * dVar189 + dVar151 + auVar104._0_8_;
          uVar149 = (undefined4)((ulonglong)dVar95 >> 0x20);
          local_688 = local_3e8.Translation.ZW.m128d_f64[0];
          auVar13._4_8_ = local_3e8.Translation.ZW.m128d_f64[1];
          auVar13._0_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[0] >> 0x20);
          auVar57._0_8_ = auVar13._0_8_ << 0x20;
          auVar57._8_4_ = SUB84(local_3e8.Translation.XY.m128d_f64[1],0);
          auVar57._12_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[1] >> 0x20);
          local_670 = auVar178._0_8_ * dVar189 + dVar172 + auVar101._0_8_;
          local_680._8_4_ = SUB84(dVar95,0);
          local_680._0_8_ = dVar184;
          local_680._12_4_ = uVar149;
          local_668._8_4_ = SUB84(dVar95,0);
          local_668._0_8_ = dVar184;
          local_668._12_4_ = uVar149;
          dVar151 = (local_8a8->ReachTarget).field0_0x0._s_0.X -
                    local_3e8.Translation.XY.m128d_f64[0];
          dVar167 = (local_8a8->ReachTarget).field0_0x0._s_0.Z -
                    local_3e8.Translation.ZW.m128d_f64[0];
          dVar159 = (local_8a8->ReachTarget).field0_0x0._s_0.Y - auVar57._8_8_;
          dVar172 = dVar151 * dVar151 + dVar159 * dVar159 + dVar167 * dVar167;
          uVar173 = dVar159;
          uVar168 = dVar167;
          uVar152 = dVar151;
          if ((dVar172 != (double)CONCAT44(uVar199,uVar198)) &&
             (uVar173 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             uVar152 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             (double)CONCAT44(uVar197,uVar194) <= dVar172)) {
            local_6b8 = (double)CONCAT44(uVar199,uVar198) / SQRT(dVar172);
            uVar173 = dVar159 * local_6b8;
            uVar168 = dVar167 * local_6b8;
            uVar152 = dVar151 * local_6b8;
          }
          dVar172 = (double)fVar49;
          local_7a8._s_0.X = ((double)uVar152 - dVar184) * dVar172 + dVar184;
          local_7a8._s_0.Z = ((double)uVar168 - local_670) * dVar172 + local_670;
          local_7a8._s_0.Y = ((double)uVar173 - dVar95) * dVar172 + dVar95;
          local_668._s_0.Z = local_670;
          FRigVMMathLibrary::FindQuatBetweenVectors
                    ((TQuat<double> *)local_5e8,(TVector<double> *)&local_668._s_0,
                     (TVector<double> *)&local_7a8._s_0);
          dVar95 = local_5d8._0_8_;
          dVar184 = local_5e8._0_8_;
          dVar172 = local_5e8._8_8_;
          auVar179._8_4_ = local_5e8._0_4_;
          auVar179._0_8_ = dVar184;
          auVar179._12_4_ = local_5e8._4_4_;
          dVar151 = local_5d8._8_8_;
          auVar58._8_4_ = local_5d8._8_4_;
          auVar58._0_8_ = dVar151;
          auVar58._12_4_ = local_5d8._12_4_;
          auVar59._8_4_ = local_5d8._0_4_;
          auVar59._0_8_ = dVar95;
          auVar59._12_4_ = local_5d8._4_4_;
          local_6d8 = CONCAT44(uVar197,uVar194);
          dVar159 = dVar184 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar151 * local_918.X +
                    local_918.Z * dVar172 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar95 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar167 = auVar179._8_8_ * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar58._8_8_ * local_918.Y +
                    local_918.W * dVar172 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar59._8_8_ * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar60._8_4_ = SUB84(dVar167,0);
          auVar60._0_8_ = dVar159;
          auVar60._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
          auVar153._0_8_ =
               dVar172 * local_918.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          auVar153._8_8_ =
               dVar172 * local_918.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar172 = dVar184 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    local_918.Z * dVar151 + auVar153._0_8_ +
                    dVar95 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar184 = dVar184 * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    local_918.W * dVar151 + auVar153._8_8_ +
                    dVar95 * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar105._8_4_ = SUB84(dVar184,0);
          auVar105._0_8_ = dVar172;
          auVar105._12_4_ = (int)((ulonglong)dVar184 >> 0x20);
          dVar95 = dVar172 * dVar172 + dVar159 * dVar159;
          dVar151 = auVar105._8_8_ * dVar184 + auVar60._8_8_ * dVar167;
          auVar61._8_4_ = SUB84(dVar151,0);
          auVar61._0_8_ = dVar95;
          auVar61._12_4_ = (int)((ulonglong)dVar151 >> 0x20);
          auVar62._0_8_ = auVar61._8_8_ + dVar95;
          auVar62._8_8_ = dVar95 + dVar151;
          auVar97 = sqrtpd(auVar153,auVar62);
          uVar47 = -(ulonglong)((double)CONCAT44(uVar197,uVar194) <= auVar62._0_8_);
          uVar48 = -(ulonglong)((double)CONCAT44(uVar197,uVar194) <= auVar62._8_8_);
          auVar101 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar97);
          uVar42 = (uint)(uVar47 >> 0x20);
          uVar158 = (uint)(uVar48 >> 0x20);
          auVar106._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar106._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar106._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar106._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          auVar162._0_8_ = uVar47 & (ulonglong)(auVar101._0_8_ * dVar159);
          uVar31 = uVar48 & (ulonglong)(auVar101._8_8_ * dVar167);
          auVar162._8_4_ = (undefined4)uVar31;
          auVar162._12_4_ = (undefined4)(uVar31 >> 0x20);
          auVar162 = auVar162 | auVar106;
          dVar95 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          auVar140._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar140._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar140._8_4_ = ~(uint)uVar48 & SUB84(dVar95,0);
          auVar140._12_4_ = ~uVar158 & (uint)((ulonglong)dVar95 >> 0x20);
          uVar149 = (undefined4)__real_4022666660000000;
          uVar150 = (undefined4)((ulonglong)__real_4022666660000000 >> 0x20);
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar97);
          auVar107._0_8_ = (ulonglong)(auVar97._0_8_ * dVar172) & uVar47;
          uVar48 = (ulonglong)(auVar97._8_8_ * dVar184) & uVar48;
          auVar107._8_4_ = (undefined4)uVar48;
          auVar107._12_4_ = (undefined4)(uVar48 >> 0x20);
          auVar140 = auVar140 | auVar107;
          auVar14._4_8_ = auVar107._8_8_;
          auVar14._0_4_ = auVar162._4_4_;
          auVar108._0_8_ = auVar14._0_8_ << 0x20;
          auVar108._8_4_ = auVar162._8_4_;
          auVar108._12_4_ = auVar162._12_4_;
          auVar15._4_8_ = dVar95;
          auVar15._0_4_ = auVar140._4_4_;
          auVar63._0_8_ = auVar15._0_8_ << 0x20;
          auVar63._8_4_ = auVar140._8_4_;
          auVar63._12_4_ = auVar140._12_4_;
          local_918.Y = auVar108._8_8_;
          local_918.W = auVar63._8_8_;
          local_918.Z = auVar140._0_8_;
          local_918.X = auVar162._0_8_;
          fVar49 = __real_3f800000;
          dVar172 = __real_40608cccc0000000;
        }
        if (local_8d8->bEnabled != false) {
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar50 = FRigVMMathLibrary::EaseFloat
                             ((local_8d8->WaveMaximum - local_8d8->WaveMinimum) *
                              *(float *)((this_03->AllocatorInstance).Data + lVar41 * 4) +
                              local_8d8->WaveMinimum,local_8d8->WaveEase);
          pFVar39 = FRuntimeFloatCurve::GetRichCurveConst(local_850);
          local_8e8._0_8_ = pFVar39;
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FRichCurve::Eval((FRichCurve *)local_8e8._0_8_,
                           *(float *)((this_03->AllocatorInstance).Data + lVar41 * 4),fVar49);
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          dVar184 = (double)*(float *)((this_03->AllocatorInstance).Data + lVar41 * 4);
          dVar95 = dVar184 * (local_8d8->WaveFrequency).field0_0x0._s_0.X +
                   (param_10->Time).field0_0x0._s_0.X;
          dVar151 = dVar184 * (local_8d8->WaveFrequency).field0_0x0._s_0.Z +
                    (param_10->Time).field0_0x0._s_0.Z;
          dVar184 = dVar184 * (local_8d8->WaveFrequency).field0_0x0._s_0.Y +
                    (param_10->Time).field0_0x0._s_0.Y;
          fVar49 = FMath::PerlinNoise1D((float)(dVar95 + dVar172));
          fVar51 = FMath::PerlinNoise1D((float)(dVar184 + (double)CONCAT44(uVar150,uVar149)));
          fVar52 = FMath::PerlinNoise1D((float)(dVar151 + ___real_406b3cccc0000000));
          sin(((double)fVar51 + (double)fVar51) * (local_8d8->WaveNoise).field0_0x0._s_0.Y + dVar184
              + (local_8d8->WaveOffset).field0_0x0._s_0.Y);
          sin(((double)fVar52 + (double)fVar52) * (local_8d8->WaveNoise).field0_0x0._s_0.Z + dVar151
              + (local_8d8->WaveOffset).field0_0x0._s_0.Z);
          local_8b0 = (TArray<float,TSizedDefaultAllocator<32>_> *)(double)fVar50;
          local_8e8._0_8_ = (local_8d8->WaveAmplitude).field0_0x0._s_0.Z;
          sin(((double)fVar49 + (double)fVar49) * (local_8d8->WaveNoise).field0_0x0._s_0.X + dVar95
              + (local_8d8->WaveOffset).field0_0x0._s_0.X);
          __libm_sse2_sincos_();
          auVar187._8_4_ = SUB84(local_918.X,0);
          auVar187._0_8_ = local_918.X;
          auVar187._12_4_ = (int)((ulonglong)local_918.X >> 0x20);
          auVar64._8_4_ = SUB84(local_918.Z,0);
          auVar64._0_8_ = local_918.Z;
          auVar64._12_4_ = (int)((ulonglong)local_918.Z >> 0x20);
          dVar185 = local_918.X * extraout_XMM0_Qb *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    extraout_XMM0_Qa * local_918.W +
                    local_918.Y * 0.0 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    local_918.Z * 0.0 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar95 = auVar187._8_8_ * 0.0 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_918.W * 0.0 +
                   extraout_XMM0_Qb * local_918.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar64._8_8_ * extraout_XMM0_Qa *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar16._4_8_ = local_918.W;
          auVar16._0_4_ = (int)((ulonglong)dVar185 >> 0x20);
          auVar180._0_8_ = auVar16._0_8_ << 0x20;
          auVar180._8_4_ = SUB84(dVar95,0);
          uVar149 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar180._12_4_ = uVar149;
          dVar167 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar189 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar151 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar159 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar169 = auVar180._8_8_;
          dVar172 = local_918.X * 0.0 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    local_918.W * 0.0 + extraout_XMM0_Qa * local_918.Y * dVar167 +
                    local_918.Z * extraout_XMM0_Qb * dVar151;
          dVar184 = local_918.X * extraout_XMM0_Qa *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    extraout_XMM0_Qb * local_918.W + local_918.Y * 0.0 * dVar189 +
                    local_918.Z * 0.0 * dVar159;
          uVar150 = (undefined4)((ulonglong)dVar184 >> 0x20);
          __libm_sse2_sincos_();
          auVar191._8_4_ = SUB84(dVar184,0);
          auVar191._0_8_ = dVar172;
          auVar191._12_4_ = uVar150;
          dVar190 = auVar191._8_8_;
          auVar65._8_4_ = SUB84(dVar184,0);
          auVar65._0_8_ = dVar190;
          auVar65._12_4_ = uVar150;
          auVar109._8_4_ = SUB84(dVar95,0);
          auVar109._0_8_ = dVar169;
          auVar109._12_4_ = uVar149;
          dVar186 = extraout_XMM0_Qb_00 * dVar185 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar190 * 0.0
                    + dVar169 * 0.0 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    extraout_XMM0_Qa_00 * dVar172 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar195 = dVar185 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                    + auVar65._8_8_ * extraout_XMM0_Qa_00 +
                    auVar109._8_8_ * extraout_XMM0_Qb_00 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    dVar172 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar17._4_8_ = dVar95;
          auVar17._0_4_ = (int)((ulonglong)dVar186 >> 0x20);
          auVar181._0_8_ = auVar17._0_8_ << 0x20;
          uVar149 = SUB84(dVar195,0);
          auVar181._8_4_ = uVar149;
          uVar150 = (undefined4)((ulonglong)dVar195 >> 0x20);
          auVar181._12_4_ = uVar150;
          dVar195 = dVar172 * 0.0 * dVar159;
          dVar183 = auVar181._8_8_;
          dVar95 = extraout_XMM0_Qa_00 * dVar185 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar190 * 0.0 +
                   dVar169 * 0.0 * dVar167 + extraout_XMM0_Qb_00 * dVar172 * dVar151;
          dVar172 = dVar185 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                    + dVar184 * extraout_XMM0_Qb_00 + dVar169 * extraout_XMM0_Qa_00 * dVar189 +
                    dVar195;
          uVar194 = SUB84(dVar172,0);
          uVar197 = (undefined4)((ulonglong)dVar172 >> 0x20);
          auVar18._4_8_ = dVar195;
          auVar18._0_4_ = (int)((ulonglong)dVar95 >> 0x20);
          auVar170._0_8_ = auVar18._0_8_ << 0x20;
          auVar170._8_4_ = uVar194;
          auVar170._12_4_ = uVar197;
          __libm_sse2_sincos_();
          dVar169 = extraout_XMM0._0_8_;
          dVar184 = extraout_XMM0._8_8_;
          auVar192._8_4_ = uVar194;
          auVar192._0_8_ = dVar95;
          auVar192._12_4_ = uVar197;
          auVar141._8_4_ = extraout_XMM0._0_4_;
          auVar141._0_8_ = dVar184;
          auVar141._12_4_ = extraout_XMM0._4_4_;
          dVar190 = auVar192._8_8_;
          auVar66._8_4_ = uVar194;
          auVar66._0_8_ = dVar190;
          auVar66._12_4_ = uVar197;
          auVar110._8_4_ = uVar149;
          auVar110._0_8_ = dVar183;
          auVar110._12_4_ = uVar150;
          dVar195 = dVar95 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar185 = dVar184 * dVar186 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar190 * 0.0
                    + dVar183 * dVar169 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar95 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar172 = auVar141._8_8_ * dVar186 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar66._8_8_ * 0.0 +
                    auVar110._8_8_ * dVar184 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar195;
          auVar19._4_8_ = dVar186;
          auVar19._0_4_ = (int)((ulonglong)dVar185 >> 0x20);
          auVar135._0_8_ = auVar19._0_8_ << 0x20;
          uVar149 = SUB84(dVar172,0);
          auVar135._8_4_ = uVar149;
          uVar150 = (undefined4)((ulonglong)dVar172 >> 0x20);
          auVar135._12_4_ = uVar150;
          dVar172 = dVar186 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                    + dVar190 * dVar169 + dVar183 * 0.0 * dVar167 + dVar184 * dVar95 * dVar151;
          dVar184 = dVar186 * 0.0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                    + auVar170._8_8_ * dVar184 + dVar183 * 0.0 * dVar189 +
                    dVar169 * dVar95 * dVar159;
          uVar194 = SUB84(dVar184,0);
          uVar197 = (undefined4)((ulonglong)dVar184 >> 0x20);
          auVar20._4_8_ = dVar195;
          auVar20._0_4_ = (int)((ulonglong)dVar172 >> 0x20);
          auVar67._0_8_ = auVar20._0_8_ << 0x20;
          auVar67._8_4_ = uVar194;
          auVar67._12_4_ = uVar197;
          auVar68._8_4_ = uVar149;
          auVar68._0_8_ = dVar185;
          auVar68._12_4_ = uVar150;
          auVar111._8_4_ = uVar194;
          auVar111._0_8_ = dVar172;
          auVar111._12_4_ = uVar197;
          dVar184 = dVar172 * dVar172 + dVar185 * dVar185;
          dVar95 = auVar111._8_8_ * auVar67._8_8_ + auVar68._8_8_ * auVar135._8_8_;
          auVar69._8_4_ = SUB84(dVar95,0);
          auVar69._0_8_ = dVar184;
          auVar69._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
          auVar70._0_8_ = auVar69._8_8_ + dVar184;
          auVar70._8_8_ = dVar184 + dVar95;
          uVar194 = SUB84(__real_3e45798ee0000000,0);
          uVar197 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar198 = SUB84(__real_3ff0000000000000,0);
          uVar199 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          auVar97 = sqrtpd(extraout_XMM0,auVar70);
          uVar47 = -(ulonglong)(__real_3e45798ee0000000 <= auVar70._0_8_);
          uVar48 = -(ulonglong)(__real_3e45798ee0000000 <= auVar70._8_8_);
          auVar101 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar97);
          uVar42 = (uint)(uVar47 >> 0x20);
          uVar158 = (uint)(uVar48 >> 0x20);
          auVar112._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar112._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar112._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar112._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_6d0 = __real_3e45798ee0000000;
          auVar163._0_8_ = uVar47 & (ulonglong)(auVar101._0_8_ * dVar185);
          uVar31 = uVar48 & (ulonglong)(auVar101._8_8_ * auVar135._8_8_);
          auVar163._8_4_ = (undefined4)uVar31;
          auVar163._12_4_ = (undefined4)(uVar31 >> 0x20);
          auVar163 = auVar163 | auVar112;
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar97);
          dVar184 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          auVar142._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar142._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar142._8_4_ = ~(uint)uVar48 & SUB84(dVar184,0);
          auVar142._12_4_ = ~uVar158 & (uint)((ulonglong)dVar184 >> 0x20);
          auVar113._0_8_ = (ulonglong)(auVar97._0_8_ * dVar172) & uVar47;
          uVar48 = (ulonglong)(auVar97._8_8_ * auVar67._8_8_) & uVar48;
          auVar113._8_4_ = (undefined4)uVar48;
          auVar113._12_4_ = (undefined4)(uVar48 >> 0x20);
          auVar142 = auVar142 | auVar113;
          auVar21._4_8_ = auVar113._8_8_;
          auVar21._0_4_ = auVar163._4_4_;
          auVar114._0_8_ = auVar21._0_8_ << 0x20;
          auVar114._8_4_ = auVar163._8_4_;
          auVar114._12_4_ = auVar163._12_4_;
          auVar22._4_8_ = dVar184;
          auVar22._0_4_ = auVar142._4_4_;
          auVar71._0_8_ = auVar22._0_8_ << 0x20;
          auVar71._8_4_ = auVar142._8_4_;
          auVar71._12_4_ = auVar142._12_4_;
          local_918.Y = auVar114._8_8_;
          local_918.W = auVar71._8_8_;
          local_918.Z = auVar142._0_8_;
          local_918.X = auVar163._0_8_;
        }
        if (local_8d0->bEnabled != false) {
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          local_588.X = local_918.X;
          local_588.Y = local_918.Y;
          local_588.Z = local_918.Z;
          local_588.W = local_918.W;
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar49 = FRigVMMathLibrary::EaseFloat
                             ((local_8d0->PendulumMaximum - local_8d0->PendulumMinimum) *
                              *(float *)((this_03->AllocatorInstance).Data + lVar41 * 4) +
                              local_8d0->PendulumMinimum,local_8d0->PendulumEase);
          uVar173 = extraout_var._4_8_;
          uVar42 = 0;
          if ((int)uVar43 < (param_10->LocalTip).ArrayNum) {
            uVar42 = uVar44;
          }
          if (uVar42 == 0) {
            bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar173 = extraout_var_00._4_8_;
            if (bVar35) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          dVar169 = local_388.Rotation.XY.m128d_f64[0];
          dVar190 = local_388.Rotation.ZW.m128d_f64[0];
          dVar196 = local_388.Rotation.ZW.m128d_f64[1];
          dVar185 = local_388.Rotation.XY.m128d_f64[1];
          auVar161 = blendpd((undefined1  [16])local_388.Rotation.XY.m128d_f64,
                             (undefined1  [16])local_388.Rotation.ZW.m128d_f64,2);
          pFVar3 = (param_10->LocalTip).AllocatorInstance.Data;
          auVar97 = *(undefined1 (*) [16])(pFVar3 + (longlong)local_8f8);
          dVar195 = auVar97._0_8_;
          auVar23._4_8_ = uVar173;
          auVar23._0_4_ = auVar97._4_4_;
          auVar72._0_8_ = auVar23._0_8_ << 0x20;
          auVar72._8_4_ = auVar97._8_4_;
          auVar72._12_4_ = auVar97._12_4_;
          dVar159 = auVar97._8_8_;
          dVar172 = *(double *)(pFVar3 + (longlong)local_8f8 + 0x10);
          auVar101 = *(undefined1 (*) [16])&(local_8d0->UnwindAxis).field0_0x0;
          auVar154._8_8_ = 0;
          auVar154._0_8_ = dVar172;
          auVar97 = blendpd(auVar97,auVar154,2);
          auVar143._0_8_ = dVar159 * dVar169 - dVar195 * dVar185;
          auVar143._8_8_ = dVar172 * dVar185 - dVar159 * dVar190;
          dVar183 = auVar161._0_8_;
          dVar186 = auVar161._8_8_;
          auVar115._0_8_ = auVar97._0_8_ * dVar190 - dVar172 * dVar183;
          auVar115._8_8_ = auVar97._8_8_ * dVar196 - dVar186 * 0.0;
          auVar97 = blendpd(auVar143,auVar115,2);
          dVar95 = auVar143._8_8_ + auVar143._8_8_;
          dVar151 = auVar115._0_8_ + auVar115._0_8_;
          uVar149 = SUB84(dVar151,0);
          uVar150 = (undefined4)((ulonglong)dVar151 >> 0x20);
          auVar144._0_8_ = auVar97._0_8_ + auVar97._0_8_;
          auVar144._8_8_ = auVar97._8_8_ + auVar97._8_8_;
          auVar136._8_4_ = uVar149;
          auVar136._0_8_ = dVar95;
          auVar136._12_4_ = uVar150;
          auVar73._8_4_ = uVar149;
          auVar73._0_8_ = dVar95;
          auVar73._12_4_ = uVar150;
          auVar116._8_4_ = uVar149;
          auVar116._0_8_ = dVar95;
          auVar116._12_4_ = uVar150;
          auVar97 = blendpd(auVar116,auVar144,2);
          auVar137._0_8_ = auVar136._8_8_ * dVar169 - dVar95 * dVar185;
          auVar137._8_8_ = auVar144._0_8_ * dVar185 - auVar73._8_8_ * dVar190;
          auVar74._8_4_ = SUB84(auVar144._8_8_,0);
          auVar74._0_8_ = auVar144._0_8_;
          auVar74._12_4_ = (int)((ulonglong)auVar144._8_8_ >> 0x20);
          auVar117._0_8_ = auVar97._0_8_ * dVar190 - auVar144._0_8_ * dVar183;
          auVar117._8_8_ = auVar97._8_8_ * dVar196 - auVar74._8_8_ * dVar186;
          dVar184 = (local_8d0->UnwindAxis).field0_0x0._s_0.Z;
          auVar164._8_8_ = 0;
          auVar164._0_8_ = dVar184;
          auVar75._8_4_ = SUB84(auVar137._8_8_,0);
          auVar75._0_8_ = auVar137._0_8_;
          auVar75._12_4_ = (int)((ulonglong)auVar137._8_8_ >> 0x20);
          dVar95 = dVar95 * dVar196 + dVar195 + auVar75._8_8_;
          dVar151 = dVar151 * dVar196 + dVar159 + auVar117._0_8_;
          uVar149 = (undefined4)((ulonglong)dVar151 >> 0x20);
          auVar97 = blendpd(auVar137,auVar117,2);
          dVar189 = auVar101._8_8_;
          local_710 = auVar144._0_8_ * dVar196 + dVar172 + auVar97._0_8_;
          auVar155._0_8_ = dVar189 * dVar169 - auVar101._0_8_ * dVar185;
          auVar155._8_8_ = dVar184 * dVar185 - dVar189 * dVar190;
          local_650._8_4_ = SUB84(dVar151,0);
          local_650._0_8_ = dVar95;
          local_650._12_4_ = uVar149;
          local_720._8_4_ = SUB84(dVar151,0);
          local_720._0_8_ = dVar95;
          local_720._12_4_ = uVar149;
          auVar97 = blendpd(auVar101,auVar164,2);
          auVar145._8_4_ = SUB84(auVar155._8_8_,0);
          auVar145._0_8_ = auVar155._0_8_;
          auVar145._12_4_ = (int)((ulonglong)auVar155._8_8_ >> 0x20);
          auVar118._0_8_ = auVar97._0_8_ * dVar190 - dVar184 * dVar183;
          auVar118._8_8_ = auVar97._8_8_ * dVar196 - dVar186 * 0.0;
          auVar97 = blendpd(auVar155,auVar118,2);
          dVar159 = auVar145._8_8_ + auVar145._8_8_;
          dVar167 = auVar118._0_8_ + auVar118._0_8_;
          auVar156._0_8_ = auVar97._0_8_ + auVar97._0_8_;
          auVar156._8_8_ = auVar97._8_8_ + auVar97._8_8_;
          uVar149 = SUB84(dVar167,0);
          auVar138._8_4_ = uVar149;
          auVar138._0_8_ = dVar159;
          uVar150 = (undefined4)((ulonglong)dVar167 >> 0x20);
          auVar138._12_4_ = uVar150;
          auVar76._8_4_ = uVar149;
          auVar76._0_8_ = dVar159;
          auVar76._12_4_ = uVar150;
          auVar119._8_4_ = uVar149;
          auVar119._0_8_ = dVar159;
          auVar119._12_4_ = uVar150;
          auVar139._0_8_ = auVar138._8_8_ * dVar169 - dVar159 * dVar185;
          auVar139._8_8_ = auVar156._0_8_ * dVar185 - auVar76._8_8_ * dVar190;
          auVar97 = blendpd(auVar119,auVar156,2);
          auVar77._8_4_ = SUB84(auVar156._8_8_,0);
          auVar77._0_8_ = auVar156._0_8_;
          auVar77._12_4_ = (int)((ulonglong)auVar156._8_8_ >> 0x20);
          dVar169 = (double)local_8d0->PendulumStiffness;
          auVar120._0_8_ = auVar97._0_8_ * dVar190 - auVar156._0_8_ * dVar183;
          auVar120._8_8_ = auVar97._8_8_ * dVar196 - auVar77._8_8_ * dVar186;
          auVar78._8_4_ = SUB84(auVar139._8_8_,0);
          auVar78._0_8_ = auVar139._0_8_;
          auVar78._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
          auVar97 = blendpd(auVar139,auVar120,2);
          local_7b8 = (local_8d0->PendulumGravity).field0_0x0._s_0.Z;
          local_7e0._s_0.X = dVar159 * dVar196 + auVar101._0_8_ + auVar78._8_8_;
          local_7e0._s_0.Y = dVar167 * dVar196 + dVar189 + auVar120._0_8_;
          dVar159 = (local_8d0->PendulumGravity).field0_0x0._s_0.X;
          dVar167 = (local_8d0->PendulumGravity).field0_0x0._s_0.Y;
          local_7e0._s_0.Z = auVar156._0_8_ * dVar196 + dVar184 + auVar97._0_8_;
          dVar184 = dVar169 * local_710 + local_7b8;
          local_640 = local_710;
          local_548 = local_7e0._s_0.X;
          dStack_540 = local_7e0._s_0.Y;
          local_538 = local_7e0._s_0.Z;
          if (0.0 < *(double *)&local_8b8->field_0x20) {
            fVar50 = local_8d0->PendulumBlend;
            if (__real_3f7fbe77 <= local_8d0->PendulumBlend) {
              fVar50 = __real_3f7fbe77;
            }
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if (fVar50 <= __real_00000000) {
              fVar50 = __real_00000000;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_02->AllocatorInstance).Data;
            dVar130 = (double)fVar50;
            dVar189 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10);
            dVar185 = *(double *)(pFVar3 + lVar41 * 0x18 + 8);
            dVar183 = *(double *)(pFVar3 + lVar41 * 0x18);
            dVar186 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10);
            dVar190 = *(double *)(pFVar3 + lVar41 * 0x18 + 8);
            dVar196 = *(double *)(pFVar3 + lVar41 * 0x18);
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_02->AllocatorInstance).Data;
            *(double *)(pFVar3 + lVar41 * 0x18) =
                 ((dVar169 * dVar95 + dVar159) - dVar183) * dVar130 + dVar196;
            *(double *)(pFVar3 + lVar41 * 0x18 + 8) =
                 ((dVar169 * dVar151 + dVar167) - dVar185) * dVar130 + dVar190;
            *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) = (dVar184 - dVar189) * dVar130 + dVar186;
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_02->AllocatorInstance).Data;
            dVar159 = (double)local_8d0->PendulumDrag;
            pFVar3 = pFVar8 + lVar41 * 0x18 + 8;
            dVar95 = *(double *)pFVar3;
            dVar151 = *(double *)(pFVar3 + 8);
            dVar184 = *(double *)(pFVar8 + lVar41 * 0x18);
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_02->AllocatorInstance).Data;
            *(double *)(pFVar3 + lVar41 * 0x18) = dVar159 * dVar184;
            pFVar3 = pFVar3 + lVar41 * 0x18 + 8;
            *(double *)pFVar3 = dVar159 * dVar95;
            *(double *)(pFVar3 + 8) = dVar159 * dVar151;
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_04->AllocatorInstance).Data;
            local_7b8 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10);
            auVar97 = *(undefined1 (*) [16])(pFVar3 + lVar41 * 0x18);
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_8e8._0_8_ = (this_04->AllocatorInstance).Data;
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_02->AllocatorInstance).Data;
            dVar184 = *(double *)&local_8b8->field_0x20;
            dVar95 = *(double *)(pFVar3 + lVar41 * 0x18);
            pFVar3 = pFVar3 + lVar41 * 0x18 + 8;
            dVar159 = *(double *)pFVar3;
            dVar167 = *(double *)(pFVar3 + 8);
            dVar151 = *(double *)(local_8e8._0_8_ + lVar41 * 0x18);
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            pdVar4 = (double *)(local_8e8._0_8_ + 8 + lVar41 * 0x18);
            dVar189 = *pdVar4;
            dVar169 = pdVar4[1];
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_04->AllocatorInstance).Data;
            *(double *)(pFVar3 + lVar41 * 0x18) = dVar184 * dVar95 + dVar151;
            pFVar3 = pFVar3 + lVar41 * 0x18 + 8;
            *(double *)pFVar3 = dVar184 * dVar159 + dVar189;
            *(double *)(pFVar3 + 8) = dVar184 * dVar167 + dVar169;
            local_768 = local_3e8.Translation.XY.m128d_f64[0];
            dStack_760 = local_3e8.Translation.XY.m128d_f64[1];
            local_758 = local_3e8.Translation.ZW.m128d_f64[0];
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_04->AllocatorInstance).Data;
            local_638._8_8_ = local_3e8.Translation.XY.m128d_f64[1];
            local_638._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
            local_628 = local_3e8.Translation.ZW.m128d_f64[0];
            auVar24._4_8_ = local_3e8.Translation.ZW.m128d_f64[1];
            auVar24._0_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[0] >> 0x20);
            auVar79._0_8_ = auVar24._0_8_ << 0x20;
            auVar79._8_4_ = SUB84(local_3e8.Translation.XY.m128d_f64[1],0);
            auVar79._12_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[1] >> 0x20);
            uVar173 = *(double *)(pFVar3 + lVar41 * 0x18) - local_3e8.Translation.XY.m128d_f64[0];
            local_780 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) -
                        local_3e8.Translation.ZW.m128d_f64[0];
            dStack_788 = *(double *)(pFVar3 + lVar41 * 0x18 + 8) - auVar79._8_8_;
            dVar184 = (double)uVar173 * (double)uVar173 + dStack_788 * dStack_788 +
                      local_780 * local_780;
            if (dVar184 != (double)CONCAT44(uVar199,uVar198)) {
              if ((double)CONCAT44(uVar197,uVar194) <= dVar184) {
                local_6c8 = (double)CONCAT44(uVar199,uVar198) / SQRT(dVar184);
                dStack_788 = local_6c8 * dStack_788;
                local_780 = local_6c8 * local_780;
                uVar173 = (double)uVar173 * local_6c8;
              }
              else {
                local_780 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_790 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_788 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar173 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              }
            }
            dVar172 = (double)(float)SQRT(dVar195 * dVar195 + auVar72._8_8_ * auVar72._8_8_ +
                                          dVar172 * dVar172);
            uVar168 = 0;
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            dVar95 = local_780 * dVar172 + local_758;
            dVar184 = dStack_788 * dVar172 + dStack_760;
            dVar172 = (double)uVar173 * dVar172 + local_768;
            if (uVar42 == 0) {
              bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar168 = extraout_XMM0_00._8_8_;
              if (bVar35) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pFVar3 = (this_04->AllocatorInstance).Data;
            *(double *)(pFVar3 + lVar41 * 0x18) = dVar172;
            *(double *)(pFVar3 + lVar41 * 0x18 + 8) = dVar184;
            *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) = dVar95;
            uVar42 = 0;
            if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
              uVar42 = uVar44;
            }
            if (uVar42 == 0) {
              bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar168 = extraout_XMM0_01._8_8_;
              if (bVar35) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pFVar3 = (this_04->AllocatorInstance).Data;
            auVar25._4_8_ = uVar168;
            auVar25._0_4_ = auVar97._4_4_;
            auVar80._0_8_ = auVar25._0_8_ << 0x20;
            auVar80._8_4_ = auVar97._8_4_;
            auVar80._12_4_ = auVar97._12_4_;
            dVar95 = (double)CONCAT44(uVar199,uVar198) / *(double *)&local_8b8->field_0x20;
            dVar172 = *(double *)(pFVar3 + lVar41 * 0x18 + 8);
            dVar184 = *(double *)(pFVar3 + lVar41 * 0x18);
            dVar151 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) - local_7b8;
            uVar42 = 0;
            if ((int)uVar43 < this_02->ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar3 = (this_02->AllocatorInstance).Data;
            *(double *)(pFVar3 + lVar41 * 0x18) = (dVar184 - auVar97._0_8_) * dVar95;
            *(double *)(pFVar3 + lVar41 * 0x18 + 8) = (dVar172 - auVar80._8_8_) * dVar95;
            *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) = dVar151 * dVar95;
          }
          uVar42 = 0;
          if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (this_04->AllocatorInstance).Data;
          pFVar3 = pFVar8 + lVar41 * 0x18;
          uVar168 = *(undefined8 *)pFVar3;
          uVar152 = *(undefined8 *)(pFVar3 + 8);
          uVar173 = *(undefined8 *)(pFVar8 + lVar41 * 0x18 + 0x10);
          uVar42 = 0;
          if ((int)(uVar43 * 2) < (param_10->VelocityLines).ArrayNum) {
            uVar42 = ~(uVar43 * 2) >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (param_10->VelocityLines).AllocatorInstance.Data;
          pFVar3 = pFVar8 + lVar41 * 0x30;
          *(undefined8 *)pFVar3 = uVar168;
          *(undefined8 *)(pFVar3 + 8) = uVar152;
          *(undefined8 *)(pFVar8 + lVar41 * 0x30 + 0x10) = uVar173;
          uVar42 = 0;
          if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_8e8._0_8_ = (this_04->AllocatorInstance).Data;
          uVar42 = 0;
          if ((int)uVar43 < this_02->ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (this_02->AllocatorInstance).Data;
          uVar42 = uVar43 * 2 + 1;
          pFVar3 = pFVar8 + lVar41 * 0x18 + 8;
          dVar172 = *(double *)(pFVar8 + lVar41 * 0x18) * __real_3fb99999a0000000;
          dVar184 = ___xmm_3fb99999a00000003fb99999a0000000 * *(double *)pFVar3;
          dVar95 = _UNK_15219d438 * *(double *)(pFVar3 + 8);
          uVar158 = 0;
          if ((int)uVar42 < (param_10->VelocityLines).ArrayNum) {
            uVar158 = ~uVar42 >> 0x1f;
          }
          pdVar4 = (double *)(local_8e8._0_8_ + 8 + lVar41 * 0x18);
          dVar159 = *pdVar4;
          dVar167 = pdVar4[1];
          dVar151 = *(double *)(local_8e8._0_8_ + lVar41 * 0x18);
          if ((uVar158 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar3 = (param_10->VelocityLines).AllocatorInstance.Data;
          *(double *)(pFVar3 + lVar41 * 0x30 + 0x18) = dVar172 + dVar151;
          pFVar3 = pFVar3 + lVar41 * 0x30 + 0x20;
          *(double *)pFVar3 = dVar184 + dVar159;
          *(double *)(pFVar3 + 8) = dVar95 + dVar167;
          uVar42 = 0;
          if ((int)uVar43 < (param_10->PendulumPosition).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar3 = (this_04->AllocatorInstance).Data;
          local_620._8_8_ = local_3e8.Translation.XY.m128d_f64[1];
          local_620._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
          local_610 = local_3e8.Translation.ZW.m128d_f64[0];
          auVar26._4_8_ = local_3e8.Translation.ZW.m128d_f64[1];
          auVar26._0_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[0] >> 0x20);
          auVar81._0_8_ = auVar26._0_8_ << 0x20;
          auVar81._8_4_ = SUB84(local_3e8.Translation.XY.m128d_f64[1],0);
          auVar81._12_4_ = (int)((ulonglong)local_3e8.Translation.XY.m128d_f64[1] >> 0x20);
          local_708._s_0.X =
               *(double *)(pFVar3 + lVar41 * 0x18) - local_3e8.Translation.XY.m128d_f64[0];
          local_708._s_0.Z =
               *(double *)(pFVar3 + lVar41 * 0x18 + 0x10) - local_3e8.Translation.ZW.m128d_f64[0];
          local_708._s_0.Y = *(double *)(pFVar3 + lVar41 * 0x18 + 8) - auVar81._8_8_;
          uVar42 = 0;
          if ((int)uVar43 < (param_10->LocalTip).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (param_10->LocalTip).AllocatorInstance.Data;
          pFVar3 = pFVar8 + lVar41 * 0x18;
          dVar184 = *(double *)pFVar3;
          dVar95 = *(double *)(pFVar3 + 8);
          local_7b8 = *(double *)(pFVar8 + lVar41 * 0x18 + 0x10);
          dVar172 = local_7b8 * local_918.Y - dVar95 * local_918.Z;
          dVar172 = dVar172 + dVar172;
          dVar159 = dVar184 * local_918.Z - local_7b8 * local_918.X;
          dVar159 = dVar159 + dVar159;
          dVar151 = dVar95 * local_918.X - dVar184 * local_918.Y;
          dVar151 = dVar151 + dVar151;
          local_6f0._s_0.X =
               (local_918.Y * dVar151 - local_918.Z * dVar159) + local_918.W * dVar172 + dVar184;
          local_6f0._s_0.Y =
               (local_918.Z * dVar172 - local_918.X * dVar151) + local_918.W * dVar159 + dVar95;
          local_6f0._s_0.Z =
               (local_918.X * dVar159 - local_918.Y * dVar172) + local_918.W * dVar151 + local_7b8;
          FRigVMMathLibrary::FindQuatBetweenVectors
                    ((TQuat<double> *)local_5c8,(TVector<double> *)&local_6f0._s_0,
                     (TVector<double> *)&local_708._s_0);
          dVar151 = local_5b8._0_8_;
          auVar33._8_8_ = local_918.Y;
          auVar33._0_8_ = local_918.X;
          dVar184 = local_5c8._0_8_;
          dVar95 = local_5c8._8_8_;
          dVar172 = local_5b8._8_8_;
          auVar171._8_4_ = local_5c8._0_4_;
          auVar171._0_8_ = dVar184;
          auVar171._12_4_ = local_5c8._4_4_;
          auVar82._8_4_ = local_5b8._8_4_;
          auVar82._0_8_ = dVar172;
          auVar82._12_4_ = local_5b8._12_4_;
          dVar159 = local_918.W * dVar172;
          auVar83._8_4_ = local_5b8._0_4_;
          auVar83._0_8_ = dVar151;
          auVar83._12_4_ = local_5b8._4_4_;
          dVar167 = dVar184 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar172 * local_918.X +
                    local_918.Z * dVar95 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar151 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar189 = auVar171._8_8_ * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar82._8_8_ * local_918.Y +
                    local_918.W * dVar95 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar83._8_8_ * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar84._8_4_ = SUB84(dVar189,0);
          auVar84._0_8_ = dVar167;
          auVar84._12_4_ = (int)((ulonglong)dVar189 >> 0x20);
          local_6c0 = CONCAT44(uVar197,uVar194);
          dVar172 = dVar184 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    local_918.Z * dVar172 +
                    dVar95 * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar151 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar184 = dVar184 * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar159 +
                    dVar95 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar151 * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar121._8_4_ = SUB84(dVar184,0);
          auVar121._0_8_ = dVar172;
          auVar121._12_4_ = (int)((ulonglong)dVar184 >> 0x20);
          dVar95 = dVar172 * dVar172 + dVar167 * dVar167;
          dVar151 = auVar121._8_8_ * dVar184 + auVar84._8_8_ * dVar189;
          auVar85._8_4_ = SUB84(dVar151,0);
          auVar85._0_8_ = dVar95;
          auVar85._12_4_ = (int)((ulonglong)dVar151 >> 0x20);
          auVar86._0_8_ = auVar85._8_8_ + dVar95;
          auVar86._8_8_ = dVar95 + dVar151;
          auVar97 = sqrtpd(auVar33,auVar86);
          uVar47 = -(ulonglong)((double)CONCAT44(uVar197,uVar194) <= auVar86._0_8_);
          uVar48 = -(ulonglong)((double)CONCAT44(uVar197,uVar194) <= auVar86._8_8_);
          auVar101 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar97);
          uVar42 = (uint)(uVar47 >> 0x20);
          uVar158 = (uint)(uVar48 >> 0x20);
          auVar122._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar122._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar122._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar122._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          auVar188._0_8_ = uVar47 & (ulonglong)(auVar101._0_8_ * dVar167);
          uVar31 = uVar48 & (ulonglong)(auVar101._8_8_ * dVar189);
          auVar188._8_4_ = (undefined4)uVar31;
          auVar188._12_4_ = (undefined4)(uVar31 >> 0x20);
          auVar188 = auVar188 | auVar122;
          uVar149 = auVar188._8_4_;
          uVar150 = auVar188._12_4_;
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar97);
          auVar193._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar193._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar193._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar193._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          auVar123._0_8_ = (ulonglong)(auVar97._0_8_ * dVar172) & uVar47;
          uVar48 = (ulonglong)(auVar97._8_8_ * dVar184) & uVar48;
          auVar123._8_4_ = (undefined4)uVar48;
          auVar123._12_4_ = (undefined4)(uVar48 >> 0x20);
          local_918.X = auVar188._0_8_;
          auVar193 = auVar193 | auVar123;
          local_918.Y = auVar188._8_8_;
          uVar194 = auVar193._8_4_;
          uVar197 = auVar193._12_4_;
          local_918.Z = auVar193._0_8_;
          local_918.W = auVar193._8_8_;
          local_8e8._8_4_ = uVar194;
          local_8e8._0_8_ = local_918.W;
          local_8e8._12_4_ = uVar197;
          uVar42 = 0;
          if ((int)uVar43 < this_03->ArrayNum) {
            uVar42 = uVar44;
          }
          if (uVar42 == 0) {
            bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar35) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar194 = SUB84(local_918.W,0);
            uVar197 = (undefined4)((ulonglong)local_918.W >> 0x20);
            uVar149 = SUB84(local_918.Y,0);
            uVar150 = (undefined4)((ulonglong)local_918.Y >> 0x20);
            local_8e8._8_8_ = 0;
            local_8e8._0_8_ = local_918.W;
          }
          auVar97 = *(undefined1 (*) [16])&(local_8d0->UnwindAxis).field0_0x0;
          dVar172 = auVar97._0_8_;
          local_7b8 = (local_8d0->UnwindAxis).field0_0x0._s_0.Z;
          fVar50 = local_8d0->UnwindMaximum;
          auVar27._4_8_ = dVar159;
          auVar27._0_4_ = auVar97._4_4_;
          auVar165._0_8_ = auVar27._0_8_ << 0x20;
          auVar165._8_4_ = auVar97._8_4_;
          auVar165._12_4_ = auVar97._12_4_;
          fVar51 = local_8d0->UnwindMinimum;
          dVar151 = auVar165._8_8_;
          fVar52 = *(float *)((this_03->AllocatorInstance).Data + lVar41 * 4);
          auVar146._8_4_ = auVar97._8_4_;
          auVar146._0_8_ = dVar151;
          auVar146._12_4_ = auVar97._12_4_;
          dVar159 = local_7b8 * (double)CONCAT44(uVar150,uVar149) - dVar151 * local_918.Z;
          uVar173 = auVar146._8_8_;
          fVar5 = local_8d0->UnwindMinimum;
          dVar159 = dVar159 + dVar159;
          dVar95 = dVar172 * local_918.Z - local_7b8 * local_918.X;
          dVar95 = dVar95 + dVar95;
          dVar184 = dVar151 * local_918.X - dVar172 * (double)CONCAT44(uVar150,uVar149);
          dVar184 = dVar184 + dVar184;
          local_8a0._s_0.X =
               ((double)CONCAT44(uVar150,uVar149) * dVar184 - local_918.Z * dVar95) +
               (double)CONCAT44(uVar197,uVar194) * dVar159 + dVar172;
          local_8a0._s_0.Y =
               (local_918.Z * dVar159 - local_918.X * dVar184) +
               (double)CONCAT44(uVar197,uVar194) * dVar95 + dVar151;
          local_8a0._s_0.Z =
               (local_918.X * dVar95 - (double)CONCAT44(uVar150,uVar149) * dVar159) +
               (double)CONCAT44(uVar197,uVar194) * dVar184 + local_7b8;
          uVar42 = 0;
          if ((int)uVar43 < (param_10->LocalTip).ArrayNum) {
            uVar42 = uVar44;
          }
          if (uVar42 == 0) {
            bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar35) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar194 = SUB84(local_918.W,0);
            uVar197 = (undefined4)((ulonglong)local_918.W >> 0x20);
            uVar149 = SUB84(local_918.Y,0);
            uVar150 = (undefined4)((ulonglong)local_918.Y >> 0x20);
            local_8e8._8_8_ = 0;
            local_8e8._0_8_ = local_918.W;
          }
          pFVar3 = (param_10->LocalTip).AllocatorInstance.Data;
          auVar97 = *(undefined1 (*) [16])(pFVar3 + lVar41 * 0x18);
          dVar151 = auVar97._0_8_;
          local_7b8 = *(double *)(pFVar3 + lVar41 * 0x18 + 0x10);
          auVar28._4_8_ = uVar173;
          auVar28._0_4_ = auVar97._4_4_;
          auVar147._0_8_ = auVar28._0_8_ << 0x20;
          auVar147._8_4_ = auVar97._8_4_;
          auVar147._12_4_ = auVar97._12_4_;
          dVar172 = auVar147._8_8_;
          dVar95 = local_7b8 * (double)CONCAT44(uVar150,uVar149) - dVar172 * local_918.Z;
          dVar95 = dVar95 + dVar95;
          dVar184 = dVar151 * local_918.Z - local_7b8 * local_918.X;
          dVar184 = dVar184 + dVar184;
          dVar159 = dVar172 * local_918.X - dVar151 * (double)CONCAT44(uVar150,uVar149);
          dVar159 = dVar159 + dVar159;
          uVar198 = SUB84(__real_3ff0000000000000,0);
          uVar199 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          local_7e8 = (dVar184 * local_918.X - dVar95 * (double)CONCAT44(uVar150,uVar149)) +
                      dVar159 * (double)CONCAT44(uVar197,uVar194) + local_7b8;
          uVar173 = (dVar159 * (double)CONCAT44(uVar150,uVar149) - dVar184 * local_918.Z) +
                    dVar95 * (double)local_8e8._0_8_ + dVar151;
          dStack_7f0 = (dVar95 * local_918.Z - dVar159 * local_918.X) +
                       dVar184 * (double)local_8e8._0_8_ + dVar172;
          dVar172 = (double)uVar173 * (double)uVar173 + dStack_7f0 * dStack_7f0 +
                    local_7e8 * local_7e8;
          if (dVar172 != __real_3ff0000000000000) {
            if (__real_3e45798ee0000000 <= dVar172) {
              local_6a0 = __real_3ff0000000000000 / SQRT(dVar172);
              dStack_7f0 = local_6a0 * dStack_7f0;
              local_7e8 = local_6a0 * local_7e8;
              uVar173 = (double)uVar173 * local_6a0;
            }
            else {
              local_7e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_7f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_7f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar173 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
          }
          dVar172 = (double)((fVar50 - fVar51) * fVar52 + fVar5);
          dVar184 = (double)uVar173 * local_8a0._s_0.X + dStack_7f0 * local_8a0._s_0.Y +
                    local_7e8 * local_8a0._s_0.Z;
          local_8a0._s_0.X =
               ((local_8a0._s_0.X - dVar184) - local_7e0._s_0.X) * dVar172 + local_7e0._s_0.X;
          local_8a0._s_0.Y =
               ((local_8a0._s_0.Y - dVar184) - local_7e0._s_0.Y) * dVar172 + local_7e0._s_0.Y;
          local_8a0._s_0.Z =
               ((local_8a0._s_0.Z - dVar184) - local_7e0._s_0.Z) * dVar172 + local_7e0._s_0.Z;
          FRigVMMathLibrary::FindQuatBetweenVectors
                    ((TQuat<double> *)local_5a8,(TVector<double> *)&local_8a0._s_0,
                     (TVector<double> *)&local_7e0._s_0);
          dVar95 = __real_3e45798ee0000000;
          dVar151 = local_598._0_8_;
          uVar194 = SUB84(__real_3e45798ee0000000,0);
          uVar197 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          dVar184 = local_5a8._0_8_;
          dVar172 = local_5a8._8_8_;
          auVar182._8_4_ = local_5a8._0_4_;
          auVar182._0_8_ = dVar184;
          auVar182._12_4_ = local_5a8._4_4_;
          dVar159 = local_598._8_8_;
          auVar87._8_4_ = local_598._8_4_;
          auVar87._0_8_ = dVar159;
          auVar87._12_4_ = local_598._12_4_;
          auVar88._8_4_ = local_598._0_4_;
          auVar88._0_8_ = dVar151;
          auVar88._12_4_ = local_598._4_4_;
          dVar167 = dVar184 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar159 * local_918.X +
                    local_918.Z * dVar172 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar151 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar189 = auVar182._8_8_ * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar87._8_8_ * local_918.Y +
                    local_918.W * dVar172 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar88._8_8_ * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar124._8_4_ = SUB84(dVar189,0);
          auVar124._0_8_ = dVar167;
          auVar124._12_4_ = (int)((ulonglong)dVar189 >> 0x20);
          auVar157._0_8_ =
               dVar172 * local_918.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          auVar157._8_8_ =
               dVar172 * local_918.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          local_6b0 = __real_3e45798ee0000000;
          dVar172 = dVar184 * local_918.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    local_918.Z * dVar159 + auVar157._0_8_ +
                    dVar151 * local_918.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar184 = dVar184 * local_918.X *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    local_918.W * dVar159 + auVar157._8_8_ +
                    dVar151 * local_918.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar89._8_4_ = SUB84(dVar184,0);
          auVar89._0_8_ = dVar172;
          auVar89._12_4_ = (int)((ulonglong)dVar184 >> 0x20);
          dVar151 = dVar167 * dVar167 + dVar172 * dVar172;
          dVar159 = auVar124._8_8_ * dVar189 + auVar89._8_8_ * dVar184;
          auVar90._8_4_ = SUB84(dVar159,0);
          auVar90._0_8_ = dVar151;
          auVar90._12_4_ = (int)((ulonglong)dVar159 >> 0x20);
          auVar91._0_8_ = auVar90._8_8_ + dVar151;
          auVar91._8_8_ = dVar151 + dVar159;
          auVar101 = sqrtpd(auVar157,auVar91);
          uVar47 = -(ulonglong)(__real_3e45798ee0000000 <= auVar91._0_8_);
          uVar48 = -(ulonglong)(__real_3e45798ee0000000 <= auVar91._8_8_);
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar101);
          uVar42 = (uint)(uVar47 >> 0x20);
          auVar166._0_8_ = (ulonglong)(auVar97._0_8_ * dVar167) & uVar47;
          uVar31 = uVar48 & (ulonglong)(auVar97._8_8_ * dVar189);
          auVar166._8_4_ = (undefined4)uVar31;
          uVar158 = (uint)(uVar48 >> 0x20);
          auVar166._12_4_ = (undefined4)(uVar31 >> 0x20);
          auVar125._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar125._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar125._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar125._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar101);
          auVar148._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar148._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar148._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar148._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_918.X = SUB168(auVar166 | auVar125,0);
          auVar126._0_8_ = (ulonglong)(auVar97._0_8_ * dVar172) & uVar47;
          uVar48 = uVar48 & (ulonglong)(auVar97._8_8_ * dVar184);
          auVar126._8_4_ = (undefined4)uVar48;
          auVar126._12_4_ = (undefined4)(uVar48 >> 0x20);
          if (__real_3f800000 <= fVar49) {
            fVar49 = __real_3f800000;
          }
          local_918.Y = SUB168(auVar166 | auVar125,8);
          local_918.Z = SUB168(auVar148 | auVar126,0);
          local_918.W = SUB168(auVar148 | auVar126,8);
          if (fVar49 <= 0.0) {
            fVar49 = 0.0;
          }
          pTVar40 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_408,&local_588,&local_918,(double)fVar49);
          dVar172 = pTVar40->X;
          dVar184 = pTVar40->Y;
          dVar151 = pTVar40->Z;
          dVar159 = pTVar40->W;
          local_6a8 = dVar95;
          dVar167 = dVar172 * dVar172 + dVar151 * dVar151;
          dVar189 = dVar184 * dVar184 + dVar159 * dVar159;
          auVar92._8_4_ = SUB84(dVar189,0);
          auVar92._0_8_ = dVar167;
          auVar92._12_4_ = (int)((ulonglong)dVar189 >> 0x20);
          auVar93._0_8_ = auVar92._8_8_ + dVar167;
          auVar93._8_8_ = dVar167 + dVar189;
          auVar97 = sqrtpd(auVar101,auVar93);
          uVar47 = -(ulonglong)(dVar95 <= auVar93._0_8_);
          uVar48 = -(ulonglong)(dVar95 <= auVar93._8_8_);
          auVar101 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar97);
          uVar42 = (uint)(uVar47 >> 0x20);
          uVar158 = (uint)(uVar48 >> 0x20);
          local_568._0_8_ = uVar47 & (ulonglong)(auVar101._0_8_ * dVar172);
          uVar31 = uVar48 & (ulonglong)(auVar101._8_8_ * dVar184);
          local_568._8_4_ = (undefined4)uVar31;
          local_568._12_4_ = (undefined4)(uVar31 >> 0x20);
          auVar127._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar127._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar127._8_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar127._12_4_ =
               ~uVar158 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_568 = local_568 | auVar127;
          auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar97);
          dVar172 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_558._0_4_ =
               ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          local_558._4_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          local_558._8_4_ = ~(uint)uVar48 & SUB84(dVar172,0);
          local_558._12_4_ = ~uVar158 & (uint)((ulonglong)dVar172 >> 0x20);
          auVar128._0_8_ = (ulonglong)(auVar97._0_8_ * dVar151) & uVar47;
          uVar48 = (ulonglong)(auVar97._8_8_ * dVar159) & uVar48;
          auVar128._8_4_ = (undefined4)uVar48;
          auVar128._12_4_ = (undefined4)(uVar48 >> 0x20);
          local_558 = local_558 | auVar128;
          auVar29._4_8_ = auVar128._8_8_;
          auVar29._0_4_ = local_568._4_4_;
          auVar129._0_8_ = auVar29._0_8_ << 0x20;
          auVar129._8_4_ = local_568._8_4_;
          auVar129._12_4_ = local_568._12_4_;
          auVar30._4_8_ = dVar172;
          auVar30._0_4_ = local_558._4_4_;
          auVar94._0_8_ = auVar30._0_8_ << 0x20;
          auVar94._8_4_ = local_558._8_4_;
          auVar94._12_4_ = local_558._12_4_;
          local_918.Y = auVar129._8_8_;
          local_918.W = auVar94._8_8_;
          local_918.Z = local_558._0_8_;
          local_918.X = local_568._0_8_;
        }
        uVar42 = 0;
        if ((int)uVar43 < (param_10->Items).ArrayNum) {
          uVar42 = uVar44;
        }
        local_3e8.Rotation.XY.m128d_f64[0] = local_918.X;
        local_3e8.Rotation.XY.m128d_f64[1] = local_918.Y;
        local_3e8.Rotation.ZW.m128d_f64[0] = local_918.Z;
        local_3e8.Rotation.ZW.m128d_f64[1] = local_918.W;
        if ((uVar42 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = local_888;
        uVar6 = *(ushort *)((this->AllocatorInstance).Data + lVar41 * 0x20 + 0xc);
        uVar42 = (uint)uVar6;
        if (uVar6 == 0xffff) {
          uVar42 = 0xffffffff;
        }
        local_4c8.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
        local_4c8.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
        local_4c8.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
        local_4c8.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
        local_4c8.Translation.XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
        local_4c8.Translation.XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
        local_4c8.Translation.ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
        local_4c8.Translation.ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
        local_4c8.Scale3D.XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
        local_4c8.Scale3D.XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
        local_4c8.Scale3D.ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
        local_4c8.Scale3D.ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex(local_888,uVar42,&local_4c8,false,true,false,false)
        ;
        uVar43 = uVar43 + 1;
        lVar41 = lVar41 + 1;
        local_8f0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(local_8f0->AllocatorInstance).Data + 4);
        local_8f8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)local_8f8 + 0x18);
        uVar149 = (undefined4)__real_4022666660000000;
        uVar150 = (undefined4)((ulonglong)__real_4022666660000000 >> 0x20);
        local_388.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
        local_388.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
        local_388.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
        local_388.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
        local_388.Translation.XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
        local_388.Translation.XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
        local_388.Translation.ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
        local_388.Translation.ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
        local_388.Scale3D.XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
        local_388.Scale3D.XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
        local_388.Scale3D.ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
        local_388.Scale3D.ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
        iVar36 = (param_10->Items).ArrayNum;
      } while ((int)uVar43 < iVar36);
    }
    pFVar45 = local_8b8;
    dVar184 = (param_10->Time).field0_0x0._s_0.Y;
    dVar95 = (param_10->Time).field0_0x0._s_0.Z;
    dVar172 = *(double *)&local_8b8->field_0x20;
    dVar151 = (local_848->field0_0x0)._s_0.Y;
    dVar159 = (local_848->field0_0x0)._s_0.Z;
    (param_10->Time).field0_0x0._s_0.X =
         dVar172 * (local_848->field0_0x0)._s_0.X + (param_10->Time).field0_0x0._s_0.X;
    (param_10->Time).field0_0x0._s_0.Y = dVar172 * dVar151 + dVar184;
    (param_10->Time).field0_0x0._s_0.Z = dVar172 * dVar159 + dVar95;
    if ((*(longlong *)&local_8b8->field_0x58 != 0) && (param_8)) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&param_10->HierarchyLine,(param_10->Items).ArrayNum,Default);
      pTVar1 = local_840;
      iVar36 = (param_10->Items).ArrayNum;
      uVar43 = 0;
      if (0 < iVar36) {
        lVar41 = 0;
        lVar46 = 0;
        local_8f8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
        do {
          uVar42 = 0;
          if ((int)uVar43 < iVar36) {
            uVar42 = ~uVar43 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar42 = 0xffffffff;
          uVar6 = *(ushort *)((this->AllocatorInstance).Data + lVar46 + 0xc);
          if (uVar6 != 0xffff) {
            uVar42 = (uint)uVar6;
          }
          URigHierarchy::GetGlobalTransformByIndex(this_00,&local_1a8,uVar42,false);
          dVar95 = local_1a8.Translation.ZW.m128d_f64[0];
          dVar184 = local_1a8.Translation.XY.m128d_f64[1];
          dVar172 = local_1a8.Translation.XY.m128d_f64[0];
          local_508 = local_1a8.Translation.ZW.m128d_f64[0];
          local_518 = local_1a8.Translation.XY.m128d_f64[0];
          dStack_510 = local_1a8.Translation.XY.m128d_f64[1];
          uVar42 = 0;
          if ((int)uVar43 < pTVar1->ArrayNum) {
            uVar42 = ~uVar43 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (pTVar1->AllocatorInstance).Data;
          uVar43 = uVar43 + 1;
          local_8f8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(local_8f8->AllocatorInstance).Data + 1);
          lVar46 = lVar46 + 0x20;
          pFVar3 = pFVar8 + lVar41;
          *(double *)pFVar3 = dVar172;
          *(double *)(pFVar3 + 8) = dVar184;
          *(double *)(pFVar8 + lVar41 + 0x10) = dVar95;
          lVar41 = lVar41 + 0x18;
          iVar36 = (param_10->Items).ArrayNum;
          pFVar45 = local_8b8;
          this_04 = local_838;
        } while ((int)uVar43 < iVar36);
      }
      local_740.DataPtr = (TVector<double> *)(param_10->HierarchyLine).AllocatorInstance.Data;
      pFVar9 = *(FRigVMDrawInterface **)&pFVar45->field_0x58;
      iVar36 = (param_10->HierarchyLine).ArrayNum;
      if ((iVar36 < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar34 = local_830;
      fVar49 = __real_bf800000;
      local_740.ArrayNum = iVar36;
      FRigVMDrawInterface::DrawLineStrip
                (pFVar9,local_830,&local_740,&FLinearColor::Yellow,0.0,SDPG_Foreground,
                 __real_bf800000);
      pFVar9 = *(FRigVMDrawInterface **)&pFVar45->field_0x58;
      local_5f8._0_8_ = ___xmm_3f8000003f8000003e99999a3e99999a;
      local_5f8._8_8_ = _UNK_150f57cb8;
      local_730.DataPtr = (TVector<double> *)(param_10->VelocityLines).AllocatorInstance.Data;
      local_730.ArrayNum = (param_10->VelocityLines).ArrayNum;
      if ((local_730.ArrayNum < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FRigVMDrawInterface::DrawLines
                (pFVar9,pTVar34,&local_730,(FLinearColor *)&local_5f8._s_0,0.0,SDPG_Foreground,
                 fVar49);
      local_750.DataPtr = (TVector<double> *)(this_04->AllocatorInstance).Data;
      pFVar9 = *(FRigVMDrawInterface **)&pFVar45->field_0x58;
      local_750.ArrayNum = this_04->ArrayNum;
      if ((local_750.ArrayNum < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FRigVMDrawInterface::DrawPoints
                (pFVar9,pTVar34,&local_750,__real_40400000,&FLinearColor::Blue,SDPG_Foreground,
                 fVar49);
    }
  }
  return;
}

