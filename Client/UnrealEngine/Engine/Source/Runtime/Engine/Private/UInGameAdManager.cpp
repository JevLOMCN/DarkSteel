// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 14727c530

UClass * __cdecl UInGameAdManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InGameAdManager",
               &Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton,
               StaticRegisterNativesUInGameAdManager,0x60,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInGameAdManager>,
               InternalVTableHelperCtorCaller<UInGameAdManager>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton;
}

// UInGameAdManager @ 14727fa50

UInGameAdManager * __thiscall
UInGameAdManager::UInGameAdManager(UInGameAdManager *this,FVTableHelper *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase((UPlatformInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInGameAdManager__6B_;
  (this->ClickedBannerDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClickedBannerDelegates).ArrayNum = 0;
  (this->ClickedBannerDelegates).ArrayMax = 0;
  (this->ClosedAdDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosedAdDelegates).ArrayNum = 0;
  (this->ClosedAdDelegates).ArrayMax = 0;
  return this;
}

// ~UInGameAdManager @ 14727fdc0

void __thiscall UInGameAdManager::~UInGameAdManager(UInGameAdManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInGameAdManager__6B_;
  DestructItems<FOnUserClosedAdvertisement,int>
            ((FOnUserClosedAdvertisement *)(this->ClosedAdDelegates).AllocatorInstance.Data,
             (this->ClosedAdDelegates).ArrayNum);
  pFVar1 = (this->ClosedAdDelegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOnUserClickedBanner,int>
            ((FOnUserClickedBanner *)(this->ClickedBannerDelegates).AllocatorInstance.Data,
             (this->ClickedBannerDelegates).ArrayNum);
  pFVar1 = (this->ClickedBannerDelegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformInterfaceBase::~UPlatformInterfaceBase((UPlatformInterfaceBase *)this);
  return;
}

// GetPrivateStaticClass @ 147280fe0

UClass * __cdecl UInGameAdManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InGameAdManager",
               &Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton,
               StaticRegisterNativesUInGameAdManager,0x60,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInGameAdManager>,
               InternalVTableHelperCtorCaller<UInGameAdManager>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInGameAdManager.InnerSingleton;
}

// StaticRegisterNativesUInGameAdManager @ 147281560

void __cdecl UInGameAdManager::StaticRegisterNativesUInGameAdManager(void)

{
  return;
}

// UInGameAdManager @ 147cc6910

UInGameAdManager * __thiscall
UInGameAdManager::UInGameAdManager(UInGameAdManager *this,FObjectInitializer *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase((UPlatformInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInGameAdManager__6B_;
  this->bShouldPauseWhileAdOpen = 1;
  (this->ClickedBannerDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClickedBannerDelegates).ArrayNum = 0;
  (this->ClickedBannerDelegates).ArrayMax = 0;
  (this->ClosedAdDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosedAdDelegates).ArrayNum = 0;
  (this->ClosedAdDelegates).ArrayMax = 0;
  return this;
}

// AddClickedBannerDelegate @ 147cd09d0

void __thiscall
UInGameAdManager::AddClickedBannerDelegate(UInGameAdManager *this,FOnUserClickedBanner *param_1)

{
  TArray<FOnUserClickedBanner,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FOnUserClickedBanner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FReadAccessScope local_28;
  
  this_00 = &this->ClickedBannerDelegates;
  iVar6 = TArray<FOnUserClickedBanner,TSizedDefaultAllocator<32>_>::Find(this_00,param_1);
  if (iVar6 == -1) {
    pFVar3 = (FOnUserClickedBanner *)(this_00->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ClickedBannerDelegates).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->ClickedBannerDelegates).ArrayNum;
    piVar1 = &(this->ClickedBannerDelegates).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this_00->AllocatorInstance,piVar1);
    }
    (this->ClickedBannerDelegates).ArrayNum = iVar6 + 1;
    pFVar2 = (this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    *(undefined8 *)(pFVar2 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// AddClosedAdDelegate @ 147cd0ad0

void __thiscall
UInGameAdManager::AddClosedAdDelegate(UInGameAdManager *this,FOnUserClosedAdvertisement *param_1)

{
  TArray<FOnUserClosedAdvertisement,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FOnUserClosedAdvertisement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FReadAccessScope local_28;
  
  this_00 = &this->ClosedAdDelegates;
  iVar6 = TArray<FOnUserClosedAdvertisement,TSizedDefaultAllocator<32>_>::Find(this_00,param_1);
  if (iVar6 == -1) {
    pFVar3 = (FOnUserClosedAdvertisement *)(this_00->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ClosedAdDelegates).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->ClosedAdDelegates).ArrayNum;
    piVar1 = &(this->ClosedAdDelegates).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this_00->AllocatorInstance,piVar1);
    }
    (this->ClosedAdDelegates).ArrayNum = iVar6 + 1;
    pFVar2 = (this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    *(undefined8 *)(pFVar2 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ClearClickedBannerDelegate @ 147ce46e0

void __thiscall
UInGameAdManager::ClearClickedBannerDelegate(UInGameAdManager *this,FOnUserClickedBanner *param_1)

{
  TArray<FOnUserClickedBanner,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = &this->ClickedBannerDelegates;
  uVar3 = TArray<FOnUserClickedBanner,TSizedDefaultAllocator<32>_>::Find(this_00,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)(uVar3 + 1) <= (this->ClickedBannerDelegates).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<FOnUserClickedBanner,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar3,1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this_00->AllocatorInstance,(this->ClickedBannerDelegates).ArrayNum,
               &(this->ClickedBannerDelegates).ArrayMax);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ClearClosedAdDelegate @ 147ce47b0

void __thiscall
UInGameAdManager::ClearClosedAdDelegate(UInGameAdManager *this,FOnUserClosedAdvertisement *param_1)

{
  TArray<FOnUserClosedAdvertisement,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = &this->ClosedAdDelegates;
  uVar3 = TArray<FOnUserClosedAdvertisement,TSizedDefaultAllocator<32>_>::Find(this_00,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)(uVar3 + 1) <= (this->ClosedAdDelegates).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<FOnUserClosedAdvertisement,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar3,1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this_00->AllocatorInstance,(this->ClosedAdDelegates).ArrayNum,
               &(this->ClosedAdDelegates).ArrayMax);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ForceCloseAd @ 147cf7d90

void __thiscall UInGameAdManager::ForceCloseAd(UInGameAdManager *this)

{
  return;
}

// HideBanner @ 147d13af0

void __thiscall UInGameAdManager::HideBanner(UInGameAdManager *this)

{
  return;
}

// Init @ 147d15f10

void __thiscall UInGameAdManager::Init(UInGameAdManager *this)

{
  return;
}

// OnUserClickedBanner @ 147d1c910

void __thiscall UInGameAdManager::OnUserClickedBanner(UInGameAdManager *this)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  int iVar1;
  FOnUserClickedBanner *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = (this->ClickedBannerDelegates).ArrayNum;
  pFVar2 = (FOnUserClickedBanner *)(this->ClickedBannerDelegates).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FOnUserClickedBanner,FOnUserClickedBanner,int>(local_18.Data,pFVar2,iVar1);
  }
  uVar6 = 0;
  if (0 < local_10) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
                (local_18.Data + (longlong)(int)uVar6 * 0x18);
      bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
      if (bVar4) {
        FOnUserClickedBanner_DelegateWrapper(this_00);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < local_10);
  }
  DestructItems<FOnUserClickedBanner,int>((FOnUserClickedBanner *)local_18.Data,local_10);
  if ((FOnUserClickedBanner *)local_18.Data != (FOnUserClickedBanner *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// OnUserClosedAd @ 147d1ca30

void __thiscall UInGameAdManager::OnUserClosedAd(UInGameAdManager *this)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  int iVar1;
  FOnUserClosedAdvertisement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = (this->ClosedAdDelegates).ArrayNum;
  pFVar2 = (FOnUserClosedAdvertisement *)(this->ClosedAdDelegates).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FOnUserClosedAdvertisement,FOnUserClosedAdvertisement,int>
              (local_18.Data,pFVar2,iVar1);
  }
  uVar6 = 0;
  if (0 < local_10) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
                (local_18.Data + (longlong)(int)uVar6 * 0x18);
      bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
      if (bVar4) {
        FOnUserClosedAdvertisement_DelegateWrapper(this_00);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < local_10);
  }
  DestructItems<FOnUserClosedAdvertisement,int>
            ((FOnUserClosedAdvertisement *)local_18.Data,local_10);
  if ((FOnUserClosedAdvertisement *)local_18.Data != (FOnUserClosedAdvertisement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetPauseWhileAdOpen @ 147d2aea0

void __thiscall UInGameAdManager::SetPauseWhileAdOpen(UInGameAdManager *this,bool param_1)

{
  this->bShouldPauseWhileAdOpen = 0;
  *(uint *)&this->field_0x38 = *(uint *)&this->field_0x38 | (uint)param_1;
  return;
}

// ShowBanner @ 147d2dac0

void __thiscall UInGameAdManager::ShowBanner(UInGameAdManager *this,bool param_1)

{
  return;
}

