// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e6710

UScriptStruct * __cdecl FRigUnit_GetTransformAnimationChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel,
                         (UObject *)pUVar1,L"RigUnit_GetTransformAnimationChannel");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannel.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetTransformAnimationChannel.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e67d0

UScriptStruct * __thiscall
FRigUnit_GetTransformAnimationChannel::GetExecuteContextStruct
          (FRigUnit_GetTransformAnimationChannel *this)

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

// Execute @ 14a4e6bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetTransformAnimationChannel::Execute(FRigUnit_GetTransformAnimationChannel *this)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  lVar1 = this->_padding_;
  *&(this->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Value).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Value).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  bVar2 = FRigUnit_GetAnimationChannelBase::UpdateCache
                    (local_a0,(FName *)&this->_padding_,(FName *)&this->_padding_,
                     (FRigElementKey *)((longlong)&this->_padding_ + 4),(int *)&this->_padding_);
  if (bVar2) {
    FRigUnit_GetTransformAnimationChannelFromItem::StaticExecute
              ((FControlRigExecuteContext *)local_268,&this->Value,
               (FRigElementKey *)((longlong)&this->_padding_ + 4),SUB81(lVar1,0));
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetTransformAnimationChannel::Execute
          (FRigUnit_GetTransformAnimationChannel *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,(FName *)&this->_padding_,(FName *)&this->_padding_,
                SUB81(this->_padding_,0),(FRigElementKey *)((longlong)&this->_padding_ + 4),
                (int *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a543b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransformAnimationChannel::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  uchar *puVar8;
  FRigVMSlice *pFVar9;
  FRigElementKey *pFVar10;
  int *piVar11;
  FControlRigExecuteContext *pFVar12;
  
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
  pTVar2 = (TTransform<double> *)param_2->DataPtr->Ptr;
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar7[1].Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar7[2].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  bVar4 = (bool)*puVar8;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FRigElementKey *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pTVar2,pFVar5,pFVar6,bVar4,pFVar10,piVar11);
  return;
}

// StaticExecute @ 14a578800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransformAnimationChannel::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,FName *param_3,
          FName *param_4,bool param_5,FRigElementKey *param_6,int *param_7)

{
  bool bVar1;
  
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = FRigUnit_GetAnimationChannelBase::UpdateCache
                    (param_1->Hierarchy,param_3,param_4,param_6,param_7);
  if (bVar1) {
    FRigUnit_GetTransformAnimationChannelFromItem::StaticExecute(param_1,param_2,param_6,param_5);
  }
  return;
}

