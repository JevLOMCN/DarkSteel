// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4dbb80

UClass * __cdecl UDS_LoadingData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoadingData",
               &Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton,
               StaticRegisterNativesUDS_LoadingData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoadingData>,InternalVTableHelperCtorCaller<UDS_LoadingData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton;
}

// UDS_LoadingData @ 14b4dfe10

UDS_LoadingData * __thiscall
UDS_LoadingData::UDS_LoadingData(UDS_LoadingData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LoadingData__6B_;
  this->LoadingPhase = None;
  this->LoadingOpacity = 0.0;
  this->FadeOpacity = 0.0;
  this->PreWorldTime = 0.0;
  this->DeltaWorldTime = 0.0;
  (this->LoadingInfo).IsShowLoadingUI = true;
  *(undefined8 *)&(this->LoadingInfo).FadeTime = 0x3f800000;
  return this;
}

// UDS_LoadingData @ 14b4dfe60

UDS_LoadingData * __thiscall
UDS_LoadingData::UDS_LoadingData(UDS_LoadingData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LoadingData__6B_;
  this->LoadingPhase = None;
  this->LoadingOpacity = 0.0;
  this->FadeOpacity = 0.0;
  this->PreWorldTime = 0.0;
  this->DeltaWorldTime = 0.0;
  (this->LoadingInfo).IsShowLoadingUI = true;
  *(undefined8 *)&(this->LoadingInfo).FadeTime = 0x3f800000;
  return this;
}

// ~UDS_LoadingData @ 14b4e0440

void __thiscall UDS_LoadingData::~UDS_LoadingData(UDS_LoadingData *this)

{
  this->_padding_ = (longlong)&___7UDS_LoadingData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e22c0

UClass * __cdecl UDS_LoadingData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoadingData",
               &Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton,
               StaticRegisterNativesUDS_LoadingData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoadingData>,InternalVTableHelperCtorCaller<UDS_LoadingData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoadingData.InnerSingleton;
}

// StaticRegisterNativesUDS_LoadingData @ 14b4e28c0

void __cdecl UDS_LoadingData::StaticRegisterNativesUDS_LoadingData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_LoadingData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenLoadingWidget @ 14b4e3b90

void __cdecl
UDS_LoadingData::execOnOpenLoadingWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenLoadingWidget((UDS_LoadingData *)param_1,local_res10);
  return;
}

// EndLoading @ 14ba3db60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_LoadingData::EndLoading(void)

{
  bool bVar1;
  UDS_DataManager *this;
  UDS_LogManager *pUVar2;
  UDS_LoadingData *this_00;
  UDS_IngameState *this_01;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_148[0] = 0;
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  }
  else {
    UDS_DataManager::GetLoadingData(this);
  }
  bVar1 = TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoadingData::EndLoading",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x48,L"loadingData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  this_00 = (UDS_LoadingData *)FWeakObjectPtr::Get(&local_158);
  SetLoadingPhase(this_00,EndFadeOut);
  GAsyncLoadingTimeLimit = sPrevAsyncLoadingTimeLimit;
  UDS_IngameState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_IngameState *)FWeakObjectPtr::Get(&local_150);
    UDS_IngameState::ReserveCommandOnWarp(this_01);
  }
  return;
}

// GetFadeTimeRatio @ 14ba4ac20

float __thiscall UDS_LoadingData::GetFadeTimeRatio(UDS_LoadingData *this)

{
  float fVar1;
  
  fVar1 = (this->LoadingInfo).FadeTime * __real_3f000000;
  if (fVar1 <= 0.0) {
    fVar1 = __real_3f000000;
  }
  fVar1 = this->FadeElapsedTime / fVar1;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  return fVar1;
}

// GetInst @ 14ba4c0f0

TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> __cdecl UDS_LoadingData::GetInst(void)

{
  FWeakObjectPtr in_RCX;
  UDS_DataManager *local_res10 [3];
  
  local_res10[0] = UDS_DataManager::GetInst();
  if (local_res10[0] == (UDS_DataManager *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>)in_RCX;
  }
  UDS_DataManager::GetLoadingData(local_res10[0]);
  return (TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>)in_RCX;
}

// OnFinishLoading @ 14ba60ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoadingData::OnFinishLoading(UDS_LoadingData *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = (this->LoadingInfo).IsShowLoadingUI;
  this->LoadingPhase = None;
  if (bVar1 != false) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_LoadingData::OnFinishLoading",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd0,L"windowMng is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
          return;
        }
      }
    }
    else {
      local_148 = 0.0;
      local_144[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,Loading,local_144,&local_148);
    }
  }
  return;
}

// OnOpenLoadingWidget @ 14ba61380

void __thiscall UDS_LoadingData::OnOpenLoadingWidget(UDS_LoadingData *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = W_Loading;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SetLoadingPhase(this,StartFadeOut);
  }
  return;
}

// SetFadeOpacity @ 14ba71170

void __thiscall UDS_LoadingData::SetFadeOpacity(UDS_LoadingData *this,float param_1)

{
  float fVar1;
  bool bVar2;
  UDS_LoadingEvent *pUVar3;
  
  this->FadeOpacity = param_1;
  pUVar3 = UDS_LoadingEvent::GetEvent();
  if (pUVar3 != (UDS_LoadingEvent *)0x0) {
    fVar1 = this->FadeOpacity;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->FadeOpacityDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->FadeOpacityDelegate).Delegate,fVar1);
    }
  }
  return;
}

// SetLoadingOpacity @ 14ba71c50

void __thiscall UDS_LoadingData::SetLoadingOpacity(UDS_LoadingData *this,float param_1)

{
  float fVar1;
  bool bVar2;
  UDS_LoadingEvent *pUVar3;
  
  this->LoadingOpacity = param_1;
  pUVar3 = UDS_LoadingEvent::GetEvent();
  if (pUVar3 != (UDS_LoadingEvent *)0x0) {
    fVar1 = this->LoadingOpacity;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->LoadingOpacityDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->LoadingOpacityDelegate).Delegate,fVar1);
    }
  }
  return;
}

// SetLoadingPhase @ 14ba71cb0

void __thiscall UDS_LoadingData::SetLoadingPhase(UDS_LoadingData *this,EDS_LoadingPhase param_1)

{
  FDS_EventDelegate<EDS_LoadingPhase_const_> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_LoadingEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  this->LoadingPhase = param_1;
  pUVar9 = UDS_LoadingEvent::GetEvent();
  if (pUVar9 != (UDS_LoadingEvent *)0x0) {
    this_00 = &pUVar9->LoadingPhaseDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->LoadingPhaseDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->LoadingPhaseDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->LoadingPhaseDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->LoadingPhaseDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->LoadingPhaseDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// StartLoading @ 14ba75c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoadingData::StartLoading(UDS_LoadingData *this,FDS_LoadingInfo *param_1)

{
  float fVar1;
  bool bVar2;
  UDS_LoadingEvent *pUVar3;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  UDS_LoadingData *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  sPrevAsyncLoadingTimeLimit = GAsyncLoadingTimeLimit;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  GAsyncLoadingTimeLimit = sAsyncLoadingTimeLimit;
  this->LoadingInfo = *param_1;
  this->FadeElapsedTime = 0.0;
  SetLoadingPhase(this,None);
  this->LoadingOpacity = 0.0;
  pUVar3 = UDS_LoadingEvent::GetEvent();
  if (pUVar3 != (UDS_LoadingEvent *)0x0) {
    fVar1 = this->LoadingOpacity;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->LoadingOpacityDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->LoadingOpacityDelegate).Delegate,fVar1);
    }
  }
  this->FadeOpacity = 0.0;
  pUVar3 = UDS_LoadingEvent::GetEvent();
  if (pUVar3 != (UDS_LoadingEvent *)0x0) {
    fVar1 = this->FadeOpacity;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->FadeOpacityDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->FadeOpacityDelegate).Delegate,fVar1);
    }
  }
  if ((this->LoadingInfo).IsShowLoadingUI != false) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_LoadingData::StartLoading",0x1d,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x39,L"windowMng is nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_190;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_190);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LoadingData____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_160 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_160);
        puVar5[4] = OnOpenLoadingWidget;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_180,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_198);
      UDS_WindowManager::OpenWindow(this_00,Loading,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      if ((local_190.DelegateSize != 0) &&
         (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_190,0,0,0x10);
        local_190.DelegateSize = 0;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_190.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_198);
    }
  }
  return;
}

// Update @ 14ba7b1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoadingData::Update(UDS_LoadingData *this,float *param_1)

{
  bool bVar1;
  EDS_LoadingPhase EVar2;
  float fVar3;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_1a8 [32];
  float local_178;
  uint local_174 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  dVar5 = DS_Util::GetTimeSeconds();
  if (0.0 < this->PreWorldTime) {
    this->DeltaWorldTime = dVar5 - this->PreWorldTime;
  }
  EVar2 = this->LoadingPhase;
  this->PreWorldTime = dVar5;
  fVar3 = __real_3f000000;
  if (EVar2 == StartFadeOut) {
    fVar6 = (this->LoadingInfo).FadeTime * __real_3f000000;
    fVar7 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    this->FadeElapsedTime = fVar7;
    fVar8 = __real_3f800000;
    if (fVar6 <= 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = fVar7 / fVar6;
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    SetFadeOpacity(this,fVar7);
    if (fVar8 <= fVar7) {
      this->FadeElapsedTime = 0.0;
      SetLoadingOpacity(this,fVar8);
      SetLoadingPhase(this,StartFadeIn);
    }
  }
  else if (EVar2 == StartFadeIn) {
    fVar6 = (this->LoadingInfo).FadeTime * __real_3f000000;
    fVar7 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    this->FadeElapsedTime = fVar7;
    fVar8 = __real_3f800000;
    if (fVar6 <= 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = fVar7 / fVar6;
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    SetFadeOpacity(this,__real_3f800000 - fVar7);
    if (fVar8 <= fVar7) {
      this->FadeElapsedTime = 0.0;
      SetLoadingPhase(this,Waiting);
    }
  }
  else if (EVar2 == EndFadeOut) {
    fVar8 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    fVar7 = (this->LoadingInfo).FadeTime * __real_3f000000;
    this->FadeElapsedTime = fVar8;
    if (fVar7 <= 0.0) {
      fVar7 = fVar3;
    }
    fVar8 = fVar8 / fVar7;
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    SetFadeOpacity(this,fVar8);
    if (__real_3f800000 <= fVar8) {
      this->FadeElapsedTime = 0.0;
      SetLoadingPhase(this,EndFadeIn);
      SetLoadingOpacity(this,0.0);
    }
  }
  else if (EVar2 == EndFadeIn) {
    fVar6 = (this->LoadingInfo).FadeTime * __real_3f000000;
    fVar7 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    this->FadeElapsedTime = fVar7;
    fVar8 = __real_3f800000;
    if (fVar6 <= 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = fVar7 / fVar6;
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    SetFadeOpacity(this,__real_3f800000 - fVar7);
    if (fVar8 <= fVar7) {
      this->FadeElapsedTime = 0.0;
      SetLoadingPhase(this,Finish);
    }
  }
  else if ((EVar2 == Finish) &&
          (bVar1 = (this->LoadingInfo).IsShowLoadingUI, this->LoadingPhase = None, bVar1 != false))
  {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_LoadingData::OnFinishLoading",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,0xd0,L"windowMng is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      local_178 = 0.0;
      local_174[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,Loading,local_174,&local_178);
    }
  }
  return;
}

// UpdateWorldTime @ 14ba82f00

void __thiscall UDS_LoadingData::UpdateWorldTime(UDS_LoadingData *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = DS_Util::GetTimeSeconds();
  dVar1 = this->PreWorldTime;
  this->PreWorldTime = dVar2;
  if (0.0 < dVar1) {
    this->DeltaWorldTime = dVar2 - dVar1;
  }
  return;
}

