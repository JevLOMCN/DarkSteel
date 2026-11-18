// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4820d0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a482150

UScriptStruct * __thiscall
FRigUnit_HierarchyAddControlTransform::GetExecuteContextStruct
          (FRigUnit_HierarchyAddControlTransform *this)

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

// GetControlTypeToSpawn @ 14a4826d0

ERigControlType __thiscall
FRigUnit_HierarchyAddControlTransform::GetControlTypeToSpawn
          (FRigUnit_HierarchyAddControlTransform *this)

{
  return EulerTransform;
}

// Execute @ 14a482740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlTransform::Execute(FRigUnit_HierarchyAddControlTransform *this)

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

// FRigUnit_HierarchyAddControlTransform @ 14a510a20

FRigUnit_HierarchyAddControlTransform * __thiscall
FRigUnit_HierarchyAddControlTransform::FRigUnit_HierarchyAddControlTransform
          (FRigUnit_HierarchyAddControlTransform *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FRigUnit_HierarchyAddControlElement::FRigUnit_HierarchyAddControlElement
            ((FRigUnit_HierarchyAddControlElement *)this);
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlTransform__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Scale3D.ZW.m128d_f64 = auVar8;
  FRigUnit_HierarchyAddControlTransform_Settings::FRigUnit_HierarchyAddControlTransform_Settings
            (&this->Settings);
  *&(this->InitialValue).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InitialValue).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InitialValue).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InitialValue).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InitialValue).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InitialValue).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// Execute @ 14a529460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddControlTransform::Execute
          (FRigUnit_HierarchyAddControlTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InitialValue,&this->Settings,(TTransform<double> *)&this->_padding_,
                (ERigVMTransformSpace)this->_padding_,(FRigElementKey *)&this->_padding_,
                (FName *)((longlong)&this->_padding_ + 4),
                (FRigElementKey *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a546910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  FRigUnit_HierarchyAddControlTransform_Settings *pFVar6;
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
    pTVar5 = (TTransform<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
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
    pFVar6 = (FRigUnit_HierarchyAddControlTransform_Settings *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_HierarchyAddControlTransform_Settings *)
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

// StaticExecute @ 14a57e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddControlTransform::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          FRigUnit_HierarchyAddControlTransform_Settings *param_3,TTransform<double> *param_4,
          ERigVMTransformSpace param_5,FRigElementKey *param_6,FName *param_7,
          FRigElementKey *param_8)

{
  URigHierarchy *this;
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double adVar7 [2];
  double adVar8 [2];
  double adVar9 [2];
  undefined3 uVar10;
  FNameEntryId FVar11;
  bool bVar12;
  int iVar13;
  URigHierarchyController *this_00;
  TTransform<double> *pTVar14;
  FRigControlSettings *pFVar15;
  FRigElementKey *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStackY_968 [32];
  FString local_918;
  FString local_908;
  float local_8f8;
  float local_8e8;
  float local_8d8;
  float local_8c8;
  float local_8b8;
  float local_8a8;
  FString local_898;
  FString local_888;
  double local_878 [2];
  double local_868 [2];
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  double local_848;
  TRotator<double> local_840;
  double local_828;
  double dStack_820;
  double local_818;
  double local_808;
  double dStack_800;
  double local_7f8;
  double dStack_7f0;
  undefined1 local_7e8 [16];
  FRigControlValue local_7d8;
  FRigControlSettings local_748;
  undefined1 local_528 [36];
  undefined8 local_504;
  float fStack_4fc;
  float fStack_4f8;
  float local_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float local_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float local_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float local_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float local_4b4;
  float fStack_4b0;
  float local_4ac;
  undefined4 local_4a8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  FRigControlSettings local_318;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_968;
  local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_7;
  local_908.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_908.Data.ArrayNum = 0;
  local_908.Data.ArrayMax = 0;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) goto LAB_14a57eb27;
  bVar12 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
  if (bVar12) {
    if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <=
        (param_1->Hierarchy->Elements).ArrayNum) {
      ::FString::operator=
                (&local_908,
                 L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                );
      goto LAB_14a57eb27;
    }
    param_8->Type = Curve;
    (param_8->Name).ComparisonIndex = 0;
    (param_8->Name).Number = 0;
    local_918.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00 = URigHierarchy::GetController(param_1->Hierarchy,true);
    if (this_00 == (URigHierarchyController *)0x0) goto LAB_14a57eb27;
    FRigControlSettings::FRigControlSettings(&local_318);
    (**(code **)(param_3->_padding_ + 0x10))(param_3,&local_318);
    FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
              (&local_378,param_4,param_5,param_6,param_1->Hierarchy);
    local_868 = *&(param_2->Rotation).ZW.m128d_f64;
    local_498.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    local_498.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
    local_498.Scale3D.ZW.m128d_f64 = *&(param_2->Scale3D).ZW.m128d_f64;
    local_878 = *&(param_2->Rotation).XY.m128d_f64;
    local_858 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
    uStack_854 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
    uStack_850 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
    uStack_84c = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
    local_498.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Translation).ZW.m128d_f64
    ;
    local_498.Translation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
    local_498.Translation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
    local_498.Translation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
    if (param_3->InitialSpace == GlobalSpace) {
      this = param_1->Hierarchy;
      local_918.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
      local_918.Data.ArrayNum = (param_6->Name).Number;
      local_498.Rotation.XY.m128d_f64 = local_878;
      local_498.Rotation.ZW.m128d_f64 = local_868;
      local_498.Translation.XY.m128d_f64[0]._0_4_ = local_858;
      local_498.Translation.XY.m128d_f64[0]._4_4_ = uStack_854;
      local_498.Translation.XY.m128d_f64[1]._0_4_ = uStack_850;
      local_498.Translation.XY.m128d_f64[1]._4_4_ = uStack_84c;
      iVar13 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_918,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_3d8,iVar13,false);
      local_438.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_438.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_438.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_438.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_438.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_438.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_438.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_438.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_438.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_438.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_438.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_438.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_438.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_438.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_438.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_438.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_438,&local_378,&local_3d8);
      pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform
                          (&local_498,(TTransform<double> *)local_528,&local_438);
      dVar3 = (pTVar14->Rotation).XY.m128d_f64[0];
      dVar4 = (pTVar14->Rotation).XY.m128d_f64[1];
      dVar5 = (pTVar14->Rotation).ZW.m128d_f64[0];
      dVar6 = (pTVar14->Rotation).ZW.m128d_f64[1];
      local_858 = *(undefined4 *)(pTVar14->Translation).XY.m128d_f64;
      uStack_854 = *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 4);
      uStack_850 = *(undefined4 *)((pTVar14->Translation).XY.m128d_f64 + 1);
      uStack_84c = *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 0xc);
      local_498.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar14->Translation).ZW.m128d_f64;
      local_498.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 4);
      local_498.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar14->Translation).ZW.m128d_f64 + 1);
      local_498.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 0xc);
      local_498.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
      local_498.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
      local_498.Scale3D.ZW.m128d_f64 = *&(pTVar14->Scale3D).ZW.m128d_f64;
      dVar22 = dVar3 * dVar3 + dVar5 * dVar5;
      dVar25 = dVar4 * dVar4 + dVar6 * dVar6;
      dVar1 = dVar25 + dVar22;
      dVar22 = dVar22 + dVar25;
      auVar21._8_4_ = SUB84(dVar22,0);
      auVar21._0_8_ = dVar1;
      auVar21._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar21 = sqrtpd((undefined1  [16])local_498.Scale3D.ZW.m128d_f64,auVar21);
      uVar17 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar22);
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
      uVar20 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar22);
      auVar27._0_8_ = uVar17 & (ulonglong)(auVar26._0_8_ * dVar3);
      uVar2 = uVar19 & (ulonglong)(auVar26._8_8_ * dVar4);
      auVar27._8_4_ = (undefined4)uVar2;
      auVar27._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar23._0_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar23._4_4_ =
           ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar23._8_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar23._12_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_878 = (double  [2])(auVar27 | auVar23);
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
      auVar24._0_8_ = uVar18 & (ulonglong)(auVar21._0_8_ * dVar5);
      uVar2 = uVar20 & (ulonglong)(auVar21._8_8_ * dVar6);
      auVar24._8_4_ = (undefined4)uVar2;
      auVar24._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar26._4_4_ =
           ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar26._0_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar26._8_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar26._12_4_ =
           ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_868 = (double  [2])(auVar24 | auVar26);
    }
    local_848 = (double)CONCAT44(local_498.Translation.ZW.m128d_f64[0]._4_4_,
                                 local_498.Translation.ZW.m128d_f64[0]._0_4_);
    local_498.Rotation.XY.m128d_f64 = local_878;
    local_498.Rotation.ZW.m128d_f64 = local_868;
    local_498.Translation.XY.m128d_f64[0]._0_4_ = local_858;
    local_498.Translation.XY.m128d_f64[0]._4_4_ = uStack_854;
    local_498.Translation.XY.m128d_f64[1]._0_4_ = uStack_850;
    local_498.Translation.XY.m128d_f64[1]._4_4_ = uStack_84c;
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_878,&local_840);
    adVar7 = *&(param_3->Shape).Transform.Rotation.XY.m128d_f64;
    iVar13 = this_00->CurrentInstructionIndex;
    adVar8 = *&(param_3->Shape).Transform.Rotation.ZW.m128d_f64;
    local_4b4 = 0.0;
    fStack_4b0 = 0.0;
    dVar1 = (param_3->Shape).Transform.Translation.XY.m128d_f64[0];
    dVar22 = (param_3->Shape).Transform.Translation.XY.m128d_f64[1];
    local_4ac = 0.0;
    adVar9 = *&(param_3->Shape).Transform.Translation.ZW.m128d_f64;
    local_504 = 0;
    fStack_4fc = 0.0;
    fStack_4f8 = 0.0;
    local_4f4 = 0.0;
    fStack_4f0 = 0.0;
    fStack_4ec = 0.0;
    fStack_4e8 = 0.0;
    local_4a8._0_1_ = true;
    local_4a8._1_3_ = 0;
    local_4e4 = 0.0;
    fStack_4e0 = 0.0;
    fStack_4dc = 0.0;
    fStack_4d8 = 0.0;
    local_4d4 = 0.0;
    fStack_4d0 = 0.0;
    fStack_4cc = 0.0;
    fStack_4c8 = 0.0;
    local_4c4 = 0.0;
    fStack_4c0 = 0.0;
    fStack_4bc = 0.0;
    fStack_4b8 = 0.0;
    local_828 = local_498.Scale3D.XY.m128d_f64[0];
    dStack_820 = local_498.Scale3D.XY.m128d_f64[1];
    local_7e8 = ZEXT416((uint)(float)local_840.Pitch);
    local_8f8 = (float)local_840.Yaw;
    local_8e8 = (float)local_840.Roll;
    local_878 = (double  [2])ZEXT416((uint)(float)(double)CONCAT44(uStack_84c,uStack_850));
    local_8d8 = (float)(double)CONCAT44(uStack_854,local_858);
    local_818 = local_498.Scale3D.ZW.m128d_f64[0];
    local_8c8 = (float)local_848;
    local_8b8 = (float)local_498.Scale3D.XY.m128d_f64[0];
    local_8a8 = (float)local_498.Scale3D.XY.m128d_f64[1];
    local_918.Data.AllocatorInstance.Data._0_4_ = (float)local_498.Scale3D.ZW.m128d_f64[0];
    local_808 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[0];
    dStack_800 = (param_3->Shape).Transform.Scale3D.XY.m128d_f64[1];
    local_7f8 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[0];
    dStack_7f0 = (param_3->Shape).Transform.Scale3D.ZW.m128d_f64[1];
    this_00->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
    pFVar15 = FRigControlSettings::FRigControlSettings(&local_748,&local_318);
    local_438.Scale3D.XY.m128d_f64[0] = local_808;
    local_438.Scale3D.XY.m128d_f64[1] = dStack_800;
    local_438.Scale3D.ZW.m128d_f64[1] = dStack_7f0;
    local_438.Scale3D.ZW.m128d_f64[0] = local_7f8;
    local_3d8.Rotation.XY.m128d_f64[0] = local_378.Rotation.XY.m128d_f64[0];
    local_3d8.Rotation.XY.m128d_f64[1] = local_378.Rotation.XY.m128d_f64[1];
    local_7d8.FloatStorage.bValid = local_4a8._0_1_;
    local_7d8.FloatStorage._129_3_ = local_4a8._1_3_;
    local_918.Data.ArrayNum = (param_6->Name).Number;
    local_7d8.FloatStorage.Float00 = (float)local_7e8._0_4_;
    local_7d8.FloatStorage.Float01 = local_8f8;
    local_7d8.FloatStorage.Float02 = local_8e8;
    local_7d8.FloatStorage.Float03 = local_8d8;
    local_7d8.FloatStorage.Float10 = local_878[0]._0_4_;
    local_7d8.FloatStorage.Float11 = local_8c8;
    local_7d8.FloatStorage.Float12 = local_8b8;
    local_7d8.FloatStorage.Float13 = local_8a8;
    local_7d8.FloatStorage.Float01_2 = local_4e4;
    local_7d8.FloatStorage.Float00_2 = fStack_4e8;
    local_7d8.FloatStorage.Float03_2 = fStack_4dc;
    local_7d8.FloatStorage.Float02_2 = fStack_4e0;
    local_7d8.FloatStorage.Float20 = local_918.Data.AllocatorInstance.Data._0_4_;
    local_7d8.FloatStorage.Float21 = (float)local_504;
    local_7d8.FloatStorage.Float22 = local_504._4_4_;
    local_7d8.FloatStorage.Float23 = fStack_4fc;
    local_7d8.FloatStorage.Float31 = local_4f4;
    local_7d8.FloatStorage.Float30 = fStack_4f8;
    local_7d8.FloatStorage.Float33 = fStack_4ec;
    local_7d8.FloatStorage.Float32 = fStack_4f0;
    local_7d8.FloatStorage.Float11_2 = local_4d4;
    local_7d8.FloatStorage.Float10_2 = fStack_4d8;
    local_7d8.FloatStorage.Float13_2 = fStack_4cc;
    local_7d8.FloatStorage.Float12_2 = fStack_4d0;
    local_7d8.FloatStorage.Float31_2 = local_4b4;
    local_7d8.FloatStorage.Float30_2 = fStack_4b8;
    local_7d8.FloatStorage.Float33_2 = local_4ac;
    local_7d8.FloatStorage.Float32_2 = fStack_4b0;
    local_918.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
    local_7d8.FloatStorage.Float21_2 = local_4c4;
    local_7d8.FloatStorage.Float20_2 = fStack_4c8;
    local_7d8.FloatStorage.Float23_2 = fStack_4bc;
    local_7d8.FloatStorage.Float22_2 = fStack_4c0;
    local_3d8.Rotation.ZW.m128d_f64[0] = local_378.Rotation.ZW.m128d_f64[0];
    local_3d8.Rotation.ZW.m128d_f64[1] = local_378.Rotation.ZW.m128d_f64[1];
    local_3d8.Translation.XY.m128d_f64[0] = local_378.Translation.XY.m128d_f64[0];
    local_3d8.Translation.XY.m128d_f64[1] = local_378.Translation.XY.m128d_f64[1];
    local_3d8.Translation.ZW.m128d_f64[0] = local_378.Translation.ZW.m128d_f64[0];
    local_3d8.Translation.ZW.m128d_f64[1] = local_378.Translation.ZW.m128d_f64[1];
    local_3d8.Scale3D.XY.m128d_f64[0] = local_378.Scale3D.XY.m128d_f64[0];
    local_3d8.Scale3D.XY.m128d_f64[1] = local_378.Scale3D.XY.m128d_f64[1];
    local_3d8.Scale3D.ZW.m128d_f64[0] = local_378.Scale3D.ZW.m128d_f64[0];
    local_3d8.Scale3D.ZW.m128d_f64[1] = local_378.Scale3D.ZW.m128d_f64[1];
    local_438.Rotation.XY.m128d_f64 = adVar7;
    local_438.Rotation.ZW.m128d_f64 = adVar8;
    local_438.Translation.XY.m128d_f64[0] = dVar1;
    local_438.Translation.XY.m128d_f64[1] = dVar22;
    local_438.Translation.ZW.m128d_f64 = adVar9;
    pFVar16 = URigHierarchyController::AddControl
                        (this_00,(FRigElementKey *)&local_898,
                         *(FName *)local_888.Data.AllocatorInstance.Data,
                         (FRigElementKey *)&local_918,pFVar15,&local_7d8,&local_3d8,&local_438,false
                         ,false);
    uVar10 = *(undefined3 *)&pFVar16->field_0x1;
    FVar11.Value = (pFVar16->Name).ComparisonIndex.Value;
    param_8->Type = pFVar16->Type;
    *(undefined3 *)&param_8->field_0x1 = uVar10;
    (param_8->Name).ComparisonIndex = (FNameEntryId)FVar11.Value;
    (param_8->Name).Number = (pFVar16->Name).Number;
    this_00->CurrentInstructionIndex = iVar13;
    if (local_318.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_318.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_318.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_318.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.DrivenControls.AllocatorInstance.Data);
    }
    if (local_318.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_318.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
  }
  else {
    FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_918);
    FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_888);
    ::FString::PrintfImpl(&local_898,L"Node can only run in %s or %s Event");
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
    local_908.Data.AllocatorInstance.Data = local_898.Data.AllocatorInstance.Data;
    local_908.Data.ArrayNum = local_898.Data.ArrayNum;
    local_908.Data.ArrayMax = local_898.Data.ArrayMax;
    local_898.Data.ArrayNum = 0;
    local_898.Data.ArrayMax = 0;
    local_898.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.LimitEnabled.AllocatorInstance.Data = local_918.Data.AllocatorInstance.Data;
    if ((FName *)local_888.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
      local_318.LimitEnabled.AllocatorInstance.Data = local_918.Data.AllocatorInstance.Data;
    }
  }
  if (local_318.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.LimitEnabled.AllocatorInstance.Data);
  }
LAB_14a57eb27:
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  return;
}

