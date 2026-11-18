// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4876c0

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelScaleFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat
                           ,(UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelScaleFloat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat
                    .OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a487790

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleFloat::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelScaleFloat *this)

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

// Execute @ 14a4890e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleFloat::Execute
          (FRigUnit_HierarchyAddAnimationChannelScaleFloat *this)

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

// FRigUnit_HierarchyAddAnimationChannelScaleFloat @ 14a5103b0

FRigUnit_HierarchyAddAnimationChannelScaleFloat * __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleFloat::FRigUnit_HierarchyAddAnimationChannelScaleFloat
          (FRigUnit_HierarchyAddAnimationChannelScaleFloat *this)

{
  FName local_res8;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  *(ulonglong *)((longlong)&this->_padding_ + 4) = (ulonglong)local_18;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (ulonglong)local_18;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelScaleFloat__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->LimitsEnabled).Enabled = (FRigControlLimitEnabled)0x101;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  ::FName::FName(&local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  this->InitialValue = 1.0;
  this->MinimumValue = 0.0;
  this->MaximumValue = 10.0;
  return this;
}

// Execute @ 14a5291a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleFloat::Execute
          (FRigUnit_HierarchyAddAnimationChannelScaleFloat *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->InitialValue,this->MinimumValue,this->MaximumValue,
                &this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a545840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelScaleFloat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *pFVar9;
  FRigElementKey *pFVar10;
  FName *pFVar11;
  FRigElementKey *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  fVar1 = *pfVar7;
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  fVar2 = *pfVar7;
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar3 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *)
           FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,fVar1,fVar2,fVar3,pFVar9,pFVar10,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a57b190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelScaleFloat::StaticExecute
          (FControlRigExecuteContext *param_1,float param_2,float param_3,float param_4,
          FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings *param_5,FRigElementKey *param_6,
          FName *param_7,FRigElementKey *param_8)

{
  FRigControlLimitEnabled FVar1;
  int iVar2;
  code *pcVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  URigHierarchyController *this;
  URigHierarchy *pUVar14;
  FRigName *this_00;
  FName *pFVar15;
  FRigControlSettings *pFVar16;
  FRigElementKey *pFVar17;
  undefined1 auStackY_8a8 [32];
  FRigName local_868;
  FString local_850;
  FString local_840;
  undefined8 local_830;
  FRigElementKey local_828;
  FRigElementKey local_818;
  FRigElementKey local_808;
  FString local_7f8;
  FString local_7e8;
  FRigName local_7d8;
  FRigHierarchyModulePath local_7b8;
  ulonglong local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined4 local_6f8;
  undefined1 local_6f4 [16];
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined8 local_6d4;
  undefined8 uStack_6cc;
  undefined8 local_6c4;
  undefined8 uStack_6bc;
  undefined8 local_6b4;
  undefined8 uStack_6ac;
  undefined8 local_6a4;
  undefined8 uStack_69c;
  undefined8 local_694;
  undefined8 uStack_68c;
  undefined8 local_684;
  undefined8 uStack_67c;
  undefined4 local_674;
  FRigElementKey local_670 [2];
  FRigControlValue local_658;
  FRigControlValue local_5c8;
  ulonglong local_538;
  undefined8 uStack_530;
  undefined4 local_4b8;
  FRigControlSettings local_4a8;
  undefined1 local_288 [184];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  ForAnyElementType local_130;
  ForAnyElementType local_120;
  ForAnyElementType local_110;
  ForAnyElementType local_100;
  ForAnyElementType local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  local_850.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_850.Data.ArrayNum = 0;
  local_850.Data.ArrayMax = 0;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar12 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar12) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_850,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a57b835;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_7b8,param_7);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7b8);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7b8);
      param_8->Type = Curve;
      (param_8->Name).ComparisonIndex = 0;
      (param_8->Name).Number = 0;
      local_830 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings((FRigControlSettings *)local_288);
        local_288[1] = ScaleFloat;
        FRigControlSettings::SetupLimitArrayForType((FRigControlSettings *)local_288,true,true,true)
        ;
        FVar1 = param_5->Enabled;
        if (((int)local_288._24_4_ < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_770 = 0;
        *(FRigControlLimitEnabled *)local_288._16_8_ = FVar1;
        local_768 = 0;
        uStack_760 = 0;
        local_6f8 = 1;
        local_758 = 0;
        uStack_750 = 0;
        local_748 = 0;
        uStack_740 = 0;
        local_738 = 0;
        uStack_730 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_718 = 0;
        uStack_710 = 0;
        local_708 = 0;
        uStack_700 = 0;
        local_778 = (ulonglong)(uint)param_3;
        local_288._36_8_ = local_778;
        local_288._44_4_ = 0.0;
        local_288._48_4_ = 0.0;
        local_288._52_4_ = 0.0;
        local_288._56_4_ = 0.0;
        local_288._60_4_ = 0.0;
        local_288._64_4_ = 0.0;
        local_288._68_4_ = 0.0;
        local_288._72_4_ = 0.0;
        local_288._76_4_ = 0.0;
        local_288._80_4_ = 0.0;
        local_288._84_4_ = 0.0;
        local_288._88_4_ = 0.0;
        local_288._92_4_ = 0.0;
        local_288._96_4_ = 0.0;
        local_288._100_4_ = 0.0;
        local_288._104_4_ = 0.0;
        local_288._108_4_ = 0.0;
        local_288._112_4_ = 0.0;
        local_288._116_4_ = 0.0;
        local_288._120_4_ = 0.0;
        local_288._124_4_ = 0.0;
        local_288._128_4_ = 0.0;
        local_288._132_4_ = 0.0;
        local_288._136_4_ = 0.0;
        local_288._140_4_ = 0.0;
        local_288._144_4_ = 0.0;
        local_288._148_4_ = 0.0;
        local_288._152_4_ = 0.0;
        local_288._156_4_ = 0.0;
        local_288._160_4_ = 0.0;
        local_288._164_4_ = 1;
        local_674 = 1;
        local_160._0_1_ = true;
        local_160._1_3_ = 0;
        local_6e4 = 0;
        uStack_6dc = 0;
        local_6d4 = 0;
        uStack_6cc = 0;
        local_6c4 = 0;
        uStack_6bc = 0;
        local_6b4 = 0;
        uStack_6ac = 0;
        local_6a4 = 0;
        uStack_69c = 0;
        local_694 = 0;
        uStack_68c = 0;
        local_684 = 0;
        uStack_67c = 0;
        local_6f4 = ZEXT416((uint)param_4);
        local_288._168_16_ = ZEXT416((uint)param_4);
        local_1d0._0_4_ = 0.0;
        local_1d0._4_4_ = 0.0;
        uStack_1c8._0_4_ = 0.0;
        uStack_1c8._4_4_ = 0.0;
        local_1c0._0_4_ = 0.0;
        local_1c0._4_4_ = 0.0;
        uStack_1b8._0_4_ = 0.0;
        uStack_1b8._4_4_ = 0.0;
        local_1b0._0_4_ = 0.0;
        local_1b0._4_4_ = 0.0;
        uStack_1a8._0_4_ = 0.0;
        uStack_1a8._4_4_ = 0.0;
        local_1a0._0_4_ = 0.0;
        local_1a0._4_4_ = 0.0;
        uStack_198._0_4_ = 0.0;
        uStack_198._4_4_ = 0.0;
        local_190._0_4_ = 0.0;
        local_190._4_4_ = 0.0;
        uStack_188._0_4_ = 0.0;
        uStack_188._4_4_ = 0.0;
        local_180._0_4_ = 0.0;
        local_180._4_4_ = 0.0;
        uStack_178._0_4_ = 0.0;
        uStack_178._4_4_ = 0.0;
        local_170._0_4_ = 0.0;
        local_170._4_4_ = 0.0;
        uStack_168._0_4_ = 0.0;
        uStack_168._4_4_ = 0.0;
        pUVar14 = URigHierarchyController::GetHierarchy(this);
        local_868.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        local_868.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_868.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if ((((FRigName *)param_7 != &local_868) &&
            (local_868.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_7,
            local_868.Name.field0_0x0._0_4_ == 0xffffffff)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_868.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
          if (local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_868.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_868.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        }
        this_00 = URigHierarchy::GetSafeNewDisplayName(pUVar14,&local_7d8,param_6,&local_868);
        pFVar15 = FRigName::GetFName(this_00);
        local_288._4_8_ = *pFVar15;
        if ((local_7d8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_7d8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_7d8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_868.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_868.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        iVar2 = this->CurrentInstructionIndex;
        uStack_530._0_4_ = 0.0;
        uStack_530._4_4_ = 0.0;
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_538 = (ulonglong)(uint)param_2;
        local_4b8._0_1_ = true;
        local_4b8._1_3_ = 0;
        pFVar16 = FRigControlSettings::FRigControlSettings
                            (&local_4a8,(FRigControlSettings *)local_288);
        local_828.Name.Number = (param_6->Name).Number;
        local_828.Type = param_6->Type;
        local_828._1_3_ = *(undefined3 *)&param_6->field_0x1;
        local_828.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
        pFVar17 = URigHierarchyController::AddAnimationChannel
                            (this,local_670,*param_7,&local_828,pFVar16,false,false);
        uVar4 = *(undefined3 *)&pFVar17->field_0x1;
        FVar5.Value = (pFVar17->Name).ComparisonIndex.Value;
        param_8->Type = pFVar17->Type;
        *(undefined3 *)&param_8->field_0x1 = uVar4;
        (param_8->Name).ComparisonIndex = (FNameEntryId)FVar5.Value;
        (param_8->Name).Number = (pFVar17->Name).Number;
        bVar12 = ::FName::IsWithinBounds((FNameEntryId)(param_8->Name).ComparisonIndex.Value);
        if (((bVar12) && (param_8->Name != (FName)0x0)) && (param_8->Type != None)) {
          pUVar14 = param_1->Hierarchy;
          local_818.Type = param_8->Type;
          local_818._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_818.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_818.Name.Number = (param_8->Name).Number;
          iVar13 = URigHierarchy::GetIndex(pUVar14,&local_818,true);
          uVar10 = local_4b8;
          uVar8 = uStack_530;
          uVar6 = local_538;
          local_658.FloatStorage.Float00 = (float)(undefined4)local_538;
          local_658.FloatStorage.Float01 = (float)local_538._4_4_;
          local_658.FloatStorage.Float02 = (float)uStack_530;
          local_658.FloatStorage.Float03 = uStack_530._4_4_;
          local_658.FloatStorage.Float10 = 0.0;
          local_658.FloatStorage.Float11 = 0.0;
          local_658.FloatStorage.Float12 = 0.0;
          local_658.FloatStorage.Float13 = 0.0;
          local_658.FloatStorage.Float20 = 0.0;
          local_658.FloatStorage.Float21 = 0.0;
          local_658.FloatStorage.Float22 = 0.0;
          local_658.FloatStorage.Float23 = 0.0;
          local_658.FloatStorage.Float30 = 0.0;
          local_658.FloatStorage.Float31 = 0.0;
          local_658.FloatStorage.Float32 = 0.0;
          local_658.FloatStorage.Float33 = 0.0;
          local_658.FloatStorage.Float00_2 = 0.0;
          local_658.FloatStorage.Float01_2 = 0.0;
          local_658.FloatStorage.Float02_2 = 0.0;
          local_658.FloatStorage.Float03_2 = 0.0;
          local_658.FloatStorage.Float10_2 = 0.0;
          local_658.FloatStorage.Float11_2 = 0.0;
          local_658.FloatStorage.Float12_2 = 0.0;
          local_658.FloatStorage.Float13_2 = 0.0;
          local_658.FloatStorage.Float20_2 = 0.0;
          local_658.FloatStorage.Float21_2 = 0.0;
          local_658.FloatStorage.Float22_2 = 0.0;
          local_658.FloatStorage.Float23_2 = 0.0;
          local_658.FloatStorage.Float30_2 = 0.0;
          local_658.FloatStorage.Float31_2 = 0.0;
          local_658.FloatStorage.Float32_2 = 0.0;
          local_658.FloatStorage.Float33_2 = 0.0;
          local_658.FloatStorage.bValid = local_4b8._0_1_;
          local_658.FloatStorage._129_3_ = local_4b8._1_3_;
          URigHierarchy::SetControlValueByIndex(pUVar14,iVar13,&local_658,Initial,false,false);
          pUVar14 = param_1->Hierarchy;
          local_808.Type = param_8->Type;
          local_808._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_808.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_808.Name.Number = (param_8->Name).Number;
          iVar13 = URigHierarchy::GetIndex(pUVar14,&local_808,true);
          uVar11 = local_4b8;
          uVar9 = uStack_530;
          uVar7 = local_538;
          local_538._0_4_ = (undefined4)uVar6;
          local_538._4_4_ = SUB84(uVar6,4);
          local_5c8.FloatStorage.Float00 = (float)(undefined4)local_538;
          local_5c8.FloatStorage.Float01 = (float)local_538._4_4_;
          uStack_530._0_4_ = (float)uVar8;
          uStack_530._4_4_ = SUB84(uVar8,4);
          local_5c8.FloatStorage.Float02 = (float)uStack_530;
          local_5c8.FloatStorage.Float03 = uStack_530._4_4_;
          local_5c8.FloatStorage.Float10 = 0.0;
          local_5c8.FloatStorage.Float11 = 0.0;
          local_5c8.FloatStorage.Float12 = 0.0;
          local_5c8.FloatStorage.Float13 = 0.0;
          local_5c8.FloatStorage.Float20 = 0.0;
          local_5c8.FloatStorage.Float21 = 0.0;
          local_5c8.FloatStorage.Float22 = 0.0;
          local_5c8.FloatStorage.Float23 = 0.0;
          local_5c8.FloatStorage.Float30 = 0.0;
          local_5c8.FloatStorage.Float31 = 0.0;
          local_5c8.FloatStorage.Float32 = 0.0;
          local_5c8.FloatStorage.Float33 = 0.0;
          local_5c8.FloatStorage.Float00_2 = 0.0;
          local_5c8.FloatStorage.Float01_2 = 0.0;
          local_5c8.FloatStorage.Float02_2 = 0.0;
          local_5c8.FloatStorage.Float03_2 = 0.0;
          local_5c8.FloatStorage.Float10_2 = 0.0;
          local_5c8.FloatStorage.Float11_2 = 0.0;
          local_5c8.FloatStorage.Float12_2 = 0.0;
          local_5c8.FloatStorage.Float13_2 = 0.0;
          local_5c8.FloatStorage.Float20_2 = 0.0;
          local_5c8.FloatStorage.Float21_2 = 0.0;
          local_5c8.FloatStorage.Float22_2 = 0.0;
          local_5c8.FloatStorage.Float23_2 = 0.0;
          local_5c8.FloatStorage.Float30_2 = 0.0;
          local_5c8.FloatStorage.Float31_2 = 0.0;
          local_5c8.FloatStorage.Float32_2 = 0.0;
          local_5c8.FloatStorage.Float33_2 = 0.0;
          local_4b8._0_1_ = SUB41(uVar10,0);
          local_4b8._1_3_ = SUB43(uVar10,1);
          local_5c8.FloatStorage.bValid = local_4b8._0_1_;
          local_5c8.FloatStorage._129_3_ = local_4b8._1_3_;
          local_538 = uVar7;
          uStack_530 = uVar9;
          local_4b8 = uVar11;
          URigHierarchy::SetControlValueByIndex(pUVar14,iVar13,&local_5c8,Current,false,false);
        }
        this->CurrentInstructionIndex = iVar2;
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
        if (local_100.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data);
        }
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
        if (local_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data);
        }
        if (local_130.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data);
        }
        if ((FRigControlLimitEnabled *)local_288._16_8_ != (FRigControlLimitEnabled *)0x0) {
          FMemory::Free((void *)local_288._16_8_);
        }
      }
      if ((local_7b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_7b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_7b8.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_7b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_7b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_7b8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_7e8);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_7f8);
      ::FString::PrintfImpl(&local_840,L"Node can only run in %s or %s Event");
      if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_850.Data.AllocatorInstance.Data);
      }
      local_850.Data.AllocatorInstance.Data = local_840.Data.AllocatorInstance.Data;
      local_850.Data.ArrayNum = local_840.Data.ArrayNum;
      local_850.Data.ArrayMax = local_840.Data.ArrayMax;
      local_840.Data.ArrayNum = 0;
      local_840.Data.ArrayMax = 0;
      local_840.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7b8.ModulePath.Data.AllocatorInstance.Data = local_7e8.Data.AllocatorInstance.Data;
      if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
        local_7b8.ModulePath.Data.AllocatorInstance.Data = local_7e8.Data.AllocatorInstance.Data;
      }
    }
    if (local_7b8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.ModulePath.Data.AllocatorInstance.Data);
    }
  }
LAB_14a57b835:
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  return;
}

