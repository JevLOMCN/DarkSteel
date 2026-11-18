// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4fa900

UScriptStruct * __cdecl FRigUnit_GetTransformAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_GetTransformAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fa9c0

UScriptStruct * __thiscall
FRigUnit_GetTransformAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_GetTransformAnimationChannelFromItem *this)

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

// Execute @ 14a4face0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetTransformAnimationChannelFromItem::Execute
          (FRigUnit_GetTransformAnimationChannelFromItem *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Value,
                (FRigElementKey *)&this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetTransformAnimationChannelFromItem::Execute
          (FRigUnit_GetTransformAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a543d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransformAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TTransform<double> *pTVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FControlRigExecuteContext *pFVar8;
  
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
  pTVar2 = (TTransform<double> *)param_2->DataPtr->Ptr;
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar3[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar3[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[2].PropertyPath,pFVar3[2].Ptr,pFVar3[2].Property);
  }
  bVar5 = (bool)*puVar7;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar2,pFVar6,bVar5);
  return;
}

// StaticExecute @ 14a5788b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransformAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,FRigElementKey *param_3,
          bool param_4)

{
  ERigControlType EVar1;
  URigHierarchy *this;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  FRigControlElement *pFVar10;
  TQuat<double> *pTVar11;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  TQuat<double> local_108;
  FRigControlValue local_e8;
  
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar9 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar10 = URigHierarchy::Get<FRigControlElement>(this,iVar9);
    if (pFVar10 != (FRigControlElement *)0x0) {
      EVar1 = (pFVar10->Settings).ControlType;
      if (EVar1 == Transform) {
        URigHierarchy::GetControlValueByIndex
                  (param_1->Hierarchy,(FRigControlValue *)&local_198,*(int *)&pFVar10->field_0x1c,
                   !param_4);
        auVar3._8_4_ = SUB84((double)local_198._4_4_,0);
        auVar3._0_8_ = (double)(float)local_198;
        auVar3._12_4_ = (int)((ulonglong)(double)local_198._4_4_ >> 0x20);
        *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar3;
        auVar5._8_4_ = SUB84((double)uStack_190._4_4_,0);
        auVar5._0_8_ = (double)(float)uStack_190;
        auVar5._12_4_ = (int)((ulonglong)(double)uStack_190._4_4_ >> 0x20);
        *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar5;
        auVar4._8_4_ = SUB84((double)local_188._4_4_,0);
        auVar4._0_8_ = (double)(float)local_188;
        auVar4._12_4_ = (int)((ulonglong)(double)local_188._4_4_ >> 0x20);
        *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64 = auVar4;
        (param_2->Translation).ZW.m128d_f64[0] = (double)(float)local_180._0_4_;
        (param_2->Translation).ZW.m128d_f64[1] = 0.0;
        auVar2._8_4_ = SUB84((double)local_178._4_4_,0);
        auVar2._0_8_ = (double)(float)local_178;
        auVar2._12_4_ = (int)((ulonglong)(double)local_178._4_4_ >> 0x20);
        *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar2;
        (param_2->Scale3D).ZW.m128d_f64[0] = (double)local_170._0_4_;
        (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
      }
      else if (EVar1 == EulerTransform) {
        URigHierarchy::GetControlValueByIndex
                  (param_1->Hierarchy,&local_e8,*(int *)&pFVar10->field_0x1c,!param_4);
        local_180 = (undefined1  [8])(double)local_e8.FloatStorage.Float00;
        local_178 = (double)local_e8.FloatStorage.Float01;
        local_170 = (double)local_e8.FloatStorage.Float02;
        uStack_190 = (double)local_e8.FloatStorage.Float10;
        local_198 = (double)local_e8.FloatStorage.Float03;
        local_168 = (double)local_e8.FloatStorage.Float12;
        local_188 = (double)local_e8.FloatStorage.Float11;
        local_158 = (double)local_e8.FloatStorage.Float20;
        dStack_160 = (double)local_e8.FloatStorage.Float13;
        pTVar11 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_180,&local_108);
        dVar6 = pTVar11->Y;
        dVar7 = pTVar11->Z;
        dVar8 = pTVar11->W;
        (param_2->Rotation).XY.m128d_f64[0] = pTVar11->X;
        (param_2->Rotation).XY.m128d_f64[1] = dVar6;
        (param_2->Rotation).ZW.m128d_f64[0] = dVar7;
        (param_2->Rotation).ZW.m128d_f64[1] = dVar8;
        (param_2->Translation).XY.m128d_f64[0] = local_198;
        (param_2->Translation).XY.m128d_f64[1] = uStack_190;
        (param_2->Translation).ZW.m128d_f64[0] = local_188;
        (param_2->Translation).ZW.m128d_f64[1] = 0.0;
        (param_2->Scale3D).XY.m128d_f64[0] = local_168;
        (param_2->Scale3D).XY.m128d_f64[1] = dStack_160;
        (param_2->Scale3D).ZW.m128d_f64[0] = local_158;
        (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
      }
    }
  }
  return;
}

