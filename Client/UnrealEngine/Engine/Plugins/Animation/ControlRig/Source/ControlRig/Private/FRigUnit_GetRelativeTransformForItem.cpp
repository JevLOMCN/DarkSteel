// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4b99c0

UScriptStruct * __cdecl FRigUnit_GetRelativeTransformForItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem,
                         (UObject *)pUVar1,L"RigUnit_GetRelativeTransformForItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton;
}

// FRigUnit_GetRelativeTransformForItem @ 14a510060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_GetRelativeTransformForItem * __thiscall
FRigUnit_GetRelativeTransformForItem::FRigUnit_GetRelativeTransformForItem
          (FRigUnit_GetRelativeTransformForItem *this)

{
  this->_padding_ = (longlong)&___7FRigUnit_GetRelativeTransformForItem__6B_;
  (this->Child).Type = Bone;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  this->bChildInitial = false;
  (this->Parent).Type = Bone;
  (this->Parent).Name.ComparisonIndex = 0;
  (this->Parent).Name.Number = 0;
  this->bParentInitial = false;
  *&(this->RelativeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RelativeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RelativeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RelativeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RelativeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RelativeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedChild).Key.Type = None;
  (this->CachedChild).Key.Name.ComparisonIndex = 0;
  (this->CachedChild).Key.Name.Number = 0;
  (this->CachedChild).Index = 0xffff;
  (this->CachedChild).ContainerVersion = -1;
  (this->CachedChild).Element = (FRigBaseElement *)0x0;
  (this->CachedParent).Key.Type = None;
  (this->CachedParent).Key.Name.ComparisonIndex = 0;
  (this->CachedParent).Key.Name.Number = 0;
  (this->CachedParent).Index = 0xffff;
  (this->CachedParent).ContainerVersion = -1;
  (this->CachedParent).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a5287c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetRelativeTransformForItem::Execute
          (FRigUnit_GetRelativeTransformForItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Child,this->bChildInitial,&this->Parent,this->bParentInitial,
                &this->RelativeTransform,&this->CachedChild,&this->CachedParent);
  return;
}

// Execute @ 14a528810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetRelativeTransformForItem::Execute(FRigUnit_GetRelativeTransformForItem *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bChildInitial,
                &this->Parent,this->bParentInitial,&this->RelativeTransform,&this->CachedChild,
                &this->CachedParent);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530ca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetRelativeTransformForItem::GetExecuteContextStruct
          (FRigUnit_GetRelativeTransformForItem *this)

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

// RigVMExecute @ 14a5430a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeTransformForItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  uchar *puVar6;
  FRigElementKey *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  TTransform<double> *pTVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  FCachedRigElement *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar8[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar3 = (bool)*puVar6;
  if (iVar1 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar6 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar6;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar5,bVar3,pFVar7,bVar4,pTVar9,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a5781a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeTransformForItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FRigElementKey *param_4,bool param_5,TTransform<double> *param_6,
          FCachedRigElement *param_7,FCachedRigElement *param_8)

{
  undefined1 auStackY_118 [32];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_88.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_88.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_88.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_88.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_88.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_e8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_e8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FRigUnit_GetTransform::StaticExecute(param_1,param_2,GlobalSpace,param_3,&local_88,param_7);
  FRigUnit_GetTransform::StaticExecute(param_1,param_4,GlobalSpace,param_5,&local_e8,param_8);
  FRigVMFunction_MathTransformMakeRelative::StaticExecute
            ((FRigVMExecuteContext *)param_1,&local_88,&local_e8,param_6);
  return;
}

