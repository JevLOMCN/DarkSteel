// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorLayerUtilities
// Functions: 12

// StaticClass @ 14ddb8720

UClass * __cdecl ULayersBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorLayerUtilities",L"LayersBlueprintLibrary",
               &Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULayersBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULayersBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULayersBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton;
}

// ULayersBlueprintLibrary @ 14ddb8ae0

ULayersBlueprintLibrary * __thiscall
ULayersBlueprintLibrary::ULayersBlueprintLibrary
          (ULayersBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULayersBlueprintLibrary__6B_;
  return this;
}

// ULayersBlueprintLibrary @ 14ddb8b10

ULayersBlueprintLibrary * __thiscall
ULayersBlueprintLibrary::ULayersBlueprintLibrary
          (ULayersBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULayersBlueprintLibrary__6B_;
  return this;
}

// ~ULayersBlueprintLibrary @ 14ddb8b40

void __thiscall ULayersBlueprintLibrary::~ULayersBlueprintLibrary(ULayersBlueprintLibrary *this)

{
  *(undefined ***)this = &___7ULayersBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddActorToLayer @ 14ddb8bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULayersBlueprintLibrary::AddActorToLayer(AActor *param_1,FActorLayer *param_2)

{
  if ((param_1 != (AActor *)0x0) && (param_2->Name != (FName)0x0)) {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&param_1->Layers,&param_2->Name);
    return;
  }
  return;
}

// GetActors @ 14ddb8c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __cdecl
ULayersBlueprintLibrary::GetActors
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          FActorLayer *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorld *pUVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  AActor *pAVar7;
  FName *pFVar8;
  FWeakObjectPtr local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  UObject *local_98;
  UClass *local_90;
  AActor *local_88 [2];
  TActorIteratorBase<FActorIterator> local_78;
  
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar5 == (UWorld *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_90 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  local_78.Flags = OnlyActiveLevels|SkipPendingKill;
  local_78.State.bIsSet = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  FActorIteratorState::FActorIteratorState
            (&local_78.State.TypedValue,pUVar5,(TSubclassOf<AActor>)&local_90);
  local_78.State.bIsSet = true;
  do {
    do {
      do {
        TActorIteratorBase<FActorIterator>::operator++(&local_78);
        if ((local_78.State.bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        if (local_78.State.TypedValue.ReachedEnd != false) {
          if (local_78.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_78.State.TypedValue.CurrentWorld,
                       local_78.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
          (__return_storage_ptr__->AllocatorInstance).Data = local_a8.Data;
          __return_storage_ptr__->ArrayNum = (int)local_a0;
          __return_storage_ptr__->ArrayMax = local_a0._4_4_;
          return __return_storage_ptr__;
        }
        if ((local_78.State.bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        pAVar7 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar7);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_88[0] = pAVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar7);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_88);
        local_98 = FWeakObjectPtr::Get(&local_res20);
      } while (local_98 == (UObject *)0x0);
      pFVar8 = *(FName **)&local_98[0xb].field_0x18;
      pFVar1 = pFVar8 + *(int *)&local_98[0xb].field_0x20;
    } while (pFVar8 == pFVar1);
    do {
      if (*pFVar8 == param_2->Name) {
        if (((local_a8.Data <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < local_a8.Data + (longlong)local_a0._4_4_ * 8))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        iVar4 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
        *(UObject **)(local_a8.Data + (longlong)iVar4 * 8) = local_98;
        break;
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar1);
  } while( true );
}

// GetPrivateStaticClass @ 14ddb8ed0

UClass * __cdecl ULayersBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorLayerUtilities",L"LayersBlueprintLibrary",
               &Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULayersBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULayersBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULayersBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton;
}

// RemoveActorFromLayer @ 14ddb8f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULayersBlueprintLibrary::RemoveActorFromLayer(AActor *param_1,FActorLayer *param_2)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_1 != (AActor *)0x0) && (param_2->Name != (FName)0x0)) {
    pFVar1 = (param_1->Layers).AllocatorInstance.Data;
    if ((pFVar1 <= param_2) &&
       ((param_2 < pFVar1 + (longlong)(param_1->Layers).ArrayMax * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (param_1->Layers).ArrayNum;
    lVar5 = (longlong)iVar7;
    if (iVar7 != 0) {
      iVar9 = 0;
      pFVar2 = (FName *)(param_1->Layers).AllocatorInstance.Data;
      bVar4 = *pFVar2 != param_2->Name;
      lVar6 = 0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar5) {
          do {
            if (bVar4 != (pFVar2[lVar6] != param_2->Name)) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < lVar5);
        }
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar2 + iVar9,pFVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar5);
      (param_1->Layers).ArrayNum = iVar9;
    }
  }
  return;
}

// StaticRegisterNativesULayersBlueprintLibrary @ 14ddb9120

void __cdecl ULayersBlueprintLibrary::StaticRegisterNativesULayersBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddActorToLayer @ 14ddb9220

void __cdecl
ULayersBlueprintLibrary::execAddActorToLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName local_res10 [2];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar2 = local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != 0) && (*pFVar2 != (FName)0x0)) {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_res20 + 0x1d0),pFVar2);
  }
  return;
}

// execGetActors @ 14ddb9300

void __cdecl ULayersBlueprintLibrary::execGetActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FName local_res10;
  UObject *local_res18;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetActors(&local_18,local_res18,(FActorLayer *)pFVar3);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRemoveActorFromLayer @ 14ddb9420

void __cdecl
ULayersBlueprintLibrary::execRemoveActorFromLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong local_res10 [2];
  longlong local_res20;
  longlong local_48 [2];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  lVar6 = local_res10[0];
  plVar10 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  if ((local_res10[0] != 0) && (*plVar10 != 0)) {
    if ((*(longlong **)(local_res10[0] + 0x1d0) <= plVar10) &&
       (plVar10 < *(longlong **)(local_res10[0] + 0x1d0) + *(int *)(local_res10[0] + 0x1dc))) {
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
    iVar7 = *(int *)(lVar6 + 0x1d8);
    lVar5 = (longlong)iVar7;
    if (iVar7 != 0) {
      iVar9 = 0;
      plVar2 = *(longlong **)(lVar6 + 0x1d0);
      bVar4 = *plVar2 != *plVar10;
      lVar6 = 0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar5) {
          do {
            if (bVar4 != (plVar2[lVar6] != *plVar10)) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < lVar5);
        }
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(plVar2 + iVar9,plVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar5);
      *(int *)(local_res20 + 0x1d8) = iVar9;
    }
  }
  return;
}

