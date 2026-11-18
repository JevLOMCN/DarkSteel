// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4d2a70

UScriptStruct * __cdecl FRigUnit_SpringIK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringIK,(UObject *)pUVar1,
                         L"RigUnit_SpringIK");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d2b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_SpringIK::GetExecuteContextStruct(FRigUnit_SpringIK *this)

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

// Execute @ 14a4d3330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SpringIK::Execute(FRigUnit_SpringIK *this)

{
  undefined1 auStackY_318 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_318;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->StartBone,&this->EndBone,
                this->HierarchyStrength,this->EffectorStrength,this->EffectorRatio,
                this->RootStrength,this->RootRatio,this->Damping,&this->PoleVector,
                this->bFlipPolePlane,this->PoleVectorKind,&this->PoleVectorSpace,&this->PrimaryAxis,
                &this->SecondaryAxis,this->bLiveSimulation,this->Iterations,
                this->bLimitLocalPosition,this->bPropagateToChildren,&this->DebugSettings,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_SpringIK @ 14a516200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_SpringIK * __thiscall FRigUnit_SpringIK::FRigUnit_SpringIK(FRigUnit_SpringIK *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  uint local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  
  (this->StartBone).ComparisonIndex = 0;
  (this->StartBone).Number = 0;
  (this->EndBone).ComparisonIndex = 0;
  (this->EndBone).Number = 0;
  (this->PoleVectorSpace).ComparisonIndex = 0;
  (this->PoleVectorSpace).Number = 0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_SpringIK__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar8;
  (this->DebugSettings).bEnabled = false;
  (this->DebugSettings).Scale = 1.0;
  (this->DebugSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FRigUnit_SpringIK_WorkData::FRigUnit_SpringIK_WorkData(&this->WorkData);
  (this->PoleVectorSpace).ComparisonIndex = 0;
  (this->PoleVectorSpace).Number = 0;
  (this->EndBone).ComparisonIndex = 0;
  (this->EndBone).Number = 0;
  (this->StartBone).ComparisonIndex = 0;
  (this->StartBone).Number = 0;
  this->HierarchyStrength = 256.0;
  this->RootStrength = 64.0;
  this->EffectorStrength = 64.0;
  this->RootRatio = 0.5;
  this->EffectorRatio = 0.5;
  this->Damping = 0.4;
  (this->PoleVector).field0_0x0._s_0.X = 0.0;
  (this->PoleVector).field0_0x0._s_0.Y = 0.0;
  (this->PoleVector).field0_0x0._s_0.Z = 1.0;
  this->bFlipPolePlane = false;
  this->PoleVectorKind = Direction;
  (this->PrimaryAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Y = 1.0;
  (this->SecondaryAxis).field0_0x0._s_0.Z = 0.0;
  this->bLiveSimulation = false;
  this->Iterations = 10;
  this->bLimitLocalPosition = true;
  _Var14 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var10 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var9 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  this->bPropagateToChildren = true;
  local_a8 = local_a8 & 0xffffff00;
  uStack_a0 = FLinearColor::Blue.field0_0x0._0_8_;
  uStack_98 = FLinearColor::Blue.field0_0x0._8_8_;
  (this->DebugSettings).bEnabled = (bool)(char)local_a8;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_a8 >> 8);
  (this->DebugSettings).Scale = 1.0;
  *(undefined8 *)&(this->DebugSettings).Color.field0_0x0 = uStack_a0;
  *(undefined8 *)((longlong)&(this->DebugSettings).Color.field0_0x0 + 8) = uStack_98;
  (this->DebugSettings)._padding_ = lStack_90;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var9.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var10.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var11.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var12.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var13.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var14.m128d_f64;
  return this;
}

// Execute @ 14a52e540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SpringIK::Execute(FRigUnit_SpringIK *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->StartBone,&this->EndBone,this->HierarchyStrength,
                this->EffectorStrength,this->EffectorRatio,this->RootStrength,this->RootRatio,
                this->Damping,&this->PoleVector,this->bFlipPolePlane,this->PoleVectorKind,
                &this->PoleVectorSpace,&this->PrimaryAxis,&this->SecondaryAxis,this->bLiveSimulation
                ,this->Iterations,this->bLimitLocalPosition,this->bPropagateToChildren,
                &this->DebugSettings,&this->WorkData);
  return;
}

// RigVMExecute @ 14a5579f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SpringIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EControlRigVectorKind EVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  FName *pFVar14;
  FName *pFVar15;
  float *pfVar16;
  FRigVMMemoryHandle *pFVar17;
  TVector<double> *pTVar18;
  uchar *puVar19;
  EControlRigVectorKind *pEVar20;
  FName *pFVar21;
  TVector<double> *pTVar22;
  TVector<double> *pTVar23;
  int *piVar24;
  FRigUnit_SpringIK_DebugSettings *pFVar25;
  FRigVMSlice *pFVar26;
  FRigUnit_SpringIK_WorkData *pFVar27;
  FControlRigExecuteContext *pFVar28;
  
  iVar11 = param_2->ArrayNum;
  if (iVar11 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar14 = (FName *)pFVar17->Ptr;
  }
  else {
    pFVar14 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  if (iVar11 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar15 = (FName *)pFVar17[1].Ptr;
  }
  else {
    pFVar15 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar17[1].PropertyPath,pFVar17[1].Ptr,pFVar17[1].Property);
  }
  if (iVar11 < 3) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar16 = (float *)pFVar17[2].Ptr;
  }
  else {
    pfVar16 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar17[2].PropertyPath,pFVar17[2].Ptr,pFVar17[2].Property);
  }
  fVar1 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  fVar2 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  fVar3 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  fVar4 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  fVar5 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  fVar6 = *pfVar16;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  bVar13 = (bool)*puVar19;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pEVar20 = FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  EVar7 = *pEVar20;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar21 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pTVar22 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pTVar23 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  bVar8 = (bool)*puVar19;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xf);
  piVar24 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  iVar11 = *piVar24;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x10);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  bVar9 = (bool)*puVar19;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x11);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1);
  bVar10 = (bool)*puVar19;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x12);
  pFVar25 = (FRigUnit_SpringIK_DebugSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar17,true,-1)
  ;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x13);
  pFVar26 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar27 = (FRigUnit_SpringIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar17,false,pFVar26->Offset + pFVar26->Index);
  pFVar28 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar28,pFVar14,pFVar15,fVar1,fVar2,fVar3,fVar4,fVar5,fVar6,pTVar18,bVar13,EVar7,
                pFVar21,pTVar22,pTVar23,bVar8,iVar11,bVar9,bVar10,pFVar25,pFVar27);
  return;
}

// StaticExecute @ 14a599730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SpringIK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,
          TVector<double> *param_10,bool param_11,EControlRigVectorKind param_12,FName *param_13,
          TVector<double> *param_14,TVector<double> *param_15,bool param_16,int param_17,
          bool param_18,bool param_19,FRigUnit_SpringIK_DebugSettings *param_20,
          FRigUnit_SpringIK_WorkData *param_21)

{
  int *piVar1;
  TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_> *pTVar3;
  FLinearColor *pFVar4;
  ushort uVar5;
  URigHierarchy *this;
  FCachedRigElement *pFVar6;
  TTransform<double> *pTVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
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
  double *pdVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  FControlRigExecuteContext *pFVar29;
  FRigUnit_SpringIK_DebugSettings *pFVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  FRigElementKey *pFVar35;
  TVector<double> *pTVar36;
  ulonglong uVar37;
  TQuat<double> *pTVar38;
  FRigVMSimPoint *pFVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  FScriptContainerElement *pFVar46;
  uint uVar47;
  FCRSimPointContainer *this_00;
  ulonglong uVar48;
  FScriptContainerElement *pFVar49;
  ulonglong uVar50;
  float fVar51;
  double dVar52;
  double dVar53;
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
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  double dVar83;
  double dVar84;
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
  __m128 _Var106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar109;
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  double dVar116;
  undefined8 uVar118;
  __m128d in_XMM4;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar117;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  double dVar131;
  double dVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  double dVar132;
  double dVar141;
  undefined4 uVar142;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined4 uVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined4 uVar152;
  uint uVar153;
  uint uVar154;
  double dVar155;
  undefined4 uVar156;
  undefined4 uVar157;
  undefined1 unaff_XMM12 [16];
  undefined4 uVar158;
  undefined4 uVar159;
  float fVar160;
  float fVar161;
  undefined1 auStackY_db8 [32];
  longlong local_d68;
  longlong local_d60;
  undefined1 local_d58 [8];
  int *local_d50;
  uint local_d48;
  uint uStack_d44;
  float fStack_d40;
  float fStack_d3c;
  TVector<double>_u_0 local_d38;
  TVector<double>_u_0 local_d20;
  TVector<double>_u_0 local_d08;
  TVector<double>_u_0 local_cf0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  FControlRigExecuteContext *local_cc8;
  double local_cb8;
  double dStack_cb0;
  double local_ca8;
  double dStack_ca0;
  FCachedRigElement local_c98;
  double local_c78;
  double dStack_c70;
  undefined8 local_c68;
  undefined8 local_c58;
  undefined8 uStack_c50;
  double local_c48;
  double local_c38;
  double dStack_c30;
  undefined8 local_c28;
  TVector<double>_u_0 local_c20;
  FRigElementKey local_c08;
  double local_bf8;
  double dStack_bf0;
  undefined8 local_be8;
  FCachedRigElement local_be0;
  FRigUnit_SpringIK_DebugSettings *local_bc0;
  TVector<double>_u_0 local_bb8;
  FRigElementKey local_ba0;
  FRigElementKey local_b94;
  FRigElementKey local_b88;
  FRigElementKey local_b78;
  FRigElementKey local_b68;
  TVector<double>_u_0 local_b58;
  undefined1 local_b40 [16];
  double local_b30;
  TVector<double>_u_0 local_b28;
  TVector<double>_u_0 local_b10;
  undefined1 local_af8 [16];
  double local_ae8;
  undefined4 local_ad8;
  uint uStack_ad4;
  uint uStack_ad0;
  undefined4 uStack_acc;
  double local_ac8;
  double dStack_ac0;
  double local_ab8;
  double dStack_ab0;
  double dStack_aa8;
  double dStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  double local_a88;
  TVector<double>_u_0 local_a78;
  double local_a60;
  double dStack_a58;
  double local_a50;
  double local_a48;
  double dStack_a40;
  double local_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  double local_a20;
  double dStack_a18;
  double local_a10;
  double dStack_a08;
  double dStack_a00;
  double dStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  double local_9e0;
  double dStack_9d8;
  double local_9d0;
  double dStack_9c8;
  double dStack_9c0;
  double dStack_9b8;
  TQuat<double> local_9a8;
  double local_988;
  undefined1 local_980 [16];
  double local_970;
  undefined1 local_968 [16];
  double local_958;
  double local_950;
  double local_948;
  double local_940;
  undefined1 local_938 [16];
  double local_928;
  double local_920;
  double local_918;
  double local_910;
  undefined8 local_908;
  TQuat<double> local_8f8;
  TQuat<double> local_8d8;
  TQuat<double> local_8b8;
  undefined1 local_898 [16];
  double local_888;
  double local_880 [2];
  double local_870;
  double local_868 [2];
  double local_858;
  undefined1 local_850 [16];
  double local_840;
  double local_828;
  double local_820;
  double dStack_818;
  double local_810;
  undefined1 local_808 [16];
  double local_7f8;
  double local_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  FRigElementKey local_7c0;
  double local_7b0;
  double dStack_7a8;
  double local_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  double local_780;
  double dStack_778;
  double local_770;
  double local_768;
  double dStack_760;
  double local_758;
  double local_740;
  double local_738 [2];
  double local_728;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  double local_710;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  double local_6f8;
  FRigElementKey local_6f0 [2];
  TTransform<double> local_6d8;
  TVector<double> local_678;
  TVector<double> local_660;
  TVector<double> local_648;
  TVector<double> local_630;
  TVector<double> local_618;
  TVector<double> local_600;
  TQuat<double> local_5e8;
  FRigVMSimPoint local_5c8;
  FRigVMSimPoint local_588;
  FRigVMSimPoint local_548;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar161 = __real_322bcc77;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_db8;
  this = param_1->Hierarchy;
  local_bc0 = param_20;
  local_cd8 = param_10;
  if (this != (URigHierarchy *)0x0) {
    local_cc8 = param_1;
    if ((param_21->CachedBones).ArrayNum == 0) {
      (**(code **)((param_21->Simulation)._padding_ + 8))(&param_21->Simulation);
      *(undefined4 *)&(param_21->Simulation)._padding_ = 0x3c888889;
      local_ba0.Type = Bone;
      local_ba0.Name = *param_3;
      iVar32 = URigHierarchy::GetIndex(this,&local_ba0,true);
      if (iVar32 != -1) {
        local_b94.Type = Bone;
        local_b94.Name = *param_2;
        iVar33 = URigHierarchy::GetIndex(this,&local_b94,true);
        if (iVar33 == iVar32) {
          return;
        }
        piVar1 = &(param_21->CachedBones).ArrayMax;
        do {
          URigHierarchy::GetKey(this,&local_c08,iVar32);
          local_c98.Key._0_4_ = local_c98.Key._0_4_ & 0xffffff00;
          local_c98.Key.Name.ComparisonIndex.Value = 0;
          local_c98.Key.Name.Number = 0;
          local_c98.Index = 0xffff;
          local_c98.ContainerVersion = -1;
          local_c98.Element = (FRigBaseElement *)0x0;
          FCachedRigElement::UpdateCache(&local_c98,&local_c08,this);
          pFVar6 = (FCachedRigElement *)(param_21->CachedBones).AllocatorInstance.Data;
          if (((pFVar6 <= &local_c98) && (&local_c98 < pFVar6 + *piVar1)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar34 = (param_21->CachedBones).ArrayNum;
          if (iVar34 == *piVar1) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)param_21,piVar1);
          }
          (param_21->CachedBones).ArrayNum = iVar34 + 1;
          pFVar45 = (param_21->CachedBones).AllocatorInstance.Data;
          pFVar46 = pFVar45 + (longlong)iVar34 * 0x20;
          *(ulonglong *)pFVar46 =
               CONCAT44(local_c98.Key.Name.ComparisonIndex.Value,local_c98.Key._0_4_);
          *(ulonglong *)(pFVar46 + 8) =
               CONCAT26(local_c98._14_2_,CONCAT24(local_c98.Index,local_c98.Key.Name.Number));
          pFVar45 = pFVar45 + (longlong)iVar34 * 0x20 + 0x10;
          *(ulonglong *)pFVar45 = CONCAT44(local_c98._20_4_,local_c98.ContainerVersion);
          *(FRigBaseElement **)(pFVar45 + 8) = local_c98.Element;
          if (iVar32 == iVar33) break;
          local_b88.Type = local_c08.Type;
          local_b88._1_3_ = local_c08._1_3_;
          local_b88.Name.ComparisonIndex.Value = local_c08.Name.ComparisonIndex.Value;
          local_b88.Name.Number = local_c08.Name.Number;
          pFVar35 = URigHierarchy::GetFirstParent(this,local_6f0,&local_b88);
          iVar32 = URigHierarchy::GetIndex(this,pFVar35,true);
        } while (iVar32 != -1);
      }
      iVar32 = (param_21->CachedBones).ArrayNum;
      if (iVar32 < 3) {
        return;
      }
      AlgoImpl::Reverse<FCachedRigElement>
                ((FCachedRigElement *)(param_21->CachedBones).AllocatorInstance.Data,iVar32);
      uVar28 = _UNK_1520d77f8;
      uVar118 = ___xmm_000000003c23d70a000000003f800000;
      fVar160 = __real_3f800000;
      uVar37 = 0;
      if (0 < (param_21->CachedBones).ArrayNum + -1) {
        pTVar2 = &(param_21->Simulation).Points;
        pTVar3 = &(param_21->Simulation).Springs;
        unaff_XMM12 = ZEXT416((uint)param_6);
        local_d60 = 0;
        uVar48 = uVar37;
        do {
          dStack_9c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_9c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_9e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_9d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_9f0 = uVar118;
          uStack_9e8 = uVar28;
          dStack_9b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_9d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          pFVar46 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar46 <= (FScriptContainerElement *)&local_9f0) &&
              ((FScriptContainerElement *)&local_9f0 <
               pFVar46 + (longlong)(param_21->Simulation).Points.ArrayMax * 0x40)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar32 = (param_21->Simulation).Points.ArrayNum;
          piVar1 = &(param_21->Simulation).Points.ArrayMax;
          if (iVar32 == *piVar1) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&pTVar2->AllocatorInstance,piVar1);
          }
          (param_21->Simulation).Points.ArrayNum = iVar32 + 1;
          pFVar46 = (pTVar2->AllocatorInstance).Data;
          lVar41 = (longlong)iVar32 * 0x40;
          *(undefined8 *)(pFVar46 + lVar41) = local_9f0;
          *(undefined8 *)(pFVar46 + lVar41 + 8) = uStack_9e8;
          *(double *)(pFVar46 + lVar41 + 0x10) = local_9e0;
          *(double *)(pFVar46 + lVar41 + 0x10 + 8) = dStack_9d8;
          *(double *)(pFVar46 + lVar41 + 0x20) = local_9d0;
          *(double *)(pFVar46 + lVar41 + 0x20 + 8) = dStack_9c8;
          *(double *)(pFVar46 + lVar41 + 0x30) = dStack_9c0;
          *(double *)(pFVar46 + lVar41 + 0x30 + 8) = dStack_9b8;
          uVar44 = (uint)uVar48;
          uVar47 = 0;
          if ((int)uVar44 < (param_21->CachedBones).ArrayNum) {
            uVar47 = ~uVar44 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar47 = 0xffffffff;
          uVar5 = *(ushort *)((param_21->CachedBones).AllocatorInstance.Data + local_d60 + 0xc);
          if (uVar5 != 0xffff) {
            uVar47 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_328,uVar47,true);
          uVar43 = uVar44 + 1;
          uVar47 = 0;
          if ((int)uVar43 < (param_21->CachedBones).ArrayNum) {
            uVar47 = ~uVar43 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar47 = 0xffffffff;
          uVar5 = *(ushort *)((param_21->CachedBones).AllocatorInstance.Data + local_d60 + 0x2c);
          if (uVar5 != 0xffff) {
            uVar47 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_508,uVar47,true);
          local_7b0 = local_328.Translation.XY.m128d_f64[0];
          dStack_7a8 = local_328.Translation.XY.m128d_f64[1];
          local_798 = local_508.Translation.XY.m128d_f64[0];
          dStack_790 = local_508.Translation.XY.m128d_f64[1];
          local_7a0 = local_328.Translation.ZW.m128d_f64[0];
          local_788 = local_508.Translation.ZW.m128d_f64[0];
          in_XMM4.m128d_f64[0] =
               (local_328.Translation.XY.m128d_f64[1] - local_508.Translation.XY.m128d_f64[1]) *
               (local_328.Translation.XY.m128d_f64[1] - local_508.Translation.XY.m128d_f64[1]) +
               (local_328.Translation.XY.m128d_f64[0] - local_508.Translation.XY.m128d_f64[0]) *
               (local_328.Translation.XY.m128d_f64[0] - local_508.Translation.XY.m128d_f64[0]) +
               (local_328.Translation.ZW.m128d_f64[0] - local_508.Translation.ZW.m128d_f64[0]) *
               (local_328.Translation.ZW.m128d_f64[0] - local_508.Translation.ZW.m128d_f64[0]);
          in_XMM4.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
          fStack_d3c = (float)SQRT(in_XMM4.m128d_f64[0]);
          pFVar46 = (pTVar3->AllocatorInstance).Data;
          local_d48 = uVar44;
          uStack_d44 = uVar43;
          fStack_d40 = param_4;
          if (((pFVar46 <= (FScriptContainerElement *)&local_d48) &&
              ((FScriptContainerElement *)&local_d48 <
               pFVar46 + (longlong)(param_21->Simulation).Springs.ArrayMax * 0x10)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar32 = (param_21->Simulation).Springs.ArrayNum;
          if (iVar32 == (param_21->Simulation).Springs.ArrayMax) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar3->AllocatorInstance,
                                &(param_21->Simulation).Springs.ArrayMax);
          }
          (param_21->Simulation).Springs.ArrayNum = iVar32 + 1;
          pFVar46 = (pTVar3->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
          *(ulonglong *)pFVar46 = CONCAT44(uStack_d44,local_d48);
          *(ulonglong *)(pFVar46 + 8) = CONCAT44(fStack_d3c,fStack_d40);
          if ((int)uVar44 < 2) {
            if (0 < (int)uVar44) goto LAB_14a599f81;
          }
          else {
            if ((fVar161 < param_7) && (fVar161 < param_4)) {
              if (((param_21->CachedBones).ArrayNum < 1) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar47 = 0xffffffff;
              uVar5 = *(ushort *)((param_21->CachedBones).AllocatorInstance.Data + 0xc);
              if (uVar5 != 0xffff) {
                uVar47 = (uint)uVar5;
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_3e8,uVar47,true);
              local_508.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
              local_508.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
              local_508.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
              local_508.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
              local_508.Scale3D.XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
              local_508.Scale3D.XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
              local_508.Scale3D.ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
              local_508.Scale3D.ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
              local_770 = local_328.Translation.ZW.m128d_f64[0];
              local_758 = local_3e8.Translation.ZW.m128d_f64[0];
              local_780 = local_328.Translation.XY.m128d_f64[0];
              dStack_778 = local_328.Translation.XY.m128d_f64[1];
              uStack_d44 = 0;
              local_508.Translation.XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
              local_508.Translation.XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
              local_768 = local_3e8.Translation.XY.m128d_f64[0];
              dStack_760 = local_3e8.Translation.XY.m128d_f64[1];
              fStack_d40 = param_7;
              local_508.Translation.ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
              local_508.Translation.ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
              fVar51 = param_8;
              if (fVar160 <= param_8) {
                fVar51 = fVar160;
              }
              if (fVar51 <= 0.0) {
                fVar51 = 0.0;
              }
              fStack_d3c = (float)(SQRT((local_328.Translation.XY.m128d_f64[1] -
                                        local_3e8.Translation.XY.m128d_f64[1]) *
                                        (local_328.Translation.XY.m128d_f64[1] -
                                        local_3e8.Translation.XY.m128d_f64[1]) +
                                        (local_328.Translation.XY.m128d_f64[0] -
                                        local_3e8.Translation.XY.m128d_f64[0]) *
                                        (local_328.Translation.XY.m128d_f64[0] -
                                        local_3e8.Translation.XY.m128d_f64[0]) +
                                        (local_328.Translation.ZW.m128d_f64[0] - local_758) *
                                        (local_328.Translation.ZW.m128d_f64[0] - local_758)) *
                                  (double)fVar51);
              pFVar46 = (pTVar3->AllocatorInstance).Data;
              in_XMM4.m128d_f64 = local_3e8.Translation.ZW.m128d_f64;
              local_d48 = uVar44;
              if (((pFVar46 <= (FScriptContainerElement *)&local_d48) &&
                  ((FScriptContainerElement *)&local_d48 <
                   pFVar46 + (longlong)(param_21->Simulation).Springs.ArrayMax * 0x10)) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar31)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar32 = (param_21->Simulation).Springs.ArrayNum;
              if (iVar32 == (param_21->Simulation).Springs.ArrayMax) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar3->AllocatorInstance,
                                    &(param_21->Simulation).Springs.ArrayMax);
              }
              (param_21->Simulation).Springs.ArrayNum = iVar32 + 1;
              pFVar46 = (pTVar3->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
              *(ulonglong *)pFVar46 = CONCAT44(uStack_d44,local_d48);
              *(ulonglong *)(pFVar46 + 8) = CONCAT44(fStack_d3c,fStack_d40);
            }
LAB_14a599f81:
            iVar32 = (param_21->CachedBones).ArrayNum;
            if ((((int)uVar44 < iVar32 + -2) && (fVar161 < param_5)) && (fVar161 < param_4)) {
              uVar47 = iVar32 - 1;
              local_d50 = (int *)CONCAT44(local_d50._4_4_,uVar47);
              uVar40 = 0;
              if ((int)uVar47 < iVar32) {
                uVar40 = ~uVar47 >> 0x1f;
              }
              if (uVar40 == 0) {
                bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar31) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar47 = (uint)local_d50;
              }
              uVar40 = 0xffffffff;
              uVar5 = *(ushort *)
                       ((param_21->CachedBones).AllocatorInstance.Data +
                       (longlong)(int)uVar47 * 0x20 + 0xc);
              if (uVar5 != 0xffff) {
                uVar40 = (uint)uVar5;
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_388,uVar40,true);
              local_508.Rotation.ZW.m128d_f64[0] = local_388.Rotation.ZW.m128d_f64[0];
              local_508.Rotation.ZW.m128d_f64[1] = local_388.Rotation.ZW.m128d_f64[1];
              local_508.Scale3D.ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
              local_508.Scale3D.ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
              auVar12._4_8_ = local_388.Scale3D.ZW.m128d_f64[1];
              auVar12._0_4_ = (int)((ulonglong)local_328.Translation.XY.m128d_f64[0] >> 0x20);
              auVar56._0_8_ = auVar12._0_8_ << 0x20;
              auVar56._8_4_ = SUB84(local_328.Translation.XY.m128d_f64[1],0);
              auVar56._12_4_ = (int)((ulonglong)local_328.Translation.XY.m128d_f64[1] >> 0x20);
              local_508.Rotation.XY.m128d_f64[0] = local_388.Rotation.XY.m128d_f64[0];
              local_508.Rotation.XY.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
              local_508.Scale3D.XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
              local_508.Scale3D.XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
              auVar13._4_8_ = local_388.Scale3D.XY.m128d_f64[1];
              auVar13._0_4_ = local_388.Translation.XY.m128d_f64[0]._4_4_;
              auVar90._0_8_ = auVar13._0_8_ << 0x20;
              auVar90._8_4_ = local_388.Translation.XY.m128d_f64[1]._0_4_;
              auVar90._12_4_ = local_388.Translation.XY.m128d_f64[1]._4_4_;
              dVar82 = auVar56._8_8_ - auVar90._8_8_;
              local_508.Translation.XY.m128d_f64[0] = local_388.Translation.XY.m128d_f64[0];
              local_508.Translation.XY.m128d_f64[1] = local_388.Translation.XY.m128d_f64[1];
              local_508.Translation.ZW.m128d_f64[1] = local_388.Translation.ZW.m128d_f64[1];
              local_508.Translation.ZW.m128d_f64[0] = local_388.Translation.ZW.m128d_f64[0];
              fVar51 = param_6;
              if (fVar160 <= param_6) {
                fVar51 = fVar160;
              }
              uStack_d44 = (param_21->CachedBones).ArrayNum - 1;
              dVar109 = local_328.Translation.XY.m128d_f64[0] -
                        local_388.Translation.XY.m128d_f64[0];
              local_740 = local_328.Translation.ZW.m128d_f64[0];
              if (fVar51 <= 0.0) {
                fVar51 = 0.0;
              }
              fStack_d40 = param_5;
              local_738[0] = local_388.Translation.XY.m128d_f64[0];
              local_738[1] = local_388.Translation.XY.m128d_f64[1];
              in_XMM4.m128d_f64[0] =
                   (local_328.Translation.ZW.m128d_f64[0] - local_388.Translation.ZW.m128d_f64[0]) *
                   (local_328.Translation.ZW.m128d_f64[0] - local_388.Translation.ZW.m128d_f64[0]);
              in_XMM4.m128d_f64[1] = local_328.Translation.ZW.m128d_f64[1];
              local_728 = local_388.Translation.ZW.m128d_f64[0];
              fStack_d3c = (float)(SQRT(dVar82 * dVar82 + dVar109 * dVar109 + in_XMM4.m128d_f64[0])
                                  * (double)fVar51);
              pFVar46 = (pTVar3->AllocatorInstance).Data;
              local_d48 = uVar44;
              if (((pFVar46 <= (FScriptContainerElement *)&local_d48) &&
                  ((FScriptContainerElement *)&local_d48 <
                   pFVar46 + (longlong)(param_21->Simulation).Springs.ArrayMax * 0x10)) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar31)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar32 = (param_21->Simulation).Springs.ArrayNum;
              if (iVar32 == (param_21->Simulation).Springs.ArrayMax) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar3->AllocatorInstance,
                                    &(param_21->Simulation).Springs.ArrayMax);
              }
              (param_21->Simulation).Springs.ArrayNum = iVar32 + 1;
              pFVar46 = (pTVar3->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
              *(ulonglong *)pFVar46 = CONCAT44(uStack_d44,local_d48);
              *(ulonglong *)(pFVar46 + 8) = CONCAT44(fStack_d3c,fStack_d40);
            }
          }
          uVar48 = (ulonglong)uVar43;
          local_d60 = local_d60 + 0x20;
        } while ((int)uVar43 < (param_21->CachedBones).ArrayNum + -1);
      }
      dStack_a08 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_a00 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_a20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_a18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_a30 = uVar118;
      uStack_a28 = uVar28;
      dStack_9f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_a10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      if (((pFVar46 <= (FScriptContainerElement *)&local_a30) &&
          ((FScriptContainerElement *)&local_a30 <
           pFVar46 + (longlong)(param_21->Simulation).Points.ArrayMax * 0x40)) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar32 = (param_21->Simulation).Points.ArrayNum;
      piVar1 = &(param_21->Simulation).Points.ArrayMax;
      if (iVar32 == *piVar1) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&(param_21->Simulation).Points.AllocatorInstance,piVar1);
      }
      (param_21->Simulation).Points.ArrayNum = iVar32 + 1;
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      lVar41 = (longlong)iVar32 * 0x40;
      *(undefined8 *)(pFVar46 + lVar41) = local_a30;
      *(undefined8 *)(pFVar46 + lVar41 + 8) = uStack_a28;
      *(double *)(pFVar46 + lVar41 + 0x10) = local_a20;
      *(double *)(pFVar46 + lVar41 + 0x10 + 8) = dStack_a18;
      *(double *)(pFVar46 + lVar41 + 0x20) = local_a10;
      *(double *)(pFVar46 + lVar41 + 0x20 + 8) = dStack_a08;
      *(double *)(pFVar46 + lVar41 + 0x30) = dStack_a00;
      *(double *)(pFVar46 + lVar41 + 0x30 + 8) = dStack_9f8;
      if (((param_21->Simulation).Points.ArrayNum < 1) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)(param_21->Simulation).Points.AllocatorInstance.Data = 0;
      iVar32 = (param_21->Simulation).Points.ArrayNum;
      uVar44 = iVar32 - 1;
      uVar47 = 0;
      if ((int)uVar44 < iVar32) {
        uVar47 = ~uVar44 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)
       ((param_21->Simulation).Points.AllocatorInstance.Data +
       (longlong)(param_21->Simulation).Points.ArrayNum * 0x40 + -0x40) = 0;
      iVar32 = (param_21->CachedBones).ArrayNum;
      if (0 < iVar32) {
        local_d68 = 0;
        uVar48 = uVar37;
        do {
          uVar43 = (uint)uVar37;
          uVar44 = ~uVar43 >> 0x1f;
          uVar47 = 0;
          if ((int)uVar43 < iVar32) {
            uVar47 = uVar44;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar47 = 0xffffffff;
          uVar5 = *(ushort *)((param_21->CachedBones).AllocatorInstance.Data + local_d68 + 0xc);
          if (uVar5 != 0xffff) {
            uVar47 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_268,uVar47,false);
          uVar47 = 0;
          if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
            uVar47 = uVar44;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          dVar82 = local_268.Translation.ZW.m128d_f64[0];
          uVar152 = local_268.Translation.XY.m128d_f64[1]._4_4_;
          uVar143 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uVar159 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uVar158 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          *(float *)((param_21->Simulation).Points.AllocatorInstance.Data + uVar48 + 8) = param_9;
          local_720 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          uStack_71c = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_718 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_714 = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_710 = local_268.Translation.ZW.m128d_f64[0];
          uVar47 = 0;
          if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
            uVar47 = uVar44;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar45 = (param_21->Simulation).Points.AllocatorInstance.Data;
          pFVar46 = pFVar45 + uVar48 + 0x10;
          *(undefined4 *)pFVar46 = uVar158;
          *(undefined4 *)(pFVar46 + 4) = uVar159;
          *(undefined4 *)(pFVar46 + 8) = uVar143;
          *(undefined4 *)(pFVar46 + 0xc) = uVar152;
          *(double *)(pFVar45 + uVar48 + 0x20) = dVar82;
          uVar47 = 0;
          if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
            uVar47 = uVar44;
          }
          if ((uVar47 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (fVar161 < *(float *)((param_21->Simulation).Points.AllocatorInstance.Data + uVar48)) {
            local_ad8 = CONCAT31(local_ad8._1_3_,3);
            dStack_ab0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_aa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_ac8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_ac0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            dStack_aa0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_ab8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            pFVar46 = (param_21->Simulation).Constraints.AllocatorInstance.Data;
            uStack_ad4 = uVar43;
            uStack_ad0 = uVar43;
            if (((pFVar46 <= (FScriptContainerElement *)&local_ad8) &&
                ((FScriptContainerElement *)&local_ad8 <
                 pFVar46 + (longlong)(param_21->Simulation).Constraints.ArrayMax * 0x40)) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar31)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar32 = (param_21->Simulation).Constraints.ArrayNum;
            piVar1 = &(param_21->Simulation).Constraints.ArrayMax;
            if (iVar32 == *piVar1) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&(param_21->Simulation).Constraints.AllocatorInstance,piVar1
                                 );
            }
            (param_21->Simulation).Constraints.ArrayNum = iVar32 + 1;
            pFVar46 = (param_21->Simulation).Constraints.AllocatorInstance.Data;
            lVar41 = (longlong)iVar32 * 0x40;
            *(ulonglong *)(pFVar46 + lVar41) = CONCAT44(uStack_ad4,local_ad8);
            *(ulonglong *)(pFVar46 + lVar41 + 8) = CONCAT44(uStack_acc,uStack_ad0);
            *(double *)(pFVar46 + lVar41 + 0x10) = local_ac8;
            *(double *)(pFVar46 + lVar41 + 0x10 + 8) = dStack_ac0;
            *(double *)(pFVar46 + lVar41 + 0x20) = local_ab8;
            *(double *)(pFVar46 + lVar41 + 0x20 + 8) = dStack_ab0;
            *(double *)(pFVar46 + lVar41 + 0x30) = dStack_aa8;
            *(double *)(pFVar46 + lVar41 + 0x30 + 8) = dStack_aa0;
          }
          uVar37 = (ulonglong)(uVar43 + 1);
          local_d68 = local_d68 + 0x20;
          uVar48 = uVar48 + 0x40;
          iVar32 = (param_21->CachedBones).ArrayNum;
        } while ((int)(uVar43 + 1) < iVar32);
      }
      local_b78.Type = Bone;
      local_b78.Name = *param_13;
      local_be0.Key._0_4_ = local_be0.Key._0_4_ & 0xffffff00;
      local_be0.Key.Name.ComparisonIndex.Value = 0;
      local_be0.Key.Name.Number = 0;
      local_be0.Index = 0xffff;
      local_be0.ContainerVersion = -1;
      local_be0.Element = (FRigBaseElement *)0x0;
      FCachedRigElement::UpdateCache(&local_be0,&local_b78,this);
      (param_21->CachedPoleVector).Key.Type = local_be0.Key.Type;
      *(int3 *)&(param_21->CachedPoleVector).Key.field_0x1 = local_be0.Key._1_3_;
      (param_21->CachedPoleVector).Key.Name.ComparisonIndex =
           (FNameEntryId)local_be0.Key.Name.ComparisonIndex.Value;
      *(ulonglong *)&(param_21->CachedPoleVector).Key.Name.Number =
           CONCAT26(local_be0._14_2_,CONCAT24(local_be0.Index,local_be0.Key.Name.Number));
      *(ulonglong *)&(param_21->CachedPoleVector).ContainerVersion =
           CONCAT44(local_be0._20_4_,local_be0.ContainerVersion);
      (param_21->CachedPoleVector).Element = local_be0.Element;
    }
    lVar41 = 0;
    this_00 = &param_21->Simulation;
    if (2 < (param_21->CachedBones).ArrayNum) {
      if (!param_16) {
        (**(code **)(this_00->_padding_ + 0x10))(this_00);
      }
      local_d50 = &(param_21->Transforms).ArrayMax;
      (param_21->Transforms).ArrayNum = 0;
      if ((param_21->Transforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(param_21->Transforms).AllocatorInstance,0,local_d50);
      }
      piVar1 = local_d50;
      iVar32 = (param_21->CachedBones).ArrayNum;
      uVar47 = 0;
      if (0 < iVar32) {
        local_d68 = 0;
        do {
          uVar43 = ~uVar47 >> 0x1f;
          uVar44 = 0;
          if ((int)uVar47 < iVar32) {
            uVar44 = uVar43;
          }
          if ((uVar44 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar44 = 0xffffffff;
          uVar5 = *(ushort *)((param_21->CachedBones).AllocatorInstance.Data + local_d68 + 0xc);
          if (uVar5 != 0xffff) {
            uVar44 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_4a8,uVar44,false);
          pTVar7 = (TTransform<double> *)(param_21->Transforms).AllocatorInstance.Data;
          if (((pTVar7 <= &local_4a8) && (&local_4a8 < pTVar7 + *piVar1)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar32 = (param_21->Transforms).ArrayNum;
          if (iVar32 == *piVar1) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&(param_21->Transforms).AllocatorInstance,piVar1);
          }
          (param_21->Transforms).ArrayNum = iVar32 + 1;
          pFVar46 = (param_21->Transforms).AllocatorInstance.Data;
          lVar42 = (longlong)iVar32 * 0x60;
          *(double *)(pFVar46 + lVar42) = local_4a8.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar46 + lVar42 + 8) = local_4a8.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar46 + lVar42 + 0x10) = local_4a8.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar46 + lVar42 + 0x10 + 8) = local_4a8.Rotation.ZW.m128d_f64[1];
          *(ulonglong *)(pFVar46 + lVar42 + 0x20) =
               CONCAT44(local_4a8.Translation.XY.m128d_f64[0]._4_4_,
                        local_4a8.Translation.XY.m128d_f64[0]._0_4_);
          *(ulonglong *)(pFVar46 + lVar42 + 0x20 + 8) =
               CONCAT44(local_4a8.Translation.XY.m128d_f64[1]._4_4_,
                        local_4a8.Translation.XY.m128d_f64[1]._0_4_);
          *(double *)(pFVar46 + lVar42 + 0x30) = local_4a8.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar46 + lVar42 + 0x30 + 8) = local_4a8.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar46 + lVar42 + 0x40) = local_4a8.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar46 + lVar42 + 0x40 + 8) = local_4a8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar46 + lVar42 + 0x50) = local_4a8.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar46 + lVar42 + 0x50 + 8) = local_4a8.Scale3D.ZW.m128d_f64[1];
          uVar44 = 0;
          if ((int)uVar47 < (param_21->Simulation).Points.ArrayNum) {
            uVar44 = uVar43;
          }
          if ((uVar44 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data + lVar41;
          if ((*(float *)pFVar46 <= fVar161 && fVar161 != *(float *)pFVar46) || (!param_16)) {
            uVar44 = 0;
            if ((int)uVar47 < (param_21->Simulation).Points.ArrayNum) {
              uVar44 = uVar43;
            }
            if ((uVar44 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar82 = local_4a8.Translation.ZW.m128d_f64[0];
            uVar152 = local_4a8.Translation.XY.m128d_f64[1]._4_4_;
            uVar143 = local_4a8.Translation.XY.m128d_f64[1]._0_4_;
            uVar159 = local_4a8.Translation.XY.m128d_f64[0]._4_4_;
            uVar158 = local_4a8.Translation.XY.m128d_f64[0]._0_4_;
            *(float *)((param_21->Simulation).Points.AllocatorInstance.Data + lVar41 + 8) = param_9;
            local_708 = local_4a8.Translation.XY.m128d_f64[0]._0_4_;
            uStack_704 = local_4a8.Translation.XY.m128d_f64[0]._4_4_;
            uStack_700 = local_4a8.Translation.XY.m128d_f64[1]._0_4_;
            uStack_6fc = local_4a8.Translation.XY.m128d_f64[1]._4_4_;
            local_6f8 = local_4a8.Translation.ZW.m128d_f64[0];
            uVar44 = 0;
            if ((int)uVar47 < (param_21->Simulation).Points.ArrayNum) {
              uVar44 = uVar43;
            }
            if ((uVar44 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar45 = (param_21->Simulation).Points.AllocatorInstance.Data;
            pFVar46 = pFVar45 + lVar41 + 0x10;
            *(undefined4 *)pFVar46 = uVar158;
            *(undefined4 *)(pFVar46 + 4) = uVar159;
            *(undefined4 *)(pFVar46 + 8) = uVar143;
            *(undefined4 *)(pFVar46 + 0xc) = uVar152;
            *(double *)(pFVar45 + lVar41 + 0x20) = dVar82;
          }
          uVar47 = uVar47 + 1;
          local_d68 = local_d68 + 0x20;
          lVar41 = lVar41 + 0x40;
          iVar32 = (param_21->CachedBones).ArrayNum;
        } while ((int)uVar47 < iVar32);
      }
      lVar41 = 0x40;
      local_d38._s_0.X = (local_cd8->field0_0x0)._s_0.X;
      local_d38._s_0.Y = (local_cd8->field0_0x0)._s_0.Y;
      local_d38._s_0.Z = (local_cd8->field0_0x0)._s_0.Z;
      if (((param_21->CachedPoleVector).Index != 0xffff) &&
         (bVar31 = FRigElementKey::IsValid(&(param_21->CachedPoleVector).Key), bVar31)) {
        uVar5 = (param_21->CachedPoleVector).Index;
        uVar47 = 0xffffffff;
        if (uVar5 != 0xffff) {
          uVar47 = (uint)uVar5;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_208,uVar47,false);
        if (param_12 == Direction) {
          pTVar36 = UE::Math::TTransform<double>::TransformVectorNoScale
                              (&local_208,&local_648,(TVector<double> *)&local_d38._s_0);
        }
        else {
          pTVar36 = UE::Math::TTransform<double>::TransformPositionNoScale
                              (&local_208,&local_630,(TVector<double> *)&local_d38._s_0);
        }
        local_d38._s_0.X = (pTVar36->field0_0x0)._s_0.X;
        local_d38._s_0.Y = (pTVar36->field0_0x0)._s_0.Y;
        local_d38._s_0.Z = (pTVar36->field0_0x0)._s_0.Z;
      }
      if (((param_21->Simulation).Points.ArrayNum < 1) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      local_cf0._s_0.X = (double)*(undefined8 *)(pFVar46 + 0x10);
      local_cf0._s_0.Y = (double)*(undefined8 *)(pFVar46 + 0x18);
      local_cf0._s_0.Z = (double)*(undefined8 *)(pFVar46 + 0x20);
      if (((param_21->Simulation).Points.ArrayNum < 2) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      local_c48 = *(double *)(pFVar46 + 0x60);
      auVar114 = *(undefined1 (*) [16])(pFVar46 + 0x50);
      if (((param_21->Simulation).Points.ArrayNum < 3) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar110 = in_XMM4.m128d_f64[1];
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      local_a88 = *(double *)(pFVar46 + 0xa0);
      dVar82 = *(double *)(pFVar46 + 0x90);
      dVar109 = *(double *)(pFVar46 + 0x98);
      iVar32 = (param_21->Simulation).Points.ArrayNum;
      uVar44 = iVar32 - 1;
      uVar47 = 0;
      if ((int)uVar44 < iVar32) {
        uVar47 = ~uVar44 >> 0x1f;
      }
      if (uVar47 == 0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        dVar110 = in_XMM4.m128d_f64[1];
        if (bVar31) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      dVar141 = __real_3f1a36e2e0000000;
      uVar40 = _UNK_15061cc8c;
      uVar43 = _UNK_15061cc88;
      uVar44 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar47 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar132 = __real_3e45798ee0000000;
      pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
      lVar42 = (longlong)(param_21->Simulation).Points.ArrayNum * 0x40;
      local_bb8._0_16_ = *(undefined1 (*) [16])(pFVar46 + lVar42 + -0x30);
      auVar14._4_8_ = unaff_XMM12._8_8_;
      auVar14._0_4_ = local_bb8._4_4_;
      auVar103._0_8_ = auVar14._0_8_ << 0x20;
      auVar103._8_4_ = local_bb8._8_4_;
      auVar103._12_4_ = local_bb8._12_4_;
      local_bb8._s_0.Z = (double)*(undefined8 *)(pFVar46 + lVar42 + -0x20);
      dVar155 = (local_cf0._s_0.X + local_bb8._0_8_) * __real_3fe0000000000000;
      dVar133 = (local_cf0._s_0.Y + auVar103._8_8_) * __real_3fe0000000000000;
      dVar52 = (local_cf0._s_0.Z + local_bb8._s_0.Z) * __real_3fe0000000000000;
      if (param_12 == Direction) {
        local_d38._s_0.Z = local_d38._s_0.Z + dVar52;
        local_d38._s_0.X = local_d38._s_0.X + dVar155;
        auVar119._0_8_ = local_d38._s_0.Y + dVar133;
        auVar119._8_8_ = 0;
        local_d38._s_0.Y = auVar119._0_8_;
        uVar118 = 0.0;
      }
      else {
        auVar15._4_8_ = dVar110;
        auVar15._0_4_ = (int)((ulonglong)local_d38._0_8_ >> 0x20);
        auVar104._0_8_ = auVar15._0_8_ << 0x20;
        auVar104._8_4_ = SUB84(local_d38._s_0.Y,0);
        auVar104._12_4_ = (int)((ulonglong)local_d38._8_8_ >> 0x20);
        auVar119._8_8_ = local_d38._s_0.Y;
        auVar119._0_8_ = (double)auVar104._8_8_;
        uVar118 = local_d38._s_0.Y;
      }
      local_cb8 = UE::Math::TQuat<double>::Identity.X;
      dVar131 = local_d38._s_0.X - local_bb8._0_8_;
      dVar116 = auVar119._0_8_ - auVar103._8_8_;
      dStack_cb0 = UE::Math::TQuat<double>::Identity.Y;
      dVar110 = auVar119._0_8_ - local_cf0._s_0.Y;
      uVar143 = SUB84(__real_3e45798ee0000000,0);
      uVar152 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      local_ca8 = UE::Math::TQuat<double>::Identity.Z;
      dStack_ca0 = UE::Math::TQuat<double>::Identity.W;
      uVar158 = SUB84(__real_3f1a36e2e0000000,0);
      uVar159 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      local_b58._s_0.Z = dVar131 * dVar110 - dVar116 * (local_d38._s_0.X - local_cf0._s_0.X);
      auVar134._0_8_ = dVar131 * (local_d38._s_0.Z - local_cf0._s_0.Z);
      auVar134._8_8_ = (double)uVar118;
      local_b58._s_0.X =
           dVar116 * (local_d38._s_0.Z - local_cf0._s_0.Z) -
           (local_d38._s_0.Z - local_bb8._s_0.Z) * dVar110;
      local_b58._s_0.Y =
           (local_d38._s_0.Z - local_bb8._s_0.Z) * (local_d38._s_0.X - local_cf0._s_0.X) -
           auVar134._0_8_;
      auVar120._0_8_ =
           (double)CONCAT44((uint)((ulonglong)local_b58._s_0.X >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_b58._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           );
      auVar120._8_4_ = auVar119._8_4_ & _UNK_15061cc88;
      auVar120._12_4_ = auVar119._12_4_ & _UNK_15061cc8c;
      local_d50 = (int *)dVar133;
      local_cd8 = (TVector<double> *)dVar155;
      if (((__real_3f1a36e2e0000000 < auVar120._0_8_) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_b58._s_0.Y >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_b58._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           ))) ||
         (uVar153 = SUB84(local_b58._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar154 = (uint)((ulonglong)local_b58._s_0.Z >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar154,uVar153) &&
         (double)CONCAT44(uVar154,uVar153) != __real_3f1a36e2e0000000)) {
        pTVar36 = UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_b58._s_0,&local_618,__real_3e45798ee0000000,
                             &UE::Math::TVector<double>::ZeroVector);
        uVar156 = *(undefined4 *)&pTVar36->field0_0x0;
        uVar157 = *(undefined4 *)((longlong)&pTVar36->field0_0x0 + 4);
        local_b58._s_0.X = (pTVar36->field0_0x0)._s_0.X;
        pdVar26 = &(pTVar36->field0_0x0)._s_0.Y;
        uVar142 = *(undefined4 *)pdVar26;
        uVar27 = *(undefined4 *)((longlong)&pTVar36->field0_0x0 + 0xc);
        local_b58._s_0.Y = *pdVar26;
        dVar110 = (pTVar36->field0_0x0)._s_0.Z;
        uVar153 = (param_21->Simulation).Constraints.ArrayNum;
        uVar37 = (ulonglong)(int)uVar153;
        pFVar45 = (param_21->Simulation).Constraints.AllocatorInstance.Data;
        pFVar49 = pFVar45 + uVar37 * 0x40;
        pFVar46 = pFVar45 + 0x28;
        local_b58._s_0.Z = dVar110;
        while( true ) {
          if ((param_21->Simulation).Constraints.ArrayNum != (int)uVar37) {
            local_d58[0] = 0;
            `TCheckedPointerIterator<FCRSimPointConstraint,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_d58);
            uVar37 = (ulonglong)uVar153;
          }
          uVar118 = local_cf0._s_0.X;
          if (pFVar45 == pFVar49) break;
          if (*pFVar45 == (FScriptContainerElement)0x3) {
            *(double *)(pFVar46 + -0x18) = local_d38._s_0.X;
            *(double *)(pFVar46 + -0x10) = local_d38._s_0.Y;
            *(undefined4 *)pFVar46 = uVar156;
            *(undefined4 *)(pFVar46 + 4) = uVar157;
            *(undefined4 *)(pFVar46 + 8) = uVar142;
            *(undefined4 *)(pFVar46 + 0xc) = uVar27;
            *(double *)(pFVar46 + -8) = local_d38._s_0.Z;
            *(double *)(pFVar46 + 0x10) = dVar110;
          }
          pFVar45 = pFVar45 + 0x40;
          pFVar46 = pFVar46 + 0x40;
        }
        local_bf8 = local_cf0._s_0.X - local_bb8._s_0.X;
        dStack_bf0 = local_cf0._s_0.Y - local_bb8._s_0.Y;
        local_be8 = local_cf0._s_0.Z - local_bb8._s_0.Z;
        if (((dVar141 < (double)CONCAT44((uint)((ulonglong)local_bf8 >> 0x20) & uVar44,
                                         SUB84(local_bf8,0) & uVar47)) ||
            (dVar141 < (double)CONCAT44((uint)((ulonglong)dStack_bf0 >> 0x20) & uVar44,
                                        SUB84(dStack_bf0,0) & uVar47))) ||
           (dVar141 < (double)CONCAT44((uint)((ulonglong)local_be8 >> 0x20) & uVar44,
                                       (uint)local_be8 & uVar47))) {
          pTVar36 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_bf8,&local_600,dVar132,
                               &UE::Math::TVector<double>::ZeroVector);
          local_be8 = (pTVar36->field0_0x0)._s_0.Z;
          _local_bf8 = *(undefined1 (*) [16])&pTVar36->field0_0x0;
          dVar82 = auVar114._0_8_ - (dVar82 + (double)uVar118) * __real_3fe0000000000000;
          dVar110 = auVar114._8_8_ - (dVar109 + local_cf0._s_0.Y) * __real_3fe0000000000000;
          dVar109 = local_c48 - (local_a88 + local_cf0._s_0.Z) * __real_3fe0000000000000;
          if (param_11) {
            uVar153 = (uint)__xmm_80000000000000008000000000000000;
            uVar154 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            dVar82 = (double)CONCAT44((uint)((ulonglong)dVar82 >> 0x20) ^ uVar154,
                                      SUB84(dVar82,0) ^ uVar153);
            dVar110 = (double)CONCAT44((uint)((ulonglong)dVar110 >> 0x20) ^ uVar154,
                                       SUB84(dVar110,0) ^ uVar153);
            dVar109 = (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) ^ uVar154,
                                       SUB84(dVar109,0) ^ uVar153);
          }
          dVar116 = local_bf8;
          auVar16._4_8_ = auVar120._8_8_;
          auVar16._0_4_ = local_bf8._4_4_;
          auVar121._0_8_ = auVar16._0_8_ << 0x20;
          auVar121._8_4_ = local_bf8._8_4_;
          auVar121._12_4_ = local_bf8._12_4_;
          dVar53 = auVar121._8_8_;
          dVar131 = dVar82 * dVar116 + dVar110 * dVar53 + dVar109 * (double)local_be8;
          auVar134._0_8_ = dVar109 - (double)local_be8 * dVar131;
          auVar134._8_8_ = 0.0;
          dStack_c30 = dVar110 - dVar53 * dVar131;
          local_c38 = dVar82 - dVar116 * dVar131;
          dVar82 = dVar116 * (local_d38._s_0.X - dVar155) + dVar53 * (local_d38._s_0.Y - dVar133) +
                   (double)local_be8 * (local_d38._s_0.Z - dVar52);
          local_c20._s_0.X = (local_d38._s_0.X - dVar155) - dVar116 * dVar82;
          local_c20._s_0.Y = (local_d38._s_0.Y - dVar133) - dVar53 * dVar82;
          local_c20._s_0.Z = (local_d38._s_0.Z - dVar52) - (double)local_be8 * dVar82;
          local_c28 = auVar134._0_8_;
          pTVar36 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_c38,&local_678,dVar132,
                               &UE::Math::TVector<double>::ZeroVector);
          auVar114 = *(undefined1 (*) [16])&pTVar36->field0_0x0;
          uVar153 = auVar114._12_4_;
          local_c28 = *(double *)((longlong)&pTVar36->field0_0x0 + 0x10);
          _local_c38 = auVar114;
          pTVar36 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_c20._s_0,&local_660,dVar132,
                               &UE::Math::TVector<double>::ZeroVector);
          local_c20._s_0.X = (pTVar36->field0_0x0)._s_0.X;
          pdVar26 = &(pTVar36->field0_0x0)._s_0.Y;
          local_c20._s_0.Y = *pdVar26;
          local_c20._s_0.Z = *(double *)((longlong)&pTVar36->field0_0x0 + 0x10);
          uVar154 = auVar114._8_4_;
          if ((((dVar141 < (double)CONCAT44(auVar114._4_4_ & uVar44,auVar114._0_4_ & uVar47)) ||
               (auVar114._0_8_ = (double)CONCAT44(uVar153 & uVar44,uVar154 & uVar47),
               auVar114._8_4_ = uVar154 & uVar43, auVar114._12_4_ = uVar153 & uVar40,
               dVar141 < auVar114._0_8_)) ||
              (dVar141 < (double)CONCAT44((uint)((ulonglong)local_c28 >> 0x20) & uVar44,
                                          (uint)local_c28 & uVar47))) &&
             (((dVar141 < (double)CONCAT44(*(uint *)((longlong)&pTVar36->field0_0x0 + 4) & uVar44,
                                           *(uint *)&pTVar36->field0_0x0 & uVar47) ||
               (dVar141 < (double)CONCAT44(*(uint *)((longlong)&pTVar36->field0_0x0 + 0xc) & uVar44,
                                           *(uint *)pdVar26 & uVar47))) ||
              (dVar141 < (double)CONCAT44((uint)((ulonglong)local_c20._s_0.Z >> 0x20) & uVar44,
                                          SUB84(local_c20._s_0.Z,0) & uVar47))))) {
            pTVar38 = UE::Math::TQuat<double>::FindBetweenNormals
                                (&local_5e8,(TVector<double> *)&local_c38,
                                 (TVector<double> *)&local_c20._s_0);
            dVar82 = (double)local_cd8;
            piVar1 = local_d50;
            uVar43 = 1;
            local_cb8 = pTVar38->X;
            dStack_cb0 = pTVar38->Y;
            local_ca8 = pTVar38->Z;
            dStack_ca0 = pTVar38->W;
            if (1 < (param_21->CachedBones).ArrayNum + -1) {
              do {
                uVar44 = ~uVar43 >> 0x1f;
                uVar47 = 0;
                if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
                  uVar47 = uVar44;
                }
                if ((uVar47 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (fVar161 < *(float *)((param_21->Simulation).Points.AllocatorInstance.Data +
                                        lVar41)) {
                  uVar47 = 0;
                  if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
                    uVar47 = uVar44;
                  }
                  if ((uVar47 == 0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar31)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
                  auVar134._8_8_ = 0.0;
                  auVar134._0_8_ = local_ca8;
                  dVar141 = dStack_cb0 * (*(double *)(pFVar46 + lVar41 + 0x20) - dVar52) -
                            local_ca8 * (*(double *)(pFVar46 + lVar41 + 0x18) - (double)piVar1);
                  dVar141 = dVar141 + dVar141;
                  dVar109 = local_ca8 * (*(double *)(pFVar46 + lVar41 + 0x10) - dVar82) -
                            local_cb8 * (*(double *)(pFVar46 + lVar41 + 0x20) - dVar52);
                  dVar83 = dVar141 * dStack_ca0;
                  auVar114._0_8_ = dVar109 + dVar109;
                  auVar114._8_8_ = 0.0;
                  dVar117 = local_cb8 * (*(double *)(pFVar46 + lVar41 + 0x18) - (double)piVar1) -
                            dStack_cb0 * (*(double *)(pFVar46 + lVar41 + 0x10) - dVar82);
                  dVar132 = dVar141 * local_ca8;
                  dVar141 = dVar141 * dStack_cb0;
                  dVar109 = *(double *)(pFVar46 + lVar41 + 0x10);
                  dVar117 = dVar117 + dVar117;
                  dVar131 = local_ca8 * auVar114._0_8_;
                  dVar116 = dStack_cb0 * dVar117;
                  dVar155 = local_cb8 * auVar114._0_8_;
                  dVar53 = local_cb8 * dVar117;
                  dVar84 = dStack_ca0 * auVar114._0_8_;
                  dVar117 = dStack_ca0 * dVar117;
                  dVar110 = *(double *)(pFVar46 + lVar41 + 0x18);
                  dVar133 = *(double *)(pFVar46 + lVar41 + 0x20);
                  uVar47 = 0;
                  if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
                    uVar47 = uVar44;
                  }
                  if ((uVar47 == 0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar31)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar46 = (param_21->Simulation).Points.AllocatorInstance.Data;
                  *(double *)(pFVar46 + lVar41 + 0x10) = (dVar116 - dVar131) + dVar83 + dVar109;
                  *(double *)(pFVar46 + lVar41 + 0x18) = (dVar132 - dVar53) + dVar84 + dVar110;
                  *(double *)(pFVar46 + lVar41 + 0x20) = (dVar155 - dVar141) + dVar117 + dVar133;
                  fVar161 = __real_322bcc77;
                }
                uVar43 = uVar43 + 1;
                lVar41 = lVar41 + 0x40;
              } while ((int)uVar43 < (param_21->CachedBones).ArrayNum + -1);
              uVar158 = SUB84(__real_3f1a36e2e0000000,0);
              uVar159 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
              uVar143 = SUB84(__real_3e45798ee0000000,0);
              uVar152 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              uVar47 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar44 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            }
          }
        }
      }
      uVar43 = 0;
      if (param_16) {
        dVar82 = *(double *)&local_cc8->field_0x20;
      }
      else {
        dVar82 = (double)*(float *)&(param_21->Simulation)._padding_;
      }
      _Var106.m128_u64[1] = 0;
      _Var106.m128_u64[0] = (ulong64)dVar82;
      (**(code **)(this_00->_padding_ + 0x20))();
      local_d20._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_d20._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_a78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_a78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_a78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (0 < (param_21->CachedBones).ArrayNum) {
        uVar156 = SUB84(__real_3ff0000000000000,0);
        uVar157 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_d50 = (int *)0x0;
        lVar41 = 0;
        local_d60 = 0;
        do {
          uVar40 = 0;
          if ((int)uVar43 < (param_21->Transforms).ArrayNum) {
            uVar40 = ~uVar43 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar46 = (param_21->Transforms).AllocatorInstance.Data;
          uVar40 = 0;
          if ((int)uVar43 < (param_21->Simulation).Points.ArrayNum) {
            uVar40 = ~uVar43 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (fVar161 < *(float *)((param_21->Simulation).Points.AllocatorInstance.Data + local_d60)
             ) {
            pFVar39 = FCRSimPointContainer::GetPointInterpolated(this_00,&local_5c8,uVar43);
            dVar109 = (pFVar39->Position).field0_0x0._s_0.Y;
            dVar82 = (pFVar39->Position).field0_0x0._s_0.Z;
            *(double *)(pFVar46 + lVar41 + 0x20) = (pFVar39->Position).field0_0x0._s_0.X;
            *(double *)(pFVar46 + lVar41 + 0x20 + 8) = dVar109;
            *(double *)(pFVar46 + lVar41 + 0x30) = dVar82;
            *(double *)(pFVar46 + lVar41 + 0x30 + 8) = 0.0;
          }
          if (uVar43 != (param_21->CachedBones).ArrayNum - 1U) {
            dVar131 = *(double *)(pFVar46 + lVar41);
            dVar53 = *(double *)(pFVar46 + lVar41 + 8);
            dVar83 = *(double *)(pFVar46 + lVar41 + 0x10);
            dVar84 = *(double *)(pFVar46 + lVar41 + 0x10 + 8);
            auVar111._8_4_ = SUB84(local_cb8,0);
            auVar111._0_8_ = local_cb8;
            auVar111._12_4_ = (int)((ulonglong)local_cb8 >> 0x20);
            auVar54._8_4_ = SUB84(dStack_ca0,0);
            auVar54._0_8_ = dStack_ca0;
            auVar54._12_4_ = (int)((ulonglong)dStack_ca0 >> 0x20);
            dVar133 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
            auVar85._8_4_ = SUB84(dStack_cb0,0);
            auVar85._0_8_ = dStack_cb0;
            auVar85._12_4_ = (int)((ulonglong)dStack_cb0 >> 0x20);
            dVar82 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
            dVar132 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
            dVar141 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
            dVar109 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
            auVar55._8_4_ = SUB84(local_ca8,0);
            auVar55._0_8_ = local_ca8;
            auVar55._12_4_ = (int)((ulonglong)local_ca8 >> 0x20);
            dVar110 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar155 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar116 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            *(double *)(pFVar46 + lVar41) =
                 local_cb8 * dVar84 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dStack_ca0 * dVar131 +
                 dStack_cb0 * dVar83 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_ca8 * dVar53 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            *(double *)(pFVar46 + lVar41 + 8) =
                 local_cb8 * dVar83 * dVar133 + dStack_ca0 * dVar53 + dStack_cb0 * dVar84 * dVar141
                 + local_ca8 * dVar131 * dVar116;
            *(double *)(pFVar46 + lVar41 + 0x10) =
                 local_cb8 * dVar53 * dVar82 + dStack_ca0 * dVar83 + dStack_cb0 * dVar131 * dVar109
                 + local_ca8 * dVar84 * dVar110;
            *(double *)(pFVar46 + lVar41 + 0x10 + 8) =
                 auVar111._8_8_ * dVar131 * dVar132 + auVar54._8_8_ * dVar84 +
                 auVar85._8_8_ * dVar53 * dVar52 + auVar55._8_8_ * dVar83 * dVar155;
            auVar90 = *(undefined1 (*) [16])&param_14->field0_0x0;
            dVar82 = (param_14->field0_0x0)._s_0.Z;
            local_c58 = *(undefined8 *)(pFVar46 + lVar41);
            uStack_c50 = *(undefined8 *)(pFVar46 + lVar41 + 8);
                    /* WARNING: Load size is inaccurate */
            _Var106 = *(__m128 *)((__m128 *)(pFVar46 + lVar41 + 0x10))->m128_f32;
            dVar133 = _Var106._0_8_;
            auVar56 = *(undefined1 (*) [16])(pFVar46 + lVar41);
            auVar114 = *(undefined1 (*) [16])(pFVar46 + lVar41);
            dVar110 = *(double *)(pFVar46 + lVar41 + 0x18);
            dVar109 = auVar90._8_8_;
            auVar103 = blendpd(auVar56,(undefined1  [16])_Var106,2);
            auVar144._0_8_ = dVar109 * auVar56._0_8_ - auVar56._8_8_ * auVar90._0_8_;
            auVar144._8_8_ = dVar82 * auVar56._8_8_ - dVar133 * dVar109;
            auVar135._8_4_ = SUB84(auVar144._8_8_,0);
            auVar135._0_8_ = auVar144._0_8_;
            auVar135._12_4_ = (int)((ulonglong)auVar144._8_8_ >> 0x20);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = dVar82;
            auVar56 = blendpd(auVar90,auVar10,2);
            auVar57._0_8_ = auVar56._0_8_ * dVar133 - auVar103._0_8_ * dVar82;
            auVar57._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar103._8_8_ * 0.0;
            auVar56 = blendpd(auVar144,auVar57,2);
            dVar132 = auVar135._8_8_ + auVar135._8_8_;
            dVar141 = auVar57._0_8_ + auVar57._0_8_;
            auVar145._0_8_ = auVar56._0_8_ + auVar56._0_8_;
            auVar145._8_8_ = auVar56._8_8_ + auVar56._8_8_;
            auVar122._8_4_ = SUB84(dVar141,0);
            auVar122._0_8_ = dVar132;
            uVar142 = (undefined4)((ulonglong)dVar141 >> 0x20);
            auVar122._12_4_ = uVar142;
            auVar86._8_4_ = SUB84(dVar141,0);
            auVar86._0_8_ = dVar132;
            auVar86._12_4_ = uVar142;
            auVar56 = blendpd(auVar86,auVar145,2);
            auVar103 = blendpd(auVar114,(undefined1  [16])_Var106,2);
            auVar123._0_8_ = auVar122._8_8_ * auVar114._0_8_ - auVar114._8_8_ * dVar132;
            auVar123._8_8_ = auVar145._0_8_ * auVar114._8_8_ - dVar133 * dVar141;
            auVar87._0_8_ = auVar56._0_8_ * dVar133 - auVar103._0_8_ * auVar145._0_8_;
            auVar87._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar103._8_8_ * auVar145._8_8_;
            auVar58._8_4_ = SUB84(auVar123._8_8_,0);
            auVar58._0_8_ = auVar123._0_8_;
            auVar58._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
            auVar56 = blendpd(auVar123,auVar87,2);
            local_c68 = auVar145._0_8_ * dVar110 + dVar82 + auVar56._0_8_;
            dStack_c70 = dVar141 * dVar110 + dVar109 + auVar87._0_8_;
            local_c78 = dVar132 * dVar110 + auVar90._0_8_ + auVar58._8_8_;
            pFVar39 = FCRSimPointContainer::GetPointInterpolated(this_00,&local_588,uVar43 + 1);
            local_938 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x20);
            local_928 = *(double *)(pFVar46 + lVar41 + 0x30);
            auVar17._4_8_ = *(double *)(pFVar46 + lVar41 + 0x30 + 8);
            auVar17._0_4_ = local_938._4_4_;
            auVar59._0_8_ = auVar17._0_8_ << 0x20;
            auVar59._8_4_ = local_938._8_4_;
            auVar59._12_4_ = local_938._12_4_;
            auVar134._0_8_ = (pFVar39->Position).field0_0x0._s_0.X - local_938._0_8_;
            auVar134._8_8_ = 0.0;
            dVar109 = (pFVar39->Position).field0_0x0._s_0.Z - local_928;
            auVar114._0_8_ = (pFVar39->Position).field0_0x0._s_0.Y - auVar59._8_8_;
            auVar114._8_8_ = 0.0;
            dVar82 = (double)CONCAT44((uint)((ulonglong)auVar134._0_8_ >> 0x20) & uVar44,
                                      SUB84(auVar134._0_8_,0) & uVar47);
            local_d08._s_0.Z = dVar109;
            local_d08._s_0.X = auVar134._0_8_;
            local_d08._s_0.Y = auVar114._0_8_;
            if (((((double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                   dVar82 != (double)CONCAT44(uVar159,uVar158)) ||
                 (dVar82 = (double)CONCAT44((uint)((ulonglong)auVar114._0_8_ >> 0x20) & uVar44,
                                            SUB84(auVar114._0_8_,0) & uVar47),
                 (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                 dVar82 != (double)CONCAT44(uVar159,uVar158))) ||
                (dVar82 = (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) & uVar44,
                                           SUB84(dVar109,0) & uVar47),
                (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                dVar82 != (double)CONCAT44(uVar159,uVar158))) &&
               (((dVar82 = (double)CONCAT44(local_c78._4_4_ & uVar44,local_c78._0_4_ & uVar47),
                 (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                 dVar82 != (double)CONCAT44(uVar159,uVar158) ||
                 (dVar82 = (double)CONCAT44(local_c78._12_4_ & uVar44,local_c78._8_4_ & uVar47),
                 (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                 dVar82 != (double)CONCAT44(uVar159,uVar158))) ||
                (dVar82 = (double)CONCAT44((uint)((ulonglong)local_c68 >> 0x20) & uVar44,
                                           (uint)local_c68 & uVar47),
                (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                dVar82 != (double)CONCAT44(uVar159,uVar158))))) {
              dVar110 = auVar114._0_8_ * auVar114._0_8_ + auVar134._0_8_ * auVar134._0_8_ +
                        dVar109 * dVar109;
              dVar82 = dVar109;
              if ((dVar110 != (double)CONCAT44(uVar157,uVar156)) &&
                 (local_d08._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                 local_d08._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                 local_d08._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                 dVar82 = local_c48, (double)CONCAT44(uVar152,uVar143) <= dVar110)) {
                local_988 = (double)CONCAT44(uVar157,uVar156) / SQRT(dVar110);
                local_d08._s_0.Z = local_988 * dVar109;
                local_d08._s_0.X = auVar134._0_8_ * local_988;
                local_d08._s_0.Y = local_988 * auVar114._0_8_;
                dVar82 = local_988 * dVar109;
              }
              local_c48 = dVar82;
              UE::Math::TQuat<double>::FindBetweenNormals
                        (&local_8f8,(TVector<double> *)&local_c78,(TVector<double> *)&local_d08._s_0
                        );
              dVar110 = *(double *)(pFVar46 + lVar41 + 0x10);
              dVar133 = *(double *)(pFVar46 + lVar41 + 0x10 + 8);
              dVar132 = *(double *)(pFVar46 + lVar41);
              dVar141 = *(double *)(pFVar46 + lVar41 + 8);
              dVar52 = local_8f8.X;
              dVar155 = local_8f8.Y;
              dVar109 = local_8f8.W;
              auVar146._8_4_ = local_8f8.X._0_4_;
              auVar146._0_8_ = dVar52;
              auVar146._12_4_ = local_8f8.X._4_4_;
              auVar60._8_4_ = local_8f8.W._0_4_;
              auVar60._0_8_ = dVar109;
              auVar60._12_4_ = local_8f8.W._4_4_;
              auVar88._8_4_ = local_8f8.Y._0_4_;
              auVar88._0_8_ = dVar155;
              auVar88._12_4_ = local_8f8.Y._4_4_;
              dVar82 = local_8f8.Z;
              local_908 = CONCAT44(uVar152,uVar143);
              auVar61._8_4_ = local_8f8.Z._0_4_;
              auVar61._0_8_ = dVar82;
              auVar61._12_4_ = local_8f8.Z._4_4_;
              dVar116 = dVar52 * dVar133 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                        dVar109 * dVar132 +
                        dVar155 * dVar110 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        dVar82 * dVar141 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar131 = auVar146._8_8_ * dVar110 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                        auVar60._8_8_ * dVar141 +
                        auVar88._8_8_ * dVar133 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                        auVar61._8_8_ * dVar132 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              auVar62._8_4_ = SUB84(dVar131,0);
              auVar62._0_8_ = dVar116;
              auVar62._12_4_ = (int)((ulonglong)dVar131 >> 0x20);
              auVar112._0_8_ =
                   dVar155 * dVar132 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
              auVar112._8_8_ =
                   dVar155 * dVar141 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
              dVar141 = dVar52 * dVar141 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                        dVar109 * dVar110 + auVar112._0_8_ +
                        dVar82 * dVar133 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar110 = dVar52 * dVar132 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                        dVar109 * dVar133 + auVar112._8_8_ +
                        dVar82 * dVar110 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              auVar89._8_4_ = SUB84(dVar110,0);
              auVar89._0_8_ = dVar141;
              auVar89._12_4_ = (int)((ulonglong)dVar110 >> 0x20);
              dVar82 = dVar141 * dVar141 + dVar116 * dVar116;
              dVar109 = auVar89._8_8_ * dVar110 + auVar62._8_8_ * dVar131;
              auVar63._8_4_ = SUB84(dVar109,0);
              auVar63._0_8_ = dVar82;
              auVar63._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
              auVar64._0_8_ = auVar63._8_8_ + dVar82;
              auVar64._8_8_ = dVar82 + dVar109;
              auVar56 = sqrtpd(auVar112,auVar64);
              uVar48 = -(ulonglong)((double)CONCAT44(uVar152,uVar143) <= auVar64._0_8_);
              uVar50 = -(ulonglong)((double)CONCAT44(uVar152,uVar143) <= auVar64._8_8_);
              uVar40 = (uint)(uVar48 >> 0x20);
              uVar153 = (uint)(uVar50 >> 0x20);
              auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar56);
              auVar124._0_4_ =
                   ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
              auVar124._4_4_ =
                   ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2]
                                   >> 0x20);
              auVar124._8_4_ =
                   ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              auVar124._12_4_ =
                   ~uVar153 &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              auVar91._0_8_ = uVar48 & (ulonglong)(auVar90._0_8_ * dVar141);
              uVar37 = uVar50 & (ulonglong)(auVar90._8_8_ * dVar110);
              auVar91._8_4_ = (undefined4)uVar37;
              auVar91._12_4_ = (undefined4)(uVar37 >> 0x20);
              auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar56);
              auVar92._0_8_ = (ulonglong)(auVar90._0_8_ * dVar116) & uVar48;
              uVar37 = (ulonglong)(auVar90._8_8_ * dVar131) & uVar50;
              auVar92._8_4_ = (undefined4)uVar37;
              auVar92._12_4_ = (undefined4)(uVar37 >> 0x20);
              auVar136._0_4_ =
                   ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
              auVar136._4_4_ =
                   ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0]
                                   >> 0x20);
              auVar136._8_4_ =
                   ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              auVar136._12_4_ =
                   ~uVar153 &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              *(undefined1 (*) [16])(pFVar46 + lVar41) = auVar92 | auVar136;
              *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x10) = auVar124 | auVar91;
              if (uVar43 == 0) {
                local_898 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x20);
                local_888 = *(double *)(pFVar46 + lVar41 + 0x30);
                dVar109 = local_d38._s_0.Z - local_888;
                dVar82 = local_d38._s_0.X - local_898._0_8_;
                auVar18._4_8_ = *(double *)(pFVar46 + lVar41 + 0x30 + 8);
                auVar18._0_4_ = local_898._4_4_;
                auVar65._0_8_ = auVar18._0_8_ << 0x20;
                auVar65._8_4_ = local_898._8_4_;
                auVar65._12_4_ = local_898._12_4_;
                local_d20._s_0.Y = local_d38._s_0.Y - auVar65._8_8_;
              }
              else {
                UE::Math::TQuat<double>::FindBetweenNormals
                          (&local_9a8,(TVector<double> *)&local_a78._s_0,
                           (TVector<double> *)&local_d08._s_0);
                dVar133 = local_d20._s_0.Z * local_9a8.Y - local_d20._s_0.Y * local_9a8.Z;
                dVar133 = dVar133 + dVar133;
                dVar110 = local_d20._s_0.X * local_9a8.Z - local_d20._s_0.Z * local_9a8.X;
                dVar82 = local_d20._s_0.Y * local_9a8.X - local_d20._s_0.X * local_9a8.Y;
                dVar110 = dVar110 + dVar110;
                dVar82 = dVar82 + dVar82;
                dVar109 = (local_9a8.X * dVar110 - local_9a8.Y * dVar133) +
                          local_9a8.W * dVar82 + local_d20._s_0.Z;
                local_d20._s_0.Y =
                     (local_9a8.Z * dVar133 - local_9a8.X * dVar82) +
                     local_9a8.W * dVar110 + local_d20._s_0.Y;
                dVar82 = (local_9a8.Y * dVar82 - local_9a8.Z * dVar110) +
                         local_9a8.W * dVar133 + local_d20._s_0.X;
              }
              uStack_cd0 = 0;
              uStack_a90 = 0;
              auVar90 = *(undefined1 (*) [16])&param_15->field0_0x0;
              dVar110 = (param_15->field0_0x0)._s_0.Z;
              local_c58 = *(undefined8 *)(pFVar46 + lVar41);
              uStack_c50 = *(undefined8 *)(pFVar46 + lVar41 + 8);
                    /* WARNING: Load size is inaccurate */
              _Var106 = *(__m128 *)((__m128 *)(pFVar46 + lVar41 + 0x10))->m128_f32;
              dVar155 = _Var106._0_8_;
              auVar56 = *(undefined1 (*) [16])(pFVar46 + lVar41);
              auVar103 = *(undefined1 (*) [16])(pFVar46 + lVar41);
              dVar52 = *(double *)(pFVar46 + lVar41 + 0x18);
              dVar133 = auVar90._8_8_;
              auVar104 = blendpd(auVar56,(undefined1  [16])_Var106,2);
              auVar137._0_8_ = dVar133 * auVar56._0_8_ - auVar56._8_8_ * auVar90._0_8_;
              auVar137._8_8_ = dVar110 * auVar56._8_8_ - dVar155 * dVar133;
              auVar114._8_8_ = dVar52;
              auVar114._0_8_ = dVar52;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = dVar110;
              auVar56 = blendpd(auVar90,auVar9,2);
              auVar66._0_8_ = auVar56._0_8_ * dVar155 - auVar104._0_8_ * dVar110;
              auVar66._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar104._8_8_ * 0.0;
              auVar56 = blendpd(auVar137,auVar66,2);
              dVar132 = auVar137._8_8_ + auVar137._8_8_;
              dVar141 = auVar66._0_8_ + auVar66._0_8_;
              uVar143 = (undefined4)((ulonglong)dVar141 >> 0x20);
              auVar138._0_8_ = auVar56._0_8_ + auVar56._0_8_;
              auVar138._8_8_ = auVar56._8_8_ + auVar56._8_8_;
              auVar125._8_4_ = SUB84(dVar141,0);
              auVar125._0_8_ = dVar132;
              auVar125._12_4_ = uVar143;
              auVar93._8_4_ = SUB84(dVar141,0);
              auVar93._0_8_ = dVar132;
              auVar93._12_4_ = uVar143;
              auVar56 = blendpd(auVar93,auVar138,2);
              auVar126._0_8_ = auVar125._8_8_ * auVar103._0_8_ - auVar103._8_8_ * dVar132;
              auVar126._8_8_ = auVar138._0_8_ * auVar103._8_8_ - dVar155 * dVar141;
              auVar103 = blendpd(auVar103,(undefined1  [16])_Var106,2);
              auVar67._8_4_ = SUB84(auVar126._8_8_,0);
              auVar67._0_8_ = auVar126._0_8_;
              auVar67._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
              auVar94._0_8_ = auVar56._0_8_ * dVar155 - auVar103._0_8_ * auVar138._0_8_;
              auVar94._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar103._8_8_ * auVar138._8_8_;
              dVar132 = dVar132 * dVar52 + auVar90._0_8_ + auVar67._8_8_;
              dVar133 = dVar141 * dVar52 + dVar133 + auVar94._0_8_;
              uVar40 = SUB84(dVar133,0);
              uVar153 = (uint)((ulonglong)dVar133 >> 0x20);
              local_cd8._0_4_ = SUB84(dVar82,0);
              local_cd8._4_4_ = (uint)((ulonglong)dVar82 >> 0x20);
              auVar90 = blendpd(auVar126,auVar94,2);
              auVar134._0_8_ = auVar138._0_8_ * dVar52 + dVar110 + auVar90._0_8_;
              auVar134._8_8_ = auVar138._8_8_ * dVar52 + 0.0 + auVar90._8_8_;
              dVar110 = (double)CONCAT44(local_cd8._4_4_ & uVar44,(uint)local_cd8 & uVar47);
              local_980._8_4_ = uVar40;
              local_980._0_8_ = dVar132;
              local_980._12_4_ = uVar153;
              unique0x10000dfe = uVar40;
              local_c78 = dVar132;
              unique0x10000e02 = uVar153;
              local_d20._s_0.Z = dVar109;
              local_d20._s_0.X = dVar82;
              local_cd8 = (TVector<double> *)dVar82;
              local_c68 = auVar134._0_8_;
              local_a98 = dVar109;
              local_970 = auVar134._0_8_;
              if (((double)CONCAT44(uVar159,uVar158) <= dVar110 &&
                   dVar110 != (double)CONCAT44(uVar159,uVar158)) ||
                 (dVar110 = (double)CONCAT44((uint)((ulonglong)local_d20._s_0.Y >> 0x20) & uVar44,
                                             SUB84(local_d20._s_0.Y,0) & uVar47),
                 (double)CONCAT44(uVar159,uVar158) <= dVar110 &&
                 dVar110 != (double)CONCAT44(uVar159,uVar158))) {
LAB_14a59bbe2:
                dVar110 = (double)CONCAT44((uint)((ulonglong)dVar132 >> 0x20) & uVar44,
                                           SUB84(dVar132,0) & uVar47);
                if ((((double)CONCAT44(uVar159,uVar158) <= dVar110 &&
                      dVar110 != (double)CONCAT44(uVar159,uVar158)) ||
                    ((double)CONCAT44(uVar159,uVar158) <=
                     (double)CONCAT44(uVar153 & uVar44,uVar40 & uVar47) &&
                     (double)CONCAT44(uVar153 & uVar44,uVar40 & uVar47) !=
                     (double)CONCAT44(uVar159,uVar158))) ||
                   (dVar110 = (double)CONCAT44((uint)((ulonglong)auVar134._0_8_ >> 0x20) & uVar44,
                                               SUB84(auVar134._0_8_,0) & uVar47),
                   (double)CONCAT44(uVar159,uVar158) <= dVar110 &&
                   dVar110 != (double)CONCAT44(uVar159,uVar158))) {
                  dVar133 = local_d20._s_0.Y * local_d08._s_0.Y + dVar82 * local_d08._s_0.X +
                            dVar109 * local_d08._s_0.Z;
                  dVar82 = dVar82 - local_d08._s_0.X * dVar133;
                  dVar110 = local_d20._s_0.Y - local_d08._s_0.Y * dVar133;
                  dVar109 = dVar109 - local_d08._s_0.Z * dVar133;
                  dVar132 = dVar110 * dVar110 + dVar82 * dVar82 + dVar109 * dVar109;
                  local_d20._s_0.Z = dVar109;
                  local_d20._s_0.X = dVar82;
                  local_d20._s_0.Y = dVar110;
                  dVar133 = dVar109;
                  if ((dVar132 != __real_3ff0000000000000) &&
                     (local_d20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                     local_d20._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                     local_d20._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                     dVar133 = local_c48, __real_3e45798ee0000000 <= dVar132)) {
                    local_910 = __real_3ff0000000000000 / SQRT(dVar132);
                    local_d20._s_0.Z = local_910 * dVar109;
                    local_d20._s_0.X = local_910 * dVar82;
                    local_d20._s_0.Y = local_910 * dVar110;
                    dVar133 = local_910 * dVar109;
                  }
                  local_c48 = dVar133;
                  UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_8d8,(TVector<double> *)&local_c78,
                             (TVector<double> *)&local_d20._s_0);
                  _Var106 = GlobalVectorConstants::Float0001;
                  dVar109 = *(double *)(pFVar46 + lVar41);
                  dVar110 = *(double *)(pFVar46 + lVar41 + 8);
                  auVar90 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x10);
                  dVar141 = local_8d8.X;
                  dVar133 = auVar90._0_8_;
                  dVar132 = auVar90._8_8_;
                  auVar113._8_8_ = local_8d8.Y;
                  auVar113._0_8_ = auVar113._8_8_;
                  auVar147._8_4_ = local_8d8.X._0_4_;
                  auVar147._0_8_ = dVar141;
                  auVar147._12_4_ = local_8d8.X._4_4_;
                  auVar68._8_4_ = auVar90._0_4_;
                  auVar68._0_8_ = dVar132;
                  auVar68._12_4_ = auVar90._4_4_;
                  auVar114._0_8_ =
                       dVar141 * dVar110 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar133 * local_8d8.W +
                       dVar109 * auVar113._8_8_ *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar132 * local_8d8.Z *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  auVar114._8_8_ =
                       auVar147._8_8_ * dVar109 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       dVar132 * local_8d8.W +
                       dVar110 * auVar113._8_8_ *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       auVar68._8_8_ * local_8d8.Z *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  auVar95._8_4_ = SUB84(auVar114._8_8_,0);
                  auVar95._0_8_ = auVar114._0_8_;
                  auVar95._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
                  dVar82 = dVar132 * dVar141 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                           dVar109 * local_8d8.W +
                           dVar133 * auVar113._8_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                           local_8d8.Z * dVar110 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  dVar109 = dVar133 * dVar141 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            dVar110 * local_8d8.W +
                            dVar132 * auVar113._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            local_8d8.Z * dVar109 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  auVar69._8_4_ = SUB84(dVar109,0);
                  auVar69._0_8_ = dVar82;
                  auVar69._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
                  dVar110 = auVar114._0_8_ * auVar114._0_8_ + dVar82 * dVar82;
                  dVar133 = auVar95._8_8_ * auVar114._8_8_ + auVar69._8_8_ * dVar109;
                  auVar70._8_4_ = SUB84(dVar133,0);
                  auVar70._0_8_ = dVar110;
                  auVar70._12_4_ = (int)((ulonglong)dVar133 >> 0x20);
                  auVar71._0_8_ = auVar70._8_8_ + dVar110;
                  auVar71._8_8_ = dVar110 + dVar133;
                  local_918 = __real_3e45798ee0000000;
                  auVar56 = sqrtpd(auVar113,auVar71);
                  auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar56);
                  uVar48 = -(ulonglong)(__real_3e45798ee0000000 <= auVar71._0_8_);
                  uVar50 = -(ulonglong)(__real_3e45798ee0000000 <= auVar71._8_8_);
                  uVar40 = (uint)(uVar48 >> 0x20);
                  uVar153 = (uint)(uVar50 >> 0x20);
                  auVar96._0_8_ = uVar48 & (ulonglong)(auVar90._0_8_ * auVar114._0_8_);
                  uVar37 = uVar50 & (ulonglong)(auVar90._8_8_ * auVar114._8_8_);
                  auVar96._8_4_ = (undefined4)uVar37;
                  auVar96._12_4_ = (undefined4)(uVar37 >> 0x20);
                  auVar127._0_4_ =
                       ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar127._4_4_ =
                       ~uVar40 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar127._8_4_ =
                       ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar127._12_4_ =
                       ~uVar153 &
                       (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
                  auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar56);
                  auVar97._0_8_ = (ulonglong)(auVar90._0_8_ * dVar82) & uVar48;
                  uVar37 = (ulonglong)(auVar90._8_8_ * dVar109) & uVar50;
                  auVar97._8_4_ = (undefined4)uVar37;
                  auVar97._12_4_ = (undefined4)(uVar37 >> 0x20);
                  auVar134._0_4_ =
                       ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar134._4_4_ =
                       ~uVar40 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar134._8_4_ =
                       ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar134._12_4_ =
                       ~uVar153 &
                       (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
                  *(undefined1 (*) [16])(pFVar46 + lVar41) = auVar97 | auVar134;
                  *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x10) = auVar127 | auVar96;
                }
              }
              else {
                local_a98._0_4_ = SUB84(dVar109,0);
                local_a98._4_4_ = (uint)((ulonglong)dVar109 >> 0x20);
                dVar110 = (double)CONCAT44(local_a98._4_4_ & uVar44,(uint)local_a98 & uVar47);
                if ((double)CONCAT44(uVar159,uVar158) <= dVar110 &&
                    dVar110 != (double)CONCAT44(uVar159,uVar158)) goto LAB_14a59bbe2;
              }
              uVar156 = SUB84(__real_3ff0000000000000,0);
              uVar157 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              local_a78._s_0.X = local_d08._s_0.X;
              local_a78._s_0.Y = local_d08._s_0.Y;
              local_a78._s_0.Z = local_d08._s_0.Z;
              fVar161 = __real_322bcc77;
            }
          }
          if (param_18) {
            uVar40 = 0;
            if ((int)uVar43 < (param_21->CachedBones).ArrayNum) {
              uVar40 = ~uVar43 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar45 = (param_21->CachedBones).AllocatorInstance.Data;
            local_b68._0_8_ = *(undefined8 *)(pFVar45 + (longlong)local_d50);
            local_b68.Name.Number = *(uint *)(pFVar45 + (longlong)local_d50 + 8);
            pFVar35 = URigHierarchy::GetFirstParent(this,&local_7c0,&local_b68);
            iVar32 = URigHierarchy::GetIndex(this,pFVar35,true);
            if (iVar32 != -1) {
              uVar40 = 0;
              if ((int)uVar43 < (param_21->CachedBones).ArrayNum) {
                uVar40 = ~uVar43 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar40 = 0xffffffff;
              uVar5 = *(ushort *)
                       ((param_21->CachedBones).AllocatorInstance.Data + (longlong)local_d50 + 0xc);
              if (uVar5 != 0xffff) {
                uVar40 = (uint)uVar5;
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_1a8,uVar40,true);
              URigHierarchy::GetGlobalTransformByIndex(this,&local_148,iVar32,true);
              URigHierarchy::GetGlobalTransformByIndex(this,&local_448,iVar32,false);
              dVar82 = __real_3e45798ee0000000;
              auVar19._4_8_ = _Var106.m128_u64[1];
              auVar19._0_4_ = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
              auVar105._0_8_ = auVar19._0_8_ << 0x20;
              auVar105._8_4_ = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
              auVar105._12_4_ = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
              local_858 = local_148.Translation.ZW.m128d_f64[0];
              local_870 = local_1a8.Translation.ZW.m128d_f64[0];
              local_880[0] = local_1a8.Translation.XY.m128d_f64[0];
              local_880[1] = local_1a8.Translation.XY.m128d_f64[1];
              auVar20._4_8_ = local_148.Translation.ZW.m128d_f64[1];
              auVar20._0_4_ = local_148.Translation.XY.m128d_f64[0]._4_4_;
              auVar72._0_8_ = auVar20._0_8_ << 0x20;
              auVar72._8_4_ = local_148.Translation.XY.m128d_f64[1]._0_4_;
              auVar72._12_4_ = local_148.Translation.XY.m128d_f64[1]._4_4_;
              dVar110 = local_1a8.Translation.XY.m128d_f64[0] -
                        local_148.Translation.XY.m128d_f64[0];
              dVar109 = auVar105._8_8_ - auVar72._8_8_;
              local_868[0] = local_148.Translation.XY.m128d_f64[0];
              local_868[1] = local_148.Translation.XY.m128d_f64[1];
              _Var106.m128_u64[0] =
                   (ulong64)(dVar109 * dVar109 + dVar110 * dVar110 +
                            (local_1a8.Translation.ZW.m128d_f64[0] -
                            local_148.Translation.ZW.m128d_f64[0]) *
                            (local_1a8.Translation.ZW.m128d_f64[0] -
                            local_148.Translation.ZW.m128d_f64[0]));
              _Var106.m128_u64[1] = (ulong64)local_1a8.Translation.XY.m128d_f64[1];
              fVar160 = (float)SQRT((double)_Var106.m128_u64[0]);
              if ((fVar161 < fVar160) && ((int)uVar43 < (param_21->CachedBones).ArrayNum + -1)) {
                local_850 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x20);
                local_840 = *(double *)(pFVar46 + lVar41 + 0x30);
                auVar21._4_8_ = auVar134._8_8_;
                auVar21._0_4_ = local_850._4_4_;
                auVar139._0_8_ = auVar21._0_8_ << 0x20;
                auVar139._8_4_ = local_850._8_4_;
                auVar139._12_4_ = local_850._12_4_;
                local_828 = local_448.Translation.ZW.m128d_f64[0];
                auVar114._8_8_ = local_850._8_8_;
                auVar114._0_8_ = local_850._0_8_ - local_448.Translation.XY.m128d_f64[0];
                dVar110 = local_840 - local_448.Translation.ZW.m128d_f64[0];
                auVar22._4_8_ = local_448.Translation.ZW.m128d_f64[1];
                auVar22._0_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[0] >> 0x20);
                auVar73._0_8_ = auVar22._0_8_ << 0x20;
                auVar73._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
                auVar73._12_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[1] >> 0x20);
                auVar134._0_8_ = auVar139._8_8_ - auVar73._8_8_;
                auVar134._8_8_ = auVar114._8_8_;
                dVar109 = (double)CONCAT44((uint)((ulonglong)auVar114._0_8_ >> 0x20) & uVar44,
                                           SUB84(auVar114._0_8_,0) & uVar47);
                if (((double)CONCAT44(uVar159,uVar158) <= dVar109 &&
                     dVar109 != (double)CONCAT44(uVar159,uVar158)) ||
                   ((dVar109 = (double)CONCAT44((uint)((ulonglong)auVar134._0_8_ >> 0x20) & uVar44,
                                                SUB84(auVar134._0_8_,0) & uVar47),
                    (double)CONCAT44(uVar159,uVar158) <= dVar109 &&
                    dVar109 != (double)CONCAT44(uVar159,uVar158) ||
                    (dVar109 = (double)CONCAT44((uint)((ulonglong)dVar110 >> 0x20) & uVar44,
                                                SUB84(dVar110,0) & uVar47),
                    (double)CONCAT44(uVar159,uVar158) <= dVar109 &&
                    dVar109 != (double)CONCAT44(uVar159,uVar158))))) {
                  auVar107._8_4_ = local_850._8_4_;
                  auVar107._0_8_ = auVar114._0_8_;
                  auVar107._12_4_ = local_850._12_4_;
                  local_a60 = local_448.Translation.XY.m128d_f64[0];
                  dStack_a58 = local_448.Translation.XY.m128d_f64[1];
                  _Var106.m128_u64[1] = auVar107._8_8_;
                  local_a50 = local_448.Translation.ZW.m128d_f64[0];
                  _Var106.m128_u64[0] =
                       (ulong64)(auVar114._0_8_ * auVar114._0_8_ + auVar134._0_8_ * auVar134._0_8_ +
                                dVar110 * dVar110);
                  local_b30 = dVar110;
                  if ((double)_Var106.m128_u64[0] == (double)CONCAT44(uVar157,uVar156)) {
LAB_14a59c1b0:
                    local_b40._8_8_ = auVar134._0_8_;
                  }
                  else {
                    if (__real_3e45798ee0000000 <= (double)_Var106.m128_u64[0]) {
                      _Var106.m128_u64[1] = 0;
                      local_920 = (double)CONCAT44(uVar157,uVar156) /
                                  SQRT((double)_Var106.m128_u64[0]);
                      auVar134._0_8_ = auVar134._0_8_ * local_920;
                      local_b30 = dVar110 * local_920;
                      auVar114._0_8_ = auVar114._0_8_ * local_920;
                      goto LAB_14a59c1b0;
                    }
                    auVar114._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    auVar114._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_b30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    auVar134._8_4_ =
                         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                    auVar134._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    auVar134._12_4_ =
                         (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >>
                              0x20);
                    local_b40 = auVar114;
                  }
                  dVar109 = (double)fVar160;
                  auVar114._0_8_ = auVar114._0_8_ * dVar109 + local_448.Translation.XY.m128d_f64[0];
                  auVar134._0_8_ = auVar134._0_8_ * dVar109 + local_448.Translation.XY.m128d_f64[1];
                  local_810 = local_b30 * dVar109 + local_448.Translation.ZW.m128d_f64[0];
                  *(double *)(pFVar46 + lVar41 + 0x20) = auVar114._0_8_;
                  *(double *)(pFVar46 + lVar41 + 0x20 + 8) = auVar134._0_8_;
                  *(double *)(pFVar46 + lVar41 + 0x30) = local_810;
                  *(double *)(pFVar46 + lVar41 + 0x30 + 8) = 0.0;
                  local_820 = auVar114._0_8_;
                  dStack_818 = auVar134._0_8_;
                }
              }
              if (uVar43 == (param_21->CachedBones).ArrayNum - 2U) {
                local_c58 = *(undefined8 *)(pFVar46 + lVar41);
                uStack_c50 = *(undefined8 *)(pFVar46 + lVar41 + 8);
                auVar90 = *(undefined1 (*) [16])&param_14->field0_0x0;
                dVar109 = (param_14->field0_0x0)._s_0.Z;
                    /* WARNING: Load size is inaccurate */
                _Var106 = *(__m128 *)((__m128 *)(pFVar46 + lVar41 + 0x10))->m128_f32;
                dVar132 = _Var106._0_8_;
                auVar56 = *(undefined1 (*) [16])(pFVar46 + lVar41);
                auVar114 = *(undefined1 (*) [16])(pFVar46 + lVar41);
                dVar133 = *(double *)(pFVar46 + lVar41 + 0x18);
                dVar110 = auVar90._8_8_;
                auVar103 = blendpd(auVar56,(undefined1  [16])_Var106,2);
                auVar148._0_8_ = dVar110 * auVar56._0_8_ - auVar56._8_8_ * auVar90._0_8_;
                auVar148._8_8_ = dVar109 * auVar56._8_8_ - dVar132 * dVar110;
                auVar140._8_4_ = SUB84(auVar148._8_8_,0);
                auVar140._0_8_ = auVar148._0_8_;
                auVar140._12_4_ = (int)((ulonglong)auVar148._8_8_ >> 0x20);
                auVar11._8_8_ = 0;
                auVar11._0_8_ = dVar109;
                auVar56 = blendpd(auVar90,auVar11,2);
                auVar74._0_8_ = auVar56._0_8_ * dVar132 - auVar103._0_8_ * dVar109;
                auVar74._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar103._8_8_ * 0.0;
                auVar56 = blendpd(auVar148,auVar74,2);
                dVar141 = auVar140._8_8_ + auVar140._8_8_;
                dVar52 = auVar74._0_8_ + auVar74._0_8_;
                auVar149._0_8_ = auVar56._0_8_ + auVar56._0_8_;
                auVar149._8_8_ = auVar56._8_8_ + auVar56._8_8_;
                auVar128._8_4_ = SUB84(dVar52,0);
                auVar128._0_8_ = dVar141;
                uVar143 = (undefined4)((ulonglong)dVar52 >> 0x20);
                auVar128._12_4_ = uVar143;
                auVar98._8_4_ = SUB84(dVar52,0);
                auVar98._0_8_ = dVar141;
                auVar98._12_4_ = uVar143;
                auVar56 = blendpd(auVar98,auVar149,2);
                auVar129._0_8_ = auVar128._8_8_ * auVar114._0_8_ - auVar114._8_8_ * dVar141;
                auVar129._8_8_ = auVar149._0_8_ * auVar114._8_8_ - dVar132 * dVar52;
                auVar114 = blendpd(auVar114,(undefined1  [16])_Var106,2);
                auVar75._8_4_ = SUB84(auVar129._8_8_,0);
                auVar75._0_8_ = auVar129._0_8_;
                auVar75._12_4_ = (int)((ulonglong)auVar129._8_8_ >> 0x20);
                auVar99._0_8_ = auVar56._0_8_ * dVar132 - auVar114._0_8_ * auVar149._0_8_;
                auVar99._8_8_ = auVar56._8_8_ * _Var106._8_8_ - auVar114._8_8_ * auVar149._8_8_;
                auVar56 = blendpd(auVar129,auVar99,2);
                local_b10._s_0.X = dVar141 * dVar133 + auVar90._0_8_ + auVar75._8_8_;
                local_b10._s_0.Y = dVar52 * dVar133 + dVar110 + auVar99._0_8_;
                local_b10._s_0.Z = auVar149._0_8_ * dVar133 + dVar109 + auVar56._0_8_;
                pFVar39 = FCRSimPointContainer::GetPointInterpolated(this_00,&local_548,uVar43 + 1);
                local_968 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x20);
                local_958 = *(double *)(pFVar46 + lVar41 + 0x30);
                auVar23._4_8_ = *(double *)(pFVar46 + lVar41 + 0x30 + 8);
                auVar23._0_4_ = local_968._4_4_;
                auVar76._0_8_ = auVar23._0_8_ << 0x20;
                auVar76._8_4_ = local_968._8_4_;
                auVar76._12_4_ = local_968._12_4_;
                auVar114._0_8_ = (pFVar39->Position).field0_0x0._s_0.X - local_968._0_8_;
                auVar114._8_8_ = 0.0;
                dVar110 = (pFVar39->Position).field0_0x0._s_0.Z - local_958;
                auVar134._0_8_ = (pFVar39->Position).field0_0x0._s_0.Y - auVar76._8_8_;
                auVar134._8_8_ = 0.0;
                dVar109 = (double)CONCAT44((uint)((ulonglong)auVar114._0_8_ >> 0x20) & uVar44,
                                           SUB84(auVar114._0_8_,0) & uVar47);
                local_b28._s_0.Z = dVar110;
                local_b28._s_0.X = auVar114._0_8_;
                local_b28._s_0.Y = auVar134._0_8_;
                if ((((dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                       dVar109 == (double)CONCAT44(uVar159,uVar158)) &&
                     (dVar109 = (double)CONCAT44((uint)((ulonglong)auVar134._0_8_ >> 0x20) & uVar44,
                                                 SUB84(auVar134._0_8_,0) & uVar47),
                     dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                     dVar109 == (double)CONCAT44(uVar159,uVar158))) &&
                    (dVar109 = (double)CONCAT44((uint)((ulonglong)dVar110 >> 0x20) & uVar44,
                                                SUB84(dVar110,0) & uVar47),
                    dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                    dVar109 == (double)CONCAT44(uVar159,uVar158))) ||
                   (((dVar109 = (double)CONCAT44((uint)((ulonglong)local_b10._0_8_ >> 0x20) & uVar44
                                                 ,SUB84(local_b10._s_0.X,0) & uVar47),
                     dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                     dVar109 == (double)CONCAT44(uVar159,uVar158) &&
                     (dVar109 = (double)CONCAT44((uint)((ulonglong)local_b10._8_8_ >> 0x20) & uVar44
                                                 ,SUB84(local_b10._s_0.Y,0) & uVar47),
                     dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                     dVar109 == (double)CONCAT44(uVar159,uVar158))) &&
                    (dVar109 = (double)CONCAT44((uint)((ulonglong)local_b10._16_8_ >> 0x20) & uVar44
                                                ,SUB84(local_b10._s_0.Z,0) & uVar47),
                    dVar109 < (double)CONCAT44(uVar159,uVar158) ||
                    dVar109 == (double)CONCAT44(uVar159,uVar158))))) goto LAB_14a59c5fe;
                dVar133 = auVar134._0_8_ * auVar134._0_8_ + auVar114._0_8_ * auVar114._0_8_ +
                          dVar110 * dVar110;
                dVar109 = dVar110;
                if ((dVar133 != (double)CONCAT44(uVar157,uVar156)) &&
                   (local_b28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                   local_b28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                   local_b28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                   dVar109 = local_c48, dVar82 <= dVar133)) {
                  local_940 = (double)CONCAT44(uVar157,uVar156) / SQRT(dVar133);
                  local_b28._s_0.Z = local_940 * dVar110;
                  local_b28._s_0.X = local_940 * auVar114._0_8_;
                  local_b28._s_0.Y = local_940 * auVar134._0_8_;
                  dVar109 = local_940 * dVar110;
                }
                local_c48 = dVar109;
                UE::Math::TQuat<double>::FindBetweenNormals
                          (&local_8b8,(TVector<double> *)&local_b10._s_0,
                           (TVector<double> *)&local_b28._s_0);
                _Var106 = GlobalVectorConstants::Float0001;
                dVar110 = *(double *)(pFVar46 + lVar41 + 0x10);
                dVar133 = *(double *)(pFVar46 + lVar41 + 0x10 + 8);
                dVar132 = *(double *)(pFVar46 + lVar41);
                dVar141 = *(double *)(pFVar46 + lVar41 + 8);
                dVar52 = local_8b8.X;
                auVar115._8_8_ = local_8b8.Y;
                dVar109 = local_8b8.W;
                auVar150._8_4_ = local_8b8.X._0_4_;
                auVar150._0_8_ = dVar52;
                auVar150._12_4_ = local_8b8.X._4_4_;
                auVar115._0_8_ = auVar115._8_8_;
                dVar82 = local_8b8.Z;
                auVar77._8_4_ = local_8b8.Z._0_4_;
                auVar77._0_8_ = dVar82;
                auVar77._12_4_ = local_8b8.Z._4_4_;
                auVar114._0_8_ =
                     dVar52 * dVar133 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar132 * dVar109 +
                     dVar110 * auVar115._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar82 * dVar141 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                auVar114._8_8_ =
                     auVar150._8_8_ * dVar110 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar141 * dVar109 +
                     dVar133 * auVar115._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar77._8_8_ * dVar132 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                uVar143 = SUB84(__real_3e45798ee0000000,0);
                uVar152 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                auVar78._8_4_ = SUB84(auVar114._8_8_,0);
                auVar78._0_8_ = auVar114._0_8_;
                auVar78._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
                local_948 = __real_3e45798ee0000000;
                dVar155 = dVar52 * dVar141 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                          dVar110 * dVar109 +
                          dVar132 * auVar115._8_8_ *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                          dVar82 * dVar133 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar110 = dVar52 * dVar132 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                          dVar133 * dVar109 +
                          dVar141 * auVar115._8_8_ *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                          dVar82 * dVar110 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                auVar100._8_4_ = SUB84(dVar110,0);
                auVar100._0_8_ = dVar155;
                auVar100._12_4_ = (int)((ulonglong)dVar110 >> 0x20);
                dVar82 = dVar155 * dVar155 + auVar114._0_8_ * auVar114._0_8_;
                dVar109 = auVar100._8_8_ * dVar110 + auVar78._8_8_ * auVar114._8_8_;
                auVar79._8_4_ = SUB84(dVar109,0);
                auVar79._0_8_ = dVar82;
                auVar79._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
                auVar80._0_8_ = auVar79._8_8_ + dVar82;
                auVar80._8_8_ = dVar82 + dVar109;
                auVar56 = sqrtpd(auVar115,auVar80);
                uVar48 = -(ulonglong)(__real_3e45798ee0000000 <= auVar80._0_8_);
                uVar50 = -(ulonglong)(__real_3e45798ee0000000 <= auVar80._8_8_);
                auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar56);
                uVar40 = (uint)(uVar48 >> 0x20);
                uVar153 = (uint)(uVar50 >> 0x20);
                auVar101._0_8_ = uVar48 & (ulonglong)(auVar90._0_8_ * dVar155);
                uVar37 = uVar50 & (ulonglong)(auVar90._8_8_ * dVar110);
                auVar101._8_4_ = (undefined4)uVar37;
                auVar101._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar130._0_4_ =
                     ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                auVar130._4_4_ =
                     ~uVar40 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
                auVar130._8_4_ =
                     ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                auVar130._12_4_ =
                     ~uVar153 &
                     (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
                ;
                auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar56);
                auVar102._0_8_ = (ulonglong)(auVar90._0_8_ * auVar114._0_8_) & uVar48;
                uVar37 = (ulonglong)(auVar90._8_8_ * auVar114._8_8_) & uVar50;
                auVar102._8_4_ = (undefined4)uVar37;
                auVar102._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar134._0_4_ =
                     ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                auVar134._4_4_ =
                     ~uVar40 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
                auVar134._8_4_ =
                     ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                auVar134._12_4_ =
                     ~uVar153 &
                     (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                ;
                *(undefined1 (*) [16])(pFVar46 + lVar41) = auVar102 | auVar134;
                *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x10) = auVar130 | auVar101;
              }
              else {
LAB_14a59c5fe:
                uVar143 = SUB84(__real_3e45798ee0000000,0);
                uVar152 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              }
              if ((fVar161 < fVar160) && (uVar43 == (param_21->CachedBones).ArrayNum - 1U)) {
                local_808 = *(undefined1 (*) [16])(pFVar46 + lVar41 + 0x20);
                local_7f8 = *(double *)(pFVar46 + lVar41 + 0x30);
                auVar24._4_8_ = auVar114._8_8_;
                auVar24._0_4_ = local_808._4_4_;
                auVar151._0_8_ = auVar24._0_8_ << 0x20;
                auVar151._8_4_ = local_808._8_4_;
                auVar151._12_4_ = local_808._12_4_;
                local_7e0 = local_448.Translation.ZW.m128d_f64[0];
                uVar118 = local_808._0_8_ - local_448.Translation.XY.m128d_f64[0];
                auVar134._0_8_ = local_7f8 - local_448.Translation.ZW.m128d_f64[0];
                auVar134._8_8_ = *(double *)(pFVar46 + lVar41 + 0x30 + 8);
                auVar25._4_8_ = local_448.Translation.ZW.m128d_f64[1];
                auVar25._0_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[0] >> 0x20);
                auVar81._0_8_ = auVar25._0_8_ << 0x20;
                auVar81._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
                auVar81._12_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[1] >> 0x20);
                auVar114._0_8_ = auVar151._8_8_ - auVar81._8_8_;
                auVar114._8_8_ = (double)local_808._8_8_;
                dVar82 = (double)CONCAT44((uint)((ulonglong)uVar118 >> 0x20) & uVar44,
                                          (uint)uVar118 & uVar47);
                if (((double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                     dVar82 != (double)CONCAT44(uVar159,uVar158)) ||
                   ((dVar82 = (double)CONCAT44((uint)((ulonglong)auVar114._0_8_ >> 0x20) & uVar44,
                                               SUB84(auVar114._0_8_,0) & uVar47),
                    (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                    dVar82 != (double)CONCAT44(uVar159,uVar158) ||
                    (dVar82 = (double)CONCAT44((uint)((ulonglong)auVar134._0_8_ >> 0x20) & uVar44,
                                               SUB84(auVar134._0_8_,0) & uVar47),
                    (double)CONCAT44(uVar159,uVar158) <= dVar82 &&
                    dVar82 != (double)CONCAT44(uVar159,uVar158))))) {
                  auVar108._8_4_ = local_808._8_4_;
                  auVar108._0_8_ = auVar114._0_8_;
                  auVar108._12_4_ = local_808._12_4_;
                  local_a48 = local_448.Translation.XY.m128d_f64[0];
                  dStack_a40 = local_448.Translation.XY.m128d_f64[1];
                  _Var106.m128_u64[1] = auVar108._8_8_;
                  local_a38 = local_448.Translation.ZW.m128d_f64[0];
                  _Var106.m128_u64[0] =
                       (ulong64)(auVar114._0_8_ * auVar114._0_8_ + (double)uVar118 * (double)uVar118
                                + auVar134._0_8_ * auVar134._0_8_);
                  if ((double)_Var106.m128_u64[0] == (double)CONCAT44(uVar157,uVar156)) {
                    local_af8._8_8_ = auVar114._0_8_;
                    local_ae8 = auVar134._0_8_;
                  }
                  else if ((double)CONCAT44(uVar152,uVar143) <= (double)_Var106.m128_u64[0]) {
                    _Var106.m128_u64[1] = 0;
                    local_950 = (double)CONCAT44(uVar157,uVar156) /
                                SQRT((double)_Var106.m128_u64[0]);
                    local_ae8 = local_950 * auVar134._0_8_;
                    uVar118 = (double)uVar118 * local_950;
                    local_af8._8_8_ = local_950 * auVar114._0_8_;
                    auVar114._8_8_ = 0.0;
                    auVar114._0_8_ = local_950 * auVar114._0_8_;
                    auVar134._8_8_ = 0.0;
                    auVar134._0_8_ = local_ae8;
                  }
                  else {
                    local_af8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_af8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_ae8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    auVar134._8_8_ = 0.0;
                    auVar134._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    auVar114._8_4_ =
                         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                    auVar114._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    auVar114._12_4_ =
                         (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >>
                              0x20);
                    uVar118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  }
                  dVar82 = (double)fVar160;
                  local_7d8 = (double)uVar118 * dVar82 + local_448.Translation.XY.m128d_f64[0];
                  auVar114._0_8_ = auVar114._0_8_ * dVar82 + local_448.Translation.XY.m128d_f64[1];
                  auVar134._0_8_ = auVar134._0_8_ * dVar82 + local_448.Translation.ZW.m128d_f64[0];
                  *(double *)(pFVar46 + lVar41 + 0x20) = local_7d8;
                  *(double *)(pFVar46 + lVar41 + 0x20 + 8) = auVar114._0_8_;
                  *(double *)(pFVar46 + lVar41 + 0x30) = auVar134._0_8_;
                  *(double *)(pFVar46 + lVar41 + 0x30 + 8) = 0.0;
                  dStack_7d0 = auVar114._0_8_;
                  local_7c8 = auVar134._0_8_;
                }
              }
            }
          }
          uVar40 = 0;
          if ((int)uVar43 < (param_21->CachedBones).ArrayNum) {
            uVar40 = ~uVar43 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          piVar1 = local_d50;
          uVar40 = 0xffffffff;
          uVar5 = *(ushort *)
                   ((param_21->CachedBones).AllocatorInstance.Data + (longlong)local_d50 + 0xc);
          if (uVar5 != 0xffff) {
            uVar40 = (uint)uVar5;
          }
          local_6d8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar46 + lVar41);
          local_6d8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 8);
          local_6d8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar46 + lVar41 + 0x10);
          local_6d8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 0x10 + 8);
          local_6d8.Translation.XY.m128d_f64[0] = *(double *)(pFVar46 + lVar41 + 0x20);
          local_6d8.Translation.XY.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 0x20 + 8);
          local_6d8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar46 + lVar41 + 0x30);
          local_6d8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 0x30 + 8);
          local_6d8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar46 + lVar41 + 0x40);
          local_6d8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 0x40 + 8);
          local_6d8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar46 + lVar41 + 0x50);
          local_6d8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar46 + lVar41 + 0x50 + 8);
          URigHierarchy::SetGlobalTransformByIndex
                    (this,uVar40,&local_6d8,false,param_19,false,false);
          local_d50 = (int *)((longlong)piVar1 + 0x20);
          local_d60 = local_d60 + 0x40;
          uVar143 = SUB84(__real_3e45798ee0000000,0);
          uVar152 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar43 = uVar43 + 1;
          lVar41 = lVar41 + 0x60;
        } while ((int)uVar43 < (param_21->CachedBones).ArrayNum);
      }
      pFVar30 = local_bc0;
      pFVar29 = local_cc8;
      fVar161 = __real_bf800000;
      if ((*(FRigVMDrawInterface **)&local_cc8->field_0x58 != (FRigVMDrawInterface *)0x0) &&
         (local_bc0->bEnabled != false)) {
        pFVar4 = &local_bc0->Color;
        FRigVMDrawInterface::DrawLine
                  (*(FRigVMDrawInterface **)&local_cc8->field_0x58,&local_bc0->WorldOffset,
                   (TVector<double> *)&local_d38._s_0,(TVector<double> *)&local_cf0._s_0,pFVar4,0.0,
                   SDPG_Foreground,__real_bf800000);
        FRigVMDrawInterface::DrawLine
                  (*(FRigVMDrawInterface **)&pFVar29->field_0x58,&pFVar30->WorldOffset,
                   (TVector<double> *)&local_d38._s_0,(TVector<double> *)&local_bb8._s_0,pFVar4,0.0,
                   SDPG_Foreground,fVar161);
        local_2c8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
        local_2c8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
        local_2c8.Translation.ZW.m128d_f64[0] = local_d38._s_0.Z;
        local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
        dVar82 = (double)pFVar30->Scale;
        local_2c8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
        local_2c8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
        local_2c8.Translation.XY.m128d_f64[0] = local_d38._s_0.X;
        local_2c8.Translation.XY.m128d_f64[1] = local_d38._s_0.Y;
        local_2c8.Scale3D.XY.m128d_f64[0] =
             dVar82 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
             __real_4024000000000000;
        local_2c8.Scale3D.XY.m128d_f64[1] =
             dVar82 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y *
             __real_4024000000000000;
        local_2c8.Scale3D.ZW.m128d_f64[0] =
             dVar82 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
             __real_4024000000000000;
        local_2c8.Scale3D.ZW.m128d_f64[1] = 0.0;
        FRigVMDrawInterface::DrawBox
                  (*(FRigVMDrawInterface **)&pFVar29->field_0x58,&pFVar30->WorldOffset,&local_2c8,
                   pFVar4,0.0,SDPG_Foreground,fVar161);
      }
    }
  }
  return;
}

