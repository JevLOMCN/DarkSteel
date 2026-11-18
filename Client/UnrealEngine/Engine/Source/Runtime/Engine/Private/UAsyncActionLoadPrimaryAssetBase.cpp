// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14758c980

UClass * __cdecl UAsyncActionLoadPrimaryAssetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetBase",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncActionLoadPrimaryAssetBase>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton;
}

// UAsyncActionLoadPrimaryAssetBase @ 1475a72f0

UAsyncActionLoadPrimaryAssetBase * __thiscall
UAsyncActionLoadPrimaryAssetBase::UAsyncActionLoadPrimaryAssetBase
          (UAsyncActionLoadPrimaryAssetBase *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  (this->AssetsToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetsToLoad).ArrayNum = 0;
  (this->AssetsToLoad).ArrayMax = 0;
  (this->LoadBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadBundles).ArrayNum = 0;
  (this->LoadBundles).ArrayMax = 0;
  (this->OldBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldBundles).ArrayNum = 0;
  (this->OldBundles).ArrayMax = 0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAsyncActionLoadPrimaryAssetBase @ 1475a7340

UAsyncActionLoadPrimaryAssetBase * __thiscall
UAsyncActionLoadPrimaryAssetBase::UAsyncActionLoadPrimaryAssetBase
          (UAsyncActionLoadPrimaryAssetBase *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  (this->AssetsToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetsToLoad).ArrayNum = 0;
  (this->AssetsToLoad).ArrayMax = 0;
  (this->LoadBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadBundles).ArrayNum = 0;
  (this->LoadBundles).ArrayMax = 0;
  (this->OldBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldBundles).ArrayNum = 0;
  (this->OldBundles).ArrayMax = 0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UAsyncActionLoadPrimaryAssetBase @ 1475aa790

void __thiscall
UAsyncActionLoadPrimaryAssetBase::~UAsyncActionLoadPrimaryAssetBase
          (UAsyncActionLoadPrimaryAssetBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->OldBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetsToLoad).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 1475b04f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAsyncActionLoadPrimaryAssetBase::Activate(UAsyncActionLoadPrimaryAssetBase *this)

{
  EAssetManagerOperation EVar1;
  FStreamableHandle *this_00;
  code *pcVar2;
  bool bVar3;
  UAssetManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UAsyncActionLoadPrimaryAssetBase *local_res8;
  uint in_stack_fffffffffffffe90;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined4 local_128;
  undefined4 local_124;
  char *local_120;
  char *local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  char *local_e0;
  char *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  char *local_a0;
  char *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40 [8];
  TReferenceControllerBase<1> *local_38;
  undefined1 local_30 [8];
  TReferenceControllerBase<1> *local_28;
  
  if (((GEngine == (UEngine *)0x0) ||
      ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAssetManager::IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncActionLoadPrimaryAsset.cpp"
                         ,0xb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = UAssetManager::Get();
  EVar1 = this->Operation;
  if (EVar1 == Load) {
    local_78 = 0;
    local_98 = "void __cdecl UAsyncActionLoadPrimaryAssetBase::Activate(void)";
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0x10;
    local_a4 = 0x18;
    local_a0 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncActionLoadPrimaryAsset.cpp"
    ;
    puVar5 = (undefined8 *)
             (**(code **)(pUVar4->_padding_ + 0x378))
                       (pUVar4,local_30,&this->AssetsToLoad,&this->LoadBundles,&local_88,0,&local_a8
                       );
    if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)puVar5) {
      (this->LoadHandle).Object = (FStreamableHandle *)*puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LoadHandle).SharedReferenceCount,(FSharedReferencer<1> *)(puVar5 + 1));
    }
  }
  else if (EVar1 == ChangeBundleStateMatching) {
    local_b8 = 0;
    local_d8 = "void __cdecl UAsyncActionLoadPrimaryAssetBase::Activate(void)";
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0x13;
    local_e4 = 0x18;
    local_e0 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncActionLoadPrimaryAsset.cpp"
    ;
    puVar5 = (undefined8 *)
             (**(code **)(pUVar4->_padding_ + 0x3d0))
                       (pUVar4,local_40,&this->LoadBundles,&this->OldBundles,&local_c8,0,&local_e8);
    local_28 = local_38;
    if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)puVar5) {
      (this->LoadHandle).Object = (FStreamableHandle *)*puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LoadHandle).SharedReferenceCount,(FSharedReferencer<1> *)(puVar5 + 1));
      local_28 = local_38;
    }
  }
  else {
    if (EVar1 != ChangeBundleStateList) goto LAB_1475b06ff;
    local_f8 = 0;
    local_118 = "void __cdecl UAsyncActionLoadPrimaryAssetBase::Activate(void)";
    local_108 = 0;
    local_100 = 0;
    local_128 = 0x16;
    local_124 = 0x18;
    local_120 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncActionLoadPrimaryAsset.cpp"
    ;
    puVar5 = (undefined8 *)
             (**(code **)(pUVar4->_padding_ + 0x3c0))
                       (pUVar4,local_50,&this->AssetsToLoad,&this->LoadBundles,&this->OldBundles,
                        in_stack_fffffffffffffe90 & 0xffffff00,&local_108,0,&local_128);
    local_28 = local_48;
    if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)puVar5) {
      (this->LoadHandle).Object = (FStreamableHandle *)*puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LoadHandle).SharedReferenceCount,(FSharedReferencer<1> *)(puVar5 + 1));
      local_28 = local_48;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
LAB_1475b06ff:
  this_00 = (this->LoadHandle).Object;
  if ((this_00 == (FStreamableHandle *)0x0) || (this_00->bLoadCompleted != false)) {
    (**(code **)(this->_padding_ + 0x2d0))(this);
  }
  else {
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_140;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncActionLoadPrimaryAssetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
      puVar5[4] = _vcall__720__flat______;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    FStreamableHandle::BindCompleteDelegate
              (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_148);
  }
  return;
}

// GetCurrentlyLoadedAssets @ 1475d3660

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
UAsyncActionLoadPrimaryAssetBase::GetCurrentlyLoadedAssets
          (UAsyncActionLoadPrimaryAssetBase *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UAssetManager *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  if ((GEngine == (UEngine *)0x0) ||
     ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UAssetManager::IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncActionLoadPrimaryAsset.cpp"
                       ,0x2f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar6 = UAssetManager::Get();
  iVar1 = (this->AssetsToLoad).ArrayNum;
  pFVar8 = (this->AssetsToLoad).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AssetsToLoad).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPrimaryAssetId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_28[0] = (**(code **)(pUVar6->_padding_ + 0x318))(pUVar6,pFVar8);
    if (local_28[0] != 0) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// GetPrivateStaticClass @ 1475db720

UClass * __cdecl UAsyncActionLoadPrimaryAssetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetBase",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncActionLoadPrimaryAssetBase>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton;
}

// HandleLoadCompleted @ 1475defc0

void __thiscall
UAsyncActionLoadPrimaryAssetBase::HandleLoadCompleted(UAsyncActionLoadPrimaryAssetBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->LoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x0001475df00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase @ 1475fec80

void __cdecl
UAsyncActionLoadPrimaryAssetBase::StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(void)

{
  return;
}

