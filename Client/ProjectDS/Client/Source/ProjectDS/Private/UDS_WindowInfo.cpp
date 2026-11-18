// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b762ad0

UClass * __cdecl UDS_WindowInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowInfo",
               &Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton,
               StaticRegisterNativesUDS_WindowInfo,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WindowInfo>,InternalVTableHelperCtorCaller<UDS_WindowInfo>,
               local_res8,UDS_WindowInfoBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton;
}

// UDS_WindowInfo @ 14b7647c0

UDS_WindowInfo * __thiscall
UDS_WindowInfo::UDS_WindowInfo(UDS_WindowInfo *this,FVTableHelper *param_1)

{
  UDS_WindowInfoBase::UDS_WindowInfoBase((UDS_WindowInfoBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowInfo__6B_;
  this->TestID = 0;
  (this->MultipleWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleWindowInfoList).ArrayNum = 0;
  (this->MultipleWindowInfoList).ArrayMax = 0;
  (this->PendingMultipleWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMultipleWindowInfoList).ArrayNum = 0;
  (this->PendingMultipleWindowInfoList).ArrayMax = 0;
  return this;
}

// UDS_WindowInfo @ 14b764810

UDS_WindowInfo * __thiscall
UDS_WindowInfo::UDS_WindowInfo(UDS_WindowInfo *this,FObjectInitializer *param_1)

{
  UDS_WindowInfoBase::UDS_WindowInfoBase((UDS_WindowInfoBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowInfo__6B_;
  this->TestID = 0;
  (this->MultipleWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleWindowInfoList).ArrayNum = 0;
  (this->MultipleWindowInfoList).ArrayMax = 0;
  (this->PendingMultipleWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMultipleWindowInfoList).ArrayNum = 0;
  (this->PendingMultipleWindowInfoList).ArrayMax = 0;
  return this;
}

// ~UDS_WindowInfo @ 14b765360

void __thiscall UDS_WindowInfo::~UDS_WindowInfo(UDS_WindowInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_WindowInfo__6B_;
  pFVar1 = (this->PendingMultipleWindowInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MultipleWindowInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_WindowInfoBase::~UDS_WindowInfoBase((UDS_WindowInfoBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b766a70

UClass * __cdecl UDS_WindowInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowInfo",
               &Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton,
               StaticRegisterNativesUDS_WindowInfo,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WindowInfo>,InternalVTableHelperCtorCaller<UDS_WindowInfo>,
               local_res8,UDS_WindowInfoBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_WindowInfo @ 14b766d90

void __cdecl UDS_WindowInfo::StaticRegisterNativesUDS_WindowInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_WindowInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRequestAsyncLoadWindowCallback @ 14b767cd0

void __cdecl
UDS_WindowInfo::execRequestAsyncLoadWindowCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RequestAsyncLoadWindowCallback((UDS_WindowInfo *)param_1);
  return;
}

// Clear @ 14bb54b40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowInfo::Clear(UDS_WindowInfo *this)

{
  int *piVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  int iVar3;
  atomic<unsigned___int64> aVar4;
  bool bVar5;
  UDS_WindowManager *this_00;
  FDS_WindowLayerGroupInfo *this_01;
  UDS_UserWidget *this_02;
  UObject *pUVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_03;
  longlong *plVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FDestructionSentinel local_48;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    this_01 = UDS_WindowManager::GetWindowLayerGroupInfo
                        (this_00,(EDS_WindowLayerGroupType)this->_padding_);
    if (this_01 != (FDS_WindowLayerGroupInfo *)0x0) {
      FDS_WindowLayerGroupInfo::RemoveWindow
                (this_01,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)this->_padding_);
    }
  }
  bVar5 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (!bVar5) {
    this_02 = (UDS_UserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_UserWidget::UnbindInputAction(this_02,(EDS_WindowWidget *)&this->_padding_);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  bVar5 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  plVar7 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  this_03 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)*plVar7;
  pTVar2 = this_03 + (longlong)iVar3 * 3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this_03 == pTVar2) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this_03,(FWriteAccessScope *)&local_48);
    if ((*(int *)&this_03[2].AccessDetector.State != 0) &&
       (aVar4 = this_03[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
      (*(code *)**(undefined8 **)aVar4)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(this_03 + 1),0,0,0x10);
      *(undefined4 *)&this_03[2].AccessDetector.State = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    this_03 = this_03 + 3;
  }
  DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)*plVar7,
             (int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)plVar7,0,piVar1);
  }
  return;
}

// ContainsMultipleWindowInfo @ 14bb566e0

bool __thiscall UDS_WindowInfo::ContainsMultipleWindowInfo(UDS_WindowInfo *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MultipleWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->MultipleWindowInfoList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MultipleWindowInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_MultipleWindowInfo>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(uint *)(*(longlong *)pFVar3 + 0x188) == *param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// CreateMultipleWindowInfo @ 14bb5bc90

TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowInfo::CreateMultipleWindowInfo(UDS_WindowInfo *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_MultipleWindowInfo *pUVar6;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  uint in_R8D;
  UDS_MultipleWindowInfo *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UDS_MultipleWindowInfo>(pUVar5);
  *(int *)&pUVar6->_padding_ = (int)this->_padding_;
  FDS_WindowBaseTableRow::operator=
            ((FDS_WindowBaseTableRow *)&pUVar6->_padding_,(FDS_WindowBaseTableRow *)&this->_padding_
            );
  *(char *)&pUVar6->_padding_ = (char)this->_padding_;
  *(char *)&pUVar6->_padding_ = (char)this->_padding_;
  piVar1 = &(this->MultipleWindowInfoList).ArrayMax;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  lVar3 = this->_padding_;
  pUVar6->MultipleID = in_R8D;
  pUVar6->_padding_ = lVar2;
  pUVar6->_padding_ = lVar3;
  iVar4 = (this->MultipleWindowInfoList).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->MultipleWindowInfoList).AllocatorInstance,piVar1);
  }
  (this->MultipleWindowInfoList).ArrayNum = iVar4 + 1;
  *(UDS_MultipleWindowInfo **)
   ((this->MultipleWindowInfoList).AllocatorInstance.Data + (longlong)iVar4 * 8) = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>)this_00;
}

// CreateMultipleWindowInfo @ 14bb5bde0

TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowInfo::CreateMultipleWindowInfo(UDS_WindowInfo *this)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_MultipleWindowInfo *pUVar5;
  FWeakObjectPtr in_RDX;
  UDS_MultipleWindowInfo *local_res8;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UDS_MultipleWindowInfo>(pUVar4);
  *(int *)&pUVar5->_padding_ = (int)this->_padding_;
  FDS_WindowBaseTableRow::operator=
            ((FDS_WindowBaseTableRow *)&pUVar5->_padding_,(FDS_WindowBaseTableRow *)&this->_padding_
            );
  *(char *)&pUVar5->_padding_ = (char)this->_padding_;
  *(char *)&pUVar5->_padding_ = (char)this->_padding_;
  piVar1 = &(this->PendingMultipleWindowInfoList).ArrayMax;
  lVar2 = this->_padding_;
  pUVar5->_padding_ = this->_padding_;
  pUVar5->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar5->_padding_ = this->_padding_;
  pUVar5->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar5->_padding_ = this->_padding_;
  pUVar5->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar5->_padding_ = this->_padding_;
  pUVar5->_padding_ = lVar2;
  iVar3 = (this->PendingMultipleWindowInfoList).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->PendingMultipleWindowInfoList).AllocatorInstance,piVar1);
  }
  (this->PendingMultipleWindowInfoList).ArrayNum = iVar3 + 1;
  *(UDS_MultipleWindowInfo **)
   ((this->PendingMultipleWindowInfoList).AllocatorInstance.Data + (longlong)iVar3 * 8) = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>)in_RDX;
}

// GetIntKey @ 14bb66720

int __thiscall UDS_WindowInfo::GetIntKey(UDS_WindowInfo *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    iVar1 = this->TestID;
  }
  return iVar1;
}

// GetMultipleWindowInfo @ 14bb66af0

TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowInfo::GetMultipleWindowInfo(UDS_WindowInfo *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  int *in_R8;
  UObject *local_res8;
  
  pFVar4 = (this->MultipleWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->MultipleWindowInfoList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MultipleWindowInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_MultipleWindowInfo>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar4;
    if (*(int *)&pUVar3[9].field_0x20 == *in_R8) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      param_1[0] = 0;
      param_1[1] = 0;
      local_res8 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
LAB_14bb66ba9:
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
      return (TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
    pFVar4 = pFVar4 + 8;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  local_res8 = (UObject *)0x0;
  goto LAB_14bb66ba9;
}

// GetPendingMultipleWindowInfo @ 14bb672e0

TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowInfo::GetPendingMultipleWindowInfo(UDS_WindowInfo *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  FWeakObjectPtr in_RDX;
  FScriptContainerElement *pFVar5;
  UObject *local_res8;
  
  pFVar5 = (this->MultipleWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->MultipleWindowInfoList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MultipleWindowInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_MultipleWindowInfo>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)pFVar5 != 0) {
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar5 + 0xd0));
      if ((bVar4) && (pUVar3 = *(UObject **)pFVar5, pUVar3[8].field_0x21 == '\0')) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
        }
        *(undefined8 *)in_RDX = 0;
        local_res8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
LAB_14bb673ad:
        FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
        return (TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>)in_RDX;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = (UObject *)0x0;
  goto LAB_14bb673ad;
}

// OnOpenWindowDelayCallback @ 14bb75920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowInfo::OnOpenWindowDelayCallback(UDS_WindowInfo *this)

{
  int *piVar1;
  EDS_WindowLayerGroupType EVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FIdentityFunctor FVar6;
  ForAnyElementType FVar7;
  char cVar8;
  int iVar9;
  UDS_WindowManager *pUVar10;
  UDS_LogManager *pUVar11;
  FString *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  FName FVar15;
  UWorld *pUVar16;
  UDS_UserWidget *pUVar17;
  UObject *pUVar18;
  FDS_WindowLayerGroupInfo *this_00;
  UDS_W_WindowFrame *pUVar19;
  UDS_W_Root *this_01;
  longlong *plVar20;
  TObjectPtr<UObject>_u_0 TVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_02;
  bool bVar24;
  undefined1 auStackY_248 [32];
  uint uVar25;
  wchar_t *pwVar26;
  FIdentityFunctor local_208 [8];
  FWeakObjectPtr local_200;
  TStringView<wchar_t> local_1f8;
  FWeakObjectPtr local_1e8;
  undefined1 local_1e0 [8];
  FWeakObjectPtr local_1d8;
  UDS_UserWidget *local_1d0;
  uint local_1c8;
  FWeakObjectPtr local_1c0;
  FSoftObjectPath local_1b8;
  UDS_GameInstance *local_198;
  FString local_190;
  FReadAccessScope local_180;
  undefined1 local_168 [272];
  TObjectPtr<UObject>_u_0 local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
LAB_14bb7596b:
    DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
              ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
               this->_padding_,(int)this->_padding_);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar9 = *piVar1;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    pUVar10 = UDS_WindowManager::GetInst();
    if (pUVar10 == (UDS_WindowManager *)0x0) {
      return;
    }
    bVar24 = UE::GC::GIsIncrementalReachabilityPending == false;
    if (!bVar24) {
      UE::GC::MarkAsReachable((UObject *)this);
      bVar24 = UE::GC::GIsIncrementalReachabilityPending == false;
    }
    local_200.ObjectIndex = 0;
    local_200.ObjectSerialNumber = 0;
    local_1d8 = (FWeakObjectPtr)this;
    if (!bVar24) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
    UDS_WindowManager::RemoveOpenedWindowInfo
              (pUVar10,(TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_200);
    return;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') goto LAB_14bb7596b;
  local_198 = UDS_GameInstance::GetInst();
  if (local_198 == (UDS_GameInstance *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_58.DebugPtr = (UObject *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
               "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_50,0x293,L"gameInst is nullptr.");
    if (local_58.DebugPtr == (UObject *)0x0) {
      return;
    }
    FMemory::Free(local_58.DebugPtr);
    return;
  }
  pUVar10 = UDS_WindowManager::GetInst();
  if (pUVar10 == (UDS_WindowManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_58.DebugPtr = (UObject *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
               "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
    pwVar26 = L"windowMng is nullptr.";
    uVar25 = 0x29a;
  }
  else {
    local_1c0 = (pUVar10->RootWidget).WeakPtr;
    bVar24 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
    if (!bVar24) {
      pFVar12 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->_padding_,&local_190);
      pFVar12 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_168,pFVar12,false);
      local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1b8.AssetPath.PackageName.Number = 0;
      local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1b8.AssetPath.AssetName.Number = 0;
      local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.SubPathString.Data.ArrayNum = 0;
      local_1b8.SubPathString.Data.ArrayMax = 0;
      local_1f8.DataPtr = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      iVar9 = (pFVar12->Data).ArrayNum;
      local_1f8.Size = iVar9 + -1;
      if (iVar9 == 0) {
        local_1f8.Size = 0;
      }
      FSoftObjectPath::SetPath(&local_1b8,&local_1f8);
      if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_168._0_8_);
      }
      if ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_190.Data.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_1b8.AssetPath.PackageName == (FName)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          FSoftObjectPath::ToString((FSoftObjectPath *)&this->_padding_,(FString *)&local_1f8);
          local_58.DebugPtr = (UObject *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                     "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar11,1,Warning,local_50,0x2a8,L"Invalid WidgetPath. %s");
          if (local_58.DebugPtr != (UObject *)0x0) {
            FMemory::Free(local_58.DebugPtr);
          }
          TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
          if ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
              local_1f8.DataPtr !=
              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)0x0) {
            FMemory::Free(local_1f8.DataPtr);
            TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
          }
        }
        goto LAB_14bb763d6;
      }
      pUVar13 = FSoftObjectPath::ResolveObject(&local_1b8);
      if (pUVar13 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        iVar9 = (int)pUVar14->_padding_;
        if ((iVar9 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar14->_padding_)) {
          plVar20 = &this->_padding_;
          local_1f8.DataPtr = (wchar_t *)0x0;
          iVar9 = (int)this->_padding_;
          pTVar3 = (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)*plVar20;
          local_1f8.Size = iVar9;
          if (iVar9 == 0) {
            local_1f8.Size = 0;
            local_1f8._12_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar9,0,(ForAnyElementType *)&local_1f8,iVar9,
                       (int *)&local_1f8.field_0xc);
            ConstructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
                      (local_1f8.DataPtr,pTVar3,iVar9);
          }
          DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
                    ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                     *plVar20,(int)this->_padding_);
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *(undefined4 *)&this->_padding_ = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,(ForAnyElementType *)plVar20,0,piVar1);
          }
          FVar6 = local_208[0];
          uVar22 = (ulonglong)local_1f8.Size;
          local_1c8 = local_1f8.Size;
          local_190.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)((longlong)local_1f8.DataPtr + uVar22 * 0x18);
          this_02 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8.DataPtr;
          do {
            FVar7.Data = local_190.Data.AllocatorInstance.Data;
            if (local_1f8.Size != (int)uVar22) {
              `TCheckedPointerIterator<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_208);
            }
            if (this_02 == (TDelegateBase<FNotThreadSafeDelegateMode> *)FVar7.Data)
            goto LAB_14bb762fc;
            FVar15 = DS_Util::GetUniqueClassName((UClass *)local_168);
            FVar15 = *(FName *)FVar15;
            local_1d0 = (UDS_UserWidget *)pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar13);
            }
            pUVar16 = UGameInstance::GetWorld((UGameInstance *)local_198);
            pUVar17 = CreateWidget<UDS_UserWidget,UWorld_*>
                                (pUVar16,(TSubclassOf<UUserWidget>)&local_1d0,FVar15);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar17 != (UDS_UserWidget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar17);
            }
            local_200.ObjectIndex = 0;
            local_200.ObjectSerialNumber = 0;
            local_1d0 = pUVar17;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar17 != (UDS_UserWidget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar17);
            }
            FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d0);
            bVar24 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_200,
                                (void *)0x0);
            if (bVar24) {
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb762fc;
              pUVar11 = UDS_LogManager::GetInst();
              local_58.DebugPtr = (UObject *)0x0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                         "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
              pwVar26 = L"loadedContentsWidget is nullptr.";
              uVar25 = 0x2b7;
              goto LAB_14bb762d1;
            }
            UDS_WindowManager::DuplicateWindowFrameSource(pUVar10);
            bVar24 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_1e8,
                                (void *)0x0);
            if (bVar24) {
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb762fc;
              pUVar11 = UDS_LogManager::GetInst();
              local_58.DebugPtr = (UObject *)0x0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                         "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
              pwVar26 = L"loadedWindowFrameWidget is nullptr.";
              uVar25 = 0x2be;
              goto LAB_14bb762d1;
            }
            pUVar18 = FWeakObjectPtr::Get(&local_200);
            *(int *)&pUVar18[0x1b].field_0x8 = (int)this->_padding_;
            pUVar17 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_200);
            UDS_UserWidget::SetWindowFrameWidget
                      (pUVar17,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)local_1e8);
            pUVar18 = FWeakObjectPtr::Get(&local_1e8);
            *(int *)&pUVar18[0x1b].field_0x8 = (int)this->_padding_;
            EVar2 = (EDS_WindowLayerGroupType)this->_padding_;
            if (*(int *)&(pUVar10->WindowLayerGroupInfoMap).field_0x8 ==
                *(int *)&(pUVar10->WindowLayerGroupInfoMap).field_0x34) {
LAB_14bb75f57:
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb762fc;
              pUVar11 = UDS_LogManager::GetInst();
              local_58.DebugPtr = (UObject *)0x0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                         "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
              pwVar26 = L"layerGroup is nullptr.";
              uVar25 = 0x2cc;
              goto LAB_14bb762d1;
            }
            puVar4 = *(undefined1 **)&(pUVar10->WindowLayerGroupInfoMap).field_0x40;
            puVar23 = &(pUVar10->WindowLayerGroupInfoMap).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar23 = puVar4;
            }
            iVar9 = *(int *)(puVar23 +
                            ((ulonglong)(*(int *)&(pUVar10->WindowLayerGroupInfoMap).field_0x48 - 1)
                            & (ulonglong)EVar2) * 4);
            if (iVar9 == -1) goto LAB_14bb75f57;
            lVar5 = *(longlong *)&pUVar10->WindowLayerGroupInfoMap;
            while (*(EDS_WindowLayerGroupType *)(lVar5 + (longlong)iVar9 * 0x28) != EVar2) {
              iVar9 = *(int *)(lVar5 + 0x20 + (longlong)iVar9 * 0x28);
              if (iVar9 == -1) goto LAB_14bb75f57;
            }
            this_00 = TMapBase<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,0>_>
                      ::FindChecked(&pUVar10->WindowLayerGroupInfoMap,EVar2);
            if (this_00 == (FDS_WindowLayerGroupInfo *)0x0) goto LAB_14bb75f57;
            FDS_WindowLayerGroupInfo::AddWindow
                      (this_00,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)local_1e8);
            pUVar19 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&local_1e8);
            iVar9 = UDS_W_WindowFrame::GetZOrder(pUVar19);
            this_01 = (UDS_W_Root *)FWeakObjectPtr::Get(&local_1c0);
            bVar24 = UDS_W_Root::AddWindow
                               (this_01,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1e8,
                                iVar9);
            if (!bVar24) {
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb762fc;
              pUVar11 = UDS_LogManager::GetInst();
              local_58.DebugPtr = (UObject *)0x0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                         "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
              pwVar26 = L"Failed to AddWindow.";
              uVar25 = 0x2d5;
              goto LAB_14bb762d1;
            }
            pUVar19 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&local_1e8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            local_1d8.ObjectIndex = 0;
            local_1d8.ObjectSerialNumber = 0;
            local_1d0 = (UDS_UserWidget *)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1d0);
            bVar24 = UDS_W_WindowFrame::AddContentsWidget
                               (pUVar19,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_200,
                                (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_1d8);
            if (!bVar24) goto LAB_14bb76195;
            this->_padding_ = (longlong)local_1e8;
            this->_padding_ = (longlong)local_200;
            *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
            AlgoImpl::
            StableSortInternal<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,_UDS_WindowManager::SortingOpenedWindowInfo_::__l2::<lambda_1>_>_>
                      ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)
                       (pUVar10->OpenedWindowInfoList).AllocatorInstance.Data,
                       (pUVar10->OpenedWindowInfoList).ArrayNum,FVar6,(<lambda_1> *)local_1e0);
            pUVar18 = FWeakObjectPtr::Get(&local_1e8);
            (**(code **)(*(longlong *)pUVar18 + 0x2c0))(pUVar18,4);
            pUVar18 = FWeakObjectPtr::Get(&local_1e8);
            (**(code **)(*(longlong *)pUVar18 + 0x4e0))(pUVar18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_180)
            ;
            if (((*(int *)&this_02->field_0x10 == 0) ||
                (*(longlong **)&this_02->field_0x8 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(**(longlong **)&this_02->field_0x8 + 0x38))(), cVar8 == '\0'))
            {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_180);
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_180);
              pUVar18 = FWeakObjectPtr::Get(&local_200);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
                         &local_180);
              plVar20 = (longlong *)0x0;
              if (*(int *)&this_02->field_0x10 != 0) {
                plVar20 = *(longlong **)&this_02->field_0x8;
              }
              (**(code **)(*plVar20 + 0x60))(plVar20,pUVar18);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_180);
              TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_02);
              pUVar17 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_200);
              UDS_UserWidget::BindInputAction(pUVar17,(EDS_WindowWidget *)&this->_padding_);
            }
            local_208[0] = (FIdentityFunctor)0x1;
            TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&pUVar10->WindowOpenCloseDelegate,(EDS_WindowWidget)this->_padding_,
                        (bool *)local_208);
            uVar22 = (ulonglong)local_1c8;
            this_02 = this_02 + 1;
          } while( true );
        }
      }
      pUVar11 = UDS_LogManager::GetInst();
      TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
      if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb763d6;
      pUVar11 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&local_1b8,(FString *)&local_1f8);
      local_58.DebugPtr = (UObject *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                 "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_50,0x2f6,L"Failed to ResolveObject. (%s)");
      if (local_58.DebugPtr != (UObject *)0x0) {
        FMemory::Free(local_58.DebugPtr);
      }
      goto LAB_14bb763ab;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_58.DebugPtr = (UObject *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
               "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
    pwVar26 = L"rootWidget is nullptr.";
    uVar25 = 0x2a1;
  }
  UDS_LogManager::PrintLog(pUVar11,1,Warning,local_50,uVar25,pwVar26);
  TVar21 = local_58;
  goto LAB_14bb763d6;
LAB_14bb76195:
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_58.DebugPtr = (UObject *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
               "UDS_WindowInfo::OnOpenWindowDelayCallback",0x29,Yes);
    pwVar26 = L"Failed to AddContentsWidget.";
    uVar25 = 0x2db;
LAB_14bb762d1:
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_50,uVar25,pwVar26);
    if (local_58.DebugPtr != (UObject *)0x0) {
      FMemory::Free(local_58.DebugPtr);
    }
  }
LAB_14bb762fc:
  DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
             local_1f8.DataPtr,local_1f8.Size);
LAB_14bb763ab:
  TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
  if ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_1f8.DataPtr !=
      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)0x0) {
    FMemory::Free(local_1f8.DataPtr);
    TVar21 = (TObjectPtr<UObject>_u_0)local_1b8.SubPathString.Data.AllocatorInstance.Data;
  }
LAB_14bb763d6:
  if (TVar21.DebugPtr != (UObject *)0x0) {
    FMemory::Free(TVar21.DebugPtr);
  }
  return;
}

// RemoveMultipleWindowInfo @ 14bb83b40

void __thiscall UDS_WindowInfo::RemoveMultipleWindowInfo(UDS_WindowInfo *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TObjectPtr<UDS_MultipleWindowInfo>_u_0 local_res18;
  
  local_res18.DebugPtr = (UDS_MultipleWindowInfo *)0x0;
  pFVar4 = (this->MultipleWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->MultipleWindowInfoList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MultipleWindowInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_MultipleWindowInfo>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) goto LAB_14bb83bba;
    pUVar3 = *(UObject **)pFVar4;
    if (*(uint *)&pUVar3[9].field_0x20 == *param_1) break;
    pFVar4 = pFVar4 + 8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.DebugPtr = *(UDS_MultipleWindowInfo **)pFVar4;
LAB_14bb83bba:
  if (local_res18.DebugPtr != (UDS_MultipleWindowInfo *)0x0) {
    TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_>::Remove
              (&this->MultipleWindowInfoList,
               (TObjectPtr<UDS_MultipleWindowInfo> *)&local_res18.ObjectPtr);
  }
  return;
}

// RemovePendingMultipleWindowInfo @ 14bb83dc0

void __thiscall
UDS_WindowInfo::RemovePendingMultipleWindowInfo
          (UDS_WindowInfo *this,TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_MultipleWindowInfo>_u_0 local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<353616502999483196>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                       ,0x33c,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18[0].DebugPtr = (UDS_MultipleWindowInfo *)FWeakObjectPtr::Get(&local_res10);
  if (local_res18[0].DebugPtr != (UDS_MultipleWindowInfo *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)((local_res18[0].DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res18[0].DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bb83e4e;
  }
  local_res18[0].DebugPtr = (UDS_MultipleWindowInfo *)0x0;
LAB_14bb83e4e:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res18[0].DebugPtr == (UDS_MultipleWindowInfo *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  if (local_res18[0].DebugPtr != (UDS_MultipleWindowInfo *)0x0) {
    pFVar6 = (this->PendingMultipleWindowInfoList).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)(this->PendingMultipleWindowInfoList).ArrayNum * 8;
    if (pFVar6 != pFVar1) {
      while (*(UDS_MultipleWindowInfo **)pFVar6 != local_res18[0].DebugPtr) {
        pFVar6 = pFVar6 + 8;
        if (pFVar6 == pFVar1) {
          return;
        }
      }
      TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_>::Remove
                (&this->PendingMultipleWindowInfoList,
                 (TObjectPtr<UDS_MultipleWindowInfo> *)&local_res18[0].ObjectPtr);
    }
  }
  return;
}

// RequestAsyncLoadWindowCallback @ 14bb84940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowInfo::RequestAsyncLoadWindowCallback(UDS_WindowInfo *this)

{
  int *piVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FName FVar10;
  UWorld *pUVar11;
  UDS_UserWidget *pUVar12;
  UObject *pUVar13;
  longlong *plVar14;
  void *pvVar15;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 auStackY_1f8 [32];
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 local_1c8 [8];
  FString local_1c0;
  FReadAccessScope local_1b0;
  undefined1 local_198 [24];
  longlong local_180;
  void *local_178;
  longlong local_170;
  UDS_GameInstance *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_168 = UDS_GameInstance::GetInst();
  if (local_168 == (UDS_GameInstance *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowInfo::RequestAsyncLoadWindowCallback",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x300,L"gameInst is nullptr.");
    pvVar15 = (void *)local_158._padding_;
    goto LAB_14bb84d7b;
  }
  pFVar7 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->_padding_,&local_1c0);
  pFVar7 = FWN_SoftObjectUtils::GetObjectPath((FString *)&local_1b0,pFVar7,false);
  local_198._16_8_ = 0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_198._0_8_ = (pFVar7->Data).AllocatorInstance.Data;
  iVar3 = (pFVar7->Data).ArrayNum;
  local_198._8_4_ = iVar3 + -1;
  if (iVar3 == 0) {
    local_198._8_4_ = 0;
  }
  FSoftObjectPath::SetPath((FSoftObjectPath *)(local_198 + 0x10),(TStringView<wchar_t> *)local_198);
  if ((UDS_UserWidget *)local_1b0.DestructionSentinel._0_8_ != (UDS_UserWidget *)0x0) {
    FMemory::Free((void *)local_1b0.DestructionSentinel._0_8_);
  }
  if ((FWeakObjectPtr)local_1c0.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  pUVar8 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(local_198 + 0x10));
  if (pUVar8 == (UObject *)0x0) {
LAB_14bb84ce3:
    pUVar6 = UDS_LogManager::GetInst();
    pvVar15 = local_178;
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14bb84d7b;
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowInfo::RequestAsyncLoadWindowCallback",0x2e,Yes);
    pwVar17 = L"Failed to ResolveObject.";
    uVar16 = 800;
  }
  else {
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar9->_padding_)) goto LAB_14bb84ce3;
    iVar3 = (int)this->_padding_;
    this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)this->_padding_;
    pTVar2 = this_00 + iVar3;
    while( true ) {
      if ((int)this->_padding_ != iVar3) {
        `TCheckedPointerIterator<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1c8);
      }
      if (this_00 == pTVar2) {
        DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
                  ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                   this->_padding_,(int)this->_padding_);
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        *(undefined4 *)&this->_padding_ = 0;
        pvVar15 = local_178;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
          pvVar15 = local_178;
        }
        goto LAB_14bb84d7b;
      }
      FVar10 = DS_Util::GetUniqueClassName((UClass *)local_198);
      FVar10 = *(FName *)FVar10;
      local_1b0.DestructionSentinel._0_8_ = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      pUVar11 = UGameInstance::GetWorld((UGameInstance *)local_168);
      pUVar12 = CreateWidget<UDS_UserWidget,UWorld_*>
                          (pUVar11,(TSubclassOf<UUserWidget>)&local_1b0,FVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.DestructionSentinel._0_8_ = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1c0,(FObjectPtr)&local_1b0);
      bVar4 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
      if (bVar4) break;
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
      *(int *)&pUVar13[0x1b].field_0x8 = (int)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1b0);
      if (((*(int *)&this_00->field_0x10 == 0) ||
          (*(longlong **)&this_00->field_0x8 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))(), cVar5 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b0);
        this_00 = this_00 + 1;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b0);
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1b0);
        plVar14 = (longlong *)0x0;
        if (*(int *)&this_00->field_0x10 != 0) {
          plVar14 = *(longlong **)&this_00->field_0x8;
        }
        (**(code **)(*plVar14 + 0x60))(plVar14,pUVar13);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
        this_00 = this_00 + 1;
      }
    }
    pUVar6 = UDS_LogManager::GetInst();
    pvVar15 = local_178;
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14bb84d7b;
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowInfo::RequestAsyncLoadWindowCallback",0x2e,Yes);
    pwVar17 = L"loadedContentsWidget is nullptr.";
    uVar16 = 0x30e;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar16,pwVar17);
  pvVar15 = local_178;
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
    pvVar15 = local_178;
  }
LAB_14bb84d7b:
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  return;
}

// SetPendingMultipleWindowInfo @ 14bb8b9c0

void __thiscall
UDS_WindowInfo::SetPendingMultipleWindowInfo
          (UDS_WindowInfo *this,TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_1,
          uint *param_2)

{
  TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  TObjectPtr<UDS_MultipleWindowInfo>_u_0 local_res8;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  if ((this->PendingMultipleWindowInfoList).ArrayNum == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<353616502999482927>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                       ,0x22f,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bb8bafb;
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<353616502999482933>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                       ,0x235,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bb8bafb;
  }
  local_res8.DebugPtr = (UDS_MultipleWindowInfo *)FWeakObjectPtr::Get(&local_res10);
  if (local_res8.DebugPtr == (UDS_MultipleWindowInfo *)0x0) {
LAB_14bb8baa4:
    local_res8.DebugPtr = (UDS_MultipleWindowInfo *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((local_res8.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bb8baa4;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bb8bac6:
    if (local_res8.DebugPtr != (UDS_MultipleWindowInfo *)0x0) {
      (local_res8.DebugPtr)->MultipleID = *param_2;
      pFVar7 = (this->PendingMultipleWindowInfoList).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)(this->PendingMultipleWindowInfoList).ArrayNum * 8;
      do {
        if (pFVar7 == pFVar2) {
LAB_14bb8bb56:
          pTVar1 = &this->MultipleWindowInfoList;
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          iVar5 = (this->MultipleWindowInfoList).ArrayNum;
          pFVar2 = pFVar7 + (longlong)iVar5 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            if (*(UDS_MultipleWindowInfo **)pFVar7 == local_res8.DebugPtr) {
              return;
            }
          }
          if (iVar5 == (this->MultipleWindowInfoList).ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,
                               &(this->MultipleWindowInfoList).ArrayMax);
          }
          (this->MultipleWindowInfoList).ArrayNum = iVar5 + 1;
          ((TObjectPtr<UDS_MultipleWindowInfo>_u_0 *)
          ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8))->DebugPtr =
               (UDS_MultipleWindowInfo *)local_res8;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            return;
          }
          if (local_res8.DebugPtr == (UDS_MultipleWindowInfo *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
          return;
        }
        if (*(UDS_MultipleWindowInfo **)pFVar7 == local_res8.DebugPtr) {
          TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_>::Remove
                    (&this->PendingMultipleWindowInfoList,
                     (TObjectPtr<UDS_MultipleWindowInfo> *)&local_res8.ObjectPtr);
          goto LAB_14bb8bb56;
        }
        pFVar7 = pFVar7 + 8;
      } while( true );
    }
  }
  else if (local_res8.DebugPtr != (UDS_MultipleWindowInfo *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    goto LAB_14bb8bac6;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<353616502999482940>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                     ,0x23c,"false");
  if (!bVar4) {
    return;
  }
code_r0x00014bb8bafb:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Toggle @ 14bb92c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WindowInfo::Toggle(UDS_WindowInfo *this,bool param_1)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  bool bVar3;
  UDS_W_WindowFrame *this_00;
  UObject *pUVar4;
  UDS_WindowManager *this_01;
  FDS_WindowLayerGroupInfo *this_02;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_WindowInfo *local_38 [2];
  
  bVar2 = UDS_WindowInfoBase::Toggle((UDS_WindowInfoBase *)this,param_1);
  if ((param_1) && (bVar2)) {
    this_00 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_38[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_38);
    FVar1 = local_res18;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_38[0] = (UDS_WindowInfo *)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_38);
    bVar3 = UDS_W_WindowFrame::AddContentsWidget
                      (this_00,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,
                       (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)FVar1);
    if (((bVar3) && (this_01 = UDS_WindowManager::GetInst(), this_01 != (UDS_WindowManager *)0x0))
       && (this_02 = UDS_WindowManager::GetWindowLayerGroupInfo
                               (this_01,(EDS_WindowLayerGroupType)this->_padding_),
          this_02 != (FDS_WindowLayerGroupInfo *)0x0)) {
      FDS_WindowLayerGroupInfo::AddWindow
                (this_02,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)this->_padding_);
    }
  }
  return bVar2;
}

