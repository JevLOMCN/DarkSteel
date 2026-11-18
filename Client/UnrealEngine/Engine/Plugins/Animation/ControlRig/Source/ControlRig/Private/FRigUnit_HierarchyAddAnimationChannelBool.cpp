// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a483560

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelBool::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelBool");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4835f0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelBool::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelBool *this)

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

// Execute @ 14a485960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelBool::Execute(FRigUnit_HierarchyAddAnimationChannelBool *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,this->InitialValue,this->MinimumValue,
                this->MaximumValue,&this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_HierarchyAddAnimationChannelBool @ 14a510130

FRigUnit_HierarchyAddAnimationChannelBool * __thiscall
FRigUnit_HierarchyAddAnimationChannelBool::FRigUnit_HierarchyAddAnimationChannelBool
          (FRigUnit_HierarchyAddAnimationChannelBool *this)

{
  FName local_res8 [4];
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  *(ulonglong *)((longlong)&this->_padding_ + 4) = (ulonglong)local_18;
  this->_padding_ = (ulonglong)local_18;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelBool__6B_;
  ::FName::FName(local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  this->InitialValue = false;
  this->MinimumValue = false;
  this->MaximumValue = true;
  return this;
}

// Execute @ 14a529040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelBool::Execute
          (FRigUnit_HierarchyAddAnimationChannelBool *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->InitialValue,this->MinimumValue,this->MaximumValue,
                &this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a544f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelBool::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings *pFVar8;
  FRigElementKey *pFVar9;
  FName *pFVar10;
  FRigElementKey *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
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
    puVar6 = pFVar7->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  bVar3 = (bool)*puVar6;
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  bVar4 = (bool)*puVar6;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  bVar5 = (bool)*puVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,bVar3,bVar4,bVar5,pFVar8,pFVar9,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a579430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelBool::StaticExecute
          (FControlRigExecuteContext *param_1,bool param_2,bool param_3,bool param_4,
          FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings *param_5,FRigElementKey *param_6,
          FName *param_7,FRigElementKey *param_8)

{
  int iVar1;
  code *pcVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  URigHierarchyController *this;
  URigHierarchy *pUVar9;
  FRigName *this_00;
  FName *pFVar10;
  FRigControlSettings *pFVar11;
  FRigElementKey *pFVar12;
  undefined1 auStackY_888 [32];
  FRigName local_840;
  FString local_828;
  FString local_818;
  undefined8 local_808;
  FRigElementKey local_7f8;
  FRigElementKey local_7e8;
  FRigElementKey local_7d8;
  FString local_7c8;
  FString local_7b8;
  FRigName local_7a8;
  FRigHierarchyModulePath local_788;
  ulonglong local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  ulonglong local_6c4;
  undefined8 uStack_6bc;
  undefined8 local_6b4;
  undefined8 uStack_6ac;
  undefined8 local_6a4;
  undefined8 uStack_69c;
  undefined8 local_694;
  undefined8 uStack_68c;
  undefined8 local_684;
  undefined8 uStack_67c;
  undefined8 local_674;
  undefined8 uStack_66c;
  undefined8 local_664;
  undefined8 uStack_65c;
  undefined8 local_654;
  undefined8 uStack_64c;
  undefined4 local_644;
  FRigElementKey local_640 [2];
  FRigControlValue local_628;
  FRigControlValue local_598;
  ulonglong local_508;
  undefined8 uStack_500;
  undefined4 local_488;
  FRigControlSettings local_478;
  FRigControlSettings local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_888;
  local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.Data.ArrayNum = 0;
  local_828.Data.ArrayMax = 0;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar7 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar7) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_828,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a579a5d;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_788,param_7);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_788);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_788);
      param_8->Type = Curve;
      (param_8->Name).ComparisonIndex = 0;
      (param_8->Name).Number = 0;
      local_808 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings(&local_258);
        local_258.ControlType = Bool;
        FRigControlSettings::SetupLimitArrayForType(&local_258,true,true,true);
        uStack_740 = 0;
        local_748 = (ulonglong)param_3;
        local_6c8 = 1;
        local_258.MinimumValue.FloatStorage.bValid = true;
        local_258.MinimumValue.FloatStorage._129_3_ = 0;
        uStack_6bc = 0;
        local_258.MinimumValue.FloatStorage.Float00 = (float)(undefined4)local_748;
        local_258.MinimumValue.FloatStorage.Float01 = (float)local_748._4_4_;
        local_258.MinimumValue.FloatStorage.Float02 = 0.0;
        local_258.MinimumValue.FloatStorage.Float03 = 0.0;
        local_6c4 = (ulonglong)param_4;
        local_644 = 1;
        local_258.MaximumValue.FloatStorage.Float00 = (float)(undefined4)local_6c4;
        local_258.MaximumValue.FloatStorage.Float01 = (float)local_6c4._4_4_;
        local_258.MaximumValue.FloatStorage.Float02 = 0.0;
        local_258.MaximumValue.FloatStorage.Float03 = 0.0;
        local_258.MaximumValue.FloatStorage.bValid = true;
        local_258.MaximumValue.FloatStorage._129_3_ = 0;
        local_738 = 0;
        uStack_730 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_718 = 0;
        uStack_710 = 0;
        local_708 = 0;
        uStack_700 = 0;
        local_6f8 = 0;
        uStack_6f0 = 0;
        local_6e8 = 0;
        uStack_6e0 = 0;
        local_6d8 = 0;
        uStack_6d0 = 0;
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
        local_6b4 = 0;
        uStack_6ac = 0;
        local_6a4 = 0;
        uStack_69c = 0;
        local_694 = 0;
        uStack_68c = 0;
        local_684 = 0;
        uStack_67c = 0;
        local_674 = 0;
        uStack_66c = 0;
        local_664 = 0;
        uStack_65c = 0;
        local_654 = 0;
        uStack_64c = 0;
        local_258.MaximumValue.FloatStorage.Float10 = 0.0;
        local_258.MaximumValue.FloatStorage.Float11 = 0.0;
        local_258.MaximumValue.FloatStorage.Float12 = 0.0;
        local_258.MaximumValue.FloatStorage.Float13 = 0.0;
        local_258.MaximumValue.FloatStorage.Float20 = 0.0;
        local_258.MaximumValue.FloatStorage.Float21 = 0.0;
        local_258.MaximumValue.FloatStorage.Float22 = 0.0;
        local_258.MaximumValue.FloatStorage.Float23 = 0.0;
        local_258.MaximumValue.FloatStorage.Float30 = 0.0;
        local_258.MaximumValue.FloatStorage.Float31 = 0.0;
        local_258.MaximumValue.FloatStorage.Float32 = 0.0;
        local_258.MaximumValue.FloatStorage.Float33 = 0.0;
        local_258.MaximumValue.FloatStorage.Float00_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float01_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float02_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float03_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float10_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float11_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float12_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float13_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float20_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float21_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float22_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float23_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float30_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float31_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float32_2 = 0.0;
        local_258.MaximumValue.FloatStorage.Float33_2 = 0.0;
        pUVar9 = URigHierarchyController::GetHierarchy(this);
        local_840.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        local_840.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_840.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        if ((((FRigName *)param_7 != &local_840) &&
            (local_840.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_7,
            local_840.Name.field0_0x0._0_4_ == 0xffffffff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_840.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
          if (local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_840.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_840.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        }
        this_00 = URigHierarchy::GetSafeNewDisplayName(pUVar9,&local_7a8,param_6,&local_840);
        pFVar10 = FRigName::GetFName(this_00);
        local_258.DisplayName = *pFVar10;
        if ((local_7a8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_7a8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_7a8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_840.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_840.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        iVar1 = this->CurrentInstructionIndex;
        uStack_500._0_4_ = 0.0;
        uStack_500._4_4_ = 0.0;
        local_508 = (ulonglong)param_2;
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_488._0_1_ = true;
        local_488._1_3_ = 0;
        pFVar11 = FRigControlSettings::FRigControlSettings(&local_478,&local_258);
        local_7f8.Name.Number = (param_6->Name).Number;
        local_7f8.Type = param_6->Type;
        local_7f8._1_3_ = *(undefined3 *)&param_6->field_0x1;
        local_7f8.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
        pFVar12 = URigHierarchyController::AddAnimationChannel
                            (this,local_640,*param_7,&local_7f8,pFVar11,false,false);
        uVar3 = *(undefined3 *)&pFVar12->field_0x1;
        FVar4.Value = (pFVar12->Name).ComparisonIndex.Value;
        param_8->Type = pFVar12->Type;
        *(undefined3 *)&param_8->field_0x1 = uVar3;
        (param_8->Name).ComparisonIndex = (FNameEntryId)FVar4.Value;
        (param_8->Name).Number = (pFVar12->Name).Number;
        bVar7 = ::FName::IsWithinBounds((FNameEntryId)(param_8->Name).ComparisonIndex.Value);
        if (((bVar7) && (param_8->Name != (FName)0x0)) && (param_8->Type != None)) {
          pUVar9 = param_1->Hierarchy;
          local_7e8.Type = param_8->Type;
          local_7e8._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_7e8.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_7e8.Name.Number = (param_8->Name).Number;
          iVar8 = URigHierarchy::GetIndex(pUVar9,&local_7e8,true);
          uVar5 = local_488;
          local_628.FloatStorage.Float00 = (float)(undefined4)local_508;
          local_628.FloatStorage.Float01 = (float)local_508._4_4_;
          local_628.FloatStorage.Float02 = (float)uStack_500;
          local_628.FloatStorage.Float03 = uStack_500._4_4_;
          local_628.FloatStorage.Float10 = 0.0;
          local_628.FloatStorage.Float11 = 0.0;
          local_628.FloatStorage.Float12 = 0.0;
          local_628.FloatStorage.Float13 = 0.0;
          local_628.FloatStorage.Float20 = 0.0;
          local_628.FloatStorage.Float21 = 0.0;
          local_628.FloatStorage.Float22 = 0.0;
          local_628.FloatStorage.Float23 = 0.0;
          local_628.FloatStorage.Float30 = 0.0;
          local_628.FloatStorage.Float31 = 0.0;
          local_628.FloatStorage.Float32 = 0.0;
          local_628.FloatStorage.Float33 = 0.0;
          local_628.FloatStorage.Float00_2 = 0.0;
          local_628.FloatStorage.Float01_2 = 0.0;
          local_628.FloatStorage.Float02_2 = 0.0;
          local_628.FloatStorage.Float03_2 = 0.0;
          local_628.FloatStorage.Float10_2 = 0.0;
          local_628.FloatStorage.Float11_2 = 0.0;
          local_628.FloatStorage.Float12_2 = 0.0;
          local_628.FloatStorage.Float13_2 = 0.0;
          local_628.FloatStorage.Float20_2 = 0.0;
          local_628.FloatStorage.Float21_2 = 0.0;
          local_628.FloatStorage.Float22_2 = 0.0;
          local_628.FloatStorage.Float23_2 = 0.0;
          local_628.FloatStorage.Float30_2 = 0.0;
          local_628.FloatStorage.Float31_2 = 0.0;
          local_628.FloatStorage.Float32_2 = 0.0;
          local_628.FloatStorage.Float33_2 = 0.0;
          local_628.FloatStorage.bValid = local_488._0_1_;
          local_628.FloatStorage._129_3_ = local_488._1_3_;
          URigHierarchy::SetControlValueByIndex(pUVar9,iVar8,&local_628,Initial,false,false);
          pUVar9 = param_1->Hierarchy;
          local_7d8.Type = param_8->Type;
          local_7d8._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_7d8.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_7d8.Name.Number = (param_8->Name).Number;
          iVar8 = URigHierarchy::GetIndex(pUVar9,&local_7d8,true);
          uVar6 = local_488;
          local_598.FloatStorage.Float00 = (float)(undefined4)local_508;
          local_598.FloatStorage.Float01 = (float)local_508._4_4_;
          local_598.FloatStorage.Float02 = (float)uStack_500;
          local_598.FloatStorage.Float03 = uStack_500._4_4_;
          local_598.FloatStorage.Float10 = 0.0;
          local_598.FloatStorage.Float11 = 0.0;
          local_598.FloatStorage.Float12 = 0.0;
          local_598.FloatStorage.Float13 = 0.0;
          local_598.FloatStorage.Float20 = 0.0;
          local_598.FloatStorage.Float21 = 0.0;
          local_598.FloatStorage.Float22 = 0.0;
          local_598.FloatStorage.Float23 = 0.0;
          local_598.FloatStorage.Float30 = 0.0;
          local_598.FloatStorage.Float31 = 0.0;
          local_598.FloatStorage.Float32 = 0.0;
          local_598.FloatStorage.Float33 = 0.0;
          local_598.FloatStorage.Float00_2 = 0.0;
          local_598.FloatStorage.Float01_2 = 0.0;
          local_598.FloatStorage.Float02_2 = 0.0;
          local_598.FloatStorage.Float03_2 = 0.0;
          local_598.FloatStorage.Float10_2 = 0.0;
          local_598.FloatStorage.Float11_2 = 0.0;
          local_598.FloatStorage.Float12_2 = 0.0;
          local_598.FloatStorage.Float13_2 = 0.0;
          local_598.FloatStorage.Float20_2 = 0.0;
          local_598.FloatStorage.Float21_2 = 0.0;
          local_598.FloatStorage.Float22_2 = 0.0;
          local_598.FloatStorage.Float23_2 = 0.0;
          local_598.FloatStorage.Float30_2 = 0.0;
          local_598.FloatStorage.Float31_2 = 0.0;
          local_598.FloatStorage.Float32_2 = 0.0;
          local_598.FloatStorage.Float33_2 = 0.0;
          local_488._0_1_ = SUB41(uVar5,0);
          local_488._1_3_ = SUB43(uVar5,1);
          local_598.FloatStorage.bValid = local_488._0_1_;
          local_598.FloatStorage._129_3_ = local_488._1_3_;
          local_488 = uVar6;
          URigHierarchy::SetControlValueByIndex(pUVar9,iVar8,&local_598,Current,false,false);
        }
        this->CurrentInstructionIndex = iVar1;
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
        if (local_258.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.LimitEnabled.AllocatorInstance.Data);
        }
      }
      if ((local_788.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_788.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_788.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_788.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_788.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_788.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_7b8);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_7c8);
      ::FString::PrintfImpl(&local_818,L"Node can only run in %s or %s Event");
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
      local_828.Data.AllocatorInstance.Data = local_818.Data.AllocatorInstance.Data;
      local_828.Data.ArrayNum = local_818.Data.ArrayNum;
      local_828.Data.ArrayMax = local_818.Data.ArrayMax;
      local_818.Data.ArrayNum = 0;
      local_818.Data.ArrayMax = 0;
      local_818.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_788.ModulePath.Data.AllocatorInstance.Data = local_7b8.Data.AllocatorInstance.Data;
      if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
        local_788.ModulePath.Data.AllocatorInstance.Data = local_7b8.Data.AllocatorInstance.Data;
      }
    }
    if (local_788.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.ModulePath.Data.AllocatorInstance.Data);
    }
  }
LAB_14a579a5d:
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  return;
}

