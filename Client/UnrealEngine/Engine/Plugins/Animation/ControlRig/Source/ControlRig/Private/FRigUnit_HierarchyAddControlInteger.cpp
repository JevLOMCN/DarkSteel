// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4793c0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlInteger::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlInteger");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger.OuterSingleton;
}

// GetExecuteContextStruct @ 14a479440

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlInteger::GetExecuteContextStruct
          (FRigUnit_HierarchyAddControlInteger *this)

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

// GetControlTypeToSpawn @ 14a479b60

ERigControlType __thiscall
FRigUnit_HierarchyAddControlInteger::GetControlTypeToSpawn
          (FRigUnit_HierarchyAddControlInteger *this)

{
  return Integer;
}

// Execute @ 14a479f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlInteger::Execute(FRigUnit_HierarchyAddControlInteger *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,this->InitialValue,&this->Settings,
                (TTransform<double> *)&this->_padding_,(ERigVMTransformSpace)this->_padding_,
                (FRigElementKey *)&this->_padding_,(FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a5293a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlInteger::Execute
          (FRigUnit_HierarchyAddControlInteger *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a5464d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlInteger::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FRigUnit_HierarchyAddControlInteger_Settings *pFVar7;
  TTransform<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigVMTransformSpace *pEVar10;
  FRigElementKey *pFVar11;
  FName *pFVar12;
  FRigElementKey *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar9->Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  iVar3 = *piVar6;
  if (iVar2 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigUnit_HierarchyAddControlInteger_Settings *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FRigUnit_HierarchyAddControlInteger_Settings *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar1 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,iVar3,pFVar7,pTVar8,EVar1,pFVar11,pFVar12,pFVar13);
  return;
}

// StaticExecute @ 14a57d7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlInteger::StaticExecute
          (FControlRigExecuteContext *param_1,int param_2,
          FRigUnit_HierarchyAddControlInteger_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  int iVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  bool bVar4;
  URigHierarchyController *this;
  FRigControlSettings *pFVar5;
  FRigElementKey *pFVar6;
  undefined1 auStackY_748 [32];
  undefined1 local_6f8 [16];
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  undefined1 local_6b8 [16];
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  bool local_638;
  undefined3 uStack_637;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  double local_518;
  double dStack_510;
  undefined4 local_498;
  FRigControlSettings local_488;
  FRigControlSettings local_268;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_7;
  local_6e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.Data.ArrayNum = 0;
  local_6e8.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57dba8;
  bVar4 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar4) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_6e8,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57dba8;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_6f8._0_8_ = (FScriptContainerElement *)0x0;
    this = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this == (URigHierarchyController *)0x0) goto LAB_14a57dba8;
    FRigControlSettings::FRigControlSettings(&local_268);
    (**(code **)(param_3->_padding_ + 0x10))(param_3,&local_268);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              ((TTransform<double> *)local_6b8,param_4,param_5,param_6,param_1->Hierarchy);
    dStack_510 = 0.0;
    local_6f8._0_8_ = (param_3->Shape).Transform.Rotation.XY.m128d_f64[0];
    local_6f8._8_8_ = (param_3->Shape).Transform.Rotation.XY.m128d_f64[1];
    local_628 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[0];
    dStack_620 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[1];
    local_498._0_1_ = true;
    local_498._1_3_ = 0;
    local_518 = (double)(ulonglong)(uint)param_2;
    local_618 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dStack_610 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    local_608 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[0];
    dStack_600 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[1];
    local_5f8 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[0];
    dStack_5f0 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[1];
    local_5e8 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    dStack_5e0 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    iVar1 = this->CurrentInstructionIndex;
    this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar5 = FRigControlSettings::FRigControlSettings(&local_488,&local_268);
    local_578.Scale3D.ZW.m128d_f64[1] = dStack_660;
    local_578.Scale3D.ZW.m128d_f64[0] = local_668;
    local_5d8.Rotation.XY.m128d_f64[0] = (double)local_6f8._0_8_;
    local_5d8.Rotation.XY.m128d_f64[1] = (double)local_6f8._8_8_;
    local_5d8.Translation.XY.m128d_f64[0] = local_618;
    local_5d8.Translation.XY.m128d_f64[1] = dStack_610;
    local_5d8.Scale3D.XY.m128d_f64[0] = local_5f8;
    local_5d8.Scale3D.XY.m128d_f64[1] = dStack_5f0;
    local_5d8.Rotation.ZW.m128d_f64[0] = local_628;
    local_5d8.Rotation.ZW.m128d_f64[1] = dStack_620;
    local_578.Rotation.XY.m128d_f64[0] = (double)local_6b8._0_8_;
    local_578.Rotation.XY.m128d_f64[1] = (double)local_6b8._8_8_;
    local_5d8.Translation.ZW.m128d_f64[0] = local_608;
    local_5d8.Translation.ZW.m128d_f64[1] = dStack_600;
    local_578.Translation.XY.m128d_f64[0] = local_698;
    local_578.Translation.XY.m128d_f64[1] = dStack_690;
    local_5d8.Scale3D.ZW.m128d_f64[0] = local_5e8;
    local_5d8.Scale3D.ZW.m128d_f64[1] = dStack_5e0;
    local_578.Scale3D.XY.m128d_f64[0] = local_678;
    local_578.Scale3D.XY.m128d_f64[1] = dStack_670;
    local_578.Rotation.ZW.m128d_f64[0] = local_6a8;
    local_578.Rotation.ZW.m128d_f64[1] = dStack_6a0;
    local_6b8._0_8_ = local_518;
    local_6b8._8_8_ = dStack_510;
    local_578.Translation.ZW.m128d_f64[0] = local_688;
    local_578.Translation.ZW.m128d_f64[1] = dStack_680;
    local_6a8 = 0.0;
    dStack_6a0 = 0.0;
    local_698 = 0.0;
    dStack_690 = 0.0;
    local_688 = 0.0;
    dStack_680 = 0.0;
    local_678 = 0.0;
    dStack_670 = 0.0;
    local_668 = 0.0;
    dStack_660 = 0.0;
    local_658._0_4_ = 0.0;
    local_658._4_4_ = 0.0;
    uStack_650._0_4_ = 0.0;
    uStack_650._4_4_ = 0.0;
    local_648._0_4_ = 0.0;
    local_648._4_4_ = 0.0;
    uStack_640._0_4_ = 0.0;
    uStack_640._4_4_ = 0.0;
    local_6f8._0_8_ = *(undefined8 *)param_6;
    local_638 = local_498._0_1_;
    uStack_637 = local_498._1_3_;
    local_6f8._8_4_ = (param_6->Name).Number;
    pFVar6 = URigHierarchyController::AddControl
                       (this,(FRigElementKey *)&local_6d8,
                        *(FName *)local_6c8.Data.AllocatorInstance.Data,(FRigElementKey *)local_6f8,
                        pFVar5,(FRigControlValue *)local_6b8,&local_578,&local_5d8,false,false);
    uVar2 = *(undefined3 *)&pFVar6->field_0x1;
    FVar3.Value = (pFVar6->Name).ComparisonIndex.Value;
    param_8->Type = pFVar6->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar2;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar3.Value;
    (param_8->Name).Number = (pFVar6->Name).Number;
    this->CurrentInstructionIndex = iVar1;
    if (local_268.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_268.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_268.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_268.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.DrivenControls.AllocatorInstance.Data);
    }
    if (local_268.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_268.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,(FString *)local_6f8);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_6c8);
    ::FString::PrintfImpl(&local_6d8,L"Node can only run in %s or %s Event");
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    local_6e8.Data.AllocatorInstance.Data = local_6d8.Data.AllocatorInstance.Data;
    local_6e8.Data.ArrayNum = local_6d8.Data.ArrayNum;
    local_6e8.Data.ArrayMax = local_6d8.Data.ArrayMax;
    local_6d8.Data.ArrayNum = 0;
    local_6d8.Data.ArrayMax = 0;
    local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.LimitEnabled.AllocatorInstance.Data = (FScriptContainerElement *)local_6f8._0_8_;
    if ((FName *)local_6c8.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
      local_268.LimitEnabled.AllocatorInstance.Data = (FScriptContainerElement *)local_6f8._0_8_;
    }
  }
  if (local_268.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57dba8:
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  return;
}

