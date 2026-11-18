// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f44e0

UScriptStruct * __cdecl FRigUnit_SetRelativeRotationForItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeRotationForItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeRotationForItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem,
                         (UObject *)pUVar1,L"RigUnit_SetRelativeRotationForItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeRotationForItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeRotationForItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f4560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetRelativeRotationForItem::GetExecuteContextStruct
          (FRigUnit_SetRelativeRotationForItem *this)

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

// Execute @ 14a4f4e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRelativeRotationForItem::Execute(FRigUnit_SetRelativeRotationForItem *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,&this->Parent,
                this->bParentInitial,&this->Value,this->Weight,this->bPropagateToChildren,
                &this->CachedChild,&this->CachedParent);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52d140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRelativeRotationForItem::Execute
          (FRigUnit_SetRelativeRotationForItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Child,&this->Parent,this->bParentInitial,&this->Value,this->Weight,
                this->bPropagateToChildren,&this->CachedChild,&this->CachedParent);
  return;
}

// RigVMExecute @ 14a553bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetRelativeRotationForItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  FRigElementKey *pFVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  TQuat<double> *pTVar10;
  float *pfVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FCachedRigElement *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  bVar5 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar10 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar2 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,pFVar7,bVar5,pTVar10,fVar1,bVar2,pFVar13,pFVar14);
  return;
}

// StaticExecute @ 14a593910

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
FRigUnit_SetRelativeRotationForItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FRigElementKey *param_3,
          bool param_4,TQuat<double> *param_5,float param_6,bool param_7,FCachedRigElement *param_8,
          FCachedRigElement *param_9)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  __m128d _Var17;
  undefined1 auVar18 [16];
  undefined1 auStackY_1c8 [32];
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (__real_322bcc77 <= param_6) {
    local_128.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_128.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_128.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_128.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_128.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_128.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_188.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_188.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_188.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_188.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_188.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_188.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_c8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_c8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_c8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    _Var17.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    FRigUnit_GetTransform::StaticExecute(param_1,param_3,GlobalSpace,param_4,&local_128,param_9);
    FRigUnit_GetRelativeTransformForItem::StaticExecute
              (param_1,param_2,false,param_3,param_4,&local_188,param_8,param_9);
    dVar2 = param_5->X;
    dVar3 = param_5->Y;
    dVar4 = param_5->Z;
    dVar5 = param_5->W;
    dVar13 = dVar4 * dVar4 + dVar2 * dVar2;
    dVar16 = dVar5 * dVar5 + dVar3 * dVar3;
    auVar10._8_4_ = SUB84(dVar16,0);
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar11._0_8_ = auVar10._8_8_ + dVar13;
    auVar11._8_8_ = dVar13 + dVar16;
    auVar18 = sqrtpd((undefined1  [16])_Var17.m128d_f64,auVar11);
    uVar6 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar11._0_8_);
    uVar8 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar11._8_8_);
    uVar7 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar11._0_8_);
    uVar9 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar11._8_8_);
    auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
    auVar15._0_8_ = uVar6 & (ulonglong)(auVar14._0_8_ * dVar2);
    uVar1 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar3);
    auVar15._8_4_ = (undefined4)uVar1;
    auVar15._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar12._0_8_ = uVar7 & (ulonglong)(auVar18._0_8_ * dVar4);
    uVar1 = uVar9 & (ulonglong)(auVar18._8_8_ * dVar5);
    auVar12._8_4_ = (undefined4)uVar1;
    auVar12._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar18._4_4_ = ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar18._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar18._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar18._12_4_ =
         ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_188.Rotation.XY.m128d_f64 = (double  [2])(auVar15 | auVar18);
    auVar14._4_4_ = ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
    ;
    auVar14._0_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar14._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar14._12_4_ =
         ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_188.Rotation.ZW.m128d_f64 = (double  [2])(auVar12 | auVar14);
    FRigVMFunction_MathTransformMakeAbsolute::StaticExecute
              ((FRigVMExecuteContext *)param_1,&local_188,&local_128,&local_c8);
    FRigUnit_SetTransform::StaticExecute
              (param_1,param_2,GlobalSpace,false,&local_c8,param_6,param_7,param_8);
  }
  return;
}

