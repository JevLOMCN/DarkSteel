// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a48e900

UScriptStruct * __cdecl FRigUnit_HierarchyAddAnimationChannelScaleVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddAnimationChannelScaleVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector
                    .OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a48e9d0

UScriptStruct * __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleVector::GetExecuteContextStruct
          (FRigUnit_HierarchyAddAnimationChannelScaleVector *this)

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

// Execute @ 14a48eca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleVector::Execute
          (FRigUnit_HierarchyAddAnimationChannelScaleVector *this)

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

// FRigUnit_HierarchyAddAnimationChannelScaleVector @ 14a510450

FRigUnit_HierarchyAddAnimationChannelScaleVector * __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleVector::FRigUnit_HierarchyAddAnimationChannelScaleVector
          (FRigUnit_HierarchyAddAnimationChannelScaleVector *this)

{
  undefined8 uVar1;
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
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddAnimationChannelScaleVector__6B_;
  (this->LimitsEnabled).X.bMinimum = true;
  (this->LimitsEnabled).X.bMaximum = true;
  (this->LimitsEnabled).Y.bMinimum = true;
  (this->LimitsEnabled).Y.bMaximum = true;
  (this->LimitsEnabled).Z.bMinimum = true;
  (this->LimitsEnabled).Z.bMaximum = true;
  ::FName::FName(local_res8,L"NewChannel");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->InitialValue).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->InitialValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MinimumValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MinimumValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->MinimumValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MaximumValue).field0_0x0._s_0.X = 10.0;
  (this->MaximumValue).field0_0x0._s_0.Y = 10.0;
  (this->MaximumValue).field0_0x0._s_0.Z = 10.0;
  return this;
}

// Execute @ 14a5291f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddAnimationChannelScaleVector::Execute
          (FRigUnit_HierarchyAddAnimationChannelScaleVector *this,FControlRigExecuteContext *param_1
          )

{
  StaticExecute(param_1,&this->InitialValue,&this->MinimumValue,&this->MaximumValue,
                &this->LimitsEnabled,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a545a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelScaleVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings *pFVar8;
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
    pTVar4 = (TVector<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TVector<double> *)
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
    pTVar5 = (TVector<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
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
    pTVar6 = (TVector<double> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings *)
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

// StaticExecute @ 14a57b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddAnimationChannelScaleVector::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings *param_5
          ,FRigElementKey *param_6,FName *param_7,FRigElementKey *param_8)

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
  URigHierarchy *pUVar16;
  FRigName *this_00;
  FName *pFVar17;
  FRigControlSettings *pFVar18;
  FRigElementKey *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_8b8 [32];
  FRigName local_878;
  undefined8 local_860;
  FString local_858;
  FString local_848;
  TVector<double> *local_838;
  TVector<double> *local_830;
  TVector<double> *local_828;
  FRigElementKey local_818;
  FRigElementKey local_808;
  FRigElementKey local_7f8;
  FString local_7e8;
  FString local_7d8;
  FRigName local_7c8;
  FRigHierarchyModulePath local_7a8;
  FRigControlValueStorage local_768;
  undefined1 local_6e4 [16];
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
  undefined8 local_674;
  undefined8 uStack_66c;
  undefined4 local_664;
  FRigElementKey local_660 [2];
  FRigControlValueStorage local_648;
  FRigControlValueStorage local_5b8;
  FRigControlValueStorage local_528;
  FRigControlSettings local_498;
  undefined1 local_278 [184];
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  ForAnyElementType local_120;
  ForAnyElementType local_110;
  ForAnyElementType local_100;
  ForAnyElementType local_f0;
  ForAnyElementType local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_858.Data.ArrayNum = 0;
  local_858.Data.ArrayMax = 0;
  local_838 = param_3;
  local_830 = param_4;
  local_828 = param_2;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar14 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar14) {
      if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
          (param_1->Hierarchy->Elements).ArrayNum) {
        ::FString::operator=
                  (&local_858,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        goto LAB_14a57c08c;
      }
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_7a8,param_7);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7a8);
      FRigHierarchyModulePath::UsesModuleNameFormat(&local_7a8);
      param_8->Type = Curve;
      (param_8->Name).ComparisonIndex = 0;
      (param_8->Name).Number = 0;
      local_860 = 0;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        FRigControlSettings::FRigControlSettings((FRigControlSettings *)local_278);
        local_278[1] = Scale;
        FRigControlSettings::SetupLimitArrayForType((FRigControlSettings *)local_278,true,true,true)
        ;
        FVar4 = param_5->X;
        if (((int)local_278._24_4_ < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)local_278._16_8_ = FVar4;
        FVar4 = param_5->Y;
        if (((int)local_278._24_4_ < 2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)(local_278._16_8_ + 2) = FVar4;
        FVar4 = param_5->Z;
        if (((int)local_278._24_4_ < 3) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRigControlLimitEnabled *)(local_278._16_8_ + 4) = FVar4;
        local_768.Float10 = 0.0;
        local_768.Float11 = 0.0;
        local_768.Float12 = 0.0;
        local_768.Float13 = 0.0;
        local_768._128_4_ = 1;
        local_768.Float20 = 0.0;
        local_768.Float21 = 0.0;
        local_768.Float22 = 0.0;
        local_768.Float23 = 0.0;
        local_768.Float30 = 0.0;
        local_768.Float31 = 0.0;
        local_768.Float32 = 0.0;
        local_768.Float33 = 0.0;
        local_768.Float00_2 = 0.0;
        local_768.Float01_2 = 0.0;
        local_768.Float02_2 = 0.0;
        local_768.Float03_2 = 0.0;
        local_768.Float10_2 = 0.0;
        local_768.Float11_2 = 0.0;
        local_768.Float12_2 = 0.0;
        local_768.Float13_2 = 0.0;
        local_768.Float20_2 = 0.0;
        local_768.Float21_2 = 0.0;
        local_768.Float22_2 = 0.0;
        local_768.Float23_2 = 0.0;
        local_768.Float30_2 = 0.0;
        local_768.Float31_2 = 0.0;
        local_768.Float32_2 = 0.0;
        local_768.Float33_2 = 0.0;
        local_768.Float00 = (float)(local_838->field0_0x0)._s_0.X;
        local_768.Float01 = (float)(local_838->field0_0x0)._s_0.Y;
        local_768.Float02 = (float)(local_838->field0_0x0)._s_0.Z;
        local_6d4 = 0;
        uStack_6cc = 0;
        local_768.Float03 = 0.0;
        local_278._36_4_ = local_768.Float00;
        local_278._40_4_ = local_768.Float01;
        local_278._44_4_ = local_768.Float02;
        local_278._48_4_ = 0.0;
        local_278._52_4_ = 0.0;
        local_278._56_4_ = 0.0;
        local_278._60_4_ = 0.0;
        local_278._64_4_ = 0.0;
        local_278._68_4_ = 0.0;
        local_278._72_4_ = 0.0;
        local_278._76_4_ = 0.0;
        local_278._80_4_ = 0.0;
        local_278._84_4_ = 0.0;
        local_278._88_4_ = 0.0;
        local_278._92_4_ = 0.0;
        local_278._96_4_ = 0.0;
        local_278._100_4_ = 0.0;
        local_278._104_4_ = 0.0;
        local_278._108_4_ = 0.0;
        local_278._112_4_ = 0.0;
        local_278._116_4_ = 0.0;
        local_278._120_4_ = 0.0;
        local_278._124_4_ = 0.0;
        local_278._128_4_ = 0.0;
        local_278._132_4_ = 0.0;
        local_278._136_4_ = 0.0;
        local_278._140_4_ = 0.0;
        local_278._144_4_ = 0.0;
        local_6c4 = 0;
        uStack_6bc = 0;
        local_278._148_4_ = 0.0;
        local_278._152_4_ = 0.0;
        local_278._156_4_ = 0.0;
        local_278._160_4_ = 0.0;
        local_278._164_4_ = 1;
        local_664 = 1;
        local_6b4 = 0;
        uStack_6ac = 0;
        fVar22 = (float)(local_830->field0_0x0)._s_0.X;
        local_150._0_1_ = true;
        local_150._1_3_ = 0;
        fVar20 = (float)(local_830->field0_0x0)._s_0.Y;
        fVar21 = (float)(local_830->field0_0x0)._s_0.Z;
        local_6a4 = 0;
        uStack_69c = 0;
        local_6e4._4_4_ = fVar20;
        local_6e4._0_4_ = fVar22;
        local_6e4._8_4_ = fVar21;
        local_6e4._12_4_ = 0;
        local_278._172_4_ = fVar20;
        local_278._168_4_ = fVar22;
        local_278._176_4_ = fVar21;
        local_278._180_4_ = 0;
        local_694 = 0;
        uStack_68c = 0;
        local_684 = 0;
        uStack_67c = 0;
        local_674 = 0;
        uStack_66c = 0;
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
        local_160._0_4_ = 0.0;
        local_160._4_4_ = 0.0;
        uStack_158._0_4_ = 0.0;
        uStack_158._4_4_ = 0.0;
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
        local_278._4_8_ = *pFVar17;
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
        local_528.bValid = true;
        local_528._129_3_ = 0;
        dVar1 = (local_828->field0_0x0)._s_0.X;
        dVar2 = (local_828->field0_0x0)._s_0.Y;
        dVar3 = (local_828->field0_0x0)._s_0.Z;
        local_860 = CONCAT44(local_860._4_4_,this->CurrentInstructionIndex);
        this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
        local_528.Float01 = (float)dVar2;
        local_528.Float00 = (float)dVar1;
        local_528.Float03 = 0.0;
        local_528.Float02 = (float)dVar3;
        pFVar18 = FRigControlSettings::FRigControlSettings
                            (&local_498,(FRigControlSettings *)local_278);
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
        this->CurrentInstructionIndex = (int)local_860;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        if (local_f0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data);
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
        if ((FRigControlLimitEnabled *)local_278._16_8_ != (FRigControlLimitEnabled *)0x0) {
          FMemory::Free((void *)local_278._16_8_);
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
      ::FString::PrintfImpl(&local_848,L"Node can only run in %s or %s Event");
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
      }
      local_858.Data.AllocatorInstance.Data = local_848.Data.AllocatorInstance.Data;
      local_858.Data.ArrayNum = local_848.Data.ArrayNum;
      local_858.Data.ArrayMax = local_848.Data.ArrayMax;
      local_848.Data.ArrayNum = 0;
      local_848.Data.ArrayMax = 0;
      local_848.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
LAB_14a57c08c:
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  return;
}

