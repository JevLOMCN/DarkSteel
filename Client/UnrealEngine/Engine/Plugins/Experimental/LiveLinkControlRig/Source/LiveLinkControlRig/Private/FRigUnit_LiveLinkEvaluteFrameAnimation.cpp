// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 6

// StaticStruct @ 14d3606f0

UScriptStruct * __cdecl FRigUnit_LiveLinkEvaluteFrameAnimation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation,
                         (UObject *)pUVar1,L"RigUnit_LiveLinkEvaluteFrameAnimation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton;
}

// GetExecuteContextStruct @ 14d360770

UScriptStruct * __thiscall
FRigUnit_LiveLinkEvaluteFrameAnimation::GetExecuteContextStruct
          (FRigUnit_LiveLinkEvaluteFrameAnimation *this)

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

// Execute @ 14d360780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluteFrameAnimation::Execute(FRigUnit_LiveLinkEvaluteFrameAnimation *this)

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
                &this->DebugColor,&this->DebugDrawOffset,&this->SubjectFrame);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14d361fd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluteFrameAnimation::Execute
          (FRigUnit_LiveLinkEvaluteFrameAnimation *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->SubjectName,this->bDrawDebug,&this->DebugColor,&this->DebugDrawOffset
                ,&this->SubjectFrame);
  return;
}

// RigVMExecute @ 14d362350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluteFrameAnimation::RigVMExecute
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
  FSubjectFrameHandle *pFVar10;
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
  pFVar10 = (FSubjectFrameHandle *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,bVar3,pFVar7,pTVar9,pFVar10);
  return;
}

// StaticExecute @ 14d362dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluteFrameAnimation::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool param_3,FLinearColor *param_4,
          TTransform<double> *param_5,FSubjectFrameHandle *param_6)

{
  code *pcVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSubjectFrameHandle *pFVar4;
  char cVar5;
  ILiveLinkClient *pIVar6;
  UScriptStruct *pUVar7;
  UClass *this;
  FStructOnScope local_88;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  pFVar4 = param_6;
  pTVar3 = (param_6->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_6->CachedFrame).Object = (FCachedSubjectFrame *)0x0;
  (param_6->CachedFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pIVar6 = LiveLinkControlRigUtilities::TryGetLiveLinkClient();
  if (pIVar6 != (ILiveLinkClient *)0x0) {
    FStructOnScope::FStructOnScope(&local_58);
    FStructOnScope::FStructOnScope(&local_30);
    pcVar1 = *(code **)((longlong)*pIVar6 + 0x198);
    param_6 = (FSubjectFrameHandle *)Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UClass *)param_6 != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)param_6);
    }
    cVar5 = (*pcVar1)(pIVar6,*param_2,&param_6,&local_58);
    if (cVar5 != '\0') {
      pUVar7 = FSubjectFrameHandle::StaticStruct();
      FStructOnScope::FStructOnScope(&local_88,(UStruct *)pUVar7,(uchar *)pFVar4);
      this = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
      if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this);
      }
      pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&local_58,&local_88);
      FStructOnScope::~FStructOnScope(&local_88);
    }
    FStructOnScope::~FStructOnScope(&local_30);
    FStructOnScope::~FStructOnScope(&local_58);
  }
  return;
}

