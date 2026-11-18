// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a48b7c0

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelVector2D");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a48b8d0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelVector2D::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelVector2D *this)

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

// Execute @ 14a48c130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelVector2D::Execute
          (FRigUnit_HierarchyAddAnimationChannelVector2D *this)

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

// FRigUnit_HierarchyAddAnimationChannelVector2D @ 14a510520

FRigUnit_HierarchyAddAnimationChannelVector2D * __thiscall
FRigUnit_HierarchyAddAnimationChannelVector2D::FRigUnit_HierarchyAddAnimationChannelVector2D
          (FRigUnit_HierarchyAddAnimationChannelVector2D *this)

{
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
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelVector2D__6B_;
  (this->LimitsEnabled).X.bMinimum = true;
  (this->LimitsEnabled).X.bMaximum = true;
  (this->LimitsEnabled).Y.bMinimum = true;
  (this->LimitsEnabled).Y.bMaximum = true;
  ::FName::FName(local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  (this->InitialValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MinimumValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaximumValue).field0_0x0._s_0.X = 1.0;
  (this->MaximumValue).field0_0x0._s_0.Y = 1.0;
  return this;
}

// Execute @ 14a529250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelVector2D::Execute
          (FRigUnit_HierarchyAddAnimationChannelVector2D *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->MinimumValue,&this->MaximumValue,
                &this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a545c90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelVector2D::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  TVector2<double> *pTVar5;
  TVector2<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_HierarchyAddAnimationChannel2DLimitSettings *pFVar8;
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
    pTVar4 = (TVector2<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TVector2<double> *)
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
    pTVar5 = (TVector2<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TVector2<double> *)
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
    pTVar6 = (TVector2<double> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TVector2<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_HierarchyAddAnimationChannel2DLimitSettings *)
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

// StaticExecute @ 14a57c0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelVector2D::StaticExecute
          (FControlRigExecuteContext *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,FRigUnit_HierarchyAddAnimationChannel2DLimitSettings *param_5,
          FRigElementKey *param_6,FName *param_7,FRigElementKey *param_8)

{
  double dVar1;
  double dVar2;
  FRigControlLimitEnabled FVar3;
  int iVar4;
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
  URigHierarchy *pUVar16;
  FRigName *this_00;
  FName *pFVar17;
  FRigControlSettings *pFVar18;
  FRigElementKey *pFVar19;
  undefined1 auStackY_8b8 [32];
  FRigName local_878;
  FString local_860;
  FString local_850;
  undefined8 local_840;
  TVector2<double> *local_838;
  TVector2<double> *local_830;
  TVector2<double> *local_828;
  FRigElementKey local_818;
  FRigElementKey local_808;
  FRigElementKey local_7f8;
  FString local_7e8;
  FString local_7d8;
  FRigName local_7c8;
  FRigHierarchyModulePath local_7a8;
  float local_768;
  float fStack_764;
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
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined4 local_6e8;
  FRigControlValueStorage local_6e4;
  FRigElementKey local_660 [2];
  FRigControlValueStorage local_648;
  FRigControlValueStorage local_5b8;
  FRigControlValueStorage local_528;
  FRigControlSettings local_498;
  FRigControlSettings local_278;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_860.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_860.Data.ArrayNum = 0;
  local_860.Data.ArrayMax = 0;
  local_838 = param_3;
  local_830 = param_4;
  local_828 = param_2;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar14 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar14) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_860,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a57c885;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_7a8,param_7);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7a8);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7a8);
      param_8->Type = Curve;
      (param_8->Name).ComparisonIndex = 0;
      (param_8->Name).Number = 0;
      local_840 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings(&local_278);
        local_278.ControlType = Vector2D;
        FRigControlSettings::SetupLimitArrayForType(&local_278,true,true,true);
        FVar3 = param_5->X;
        if ((local_278.LimitEnabled.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)local_278.LimitEnabled.AllocatorInstance.Data = FVar3;
        FVar3 = param_5->Y;
        if ((local_278.LimitEnabled.ArrayNum < 2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_6e4.Float02 = 0.0;
        local_6e4.Float03 = 0.0;
        *(FRigControlLimitEnabled *)(local_278.LimitEnabled.AllocatorInstance.Data + 2) = FVar3;
        local_6e4.Float10 = 0.0;
        local_6e4.Float11 = 0.0;
        local_6e4.Float12 = 0.0;
        local_6e4.Float13 = 0.0;
        local_6e4._128_4_ = 1;
        local_6e4.Float20 = 0.0;
        local_6e4.Float21 = 0.0;
        local_6e4.Float22 = 0.0;
        local_6e4.Float23 = 0.0;
        local_6e4.Float30 = 0.0;
        local_6e4.Float31 = 0.0;
        local_6e4.Float32 = 0.0;
        local_6e4.Float33 = 0.0;
        local_6e4.Float00_2 = 0.0;
        local_6e4.Float01_2 = 0.0;
        local_6e4.Float02_2 = 0.0;
        local_6e4.Float03_2 = 0.0;
        local_6e4.Float10_2 = 0.0;
        local_6e4.Float11_2 = 0.0;
        local_6e4.Float12_2 = 0.0;
        local_6e4.Float13_2 = 0.0;
        local_6e4.Float20_2 = 0.0;
        local_6e4.Float21_2 = 0.0;
        local_6e4.Float22_2 = 0.0;
        local_6e4.Float23_2 = 0.0;
        local_6e4.Float30_2 = 0.0;
        local_6e4.Float31_2 = 0.0;
        local_6e4.Float32_2 = 0.0;
        local_6e4.Float33_2 = 0.0;
        local_6e4.Float00 = (float)(local_838->field0_0x0)._s_0.X;
        local_6e4.Float01 = (float)(local_838->field0_0x0)._s_0.Y;
        local_278.MinimumValue.FloatStorage.Float00 = local_6e4.Float00;
        local_278.MinimumValue.FloatStorage.Float01 = local_6e4.Float01;
        local_278.MinimumValue.FloatStorage.Float02 = 0.0;
        local_278.MinimumValue.FloatStorage.Float03 = 0.0;
        local_278.MinimumValue.FloatStorage.Float10 = 0.0;
        local_278.MinimumValue.FloatStorage.Float11 = 0.0;
        local_278.MinimumValue.FloatStorage.Float12 = 0.0;
        local_278.MinimumValue.FloatStorage.Float13 = 0.0;
        local_278.MinimumValue.FloatStorage.Float20 = 0.0;
        local_278.MinimumValue.FloatStorage.Float21 = 0.0;
        local_278.MinimumValue.FloatStorage.Float22 = 0.0;
        local_278.MinimumValue.FloatStorage.Float23 = 0.0;
        local_278.MinimumValue.FloatStorage.Float30 = 0.0;
        local_278.MinimumValue.FloatStorage.Float31 = 0.0;
        local_278.MinimumValue.FloatStorage.Float32 = 0.0;
        local_278.MinimumValue.FloatStorage.Float33 = 0.0;
        local_278.MinimumValue.FloatStorage.Float00_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float01_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float02_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float03_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float10_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float11_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float12_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float13_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float20_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float21_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float22_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float23_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float30_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float31_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float32_2 = 0.0;
        local_278.MinimumValue.FloatStorage.Float33_2 = 0.0;
        local_278.MinimumValue.FloatStorage.bValid = true;
        local_278.MinimumValue.FloatStorage._129_3_ = 0;
        local_6e8 = 1;
        local_758 = 0;
        uStack_750 = 0;
        local_278.MaximumValue.FloatStorage.Float00 = (float)(local_830->field0_0x0)._s_0.X;
        local_278.MaximumValue.FloatStorage.bValid = true;
        local_278.MaximumValue.FloatStorage._129_3_ = 0;
        local_278.MaximumValue.FloatStorage.Float01 = (float)(local_830->field0_0x0)._s_0.Y;
        _local_768 = CONCAT44(local_278.MaximumValue.FloatStorage.Float01,
                              local_278.MaximumValue.FloatStorage.Float00);
        uStack_760 = 0;
        local_278.MaximumValue.FloatStorage.Float02 = 0.0;
        local_278.MaximumValue.FloatStorage.Float03 = 0.0;
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
        local_6f8 = 0;
        uStack_6f0 = 0;
        local_278.MaximumValue.FloatStorage.Float10 = 0.0;
        local_278.MaximumValue.FloatStorage.Float11 = 0.0;
        local_278.MaximumValue.FloatStorage.Float12 = 0.0;
        local_278.MaximumValue.FloatStorage.Float13 = 0.0;
        local_278.MaximumValue.FloatStorage.Float20 = 0.0;
        local_278.MaximumValue.FloatStorage.Float21 = 0.0;
        local_278.MaximumValue.FloatStorage.Float22 = 0.0;
        local_278.MaximumValue.FloatStorage.Float23 = 0.0;
        local_278.MaximumValue.FloatStorage.Float30 = 0.0;
        local_278.MaximumValue.FloatStorage.Float31 = 0.0;
        local_278.MaximumValue.FloatStorage.Float32 = 0.0;
        local_278.MaximumValue.FloatStorage.Float33 = 0.0;
        local_278.MaximumValue.FloatStorage.Float00_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float01_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float02_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float03_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float10_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float11_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float12_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float13_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float20_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float21_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float22_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float23_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float30_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float31_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float32_2 = 0.0;
        local_278.MaximumValue.FloatStorage.Float33_2 = 0.0;
        pUVar16 = URigHierarchyController::GetHierarchy(this);
        local_878.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        local_878.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_878.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if ((((FRigName *)param_7 != &local_878) &&
            (local_878.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_7,
            local_878.Name.field0_0x0._0_4_ == 0xffffffff)) &&
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
        if (local_878.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
          if (local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_878.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_878.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        }
        this_00 = URigHierarchy::GetSafeNewDisplayName(pUVar16,&local_7c8,param_6,&local_878);
        pFVar17 = FRigName::GetFName(this_00);
        local_278.DisplayName = *pFVar17;
        if ((local_7c8.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_7c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_7c8.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_878.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_878.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        local_528.Float02 = 0.0;
        local_528.Float03 = 0.0;
        iVar4 = this->CurrentInstructionIndex;
        dVar1 = (local_828->field0_0x0)._s_0.X;
        dVar2 = (local_828->field0_0x0)._s_0.Y;
        local_528.bValid = true;
        local_528._129_3_ = 0;
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_528.Float01 = (float)dVar2;
        local_528.Float00 = (float)dVar1;
        pFVar18 = FRigControlSettings::FRigControlSettings(&local_498,&local_278);
        local_818.Name.Number = (param_6->Name).Number;
        local_818.Type = param_6->Type;
        local_818._1_3_ = *(undefined3 *)&param_6->field_0x1;
        local_818.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
        pFVar19 = URigHierarchyController::AddAnimationChannel
                            (this,local_660,*param_7,&local_818,pFVar18,false,false);
        uVar6 = *(undefined3 *)&pFVar19->field_0x1;
        FVar7.Value = (pFVar19->Name).ComparisonIndex.Value;
        param_8->Type = pFVar19->Type;
        *(undefined3 *)&param_8->field_0x1 = uVar6;
        (param_8->Name).ComparisonIndex = (FNameEntryId)FVar7.Value;
        (param_8->Name).Number = (pFVar19->Name).Number;
        bVar14 = ::FName::IsWithinBounds((FNameEntryId)(param_8->Name).ComparisonIndex.Value);
        if (((bVar14) && (param_8->Name != (FName)0x0)) && (param_8->Type != None)) {
          pUVar16 = param_1->Hierarchy;
          local_808.Type = param_8->Type;
          local_808._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_808.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_808.Name.Number = (param_8->Name).Number;
          iVar15 = URigHierarchy::GetIndex(pUVar16,&local_808,true);
          uVar12 = local_528._128_4_;
          uVar10 = local_528._8_8_;
          uVar8 = local_528._0_8_;
          local_648.Float00 = local_528.Float00;
          local_648.Float01 = local_528.Float01;
          local_648.Float02 = local_528.Float02;
          local_648.Float03 = local_528.Float03;
          local_648.Float10 = 0.0;
          local_648.Float11 = 0.0;
          local_648.Float12 = 0.0;
          local_648.Float13 = 0.0;
          local_648.Float20 = 0.0;
          local_648.Float21 = 0.0;
          local_648.Float22 = 0.0;
          local_648.Float23 = 0.0;
          local_648.Float30 = 0.0;
          local_648.Float31 = 0.0;
          local_648.Float32 = 0.0;
          local_648.Float33 = 0.0;
          local_648.Float00_2 = 0.0;
          local_648.Float01_2 = 0.0;
          local_648.Float02_2 = 0.0;
          local_648.Float03_2 = 0.0;
          local_648.Float10_2 = 0.0;
          local_648.Float11_2 = 0.0;
          local_648.Float12_2 = 0.0;
          local_648.Float13_2 = 0.0;
          local_648.Float20_2 = 0.0;
          local_648.Float21_2 = 0.0;
          local_648.Float22_2 = 0.0;
          local_648.Float23_2 = 0.0;
          local_648.Float30_2 = 0.0;
          local_648.Float31_2 = 0.0;
          local_648.Float32_2 = 0.0;
          local_648.Float33_2 = 0.0;
          local_648.bValid = local_528.bValid;
          local_648._129_3_ = local_528._129_3_;
          URigHierarchy::SetControlValueByIndex
                    (pUVar16,iVar15,(FRigControlValue *)&local_648,Initial,false,false);
          pUVar16 = param_1->Hierarchy;
          local_7f8.Type = param_8->Type;
          local_7f8._1_3_ = *(undefined3 *)&param_8->field_0x1;
          local_7f8.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
          local_7f8.Name.Number = (param_8->Name).Number;
          iVar15 = URigHierarchy::GetIndex(pUVar16,&local_7f8,true);
          uVar13 = local_528._128_4_;
          uVar11 = local_528._8_8_;
          uVar9 = local_528._0_8_;
          local_528.Float00 = (float)uVar8;
          local_528.Float01 = SUB84(uVar8,4);
          local_5b8.Float00 = local_528.Float00;
          local_5b8.Float01 = local_528.Float01;
          local_528.Float02 = (float)uVar10;
          local_528.Float03 = SUB84(uVar10,4);
          local_5b8.Float02 = local_528.Float02;
          local_5b8.Float03 = local_528.Float03;
          local_5b8.Float10 = 0.0;
          local_5b8.Float11 = 0.0;
          local_5b8.Float12 = 0.0;
          local_5b8.Float13 = 0.0;
          local_5b8.Float20 = 0.0;
          local_5b8.Float21 = 0.0;
          local_5b8.Float22 = 0.0;
          local_5b8.Float23 = 0.0;
          local_5b8.Float30 = 0.0;
          local_5b8.Float31 = 0.0;
          local_5b8.Float32 = 0.0;
          local_5b8.Float33 = 0.0;
          local_5b8.Float00_2 = 0.0;
          local_5b8.Float01_2 = 0.0;
          local_5b8.Float02_2 = 0.0;
          local_5b8.Float03_2 = 0.0;
          local_5b8.Float10_2 = 0.0;
          local_5b8.Float11_2 = 0.0;
          local_5b8.Float12_2 = 0.0;
          local_5b8.Float13_2 = 0.0;
          local_5b8.Float20_2 = 0.0;
          local_5b8.Float21_2 = 0.0;
          local_5b8.Float22_2 = 0.0;
          local_5b8.Float23_2 = 0.0;
          local_5b8.Float30_2 = 0.0;
          local_5b8.Float31_2 = 0.0;
          local_5b8.Float32_2 = 0.0;
          local_5b8.Float33_2 = 0.0;
          local_528.bValid = SUB41(uVar12,0);
          local_528._129_3_ = SUB43(uVar12,1);
          local_5b8.bValid = local_528.bValid;
          local_5b8._129_3_ = local_528._129_3_;
          local_528._0_8_ = uVar9;
          local_528._8_8_ = uVar11;
          local_528._128_4_ = uVar13;
          URigHierarchy::SetControlValueByIndex
                    (pUVar16,iVar15,(FRigControlValue *)&local_5b8,Current,false,false);
        }
        this->CurrentInstructionIndex = iVar4;
        if (local_278.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.FilteredChannels.AllocatorInstance.Data);
        }
        if (local_278.PreviouslyDrivenControls.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.PreviouslyDrivenControls.AllocatorInstance.Data);
        }
        if (local_278.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.DrivenControls.AllocatorInstance.Data);
        }
        if (local_278.Customization.RemovedSpaces.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Customization.RemovedSpaces.AllocatorInstance.Data);
        }
        if (local_278.Customization.AvailableSpaces.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Customization.AvailableSpaces.AllocatorInstance.Data);
        }
        if ((FRigControlLimitEnabled *)local_278.LimitEnabled.AllocatorInstance.Data !=
            (FRigControlLimitEnabled *)0x0) {
          FMemory::Free(local_278.LimitEnabled.AllocatorInstance.Data);
        }
      }
      if ((local_7a8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_7a8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_7a8.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_7a8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_7a8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_7a8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_7d8);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_7e8);
      ::FString::PrintfImpl(&local_850,L"Node can only run in %s or %s Event");
      if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_860.Data.AllocatorInstance.Data);
      }
      local_860.Data.AllocatorInstance.Data = local_850.Data.AllocatorInstance.Data;
      local_860.Data.ArrayNum = local_850.Data.ArrayNum;
      local_860.Data.ArrayMax = local_850.Data.ArrayMax;
      local_850.Data.ArrayNum = 0;
      local_850.Data.ArrayMax = 0;
      local_850.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7a8.ModulePath.Data.AllocatorInstance.Data = local_7d8.Data.AllocatorInstance.Data;
      if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
        local_7a8.ModulePath.Data.AllocatorInstance.Data = local_7d8.Data.AllocatorInstance.Data;
      }
    }
    if (local_7a8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.ModulePath.Data.AllocatorInstance.Data);
    }
  }
LAB_14a57c885:
  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data.AllocatorInstance.Data);
  }
  return;
}

