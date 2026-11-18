// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// CreateReplicationSystem @ 1442fe290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UReplicationSystem * __cdecl
UE::Net::FReplicationSystemFactory::CreateReplicationSystem(FReplicationSystemParams *param_1)

{
  UObjectReplicationBridge *pUVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UReplicationSystem *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  pmf_753644dc pVar9;
  FUObjectItem *this;
  undefined8 *puVar10;
  code *pcVar11;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar12;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> *this_02;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ForElementType<UReplicationSystem_*> FVar16;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar17;
  undefined1 auStackY_158 [32];
  FLLMScope local_108 [2];
  undefined8 local_100;
  FName local_f8;
  FName local_f0;
  FMemScope local_e8;
  FString local_e0;
  longlong local_d0;
  undefined1 local_c8 [24];
  UObject *local_b0;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope
            (local_108,LLMTagDeclaration_IrisInitialization.UniqueName,false,None,Default,true);
  local_f8 = LLMTagDeclaration_IrisInitialization.UniqueName;
  FMemScope::FMemScope(&local_e8,&local_f8,true);
  if (param_1->ReplicationBridge == (UObjectReplicationBridge *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    if ((uint)ReplicationSystems.ArrayNum < 0x400) {
      pTVar17 = &ReplicationSystems;
      pTVar13 = &ReplicationSystems;
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar13 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      puVar15 = (undefined8 *)0x0;
      for (FVar16 = (ForElementType<UReplicationSystem_*>)pTVar13;
          FVar16 != (ForElementType<UReplicationSystem_*>)
                    ((longlong)pTVar13 + (longlong)ReplicationSystems.ArrayNum * 8);
          FVar16 = (ForElementType<UReplicationSystem_*>)((longlong)FVar16 + 8)) {
        if (*(longlong *)FVar16 == 0) {
          uVar4 = (uint)((longlong)FVar16 - (longlong)pTVar13 >> 3);
          if (uVar4 != 0xffffffff) goto LAB_1442fe482;
          break;
        }
      }
      local_100 = 0;
      pTVar13 = &ReplicationSystems;
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar13 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      if (pTVar13 <= &local_100) {
        pTVar13 = &ReplicationSystems;
        if (ReplicationSystems.AllocatorInstance.SecondaryData !=
            (ForElementType<UReplicationSystem_*>)0x0) {
          pTVar13 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)ReplicationSystems.AllocatorInstance.SecondaryData;
        }
        if ((&local_100 <
             (undefined8 *)((longlong)pTVar13 + (longlong)ReplicationSystems.ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar11 = (code *)swi(3);
          pUVar6 = (UReplicationSystem *)(*pcVar11)();
          return pUVar6;
        }
      }
      uVar4 = ReplicationSystems.ArrayNum;
      if (ReplicationSystems.ArrayNum == ReplicationSystems.ArrayMax) {
        uVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
                          (0x808,&ReplicationSystems.AllocatorInstance,&ReplicationSystems.ArrayMax)
        ;
      }
      ReplicationSystems.ArrayNum = uVar4 + 1;
      pTVar13 = &ReplicationSystems;
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar13 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      *(undefined8 *)((longlong)pTVar13 + (longlong)(int)uVar4 * 8) = local_100;
LAB_1442fe482:
      pUVar7 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = UReplicationSystem::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)(local_c8 + 0x10),pUVar8);
      local_b0 = pUVar7;
      pVar9 = (pmf_753644dc)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x10));
      if (local_78 != 0) {
        plVar14 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar14 = local_50;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar5 = 0;
      if ((int)uVar4 < ReplicationSystems.ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar11 = (code *)swi(3);
        pUVar6 = (UReplicationSystem *)(*pcVar11)();
        return pUVar6;
      }
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar17 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      *(pmf_753644dc *)((longlong)pTVar17 + (longlong)(int)uVar4 * 8) = pVar9;
      this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)pVar9 + 0xc));
      FUObjectItem::SetRootFlags(this,RootSet);
      if (3 < (byte)LogIris._0_1_) {
        local_f0 = *(FName *)((longlong)pVar9 + 0x18);
        ::FName::ToString(&local_f0,&local_e0);
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      *(uint *)((longlong)pVar9 + 0x48) = uVar4;
      uVar4 = ((uint)param_1->bIsServer ^ *(uint *)((longlong)pVar9 + 0x50)) & 1 ^
              *(uint *)((longlong)pVar9 + 0x50);
      *(uint *)((longlong)pVar9 + 0x50) = uVar4;
      *(uint *)((longlong)pVar9 + 0x50) =
           ((uint)param_1->bAllowObjectReplication * 2 ^ uVar4) & 2 ^ uVar4;
      pUVar1 = param_1->ReplicationBridge;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UObjectReplicationBridge *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(UObjectReplicationBridge **)((longlong)pVar9 + 0x38) = pUVar1;
      puVar10 = ::operator_new(0x17a0);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[1] = 0;
        *puVar10 = Core::Private::PimplPtr::DeleterFunc<UE::Net::Private::FReplicationSystemImpl>;
        Net::Private::FReplicationSystemImpl::FReplicationSystemImpl
                  ((FReplicationSystemImpl *)(puVar10 + 2),(UReplicationSystem *)pVar9,param_1);
        puVar15 = puVar10;
      }
      plVar14 = (longlong *)((longlong)pVar9 + 0x28);
      if (&local_d0 == plVar14) {
        if (puVar15 + 2 != (undefined8 *)0x0) {
          pcVar11 = (code *)*puVar15;
          goto LAB_1442fe662;
        }
      }
      else {
        lVar2 = *plVar14;
        *plVar14 = (longlong)(puVar15 + 2);
        if (lVar2 != 0) {
          pcVar11 = *(code **)(lVar2 + -0x10);
          puVar15 = (undefined8 *)(lVar2 + -0x10);
LAB_1442fe662:
          (*pcVar11)(puVar15);
        }
      }
      Net::Private::FReplicationSystemImpl::Init((FReplicationSystemImpl *)*plVar14,param_1);
      this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
      FVar12 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
               AddUObject<UReplicationSystem>
                         ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                           *)this_00,(UReplicationSystem *)local_c8,pVar9);
      *(undefined8 *)((longlong)pVar9 + 0x30) = *(undefined8 *)FVar12.ID;
      this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                GetReplicationSystemCreatedDelegate();
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_01);
      if (bVar3) {
        this_02 = GetReplicationSystemCreatedDelegate();
        TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::Broadcast
                  (this_02,(UReplicationSystem *)pVar9);
      }
      goto LAB_1442fe6f0;
    }
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x86a,L"Too many ReplicationSystems have already been created (%u)");
  }
  pVar9 = (pmf_753644dc)0x0;
LAB_1442fe6f0:
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(local_108);
  return (UReplicationSystem *)pVar9;
}

// DestroyReplicationSystem @ 1443012d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemFactory::DestroyReplicationSystem(UReplicationSystem *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> *this_00;
  FUObjectItem *this_01;
  int iVar5;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<UReplicationSystem_*> FVar7;
  int iVar8;
  longlong lVar9;
  FName local_res8;
  FString local_18;
  
  if (param_1 != (UReplicationSystem *)0x0) {
    uVar1 = param_1->Id;
    if (3 < (byte)LogIris._0_1_) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (uVar1 < (uint)ReplicationSystems.ArrayNum) {
      uVar4 = 0;
      if ((int)uVar1 < ReplicationSystems.ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = &ReplicationSystems;
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar6 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      *(undefined8 *)((longlong)pTVar6 + (longlong)(int)uVar1 * 8) = 0;
      lVar9 = (longlong)ReplicationSystems.ArrayNum;
      if ((ReplicationSystems.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = &ReplicationSystems;
      if (ReplicationSystems.AllocatorInstance.SecondaryData !=
          (ForElementType<UReplicationSystem_*>)0x0) {
        pTVar6 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *)ReplicationSystems.AllocatorInstance.SecondaryData;
      }
      FVar7 = (ForElementType<UReplicationSystem_*>)((longlong)pTVar6 + lVar9 * 8);
      do {
        if (FVar7 == (ForElementType<UReplicationSystem_*>)pTVar6) {
          iVar5 = -1;
          goto LAB_144301427;
        }
        FVar7 = (ForElementType<UReplicationSystem_*>)((longlong)FVar7 + -8);
      } while (*(longlong *)FVar7 == 0);
      iVar5 = (int)((longlong)FVar7 - (longlong)pTVar6 >> 3);
LAB_144301427:
      iVar8 = 0;
      if (iVar5 != -1) {
        iVar8 = iVar5 + 1;
      }
      TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
                (&ReplicationSystems,iVar8,No);
    }
    this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           GetReplicationSystemDestroyedDelegate();
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this);
    if (bVar3) {
      this_00 = GetReplicationSystemDestroyedDelegate();
      TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::Broadcast
                (this_00,param_1);
    }
    UReplicationSystem::Shutdown(param_1);
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_01,RootSet);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)param_1);
  }
  return;
}

// GetAllReplicationSystems @ 144303050

TArrayView<UReplicationSystem_*,int> * __cdecl
UE::Net::FReplicationSystemFactory::GetAllReplicationSystems
          (TArrayView<UReplicationSystem_*,int> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TArrayView<UReplicationSystem_*,int> *pTVar4;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  iVar2 = ReplicationSystems.ArrayNum;
  pTVar5 = &ReplicationSystems;
  if (ReplicationSystems.AllocatorInstance.SecondaryData !=
      (ForElementType<UReplicationSystem_*>)0x0) {
    pTVar5 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)ReplicationSystems.AllocatorInstance.SecondaryData;
  }
  __return_storage_ptr__->DataPtr = (UReplicationSystem **)pTVar5;
  if (iVar2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<UReplicationSystem_*,int> *)(*pcVar1)();
      return pTVar4;
    }
    __return_storage_ptr__->ArrayNum = iVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar2;
  return __return_storage_ptr__;
}

// GetReplicationSystemCreatedDelegate @ 1443047c0

TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::FReplicationSystemFactory::GetReplicationSystemCreatedDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::FReplicationSystemFactory::GetReplicationSystemCreatedDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetReplicationSystemDestroyedDelegate @ 144304840

TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::FReplicationSystemFactory::GetReplicationSystemDestroyedDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::FReplicationSystemFactory::GetReplicationSystemDestroyedDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

