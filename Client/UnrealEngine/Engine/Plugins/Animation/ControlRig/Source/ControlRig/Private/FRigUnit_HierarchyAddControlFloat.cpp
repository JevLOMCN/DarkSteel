// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4776c0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlFloat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a477740

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlFloat::GetExecuteContextStruct(FRigUnit_HierarchyAddControlFloat *this)

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

// GetControlTypeToSpawn @ 14a477ab0

ERigControlType __thiscall
FRigUnit_HierarchyAddControlFloat::GetControlTypeToSpawn(FRigUnit_HierarchyAddControlFloat *this)

{
  ERigControlType EVar1;
  
  EVar1 = Float;
  if ((this->Settings).bIsScale != false) {
    EVar1 = ScaleFloat;
  }
  return EVar1;
}

// Execute @ 14a477b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyAddControlFloat::Execute(FRigUnit_HierarchyAddControlFloat *this)

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

// Execute @ 14a529350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlFloat::Execute
          (FRigUnit_HierarchyAddControlFloat *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a5462a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlFloat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  FRigUnit_HierarchyAddControlFloat_Settings *pFVar7;
  TTransform<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigVMTransformSpace *pEVar10;
  FRigElementKey *pFVar11;
  FName *pFVar12;
  FRigElementKey *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
    pfVar6 = (float *)pFVar9->Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  fVar1 = *pfVar6;
  if (iVar3 < 2) {
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
    pFVar7 = (FRigUnit_HierarchyAddControlFloat_Settings *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FRigUnit_HierarchyAddControlFloat_Settings *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,fVar1,pFVar7,pTVar8,EVar2,pFVar11,pFVar12,pFVar13);
  return;
}

// StaticExecute @ 14a57d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlFloat::StaticExecute
          (FControlRigExecuteContext *param_1,float param_2,
          FRigUnit_HierarchyAddControlFloat_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  int iVar1;
  double dVar2;
  double dVar3;
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
  undefined3 uVar14;
  FNameEntryId FVar15;
  bool bVar16;
  URigHierarchyController *this;
  FRigControlSettings *pFVar17;
  FRigElementKey *pFVar18;
  undefined1 auStackY_778 [32];
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
  FString local_668;
  TTransform<double> local_658;
  TTransform<double> local_5f8 [2];
  undefined4 local_518;
  FRigControlSettings local_508;
  FRigControlSettings local_2e8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_728.Data.ArrayNum = 0;
  local_728.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57d77f;
  bVar16 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar16) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_728,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57d77f;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this == (URigHierarchyController *)0x0) goto LAB_14a57d77f;
    FRigControlSettings::FRigControlSettings(&local_2e8);
    (**(code **)(param_3->_padding_ + 0x10))(param_3,&local_2e8);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              ((TTransform<double> *)local_6f8,param_4,param_5,param_6,param_1->Hierarchy);
    dVar2 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[0];
    dVar3 = (param_3->Shape).Transform.Rotation.XY.m128d_f64[1];
    dVar4 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[0];
    dVar5 = (param_3->Shape).Transform.Rotation.ZW.m128d_f64[1];
    dVar6 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dVar7 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    dVar8 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[0];
    dVar9 = (param_3->Shape).Transform.Translation.ZW.m128d_f64[1];
    local_518._0_1_ = true;
    local_518._1_3_ = 0;
    dVar10 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[0];
    dVar11 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[1];
    dVar12 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    dVar13 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    iVar1 = this->CurrentInstructionIndex;
    this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar17 = FRigControlSettings::FRigControlSettings(&local_508,&local_2e8);
    local_5f8[0].Rotation.XY.m128d_f64[0] = (double)local_6f8._0_8_;
    local_5f8[0].Rotation.XY.m128d_f64[1] = (double)local_6f8._8_8_;
    local_678 = local_518._0_1_;
    uStack_677 = local_518._1_3_;
    local_718.Data.ArrayNum = (param_6->Name).Number;
    local_5f8[0].Translation.XY.m128d_f64[0] = local_6d8;
    local_5f8[0].Translation.XY.m128d_f64[1] = dStack_6d0;
    local_5f8[0].Scale3D.XY.m128d_f64[0] = local_6b8;
    local_5f8[0].Scale3D.XY.m128d_f64[1] = dStack_6b0;
    local_5f8[0].Rotation.ZW.m128d_f64[0] = local_6e8;
    local_5f8[0].Rotation.ZW.m128d_f64[1] = dStack_6e0;
    local_6f8 = ZEXT416((uint)param_2);
    local_718.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
    local_5f8[0].Translation.ZW.m128d_f64[0] = local_6c8;
    local_5f8[0].Translation.ZW.m128d_f64[1] = dStack_6c0;
    local_5f8[0].Scale3D.ZW.m128d_f64[0] = local_6a8;
    local_5f8[0].Scale3D.ZW.m128d_f64[1] = dStack_6a0;
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
    local_658.Rotation.XY.m128d_f64[0] = dVar2;
    local_658.Rotation.XY.m128d_f64[1] = dVar3;
    local_658.Rotation.ZW.m128d_f64[0] = dVar4;
    local_658.Rotation.ZW.m128d_f64[1] = dVar5;
    local_658.Translation.XY.m128d_f64[0] = dVar6;
    local_658.Translation.XY.m128d_f64[1] = dVar7;
    local_658.Translation.ZW.m128d_f64[0] = dVar8;
    local_658.Translation.ZW.m128d_f64[1] = dVar9;
    local_658.Scale3D.XY.m128d_f64[0] = dVar10;
    local_658.Scale3D.XY.m128d_f64[1] = dVar11;
    local_658.Scale3D.ZW.m128d_f64[0] = dVar12;
    local_658.Scale3D.ZW.m128d_f64[1] = dVar13;
    pFVar18 = URigHierarchyController::AddControl
                        (this,(FRigElementKey *)&local_708,*param_7,(FRigElementKey *)&local_718,
                         pFVar17,(FRigControlValue *)local_6f8,local_5f8,&local_658,false,false);
    uVar14 = *(undefined3 *)&pFVar18->field_0x1;
    FVar15.Value = (pFVar18->Name).ComparisonIndex.Value;
    param_8->Type = pFVar18->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar14;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar15.Value;
    (param_8->Name).Number = (pFVar18->Name).Number;
    this->CurrentInstructionIndex = iVar1;
    if (local_2e8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_2e8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2e8.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_2e8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.DrivenControls.AllocatorInstance.Data);
    }
    if (local_2e8.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_2e8.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_668);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_718);
    ::FString::PrintfImpl(&local_708,L"Node can only run in %s or %s Event");
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
    local_728.Data.AllocatorInstance.Data = local_708.Data.AllocatorInstance.Data;
    local_728.Data.ArrayNum = local_708.Data.ArrayNum;
    local_728.Data.ArrayMax = local_708.Data.ArrayMax;
    local_708.Data.ArrayNum = 0;
    local_708.Data.ArrayMax = 0;
    local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.LimitEnabled.AllocatorInstance.Data = local_668.Data.AllocatorInstance.Data;
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
      local_2e8.LimitEnabled.AllocatorInstance.Data = local_668.Data.AllocatorInstance.Data;
    }
  }
  if (local_2e8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57d77f:
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  return;
}

