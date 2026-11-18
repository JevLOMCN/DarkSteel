// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a48fb10

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelRotator");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a48fb90

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelRotator::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelRotator *this)

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

// Execute @ 14a48fcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelRotator::Execute
          (FRigUnit_HierarchyAddAnimationChannelRotator *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->InitialValue,&this->MinimumValue,
                &this->MaximumValue,&this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_HierarchyAddAnimationChannelRotator @ 14a5102e0

FRigUnit_HierarchyAddAnimationChannelRotator * __thiscall
FRigUnit_HierarchyAddAnimationChannelRotator::FRigUnit_HierarchyAddAnimationChannelRotator
          (FRigUnit_HierarchyAddAnimationChannelRotator *this)

{
  double dVar1;
  FName local_res8 [4];
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(ulonglong *)((longlong)&this->_padding_ + 4) = (ulonglong)local_18;
  this->_padding_ = (ulonglong)local_18;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelRotator__6B_;
  (this->LimitsEnabled).Pitch.bMinimum = true;
  (this->LimitsEnabled).Pitch.bMaximum = true;
  (this->LimitsEnabled).Yaw.bMinimum = true;
  (this->LimitsEnabled).Yaw.bMaximum = true;
  (this->LimitsEnabled).Roll.bMinimum = true;
  (this->LimitsEnabled).Roll.bMaximum = true;
  ::FName::FName(local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InitialValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InitialValue).Yaw = dVar1;
  (this->InitialValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->MinimumValue).Pitch = -180.0;
  (this->MinimumValue).Yaw = -180.0;
  (this->MinimumValue).Roll = -180.0;
  (this->MaximumValue).Pitch = 180.0;
  (this->MaximumValue).Yaw = 180.0;
  (this->MaximumValue).Roll = 180.0;
  return this;
}

// Execute @ 14a529140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelRotator::Execute
          (FRigUnit_HierarchyAddAnimationChannelRotator *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->MinimumValue,&this->MaximumValue,
                &this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a545620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelRotator::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  TRotator<double> *pTVar5;
  TRotator<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings *pFVar8;
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
    pTVar4 = (TRotator<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TRotator<double> *)
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
    pTVar5 = (TRotator<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TRotator<double> *)
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
    pTVar6 = (TRotator<double> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TRotator<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pTVar4,pTVar5,pTVar6,pFVar8,pFVar9,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a57a930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelRotator::StaticExecute
          (FControlRigExecuteContext *param_1,TRotator<double> *param_2,TRotator<double> *param_3,
          TRotator<double> *param_4,
          FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings *param_5,FRigElementKey *param_6
          ,FName *param_7,FRigElementKey *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FRigControlLimitEnabled FVar4;
  code *pcVar5;
  undefined3 uVar6;
  FNameEntryId FVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  int iVar15;
  URigHierarchyController *this;
  TVector<double> *pTVar16;
  URigHierarchy *pUVar17;
  FRigName *this_00;
  FName *pFVar18;
  FRigControlSettings *pFVar19;
  FRigElementKey *pFVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_928 [32];
  FRigName local_8e8;
  undefined8 local_8d0;
  FString local_8c8;
  FString local_8b8;
  TRotator<double> *local_8a8;
  TRotator<double> *local_8a0;
  TRotator<double> *local_898;
  FRigElementKey local_888;
  FRigElementKey local_878;
  FRigElementKey local_868;
  FString local_858;
  FString local_848;
  FRigName local_838;
  FRigHierarchyModulePath local_818;
  FRigControlValueStorage local_7d8;
  undefined1 local_754 [16];
  undefined8 local_744;
  undefined8 uStack_73c;
  undefined8 local_734;
  undefined8 uStack_72c;
  undefined8 local_724;
  undefined8 uStack_71c;
  undefined8 local_714;
  undefined8 uStack_70c;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined8 local_6f4;
  undefined8 uStack_6ec;
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined4 local_6d4;
  FRigElementKey local_6d0 [2];
  FRigControlValueStorage local_6b8;
  FRigControlValueStorage local_628;
  FRigControlValueStorage local_598;
  TVector<double> local_508;
  TVector<double> local_4f0;
  TVector<double> local_4d8;
  FRigControlSettings local_4b8;
  undefined1 local_298 [184];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
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
  undefined4 local_170;
  ForAnyElementType local_140;
  ForAnyElementType local_130;
  ForAnyElementType local_120;
  ForAnyElementType local_110;
  ForAnyElementType local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_928;
  local_8c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.Data.ArrayNum = 0;
  local_8c8.Data.ArrayMax = 0;
  local_8a8 = param_3;
  local_8a0 = param_4;
  local_898 = param_2;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar14 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar14) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_8c8,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a57b130;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_818,param_7);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_818);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_818);
      param_8->Type = Curve;
      (param_8->Name).ComparisonIndex = 0;
      (param_8->Name).Number = 0;
      local_8d0 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings((FRigControlSettings *)local_298);
        local_298[1] = Rotator;
        FRigControlSettings::SetupLimitArrayForType((FRigControlSettings *)local_298,true,true,true)
        ;
        FVar4 = param_5->Pitch;
        if (((int)local_298._24_4_ < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)local_298._16_8_ = FVar4;
        FVar4 = param_5->Yaw;
        if (((int)local_298._24_4_ < 2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)(local_298._16_8_ + 2) = FVar4;
        FVar4 = param_5->Roll;
        if (((int)local_298._24_4_ < 3) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)(local_298._16_8_ + 4) = FVar4;
        pTVar16 = UE::Math::TRotator<double>::Euler(local_8a8,&local_508);
        local_7d8.Float10 = 0.0;
        local_7d8.Float11 = 0.0;
        local_7d8.Float12 = 0.0;
        local_7d8.Float13 = 0.0;
        local_7d8.Float20 = 0.0;
        local_7d8.Float21 = 0.0;
        local_7d8.Float22 = 0.0;
        local_7d8.Float23 = 0.0;
        local_7d8._128_4_ = 1;
        local_7d8.Float30 = 0.0;
        local_7d8.Float31 = 0.0;
        local_7d8.Float32 = 0.0;
        local_7d8.Float33 = 0.0;
        local_7d8.Float00_2 = 0.0;
        local_7d8.Float01_2 = 0.0;
        local_7d8.Float02_2 = 0.0;
        local_7d8.Float03_2 = 0.0;
        local_7d8.Float10_2 = 0.0;
        local_7d8.Float11_2 = 0.0;
        local_7d8.Float12_2 = 0.0;
        local_7d8.Float13_2 = 0.0;
        local_7d8.Float20_2 = 0.0;
        local_7d8.Float21_2 = 0.0;
        local_7d8.Float22_2 = 0.0;
        local_7d8.Float23_2 = 0.0;
        local_7d8.Float30_2 = 0.0;
        local_7d8.Float31_2 = 0.0;
        local_7d8.Float32_2 = 0.0;
        local_7d8.Float33_2 = 0.0;
        local_7d8.Float00 = (float)(pTVar16->field0_0x0)._s_0.X;
        local_7d8.Float01 = (float)(pTVar16->field0_0x0)._s_0.Y;
        local_7d8.Float02 = (float)(pTVar16->field0_0x0)._s_0.Z;
        local_7d8.Float03 = 0.0;
        local_298._36_4_ = local_7d8.Float00;
        local_298._40_4_ = local_7d8.Float01;
        local_298._44_4_ = local_7d8.Float02;
        local_298._48_4_ = 0.0;
        local_298._52_4_ = 0.0;
        local_298._56_4_ = 0.0;
        local_298._60_4_ = 0.0;
        local_298._64_4_ = 0.0;
        local_298._68_4_ = 0.0;
        local_298._72_4_ = 0.0;
        local_298._76_4_ = 0.0;
        local_298._80_4_ = 0.0;
        local_298._84_4_ = 0.0;
        local_298._88_4_ = 0.0;
        local_298._92_4_ = 0.0;
        local_298._96_4_ = 0.0;
        local_298._100_4_ = 0.0;
        local_298._104_4_ = 0.0;
        local_298._108_4_ = 0.0;
        local_298._112_4_ = 0.0;
        local_298._116_4_ = 0.0;
        local_298._120_4_ = 0.0;
        local_298._124_4_ = 0.0;
        local_298._128_4_ = 0.0;
        local_298._132_4_ = 0.0;
        local_298._136_4_ = 0.0;
        local_298._140_4_ = 0.0;
        local_298._144_4_ = 0.0;
        local_298._148_4_ = 0.0;
        local_298._152_4_ = 0.0;
        local_298._156_4_ = 0.0;
        local_298._160_4_ = 0.0;
        local_298._164_4_ = 1;
        pTVar16 = UE::Math::TRotator<double>::Euler(local_8a0,&local_4f0);
        local_6d4 = 1;
        fVar23 = (float)(pTVar16->field0_0x0)._s_0.X;
        fVar21 = (float)(pTVar16->field0_0x0)._s_0.Y;
        fVar22 = (float)(pTVar16->field0_0x0)._s_0.Z;
        local_744 = 0;
        uStack_73c = 0;
        local_754._4_4_ = fVar21;
        local_754._0_4_ = fVar23;
        local_754._8_4_ = fVar22;
        local_754._12_4_ = 0;
        local_298._172_4_ = fVar21;
        local_298._168_4_ = fVar23;
        local_298._176_4_ = fVar22;
        local_298._180_4_ = 0;
        local_734 = 0;
        uStack_72c = 0;
        local_724 = 0;
        uStack_71c = 0;
        local_714 = 0;
        uStack_70c = 0;
        local_704 = 0;
        uStack_6fc = 0;
        local_6f4 = 0;
        uStack_6ec = 0;
        local_6e4 = 0;
        uStack_6dc = 0;
        local_1e0._0_4_ = 0.0;
        local_1e0._4_4_ = 0.0;
        uStack_1d8._0_4_ = 0.0;
        uStack_1d8._4_4_ = 0.0;
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
        local_170._0_1_ = true;
        local_170._1_3_ = 0;
        pUVar17 = URigHierarchyController::GetHierarchy(this);
        local_8e8.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        if ((((FRigName *)param_7 != &local_8e8) &&
            (local_8e8.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_7,
            local_8e8.Name.field0_0x0._0_4_ == 0xffffffff)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
          if (local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        }
        this_00 = URigHierarchy::GetSafeNewDisplayName(pUVar17,&local_838,param_6,&local_8e8);
        pFVar18 = FRigName::GetFName(this_00);
        local_298._4_8_ = *pFVar18;
        if ((local_838.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_838.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_838.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_8e8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_8e8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        pTVar16 = UE::Math::TRotator<double>::Euler(local_898,&local_4d8);
        local_598.bValid = true;
        local_598._129_3_ = 0;
        dVar1 = (pTVar16->field0_0x0)._s_0.X;
        dVar2 = (pTVar16->field0_0x0)._s_0.Y;
        dVar3 = (pTVar16->field0_0x0)._s_0.Z;
        local_8d0 = CONCAT44(local_8d0._4_4_,this->CurrentInstructionIndex);
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_598.Float01 = (float)dVar2;
        local_598.Float00 = (float)dVar1;
        local_598.Float03 = 0.0;
        local_598.Float02 = (float)dVar3;
        pFVar19 = FRigControlSettings::FRigControlSettings
                            (&local_4b8,(FRigControlSettings *)local_298);
        local_888.Name.Number = (param_6->Name).Number;
        local_888.Type = param_6->Type;
        local_888._1_3_ = *(undefined3 *)&param_6->field_0x1;
        local_888.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
        pFVar20 = URigHierarchyController::AddAnimationChannel
                            (this,local_6d0,*param_7,&local_888,pFVar19,false,false);
        uVar6 = *(undefined3 *)&pFVar20->field_0x1;
        FVar7.Value = (pFVar20->Name).ComparisonIndex.Value;
        param_8->Type = pFVar20->Type;
        *(undefined3 *)&param_8->field_0x1 = uVar6;
        (param_8->Name).ComparisonIndex = (FNameEntryId)FVar7.Value;
        (param_8->Name).Number = (pFVar20->Name).Number;
        bVar14 = ::FName::IsWithinBounds((FNameEntryId)(param_8->Name).ComparisonIndex.Value);
        if (((bVar14) && (param_8->Name != (FName)0x0)) && (param_8->Type != None)) {
          pUVar17 = param_1->Hierarchy;
          local_878.Type = param_8->Type;
          local_878._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_878.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_878.Name.Number = (param_8->Name).Number;
          iVar15 = URigHierarchy::GetIndex(pUVar17,&local_878,true);
          uVar12 = local_598._128_4_;
          uVar10 = local_598._8_8_;
          uVar8 = local_598._0_8_;
          local_6b8.Float00 = local_598.Float00;
          local_6b8.Float01 = local_598.Float01;
          local_6b8.Float02 = local_598.Float02;
          local_6b8.Float03 = local_598.Float03;
          local_6b8.Float10 = 0.0;
          local_6b8.Float11 = 0.0;
          local_6b8.Float12 = 0.0;
          local_6b8.Float13 = 0.0;
          local_6b8.Float20 = 0.0;
          local_6b8.Float21 = 0.0;
          local_6b8.Float22 = 0.0;
          local_6b8.Float23 = 0.0;
          local_6b8.Float30 = 0.0;
          local_6b8.Float31 = 0.0;
          local_6b8.Float32 = 0.0;
          local_6b8.Float33 = 0.0;
          local_6b8.Float00_2 = 0.0;
          local_6b8.Float01_2 = 0.0;
          local_6b8.Float02_2 = 0.0;
          local_6b8.Float03_2 = 0.0;
          local_6b8.Float10_2 = 0.0;
          local_6b8.Float11_2 = 0.0;
          local_6b8.Float12_2 = 0.0;
          local_6b8.Float13_2 = 0.0;
          local_6b8.Float20_2 = 0.0;
          local_6b8.Float21_2 = 0.0;
          local_6b8.Float22_2 = 0.0;
          local_6b8.Float23_2 = 0.0;
          local_6b8.Float30_2 = 0.0;
          local_6b8.Float31_2 = 0.0;
          local_6b8.Float32_2 = 0.0;
          local_6b8.Float33_2 = 0.0;
          local_6b8.bValid = local_598.bValid;
          local_6b8._129_3_ = local_598._129_3_;
          URigHierarchy::SetControlValueByIndex
                    (pUVar17,iVar15,(FRigControlValue *)&local_6b8,Initial,false,false);
          pUVar17 = param_1->Hierarchy;
          local_868.Type = param_8->Type;
          local_868._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_868.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_868.Name.Number = (param_8->Name).Number;
          iVar15 = URigHierarchy::GetIndex(pUVar17,&local_868,true);
          uVar13 = local_598._128_4_;
          uVar11 = local_598._8_8_;
          uVar9 = local_598._0_8_;
          local_598.Float00 = (float)uVar8;
          local_598.Float01 = SUB84(uVar8,4);
          local_628.Float00 = local_598.Float00;
          local_628.Float01 = local_598.Float01;
          local_598.Float02 = (float)uVar10;
          local_598.Float03 = SUB84(uVar10,4);
          local_628.Float02 = local_598.Float02;
          local_628.Float03 = local_598.Float03;
          local_628.Float10 = 0.0;
          local_628.Float11 = 0.0;
          local_628.Float12 = 0.0;
          local_628.Float13 = 0.0;
          local_628.Float20 = 0.0;
          local_628.Float21 = 0.0;
          local_628.Float22 = 0.0;
          local_628.Float23 = 0.0;
          local_628.Float30 = 0.0;
          local_628.Float31 = 0.0;
          local_628.Float32 = 0.0;
          local_628.Float33 = 0.0;
          local_628.Float00_2 = 0.0;
          local_628.Float01_2 = 0.0;
          local_628.Float02_2 = 0.0;
          local_628.Float03_2 = 0.0;
          local_628.Float10_2 = 0.0;
          local_628.Float11_2 = 0.0;
          local_628.Float12_2 = 0.0;
          local_628.Float13_2 = 0.0;
          local_628.Float20_2 = 0.0;
          local_628.Float21_2 = 0.0;
          local_628.Float22_2 = 0.0;
          local_628.Float23_2 = 0.0;
          local_628.Float30_2 = 0.0;
          local_628.Float31_2 = 0.0;
          local_628.Float32_2 = 0.0;
          local_628.Float33_2 = 0.0;
          local_598.bValid = SUB41(uVar12,0);
          local_598._129_3_ = SUB43(uVar12,1);
          local_628.bValid = local_598.bValid;
          local_628._129_3_ = local_598._129_3_;
          local_598._0_8_ = uVar9;
          local_598._8_8_ = uVar11;
          local_598._128_4_ = uVar13;
          URigHierarchy::SetControlValueByIndex
                    (pUVar17,iVar15,(FRigControlValue *)&local_628,Current,false,false);
        }
        this->CurrentInstructionIndex = (int)local_8d0;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
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
        if (local_140.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data);
        }
        if ((FRigControlLimitEnabled *)local_298._16_8_ != (FRigControlLimitEnabled *)0x0) {
          FMemory::Free((void *)local_298._16_8_);
        }
      }
      if ((local_818.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_818.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_818.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_818.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_818.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_818.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_848);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_858);
      ::FString::PrintfImpl(&local_8b8,L"Node can only run in %s or %s Event");
      if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
      }
      local_8c8.Data.AllocatorInstance.Data = local_8b8.Data.AllocatorInstance.Data;
      local_8c8.Data.ArrayNum = local_8b8.Data.ArrayNum;
      local_8c8.Data.ArrayMax = local_8b8.Data.ArrayMax;
      local_8b8.Data.ArrayNum = 0;
      local_8b8.Data.ArrayMax = 0;
      local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_818.ModulePath.Data.AllocatorInstance.Data = local_848.Data.AllocatorInstance.Data;
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
        local_818.ModulePath.Data.AllocatorInstance.Data = local_848.Data.AllocatorInstance.Data;
      }
    }
    if (local_818.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.ModulePath.Data.AllocatorInstance.Data);
    }
  }
LAB_14a57b130:
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  return;
}

