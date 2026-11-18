// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 148074350

UClass * __cdecl UObjectLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectLibrary",
               &Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton,
               StaticRegisterNativesUObjectLibrary,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectLibrary>,InternalVTableHelperCtorCaller<UObjectLibrary>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton;
}

// UObjectLibrary @ 14808c070

UObjectLibrary * __thiscall
UObjectLibrary::UObjectLibrary(UObjectLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectLibrary__6B_;
  (this->ObjectBaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->WeakObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakObjects).ArrayNum = 0;
  (this->WeakObjects).ArrayMax = 0;
  (this->AssetDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDataList).ArrayNum = 0;
  (this->AssetDataList).ArrayMax = 0;
  *(undefined8 *)&this->OnObjectAddedEvent = 0;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnObjectRemovedEvent = 0;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x18 = 2;
  return this;
}

// UObjectLibrary @ 14808c100

UObjectLibrary * __thiscall
UObjectLibrary::UObjectLibrary(UObjectLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIncludeOnlyOnDiskAssets = true;
  this->bRecursivePaths = true;
  this->_padding_ = (longlong)&___7UObjectLibrary__6B_;
  (this->ObjectBaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->WeakObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakObjects).ArrayNum = 0;
  (this->WeakObjects).ArrayMax = 0;
  (this->AssetDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDataList).ArrayNum = 0;
  (this->AssetDataList).ArrayMax = 0;
  *(undefined8 *)&this->OnObjectAddedEvent = 0;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnObjectRemovedEvent = 0;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x10 = 0;
  this->bUseWeakReferences = false;
  this->bIsFullyLoaded = false;
  *(undefined8 *)&(this->OnObjectAddedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnObjectRemovedEvent).field_0x18 = 2;
  return this;
}

// ~UObjectLibrary @ 14808f4e0

void __thiscall UObjectLibrary::~UObjectLibrary(UObjectLibrary *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UObjectLibrary__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnObjectRemovedEvent).field_0x8,
             *(int *)&(this->OnObjectRemovedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnObjectRemovedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnObjectAddedEvent).field_0x8,*(int *)&(this->OnObjectAddedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnObjectAddedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectAddedEvent);
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->AssetDataList).AllocatorInstance.Data,
             (this->AssetDataList).ArrayNum);
  pFVar2 = (this->AssetDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WeakObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddObject @ 1480938e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UObjectLibrary::AddObject(UObjectLibrary *this,UObject *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res10;
  FWeakObjectPtr local_28;
  UObject *local_20;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar8 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
  if (pUVar8 != (UClass *)0x0) {
    if (this->bHasBlueprintClasses == false) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      iVar7 = (int)pUVar8->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar7) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_) {
        return false;
      }
    }
    else {
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar7) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_) {
        return false;
      }
      pUVar8 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
      if (pUVar8 == (UClass *)0x0) {
        return false;
      }
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)&param_1[1].field_0x10 < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&param_1[1].field_0x8 + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return false;
      }
    }
  }
  if (this->bUseWeakReferences == false) {
    pFVar9 = (this->Objects).AllocatorInstance.Data;
    pFVar3 = pFVar9 + (longlong)(this->Objects).ArrayNum * 8;
    for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
      if ((*(UObject **)pFVar9 != (UObject *)0x0) && (*(UObject **)pFVar9 == param_1)) {
        return false;
      }
    }
    local_20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    pFVar3 = (this->Objects).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_20) &&
        ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)(this->Objects).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->Objects).ArrayNum;
    piVar1 = &(this->Objects).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Objects).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Objects).AllocatorInstance.Data;
    (this->Objects).ArrayNum = iVar7 + 1;
    *(UObject **)(pFVar3 + (longlong)iVar7 * 8) = local_20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_20);
    }
  }
  else {
    pFVar9 = (this->WeakObjects).AllocatorInstance.Data;
    pFVar3 = pFVar9 + (longlong)(this->WeakObjects).ArrayNum * 8;
    for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
      bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar9,param_1);
      if (bVar5) {
        return false;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res10);
    pFVar2 = (FWeakObjectPtr *)(this->WeakObjects).AllocatorInstance.Data;
    if (((pFVar2 <= &local_28) && (&local_28 < pFVar2 + (this->WeakObjects).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->WeakObjects).ArrayNum;
    piVar1 = &(this->WeakObjects).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->WeakObjects).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->WeakObjects).AllocatorInstance.Data;
    (this->WeakObjects).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)(pFVar3 + (longlong)iVar7 * 8) = local_28;
  }
  if (iVar7 == -1) {
    return false;
  }
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
             &this->OnObjectAddedEvent,param_1);
  return true;
}

// ClearLoaded @ 148099b30

void __thiscall UObjectLibrary::ClearLoaded(UObjectLibrary *this)

{
  int *piVar1;
  
  this->bIsFullyLoaded = false;
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->AssetDataList).AllocatorInstance.Data,
             (this->AssetDataList).ArrayNum);
  piVar1 = &(this->AssetDataList).ArrayMax;
  (this->AssetDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->AssetDataList).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Objects).ArrayMax;
  (this->Objects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Objects).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WeakObjects).ArrayMax;
  (this->WeakObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->WeakObjects).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateLibrary @ 14809d8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectLibrary * __cdecl UObjectLibrary::CreateLibrary(UClass *param_1,bool param_2,bool param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObjectLibrary *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  pUVar3 = (UObjectLibrary *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar3->ObjectBaseClass).field0_0x0.DebugPtr = param_1;
  pUVar3->bHasBlueprintClasses = param_2;
  (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_3);
  return pUVar3;
}

// GetAssetDataList @ 1480a4040

void __thiscall
UObjectLibrary::GetAssetDataList
          (UObjectLibrary *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAssetData *pFVar3;
  
  if (param_1 != &this->AssetDataList) {
    DestructItems<FAssetData,int>((FAssetData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum)
    ;
    iVar2 = (this->AssetDataList).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FAssetData *)(this->AssetDataList).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAssetData,FAssetData,int>((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// GetPrivateStaticClass @ 1480a9cb0

UClass * __cdecl UObjectLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectLibrary",
               &Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton,
               StaticRegisterNativesUObjectLibrary,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectLibrary>,InternalVTableHelperCtorCaller<UObjectLibrary>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton;
}

// LoadAssetDataFromPath @ 1480b5b90

int __thiscall UObjectLibrary::LoadAssetDataFromPath(UObjectLibrary *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x2f8))(this,&local_18,1);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return iVar1;
}

// LoadAssetDataFromPaths @ 1480b5c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UObjectLibrary::LoadAssetDataFromPaths
          (UObjectLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  FName FVar2;
  UClass *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this_01;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_1f8 [32];
  FTopLevelAssetPath local_1a8;
  FName local_198;
  FName local_190;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar8 = ::FName::FName(&local_198,L"AssetRegistry");
  FVar2 = *pFVar8;
  this_01 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_01,FVar2);
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  FARFilter::FARFilter(&local_188);
  this_00 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
  if (this_00 != (UClass *)0x0) {
    UStruct::GetStructPathName((UStruct *)this_00,&local_1a8);
    if (((local_188.ClassPaths.AllocatorInstance.Data <= &local_1a8) &&
        (&local_1a8 <
         (FTopLevelAssetPath *)
         (local_188.ClassPaths.AllocatorInstance.Data +
         (longlong)local_188.ClassPaths.ArrayMax * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (local_188.ClassPaths.ArrayNum == local_188.ClassPaths.ArrayMax) {
      local_188.ClassPaths.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_188.ClassPaths.AllocatorInstance,&local_188.ClassPaths.ArrayMax);
    }
    ((FTopLevelAssetPath *)
    ((longlong)local_188.ClassPaths.AllocatorInstance.Data +
    (longlong)local_188.ClassPaths.ArrayNum * 0x10))->PackageName = local_1a8.PackageName;
    ((FTopLevelAssetPath *)
    ((longlong)local_188.ClassPaths.AllocatorInstance.Data +
    (longlong)local_188.ClassPaths.ArrayNum * 0x10))->AssetName = local_1a8.AssetName;
    local_188.bRecursiveClasses = true;
    local_188.ClassPaths.ArrayNum = local_188.ClassPaths.ArrayNum + 1;
  }
  iVar6 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < iVar6) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar3 + lVar12 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar3 + lVar12);
      }
      pFVar8 = ::FName::FName(&local_190,pwVar11);
      if (((local_188.PackagePaths.AllocatorInstance.Data <= pFVar8) &&
          (pFVar8 < (FName *)(local_188.PackagePaths.AllocatorInstance.Data +
                             (longlong)local_188.PackagePaths.ArrayMax * 8))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      if (local_188.PackagePaths.ArrayNum == local_188.PackagePaths.ArrayMax) {
        local_188.PackagePaths.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_188.PackagePaths.AllocatorInstance,
                        &local_188.PackagePaths.ArrayMax);
      }
      iVar1 = local_188.PackagePaths.ArrayNum + 1;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x10;
      *(FName *)(local_188.PackagePaths.AllocatorInstance.Data +
                (longlong)local_188.PackagePaths.ArrayNum * 8) = *pFVar8;
      iVar6 = param_1->ArrayNum;
      local_188.PackagePaths.ArrayNum = iVar1;
    } while ((int)uVar13 < iVar6);
  }
  local_188.bRecursivePaths = this->bRecursivePaths;
  local_188.bIncludeOnlyOnDiskAssets = this->bIncludeOnlyOnDiskAssets;
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->AssetDataList).AllocatorInstance.Data,
             (this->AssetDataList).ArrayNum);
  (this->AssetDataList).ArrayNum = 0;
  if ((this->AssetDataList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->AssetDataList).AllocatorInstance,0,&(this->AssetDataList).ArrayMax);
  }
  (**(code **)(*plVar10 + 0x50))(plVar10,&local_188,&this->AssetDataList,1);
  iVar6 = (this->AssetDataList).ArrayNum;
  FARFilter::~FARFilter(&local_188);
  return iVar6;
}

// LoadAssetsFromAssetData @ 1480b5f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall UObjectLibrary::LoadAssetsFromAssetData(UObjectLibrary *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  UObject *pUVar10;
  FString *pFVar11;
  UPackage *this_00;
  UClass *pUVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FAssetData *this_01;
  longlong lVar19;
  undefined1 auStackY_338 [32];
  undefined1 local_308 [4];
  int local_304;
  uint local_300;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_2f8;
  longlong local_2e8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_2e0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_2d0;
  undefined8 local_2c0;
  FTopLevelAssetPath local_2b8;
  FString local_2a8;
  FSoftObjectPath local_298;
  FName local_278;
  FString local_270;
  undefined4 local_260;
  undefined4 uStack_25c;
  char *pcStack_258;
  char *local_250;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_248;
  FTopLevelAssetPath local_1f8;
  TSharedPtr<FStreamableHandle,1> local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  source_location local_1a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_188;
  FStreamableManager local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar17 = 0;
  local_300 = 0;
  local_304 = 0;
  if (this->bIsFullyLoaded == false) {
    uVar7 = (this->AssetDataList).ArrayNum;
    this->bIsFullyLoaded = true;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar7,&local_2f8.AllocatorInstance,0,&local_2f8.ArrayMax);
    }
    uVar15 = uVar17;
    uVar18 = uVar17;
    if (0 < (this->AssetDataList).ArrayNum) {
      do {
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < (this->AssetDataList).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        local_2c0 = 0;
        local_2b8.PackageName.ComparisonIndex.Value = 0;
        local_2b8.PackageName.Number = 0;
        local_2b8.AssetName.ComparisonIndex.Value = 0;
        local_2b8.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath
                  (&local_2b8,*(FName *)((this->AssetDataList).AllocatorInstance.Data + uVar18),
                   (FName)0x0);
        local_1f8.PackageName = local_2b8.PackageName;
        local_1f8.AssetName = local_2b8.AssetName;
        local_298.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_298.AssetPath.PackageName.Number = 0;
        local_298.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_298.AssetPath.AssetName.Number = 0;
        local_298.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.SubPathString.Data.ArrayNum = 0;
        local_298.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_298,&local_1f8);
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                  (&local_2f8,&local_298);
        if (local_298.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.SubPathString.Data.AllocatorInstance.Data);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar18 = uVar18 + 0x68;
      } while ((int)(uVar14 + 1) < (this->AssetDataList).ArrayNum);
    }
    if (local_2f8.ArrayNum != 0) {
      FStreamableManager::FStreamableManager(&local_138);
      local_260 = 0x206;
      pcStack_258 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectLibrary.cpp";
      uStack_25c = 0xf;
      local_1a8._Line = 0x206;
      local_1a8._Column = 0xf;
      local_250 = "int __cdecl UObjectLibrary::LoadAssetsFromAssetData(void)";
      local_2d0.AllocatorInstance.Data = local_2f8.AllocatorInstance.Data;
      local_2d0.ArrayNum = local_2f8.ArrayNum;
      local_2d0.ArrayMax = local_2f8.ArrayMax;
      local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.Data.ArrayNum = 0;
      local_2a8.Data.ArrayMax = 0;
      local_1a8._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectLibrary.cpp"
      ;
      local_1a8._Function = "int __cdecl UObjectLibrary::LoadAssetsFromAssetData(void)";
      local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.ArrayNum = 0;
      local_2f8.ArrayMax = 0;
      FStreamableManager::RequestSyncLoadInternal
                (&local_138,&local_1e8,&local_2d0,false,&local_2a8,(FSourceLocation *)&local_1a8);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
      if ((FSoftObjectPath *)local_2d0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      FStreamableManager::~FStreamableManager(&local_138);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    if ((FSoftObjectPath *)local_2f8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
    uVar5 = _UNK_150631d98;
    uVar4 = ___xmm_00000000ffffffff0000008000000000;
    iVar8 = 0;
    if (0 < (this->AssetDataList).ArrayNum) {
      local_2e8 = 0;
      uVar15 = uVar17;
      do {
        lVar19 = local_2e8;
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < (this->AssetDataList).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        this_01 = (FAssetData *)((this->AssetDataList).AllocatorInstance.Data + lVar19);
        if (this->bHasBlueprintClasses == false) {
          local_248.Hash.InlineData[0] = '\0';
          local_248.Hash.InlineData[1] = '\0';
          local_248.Hash.InlineData[2] = '\0';
          local_248.Hash.InlineData[3] = '\0';
          local_248.Hash._padding_ = 0;
          local_248._72_8_ = 0;
          local_248.Elements._16_8_ = 0;
          local_248.Elements._24_8_ = 0;
          local_248.Elements._0_8_ = 0;
          local_248.Elements._8_8_ = 0;
          local_248.Elements._32_8_ = 0;
          local_248.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_248.Elements._40_8_ = uVar4;
          local_248.Elements._48_8_ = uVar5;
          pTVar9 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                   TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_188,&local_248);
          pUVar10 = FAssetData::FastGetAsset(this_01,true,pTVar9);
          local_248._72_8_ = local_248._72_8_ & 0xffffffff00000000;
          if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_248.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_248.Elements);
          if (pUVar10 == (UObject *)0x0) {
            if (2 < (byte)LogEngine._0_1_) {
              pUVar12 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
              if (pUVar12 != (UClass *)0x0) {
                local_278 = (FName)pUVar12->_padding_;
                local_300 = (uint)uVar17 | 1;
                uVar17 = (ulonglong)local_300;
                ::FName::ToString(&local_278,&local_270);
              }
              ::FName::ToString((FName *)this_01,&local_1d8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if ((uVar17 & 1) != 0) {
                local_300 = (uint)uVar17 & 0xfffffffe;
                uVar17 = (ulonglong)local_300;
                if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data.AllocatorInstance.Data);
                }
              }
            }
LAB_1480b64b9:
            if (pUVar10 == (UObject *)0x0) goto LAB_1480b64e1;
          }
          (**(code **)(this->_padding_ + 0x2b8))(this,pUVar10);
          local_304 = local_304 + 1;
        }
        else if (this_01->PackageName != (FName)0x0) {
          pFVar11 = ::FName::ToString((FName *)this_01,&local_1c8);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          this_00 = FindPackage((UObject *)0x0,pwVar13);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (this_00 == (UPackage *)0x0) {
            pFVar11 = ::FName::ToString((FName *)this_01,&local_1b8);
            if ((pFVar11->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            this_00 = LoadPackage((UPackage *)0x0,pwVar13,0,(FArchive *)0x0,
                                  (FLinkerInstancingContext *)0x0);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
          else {
            UPackage::FullyLoad(this_00);
          }
          if (this_00 != (UPackage *)0x0) {
            local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2e0.ArrayNum = 0;
            local_2e0.ArrayMax = 0;
            GetObjectsWithOuter((UObjectBase *)this_00,&local_2e0,true,RF_NoFlags,Borrowed);
            iVar8 = local_2e0.ArrayNum;
            pFVar1 = local_2e0.AllocatorInstance.Data + (longlong)local_2e0.ArrayNum * 8;
            FVar16.Data = local_2e0.AllocatorInstance.Data;
            while( true ) {
              if (local_2e0.ArrayNum != iVar8) {
                local_308[0] = 0;
                `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_308);
              }
              pUVar10 = (UObject *)0x0;
              if (FVar16.Data == pFVar1) break;
              pUVar10 = *(UObject **)FVar16.Data;
              if (pUVar10 != (UObject *)0x0) {
                pUVar12 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
                iVar2 = (int)pUVar12->_padding_;
                if ((iVar2 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    == &pUVar12->_padding_)) break;
              }
              FVar16.Data = FVar16.Data + 8;
            }
            if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e0.AllocatorInstance.Data);
            }
            uVar17 = (ulonglong)local_300;
            lVar19 = local_2e8;
            goto LAB_1480b64b9;
          }
        }
LAB_1480b64e1:
        local_2e8 = lVar19 + 0x68;
        uVar15 = (ulonglong)(uVar14 + 1);
        iVar8 = local_304;
      } while ((int)(uVar14 + 1) < (this->AssetDataList).ArrayNum);
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}

// LoadAssetsFromPath @ 1480b6550

int __thiscall UObjectLibrary::LoadAssetsFromPath(UObjectLibrary *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x2d8))(this,&local_18);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return iVar1;
}

// LoadAssetsFromPaths @ 1480b65e0

int __thiscall
UObjectLibrary::LoadAssetsFromPaths
          (UObjectLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  longlong lVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  iVar6 = 0;
  if (this->bIsFullyLoaded != false) {
    return 0;
  }
  uVar11 = 0;
  this->bIsFullyLoaded = true;
  iVar8 = param_1->ArrayNum;
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = *(int *)(pFVar1 + lVar12 + 8);
      lVar9 = (longlong)local_38.Data.ArrayNum;
      _Src = *(void **)(pFVar1 + lVar12);
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
      }
      bVar5 = EngineUtils::FindOrLoadAssetsByPath
                        (&local_38,&local_48,(uint)(this->bHasBlueprintClasses != false));
      if (bVar5) {
        uVar10 = 0;
        if (0 < local_48.ArrayNum) {
          lVar9 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar10 < local_48.ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              iVar6 = (*pcVar4)();
              return iVar6;
            }
            lVar2 = *(longlong *)(local_48.AllocatorInstance.Data + lVar9);
            if (lVar2 != 0) {
              pUVar3 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
              if (pUVar3 != (UClass *)0x0) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar3);
                }
                iVar8 = (int)pUVar3->_padding_;
                if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar8) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
                    &pUVar3->_padding_)) goto LAB_1480b67ce;
              }
              (**(code **)(this->_padding_ + 0x2b8))(this,lVar2);
              iVar6 = iVar6 + 1;
            }
LAB_1480b67ce:
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 8;
          } while ((int)uVar10 < local_48.ArrayNum);
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      iVar8 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < iVar8);
  }
  return iVar6;
}

// LoadBlueprintAssetDataFromPath @ 1480b6850

int __thiscall UObjectLibrary::LoadBlueprintAssetDataFromPath(UObjectLibrary *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x308))(this,&local_18,1);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return iVar1;
}

// LoadBlueprintAssetDataFromPaths @ 1480b68f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UObjectLibrary::LoadBlueprintAssetDataFromPaths
          (UObjectLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName FVar3;
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  longlong *plVar12;
  UClass *pUVar13;
  FValueId *pFVar14;
  FString *pFVar15;
  int iVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  UObjectLibrary *pUVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_378 [32];
  FKeyForward local_328;
  ForAnyElementType local_320;
  undefined8 local_318;
  uint local_310;
  FTopLevelAssetPath local_30c;
  uint local_2fc;
  FAssetTagValueRef_u_0 local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  FString local_2e0;
  UObjectLibrary *local_2d0;
  FTopLevelAssetPath local_2c8;
  FTopLevelAssetPath local_2b8;
  FString local_2a8;
  FName local_298;
  FString local_290;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FName local_268;
  FName local_260;
  FString local_258;
  TStringView<wchar_t> local_248;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_238;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e8;
  undefined8 local_1b0;
  void *local_1a8;
  ulonglong local_1a0;
  FARFilter local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar20 = 0;
  local_310 = 0;
  local_2d0 = this;
  pFVar10 = ::FName::FName(&local_268,L"AssetRegistry");
  FVar3 = *pFVar10;
  this_00 = FModuleManager::Get();
  pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
  if (this->bHasBlueprintClasses == false) {
    iVar8 = 0;
  }
  else {
    FARFilter::FARFilter(&local_198);
    pUVar13 = Z_Construct_UClass_UBlueprint_NoRegister();
    UStruct::GetStructPathName((UStruct *)pUVar13,&local_2c8);
    if (((local_198.ClassPaths.AllocatorInstance.Data <= &local_2c8) &&
        (&local_2c8 <
         (FTopLevelAssetPath *)
         (local_198.ClassPaths.AllocatorInstance.Data +
         (longlong)local_198.ClassPaths.ArrayMax * 0x10))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (local_198.ClassPaths.ArrayNum == local_198.ClassPaths.ArrayMax) {
      local_198.ClassPaths.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_198.ClassPaths.AllocatorInstance,&local_198.ClassPaths.ArrayMax);
    }
    iVar8 = local_198.ClassPaths.ArrayNum + 1;
    ((FTopLevelAssetPath *)
    ((longlong)local_198.ClassPaths.AllocatorInstance.Data +
    (longlong)local_198.ClassPaths.ArrayNum * 0x10))->PackageName = local_2c8.PackageName;
    ((FTopLevelAssetPath *)
    ((longlong)local_198.ClassPaths.AllocatorInstance.Data +
    (longlong)local_198.ClassPaths.ArrayNum * 0x10))->AssetName = local_2c8.AssetName;
    iVar16 = param_1->ArrayNum;
    uVar19 = uVar20;
    uVar21 = uVar20;
    local_198.ClassPaths.ArrayNum = iVar8;
    if (0 < iVar16) {
      do {
        uVar24 = (uint)uVar19;
        uVar25 = 0;
        if ((int)uVar24 < iVar16) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        pFVar22 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar22 + uVar21 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(pFVar22 + uVar21);
        }
        pFVar10 = ::FName::FName(&local_260,pwVar17);
        if (((local_198.PackagePaths.AllocatorInstance.Data <= pFVar10) &&
            (pFVar10 < (FName *)(local_198.PackagePaths.AllocatorInstance.Data +
                                (longlong)local_198.PackagePaths.ArrayMax * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        if (local_198.PackagePaths.ArrayNum == local_198.PackagePaths.ArrayMax) {
          local_198.PackagePaths.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_198.PackagePaths.AllocatorInstance,
                          &local_198.PackagePaths.ArrayMax);
        }
        iVar8 = local_198.PackagePaths.ArrayNum + 1;
        uVar19 = (ulonglong)(uVar24 + 1);
        uVar21 = uVar21 + 0x10;
        *(FName *)(local_198.PackagePaths.AllocatorInstance.Data +
                  (longlong)local_198.PackagePaths.ArrayNum * 8) = *pFVar10;
        iVar16 = param_1->ArrayNum;
        this = local_2d0;
        local_198.PackagePaths.ArrayNum = iVar8;
      } while ((int)(uVar24 + 1) < iVar16);
    }
    local_198.bRecursivePaths = this->bRecursivePaths;
    pTVar1 = &this->AssetDataList;
    local_198.bIncludeOnlyOnDiskAssets = this->bIncludeOnlyOnDiskAssets;
    DestructItems<FAssetData,int>
              ((FAssetData *)(pTVar1->AllocatorInstance).Data,(this->AssetDataList).ArrayNum);
    piVar2 = &(this->AssetDataList).ArrayMax;
    (this->AssetDataList).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    (**(code **)(*plVar12 + 0x50))(plVar12,&local_198,pTVar1,1);
    pUVar13 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
    pUVar23 = this;
    if (pUVar13 != (UClass *)0x0) {
      local_238._0_8_ = 0;
      local_238._8_8_ = 0;
      local_238._32_8_ = 0;
      local_238._40_4_ = 0;
      local_238._44_4_ = 0x80;
      local_238._48_4_ = 0xffffffff;
      local_238._52_4_ = 0;
      local_1f8 = (undefined1 *)0x0;
      local_1f0 = 0;
      local_320.Data = (FScriptContainerElement *)0x0;
      local_318 = 0;
      UStruct::GetStructPathName((UStruct *)pUVar13,&local_2b8);
      if (((local_320.Data <= &local_2b8) &&
          (&local_2b8 < (FTopLevelAssetPath *)(local_320.Data + (longlong)local_318._4_4_ * 0x10)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar8 = (int)local_318;
      if ((int)local_318 == local_318._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&local_320,(int *)((longlong)&local_318 + 4));
      }
      local_1b0 = 0;
      local_318 = CONCAT44(local_318._4_4_,iVar8 + 1);
      local_1a0 = 0;
      local_1e8._16_8_ = 0;
      local_1e8._24_8_ = 0;
      local_1e8._0_8_ = 0;
      pFVar22 = local_320.Data + (longlong)iVar8 * 0x10;
      *(uint *)pFVar22 = local_2b8.PackageName.ComparisonIndex.Value;
      *(uint *)(pFVar22 + 4) = local_2b8.PackageName.Number;
      *(uint *)(pFVar22 + 8) = local_2b8.AssetName.ComparisonIndex.Value;
      *(uint *)(pFVar22 + 0xc) = local_2b8.AssetName.Number;
      local_1e8._8_8_ = 0;
      local_1e8._32_8_ = 0;
      local_1e8._40_4_ = 0;
      local_1e8._44_4_ = 0x80;
      local_1e8._48_4_ = 0xffffffff;
      local_1e8._52_4_ = 0;
      local_1a8 = (void *)0x0;
      (**(code **)(*plVar12 + 0x140))(plVar12,&local_320,&local_1e8,&local_238);
      local_1a0 = local_1a0 & 0xffffffff00000000;
      if (local_1a8 != (void *)0x0) {
        FMemory::Free(local_1a8);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1e8);
      uVar25 = (this->AssetDataList).ArrayNum - 1;
      if (-1 < (int)uVar25) {
        local_2f0 = (longlong)(int)uVar25;
        lVar26 = local_2f0 * 0x68;
        do {
          local_310 = ~uVar25;
          local_2fc = local_310 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar25 < (this->AssetDataList).ArrayNum) {
            uVar24 = local_2fc;
          }
          local_2e8 = lVar26;
          if ((uVar24 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          pFVar22 = (pTVar1->AllocatorInstance).Data;
          if (((byte)pFVar22[lVar26 + 0x38] & 1) == 0) {
            pTVar4 = *(TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> **)
                      (pFVar22 + lVar26 + 0x38);
            if (pTVar4 != (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)0x0) {
              local_298 = FBlueprintTags::ParentClassPath;
              uVar24 = Algo::
                       BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                                 (pTVar4,&local_298,local_328,(FNameFastLess)local_328);
              if (uVar24 == 0xffffffff) goto LAB_1480b6ed4;
              uVar9 = 0;
              if ((int)uVar24 < pTVar4->ArrayNum) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              local_2f8.Loose =
                   (FString *)
                   ((pTVar4->AllocatorInstance).Data + ((longlong)(int)uVar24 * 3 + 1) * 8);
              goto LAB_1480b6ed6;
            }
            local_2f8.Loose = (FString *)0x0;
LAB_1480b6f01:
            uVar24 = (uint)uVar20 | 2;
            local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.Data.ArrayNum = 0;
            local_2a8.Data.ArrayMax = 0;
            pFVar15 = &local_2a8;
          }
          else {
            pFVar14 = FixedTagPrivate::FMapHandle::FindValue
                                ((FMapHandle *)(pFVar22 + lVar26 + 0x38),
                                 FBlueprintTags::ParentClassPath);
            if (pFVar14 == (FValueId *)0x0) {
LAB_1480b6ed4:
              local_2f8.Loose = (FString *)0x0;
            }
            else {
              local_2f8.Bits =
                   ((ulonglong)*(ushort *)(pFVar22 + lVar26 + 0x38) & 0xfffffffffffffffc |
                   0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar14;
            }
LAB_1480b6ed6:
            if ((FScriptContainerElement *)local_2f8.Loose == (FScriptContainerElement *)0x0)
            goto LAB_1480b6f01;
            uVar24 = (uint)uVar20 | 1;
            pFVar15 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_2f8.Fixed,&local_258);
          }
          uVar20 = (ulonglong)uVar24;
          local_2e0.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e0.Data.ArrayNum = (pFVar15->Data).ArrayNum;
          local_2e0.Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
          if (((uVar24 & 2) != 0) &&
             (uVar20 = (ulonglong)(uVar24 & 0xfffffffd),
             local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          if (((uVar20 & 1) != 0) &&
             (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffe),
             local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (local_2e0.Data.ArrayNum < 2) {
LAB_1480b707c:
            uVar24 = 0;
            if ((int)uVar25 < (this->AssetDataList).ArrayNum) {
              uVar24 = local_2fc;
            }
            if ((uVar24 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            lVar26 = local_2e8;
            pFVar22 = (pTVar1->AllocatorInstance).Data + local_2e8;
            if (*(void **)(pFVar22 + 0x58) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar22 + 0x58));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar22 + 0x48));
            FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                      ((FAssetDataTagMapSharedView *)(pFVar22 + 0x38));
            iVar8 = local_310 + (this->AssetDataList).ArrayNum;
            if (iVar8 != 0) {
              memmove(pFVar22,pFVar22 + 0x68,(longlong)iVar8 * 0x68);
            }
            piVar2 = &(this->AssetDataList).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,&pTVar1->AllocatorInstance,(this->AssetDataList).ArrayNum,
                       &(this->AssetDataList).ArrayMax);
          }
          else {
            FPackageName::ExportTextPathToObjectPath(&local_290,&local_2e0);
            local_278 = local_290.Data.AllocatorInstance.Data;
            local_30c.PackageName.ComparisonIndex.Value = 0;
            local_30c.PackageName.Number = 0;
            local_30c.AssetName.ComparisonIndex.Value = 0;
            local_30c.AssetName.Number = 0;
            iStack_270 = local_290.Data.ArrayNum + -1;
            if (local_290.Data.ArrayNum == 0) {
              iStack_270 = 0;
            }
            local_248._12_4_ = uStack_26c;
            local_248.Size = iStack_270;
            local_248.DataPtr = (wchar_t *)local_290.Data.AllocatorInstance.Data;
            FTopLevelAssetPath::TrySetPath(&local_30c,&local_248);
            FVar6 = local_30c.AssetName;
            uVar24 = ::GetTypeHash(local_30c.AssetName.ComparisonIndex.Value);
            FVar3 = local_30c.PackageName;
            uVar9 = ::GetTypeHash(local_30c.PackageName.ComparisonIndex.Value);
            uVar9 = uVar9 + FVar3.Number;
            if (local_238._8_4_ != local_238._52_4_) {
              puVar18 = local_200;
              if (local_1f8 != (undefined1 *)0x0) {
                puVar18 = local_1f8;
              }
              iVar8 = *(int *)(puVar18 +
                              (ulonglong)
                              (local_1f0 - 1U &
                              (uVar9 * 0x40 + -0x61c88647 + uVar24 + FVar6.Number + (uVar9 >> 2) ^
                              uVar9)) * 4);
              while (iVar8 != -1) {
                lVar26 = (longlong)iVar8;
                if ((*(FName *)(local_238._0_8_ + lVar26 * 0x18) == local_30c.PackageName) &&
                   (*(FName *)(local_238._0_8_ + 8 + lVar26 * 0x18) == local_30c.AssetName))
                goto LAB_1480b7063;
                iVar8 = *(int *)(local_238._0_8_ + 0x10 + lVar26 * 0x18);
              }
            }
            iVar8 = -1;
LAB_1480b7063:
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            lVar26 = local_2e8;
            if (iVar8 == -1) goto LAB_1480b707c;
          }
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          lVar26 = lVar26 + -0x68;
          local_2f0 = local_2f0 + -1;
          uVar25 = uVar25 - 1;
          pUVar23 = local_2d0;
          local_2e8 = lVar26;
        } while (-1 < (int)uVar25);
      }
      if ((FTopLevelAssetPath *)local_320.Data != (FTopLevelAssetPath *)0x0) {
        FMemory::Free(local_320.Data);
      }
      local_1f0 = 0;
      if (local_1f8 != (undefined1 *)0x0) {
        FMemory::Free(local_1f8);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_238);
    }
    iVar8 = (pUVar23->AssetDataList).ArrayNum;
    FARFilter::~FARFilter(&local_198);
  }
  return iVar8;
}

// LoadBlueprintsFromPath @ 1480b71e0

int __thiscall UObjectLibrary::LoadBlueprintsFromPath(UObjectLibrary *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x2e8))(this,&local_18);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return iVar1;
}

// LoadBlueprintsFromPaths @ 1480b7270

int __thiscall
UObjectLibrary::LoadBlueprintsFromPaths
          (UObjectLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  uVar9 = 0;
  iVar5 = 0;
  if ((this->bHasBlueprintClasses == false) || (this->bIsFullyLoaded != false)) {
    return 0;
  }
  this->bIsFullyLoaded = true;
  iVar7 = param_1->ArrayNum;
  uVar13 = uVar9;
  uVar12 = uVar9;
  if (0 < iVar7) {
    do {
      uVar10 = 0;
      uVar14 = (uint)uVar12;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      uVar4 = 0;
      if ((int)uVar14 < iVar7) {
        uVar4 = ~uVar14 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = *(int *)(pFVar1 + uVar13 + 8);
      lVar8 = (longlong)local_38.Data.ArrayNum;
      _Src = *(void **)(pFVar1 + uVar13);
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
      }
      bVar3 = EngineUtils::FindOrLoadAssetsByPath(&local_38,&local_48,ATL_Class);
      if ((bVar3) && (uVar12 = uVar10, 0 < local_48.ArrayNum)) {
        do {
          uVar11 = (uint)uVar12;
          uVar4 = 0;
          if ((int)uVar11 < local_48.ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          lVar8 = *(longlong *)(local_48.AllocatorInstance.Data + uVar10);
          if (lVar8 != 0) {
            pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
            iVar5 = (int)pUVar6->_padding_;
            if ((iVar5 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
                &pUVar6->_padding_)) {
              pUVar6 = (this->ObjectBaseClass).field0_0x0.DebugPtr;
              if (pUVar6 != (UClass *)0x0) {
                iVar5 = (int)pUVar6->_padding_;
                if ((*(int *)(lVar8 + 0x38) < iVar5) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8)
                    != &pUVar6->_padding_)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_1480b7459;
              }
              (**(code **)(this->_padding_ + 0x2b8))(this,lVar8);
              uVar9 = (ulonglong)((int)uVar9 + 1);
            }
          }
LAB_1480b7459:
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar10 = uVar10 + 8;
        } while ((int)(uVar11 + 1) < local_48.ArrayNum);
      }
      iVar5 = (int)uVar9;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      iVar7 = param_1->ArrayNum;
      uVar13 = uVar13 + 0x10;
      uVar12 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < iVar7);
  }
  return iVar5;
}

// RemoveObject @ 1480ca2b0

bool __thiscall UObjectLibrary::RemoveObject(UObjectLibrary *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  UObject *pUVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18;
  UObject *local_48;
  FWeakObjectPtr local_40;
  
  if (this->bUseWeakReferences == false) {
    local_48 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    pFVar1 = (this->Objects).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)(this->Objects).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar9 = (this->Objects).ArrayNum;
    if (iVar9 != 0) {
      pFVar1 = (this->Objects).AllocatorInstance.Data;
      iVar12 = 0;
      lVar8 = 0;
      bVar4 = *(UObject **)pFVar1 != local_48;
      pUVar7 = local_48;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar8 = lVar8 + 1;
          iVar11 = iVar11 + 1;
          if (iVar9 <= lVar8) break;
        } while (bVar4 == (*(UObject **)(pFVar1 + lVar8 * 8) != pUVar7));
        if (bVar4 != false) {
          if (iVar12 != iVar10) {
            memmove(pFVar1 + (longlong)iVar12 * 8,pFVar1 + (longlong)iVar10 * 8,
                    (longlong)(iVar11 - iVar10) << 3);
            pUVar7 = local_48;
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar10 = iVar11;
      } while (lVar8 < iVar9);
      (this->Objects).ArrayNum = iVar12;
      if (iVar9 != iVar12) {
LAB_1480ca57c:
        TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   &this->OnObjectRemovedEvent,param_1);
        return true;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    iVar9 = 0;
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res18);
    pFVar2 = (FWeakObjectPtr *)(this->WeakObjects).AllocatorInstance.Data;
    if (((pFVar2 <= &local_40) && (&local_40 < pFVar2 + (this->WeakObjects).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar10 = (this->WeakObjects).ArrayNum;
    if (iVar10 != 0) {
      pFVar1 = (this->WeakObjects).AllocatorInstance.Data;
      bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar1,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_40);
      bVar4 = !bVar4;
      iVar12 = iVar9;
      do {
        iVar11 = iVar12;
        do {
          iVar11 = iVar11 + 1;
          if (iVar10 <= iVar11) break;
          bVar6 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)
                             (pFVar1 + (longlong)iVar11 * 8),
                             (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_40);
        } while (bVar4 == !bVar6);
        if (bVar4 != false) {
          if (iVar9 != iVar12) {
            memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar12 * 8,
                    (longlong)(iVar11 - iVar12) << 3);
          }
          iVar9 = iVar9 + (iVar11 - iVar12);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar12 = iVar11;
      } while (iVar11 < iVar10);
      (this->WeakObjects).ArrayNum = iVar9;
      if (iVar10 != iVar9) goto LAB_1480ca57c;
    }
  }
  return false;
}

// StaticRegisterNativesUObjectLibrary @ 1480d5760

void __cdecl UObjectLibrary::StaticRegisterNativesUObjectLibrary(void)

{
  return;
}

// UseWeakReferences @ 1480e2ed0

void __thiscall UObjectLibrary::UseWeakReferences(UObjectLibrary *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18;
  TObjectPtr<UObject>_u_0 local_res20;
  
  if (param_1 != this->bUseWeakReferences) {
    uVar7 = 0;
    this->bUseWeakReferences = param_1;
    if (param_1) {
      pTVar8 = &this->Objects;
      uVar9 = uVar7;
      if (0 < (this->Objects).ArrayNum) {
        do {
          uVar6 = (uint)uVar7;
          uVar3 = 0;
          if ((int)uVar6 < (this->Objects).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(longlong *)((pTVar8->AllocatorInstance).Data + uVar9) != 0) {
            uVar3 = 0;
            if ((int)uVar6 < (this->Objects).ArrayNum) {
              uVar3 = ~uVar6 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar4 = *(UObject **)((pTVar8->AllocatorInstance).Data + uVar9);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar4 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar4);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar4);
              }
            }
            local_res8[0].ObjectIndex = 0;
            local_res8[0].ObjectSerialNumber = 0;
            local_res18 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
            FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
            TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                      (&this->WeakObjects,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res8);
          }
          uVar7 = (ulonglong)(uVar6 + 1);
          uVar9 = uVar9 + 8;
        } while ((int)(uVar6 + 1) < (this->Objects).ArrayNum);
      }
      piVar5 = &(this->Objects).ArrayMax;
      (this->Objects).ArrayNum = 0;
      if (*piVar5 == 0) {
        return;
      }
      uVar3 = 8;
    }
    else {
      if (0 < (this->WeakObjects).ArrayNum) {
        do {
          uVar6 = (uint)uVar7;
          uVar3 = 0;
          if ((int)uVar6 < (this->WeakObjects).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((this->WeakObjects).AllocatorInstance.Data +
                                       (longlong)(int)uVar6 * 8));
          if (pUVar4 != (UObject *)0x0) {
            uVar3 = 0;
            if ((int)uVar6 < (this->WeakObjects).ArrayNum) {
              uVar3 = ~uVar6 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_res20.DebugPtr =
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((this->WeakObjects).AllocatorInstance.Data +
                                     (longlong)(int)uVar6 * 8));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res20.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res20.DebugPtr);
            }
            TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<UObject>_>
                      (&this->Objects,(TObjectPtr<UObject> *)&local_res20.ObjectPtr);
          }
          uVar7 = (ulonglong)(uVar6 + 1);
        } while ((int)(uVar6 + 1) < (this->WeakObjects).ArrayNum);
      }
      pTVar8 = (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&this->WeakObjects;
      piVar5 = &(this->WeakObjects).ArrayMax;
      (this->WeakObjects).ArrayNum = 0;
      if (*piVar5 == 0) {
        return;
      }
      uVar3 = 4;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,uVar3,0,&pTVar8->AllocatorInstance,0,piVar5);
  }
  return;
}

