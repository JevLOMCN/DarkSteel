// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// StaticClass @ 14ec469e0

UClass * __cdecl UInAppPurchaseQueryCallbackProxy2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseQueryCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseQueryCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseQueryCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton;
}

// UInAppPurchaseQueryCallbackProxy2 @ 14ec53d50

UInAppPurchaseQueryCallbackProxy2 * __thiscall
UInAppPurchaseQueryCallbackProxy2::UInAppPurchaseQueryCallbackProxy2
          (UInAppPurchaseQueryCallbackProxy2 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseQueryCallbackProxy2__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedProductInformation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedProductInformation).ArrayNum = 0;
  (this->SavedProductInformation).ArrayMax = 0;
  return this;
}

// UInAppPurchaseQueryCallbackProxy2 @ 14ec53da0

UInAppPurchaseQueryCallbackProxy2 * __thiscall
UInAppPurchaseQueryCallbackProxy2::UInAppPurchaseQueryCallbackProxy2
          (UInAppPurchaseQueryCallbackProxy2 *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseQueryCallbackProxy2__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedProductInformation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedProductInformation).ArrayNum = 0;
  (this->SavedProductInformation).ArrayMax = 0;
  return this;
}

// ~UInAppPurchaseQueryCallbackProxy2 @ 14ec57100

void __thiscall
UInAppPurchaseQueryCallbackProxy2::~UInAppPurchaseQueryCallbackProxy2
          (UInAppPurchaseQueryCallbackProxy2 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseQueryCallbackProxy2__6B_;
  DestructItems<FOnlineProxyStoreOffer,int>
            ((FOnlineProxyStoreOffer *)(this->SavedProductInformation).AllocatorInstance.Data,
             (this->SavedProductInformation).ArrayNum);
  pFVar1 = (this->SavedProductInformation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14ec60d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseQueryCallbackProxy2::BeginDestroy(UInAppPurchaseQueryCallbackProxy2 *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UInAppPurchaseQueryCallbackProxy2 **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CreateProxyObjectForInAppPurchaseQuery @ 14ec6a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseQueryCallbackProxy2 * __cdecl
UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery
          (APlayerController *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInAppPurchaseQueryCallbackProxy2 *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UInAppPurchaseQueryCallbackProxy2 *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerQuery(this,param_1,param_2);
  return this;
}

// CreateProxyProductInformation @ 14ec6a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseQueryCallbackProxy2::CreateProxyProductInformation
          (UInAppPurchaseQueryCallbackProxy2 *this,
          TArray<TSharedRef<FOnlineStoreOffer,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  ITextData *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [4];
  uint local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  undefined1 local_150 [8];
  TArray<TSharedRef<FOnlineStoreOffer,1>,TSizedDefaultAllocator<32>_> *local_148;
  undefined1 local_138 [152];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_180 = 0;
  local_148 = param_1;
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation",Log,
             (FName)0x0);
  DestructItems<FOnlineProxyStoreOffer,int>
            ((FOnlineProxyStoreOffer *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_184 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_184;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar13 = pFVar14 + uVar12 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar12) {
      local_188[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FOnlineStoreOffer,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_188);
    }
    if (pFVar14 == pFVar13) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    lVar3 = *(longlong *)pFVar14;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_178 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation In Loop",
               Log,(FName)0x0);
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_4_ = 0;
    local_138._12_4_ = 0;
    FText::FText((FText *)(local_138 + 0x10));
    FText::FText((FText *)(local_138 + 0x20));
    FText::FText((FText *)(local_138 + 0x30));
    FText::FText((FText *)(local_138 + 0x40));
    local_138._80_4_ = 0;
    FText::FText((FText *)(local_138 + 0x58));
    local_138._104_4_ = 0;
    local_138._112_8_ = (FScriptContainerElement *)0x0;
    local_138._128_8_ = 0;
    local_138._136_8_ = 0;
    local_138._120_4_ = 0;
    local_138._124_4_ = 0;
    local_138[0x90] = NotOnSale;
    local_a0.Elements._0_8_ = 0;
    local_a0.Elements._8_8_ = 0;
    local_a0.Elements._32_8_ = 0;
    local_a0.Elements._40_8_ = uVar7;
    local_a0.Elements._48_8_ = uVar8;
    local_a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a0.HashSize = 0;
    iVar11 = *(int *)(lVar3 + 0x10) + -1;
    if (*(int *)(lVar3 + 0x10) == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange((FString *)local_138,*(wchar_t **)(lVar3 + 8),iVar11);
    uVar9 = local_138._16_8_;
    pIVar4 = *(ITextData **)(lVar3 + 0x18);
    if ((ITextData *)local_138._16_8_ != pIVar4) {
      local_138._16_8_ = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_160);
      }
      if ((ITextData *)uVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar9 + 0x10))(uVar9);
      }
    }
    uVar9 = local_138._32_8_;
    local_138._24_4_ = *(uint *)(lVar3 + 0x20);
    pIVar4 = *(ITextData **)(lVar3 + 0x28);
    if ((ITextData *)local_138._32_8_ != pIVar4) {
      local_138._32_8_ = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_15c);
      }
      if ((ITextData *)uVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar9 + 0x10))(uVar9);
      }
    }
    uVar9 = local_138._48_8_;
    local_138._40_4_ = *(uint *)(lVar3 + 0x30);
    pIVar4 = *(ITextData **)(lVar3 + 0x38);
    if ((ITextData *)local_138._48_8_ != pIVar4) {
      local_138._48_8_ = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_158);
      }
      if ((ITextData *)uVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar9 + 0x10))(uVar9);
      }
    }
    uVar9 = local_138._64_8_;
    local_138._56_4_ = *(uint *)(lVar3 + 0x40);
    pIVar4 = *(ITextData **)(lVar3 + 0x48);
    if ((ITextData *)local_138._64_8_ != pIVar4) {
      local_138._64_8_ = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_154);
      }
      if ((ITextData *)uVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar9 + 0x10))(uVar9);
      }
    }
    uVar9 = local_138._88_8_;
    local_138._72_4_ = *(uint *)(lVar3 + 0x50);
    local_138._80_4_ = *(int *)(lVar3 + 0x58);
    pIVar4 = *(ITextData **)(lVar3 + 0x60);
    if ((ITextData *)local_138._88_8_ != pIVar4) {
      local_138._88_8_ = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_150);
      }
      if ((ITextData *)uVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar9 + 0x10))(uVar9);
      }
    }
    local_138._96_4_ = *(uint *)(lVar3 + 0x68);
    local_138._104_4_ = *(int *)(lVar3 + 0x70);
    iVar11 = *(int *)(lVar3 + 0x80) + -1;
    if (*(int *)(lVar3 + 0x80) == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange((FString *)(local_138 + 0x70),*(wchar_t **)(lVar3 + 0x78),iVar11);
    local_138._128_8_ = *(long64 *)(lVar3 + 0x88);
    local_138._136_8_ = *(long64 *)(lVar3 + 0x90);
    local_138[0x90] = *(EOnlineProxyStoreOfferDiscountType *)(lVar3 + 0x98);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(local_138 + 0x98),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(lVar3 + 0xa0));
    local_170 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Adding Product",Log,(FName)0x0);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_138) &&
       ((FScriptContainerElement *)local_138 < pFVar5 + (longlong)*piVar1 * 0xe8)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8e8,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar11 + 1;
    FOnlineProxyStoreOffer::FOnlineProxyStoreOffer
              ((FOnlineProxyStoreOffer *)
               ((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0xe8),
               (FOnlineProxyStoreOffer *)local_138);
    local_168 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Done Adding Product",Log,
               (FName)0x0);
    local_a0.HashSize = 0;
    if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a0.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_138 + 0x98));
    if ((FScriptContainerElement *)local_138._112_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._112_8_);
    }
    if ((ITextData *)local_138._88_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_138._88_8_ + 0x10))();
    }
    if ((ITextData *)local_138._64_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_138._64_8_ + 0x10))();
    }
    if ((ITextData *)local_138._48_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_138._48_8_ + 0x10))();
    }
    if ((ITextData *)local_138._32_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_138._32_8_ + 0x10))();
    }
    if ((ITextData *)local_138._16_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_138._16_8_ + 0x10))();
    }
    if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar12 = (ulonglong)local_184;
    pFVar14 = pFVar14 + 0x10;
    param_1 = local_148;
  }
  return;
}

// GetPrivateStaticClass @ 14ec77fd0

UClass * __cdecl UInAppPurchaseQueryCallbackProxy2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseQueryCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseQueryCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseQueryCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton;
}

// OnInAppPurchaseRead @ 14ec87fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead
          (UInAppPurchaseQueryCallbackProxy2 *this,bool param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FModuleManager *this_00;
  FName *pFVar6;
  FOnlineSubsystemModule *pFVar7;
  longlong *plVar8;
  UObject *pUVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_14_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead>
  FVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TArray<TSharedRef<FOnlineStoreOffer,1>,TSizedDefaultAllocator<32>_> local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 *local_78;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Start",Log,(FName)0x0);
  this->bSavedWasSuccessful = false;
  if (param_1) {
    local_c0 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - WasSuccessful",Log,
               (FName)0x0);
    local_b8 = 0;
    this_00 = FModuleManager::Get();
    pFVar6 = ::FName::FName(&local_38,"OnlineSubsystem");
    bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar6);
    if (bVar4) {
      pFVar6 = ::FName::FName(&local_30,"OnlineSubsystem");
      pFVar7 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar6);
      cVar5 = (**(code **)(pFVar7->_padding_ + 0x70))(pFVar7,0);
      if (cVar5 != '\0') {
        local_b0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                          ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
          _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pFVar7 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                           (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                            ::__l2::OnlineSubsystemModuleName);
        plVar8 = (longlong *)(**(code **)(pFVar7->_padding_ + 0x50))(pFVar7,local_b0);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x90))(plVar8,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_a8 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Interface is good"
                       ,Log,(FName)0x0);
            local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d0.ArrayNum = 0;
            local_d0.ArrayMax = 0;
            local_a0 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Getting Cached Offers"
                       ,Log,(FName)0x0);
            if ((local_88 == (longlong *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (**(code **)(*local_88 + 0x48))(local_88,&local_d0);
            local_98 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Converting to proxy store offer"
                       ,Log,(FName)0x0);
            CreateProxyProductInformation(this,&local_d0,&this->SavedProductInformation);
            local_90 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Done",Log,
                       (FName)0x0);
            this->bSavedWasSuccessful = true;
            DestructItems<TSharedRef<FOnlineStoreOffer,1>,int>
                      ((TSharedRef<FOnlineStoreOffer,1> *)local_d0.AllocatorInstance.Data,
                       local_d0.ArrayNum);
            if ((TSharedRef<FOnlineStoreOffer,1> *)local_d0.AllocatorInstance.Data !=
                (TSharedRef<FOnlineStoreOffer,1> *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
        }
      }
    }
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->WorldPtr).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_14_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead>
           )0x0) {
        pFVar6 = ::FName::FName(&local_28,"STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead,*pFVar6,
                   L"FSimpleDelegateGraphTask.DelayInAppPurchaseRead","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar10 = StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_14_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead>
         )0x0) {
      pFVar6 = ::FName::FName(&local_20,"STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead");
      FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_14_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRead,*pFVar6,
                            L"FSimpleDelegateGraphTask.DelayInAppPurchaseRead",
                            "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                            true,ST_int64,true,false,MCR_Invalid);
    }
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_58);
    local_40 = &local_e0;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead'::`14'::<lambda_1>_>
                  ::_vftable_;
      puVar11[3] = this;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_78,
               (TStatIdData *)&local_e8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)FVar10,MainQueue);
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_78)(local_78,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_70);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  return;
}

// OnInAppPurchaseRead_Delayed @ 14ec88480

void __thiscall
UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead_Delayed
          (UInAppPurchaseQueryCallbackProxy2 *this)

{
  longlong lVar1;
  
  lVar1 = 0x28;
  if (this->bSavedWasSuccessful == false) {
    lVar1 = 0x40;
  }
  FInAppPurchaseQuery2Result::Broadcast
            ((FInAppPurchaseQuery2Result *)((longlong)&this->_padding_ + lVar1),
             &this->SavedProductInformation);
  return;
}

// StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2 @ 14ec99890

void __cdecl
UInAppPurchaseQueryCallbackProxy2::StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerQuery @ 14ec9e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInAppPurchaseQueryCallbackProxy2::TriggerQuery
          (UInAppPurchaseQueryCallbackProxy2 *this,APlayerController *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FModuleManager *this_00;
  FName *pFVar6;
  FOnlineSubsystemModule *pFVar7;
  IOnlineSubsystem *pIVar8;
  ULocalPlayer *this_01;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined1 auStack_198 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  FDelegateAllocation local_170;
  FWeakObjectPtr local_160;
  undefined8 local_158;
  FName local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  undefined8 local_100;
  UWorld *local_f8;
  UInAppPurchaseQueryCallbackProxy2 *local_f0;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FName local_b0;
  FName local_a8;
  TSharedPtr<FUniqueNetId_const_,1> local_a0;
  FString local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_100 = 0;
  bVar3 = true;
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_100);
  (this->WorldPtr).WeakPtr = local_160;
  if (param_1 == (APlayerController *)0x0) {
    return;
  }
  local_f8 = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_f8);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_f8);
  if (param_1->_padding_ == 0) {
    local_120 = 0;
    pwVar12 = L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid player state";
  }
  else {
    local_158 = 0;
    this_00 = FModuleManager::Get();
    pFVar6 = ::FName::FName(&local_b0,"OnlineSubsystem");
    bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar6);
    if (bVar4) {
      pFVar6 = ::FName::FName(&local_a8,"OnlineSubsystem");
      pFVar7 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar6);
      cVar5 = (**(code **)(pFVar7->_padding_ + 0x70))(pFVar7,0);
      if (cVar5 != '\0') {
        local_150.ComparisonIndex.Value = 0;
        local_150.Number = 0;
        pIVar8 = IOnlineSubsystem::Get(&local_150);
        if (pIVar8 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar8->_padding_ + 0x90))(pIVar8,&local_110);
          if (local_110 == (longlong *)0x0) {
            local_130 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - In App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
          }
          else {
            local_148 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - GetUniqueNetIdFromCachedControllerId"
                       ,Log,(FName)0x0);
            this_01 = APlayerController::GetLocalPlayer(param_1);
            ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_70);
            bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_70);
            if (bVar4) {
              local_140 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Querying Store Interface"
                         ,Log,(FName)0x0);
              bVar3 = false;
              plVar13 = local_110;
              if ((local_110 == (longlong *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), plVar13 = local_110, bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_178.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_170.DelegateSize = 0;
              pcVar2 = *(code **)(*plVar13 + 0x40);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_178,(FWriteAccessScope *)&local_d0);
              local_b8 = &local_170;
              puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_170);
              if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = &
                          ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar10 = FDelegateHandle::GenerateNewID();
                puVar9[2] = uVar10;
                *puVar9 = &
                          ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseQueryCallbackProxy2____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UInAppPurchaseQueryCallbackProxy2 *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar9[3] = 0;
                local_f0 = this;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UInAppPurchaseQueryCallbackProxy2 *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_f0);
                puVar9[4] = OnInAppPurchaseRead;
              }
              if (local_d0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
              }
              pTVar11 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_70,&local_a0);
              if ((pTVar11->Object == (FUniqueNetId *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = pTVar11->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a0.SharedReferenceCount.ReferenceController);
              (*pcVar2)(plVar13,pFVar1,param_2,&local_178);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_178,(FWriteAccessScope *)&local_e8);
              if ((local_170.DelegateSize != 0) &&
                 (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_170,0,0,0x10);
                local_170.DelegateSize = 0;
              }
              if (local_e8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
              }
              if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_170.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector)
              ;
              FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_70);
            }
            else {
              local_138 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid UniqueNetId",
                         Warning,(FName)0x0);
              FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_70);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108);
          if (!bVar3) {
            return;
          }
          goto LAB_14ec9e70a;
        }
      }
    }
    local_128 = 0;
    pwVar12 = 
    L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid or uninitialized OnlineSubsystem";
  }
  FFrame::KismetExecutionMessage(pwVar12,Warning,(FName)0x0);
LAB_14ec9e70a:
  local_118 = 0;
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Failed to even submit",Warning,
             (FName)0x0);
  OnInAppPurchaseRead(this,false,&local_80,&local_90);
  DestructItems<FString,int>((FString *)0x0,0);
  return;
}

// execCreateProxyObjectForInAppPurchaseQuery @ 14eca2c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  APlayerController *this;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UInAppPurchaseQueryCallbackProxy2 *this_00;
  FModuleManager *this_01;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  ULocalPlayer *this_02;
  undefined8 *puVar12;
  ulong64 uVar13;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  FString **ppFVar17;
  undefined1 auStack_248 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  FDelegateAllocation local_220;
  FString *local_210;
  undefined8 local_208;
  APlayerController *local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  FName local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  undefined8 local_198;
  UWorld *local_190;
  UInAppPurchaseQueryCallbackProxy2 *local_188 [2];
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FName local_140;
  FName local_138;
  TSharedPtr<FUniqueNetId_const_,1> local_130;
  FString local_120;
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  undefined1 local_f8 [128];
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_200 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_210 = (FString *)0x0;
  local_208 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  this = local_200;
  ppFVar17 = &local_210;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar17 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar8);
  local_f8._8_8_ = pUVar7;
  this_00 = (UInAppPurchaseQueryCallbackProxy2 *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar16 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_198 = 0;
  bVar4 = true;
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_198);
  (this_00->WorldPtr).WeakPtr = local_1f8;
  if (this == (APlayerController *)0x0) goto LAB_14eca3175;
  local_190 = AActor::GetWorld((AActor *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_190);
  }
  FWeakObjectPtr::operator=(&(this_00->WorldPtr).WeakPtr,(FObjectPtr)&local_190);
  if (this->_padding_ == 0) {
    local_1b8 = 0;
    pwVar15 = L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid player state";
LAB_14eca3139:
    FFrame::KismetExecutionMessage(pwVar15,Warning,(FName)0x0);
  }
  else {
    local_1f0 = 0;
    this_01 = FModuleManager::Get();
    pFVar9 = ::FName::FName(&local_140,"OnlineSubsystem");
    bVar5 = FModuleManager::IsModuleLoaded(this_01,*pFVar9);
    if (!bVar5) {
LAB_14eca311b:
      local_1c0 = 0;
      pwVar15 = 
      L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14eca3139;
    }
    pFVar9 = ::FName::FName(&local_138,"OnlineSubsystem");
    pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
    cVar6 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
    if (cVar6 == '\0') goto LAB_14eca311b;
    local_1e8.ComparisonIndex.Value = 0;
    local_1e8.Number = 0;
    pIVar11 = IOnlineSubsystem::Get(&local_1e8);
    if (pIVar11 == (IOnlineSubsystem *)0x0) goto LAB_14eca311b;
    (**(code **)(pIVar11->_padding_ + 0x90))(pIVar11,&local_1a8);
    if (local_1a8 == (longlong *)0x0) {
      local_1c8 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - In App Purchases are not supported by Online Subsystem"
                 ,Warning,(FName)0x0);
    }
    else {
      local_1e0 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - GetUniqueNetIdFromCachedControllerId"
                 ,Log,(FName)0x0);
      this_02 = APlayerController::GetLocalPlayer(this);
      ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_78);
      bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_78);
      if (bVar5) {
        local_1d8 = 0;
        FFrame::KismetExecutionMessage
                  (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Querying Store Interface",Log
                   ,(FName)0x0);
        bVar4 = false;
        plVar16 = local_1a8;
        if ((local_1a8 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar16 = local_1a8, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar16 + 0x40);
        local_228.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_220.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_228,(FWriteAccessScope *)&local_160);
        local_148 = &local_220;
        puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_220);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseQueryCallbackProxy2____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseQueryCallbackProxy2 *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          puVar12[3] = 0;
          local_188[0] = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseQueryCallbackProxy2 *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)local_188);
          puVar12[4] = OnInAppPurchaseRead;
        }
        if (local_160.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
        }
        pTVar14 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_130);
        if ((pTVar14->Object == (FUniqueNetId *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = pTVar14->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.SharedReferenceCount.ReferenceController);
        (*pcVar3)(plVar16,pFVar2,ppFVar17,&local_228);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_228,(FWriteAccessScope *)&local_178);
        if ((local_220.DelegateSize != 0) &&
           (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_220.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_220,0,0,0x10);
          local_220.DelegateSize = 0;
        }
        if (local_178.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
        }
        if (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_220.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_228.AccessDetector);
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
      }
      else {
        local_1d0 = 0;
        FFrame::KismetExecutionMessage
                  (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid UniqueNetId",Warning,
                   (FName)0x0);
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
    if (!bVar4) goto LAB_14eca3175;
  }
  local_1b0 = 0;
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Failed to even submit",Warning,
             (FName)0x0);
  OnInAppPurchaseRead(this_00,false,&local_110,&local_120);
  DestructItems<FString,int>((FString *)0x0,0);
LAB_14eca3175:
  *(UInAppPurchaseQueryCallbackProxy2 **)param_3 = this_00;
  DestructItems<FString,int>(local_210,(int)local_208);
  if (local_210 != (FString *)0x0) {
    FMemory::Free(local_210);
  }
  return;
}

