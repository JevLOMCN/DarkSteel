// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147671900

UClass * __cdecl UActorSoundParameterInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorSoundParameterInterface",
               &Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton,
               StaticRegisterNativesUActorSoundParameterInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorSoundParameterInterface>,
               InternalVTableHelperCtorCaller<UActorSoundParameterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton;
}

// UActorSoundParameterInterface @ 1476882c0

UActorSoundParameterInterface * __thiscall
UActorSoundParameterInterface::UActorSoundParameterInterface
          (UActorSoundParameterInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActorSoundParameterInterface__6B_;
  return this;
}

// UActorSoundParameterInterface @ 1476882f0

UActorSoundParameterInterface * __thiscall
UActorSoundParameterInterface::UActorSoundParameterInterface
          (UActorSoundParameterInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActorSoundParameterInterface__6B_;
  return this;
}

// ~UActorSoundParameterInterface @ 14768a720

void __thiscall
UActorSoundParameterInterface::~UActorSoundParameterInterface(UActorSoundParameterInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// operator() @ 14768b9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UActorSoundParameterInterface::GetImplementers'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1)

{
  int *piVar1;
  UClass *this_00;
  ForAnyElementType *pFVar2;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  AActor *local_res10;
  UClass *local_res18 [2];
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 != (AActor *)0x0) {
    this_00 = (UClass *)param_1->_padding_;
    local_res10 = param_1;
    if (this_00 != (UClass *)0x0) {
      pUVar7 = UActorSoundParameterInterface::StaticClass();
      bVar5 = UClass::ImplementsInterface(this_00,pUVar7);
      if (bVar5) {
        pFVar2 = *(ForAnyElementType **)this;
        if (((pFVar2->Data <= (FScriptContainerElement *)&local_res10) &&
            ((FScriptContainerElement *)&local_res10 <
             pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar6 + 1;
        *(AActor **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10;
      }
    }
    local_res18[0] = UActorSoundParameterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    AActor::GetComponentsByInterface(local_res10,&local_18,(TSubclassOf<UInterface>)local_res18);
    pTVar3 = *(TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
    if ((pTVar3 == &local_18) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_18.ArrayNum != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_18.ArrayNum,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,
                         &pTVar3->ArrayMax);
      memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 8,local_18.AllocatorInstance.Data,
             (longlong)local_18.ArrayNum << 3);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Fill @ 1476a7a00

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
UActorSoundParameterInterface::Fill
          (AActor *param_1,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *this;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_void___cdecl_UActorSoundParameterInterface::Fill(AActor_const_*,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_Fill>
  FVar8;
  UClass *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  ForAnyElementType FVar14;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<AActor_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UActorSoundParameterInterface_Fill ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_UActorSoundParameterInterface::Fill(AActor_const_*,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_Fill>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res18._s_0,"UActorSoundParameterInterface_Fill");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UActorSoundParameterInterface_Fill,*pFVar7,
                   L"UActorSoundParameterInterface_Fill","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_UActorSoundParameterInterface_Fill;
  if (StatPtr_UActorSoundParameterInterface_Fill ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_UActorSoundParameterInterface::Fill(AActor_const_*,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_Fill>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res20,"UActorSoundParameterInterface_Fill");
    FVar8 = (FThreadSafeStaticStat<_public:_static_void___cdecl_UActorSoundParameterInterface::Fill(AActor_const_*,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_Fill>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UActorSoundParameterInterface_Fill,
                         *pFVar7,L"UActorSoundParameterInterface_Fill","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar12.Bits;
        uStackX_1c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\ActorSoundParameterInterface.cpp"
                   ,0x18);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar12.Bits;
      uStackX_1c = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      goto LAB_1476a7b67;
    }
  }
  bVar3 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1476a7b67:
  if (ActorSoundParameterInterfaceConsoleVariables::bGatherImplementers == false) {
    if ((param_1 != (AActor *)0x0) && (this = (UClass *)param_1->_padding_, this != (UClass *)0x0))
    {
      pUVar9 = StaticClass();
      bVar6 = UClass::ImplementsInterface(this,pUVar9);
      if (bVar6) {
        IActorSoundParameterInterface::Execute_GetActorSoundParams((UObject *)param_1,param_2);
      }
    }
  }
  else {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    GetImplementers(param_1,&local_38,&local_48);
    iVar5 = local_38.ArrayNum;
    uVar11 = (ulonglong)local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + uVar11 * 8;
    FVar14.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar5) {
        `TCheckedPointerIterator<AActor_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (FVar14.Data == pFVar1) break;
      IActorSoundParameterInterface::Execute_GetActorSoundParams(*(UObject **)FVar14.Data,param_2);
      uVar11 = local_38._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
    }
    iVar5 = local_48.ArrayNum;
    uVar11 = (ulonglong)local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + uVar11 * 8;
    FVar14.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar5) {
        `TCheckedPointerIterator<UActorComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar14.Data == pFVar1) break;
      IActorSoundParameterInterface::Execute_GetActorSoundParams(*(UObject **)FVar14.Data,param_2);
      uVar11 = local_48._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// GetImplementers @ 1476b0eb0

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
UActorSoundParameterInterface::GetImplementers
          (AActor *param_1,TArray<AActor_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  USceneComponent *this;
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_static_void___cdecl_UActorSoundParameterInterface::GetImplementers(AActor_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_GetImplementers>
  FVar10;
  UClass *pUVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res20 [2];
  AActor *local_a8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_a0;
  FName local_90;
  FScriptContainerElement *local_88;
  TArray<AActor_const_*,TSizedDefaultAllocator<32>_> *local_80;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *local_78;
  FName local_70;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_60;
  UClass *local_50;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_UActorSoundParameterInterface_GetImplementers ==
        (FThreadSafeStaticStat<_private:_static_void___cdecl_UActorSoundParameterInterface::GetImplementers(AActor_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_GetImplementers>
         )0x0) {
      pFVar9 = ::FName::FName(&local_48,"UActorSoundParameterInterface_GetImplementers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_UActorSoundParameterInterface_GetImplementers
                 ,*pFVar9,L"UActorSoundParameterInterface_GetImplementers","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_UActorSoundParameterInterface_GetImplementers;
  if (StatPtr_UActorSoundParameterInterface_GetImplementers ==
      (FThreadSafeStaticStat<_private:_static_void___cdecl_UActorSoundParameterInterface::GetImplementers(AActor_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_GetImplementers>
       )0x0) {
    pFVar9 = ::FName::FName(&local_40,"UActorSoundParameterInterface_GetImplementers");
    FVar10 = (FThreadSafeStaticStat<_private:_static_void___cdecl_UActorSoundParameterInterface::GetImplementers(AActor_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_UActorSoundParameterInterface_GetImplementers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_UActorSoundParameterInterface_GetImplementers,*pFVar9,
                          L"UActorSoundParameterInterface_GetImplementers","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar13.Value;
        local_90.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\ActorSoundParameterInterface.cpp"
                   ,0x39);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar13.Value;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_1476b1017;
    }
  }
  bVar3 = false;
  FVar14 = local_70;
LAB_1476b1017:
  if (param_1 != (AActor *)0x0) {
    this = (param_1->RootComponent).field0_0x0.DebugPtr;
    local_80 = param_2;
    local_78 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)param_3;
    if (this != (USceneComponent *)0x0) {
      param_1 = USceneComponent::GetAttachmentRootActor(this);
    }
    `UActorSoundParameterInterface::GetImplementers'::__l2::<lambda_1>::operator()
              (&local_80,param_1);
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    AActor::GetAttachedActors(param_1,&local_a0,false,true);
    iVar5 = local_a0.ArrayNum;
    pFVar16 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 8;
    FVar17.Data = local_a0.AllocatorInstance.Data;
    local_88 = pFVar16;
    while( true ) {
      if (local_a0.ArrayNum != iVar5) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (FVar17.Data == pFVar16) break;
      local_a8 = *(AActor **)FVar17.Data;
      if (local_a8 != (AActor *)0x0) {
        this_00 = (UClass *)local_a8->_padding_;
        if (this_00 != (UClass *)0x0) {
          pUVar11 = StaticClass();
          bVar7 = UClass::ImplementsInterface(this_00,pUVar11);
          if (bVar7) {
            pFVar16 = (param_2->AllocatorInstance).Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)param_2->ArrayMax * 8))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar8 = param_2->ArrayNum;
            if (iVar8 == param_2->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar8 + 1;
            *(AActor **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
          }
        }
        local_50 = StaticClass();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_50);
        }
        AActor::GetComponentsByInterface(local_a8,&local_60,(TSubclassOf<UInterface>)&local_50);
        pTVar6 = local_78;
        if ((local_78 == &local_60) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar15 = (longlong)local_60.ArrayNum;
        if (local_60.ArrayNum != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_60.ArrayNum,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,
                             &pTVar6->ArrayMax);
          memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar8 * 8,
                 local_60.AllocatorInstance.Data,lVar15 << 3);
        }
        pFVar16 = local_88;
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
          pFVar16 = local_88;
        }
      }
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// GetPrivateStaticClass @ 1476b3b90

UClass * __cdecl UActorSoundParameterInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorSoundParameterInterface",
               &Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton,
               StaticRegisterNativesUActorSoundParameterInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorSoundParameterInterface>,
               InternalVTableHelperCtorCaller<UActorSoundParameterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton;
}

// StaticRegisterNativesUActorSoundParameterInterface @ 1476ca1a0

void __cdecl UActorSoundParameterInterface::StaticRegisterNativesUActorSoundParameterInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UActorSoundParameterInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

