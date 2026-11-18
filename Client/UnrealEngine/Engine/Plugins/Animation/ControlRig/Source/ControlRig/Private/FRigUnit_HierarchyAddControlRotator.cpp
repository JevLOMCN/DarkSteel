// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a480340

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlRotator");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4803c0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlRotator::GetExecuteContextStruct
          (FRigUnit_HierarchyAddControlRotator *this)

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

// GetControlTypeToSpawn @ 14a480650

ERigControlType __thiscall
FRigUnit_HierarchyAddControlRotator::GetControlTypeToSpawn
          (FRigUnit_HierarchyAddControlRotator *this)

{
  return Rotator;
}

// Execute @ 14a480890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlRotator::Execute(FRigUnit_HierarchyAddControlRotator *this)

{
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->InitialValue,&this->Settings,
                (TTransform<double> *)&this->_padding_,(ERigVMTransformSpace)this->_padding_,
                (FRigElementKey *)&this->_padding_,(FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a529400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlRotator::Execute
          (FRigUnit_HierarchyAddControlRotator *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a5466f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlRotator::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TRotator<double> *pTVar5;
  FRigUnit_HierarchyAddControlRotator_Settings *pFVar6;
  TTransform<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  ERigVMTransformSpace *pEVar9;
  FRigElementKey *pFVar10;
  FName *pFVar11;
  FRigElementKey *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
    pTVar5 = (TRotator<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TRotator<double> *)
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
    pFVar6 = (FRigUnit_HierarchyAddControlRotator_Settings *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_HierarchyAddControlRotator_Settings *)
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
    pTVar7 = (TTransform<double> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  EVar1 = *pEVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pTVar5,pFVar6,pTVar7,EVar1,pFVar10,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a57dbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlRotator::StaticExecute
          (FControlRigExecuteContext *param_1,TRotator<double> *param_2,
          FRigUnit_HierarchyAddControlRotator_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  URigHierarchy *this;
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined3 uVar10;
  FNameEntryId FVar11;
  bool bVar12;
  int iVar13;
  URigHierarchyController *this_00;
  TQuat<double> *pTVar14;
  TVector<double> *pTVar15;
  FRigControlSettings *pFVar16;
  FRigElementKey *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStackY_888 [32];
  FString local_838;
  FString local_828;
  float local_818;
  float local_808;
  FString local_7f8;
  FString local_7e8;
  TRotator<double> local_7d8;
  TVector<double>_u_0 local_7b8;
  double local_798 [2];
  double local_788 [2];
  FRigControlSettings local_778;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  undefined4 local_418;
  undefined1 local_408 [24];
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  bool local_388;
  undefined3 uStack_387;
  TTransform<double> local_378;
  FRigControlSettings local_318;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_888;
  local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_7;
  local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.Data.ArrayNum = 0;
  local_828.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57e2cf;
  bVar12 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar12) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_828,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57e2cf;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_838.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00 = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this_00 == (URigHierarchyController *)0x0) goto LAB_14a57e2cf;
    FRigControlSettings::FRigControlSettings(&local_318);
    (**(code **)(*(longlong *)param_3 + 0x10))(param_3,&local_318);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              (&local_378,param_4,param_5,param_6,param_1->Hierarchy);
    local_7d8.Pitch = param_2->Pitch;
    local_7d8.Yaw = param_2->Yaw;
    local_7d8.Roll = param_2->Roll;
    if (param_3->InitialSpace == GlobalSpace) {
      this = param_1->Hierarchy;
      local_838.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
      local_838.Data.ArrayNum = (param_6->Name).Number;
      iVar13 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_838,true);
      URigHierarchy::GetGlobalTransformByIndex(this,(TTransform<double> *)local_408,iVar13,false);
      local_558.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_558.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_558.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_558.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_558.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_558.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_558.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_558.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_558.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_558.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_558.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_558.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_558,&local_378,(TTransform<double> *)local_408);
      pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_7d8,(TQuat<double> *)&local_7b8._s_0);
      local_4f8.Rotation.ZW.m128d_f64[0] = pTVar14->Z;
      local_4f8.Rotation.ZW.m128d_f64[1] = pTVar14->W;
      local_4f8.Rotation.XY.m128d_f64[0] = pTVar14->X;
      local_4f8.Rotation.XY.m128d_f64[1] = pTVar14->Y;
      local_4f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_4f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_4f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_4f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::GetRelativeTransform(&local_4f8,&local_498,&local_558);
      auVar25._0_8_ =
           local_498.Rotation.XY.m128d_f64[0] * local_498.Rotation.XY.m128d_f64[0] +
           local_498.Rotation.ZW.m128d_f64[0] * local_498.Rotation.ZW.m128d_f64[0];
      auVar25._8_8_ =
           local_498.Rotation.XY.m128d_f64[1] * local_498.Rotation.XY.m128d_f64[1] +
           local_498.Rotation.ZW.m128d_f64[1] * local_498.Rotation.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(auVar25._8_8_,0);
      auVar22._0_8_ = auVar25._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar23._0_8_ = auVar22._8_8_ + auVar25._0_8_;
      auVar23._8_8_ = auVar25._0_8_ + auVar25._8_8_;
      auVar26 = sqrtpd(auVar25,auVar23);
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar20 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar23._8_8_)
      ;
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar23._8_8_)
      ;
      auVar28._0_8_ = uVar18 & (ulonglong)(auVar27._0_8_ * local_498.Rotation.XY.m128d_f64[0]);
      uVar1 = uVar20 & (ulonglong)(auVar27._8_8_ * local_498.Rotation.XY.m128d_f64[1]);
      auVar28._8_4_ = (undefined4)uVar1;
      auVar28._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar27._4_4_ =
           ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar27._0_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar27._8_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar27._12_4_ =
           ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_798 = (double  [2])(auVar28 | auVar27);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
      auVar24._0_8_ = uVar19 & (ulonglong)(auVar27._0_8_ * local_498.Rotation.ZW.m128d_f64[0]);
      uVar1 = uVar21 & (ulonglong)(auVar27._8_8_ * local_498.Rotation.ZW.m128d_f64[1]);
      auVar24._8_4_ = (undefined4)uVar1;
      auVar24._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar26._4_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar26._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar26._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar26._12_4_ =
           ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_788 = (double  [2])(auVar24 | auVar26);
      local_498.Rotation.XY.m128d_f64 = local_798;
      local_498.Rotation.ZW.m128d_f64 = local_788;
      UE::Math::TQuat<double>::Rotator
                ((TQuat<double> *)local_798,(TRotator<double> *)&local_7b8._s_0);
      local_7d8.Pitch = local_7b8._s_0.X;
      local_7d8.Yaw = local_7b8._s_0.Y;
      local_7d8.Roll = local_7b8._s_0.Z;
    }
    pTVar15 = UE::Math::TRotator<double>::Euler(&local_7d8,(TVector<double> *)&local_7b8._s_0);
    dVar2 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[0];
    dVar3 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[1];
    iVar13 = this_00->CurrentInstructionIndex;
    dVar4 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[0];
    dVar5 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[1];
    dVar6 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dVar7 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    local_418._0_1_ = true;
    local_418._1_3_ = 0;
    dVar8 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[0];
    dVar9 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[1];
    local_818 = (float)(pTVar15->field0_0x0)._s_0.X;
    local_808 = (float)(pTVar15->field0_0x0)._s_0.Y;
    local_838.Data.AllocatorInstance.Data._0_4_ = (float)(pTVar15->field0_0x0)._s_0.Z;
    local_798 = *&(param_3->Shape).Transform.Scale3D.XY.m128d_f64;
    local_7b8._s_0.X = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    local_7b8._s_0.Y = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    this_00->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar16 = FRigControlSettings::FRigControlSettings(&local_778,&local_318);
    local_4f8.Scale3D.XY.m128d_f64[0] = local_798[0];
    local_4f8.Scale3D.XY.m128d_f64[1] = local_798[1];
    local_388 = local_418._0_1_;
    uStack_387 = local_418._1_3_;
    local_838.Data.ArrayNum = (param_6->Name).Number;
    local_4f8.Scale3D.ZW.m128d_f64[0] = local_7b8._s_0.X;
    local_4f8.Scale3D.ZW.m128d_f64[1] = local_7b8._s_0.Y;
    local_408._4_4_ = local_808;
    local_408._0_4_ = local_818;
    local_408[8] = (ERigElementType)local_838.Data.AllocatorInstance.Data;
    local_408._9_3_ = local_838.Data.AllocatorInstance.Data._1_3_;
    local_408._12_4_ = 0;
    local_838.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
    local_558.Rotation.XY.m128d_f64[0] = local_378.Rotation.XY.m128d_f64[0];
    local_558.Rotation.XY.m128d_f64[1] = local_378.Rotation.XY.m128d_f64[1];
    local_558.Rotation.ZW.m128d_f64[0] = local_378.Rotation.ZW.m128d_f64[0];
    local_558.Rotation.ZW.m128d_f64[1] = local_378.Rotation.ZW.m128d_f64[1];
    local_558.Translation.XY.m128d_f64[0] = local_378.Translation.XY.m128d_f64[0];
    local_558.Translation.XY.m128d_f64[1] = local_378.Translation.XY.m128d_f64[1];
    local_558.Translation.ZW.m128d_f64[0] = local_378.Translation.ZW.m128d_f64[0];
    local_558.Translation.ZW.m128d_f64[1] = local_378.Translation.ZW.m128d_f64[1];
    local_558.Scale3D.XY.m128d_f64[0] = local_378.Scale3D.XY.m128d_f64[0];
    local_558.Scale3D.XY.m128d_f64[1] = local_378.Scale3D.XY.m128d_f64[1];
    local_558.Scale3D.ZW.m128d_f64[0] = local_378.Scale3D.ZW.m128d_f64[0];
    local_558.Scale3D.ZW.m128d_f64[1] = local_378.Scale3D.ZW.m128d_f64[1];
    local_408._16_8_ = 0.0;
    dStack_3f0 = 0.0;
    local_3e8 = 0.0;
    dStack_3e0 = 0.0;
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3a8._0_4_ = 0.0;
    local_3a8._4_4_ = 0.0;
    uStack_3a0._0_4_ = 0.0;
    uStack_3a0._4_4_ = 0.0;
    local_398._0_4_ = 0.0;
    local_398._4_4_ = 0.0;
    uStack_390._0_4_ = 0.0;
    uStack_390._4_4_ = 0.0;
    local_4f8.Rotation.XY.m128d_f64[0] = dVar2;
    local_4f8.Rotation.XY.m128d_f64[1] = dVar3;
    local_4f8.Rotation.ZW.m128d_f64[0] = dVar4;
    local_4f8.Rotation.ZW.m128d_f64[1] = dVar5;
    local_4f8.Translation.XY.m128d_f64[0] = dVar6;
    local_4f8.Translation.XY.m128d_f64[1] = dVar7;
    local_4f8.Translation.ZW.m128d_f64[0] = dVar8;
    local_4f8.Translation.ZW.m128d_f64[1] = dVar9;
    pFVar17 = URigHierarchyController::AddControl
                        (this_00,(FRigElementKey *)&local_7f8,
                         *(FName *)local_7e8.Data.AllocatorInstance.Data,
                         (FRigElementKey *)&local_838,pFVar16,(FRigControlValue *)local_408,
                         &local_558,&local_4f8,false,false);
    uVar10 = *(undefined3 *)&pFVar17->field_0x1;
    FVar11.Value = (pFVar17->Name).ComparisonIndex.Value;
    param_8->Type = pFVar17->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar10;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar11.Value;
    (param_8->Name).Number = (pFVar17->Name).Number;
    this_00->CurrentInstructionIndex = iVar13;
    if (local_318.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_318.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_318.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_318.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.DrivenControls.AllocatorInstance.Data);
    }
    if (local_318.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_318.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_838);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_7e8);
    ::FString::PrintfImpl(&local_7f8,L"Node can only run in %s or %s Event");
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    local_828.Data.AllocatorInstance.Data = local_7f8.Data.AllocatorInstance.Data;
    local_828.Data.ArrayNum = local_7f8.Data.ArrayNum;
    local_828.Data.ArrayMax = local_7f8.Data.ArrayMax;
    local_7f8.Data.ArrayNum = 0;
    local_7f8.Data.ArrayMax = 0;
    local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.LimitEnabled.AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
    if ((FName *)local_7e8.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      local_318.LimitEnabled.AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
    }
  }
  if (local_318.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57e2cf:
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  return;
}

