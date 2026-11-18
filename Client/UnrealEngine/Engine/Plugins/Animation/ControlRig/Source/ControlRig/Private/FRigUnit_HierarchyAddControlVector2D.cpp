// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a47ba20

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlVector2D");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47baa0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlVector2D::GetExecuteContextStruct
          (FRigUnit_HierarchyAddControlVector2D *this)

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

// GetControlTypeToSpawn @ 14a47be90

ERigControlType __thiscall
FRigUnit_HierarchyAddControlVector2D::GetControlTypeToSpawn
          (FRigUnit_HierarchyAddControlVector2D *this)

{
  return Vector2D;
}

// Execute @ 14a47bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlVector2D::Execute(FRigUnit_HierarchyAddControlVector2D *this)

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

// Execute @ 14a5294c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlVector2D::Execute
          (FRigUnit_HierarchyAddControlVector2D *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a546b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlVector2D::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  FRigUnit_HierarchyAddControlVector2D_Settings *pFVar6;
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
    pTVar5 = (TVector2<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector2<double> *)
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
    pFVar6 = (FRigUnit_HierarchyAddControlVector2D_Settings *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_HierarchyAddControlVector2D_Settings *)
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

// StaticExecute @ 14a57eb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlVector2D::StaticExecute
          (FControlRigExecuteContext *param_1,TVector2<double> *param_2,
          FRigUnit_HierarchyAddControlVector2D_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined3 uVar16;
  FNameEntryId FVar17;
  bool bVar18;
  URigHierarchyController *this;
  FRigControlSettings *pFVar19;
  FRigElementKey *pFVar20;
  undefined1 auStackY_788 [32];
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  undefined1 local_6f8 [16];
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  bool local_678;
  undefined3 uStack_677;
  TTransform<double> local_668;
  TTransform<double> local_608;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_528;
  FRigControlSettings local_518;
  FRigControlSettings local_2f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_7;
  local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_738.Data.ArrayNum = 0;
  local_738.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57efed;
  bVar18 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar18) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_738,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57efed;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this == (URigHierarchyController *)0x0) goto LAB_14a57efed;
    FRigControlSettings::FRigControlSettings(&local_2f8);
    (**(code **)(param_3->_padding_ + 0x10))(param_3,&local_2f8);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              ((TTransform<double> *)local_6f8,param_4,param_5,param_6,param_1->Hierarchy);
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[0];
    dVar5 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[1];
    dVar6 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[0];
    dVar7 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[1];
    dVar8 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dVar9 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    local_528._0_1_ = true;
    local_528._1_3_ = 0;
    dVar10 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[0];
    dVar11 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[1];
    dVar12 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[0];
    dVar13 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[1];
    dVar14 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    dVar15 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    iVar3 = this->CurrentInstructionIndex;
    local_5a8 = 0;
    uStack_5a0 = 0;
    this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar19 = FRigControlSettings::FRigControlSettings(&local_518,&local_2f8);
    local_678 = local_528._0_1_;
    uStack_677 = local_528._1_3_;
    local_608.Translation.XY.m128d_f64[0] = local_6d8;
    local_608.Translation.XY.m128d_f64[1] = dStack_6d0;
    local_608.Scale3D.XY.m128d_f64[0] = local_6b8;
    local_608.Scale3D.XY.m128d_f64[1] = dStack_6b0;
    local_608.Rotation.ZW.m128d_f64[0] = local_6e8;
    local_608.Rotation.ZW.m128d_f64[1] = dStack_6e0;
    local_608.Translation.ZW.m128d_f64[0] = local_6c8;
    local_608.Translation.ZW.m128d_f64[1] = dStack_6c0;
    local_6f8._8_4_ = (float)uStack_5a0;
    local_6f8._12_4_ = uStack_5a0._4_4_;
    local_728.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
    local_608.Scale3D.ZW.m128d_f64[0] = local_6a8;
    local_608.Scale3D.ZW.m128d_f64[1] = dStack_6a0;
    local_6e8 = 0.0;
    dStack_6e0 = 0.0;
    local_6d8 = 0.0;
    dStack_6d0 = 0.0;
    local_6c8 = 0.0;
    dStack_6c0 = 0.0;
    local_6b8 = 0.0;
    dStack_6b0 = 0.0;
    local_6a8 = 0.0;
    dStack_6a0 = 0.0;
    local_698._0_4_ = 0.0;
    local_698._4_4_ = 0.0;
    uStack_690._0_4_ = 0.0;
    uStack_690._4_4_ = 0.0;
    local_688._0_4_ = 0.0;
    local_688._4_4_ = 0.0;
    uStack_680._0_4_ = 0.0;
    uStack_680._4_4_ = 0.0;
    local_728.Data.ArrayNum = (param_6->Name).Number;
    local_6f8._0_4_ = (float)dVar1;
    local_6f8._4_4_ = (float)dVar2;
    local_668.Rotation.XY.m128d_f64[0] = dVar4;
    local_668.Rotation.XY.m128d_f64[1] = dVar5;
    local_668.Rotation.ZW.m128d_f64[0] = dVar6;
    local_668.Rotation.ZW.m128d_f64[1] = dVar7;
    local_668.Translation.XY.m128d_f64[0] = dVar8;
    local_668.Translation.XY.m128d_f64[1] = dVar9;
    local_668.Translation.ZW.m128d_f64[0] = dVar10;
    local_668.Translation.ZW.m128d_f64[1] = dVar11;
    local_668.Scale3D.XY.m128d_f64[0] = dVar12;
    local_668.Scale3D.XY.m128d_f64[1] = dVar13;
    local_668.Scale3D.ZW.m128d_f64[0] = dVar14;
    local_668.Scale3D.ZW.m128d_f64[1] = dVar15;
    pFVar20 = URigHierarchyController::AddControl
                        (this,(FRigElementKey *)&local_718,
                         *(FName *)local_708.Data.AllocatorInstance.Data,
                         (FRigElementKey *)&local_728,pFVar19,(FRigControlValue *)local_6f8,
                         &local_608,&local_668,false,false);
    uVar16 = *(undefined3 *)&pFVar20->field_0x1;
    FVar17.Value = (pFVar20->Name).ComparisonIndex.Value;
    param_8->Type = pFVar20->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar16;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar17.Value;
    (param_8->Name).Number = (pFVar20->Name).Number;
    this->CurrentInstructionIndex = iVar3;
    if (local_2f8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_2f8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f8.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_2f8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.DrivenControls.AllocatorInstance.Data);
    }
    if (local_2f8.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_2f8.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_728);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_708);
    ::FString::PrintfImpl(&local_718,L"Node can only run in %s or %s Event");
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    local_738.Data.AllocatorInstance.Data = local_718.Data.AllocatorInstance.Data;
    local_738.Data.ArrayNum = local_718.Data.ArrayNum;
    local_738.Data.ArrayMax = local_718.Data.ArrayMax;
    local_718.Data.ArrayNum = 0;
    local_718.Data.ArrayMax = 0;
    local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.LimitEnabled.AllocatorInstance.Data = local_728.Data.AllocatorInstance.Data;
    if ((FName *)local_708.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
      local_2f8.LimitEnabled.AllocatorInstance.Data = local_728.Data.AllocatorInstance.Data;
    }
  }
  if (local_2f8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57efed:
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  return;
}

