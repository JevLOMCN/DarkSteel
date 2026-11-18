// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 6

// StaticStruct @ 14d360c50

UScriptStruct * __cdecl FRigUnit_LiveLinkEvaluteFrameTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform,
                         (UObject *)pUVar1,L"RigUnit_LiveLinkEvaluteFrameTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14d360cd0

UScriptStruct * __thiscall
FRigUnit_LiveLinkEvaluteFrameTransform::GetExecuteContextStruct
          (FRigUnit_LiveLinkEvaluteFrameTransform *this)

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

// Execute @ 14d360ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluteFrameTransform::Execute(FRigUnit_LiveLinkEvaluteFrameTransform *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->SubjectName,this->bDrawDebug,
                &this->DebugColor,&this->DebugDrawOffset,&this->Transform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14d362010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluteFrameTransform::Execute
          (FRigUnit_LiveLinkEvaluteFrameTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->SubjectName,this->bDrawDebug,&this->DebugColor,&this->DebugDrawOffset
                ,&this->Transform);
  return;
}

// RigVMExecute @ 14d362520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluteFrameTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  uchar *puVar6;
  FLinearColor *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  TTransform<double> *pTVar9;
  TTransform<double> *pTVar10;
  FControlRigExecuteContext *pFVar11;
  
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
    pFVar5 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
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
    pFVar7 = (FLinearColor *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,bVar3,pFVar7,pTVar9,pTVar10);
  return;
}

// StaticExecute @ 14d362f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluteFrameTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool param_3,FLinearColor *param_4,
          TTransform<double> *param_5,TTransform<double> *param_6)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  char cVar6;
  ILiveLinkClient *pIVar7;
  longlong lVar8;
  longlong lVar9;
  UClass *pUVar10;
  UScriptStruct *pUVar11;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  pTVar5 = param_6;
  *&(param_6->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_6->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_6->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_6->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_6->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_6->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pIVar7 = LiveLinkControlRigUtilities::TryGetLiveLinkClient();
  if (pIVar7 == (ILiveLinkClient *)0x0) {
    return;
  }
  FStructOnScope::FStructOnScope(&local_58);
  FStructOnScope::FStructOnScope(&local_30);
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x198);
  param_6 = (TTransform<double> *)Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UClass *)param_6 != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_6);
  }
  cVar6 = (*pcVar2)(pIVar7,*param_2,&param_6,&local_58);
  if (cVar6 == '\0') goto LAB_14d36309f;
  lVar8 = (**(code **)(local_30._padding_ + 0x18))(&local_30);
  lVar9 = (**(code **)(local_30._padding_ + 0x20))(&local_30);
  if (lVar9 == 0) {
LAB_14d36305c:
    lVar8 = 0;
  }
  else {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         != &pUVar10->_padding_)) ||
       (pUVar11 = FLiveLinkTransformFrameData::StaticStruct(), pUVar11 == (UScriptStruct *)0x0))
    goto LAB_14d36305c;
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar9 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14d36305c;
  }
  dVar3 = *(double *)(lVar8 + 0xa8);
  (pTVar5->Rotation).XY.m128d_f64[0] = *(double *)(lVar8 + 0xa0);
  (pTVar5->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar8 + 0xb8);
  (pTVar5->Rotation).ZW.m128d_f64[0] = *(double *)(lVar8 + 0xb0);
  (pTVar5->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar8 + 200);
  (pTVar5->Translation).XY.m128d_f64[0] = *(double *)(lVar8 + 0xc0);
  (pTVar5->Translation).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar8 + 0xd8);
  (pTVar5->Translation).ZW.m128d_f64[0] = *(double *)(lVar8 + 0xd0);
  (pTVar5->Translation).ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar8 + 0xe8);
  (pTVar5->Scale3D).XY.m128d_f64[0] = *(double *)(lVar8 + 0xe0);
  (pTVar5->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar8 + 0xf8);
  (pTVar5->Scale3D).ZW.m128d_f64[0] = *(double *)(lVar8 + 0xf0);
  (pTVar5->Scale3D).ZW.m128d_f64[1] = dVar3;
LAB_14d36309f:
  FStructOnScope::~FStructOnScope(&local_30);
  FStructOnScope::~FStructOnScope(&local_58);
  return;
}

