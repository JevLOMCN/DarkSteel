// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b497d50

UClass * __cdecl UDS_FadeInOutData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FadeInOutData",
               &Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton,
               StaticRegisterNativesUDS_FadeInOutData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FadeInOutData>,
               InternalVTableHelperCtorCaller<UDS_FadeInOutData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton;
}

// UDS_FadeInOutData @ 14b49a110

UDS_FadeInOutData * __thiscall
UDS_FadeInOutData::UDS_FadeInOutData(UDS_FadeInOutData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FadeInOutData__6B_;
  this->FadeInOutPhase = None;
  this->FadeOpacity = 0.0;
  this->PreWorldTime = 0.0;
  this->DeltaWorldTime = 0.0;
  this->FadeInOutInfo = 1.0;
  this->FadeElapsedTime = 0.0;
  return this;
}

// UDS_FadeInOutData @ 14b49a150

UDS_FadeInOutData * __thiscall
UDS_FadeInOutData::UDS_FadeInOutData(UDS_FadeInOutData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FadeInOutData__6B_;
  this->FadeInOutPhase = None;
  this->FadeOpacity = 0.0;
  this->PreWorldTime = 0.0;
  this->DeltaWorldTime = 0.0;
  this->FadeInOutInfo = 1.0;
  this->FadeElapsedTime = 0.0;
  return this;
}

// ~UDS_FadeInOutData @ 14b49ab80

void __thiscall UDS_FadeInOutData::~UDS_FadeInOutData(UDS_FadeInOutData *this)

{
  this->_padding_ = (longlong)&___7UDS_FadeInOutData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b49bc60

UClass * __cdecl UDS_FadeInOutData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FadeInOutData",
               &Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton,
               StaticRegisterNativesUDS_FadeInOutData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FadeInOutData>,
               InternalVTableHelperCtorCaller<UDS_FadeInOutData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FadeInOutData.InnerSingleton;
}

// StaticRegisterNativesUDS_FadeInOutData @ 14b49c050

void __cdecl UDS_FadeInOutData::StaticRegisterNativesUDS_FadeInOutData(void)

{
  return;
}

// GetFadeTimeRatio @ 14ba4abe0

float __thiscall UDS_FadeInOutData::GetFadeTimeRatio(UDS_FadeInOutData *this)

{
  float fVar1;
  
  fVar1 = (this->FadeInOutInfo).FadeTime * __real_3f000000;
  if (fVar1 <= 0.0) {
    fVar1 = __real_3f000000;
  }
  fVar1 = this->FadeElapsedTime / fVar1;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  return fVar1;
}

// GetInst @ 14ba4c0a0

TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> __cdecl UDS_FadeInOutData::GetInst(void)

{
  FWeakObjectPtr in_RCX;
  UDS_DataManager *local_res10 [3];
  
  local_res10[0] = UDS_DataManager::GetInst();
  if (local_res10[0] == (UDS_DataManager *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>)in_RCX;
  }
  UDS_DataManager::GetFadeInOutData(local_res10[0]);
  return (TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>)in_RCX;
}

// OnFinishLoading @ 14ba60be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_FadeInOutData::OnFinishLoading(UDS_FadeInOutData *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->FadeInOutPhase = None;
  this->FadeOpacity = 0.0;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_FadeInOutData::OnFinishLoading",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x7d,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,FadeInOut,local_144,&local_148);
  }
  return;
}

// OnOpenLoadingWidget @ 14ba61270

void __thiscall
UDS_FadeInOutData::OnOpenLoadingWidget(UDS_FadeInOutData *this,UDS_UserWidget *param_1)

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
      (local_28.Object)->ViewModelTemplateKey = W_Common_FadeInOut;
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
    SetFadeInOutPhase(this,FadeOut);
  }
  return;
}

// SetFadeInOutPhase @ 14ba70fd0

void __thiscall
UDS_FadeInOutData::SetFadeInOutPhase(UDS_FadeInOutData *this,EDS_FadeInOutPhase param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_FadeInOutPhase_const_> *this_00;
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
  
  this->FadeInOutPhase = param_1;
  pUVar9 = UDS_LoadingEvent::GetEvent();
  if (pUVar9 != (UDS_LoadingEvent *)0x0) {
    this_00 = &pUVar9->FadeInOutPhaseDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->FadeInOutPhaseDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->FadeInOutPhaseDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->FadeInOutPhaseDelegate).Delegate.field_0x10) {
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
          lVar2 = *(longlong *)&(pUVar9->FadeInOutPhaseDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->FadeInOutPhaseDelegate).Delegate.field_0x1c;
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

// SetFadeOpacity @ 14ba71120

void __thiscall UDS_FadeInOutData::SetFadeOpacity(UDS_FadeInOutData *this,float param_1)

{
  bool bVar1;
  UDS_LoadingEvent *pUVar2;
  
  this->FadeOpacity = param_1;
  pUVar2 = UDS_LoadingEvent::GetEvent();
  if (pUVar2 != (UDS_LoadingEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->FadeOpacityDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->FadeOpacityDelegate).Delegate,param_1);
    }
  }
  return;
}

// StartFadeInOut @ 14ba759c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FadeInOutData::StartFadeInOut(UDS_FadeInOutData *this,FDS_FadeInOutInfo *param_1)

{
  bool bVar1;
  UDS_LoadingEvent *pUVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  UDS_FadeInOutData *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  (this->FadeInOutInfo).FadeTime = param_1->FadeTime;
  this->FadeElapsedTime = 0.0;
  SetFadeInOutPhase(this,None);
  this->FadeOpacity = 0.0;
  pUVar2 = UDS_LoadingEvent::GetEvent();
  if (pUVar2 != (UDS_LoadingEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->FadeOpacityDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->FadeOpacityDelegate).Delegate,0.0);
    }
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_FadeInOutData::StartFadeInOut",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x28,L"windowMng is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_FadeInOutData____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_150 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_150);
      puVar4[4] = OnOpenLoadingWidget;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this_00,FadeInOut,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
  }
  return;
}

// Update @ 14ba7af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_FadeInOutData::Update(UDS_FadeInOutData *this,float *param_1)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_LoadingEvent *pUVar3;
  EDS_FadeInOutPhase EVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_198 [32];
  float local_168;
  uint local_164 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  dVar5 = DS_Util::GetTimeSeconds();
  if (0.0 < this->PreWorldTime) {
    this->DeltaWorldTime = dVar5 - this->PreWorldTime;
  }
  EVar4 = this->FadeInOutPhase;
  this->PreWorldTime = dVar5;
  fVar9 = __real_3f000000;
  if (EVar4 == FadeOut) {
    fVar7 = (this->FadeInOutInfo).FadeTime * __real_3f000000;
    fVar6 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    this->FadeElapsedTime = fVar6;
    fVar8 = __real_3f800000;
    if (fVar7 <= 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = fVar6 / fVar7;
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    this->FadeOpacity = fVar6;
    pUVar3 = UDS_LoadingEvent::GetEvent();
    if (pUVar3 != (UDS_LoadingEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->FadeOpacityDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->FadeOpacityDelegate).Delegate,fVar6);
      }
    }
    if (fVar6 < fVar8) {
      return;
    }
    EVar4 = Waiting;
  }
  else {
    if (EVar4 != FadeIn) {
      if (EVar4 != Finish) {
        return;
      }
      this->FadeInOutPhase = None;
      this->FadeOpacity = 0.0;
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        local_168 = 0.0;
        local_164[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,FadeInOut,local_164,&local_168);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_FadeInOutData::OnFinishLoading",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x7d,L"windowMng is nullptr");
      if ((void *)local_158._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_158._padding_);
      return;
    }
    fVar6 = (this->FadeInOutInfo).FadeTime * __real_3f000000;
    fVar8 = (float)((double)this->FadeElapsedTime + this->DeltaWorldTime);
    this->FadeElapsedTime = fVar8;
    if (fVar6 <= 0.0) {
      fVar6 = fVar9;
    }
    fVar8 = fVar8 / fVar6;
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    fVar9 = __real_3f800000 - fVar8;
    this->FadeOpacity = fVar9;
    pUVar3 = UDS_LoadingEvent::GetEvent();
    if (pUVar3 != (UDS_LoadingEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->FadeOpacityDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->FadeOpacityDelegate).Delegate,fVar9);
      }
    }
    if (fVar8 < __real_3f800000) {
      return;
    }
    EVar4 = Finish;
  }
  this->FadeElapsedTime = 0.0;
  SetFadeInOutPhase(this,EVar4);
  return;
}

// UpdateWorldTime @ 14ba82ec0

void __thiscall UDS_FadeInOutData::UpdateWorldTime(UDS_FadeInOutData *this)

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

