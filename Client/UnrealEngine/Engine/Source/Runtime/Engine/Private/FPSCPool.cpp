// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1481b9e70

UScriptStruct * __cdecl FPSCPool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPSCPool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPSCPool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPSCPool,(UObject *)pUVar1,L"PSCPool");
  }
  return Z_Registration_Info_UScriptStruct_FPSCPool.OuterSingleton;
}

// Acquire @ 1481d1840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UParticleSystemComponent * __thiscall
FPSCPool::Acquire(FPSCPool *this,UWorld *param_1,UParticleSystem *param_2,EPSCPoolMethod param_3)

{
  uint uVar1;
  int *piVar2;
  UParticleSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UParticleSystemComponent *pUVar7;
  UWorld *pUVar8;
  FScriptContainerElement *_Dst;
  FObjectPtr_u_0 FVar9;
  FWeakObjectPtr *this_00;
  UParticleSystemComponent *local_res8;
  UParticleSystemComponent *local_28 [2];
  
  if (GbEnableParticleSystemPooling == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GbEnableParticleSystemPooling",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                       ,0x3b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UParticleSystemComponent *)(*pcVar4)();
      return pUVar7;
    }
  }
  if (param_3 == None) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolingMethod != EPSCPoolMethod::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                       ,0x3c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UParticleSystemComponent *)(*pcVar4)();
      return pUVar7;
    }
  }
  iVar6 = (this->FreeElements).ArrayNum;
  if (iVar6 == 0) {
    pUVar8 = (UWorld *)UWorld::GetWorldSettings(param_1,false,true);
    if (pUVar8 != (UWorld *)0x0) {
      param_1 = pUVar8;
    }
    pUVar7 = NewObject<UParticleSystemComponent>((UObject *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar7->bAutoDestroy = '\0';
    pUVar7->SecondsBeforeInactive = 0.0;
    pUVar7->field_0x9a = pUVar7->field_0x9a & 0xf7;
    UParticleSystemComponent::SetTemplate(pUVar7,param_2);
    pUVar7->bOverrideLODMethod = '\0';
    pUVar7->bAllowRecycling = '\x01';
  }
  else {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UParticleSystemComponent *)(*pcVar4)();
        return pUVar7;
      }
    }
    pUVar7 = *(UParticleSystemComponent **)
              ((this->FreeElements).AllocatorInstance.Data +
              (longlong)(this->FreeElements).ArrayNum * 0x10 + -0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    iVar6 = (this->FreeElements).ArrayNum;
    uVar1 = iVar6 - 1;
    _Dst = (this->FreeElements).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    iVar6 = ~uVar1 + iVar6;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
    }
    piVar2 = &(this->FreeElements).ArrayNum;
    *piVar2 = *piVar2 + -1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar3 = (pUVar7->Template).field0_0x0.DebugPtr;
    if (pUVar3 == (UParticleSystem *)0x0) {
      bVar5 = param_2 == (UParticleSystem *)0x0;
    }
    else {
      bVar5 = pUVar3 == param_2;
    }
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RetElem.PSC->Template == Template",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                         ,0x42,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UParticleSystemComponent *)(*pcVar4)();
        return pUVar7;
      }
    }
    if (((uint)*(longlong *)&pUVar7->field_0x8 >> 0x1e & 1) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(RetElem.PSC)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                         ,0x43,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UParticleSystemComponent *)(*pcVar4)();
        return pUVar7;
      }
    }
    USceneComponent::SetVisibility((USceneComponent *)pUVar7,true,DirtyOnly);
    USceneComponent::SetHiddenInGame((USceneComponent *)pUVar7,false,DirtyOnly);
    pUVar8 = *(UWorld **)&pUVar7->field_0xb0;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar7);
    }
    if (pUVar8 != param_1) {
      (**(code **)(*(longlong *)pUVar7 + 0x170))(pUVar7,0,param_1,0);
    }
  }
  pUVar7->PoolingMethod = param_3;
  if (param_3 == AutoRelease) {
    iVar6 = (this->InUseComponents_Auto).ArrayNum;
    piVar2 = &(this->InUseComponents_Auto).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->InUseComponents_Auto).AllocatorInstance,piVar2);
    }
    (this->InUseComponents_Auto).ArrayNum = iVar6 + 1;
    this_00 = (FWeakObjectPtr *)
              ((this->InUseComponents_Auto).AllocatorInstance.Data + (longlong)iVar6 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FVar9.Handle = (UObject *)&local_res8;
  }
  else {
    if (param_3 != ManualRelease) goto LAB_1481d1b90;
    iVar6 = (this->InUseComponents_Manual).ArrayNum;
    piVar2 = &(this->InUseComponents_Manual).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->InUseComponents_Manual).AllocatorInstance,piVar2);
    }
    (this->InUseComponents_Manual).ArrayNum = iVar6 + 1;
    this_00 = (FWeakObjectPtr *)
              ((this->InUseComponents_Manual).AllocatorInstance.Data + (longlong)iVar6 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_28[0] = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FVar9.Handle = (UObject *)local_28;
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)FVar9);
LAB_1481d1b90:
  iVar6 = (this->InUseComponents_Manual).ArrayNum + (this->InUseComponents_Auto).ArrayNum;
  if (iVar6 < this->MaxUsed) {
    iVar6 = this->MaxUsed;
  }
  this->MaxUsed = iVar6;
  return pUVar7;
}

// Cleanup @ 1481d99c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPSCPool::Cleanup(FPSCPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->FreeElements).ArrayNum;
  pFVar3 = (this->FreeElements).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->FreeElements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPSCPoolElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong *)pFVar3 == 0) {
      if (1 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      *(undefined1 *)(*(longlong *)pFVar3 + 0x584) = 0;
      (**(code **)(**(longlong **)pFVar3 + 0x4a0))(*(longlong **)pFVar3,0);
      pFVar3 = pFVar3 + 0x10;
    }
  }
  piVar1 = &(this->FreeElements).ArrayMax;
  (this->FreeElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->InUseComponents_Auto).ArrayMax;
  (this->InUseComponents_Auto).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->InUseComponents_Auto).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InUseComponents_Manual).ArrayMax;
  (this->InUseComponents_Manual).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->InUseComponents_Manual).AllocatorInstance,0,piVar1);
  }
  return;
}

// KillUnusedComponents @ 148206680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPSCPool::KillUnusedComponents(FPSCPool *this,float param_1,UParticleSystem *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  <lambda_1> local_res8 [8];
  <lambda_2> local_res20 [8];
  FString local_58;
  FString local_48 [2];
  
  iVar7 = (this->FreeElements).ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->FreeElements).AllocatorInstance.Data + lVar11 + 8;
      if (param_1 < *(float *)pFVar2 || param_1 == *(float *)pFVar2) {
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      }
      else {
        uVar6 = 0;
        if ((int)uVar10 < (this->FreeElements).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)((this->FreeElements).AllocatorInstance.Data + lVar11);
        if (plVar3 != (longlong *)0x0) {
          *(undefined1 *)((longlong)plVar3 + 0x584) = 0;
          (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->FreeElements).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->FreeElements).ArrayNum;
        pFVar2 = (this->FreeElements).AllocatorInstance.Data;
        iVar8 = ~uVar10 + iVar7;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar10 * 0x10,pFVar2 + (longlong)(iVar7 - iVar8) * 0x10,
                  (longlong)iVar8 << 4);
        }
        piVar1 = &(this->FreeElements).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      iVar7 = (this->FreeElements).ArrayNum;
    } while ((int)uVar10 < iVar7);
  }
  piVar1 = &(this->FreeElements).ArrayMax;
  if (*piVar1 != iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,(ForAnyElementType *)this,iVar7,piVar1);
  }
  iVar7 = TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          ::RemoveAllSwap<_FPSCPool::KillUnusedComponents_::__l13::<lambda_1>_>
                    (&this->InUseComponents_Manual,local_res8,Default);
  if ((0 < iVar7) && (4 < (byte)LogParticles._0_1_)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_58,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          ::RemoveAllSwap<_FPSCPool::KillUnusedComponents_::__l34::<lambda_2>_>
                    (&this->InUseComponents_Auto,local_res20,Default);
  if ((0 < iVar7) && (4 < (byte)LogParticles._0_1_)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Reclaim @ 14820cb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FPSCPool::Reclaim(FPSCPool *this,UParticleSystemComponent *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *this_00;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  UParticleSystemComponent *local_58;
  UParticleSystemComponent *local_50;
  UParticleSystemComponent *local_48;
  float local_40;
  TVector<double>_u_0 local_38 [2];
  
  if (param_1 == (UParticleSystemComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PSC",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->PoolingMethod == AutoRelease) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
    this_00 = &this->InUseComponents_Auto;
    pFVar6 = &local_res10;
LAB_14820cc23:
    iVar5 = TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            ::RemoveSingleSwap(this_00,(TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr> *)
                                       pFVar6,Default);
    if (0 < iVar5) goto LAB_14820cc50;
  }
  else if (param_1->PoolingMethod == ManualRelease) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_50 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
    this_00 = &this->InUseComponents_Manual;
    pFVar6 = &local_res20;
    goto LAB_14820cc23;
  }
  if (1 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
LAB_14820cc50:
  if ((GbEnableParticleSystemPooling == 0) ||
     ((int)((param_1->Template).field0_0x0.DebugPtr)->_padding_ <= (this->FreeElements).ArrayNum)) {
    param_1->PoolingMethod = None;
    (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,0);
  }
  else {
    param_1->bHasBeenActivated = '\0';
    (**(code **)(*(longlong *)param_1 + 0x518))
              (param_1,&FDetachmentTransformRules::KeepWorldTransform);
    local_38[0]._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_38[0]._s_0.Y = _UNK_150689688;
    local_38[0]._s_0.Z = __real_3ff0000000000000;
    USceneComponent::SetRelativeScale3D
              ((USceneComponent *)param_1,(TVector<double> *)&local_38[0]._s_0);
    USceneComponent::SetAbsolute((USceneComponent *)param_1,false,false,false);
    UActorComponent::UnregisterComponent((UActorComponent *)param_1);
    UPrimitiveComponent::SetCastShadow((UPrimitiveComponent *)param_1,false);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleSpawn);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleBurst);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleDeath);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleCollide);
    param_1->bWasActive = '\0';
    (param_1->InstanceParameters).ArrayNum = 0;
    if ((param_1->InstanceParameters).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,0,&(param_1->InstanceParameters).AllocatorInstance,0,
                 &(param_1->InstanceParameters).ArrayMax);
    }
    UPrimitiveComponent::SetCullDistance((UPrimitiveComponent *)param_1,__real_7f7fffff);
    param_1->PoolingMethod = FreeInPool;
    pFVar2 = (this->FreeElements).AllocatorInstance.Data;
    local_48 = param_1;
    local_40 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar2 + (longlong)(this->FreeElements).ArrayMax * 0x10)) {
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
    iVar5 = (this->FreeElements).ArrayNum;
    piVar1 = &(this->FreeElements).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->FreeElements).ArrayNum = iVar5 + 1;
    pFVar2 = (this->FreeElements).AllocatorInstance.Data;
    *(UParticleSystemComponent **)(pFVar2 + (longlong)iVar5 * 0x10) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    *(float *)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_40;
  }
  return;
}

