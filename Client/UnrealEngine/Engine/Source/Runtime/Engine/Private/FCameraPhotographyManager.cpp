// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FCameraPhotographyManager @ 1476e70f0

/* WARNING: Enum "Type": Some values do not have unique names */

FCameraPhotographyManager * __thiscall
FCameraPhotographyManager::FCameraPhotographyManager(FCameraPhotographyManager *this)

{
  int iVar1;
  ICameraPhotography *pIVar2;
  code *pcVar3;
  longlong lVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  FCameraPhotographyManager *pFVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar16;
  ulonglong local_98;
  undefined1 local_90 [16];
  ForAnyElementType local_80;
  int local_78;
  int iStack_74;
  FString local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong uVar15;
  
  uVar13 = 0;
  (this->ActiveImpl).Object = (ICameraPhotography *)0x0;
  (this->ActiveImpl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar9 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"CameraPhotography");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'
          ::__l2::FeatureName;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  iStack_74 = 0;
  iVar7 = (**(code **)((longlong)*pIVar9 + 0x18))
                    (pIVar9,`public:_static_class_FName___cdecl_ICameraPhotographyModule::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  uVar15 = uVar13;
  if (0 < iVar7) {
    do {
      lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar5,uVar15);
      local_98 = lVar10 - 8;
      if (lVar10 == 0) {
        local_98 = uVar13;
      }
      if (((local_80.Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < local_80.Data + (longlong)iStack_74 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FCameraPhotographyManager *)(*pcVar3)();
        return pFVar11;
      }
      if (local_78 == iStack_74) {
        local_78 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_80,&iStack_74);
      }
      iVar1 = local_78 + 1;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *(ulonglong *)(local_80.Data + (longlong)local_78 * 8) = local_98;
      local_78 = iVar1;
    } while ((int)uVar14 < iVar7);
  }
  while (((uVar14 = (uint)uVar13, -1 < (int)uVar14 && ((int)uVar14 < local_78)) &&
         ((this->ActiveImpl).Object == (ICameraPhotography *)0x0))) {
    uVar8 = 0;
    if ((int)uVar14 < local_78) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FCameraPhotographyManager *)(*pcVar3)();
      return pFVar11;
    }
    pFVar11 = (FCameraPhotographyManager *)
              (**(code **)(**(longlong **)(local_80.Data + (longlong)(int)uVar14 * 8) + 0x40))
                        (*(longlong **)(local_80.Data + (longlong)(int)uVar14 * 8),local_60);
    if (this != pFVar11) {
      (this->ActiveImpl).Object = (pFVar11->ActiveImpl).Object;
      (pFVar11->ActiveImpl).Object = (ICameraPhotography *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveImpl).SharedReferenceCount,
                 &(pFVar11->ActiveImpl).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    uVar13 = (ulonglong)(uVar14 + 1);
  }
  pIVar2 = (this->ActiveImpl).Object;
  if (pIVar2 != (ICameraPhotography *)0x0) {
    if (4 < (byte)LogCameraPhotography._0_1_) {
      (**(code **)((longlong)*pIVar2 + 0x28))();
      if (((this->ActiveImpl).Object == (ICameraPhotography *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FCameraPhotographyManager *)(*pcVar3)();
        return pFVar11;
      }
      (**(code **)((longlong)*(this->ActiveImpl).Object + 0x40))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraPhotography);
    }
    if (((this->ActiveImpl).Object == (ICameraPhotography *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FCameraPhotographyManager *)(*pcVar3)();
      return pFVar11;
    }
    (**(code **)((longlong)*(this->ActiveImpl).Object + 0x28))();
  }
  lVar4 = CVarPhotographyAvailable._padding_;
  local_4c = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0xe000000;
  local_3c = 0xf000000;
  local_38 = 0x1000000;
  ::FString::PrintfImpl(&local_70,L"%d");
  lVar10 = *(longlong *)lVar4;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar16.Data = local_70.Data.AllocatorInstance.Data;
  }
  uVar12 = (**(code **)(lVar10 + 0xa8))(lVar4,local_90,&local_50);
  (**(code **)(lVar10 + 0xb0))(lVar4,FVar16.Data,uVar12);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return this;
}

// ~FCameraPhotographyManager @ 1476e8cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCameraPhotographyManager::~FCameraPhotographyManager(FCameraPhotographyManager *this)

{
  ICameraPhotography *pIVar1;
  code *pcVar2;
  bool bVar3;
  FSharedReferencer<1> *this_00;
  FCameraPhotographyManager local_18;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 == (ICameraPhotography *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->ActiveImpl).SharedReferenceCount.ReferenceController);
    return;
  }
  if (4 < (byte)LogCameraPhotography._0_1_) {
    (**(code **)((longlong)*pIVar1 + 0x28))();
    if ((this->ActiveImpl).Object == (ICameraPhotography *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((longlong)*(this->ActiveImpl).Object + 0x40))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraPhotography);
  }
  local_18.ActiveImpl.Object = (ICameraPhotography *)0x0;
  local_18.ActiveImpl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->ActiveImpl).Object = (ICameraPhotography *)0x0;
    this_00 = &(this->ActiveImpl).SharedReferenceCount;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (this_00,&local_18.ActiveImpl.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.ActiveImpl.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (this_00->ReferenceController);
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveImpl).SharedReferenceCount.ReferenceController);
  return;
}

// DefaultConstrainCamera @ 1476fb380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraPhotographyManager::DefaultConstrainCamera
          (FCameraPhotographyManager *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,APlayerCameraManager *param_5)

{
  double dVar1;
  ICameraPhotography *pIVar2;
  double dVar3;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar3;
  (param_4->field0_0x0)._s_0.Z = dVar1;
  pIVar2 = (this->ActiveImpl).Object;
  if (pIVar2 != (ICameraPhotography *)0x0) {
    local_68 = (param_3->field0_0x0)._s_0.X;
    dStack_60 = (param_3->field0_0x0)._s_0.Y;
    local_58 = (param_3->field0_0x0)._s_0.Z;
    local_48 = (param_2->field0_0x0)._s_0.X;
    dStack_40 = (param_2->field0_0x0)._s_0.Y;
    local_38 = (param_2->field0_0x0)._s_0.Z;
    local_28 = *(undefined4 *)&param_1->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,&local_28,&local_48,&local_68,param_4,param_5);
  }
  return;
}

// Destroy @ 1476fb440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCameraPhotographyManager::Destroy(void)

{
  ICameraPhotography *pIVar1;
  code *pcVar2;
  FCameraPhotographyManager *pFVar3;
  bool bVar4;
  FCameraPhotographyManager local_18;
  
  pFVar3 = Singleton;
  if (Singleton != (FCameraPhotographyManager *)0x0) {
    pIVar1 = (Singleton->ActiveImpl).Object;
    if (pIVar1 != (ICameraPhotography *)0x0) {
      if (4 < (byte)LogCameraPhotography._0_1_) {
        (**(code **)((longlong)*pIVar1 + 0x28))();
        if ((pFVar3->ActiveImpl).Object == (ICameraPhotography *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (**(code **)((longlong)*(pFVar3->ActiveImpl).Object + 0x40))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraPhotography);
      }
      local_18.ActiveImpl.Object = (ICameraPhotography *)0x0;
      local_18.ActiveImpl.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pFVar3 != &local_18) {
        (pFVar3->ActiveImpl).Object = (ICameraPhotography *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar3->ActiveImpl).SharedReferenceCount,
                   &local_18.ActiveImpl.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.ActiveImpl.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->ActiveImpl).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar3,0x10);
  }
  Singleton = (FCameraPhotographyManager *)0x0;
  return;
}

// Get @ 147706710

FCameraPhotographyManager * __cdecl FCameraPhotographyManager::Get(void)

{
  FCameraPhotographyManager *this;
  FCameraPhotographyManager *pFVar1;
  undefined1 local_res8 [32];
  
  if (Singleton == (FCameraPhotographyManager *)0x0) {
    this = ::operator_new(0x10);
    pFVar1 = (FCameraPhotographyManager *)0x0;
    if (this != (FCameraPhotographyManager *)0x0) {
      pFVar1 = FCameraPhotographyManager(this);
    }
    Singleton = pFVar1;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnExit,(_func___cdecl_void *)local_res8);
  }
  return Singleton;
}

// IsSupported @ 147714b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FCameraPhotographyManager::IsSupported(UWorld *param_1)

{
  ICameraPhotography *pIVar1;
  undefined1 uVar2;
  ENetMode EVar3;
  FCameraPhotographyManager *this;
  FCameraPhotographyManager *pFVar4;
  undefined1 local_res8 [32];
  
  if (param_1 != (UWorld *)0x0) {
    EVar3 = UWorld::InternalGetNetMode(param_1);
    if (EVar3 != NM_DedicatedServer) {
      if (Singleton == (FCameraPhotographyManager *)0x0) {
        this = ::operator_new(0x10);
        pFVar4 = (FCameraPhotographyManager *)0x0;
        if (this != (FCameraPhotographyManager *)0x0) {
          pFVar4 = FCameraPhotographyManager(this);
        }
        Singleton = pFVar4;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnExit,(_func___cdecl_void *)local_res8);
      }
      pIVar1 = (Singleton->ActiveImpl).Object;
      if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147714b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((longlong)*pIVar1 + 0x28))();
        return (bool)uVar2;
      }
    }
  }
  return false;
}

// SetUIControlVisibility @ 1477297c0

void __thiscall
FCameraPhotographyManager::SetUIControlVisibility
          (FCameraPhotographyManager *this,uchar param_1,bool param_2)

{
  ICameraPhotography *pIVar1;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477297cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x30))();
    return;
  }
  return;
}

// StartSession @ 14772b8d0

void __thiscall FCameraPhotographyManager::StartSession(FCameraPhotographyManager *this)

{
  ICameraPhotography *pIVar1;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772b8db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x18))();
    return;
  }
  return;
}

// StopSession @ 14772d080

void __thiscall FCameraPhotographyManager::StopSession(FCameraPhotographyManager *this)

{
  ICameraPhotography *pIVar1;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772d08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x20))();
    return;
  }
  return;
}

// UpdateCamera @ 147732210

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCameraPhotographyManager::UpdateCamera
          (FCameraPhotographyManager *this,FMinimalViewInfo *param_1,APlayerCameraManager *param_2)

{
  ICameraPhotography *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014773221b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 8))();
    return (bool)uVar2;
  }
  return false;
}

// UpdatePostProcessing @ 147732440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraPhotographyManager::UpdatePostProcessing
          (FCameraPhotographyManager *this,FPostProcessSettings *param_1)

{
  ICameraPhotography *pIVar1;
  
  pIVar1 = (this->ActiveImpl).Object;
  if (pIVar1 != (ICameraPhotography *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014773244b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

