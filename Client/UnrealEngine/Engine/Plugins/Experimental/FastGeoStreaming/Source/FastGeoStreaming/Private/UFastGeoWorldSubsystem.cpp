// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 37

// StaticClass @ 14da06560

UClass * __cdecl UFastGeoWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldSubsystem",
               &Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUFastGeoWorldSubsystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFastGeoWorldSubsystem>,
               InternalVTableHelperCtorCaller<UFastGeoWorldSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14da06bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLinearColor * __cdecl
`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FLinearColor *__return_storage_ptr__,UPrimitiveComponent *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
  return __return_storage_ptr__;
}

// UFastGeoWorldSubsystem @ 14da1aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFastGeoWorldSubsystem * __thiscall
UFastGeoWorldSubsystem::UFastGeoWorldSubsystem(UFastGeoWorldSubsystem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FActorPrimitiveColorHandler *this_00;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  FText local_120;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  undefined1 local_d8 [48];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  (this->Handle_OnForEachHLODObjectInCell).ID = 0;
  (this->ComponentsPendingRecreate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsPendingRecreate).ArrayNum = 0;
  (this->ComponentsPendingRecreate).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  this->TimeEpoch = 0;
  this->UsedAsyncRenderStateTasksTimeBudgetMS = 0.0;
  this->UsedNumComponentsToProcessBudget = 0;
  this->bWaitingForCompletion = false;
  (this->AsyncRenderStateJobQueue).Ptr = (FFastGeoAsyncRenderStateJobQueue *)0x0;
  if ((this->_padding_ & 0x10) != 0) {
    pUVar4 = GetPrivateStaticClass();
    if ((UClass *)this->_padding_ == pUVar4) {
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      FText::FText((FText *)(local_d8 + 8));
      FText::FText((FText *)(local_d8 + 0x18));
      local_d8._0_4_ = NAME_FastGeoColorHandler.ComparisonIndex.Value;
      local_d8._4_4_ = NAME_FastGeoColorHandler.Number;
      local_a8 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = (code *)0x0;
      plStack_50 = (longlong *)0x0;
      local_48 = (code *)0x0;
      plStack_20 = (longlong *)0x0;
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_120,L"FastGeoWorldSubsystem",L"FastGeo",L"FastGeo");
      FText::operator=((FText *)(local_d8 + 8),pFVar5);
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_120,L"FastGeoWorldSubsystem",L"FastGeoColor_ToopTip",
                          L"Colorize FastGeo primitives. ISM [Orange], HLOD ISM [Red], SM [Cyan], HLOD SM [Blue], else White."
                         );
      FText::operator=((FText *)(local_d8 + 0x18),pFVar5);
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      plStack_e0 = plStack_80;
      uVar3 = uStack_a0;
      local_108 = local_a8;
      uVar1 = local_88;
      uVar2 = uStack_84;
      local_a8 = (longlong)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),FLinearColor,UPrimitiveComponent_const_*>
                 ::Call;
      uStack_a0 = uStack_100;
      local_88 = (undefined4)local_f8[2];
      uStack_84 = local_f8[2]._4_4_;
      plStack_80 = (longlong *)0x0;
      local_d8[0x28] = false;
      local_98 = 0x5197a148;
      uStack_94 = 1;
      uStack_90 = 0x4da06bc0;
      uStack_8c = 1;
      uStack_100 = uVar3;
      local_f8[2]._0_4_ = uVar1;
      local_f8[2]._4_4_ = uVar2;
      if (local_108 != 0) {
        plVar6 = local_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      plStack_e0 = plStack_50;
      uVar3 = uStack_70;
      local_108 = (longlong)local_78;
      uVar1 = local_58;
      uVar2 = uStack_54;
      puStack_60 = local_128;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,void>
                 ::Call;
      uStack_70 = uStack_100;
      local_58 = (undefined4)local_f8[2];
      uStack_54 = local_f8[2]._4_4_;
      plStack_50 = (longlong *)0x0;
      local_68 = 0x52c58a88;
      uStack_64 = 1;
      uStack_100 = uVar3;
      local_f8[2]._0_4_ = uVar1;
      local_f8[2]._4_4_ = uVar2;
      if (local_108 != 0) {
        plVar6 = local_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      plStack_e0 = plStack_20;
      uVar3 = uStack_40;
      local_108 = (longlong)local_48;
      puStack_30 = local_128;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,void>
                 ::Call;
      uStack_40 = uStack_100;
      local_28 = (undefined4)local_f8[2];
      uStack_24 = local_f8[2]._4_4_;
      plStack_20 = (longlong *)0x0;
      local_38 = 0x52c58aa8;
      uStack_34 = 1;
      uStack_100 = uVar3;
      if (local_108 != 0) {
        plVar6 = local_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      this_00 = FActorPrimitiveColorHandler::Get();
      FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
                (this_00,(FPrimitiveColorHandler *)local_d8);
      if (local_48 != (code *)0x0) {
        plVar6 = (longlong *)&local_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar6 = plStack_20;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_78 != (code *)0x0) {
        plVar6 = (longlong *)&local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar6 = plStack_50;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((code *)local_a8 != (code *)0x0) {
        plVar6 = (longlong *)&local_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar6 = plStack_80;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((ITextData *)local_d8._24_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_d8._24_8_ + 0x10))();
      }
      if ((ITextData *)local_d8._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_d8._8_8_ + 0x10))();
      }
    }
  }
  return this;
}

// UFastGeoWorldSubsystem @ 14da1add0

UFastGeoWorldSubsystem * __thiscall
UFastGeoWorldSubsystem::UFastGeoWorldSubsystem(UFastGeoWorldSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  (this->Handle_OnForEachHLODObjectInCell).ID = 0;
  (this->ComponentsPendingRecreate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsPendingRecreate).ArrayNum = 0;
  (this->ComponentsPendingRecreate).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bWaitingForCompletion = false;
  this->TimeEpoch = 0;
  this->UsedAsyncRenderStateTasksTimeBudgetMS = 0.0;
  this->UsedNumComponentsToProcessBudget = 0;
  (this->AsyncRenderStateJobQueue).Ptr = (FFastGeoAsyncRenderStateJobQueue *)0x0;
  return this;
}

// ~UFastGeoWorldSubsystem @ 14da1bbd0

void __thiscall UFastGeoWorldSubsystem::~UFastGeoWorldSubsystem(UFastGeoWorldSubsystem *this)

{
  FFastGeoAsyncRenderStateJobQueue *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  UClass *pUVar5;
  FActorPrimitiveColorHandler *this_01;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  if ((this->_padding_ & 0x10) != 0) {
    pUVar5 = GetPrivateStaticClass();
    if ((UClass *)this->_padding_ == pUVar5) {
      this_01 = FActorPrimitiveColorHandler::Get();
      FActorPrimitiveColorHandler::UnregisterPrimitiveColorHandler(this_01,NAME_FastGeoColorHandler)
      ;
    }
  }
  this_00 = (this->AsyncRenderStateJobQueue).Ptr;
  if (this_00 != (FFastGeoAsyncRenderStateJobQueue *)0x0) {
    FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(this_00);
    ::operator_delete(this_00,0x68);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  pFVar1 = (this->ComponentsPendingRecreate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 14da1d2d0

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
`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  UWorld *this_00;
  code *pcVar5;
  bool bVar6;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  FFastGeoComponentCluster *pFVar11;
  FFastGeoComponentCluster *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  <lambda_1> local_res18 [8];
  <lambda_1> local_res20 [8];
  UClass *local_58;
  UEngine *local_50;
  FScriptContainerElement *local_48;
  
  local_50 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    uVar2 = (GEngine->WorldList).Array.ArrayNum;
    uVar10 = (ulonglong)(int)uVar2;
    pFVar13 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    local_48 = pFVar13 + uVar10 * 8;
    while( true ) {
      pFVar1 = local_48;
      if ((local_50->WorldList).Array.ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar1) break;
      this_00 = *(UWorld **)(*(longlong *)pFVar13 + 0x2c0);
      if ((this_00 != (UWorld *)0x0) && (bVar6 = UWorld::IsGameWorld(this_00), bVar6)) {
        pTVar7 = UWorld::GetLevels(this_00);
        pFVar14 = (pTVar7->AllocatorInstance).Data;
        iVar3 = pTVar7->ArrayNum;
        pFVar1 = pFVar14 + (longlong)iVar3 * 8;
        while( true ) {
          if (pTVar7->ArrayNum != iVar3) {
            `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar14 == pFVar1) break;
          lVar8 = *(longlong *)pFVar14;
          pcVar5 = *(code **)(*(longlong *)(lVar8 + 0x28) + 0x18);
          local_58 = UFastGeoContainer::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_58);
          }
          lVar8 = (*pcVar5)(lVar8 + 0x28,&local_58);
          if (lVar8 != 0) {
            pUVar9 = UFastGeoContainer::StaticClass();
            iVar4 = (int)pUVar9->_padding_;
            if ((iVar4 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar9->_padding_)) {
              iVar4 = *(int *)(lVar8 + 0xb8);
              pFVar11 = *(FFastGeoComponentCluster **)(lVar8 + 0xb0);
              pFVar12 = pFVar11 + iVar4;
              while( true ) {
                if (*(int *)(lVar8 + 0xb8) != iVar4) {
                  `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                if (pFVar11 == pFVar12) break;
                FFastGeoComponentCluster::
                ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoPrimitiveComponent_const_,___UFastGeoWorldSubsystem::UFastGeoWorldSubsystem_::__l2::<lambda_1>::operator()_::__l19::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          (pFVar11,local_res18);
                pFVar11 = pFVar11 + 1;
              }
              iVar4 = *(int *)(lVar8 + 200);
              pFVar11 = *(FFastGeoComponentCluster **)(lVar8 + 0xc0);
              pFVar12 = (FFastGeoComponentCluster *)((longlong)iVar4 * 200 + (longlong)pFVar11);
              while( true ) {
                if (*(int *)(lVar8 + 200) != iVar4) {
                  `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res10);
                }
                if (pFVar11 == pFVar12) break;
                FFastGeoComponentCluster::
                ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoPrimitiveComponent_const_,___UFastGeoWorldSubsystem::UFastGeoWorldSubsystem_::__l2::<lambda_1>::operator()_::__l19::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          (pFVar11,local_res20);
                pFVar11 = (FFastGeoComponentCluster *)&pFVar11[1].StaticMeshComponents.ArrayNum;
              }
            }
          }
          pFVar14 = pFVar14 + 8;
        }
      }
      pFVar13 = pFVar13 + 8;
      uVar10 = (ulonglong)uVar2;
    }
  }
  return;
}

// AddToComponentsPendingRecreate @ 14da204c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::AddToComponentsPendingRecreate
          (UFastGeoWorldSubsystem *this,FFastGeoPrimitiveComponent *param_1)

{
  TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_28 [32];
  
  pTVar1 = &this->ComponentsPendingRecreate;
  FWeakFastGeoComponent::FWeakFastGeoComponent
            ((FWeakFastGeoComponent *)local_28,(FFastGeoComponent *)param_1);
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(this->ComponentsPendingRecreate).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->ComponentsPendingRecreate).ArrayNum;
  piVar2 = &(this->ComponentsPendingRecreate).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ComponentsPendingRecreate).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  pFVar3 = (FWeakObjectPtr *)(pFVar4 + (longlong)iVar7 * 0x18);
  pFVar3->ObjectIndex = local_28._0_4_;
  pFVar3->ObjectSerialNumber = local_28._4_4_;
  pFVar3[1].ObjectIndex = local_28._8_4_;
  pFVar3[1].ObjectSerialNumber = local_28._12_4_;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_28._16_8_;
  return;
}

// CheckNoPendingTasks @ 14da231c0

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
UFastGeoWorldSubsystem::CheckNoPendingTasks
          (UFastGeoWorldSubsystem *this,ULevel *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UFastGeoContainer *this_00;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_2 == pUVar3) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_1->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      bVar2 = UFastGeoContainer::HasAnyPendingTasks(this_00);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FastGeo->HasAnyPendingTasks()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// CommitAsyncRenderStateTasksBudget_Concurrent @ 14da23c60

void __thiscall
UFastGeoWorldSubsystem::CommitAsyncRenderStateTasksBudget_Concurrent
          (UFastGeoWorldSubsystem *this,float param_1,int *param_2,int param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (param_3 == this->TimeEpoch) {
    if (FastGeo::GAsyncRenderStateTaskTimeBudgetMS != 0.0) {
      this->UsedAsyncRenderStateTasksTimeBudgetMS =
           param_1 + this->UsedAsyncRenderStateTasksTimeBudgetMS;
    }
    if (FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess != 0) {
      this->UsedNumComponentsToProcessBudget = this->UsedNumComponentsToProcessBudget + *param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da23ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  return;
}

// Deinitialize @ 14da26810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoWorldSubsystem::Deinitialize(UFastGeoWorldSubsystem *this)

{
  FDelegateHandle FVar1;
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->AllLevelsChangedEvent,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this_00->AddLevelToWorldExtensionEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this_00->RemoveLevelFromWorldExtensionEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelComponentsUpdated,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelComponentsCleared,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelAddedToWorld,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  FVar1.ID = (this->Handle_OnLevelStreamingStateChanged).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingStateChanged,FVar1);
  }
  FVar1.ID = (this->Handle_OnLevelBeginAddToWorld).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingVisible,FVar1);
  }
  FVar1.ID = (this->Handle_OnLevelBeginRemoveFromWorld).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingInvisible,FVar1);
  }
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  this_02 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UWorldPartitionHLODRuntimeSubsystem::GetForEachHLODObjectInCellEvent(this_01);
  FVar1.ID = (this->Handle_OnForEachHLODObjectInCell).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_02,FVar1);
  }
  (this->Handle_OnForEachHLODObjectInCell).ID = 0;
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 14da27390

bool __thiscall
UFastGeoWorldSubsystem::DoesSupportWorldType(UFastGeoWorldSubsystem *this,Type param_1)

{
  return (param_1 - Game & 0xfffffffd) == 0;
}

// ForEachHLODObjectInCell @ 14da28f80

void __thiscall
UFastGeoWorldSubsystem::ForEachHLODObjectInCell
          (UFastGeoWorldSubsystem *this,UWorldPartitionRuntimeCell *param_1,
          TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UFastGeoContainer *pUVar4;
  longlong *plVar5;
  <lambda_1> local_18 [2];
  
  if (param_1 == (UWorldPartitionRuntimeCell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCell",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                       ,0x168,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCell->GetLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                       ,0x169,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar4 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                     ((IInterface_AssetUserData *)(lVar3 + 0x28));
  if (pUVar4 != (UFastGeoContainer *)0x0) {
    local_18[0].InFunc = param_2;
    UFastGeoContainer::
    ForEachComponentCluster<UFastGeoContainer,FFastGeoHLOD,_UFastGeoWorldSubsystem::ForEachHLODObjectInCell_::__l19::<lambda_1>_>
              (pUVar4,local_18);
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 14da2b600

UClass * __cdecl UFastGeoWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldSubsystem",
               &Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUFastGeoWorldSubsystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFastGeoWorldSubsystem>,
               InternalVTableHelperCtorCaller<UFastGeoWorldSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton;
}

// GetStatId @ 14da2b9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UFastGeoWorldSubsystem::GetStatId(UFastGeoWorldSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UFastGeoWorldSubsystem::GetStatId(void)const_::_2_::FStat_UFastGeoWorldSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UFastGeoWorldSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UFastGeoWorldSubsystem::GetStatId(void)const_::_2_::FStat_UFastGeoWorldSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UFastGeoWorldSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UFastGeoWorldSubsystem,*pFVar1,
                   L"UFastGeoWorldSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UFastGeoWorldSubsystem;
  if (StatPtr_UFastGeoWorldSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UFastGeoWorldSubsystem::GetStatId(void)const_::_2_::FStat_UFastGeoWorldSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UFastGeoWorldSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UFastGeoWorldSubsystem::GetStatId(void)const_::_2_::FStat_UFastGeoWorldSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UFastGeoWorldSubsystem,*pFVar1,
                         L"UFastGeoWorldSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsEnableDebugView @ 14da2d8d0

bool __cdecl UFastGeoWorldSubsystem::IsEnableDebugView(void)

{
  return bEnableDebugView;
}

// IsWaitingForCompletion @ 14da2e1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UFastGeoWorldSubsystem::IsWaitingForCompletion(UFastGeoWorldSubsystem *this)

{
  UWorld *pUVar1;
  
  if (this->bWaitingForCompletion == false) {
    pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (pUVar1->IsInBlockTillLevelStreamingCompleted == 0) {
      pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      if (!(bool)pUVar1->bShouldForceUnloadStreamingLevels) {
        pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
        if (pUVar1->bIsBeingCleanedUp == false) {
          return false;
        }
      }
    }
  }
  return true;
}

// OnAddLevelToWorldExtension @ 14da2e7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnAddLevelToWorldExtension
          (UFastGeoWorldSubsystem *this,ULevel *param_1,bool param_2,bool *param_3)

{
  bool bVar1;
  UFastGeoContainer *this_00;
  bool bVar2;
  
  bVar1 = this->bWaitingForCompletion;
  this->bWaitingForCompletion = param_2;
  this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                      ((IInterface_AssetUserData *)&param_1->_padding_);
  if (this_00 != (UFastGeoContainer *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId267,"UFastGeoWorldSubsystem::OnAddLevelToWorldExtension",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0x10b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId267);
    }
    if (((this_00->PhysicsStateCreation == Creating) ||
        ((this_00->PendingCreate).RenderState.TotalNumProcessed <
         (this_00->PendingCreate).RenderState.ComponentsToProcess.ArrayNum)) ||
       (((this_00->PendingCreate).PhysicsState.ComponentsToProcess !=
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
        ((int)(this_00->PendingCreate).PhysicsState.TotalNumProcessed <
         ((this_00->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
      UFastGeoContainer::Tick(this_00,param_2);
    }
    if (((this_00->PhysicsStateCreation == Creating) ||
        ((this_00->PendingCreate).RenderState.TotalNumProcessed <
         (this_00->PendingCreate).RenderState.ComponentsToProcess.ArrayNum)) ||
       (((this_00->PendingCreate).PhysicsState.ComponentsToProcess !=
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
        ((int)(this_00->PendingCreate).PhysicsState.TotalNumProcessed <
         ((this_00->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
      *param_3 = false;
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this->bWaitingForCompletion = bVar1;
  return;
}

// OnLevelAddedToWorld @ 14da30b80

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
UFastGeoWorldSubsystem::OnLevelAddedToWorld
          (UFastGeoWorldSubsystem *this,ULevel *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UFastGeoContainer *this_00;
  
  if (param_1 == (ULevel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Level",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                       ,0x185,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_2 == pUVar3) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_1->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      bVar2 = UFastGeoContainer::HasAnyPendingTasks(this_00);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FastGeo->HasAnyPendingTasks()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// OnLevelComponentsCleared @ 14da30c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnLevelComponentsCleared
          (UFastGeoWorldSubsystem *this,UWorld *param_1,ULevel *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UFastGeoContainer *this_00;
  bool bVar4;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((param_1 == pUVar3) &&
     (this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                          ((IInterface_AssetUserData *)&param_2->_padding_),
     this_00 != (UFastGeoContainer *)0x0)) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId244,"UFastGeoWorldSubsystem::OnLevelComponentsCleared",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0xf4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
    }
    if (param_1->bIsBeingCleanedUp == false) {
      if ((this_00->bIsRegistered != false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FastGeo->IsRegistered()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                             ,0xff,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = UFastGeoContainer::HasAnyPendingTasks(this_00);
      if ((bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FastGeo->HasAnyPendingTasks()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                             ,0x100,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UFastGeoContainer::Unregister(this_00);
      UFastGeoContainer::Tick(this_00,true);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OnLevelComponentsUpdated @ 14da30d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnLevelComponentsUpdated
          (UFastGeoWorldSubsystem *this,UWorld *param_1,ULevel *param_2)

{
  UWorld *pUVar1;
  UFastGeoContainer *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar1) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_2->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      if (CpuChannel->Enabled < 0) {
        UFastGeoContainer::Register(this_00);
        UFastGeoContainer::Tick(this_00,true);
        return;
      }
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId226,"UFastGeoWorldSubsystem::OnLevelComponentsUpdated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0xe2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId226);
      UFastGeoContainer::Register(this_00);
      UFastGeoContainer::Tick(this_00,true);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OnLevelRemovedFromWorld @ 14da30e00

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
UFastGeoWorldSubsystem::OnLevelRemovedFromWorld
          (UFastGeoWorldSubsystem *this,ULevel *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UWorld *pUVar7;
  UFastGeoContainer *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (param_1 != (ULevel *)0x0) {
    CheckNoPendingTasks(this,param_1,param_2);
    return;
  }
  if (param_2 == (UWorld *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                       ,0x18e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = UWorld::GetLevels(param_2);
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  iVar2 = pTVar6->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar6->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (param_2 == pUVar7) {
      this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                          ((IInterface_AssetUserData *)(lVar3 + 0x28));
      if (this_00 != (UFastGeoContainer *)0x0) {
        bVar5 = UFastGeoContainer::HasAnyPendingTasks(this_00);
        if (bVar5) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FastGeo->HasAnyPendingTasks()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                             ,0x17f,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// OnLevelStartedAddToWorld @ 14da30f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnLevelStartedAddToWorld
          (UFastGeoWorldSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  UWorld *pUVar1;
  UFastGeoContainer *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar1) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_3->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      if (CpuChannel->Enabled < 0) {
        UFastGeoContainer::Register(this_00);
        return;
      }
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId196,"UFastGeoWorldSubsystem::OnLevelStartedAddToWorld",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0xc4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId196);
      UFastGeoContainer::Register(this_00);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OnLevelStartedRemoveFromWorld @ 14da30fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnLevelStartedRemoveFromWorld
          (UFastGeoWorldSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  UWorld *pUVar1;
  UFastGeoContainer *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar1) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_3->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      if (CpuChannel->Enabled < 0) {
        UFastGeoContainer::Unregister(this_00);
        return;
      }
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId211,
                 "UFastGeoWorldSubsystem::OnLevelStartedRemoveFromWorld",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0xd3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId211);
      UFastGeoContainer::Unregister(this_00);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OnLevelStreamingStateChanged @ 14da31060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnLevelStreamingStateChanged
          (UFastGeoWorldSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
          ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  UWorld *pUVar1;
  UFastGeoContainer *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((param_1 == pUVar1) && (param_3 != (ULevel *)0x0)) &&
     ((param_5 - LoadedNotVisible & 0xfd) == 0)) {
    this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                        ((IInterface_AssetUserData *)&param_3->_padding_);
    if (this_00 != (UFastGeoContainer *)0x0) {
      UFastGeoContainer::PrecachePSOs(this_00);
    }
  }
  return;
}

// OnRemoveLevelFromWorldExtension @ 14da319d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::OnRemoveLevelFromWorldExtension
          (UFastGeoWorldSubsystem *this,ULevel *param_1,bool param_2,bool *param_3)

{
  bool bVar1;
  UFastGeoContainer *this_00;
  bool bVar2;
  
  bVar1 = this->bWaitingForCompletion;
  this->bWaitingForCompletion = param_2;
  this_00 = IInterface_AssetUserData::GetAssetUserData<UFastGeoContainer>
                      ((IInterface_AssetUserData *)&param_1->_padding_);
  if (this_00 != (UFastGeoContainer *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId287,
                 "UFastGeoWorldSubsystem::OnRemoveLevelFromWorldExtension",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0x11f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId287);
    }
    if (((this_00->PhysicsStateCreation == Destroying) ||
        ((this_00->PendingDestroy).RenderState.TotalNumProcessed <
         (this_00->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum)) ||
       (((this_00->PendingDestroy).PhysicsState.ComponentsToProcess !=
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
        ((int)(this_00->PendingDestroy).PhysicsState.TotalNumProcessed <
         ((this_00->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
      UFastGeoContainer::Tick(this_00,param_2);
    }
    if (((this_00->PhysicsStateCreation == Destroying) ||
        ((this_00->PendingDestroy).RenderState.TotalNumProcessed <
         (this_00->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum)) ||
       (((this_00->PendingDestroy).PhysicsState.ComponentsToProcess !=
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
        ((int)(this_00->PendingDestroy).PhysicsState.TotalNumProcessed <
         ((this_00->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
      *param_3 = false;
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this->bWaitingForCompletion = bVar1;
  return;
}

// OnUpdateLevelStreaming @ 14da31ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoWorldSubsystem::OnUpdateLevelStreaming(UFastGeoWorldSubsystem *this)

{
  UWorld *pUVar1;
  bool bVar2;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((bool)pUVar1->bShouldForceUnloadStreamingLevels) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId306,"UFastGeoWorldSubsystem::OnUpdateLevelStreaming",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                 ,0x132);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId306);
    }
    ProcessAsyncRenderStateJobs(this,true);
    if (pUVar1->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(pUVar1->PhysicsScene,true);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PostInitialize @ 14da31c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoWorldSubsystem::PostInitialize(UFastGeoWorldSubsystem *this)

{
  UWorld *this_00;
  UWorldPartition *pUVar1;
  FDelegateHandle FVar2;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  TMulticastDelegate<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
  *this_02;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar1 = UWorld::GetWorldPartition(this_00);
  if (pUVar1 != (UWorldPartition *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this_00->AllLevelsChangedEvent,(UFastGeoWorldSubsystem *)&stack0x00000010,
               (pmf_557d17ff *)this);
    TMulticastDelegateRegistration<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                *)&this_00->AddLevelToWorldExtensionEvent,(UFastGeoWorldSubsystem *)&stack0x00000010
               ,(pmf_17b2dc7f *)this);
    TMulticastDelegateRegistration<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                *)&this_00->RemoveLevelFromWorldExtensionEvent,
               (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_17b2dc7f *)this);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::LevelComponentsUpdated,
               (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_d65f48a7 *)this);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::LevelComponentsCleared,
               (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_d65f48a7 *)this);
    TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::LevelAddedToWorld,(UFastGeoWorldSubsystem *)&stack0x00000010,
               (pmf_450a9203 *)this);
    TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
    AddUObject<UFastGeoWorldSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::LevelRemovedFromWorld,(UFastGeoWorldSubsystem *)&stack0x00000010
               ,(pmf_450a9203 *)this);
    FVar2 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
            ::AddUObject<UFastGeoWorldSubsystem>
                      (&FLevelStreamingDelegates::OnLevelStreamingStateChanged,
                       (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_7c9825bb *)this);
                    /* WARNING: Load size is inaccurate */
    (this->Handle_OnLevelStreamingStateChanged).ID = *FVar2.ID;
    FVar2 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UFastGeoWorldSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                        *)&FLevelStreamingDelegates::OnLevelBeginMakingVisible,
                       (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_5855cadd *)this);
                    /* WARNING: Load size is inaccurate */
    (this->Handle_OnLevelBeginAddToWorld).ID = *FVar2.ID;
    FVar2 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UFastGeoWorldSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                        *)&FLevelStreamingDelegates::OnLevelBeginMakingInvisible,
                       (UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_5855cadd *)this);
                    /* WARNING: Load size is inaccurate */
    (this->Handle_OnLevelBeginRemoveFromWorld).ID = *FVar2.ID;
    this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
    this_02 = UWorldPartitionHLODRuntimeSubsystem::GetForEachHLODObjectInCellEvent(this_01);
    FVar2 = TMulticastDelegateRegistration<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
            ::AddUObject<UFastGeoWorldSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
                        *)this_02,(UFastGeoWorldSubsystem *)&stack0x00000010,(pmf_76a61699 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->Handle_OnForEachHLODObjectInCell).ID = *FVar2.ID;
  }
  return;
}

// ProcessAsyncRenderStateJobs @ 14da32550

void __thiscall
UFastGeoWorldSubsystem::ProcessAsyncRenderStateJobs(UFastGeoWorldSubsystem *this,bool param_1)

{
  FFastGeoAsyncRenderStateJobQueue *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                       ,500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->AsyncRenderStateJobQueue).Ptr;
  if (pFVar1 != (FFastGeoAsyncRenderStateJobQueue *)0x0) {
    FFastGeoAsyncRenderStateJobQueue::Tick(pFVar1,param_1);
    pFVar1 = (this->AsyncRenderStateJobQueue).Ptr;
    if (((((pFVar1->PendingJobs).Ptr == (FJobSet *)0x0) &&
         ((pFVar1->Pipe).TaskCount == (atomic<unsigned___int64>)0x0)) &&
        ((pFVar1->PipedJobs).ArrayNum == 0)) &&
       (((pFVar1->PipeTasks).ArrayNum == 0 &&
        (pFVar1 = (this->AsyncRenderStateJobQueue).Ptr,
        pFVar1 != (FFastGeoAsyncRenderStateJobQueue *)0x0)))) {
      (this->AsyncRenderStateJobQueue).Ptr = (FFastGeoAsyncRenderStateJobQueue *)0x0;
      FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(pFVar1);
      ::operator_delete(pFVar1,0x68);
    }
  }
  return;
}

// ProcessPendingRecreate @ 14da32600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UFastGeoWorldSubsystem::ProcessPendingRecreate(UFastGeoWorldSubsystem *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UFastGeoContainer *this_00;
  FFastGeoComponentCluster *this_01;
  FFastGeoPrimitiveComponent *this_02;
  FFastGeoPrimitiveComponent *pFVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  FWeakObjectPtr local_38;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId329,"UFastGeoWorldSubsystem::ProcessPendingRecreate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
               ,0x149);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId329);
  }
  if (__CsvProfilerStat331 == false) {
    FCsvProfilerTrace::OutputInlineStat("PendingRecreate",_GCsvCategory_FastGeo.Index);
    __CsvProfilerStat331 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PendingRecreate",_GCsvCategory_FastGeo.Index,
             (this->ComponentsPendingRecreate).ArrayNum,Set);
  iVar2 = (this->ComponentsPendingRecreate).ArrayNum;
  pFVar8 = (FWeakObjectPtr *)(this->ComponentsPendingRecreate).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 3;
  pFVar7 = (FFastGeoPrimitiveComponent *)0x0;
  while( true ) {
    if ((this->ComponentsPendingRecreate).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWeakFastGeoComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar5 = (uint)pFVar7;
    if (pFVar8 == pFVar1) break;
    local_48 = *pFVar8;
    FStack_40 = pFVar8[1];
    local_38 = pFVar8[2];
    this_00 = (UFastGeoContainer *)FWeakObjectPtr::Get(&local_48);
    if (this_00 != (UFastGeoContainer *)0x0) {
      this_01 = UFastGeoContainer::GetComponentCluster
                          (this_00,FStack_40.ObjectIndex,FStack_40.ObjectSerialNumber);
      if (this_01 != (FFastGeoComponentCluster *)0x0) {
        this_02 = (FFastGeoPrimitiveComponent *)
                  FFastGeoComponentCluster::GetComponent
                            (this_01,local_38.ObjectIndex,local_38.ObjectSerialNumber);
        if (this_02 != (FFastGeoPrimitiveComponent *)0x0) {
          if (((uint)this_02->_padding_ == FFastGeoPrimitiveComponent::Type.ID) ||
             (((FFastGeoElementType *)this_02->_padding_ != (FFastGeoElementType *)0x0 &&
              (bVar4 = FFastGeoElementType::IsA
                                 ((FFastGeoElementType *)this_02->_padding_,
                                  &FFastGeoPrimitiveComponent::Type), bVar4)))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) {
            this_02 = (FFastGeoPrimitiveComponent *)0x0;
          }
          if (this_02 != (FFastGeoPrimitiveComponent *)0x0) {
            uVar6 = uVar5 + 1;
            if (this_02->ProxyState != Delayed) {
              uVar6 = uVar5;
            }
            pFVar7 = (FFastGeoPrimitiveComponent *)(ulonglong)uVar6;
            if ((this_02->_padding_ == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GetOwnerComponentCluster()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                                   ,0x32,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)(*(longlong *)(this_02->_padding_ + 0x18) + 0x110) != '\0') {
              (**(code **)(this_02->_padding_ + 0x50))(this_02);
              FFastGeoPrimitiveComponent::CreateRenderState
                        (this_02,(FRegisterComponentContext *)0x0);
            }
          }
        }
      }
    }
    pFVar8 = pFVar8 + 3;
  }
  if (__CsvProfilerStat353 == false) {
    FCsvProfilerTrace::OutputInlineStat("PendingRecreateDelayed",_GCsvCategory_FastGeo.Index);
    __CsvProfilerStat353 = true;
  }
  FCsvProfiler::RecordCustomStat("PendingRecreateDelayed",_GCsvCategory_FastGeo.Index,uVar5,Set);
  (this->ComponentsPendingRecreate).ArrayNum = 0;
  if ((this->ComponentsPendingRecreate).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->ComponentsPendingRecreate).AllocatorInstance,0,
               &(this->ComponentsPendingRecreate).ArrayMax);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PushAsyncCreatePhysicsStateJobs @ 14da32870

void __thiscall
UFastGeoWorldSubsystem::PushAsyncCreatePhysicsStateJobs
          (UFastGeoWorldSubsystem *this,UFastGeoContainer *param_1)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  IAsyncPhysicsStateProcessor *pIVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId746,
               "UFastGeoContainer::OnCreatePhysicsStateBegin_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId746);
  }
  if ((param_1->CollisionComponents).ArrayNum != 0) {
    bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPhysScene::SupportsAsyncPhysicsStateCreation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2ee,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (param_1->PendingCreate).PhysicsState.ComponentsToProcess = &param_1->CollisionComponents;
    if (((param_1->PendingCreate).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingCreate.PhysicsState.TotalNumProcessed == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
    if ((lVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = *(FPhysScene_Chaos **)(lVar3 + 0x2a0);
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pIVar4 = (IAsyncPhysicsStateProcessor *)&param_1->_padding_;
    if (param_1 == (UFastGeoContainer *)0x0) {
      pIVar4 = (IAsyncPhysicsStateProcessor *)0x0;
    }
    FPhysScene_Chaos::PushAsyncCreatePhysicsStateJob(this_00,pIVar4);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PushAsyncCreateRenderStateJob @ 14da329e0

void __thiscall
UFastGeoWorldSubsystem::PushAsyncCreateRenderStateJob
          (UFastGeoWorldSubsystem *this,UFastGeoContainer *param_1)

{
  FFastGeoAsyncRenderStateJobQueue *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FFastGeoAsyncRenderStateJobQueue *pFVar4;
  TUniquePtr<FFastGeoAsyncRenderStateJobQueue,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue>_>
  *pTVar5;
  longlong local_28;
  FJob local_20;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                         ,0x1e0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar5 = &this->AsyncRenderStateJobQueue;
  if (pTVar5->Ptr == (FFastGeoAsyncRenderStateJobQueue *)0x0) {
    lVar3 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
    pFVar4 = ::operator_new(0x68);
    if (pFVar4 == (FFastGeoAsyncRenderStateJobQueue *)0x0) {
      pFVar4 = (FFastGeoAsyncRenderStateJobQueue *)0x0;
    }
    else {
      pFVar4 = FFastGeoAsyncRenderStateJobQueue::FFastGeoAsyncRenderStateJobQueue
                         (pFVar4,*(FSceneInterface **)(lVar3 + 600));
    }
    if (pTVar5 == (TUniquePtr<FFastGeoAsyncRenderStateJobQueue,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue>_>
                   *)&local_28) {
      if (pFVar4 == (FFastGeoAsyncRenderStateJobQueue *)0x0) goto LAB_14da32aac;
      FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(pFVar4);
    }
    else {
      this_00 = pTVar5->Ptr;
      pTVar5->Ptr = pFVar4;
      if (this_00 == (FFastGeoAsyncRenderStateJobQueue *)0x0) goto LAB_14da32aac;
      FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(this_00);
      pFVar4 = this_00;
    }
    ::operator_delete(pFVar4,0x68);
  }
LAB_14da32aac:
  local_20.Type = CreateRenderState;
  local_20.FastGeo = param_1;
  FFastGeoAsyncRenderStateJobQueue::AddJob(pTVar5->Ptr,&local_20);
  return;
}

// PushAsyncDestroyPhysicsStateJobs @ 14da32ae0

void __thiscall
UFastGeoWorldSubsystem::PushAsyncDestroyPhysicsStateJobs
          (UFastGeoWorldSubsystem *this,UFastGeoContainer *param_1)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  IAsyncPhysicsStateProcessor *pIVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId765,
               "UFastGeoContainer::OnDestroyPhysicsStateBegin_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2fd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId765);
  }
  if ((param_1->CollisionComponents).ArrayNum != 0) {
    bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPhysScene::SupportsAsyncPhysicsStateDestruction()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x301,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (param_1->PendingDestroy).PhysicsState.ComponentsToProcess = &param_1->CollisionComponents;
    if (((param_1->PendingDestroy).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDestroy.PhysicsState.TotalNumProcessed == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x304,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
    if ((lVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x307,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = *(FPhysScene_Chaos **)(lVar3 + 0x2a0);
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x309,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pIVar4 = (IAsyncPhysicsStateProcessor *)&param_1->_padding_;
    if (param_1 == (UFastGeoContainer *)0x0) {
      pIVar4 = (IAsyncPhysicsStateProcessor *)0x0;
    }
    bVar2 = FPhysScene_Chaos::PushAsyncDestroyPhysicsStateJob(this_00,pIVar4);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene->PushAsyncDestroyPhysicsStateJob(this)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x30a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PushAsyncDestroyRenderStateJob @ 14da32c80

void __thiscall
UFastGeoWorldSubsystem::PushAsyncDestroyRenderStateJob
          (UFastGeoWorldSubsystem *this,UFastGeoContainer *param_1)

{
  FFastGeoAsyncRenderStateJobQueue *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FFastGeoAsyncRenderStateJobQueue *pFVar4;
  TUniquePtr<FFastGeoAsyncRenderStateJobQueue,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue>_>
  *pTVar5;
  longlong local_28;
  FJob local_20;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoWorldSubsystem.cpp"
                         ,0x1ea,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar5 = &this->AsyncRenderStateJobQueue;
  if (pTVar5->Ptr == (FFastGeoAsyncRenderStateJobQueue *)0x0) {
    lVar3 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
    pFVar4 = ::operator_new(0x68);
    if (pFVar4 == (FFastGeoAsyncRenderStateJobQueue *)0x0) {
      pFVar4 = (FFastGeoAsyncRenderStateJobQueue *)0x0;
    }
    else {
      pFVar4 = FFastGeoAsyncRenderStateJobQueue::FFastGeoAsyncRenderStateJobQueue
                         (pFVar4,*(FSceneInterface **)(lVar3 + 600));
    }
    if (pTVar5 == (TUniquePtr<FFastGeoAsyncRenderStateJobQueue,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue>_>
                   *)&local_28) {
      if (pFVar4 == (FFastGeoAsyncRenderStateJobQueue *)0x0) goto LAB_14da32d4c;
      FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(pFVar4);
    }
    else {
      this_00 = pTVar5->Ptr;
      pTVar5->Ptr = pFVar4;
      if (this_00 == (FFastGeoAsyncRenderStateJobQueue *)0x0) goto LAB_14da32d4c;
      FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(this_00);
      pFVar4 = this_00;
    }
    ::operator_delete(pFVar4,0x68);
  }
LAB_14da32d4c:
  local_20.Type = DestroyRenderState;
  local_20.FastGeo = param_1;
  FFastGeoAsyncRenderStateJobQueue::AddJob(pTVar5->Ptr,&local_20);
  return;
}

// RemoveFromComponentsPendingRecreate @ 14da338c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UFastGeoWorldSubsystem::RemoveFromComponentsPendingRecreate
          (UFastGeoWorldSubsystem *this,FFastGeoPrimitiveComponent *param_1)

{
  FWeakFastGeoComponent *pFVar1;
  code *pcVar2;
  bool bVar3;
  FWeakFastGeoComponent *local_res8 [4];
  FWeakFastGeoComponent local_28;
  
  FWeakFastGeoComponent::FWeakFastGeoComponent(&local_28,(FFastGeoComponent *)param_1);
  pFVar1 = (FWeakFastGeoComponent *)(this->ComponentsPendingRecreate).AllocatorInstance.Data;
  if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (this->ComponentsPendingRecreate).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8[0] = &local_28;
  TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->ComponentsPendingRecreate,(<lambda_1> *)local_res8);
  return;
}

// RequestAsyncRenderStateTasksBudget_Concurrent @ 14da33970

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
UFastGeoWorldSubsystem::RequestAsyncRenderStateTasksBudget_Concurrent
          (UFastGeoWorldSubsystem *this,float *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  UWorld *pUVar3;
  int iVar4;
  float fVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  bVar1 = IsInGameThread();
  if (bVar1) {
    if ((((this->bWaitingForCompletion != false) ||
         (pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this),
         pUVar3->IsInBlockTillLevelStreamingCompleted != 0)) ||
        (pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this),
        (bool)pUVar3->bShouldForceUnloadStreamingLevels)) ||
       (pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this),
       pUVar3->bIsBeingCleanedUp != false)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    fVar5 = __real_7f7fffff;
    if (bVar1) goto LAB_14da339f7;
  }
  else {
    bVar1 = false;
  }
  fVar5 = __real_7f7fffff;
  if ((FastGeo::GAsyncRenderStateTaskTimeBudgetMS != 0.0) &&
     (fVar5 = FastGeo::GAsyncRenderStateTaskTimeBudgetMS -
              this->UsedAsyncRenderStateTasksTimeBudgetMS, fVar5 <= 0.0)) {
    fVar5 = 0.0;
  }
LAB_14da339f7:
  *param_1 = fVar5;
  if ((bVar1) || (FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess == 0)) {
    iVar4 = 0x7fffffff;
  }
  else {
    iVar2 = FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess -
            this->UsedNumComponentsToProcessBudget;
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
  }
  *param_2 = iVar4;
  *param_3 = this->TimeEpoch;
                    /* WARNING: Could not recover jumptable at 0x00014da33a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  return;
}

// StaticRegisterNativesUFastGeoWorldSubsystem @ 14da38330

void __cdecl UFastGeoWorldSubsystem::StaticRegisterNativesUFastGeoWorldSubsystem(void)

{
  return;
}

// Tick @ 14da38880

void __thiscall UFastGeoWorldSubsystem::Tick(UFastGeoWorldSubsystem *this,float param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  *(int *)&(this->Handle_OnLevelStreamingStateChanged).ID =
       (int)(this->Handle_OnLevelStreamingStateChanged).ID + 1;
  *(undefined8 *)((longlong)&(this->Handle_OnLevelStreamingStateChanged).ID + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014da388ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

