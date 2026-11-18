// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 23

// StaticClass @ 14cff6010

UClass * __cdecl ULiveLinkTimecodeProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimecodeProvider",
               &Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton,
               StaticRegisterNativesULiveLinkTimecodeProvider,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkTimecodeProvider>,
               InternalVTableHelperCtorCaller<ULiveLinkTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton;
}

// ULiveLinkTimecodeProvider @ 14d014560

ULiveLinkTimecodeProvider * __thiscall
ULiveLinkTimecodeProvider::ULiveLinkTimecodeProvider
          (ULiveLinkTimecodeProvider *this,FVTableHelper *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  (this->OverrideFrameRate).Numerator = 60000;
  (this->OverrideFrameRate).Denominator = 1;
  this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  (this->SubjectFrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectFrameTimes).ArrayNum = 0;
  (this->SubjectFrameTimes).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubjectFrameLock,4000);
  (this->RegisterForFrameDataReceivedHandle).ID = 0;
  return this;
}

// ULiveLinkTimecodeProvider @ 14d0145f0

ULiveLinkTimecodeProvider * __thiscall
ULiveLinkTimecodeProvider::ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,pFVar1);
  this->BufferSize = 4;
  this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
  this->Evaluation = Lerp;
  this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  (this->OverrideFrameRate).Numerator = 0x18;
  (this->OverrideFrameRate).Denominator = 1;
  this->bOverrideFrameRate = false;
  this->LiveLinkClient = (ILiveLinkClient *)0x0;
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  (this->SubjectFrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectFrameTimes).ArrayNum = 0;
  (this->SubjectFrameTimes).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubjectFrameLock,4000);
  (this->RegisterForFrameDataReceivedHandle).ID = 0;
  return this;
}

// ~ULiveLinkTimecodeProvider @ 14d0174a0

void __thiscall
ULiveLinkTimecodeProvider::~ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubjectFrameLock);
  pFVar1 = (this->SubjectFrameTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  return;
}

// BeginDestroy @ 14d023ed0

void __thiscall ULiveLinkTimecodeProvider::BeginDestroy(ULiveLinkTimecodeProvider *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
    UNLOCK();
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ClearFrameHistory @ 14d0296f0

void __thiscall ULiveLinkTimecodeProvider::ClearFrameHistory(ULiveLinkTimecodeProvider *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SubjectFrameLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SubjectFrameTimes).ArrayNum = 0;
    if ((this->SubjectFrameTimes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->SubjectFrameTimes).AllocatorInstance,0,
                 &(this->SubjectFrameTimes).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d029753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConvertTo @ 14d030ef0

FQualifiedFrameTime * __thiscall
ULiveLinkTimecodeProvider::ConvertTo
          (ULiveLinkTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__,
          FQualifiedFrameTime *param_1)

{
  FFrameRate FVar1;
  FFrameTime FVar2;
  undefined1 local_res8 [8];
  
  if (this->bOverrideFrameRate != false) {
    FVar2 = ::FQualifiedFrameTime::ConvertTo(param_1,(FFrameRate)local_res8);
    FVar2 = *(FFrameTime *)FVar2;
    __return_storage_ptr__->Rate = this->OverrideFrameRate;
    __return_storage_ptr__->Time = FVar2;
    return __return_storage_ptr__;
  }
  FVar1 = param_1->Rate;
  __return_storage_ptr__->Time = param_1->Time;
  __return_storage_ptr__->Rate = FVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052c40

UClass * __cdecl ULiveLinkTimecodeProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimecodeProvider",
               &Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton,
               StaticRegisterNativesULiveLinkTimecodeProvider,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkTimecodeProvider>,
               InternalVTableHelperCtorCaller<ULiveLinkTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 14d0530d0

FQualifiedFrameTime * __thiscall
ULiveLinkTimecodeProvider::GetQualifiedFrameTime
          (ULiveLinkTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  FQualifiedFrameTime *pFVar7;
  FFrameTime FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  LARGE_INTEGER local_res20;
  undefined1 local_58 [16];
  FQualifiedFrameTime local_48 [2];
  
  lpCriticalSection = &this->SubjectFrameLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar11 = (this->SubjectFrameTimes).ArrayNum;
  if (iVar11 < 1) {
    (__return_storage_ptr__->Time).FrameNumber = 0;
    (__return_storage_ptr__->Time).SubFrame = 0.0;
  }
  else {
    if ((this->Evaluation != Latest) && (iVar11 != 1)) {
      QueryPerformanceCounter(&local_res20);
      uVar9 = 0;
      uVar10 = (this->SubjectFrameTimes).ArrayNum - 1;
      dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (-1 < (int)uVar10) {
        lVar12 = (longlong)(int)uVar10 * 0x18;
        do {
          uVar6 = 0;
          if ((int)uVar10 < (this->SubjectFrameTimes).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FQualifiedFrameTime *)(*pcVar3)();
            return pFVar7;
          }
          if (*(double *)((this->SubjectFrameTimes).AllocatorInstance.Data + lVar12) <= dVar4)
          break;
          lVar12 = lVar12 + -0x18;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      if (((this->SubjectFrameTimes).ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SubjectFrameTimes.Num() >= 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkTimecodeProvider.cpp"
                             ,0x2b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FQualifiedFrameTime *)(*pcVar3)();
        return pFVar7;
      }
      if ((int)uVar10 < 0) {
        iVar11 = 1;
        goto LAB_14d053269;
      }
      iVar2 = (this->SubjectFrameTimes).ArrayNum;
      iVar11 = iVar2 + -1;
      if ((int)uVar10 < iVar11) {
        iVar11 = uVar10 + 1;
        uVar9 = uVar10;
LAB_14d05323d:
        if (iVar11 != -1) goto LAB_14d053269;
      }
      else {
        uVar9 = iVar2 - 2;
        if (uVar9 != 0xffffffff) goto LAB_14d05323d;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexA != INDEX_NONE && IndexB != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkTimecodeProvider.cpp"
                         ,0x40,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FQualifiedFrameTime *)(*pcVar3)();
        return pFVar7;
      }
LAB_14d053269:
      LerpBetweenFrames(this,__return_storage_ptr__,dVar4,uVar9,iVar11);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FQualifiedFrameTime *)(*pcVar3)();
      return pFVar7;
    }
    pFVar1 = (this->SubjectFrameTimes).AllocatorInstance.Data +
             (longlong)(this->SubjectFrameTimes).ArrayNum * 0x18 + -0x10;
    local_48[0].Time.FrameNumber.Value = *(int *)pFVar1;
    local_48[0].Time.SubFrame = *(float *)(pFVar1 + 4);
    local_48[0].Rate.Numerator = *(int *)(pFVar1 + 8);
    local_48[0].Rate.Denominator = *(int *)(pFVar1 + 0xc);
    if (this->bOverrideFrameRate == false) {
      (__return_storage_ptr__->Time).FrameNumber.Value = local_48[0].Time.FrameNumber.Value;
      (__return_storage_ptr__->Time).SubFrame = local_48[0].Time.SubFrame;
      (__return_storage_ptr__->Rate).Numerator = local_48[0].Rate.Numerator;
      (__return_storage_ptr__->Rate).Denominator = local_48[0].Rate.Denominator;
      goto LAB_14d053341;
    }
    FVar8 = ::FQualifiedFrameTime::ConvertTo(local_48,(FFrameRate)local_58);
    __return_storage_ptr__->Time = *(FFrameTime *)FVar8;
  }
  __return_storage_ptr__->Rate = this->OverrideFrameRate;
LAB_14d053341:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetSynchronizationState @ 14d0571c0

ETimecodeProviderSynchronizationState __thiscall
ULiveLinkTimecodeProvider::GetSynchronizationState(ULiveLinkTimecodeProvider *this)

{
  return (ETimecodeProviderSynchronizationState)this->State;
}

// InitClient @ 14d05ac90

void __thiscall ULiveLinkTimecodeProvider::InitClient(ULiveLinkTimecodeProvider *this)

{
  char cVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
  *pTVar5;
  ILiveLinkClient *pIVar6;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    pIVar6 = (ILiveLinkClient *)(lVar4 + -8);
    if (lVar4 == 0) {
      pIVar6 = (ILiveLinkClient *)0x0;
    }
    this->LiveLinkClient = pIVar6;
    pTVar5 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*pIVar6 + 0x1f8))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkTimecodeProvider>
              (pTVar5,(ULiveLinkTimecodeProvider *)&stack0x00000010,(pmf_cfbba92b)this);
    pTVar5 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkTimecodeProvider>
              (pTVar5,(ULiveLinkTimecodeProvider *)&stack0x00000010,(pmf_cfbba92b)this);
    cVar1 = (**(code **)((longlong)*this->LiveLinkClient + 0x108))
                      (this->LiveLinkClient,(this->SubjectKey).SubjectName.Name);
    if ((cVar1 != '\0') &&
       ((this->SubjectKey).SubjectName.Name == (this->SubjectKey).SubjectName.Name)) {
      RegisterSubject(this);
      return;
    }
  }
  return;
}

// Initialize @ 14d05bcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULiveLinkTimecodeProvider::Initialize(ULiveLinkTimecodeProvider *this,UEngine *param_1)

{
  IModularFeatures *pIVar1;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  
  LOCK();
  this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x3;
  UNLOCK();
  pIVar1 = IModularFeatures::Get();
  pTVar2 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddUObject<ULiveLinkTimecodeProvider>
            (pTVar2,(ULiveLinkTimecodeProvider *)&stack0x00000008,(pmf_1bc38e4b)this);
  pTVar2 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddUObject<ULiveLinkTimecodeProvider>
            (pTVar2,(ULiveLinkTimecodeProvider *)&stack0x00000008,(pmf_1bc38e4b)this);
  InitClient(this);
  UnregisterSubject(this);
  RegisterSubject(this);
  return true;
}

// LerpBetweenFrames @ 14d060c90

FQualifiedFrameTime * __thiscall
ULiveLinkTimecodeProvider::LerpBetweenFrames
          (ULiveLinkTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__,
          double param_1,int param_2,int param_3)

{
  FFrameTime *pFVar1;
  FFrameRate FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FQualifiedFrameTime *pFVar7;
  FFrameTime FVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  FFrameTime local_res8;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  FQualifiedFrameTime local_78;
  FQualifiedFrameTime local_68 [3];
  
  lVar9 = (longlong)param_2;
  uVar10 = (uint)~param_2 >> 0x1f;
  uVar6 = 0;
  if (param_2 < (this->SubjectFrameTimes).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
    return pFVar7;
  }
  dVar11 = *(double *)((this->SubjectFrameTimes).AllocatorInstance.Data + lVar9 * 0x18);
  uVar6 = 0;
  if (param_3 < (this->SubjectFrameTimes).ArrayNum) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
    return pFVar7;
  }
  dVar11 = (param_1 - dVar11) /
           (*(double *)((this->SubjectFrameTimes).AllocatorInstance.Data + (longlong)param_3 * 0x18)
           - dVar11);
  if (((this->Evaluation != Lerp) ||
      (auVar14._8_8_ = 0, auVar14._0_8_ = __real_3e45798ee2308c3a,
      (double)CONCAT44((uint)((ulonglong)(dVar11 - __real_3ff0000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar11 - __real_3ff0000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a)) ||
     ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a)) {
    if (dVar11 < __real_3fe0000000000000) {
      param_3 = param_2;
    }
    uVar6 = 0;
    if (param_3 < (this->SubjectFrameTimes).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar7;
    }
    pFVar1 = (FFrameTime *)
             ((this->SubjectFrameTimes).AllocatorInstance.Data + (longlong)param_3 * 0x18 + 8);
    local_68[0].Time = *pFVar1;
    local_68[0].Rate = *(FFrameRate *)(pFVar1 + 1);
    if (this->bOverrideFrameRate == false) {
      __return_storage_ptr__->Time = local_68[0].Time;
      (__return_storage_ptr__->Rate).Numerator = local_68[0].Rate.Numerator;
      (__return_storage_ptr__->Rate).Denominator = local_68[0].Rate.Denominator;
    }
    else {
      FVar8 = ::FQualifiedFrameTime::ConvertTo(local_68,(FFrameRate)local_88);
      FVar8 = *(FFrameTime *)FVar8;
      __return_storage_ptr__->Rate = this->OverrideFrameRate;
      __return_storage_ptr__->Time = FVar8;
    }
  }
  else {
    uVar6 = 0;
    if (param_2 < (this->SubjectFrameTimes).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar7;
    }
    FVar2 = *(FFrameRate *)((this->SubjectFrameTimes).AllocatorInstance.Data + lVar9 * 0x18 + 0x10);
    uVar6 = 0;
    if (param_2 < (this->SubjectFrameTimes).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar7;
    }
    pFVar3 = (this->SubjectFrameTimes).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_3 < (this->SubjectFrameTimes).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    dVar15 = (double)*(float *)(pFVar3 + lVar9 * 0x18 + 0xc) +
             (double)*(int *)(pFVar3 + lVar9 * 0x18 + 8);
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar7;
    }
    FVar8 = ::FQualifiedFrameTime::ConvertTo
                      ((FQualifiedFrameTime *)
                       ((this->SubjectFrameTimes).AllocatorInstance.Data +
                       ((longlong)param_3 * 3 + 1) * 8),(FFrameRate)local_98);
    dVar15 = (((double)*(float *)((longlong)FVar8 + 4) + (double)*(int *)FVar8) - dVar15) * dVar11 +
             dVar15;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar15;
    auVar14 = roundpd(auVar14,auVar12,1);
    dVar13 = auVar14._0_8_;
    dVar11 = dVar13;
    if (__real_41dfffffffc00000 <= dVar13) {
      dVar11 = __real_41dfffffffc00000;
    }
    local_res8.SubFrame = (float)(dVar15 - dVar13);
    if (dVar11 <= __real_c1e0000000000000) {
      dVar11 = __real_c1e0000000000000;
    }
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value = (int)dVar11;
    local_78.Time = local_res8;
    if (this->bOverrideFrameRate == false) {
      __return_storage_ptr__->Time = local_res8;
      __return_storage_ptr__->Rate = FVar2;
    }
    else {
      local_78.Rate = FVar2;
      FVar8 = ::FQualifiedFrameTime::ConvertTo(&local_78,(FFrameRate)local_90);
      FVar2 = this->OverrideFrameRate;
      __return_storage_ptr__->Time = *(FFrameTime *)FVar8;
      __return_storage_ptr__->Rate = FVar2;
    }
  }
  return __return_storage_ptr__;
}

// OnLiveLinkClientRegistered @ 14d0660e0

void __thiscall
ULiveLinkTimecodeProvider::OnLiveLinkClientRegistered
          (ULiveLinkTimecodeProvider *this,FName *param_1,IModularFeature *param_2)

{
  char cVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
  *pTVar5;
  ILiveLinkClient *pIVar6;
  
  if ((*param_1 != ILiveLinkClient::ModularFeatureName) ||
     (this->LiveLinkClient != (ILiveLinkClient *)0x0)) {
    return;
  }
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    pIVar6 = (ILiveLinkClient *)(lVar4 + -8);
    if (lVar4 == 0) {
      pIVar6 = (ILiveLinkClient *)0x0;
    }
    this->LiveLinkClient = pIVar6;
    pTVar5 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*pIVar6 + 0x1f8))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkTimecodeProvider>
              (pTVar5,(ULiveLinkTimecodeProvider *)&stack0x00000010,(pmf_cfbba92b)this);
    pTVar5 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkTimecodeProvider>
              (pTVar5,(ULiveLinkTimecodeProvider *)&stack0x00000010,(pmf_cfbba92b)this);
    cVar1 = (**(code **)((longlong)*this->LiveLinkClient + 0x108))
                      (this->LiveLinkClient,(this->SubjectKey).SubjectName.Name);
    if ((cVar1 != '\0') &&
       ((this->SubjectKey).SubjectName.Name == (this->SubjectKey).SubjectName.Name)) {
      RegisterSubject(this);
      return;
    }
  }
  return;
}

// OnLiveLinkClientUnregistered @ 14d066150

void __thiscall
ULiveLinkTimecodeProvider::OnLiveLinkClientUnregistered
          (ULiveLinkTimecodeProvider *this,FName *param_1,IModularFeature *param_2)

{
  ILiveLinkClient *pIVar1;
  
  if (*param_1 == ILiveLinkClient::ModularFeatureName) {
    pIVar1 = this->LiveLinkClient + 1;
    if (this->LiveLinkClient == (ILiveLinkClient *)0x0) {
      pIVar1 = (ILiveLinkClient *)0x0;
    }
    if ((ILiveLinkClient *)param_2 == pIVar1) {
      UninitClient(this);
      InitClient(this);
      return;
    }
  }
  return;
}

// OnLiveLinkFrameDataReceived_AnyThread @ 14d066340

void __thiscall
ULiveLinkTimecodeProvider::OnLiveLinkFrameDataReceived_AnyThread
          (ULiveLinkTimecodeProvider *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int *piVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  double *pdVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  double local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pdVar10 = (double *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  lpCriticalSection = &this->SubjectFrameLock;
  local_38 = pdVar10[1] + *pdVar10;
  uStack_30 = *(undefined4 *)(pdVar10 + 0xc);
  uStack_2c = *(undefined4 *)((longlong)pdVar10 + 100);
  uStack_28 = *(undefined4 *)(pdVar10 + 0xd);
  uStack_24 = *(undefined4 *)((longlong)pdVar10 + 0x6c);
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    iVar9 = (this->SubjectFrameTimes).ArrayNum;
    iVar13 = -(uint)(iVar9 != 0);
    uVar12 = iVar9 - 1;
    if (-1 < (int)uVar12) {
      lVar11 = (longlong)(int)uVar12 * 0x18;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->SubjectFrameTimes).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->SubjectFrameTimes).AllocatorInstance.Data + lVar11;
        if (*(double *)pFVar4 <= local_38 && local_38 != *(double *)pFVar4) {
          iVar13 = uVar12 + 1;
          break;
        }
        lVar11 = lVar11 + -0x18;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    if (iVar13 != -1) {
      pTVar3 = &this->SubjectFrameTimes;
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar4 + (longlong)(this->SubjectFrameTimes).ArrayMax * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->SubjectFrameTimes).ArrayNum;
      piVar1 = &(this->SubjectFrameTimes).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->SubjectFrameTimes).ArrayNum = iVar9 + 1;
      lVar11 = (longlong)iVar13;
      pFVar4 = (pTVar3->AllocatorInstance).Data + lVar11 * 0x18;
      memmove(pFVar4 + 0x18,pFVar4,(longlong)(iVar9 - iVar13) * 0x18);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      pFVar4 = pFVar5 + lVar11 * 0x18;
      *(double *)pFVar4 = local_38;
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_2c,uStack_30);
      *(ulonglong *)(pFVar5 + lVar11 * 0x18 + 0x10) = CONCAT44(uStack_24,uStack_28);
      if (this->BufferSize < (this->SubjectFrameTimes).ArrayNum) {
        LOCK();
        this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x2;
        UNLOCK();
        if (((this->SubjectFrameTimes).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        iVar9 = (this->SubjectFrameTimes).ArrayNum + -1;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + 0x18,(longlong)iVar9 * 0x18);
        }
        piVar2 = &(this->SubjectFrameTimes).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar3->AllocatorInstance,(this->SubjectFrameTimes).ArrayNum,piVar1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnLiveLinkSubjectAdded @ 14d066680

void __thiscall
ULiveLinkTimecodeProvider::OnLiveLinkSubjectAdded
          (ULiveLinkTimecodeProvider *this,FLiveLinkSubjectKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1->SubjectName).Name == (this->SubjectKey).SubjectName.Name) {
    uVar2 = (param_1->Source).B;
    uVar3 = (param_1->Source).C;
    uVar4 = (param_1->Source).D;
    FVar1 = (param_1->SubjectName).Name;
    (this->SubjectKey).Source.A = (param_1->Source).A;
    (this->SubjectKey).Source.B = uVar2;
    (this->SubjectKey).Source.C = uVar3;
    (this->SubjectKey).Source.D = uVar4;
    (this->SubjectKey).SubjectName.Name = FVar1;
    RegisterSubject(this);
    return;
  }
  return;
}

// OnLiveLinkSubjectRemoved @ 14d066720

void __thiscall
ULiveLinkTimecodeProvider::OnLiveLinkSubjectRemoved
          (ULiveLinkTimecodeProvider *this,FLiveLinkSubjectKey *param_1)

{
  if ((param_1->SubjectName).Name == (this->RegisteredSubjectKey).SubjectName.Name) {
    LOCK();
    this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x1;
    UNLOCK();
    UnregisterSubject(this);
    return;
  }
  return;
}

// RegisterSubject @ 14d075b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULiveLinkTimecodeProvider::RegisterSubject(ULiveLinkTimecodeProvider *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  ILiveLinkClient *pIVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_e8 [32];
  ULiveLinkTimecodeProvider *local_b8;
  undefined8 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  lpCriticalSection = &this->SubjectFrameLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SubjectFrameTimes).ArrayNum = 0;
    if ((this->SubjectFrameTimes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->SubjectFrameTimes).AllocatorInstance,0,
                 &(this->SubjectFrameTimes).ArrayMax);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = (this->SubjectKey).Source.B;
    uVar5 = (this->SubjectKey).Source.C;
    uVar6 = (this->SubjectKey).Source.D;
    pIVar2 = this->LiveLinkClient;
    FVar1 = (this->SubjectKey).SubjectName.Name;
    (this->RegisteredSubjectKey).Source.A = (this->SubjectKey).Source.A;
    (this->RegisteredSubjectKey).Source.B = uVar4;
    (this->RegisteredSubjectKey).Source.C = uVar5;
    (this->RegisteredSubjectKey).Source.D = uVar6;
    local_b0 = 0;
    (this->RegisteredSubjectKey).SubjectName.Name = FVar1;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x218);
    InitializeCriticalSectionAndSpinCount(&local_70,4000);
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    EnterCriticalSection(&local_70);
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_b8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_b8);
      puVar7[4] = OnLiveLinkFrameDataReceived_AnyThread;
    }
    LeaveCriticalSection(&local_70);
    local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_a8.LockCount = 0;
    local_a8.RecursionCount = 0;
    local_78 = 0;
    local_a8.OwningThread = (HANDLE)0x0;
    local_a8.LockSemaphore = (HANDLE)0x0;
    local_a8.SpinCount = 0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    InitializeCriticalSectionAndSpinCount(&local_a8,4000);
    FStack_80.Data = (FScriptContainerElement *)0x0;
    local_78 = local_78 & 0xffffffff00000000;
    (*pcVar3)(pIVar2,&this->RegisteredSubjectKey,&local_a8,&local_70);
    EnterCriticalSection(&local_a8);
    if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = local_78 & 0xffffffff00000000;
    }
    LeaveCriticalSection(&local_a8);
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    DeleteCriticalSection(&local_a8);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_48,0,0,0x10);
      local_48.DelegateSize = 0;
    }
    LeaveCriticalSection(&local_70);
    if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48.DelegateAllocator);
    }
    DeleteCriticalSection(&local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Shutdown @ 14d07fb30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULiveLinkTimecodeProvider::Shutdown(ULiveLinkTimecodeProvider *this,UEngine *param_1)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
    UNLOCK();
  }
  LOCK();
  this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
  UNLOCK();
  return;
}

// StaticRegisterNativesULiveLinkTimecodeProvider @ 14d080880

void __cdecl ULiveLinkTimecodeProvider::StaticRegisterNativesULiveLinkTimecodeProvider(void)

{
  return;
}

// UninitClient @ 14d085c50

void __thiscall ULiveLinkTimecodeProvider::UninitClient(ULiveLinkTimecodeProvider *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (TAtomic<ETimecodeProviderSynchronizationState>)0x0;
    UNLOCK();
  }
  return;
}

// UnregisterSubject @ 14d086080

void __thiscall ULiveLinkTimecodeProvider::UnregisterSubject(ULiveLinkTimecodeProvider *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if ((this->RegisterForFrameDataReceivedHandle).ID != 0) {
    (**(code **)((longlong)*this->LiveLinkClient + 0x220))
              (this->LiveLinkClient,&this->RegisteredSubjectKey);
    (this->RegisterForFrameDataReceivedHandle).ID = 0;
  }
  lpCriticalSection = &this->SubjectFrameLock;
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SubjectFrameTimes).ArrayNum = 0;
    if ((this->SubjectFrameTimes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->SubjectFrameTimes).AllocatorInstance,0,
                 &(this->SubjectFrameTimes).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d086137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

