// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46e750

UScriptStruct * __cdecl FRigUnit_SetTransformAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetTransformAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a46e7d0

UScriptStruct * __thiscall
FRigUnit_SetTransformAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetTransformAnimationChannelFromItem *this)

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

// Execute @ 14a46f700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetTransformAnimationChannelFromItem::Execute
          (FRigUnit_SetTransformAnimationChannelFromItem *this)

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

// Execute @ 14a52d870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetTransformAnimationChannelFromItem::Execute
          (FRigUnit_SetTransformAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a5554b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransformAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar2[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar2[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[2].PropertyPath,pFVar2[2].Ptr,pFVar2[2].Property);
  }
  bVar4 = (bool)*puVar7;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar5,pFVar6,bVar4);
  return;
}

// StaticExecute @ 14a594bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransformAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,FRigElementKey *param_3,
          bool param_4)

{
  ERigControlType EVar1;
  URigHierarchy *this;
  int iVar2;
  FRigControlElement *pFVar3;
  FTransform_Float *pFVar4;
  FEulerTransform_Float *pFVar5;
  undefined1 local_178 [20];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  double local_158;
  double dStack_150;
  TVector<double>_u_0 local_148;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  double local_c8;
  undefined8 uStack_c0;
  undefined4 local_68;
  TQuat<double> local_58;
  FTransform_Float local_38;
  
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar2 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar3 = URigHierarchy::Get<FRigControlElement>(this,iVar2);
    if (pFVar3 != (FRigControlElement *)0x0) {
      EVar1 = (pFVar3->Settings).ControlType;
      if (EVar1 == Transform) {
        pFVar4 = FRigControlValue::FTransform_Float::FTransform_Float(&local_38,param_2);
        local_178._0_8_ = *(undefined8 *)pFVar4;
        local_178._8_8_ = *(undefined8 *)&pFVar4->RotationZ;
        local_158 = *(double *)&pFVar4->ScaleX;
        dStack_150 = *(double *)&pFVar4->ScaleZ;
        local_178._16_4_ = pFVar4->TranslationX;
        fStack_164 = pFVar4->TranslationY;
        fStack_160 = pFVar4->TranslationZ;
        fStack_15c = pFVar4->TranslationW;
      }
      else {
        if (EVar1 != EulerTransform) {
          return;
        }
        local_178._0_8_ = (param_2->Translation).XY.m128d_f64[0];
        local_178._8_8_ = (param_2->Translation).XY.m128d_f64[1];
        unique0x10000391 = (param_2->Translation).ZW.m128d_f64[0];
        local_58.Z = (param_2->Rotation).ZW.m128d_f64[0];
        local_58.W = (param_2->Rotation).ZW.m128d_f64[1];
        local_58.X = (param_2->Rotation).XY.m128d_f64[0];
        local_58.Y = (param_2->Rotation).XY.m128d_f64[1];
        UE::Math::TQuat<double>::Rotator(&local_58,(TRotator<double> *)&fStack_160);
        local_148._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
        local_148._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
        local_148._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
        pFVar5 = FRigControlValue::FEulerTransform_Float::FEulerTransform_Float
                           ((FEulerTransform_Float *)&local_38,(FEulerTransform *)local_178);
        uStack_c0 = 0;
        local_178._0_8_ = *(undefined8 *)pFVar5;
        local_178._8_8_ = *(undefined8 *)&pFVar5->RotationRoll;
        local_178._16_4_ = pFVar5->TranslationY;
        fStack_164 = pFVar5->TranslationZ;
        fStack_160 = pFVar5->ScaleX;
        fStack_15c = pFVar5->ScaleY;
        local_c8 = (double)(ulonglong)(uint)pFVar5->ScaleZ;
        local_158 = local_c8;
        dStack_150 = 0.0;
      }
      uStack_100._0_4_ = 0.0;
      uStack_100._4_4_ = 0.0;
      local_108._0_4_ = 0.0;
      local_108._4_4_ = 0.0;
      uStack_110._0_4_ = 0.0;
      uStack_110._4_4_ = 0.0;
      local_118._0_4_ = 0.0;
      local_118._4_4_ = 0.0;
      uStack_120._0_4_ = 0.0;
      uStack_120._4_4_ = 0.0;
      local_128._0_4_ = 0.0;
      local_128._4_4_ = 0.0;
      uStack_130._0_4_ = 0.0;
      uStack_130._4_4_ = 0.0;
      local_148._s_0.Z = 0.0;
      local_148._s_0.Y = 0.0;
      local_148._s_0.X = 0.0;
      local_68 = 1;
      local_f8._0_1_ = true;
      local_f8._1_3_ = 0;
      URigHierarchy::SetControlValueByIndex
                (param_1->Hierarchy,*(int *)&pFVar3->field_0x1c,(FRigControlValue *)local_178,
                 !param_4,false,false);
    }
  }
  return;
}

