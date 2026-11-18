// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a47e920

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47e9a0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlVector::GetExecuteContextStruct
          (FRigUnit_HierarchyAddControlVector *this)

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

// GetControlTypeToSpawn @ 14a47efa0

ERigControlType __thiscall
FRigUnit_HierarchyAddControlVector::GetControlTypeToSpawn(FRigUnit_HierarchyAddControlVector *this)

{
  return ((this->Settings).bIsPosition == false) + Position;
}

// Execute @ 14a47f050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlVector::Execute(FRigUnit_HierarchyAddControlVector *this)

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

// Execute @ 14a529520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlVector::Execute
          (FRigUnit_HierarchyAddControlVector *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a546d50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  FRigUnit_HierarchyAddControlVector_Settings *pFVar6;
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
    pTVar5 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
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
    pFVar6 = (FRigUnit_HierarchyAddControlVector_Settings *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_HierarchyAddControlVector_Settings *)
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

// StaticExecute @ 14a57f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlVector::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,
          FRigUnit_HierarchyAddControlVector_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  URigHierarchy *this;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double adVar5 [2];
  double adVar6 [2];
  undefined3 uVar7;
  FNameEntryId FVar8;
  bool bVar9;
  int iVar10;
  URigHierarchyController *this_00;
  FRigControlSettings *pFVar11;
  FRigElementKey *pFVar12;
  double dVar13;
  undefined1 auStackY_848 [32];
  FString local_7f8;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  FString local_7c8;
  float local_7b8;
  float local_7a8;
  FString local_798;
  FString local_788;
  double local_778;
  double dStack_770;
  FRigControlSettings local_768;
  TTransform<double> local_548;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  undefined4 local_408;
  undefined1 local_3f8 [24];
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  bool local_378;
  undefined3 uStack_377;
  TTransform<double> local_368;
  FRigControlSettings local_308;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_788.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_7;
  local_7c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c8.Data.ArrayNum = 0;
  local_7c8.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57f6e4;
  bVar9 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar9) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_7c8,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57f6e4;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00 = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this_00 == (URigHierarchyController *)0x0) goto LAB_14a57f6e4;
    FRigControlSettings::FRigControlSettings(&local_308);
    (**(code **)(param_3->_padding_ + 0x10))(param_3,&local_308);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              (&local_368,param_4,param_5,param_6,param_1->Hierarchy);
    local_7e8 = (param_2->field0_0x0)._s_0.X;
    dStack_7e0 = (param_2->field0_0x0)._s_0.Y;
    dVar13 = (param_2->field0_0x0)._s_0.Z;
    local_7d8 = dVar13;
    if (param_3->InitialSpace == GlobalSpace) {
      this = param_1->Hierarchy;
      local_7f8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
      local_7f8.Data.ArrayNum = (param_6->Name).Number;
      if (param_3->bIsPosition == false) {
        iVar10 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_7f8,true);
        URigHierarchy::GetGlobalTransformByIndex(this,&local_488,iVar10,false);
        local_7e8 = local_7e8 * local_488.Scale3D.XY.m128d_f64[0];
        dStack_7e0 = dStack_7e0 * local_488.Scale3D.XY.m128d_f64[1];
        dVar13 = local_7d8 * local_488.Scale3D.ZW.m128d_f64[0];
      }
      else {
        iVar10 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_7f8,true);
        URigHierarchy::GetGlobalTransformByIndex(this,(TTransform<double> *)local_3f8,iVar10,false);
        local_548.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_548.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_548.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_548.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_548.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_548.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_548.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_548.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_548.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_548.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_548.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_548.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_548.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_548.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_548.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_548.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_548.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_548.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_548,&local_368,(TTransform<double> *)local_3f8);
        local_4e8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_4e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_4e8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_4e8.Translation.XY.m128d_f64[0] = local_7e8;
        local_4e8.Translation.XY.m128d_f64[1] = dStack_7e0;
        local_4e8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_4e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_4e8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_4e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_4e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_4e8.Translation.ZW.m128d_f64[0] = local_7d8;
        local_4e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_4e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_4e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_4e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::GetRelativeTransform(&local_4e8,&local_488,&local_548);
        dStack_7e0 = local_488.Translation.XY.m128d_f64[1];
        dVar13 = local_488.Translation.ZW.m128d_f64[0];
        local_7e8 = local_488.Translation.XY.m128d_f64[0];
      }
    }
    adVar5 = *&(param_3->Shape).Transform.Rotation.XY.m128d_f64;
    adVar6 = *&(param_3->Shape).Transform.Rotation.ZW.m128d_f64;
    dVar1 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dVar2 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    dVar3 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[0];
    dVar4 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[1];
    local_408._0_1_ = true;
    local_408._1_3_ = 0;
    local_7b8 = (float)local_7e8;
    local_7a8 = (float)dStack_7e0;
    local_7f8.Data.AllocatorInstance.Data._0_4_ = (float)dVar13;
    local_778 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[0];
    dStack_770 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[1];
    local_7e8 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    dStack_7e0 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    iVar10 = this_00->CurrentInstructionIndex;
    this_00->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar11 = FRigControlSettings::FRigControlSettings(&local_768,&local_308);
    local_4e8.Scale3D.XY.m128d_f64[1] = dStack_770;
    local_4e8.Scale3D.XY.m128d_f64[0] = local_778;
    local_378 = local_408._0_1_;
    uStack_377 = local_408._1_3_;
    local_7f8.Data.ArrayNum = (param_6->Name).Number;
    local_4e8.Scale3D.ZW.m128d_f64[1] = dStack_7e0;
    local_4e8.Scale3D.ZW.m128d_f64[0] = local_7e8;
    local_3f8._4_4_ = local_7a8;
    local_3f8._0_4_ = local_7b8;
    local_3f8[8] = (ERigElementType)local_7f8.Data.AllocatorInstance.Data;
    local_3f8._9_3_ = local_7f8.Data.AllocatorInstance.Data._1_3_;
    local_3f8._12_4_ = 0;
    local_7f8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
    local_3f8._16_8_ = 0.0;
    dStack_3e0 = 0.0;
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3a8 = 0.0;
    dStack_3a0 = 0.0;
    local_398._0_4_ = 0.0;
    local_398._4_4_ = 0.0;
    uStack_390._0_4_ = 0.0;
    uStack_390._4_4_ = 0.0;
    local_388._0_4_ = 0.0;
    local_388._4_4_ = 0.0;
    uStack_380._0_4_ = 0.0;
    uStack_380._4_4_ = 0.0;
    local_4e8.Rotation.XY.m128d_f64 = adVar5;
    local_4e8.Rotation.ZW.m128d_f64 = adVar6;
    local_4e8.Translation.XY.m128d_f64[0] = dVar1;
    local_4e8.Translation.XY.m128d_f64[1] = dVar2;
    local_4e8.Translation.ZW.m128d_f64[0] = dVar3;
    local_4e8.Translation.ZW.m128d_f64[1] = dVar4;
    pFVar12 = URigHierarchyController::AddControl
                        (this_00,(FRigElementKey *)&local_798,
                         *(FName *)local_788.Data.AllocatorInstance.Data,
                         (FRigElementKey *)&local_7f8,pFVar11,(FRigControlValue *)local_3f8,
                         &local_548,&local_4e8,false,false);
    uVar7 = *(undefined3 *)&pFVar12->field_0x1;
    FVar8.Value = (pFVar12->Name).ComparisonIndex.Value;
    param_8->Type = pFVar12->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar7;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar8.Value;
    (param_8->Name).Number = (pFVar12->Name).Number;
    this_00->CurrentInstructionIndex = iVar10;
    if (local_308.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_308.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_308.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_308.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.DrivenControls.AllocatorInstance.Data);
    }
    if (local_308.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_308.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_7f8);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_788);
    ::FString::PrintfImpl(&local_798,L"Node can only run in %s or %s Event");
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
    local_7c8.Data.AllocatorInstance.Data = local_798.Data.AllocatorInstance.Data;
    local_7c8.Data.ArrayNum = local_798.Data.ArrayNum;
    local_7c8.Data.ArrayMax = local_798.Data.ArrayMax;
    local_798.Data.ArrayNum = 0;
    local_798.Data.ArrayMax = 0;
    local_798.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.LimitEnabled.AllocatorInstance.Data = local_7f8.Data.AllocatorInstance.Data;
    if ((FName *)local_788.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
      local_308.LimitEnabled.AllocatorInstance.Data = local_7f8.Data.AllocatorInstance.Data;
    }
  }
  if (local_308.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57f6e4:
  if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
  }
  return;
}

