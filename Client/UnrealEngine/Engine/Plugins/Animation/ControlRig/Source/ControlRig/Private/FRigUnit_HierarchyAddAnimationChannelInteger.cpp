// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a48a180

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelInteger::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelInteger");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a48a200

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelInteger::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelInteger *this)

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

// Execute @ 14a48a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelInteger::Execute
          (FRigUnit_HierarchyAddAnimationChannelInteger *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,this->InitialValue,this->MinimumValue,
                this->MaximumValue,&this->LimitsEnabled,&this->ControlEnum,
                (FRigElementKey *)&this->_padding_,(FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_HierarchyAddAnimationChannelInteger @ 14a510240

FRigUnit_HierarchyAddAnimationChannelInteger * __thiscall
FRigUnit_HierarchyAddAnimationChannelInteger::FRigUnit_HierarchyAddAnimationChannelInteger
          (FRigUnit_HierarchyAddAnimationChannelInteger *this)

{
  FName local_res8;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  *(ulonglong *)((longlong)&this->_padding_ + 4) = (ulonglong)local_18;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (ulonglong)local_18;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelInteger__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->LimitsEnabled).Enabled = (FRigControlLimitEnabled)0x101;
  (this->ControlEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  ::FName::FName(&local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  this->InitialValue = 0;
  this->MinimumValue = 0;
  this->MaximumValue = 100;
  return this;
}

// Execute @ 14a5290e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelInteger::Execute
          (FRigUnit_HierarchyAddAnimationChannelInteger *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->InitialValue,this->MinimumValue,this->MaximumValue,
                &this->LimitsEnabled,&this->ControlEnum,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a5453d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelInteger::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *pFVar8;
  TObjectPtr<UEnum> *pTVar9;
  FRigElementKey *pFVar10;
  FName *pFVar11;
  FRigElementKey *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar7->Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  iVar2 = *piVar6;
  if (iVar1 < 2) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar7[1].Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  iVar3 = *piVar6;
  if (iVar1 < 3) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar7[2].Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  iVar1 = *piVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TObjectPtr<UEnum> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,iVar2,iVar3,iVar1,pFVar8,pTVar9,pFVar10,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a57a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelInteger::StaticExecute
          (FControlRigExecuteContext *param_1,int param_2,int param_3,int param_4,
          FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *param_5,
          TObjectPtr<UEnum> *param_6,FRigElementKey *param_7,FName *param_8,FRigElementKey *param_9)

{
  FRigControlLimitEnabled FVar1;
  int iVar2;
  code *pcVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  URigHierarchyController *this;
  URigHierarchy *pUVar10;
  FRigName *this_00;
  FName *pFVar11;
  long64 lVar12;
  FRigControlSettings *pFVar13;
  FRigElementKey *pFVar14;
  undefined1 auStackY_908 [32];
  FRigName local_8c8;
  FString local_8b0;
  uint local_8a0;
  uint local_89c;
  uint local_898;
  FString local_890;
  undefined8 local_880;
  FRigElementKey local_878;
  FRigElementKey local_868;
  FRigElementKey local_858;
  FString local_848;
  FString local_838;
  FRigName local_828;
  FRigHierarchyModulePath local_808;
  ulonglong local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined4 local_748;
  FRigElementKey local_744;
  FRigControlValue local_738;
  FRigControlValue local_6a8;
  ulonglong local_618;
  undefined8 uStack_610;
  undefined4 local_598;
  ulonglong local_588;
  undefined8 uStack_580;
  undefined4 local_508;
  ulonglong local_504;
  undefined8 uStack_4fc;
  undefined4 local_484;
  FRigControlSettings local_478;
  FRigControlSettings local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_908;
  local_8b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b0.Data.ArrayNum = 0;
  local_8b0.Data.ArrayMax = 0;
  local_8a0 = param_3;
  local_89c = param_4;
  local_898 = param_2;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar8 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar8) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_8b0,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a57a8ce;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_808,param_8);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_808);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_808);
      param_9->Type = Curve;
      (param_9->Name).ComparisonIndex = 0;
      (param_9->Name).Number = 0;
      local_880 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings(&local_258);
        local_258.ControlType = Integer;
        FRigControlSettings::SetupLimitArrayForType(&local_258,true,true,true);
        FVar1 = param_5->Enabled;
        if ((local_258.LimitEnabled.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_7c0 = 0;
        local_7b8 = 0;
        uStack_7b0 = 0;
        *(FRigControlLimitEnabled *)local_258.LimitEnabled.AllocatorInstance.Data = FVar1;
        local_7c8 = (ulonglong)local_8a0;
        local_748 = 1;
        local_258.MinimumValue.FloatStorage.Float00 = (float)(undefined4)local_7c8;
        local_258.MinimumValue.FloatStorage.Float01 = (float)local_7c8._4_4_;
        local_258.MinimumValue.FloatStorage.Float02 = 0.0;
        local_258.MinimumValue.FloatStorage.Float03 = 0.0;
        local_258.MinimumValue.FloatStorage.bValid = true;
        local_258.MinimumValue.FloatStorage._129_3_ = 0;
        local_7a8 = 0;
        uStack_7a0 = 0;
        local_798 = 0;
        uStack_790 = 0;
        local_788 = 0;
        uStack_780 = 0;
        local_778 = 0;
        uStack_770 = 0;
        local_768 = 0;
        uStack_760 = 0;
        local_758 = 0;
        uStack_750 = 0;
        local_258.MinimumValue.FloatStorage.Float10 = 0.0;
        local_258.MinimumValue.FloatStorage.Float11 = 0.0;
        local_258.MinimumValue.FloatStorage.Float12 = 0.0;
        local_258.MinimumValue.FloatStorage.Float13 = 0.0;
        local_258.MinimumValue.FloatStorage.Float20 = 0.0;
        local_258.MinimumValue.FloatStorage.Float21 = 0.0;
        local_258.MinimumValue.FloatStorage.Float22 = 0.0;
        local_258.MinimumValue.FloatStorage.Float23 = 0.0;
        local_258.MinimumValue.FloatStorage.Float30 = 0.0;
        local_258.MinimumValue.FloatStorage.Float31 = 0.0;
        local_258.MinimumValue.FloatStorage.Float32 = 0.0;
        local_258.MinimumValue.FloatStorage.Float33 = 0.0;
        local_258.MinimumValue.FloatStorage.Float00_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float01_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float02_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float03_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float10_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float11_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float12_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float13_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float20_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float21_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float22_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float23_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float30_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float31_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float32_2 = 0.0;
        local_258.MinimumValue.FloatStorage.Float33_2 = 0.0;
        pUVar10 = URigHierarchyController::GetHierarchy(this);
        local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_8c8.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        if ((((FRigName *)param_8 != &local_8c8) &&
            (local_8c8.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_8,
            local_8c8.Name.field0_0x0._0_4_ == 0xffffffff)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
          if (local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        }
        this_00 = URigHierarchy::GetSafeNewDisplayName(pUVar10,&local_828,param_7,&local_8c8);
        pFVar11 = FRigName::GetFName(this_00);
        local_258.DisplayName = *pFVar11;
        if ((local_828.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_828.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_828.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_8c8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_8c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((param_6->field0_0x0).DebugPtr != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)(param_6->field0_0x0).DebugPtr);
        }
        local_258.ControlEnum.field0_0x0 = (TObjectPtr<UEnum>_u_0)(param_6->field0_0x0).DebugPtr;
        if (local_258.ControlEnum.field0_0x0.DebugPtr == (UEnum *)0x0) {
          uStack_4fc = 0;
          local_504 = (ulonglong)local_89c;
          local_484 = 1;
          local_258.MaximumValue.FloatStorage.bValid = true;
          local_258.MaximumValue.FloatStorage._129_3_ = 0;
          local_258.MaximumValue.FloatStorage.Float00 = (float)(undefined4)local_504;
          local_258.MaximumValue.FloatStorage.Float01 = (float)local_504._4_4_;
          local_258.MaximumValue.FloatStorage.Float02 = 0.0;
          local_258.MaximumValue.FloatStorage.Float03 = 0.0;
        }
        else {
          local_588 = 0;
          uStack_580._0_4_ = 0.0;
          uStack_580._4_4_ = 0.0;
          local_508._0_1_ = true;
          local_508._1_3_ = 0;
          lVar12 = UEnum::GetMaxEnumValue((UEnum *)local_258.ControlEnum.field0_0x0);
          local_588 = CONCAT44(local_588._4_4_,(int)lVar12);
          local_258.MaximumValue.FloatStorage.Float00 = (float)(int)lVar12;
          local_258.MaximumValue.FloatStorage.Float01 = (float)local_588._4_4_;
          local_258.MaximumValue.FloatStorage.Float02 = (float)uStack_580;
          local_258.MaximumValue.FloatStorage.Float03 = uStack_580._4_4_;
          local_258.MaximumValue.FloatStorage._128_4_ = local_508;
        }
        local_258.MaximumValue.FloatStorage.Float32_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float33_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float30_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float31_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float22_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float23_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float20_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float21_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float12_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float13_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float10_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float11_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float02_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float03_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float00_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float01_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float32 = 0.0;
        local_258.MaximumValue.FloatStorage.Float33 = 0.0;
        local_258.MaximumValue.FloatStorage.Float30 = 0.0;
        local_258.MaximumValue.FloatStorage.Float31 = 0.0;
        local_258.MaximumValue.FloatStorage.Float22 = 0.0;
        local_258.MaximumValue.FloatStorage.Float23 = 0.0;
        local_258.MaximumValue.FloatStorage.Float20 = 0.0;
        local_258.MaximumValue.FloatStorage.Float21 = 0.0;
        local_258.MaximumValue.FloatStorage.Float12 = 0.0;
        local_258.MaximumValue.FloatStorage.Float13 = 0.0;
        local_258.MaximumValue.FloatStorage.Float10 = 0.0;
        local_258.MaximumValue.FloatStorage.Float11 = 0.0;
        iVar2 = this->CurrentInstructionIndex;
        uStack_610._0_4_ = 0.0;
        uStack_610._4_4_ = 0.0;
        local_618 = (ulonglong)local_898;
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_598._0_1_ = true;
        local_598._1_3_ = 0;
        pFVar13 = FRigControlSettings::FRigControlSettings(&local_478,&local_258);
        local_878.Name.Number = (param_7->Name).Number;
        local_878.Type = param_7->Type;
        local_878._1_3_ = *(undefined3 *)&param_7->field_0x1;
        local_878.Name.ComparisonIndex.Value = (param_7->Name).ComparisonIndex.Value;
        pFVar14 = URigHierarchyController::AddAnimationChannel
                            (this,&local_744,*param_8,&local_878,pFVar13,false,false);
        uVar4 = *(undefined3 *)&pFVar14->field_0x1;
        FVar5.Value = (pFVar14->Name).ComparisonIndex.Value;
        param_9->Type = pFVar14->Type;
        *(undefined3 *)&param_9->field_0x1 = uVar4;
        (param_9->Name).ComparisonIndex = (FNameEntryId)FVar5.Value;
        (param_9->Name).Number = (pFVar14->Name).Number;
        bVar8 = ::FName::IsWithinBounds((FNameEntryId)(param_9->Name).ComparisonIndex.Value);
        if (((bVar8) && (param_9->Name != (FName)0x0)) && (param_9->Type != None)) {
          pUVar10 = param_1->Hierarchy;
          local_868.Type = param_9->Type;
          local_868._1_3_ = *(undefined3 *)&param_9->field_0x1;
          local_868.Name.ComparisonIndex.Value = (param_9->Name).ComparisonIndex.Value;
          local_868.Name.Number = (param_9->Name).Number;
          iVar9 = URigHierarchy::GetIndex(pUVar10,&local_868,true);
          uVar6 = local_598;
          local_738.FloatStorage.Float00 = (float)(undefined4)local_618;
          local_738.FloatStorage.Float01 = (float)local_618._4_4_;
          local_738.FloatStorage.Float02 = (float)uStack_610;
          local_738.FloatStorage.Float03 = uStack_610._4_4_;
          local_738.FloatStorage.Float10 = 0.0;
          local_738.FloatStorage.Float11 = 0.0;
          local_738.FloatStorage.Float12 = 0.0;
          local_738.FloatStorage.Float13 = 0.0;
          local_738.FloatStorage.Float20 = 0.0;
          local_738.FloatStorage.Float21 = 0.0;
          local_738.FloatStorage.Float22 = 0.0;
          local_738.FloatStorage.Float23 = 0.0;
          local_738.FloatStorage.Float30 = 0.0;
          local_738.FloatStorage.Float31 = 0.0;
          local_738.FloatStorage.Float32 = 0.0;
          local_738.FloatStorage.Float33 = 0.0;
          local_738.FloatStorage.Float00_2 = 0.0;
          local_738.FloatStorage.Float01_2 = 0.0;
          local_738.FloatStorage.Float02_2 = 0.0;
          local_738.FloatStorage.Float03_2 = 0.0;
          local_738.FloatStorage.Float10_2 = 0.0;
          local_738.FloatStorage.Float11_2 = 0.0;
          local_738.FloatStorage.Float12_2 = 0.0;
          local_738.FloatStorage.Float13_2 = 0.0;
          local_738.FloatStorage.Float20_2 = 0.0;
          local_738.FloatStorage.Float21_2 = 0.0;
          local_738.FloatStorage.Float22_2 = 0.0;
          local_738.FloatStorage.Float23_2 = 0.0;
          local_738.FloatStorage.Float30_2 = 0.0;
          local_738.FloatStorage.Float31_2 = 0.0;
          local_738.FloatStorage.Float32_2 = 0.0;
          local_738.FloatStorage.Float33_2 = 0.0;
          local_738.FloatStorage.bValid = local_598._0_1_;
          local_738.FloatStorage._129_3_ = local_598._1_3_;
          URigHierarchy::SetControlValueByIndex(pUVar10,iVar9,&local_738,Initial,false,false);
          pUVar10 = param_1->Hierarchy;
          local_858.Type = param_9->Type;
          local_858._1_3_ = *(undefined3 *)&param_9->field_0x1;
          local_858.Name.ComparisonIndex.Value = (param_9->Name).ComparisonIndex.Value;
          local_858.Name.Number = (param_9->Name).Number;
          iVar9 = URigHierarchy::GetIndex(pUVar10,&local_858,true);
          uVar7 = local_598;
          local_6a8.FloatStorage.Float00 = (float)(undefined4)local_618;
          local_6a8.FloatStorage.Float01 = (float)local_618._4_4_;
          local_6a8.FloatStorage.Float02 = (float)uStack_610;
          local_6a8.FloatStorage.Float03 = uStack_610._4_4_;
          local_6a8.FloatStorage.Float10 = 0.0;
          local_6a8.FloatStorage.Float11 = 0.0;
          local_6a8.FloatStorage.Float12 = 0.0;
          local_6a8.FloatStorage.Float13 = 0.0;
          local_6a8.FloatStorage.Float20 = 0.0;
          local_6a8.FloatStorage.Float21 = 0.0;
          local_6a8.FloatStorage.Float22 = 0.0;
          local_6a8.FloatStorage.Float23 = 0.0;
          local_6a8.FloatStorage.Float30 = 0.0;
          local_6a8.FloatStorage.Float31 = 0.0;
          local_6a8.FloatStorage.Float32 = 0.0;
          local_6a8.FloatStorage.Float33 = 0.0;
          local_6a8.FloatStorage.Float00_2 = 0.0;
          local_6a8.FloatStorage.Float01_2 = 0.0;
          local_6a8.FloatStorage.Float02_2 = 0.0;
          local_6a8.FloatStorage.Float03_2 = 0.0;
          local_6a8.FloatStorage.Float10_2 = 0.0;
          local_6a8.FloatStorage.Float11_2 = 0.0;
          local_6a8.FloatStorage.Float12_2 = 0.0;
          local_6a8.FloatStorage.Float13_2 = 0.0;
          local_6a8.FloatStorage.Float20_2 = 0.0;
          local_6a8.FloatStorage.Float21_2 = 0.0;
          local_6a8.FloatStorage.Float22_2 = 0.0;
          local_6a8.FloatStorage.Float23_2 = 0.0;
          local_6a8.FloatStorage.Float30_2 = 0.0;
          local_6a8.FloatStorage.Float31_2 = 0.0;
          local_6a8.FloatStorage.Float32_2 = 0.0;
          local_6a8.FloatStorage.Float33_2 = 0.0;
          local_598._0_1_ = SUB41(uVar6,0);
          local_598._1_3_ = SUB43(uVar6,1);
          local_6a8.FloatStorage.bValid = local_598._0_1_;
          local_6a8.FloatStorage._129_3_ = local_598._1_3_;
          local_598 = uVar7;
          URigHierarchy::SetControlValueByIndex(pUVar10,iVar9,&local_6a8,Current,false,false);
        }
        this->CurrentInstructionIndex = iVar2;
        if (local_258.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.FilteredChannels.AllocatorInstance.Data);
        }
        if (local_258.PreviouslyDrivenControls.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.PreviouslyDrivenControls.AllocatorInstance.Data);
        }
        if (local_258.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.DrivenControls.AllocatorInstance.Data);
        }
        if (local_258.Customization.RemovedSpaces.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Customization.RemovedSpaces.AllocatorInstance.Data);
        }
        if (local_258.Customization.AvailableSpaces.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Customization.AvailableSpaces.AllocatorInstance.Data);
        }
        if ((FRigControlLimitEnabled *)local_258.LimitEnabled.AllocatorInstance.Data !=
            (FRigControlLimitEnabled *)0x0) {
          FMemory::Free(local_258.LimitEnabled.AllocatorInstance.Data);
        }
      }
      if ((local_808.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_808.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_808.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_808.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_808.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_808.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_838);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_848);
      ::FString::PrintfImpl(&local_890,L"Node can only run in %s or %s Event");
      if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
      }
      local_8b0.Data.AllocatorInstance.Data = local_890.Data.AllocatorInstance.Data;
      local_8b0.Data.ArrayNum = local_890.Data.ArrayNum;
      local_8b0.Data.ArrayMax = local_890.Data.ArrayMax;
      local_890.Data.ArrayNum = 0;
      local_890.Data.ArrayMax = 0;
      local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_808.ModulePath.Data.AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
      if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data.AllocatorInstance.Data);
        local_808.ModulePath.Data.AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
      }
    }
    if (local_808.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.ModulePath.Data.AllocatorInstance.Data);
    }
  }
LAB_14a57a8ce:
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  return;
}

