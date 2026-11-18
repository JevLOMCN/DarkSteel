// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 8

// StaticClass @ 14e2a7f90

UClass * __cdecl UAnimSharingStateInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingStateInstance",
               &Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingStateInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingStateInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingStateInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton;
}

// UAnimSharingStateInstance @ 14e2abb80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimSharingStateInstance * __thiscall
UAnimSharingStateInstance::UAnimSharingStateInstance
          (UAnimSharingStateInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
  (this->AnimationToPlay).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->Instance).field0_0x0.DebugPtr = (UAnimSharingInstance *)0x0;
  return this;
}

// UAnimSharingStateInstance @ 14e2abbc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimSharingStateInstance * __thiscall
UAnimSharingStateInstance::UAnimSharingStateInstance
          (UAnimSharingStateInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->PlayRate = 1.0;
  *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
  (this->AnimationToPlay).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->PermutationTimeOffset = 0.0;
  (this->Instance).field0_0x0.DebugPtr = (UAnimSharingInstance *)0x0;
  this->StateIndex = 0xff;
  this->ComponentIndex = 0xff;
  return this;
}

// ~UAnimSharingStateInstance @ 14e2ac420

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
UAnimSharingStateInstance::~UAnimSharingStateInstance(UAnimSharingStateInstance *this)

{
  *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetInstancedActors @ 14e2afcf0

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
UAnimSharingStateInstance::GetInstancedActors
          (UAnimSharingStateInstance *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  UAnimSharingInstance *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_protected:_void___cdecl_UAnimSharingStateInstance::GetInstancedActors(TArray<AActor_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_GetInstancedActors>
  FVar15;
  TArray<TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar16;
  UObject *pUVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FNameEntryId FVar20;
  FName FVar21;
  FWeakObjectPtr *this_02;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  undefined8 local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GetInstancedActors ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UAnimSharingStateInstance::GetInstancedActors(TArray<AActor_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_GetInstancedActors>
         )0x0) {
      pFVar14 = ::FName::FName(&local_68,"STAT_GetInstancedActors");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetInstancedActors,*pFVar14,
                 L"STAT_GetInstancedActors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_GetInstancedActors;
  if (StatPtr_STAT_GetInstancedActors ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UAnimSharingStateInstance::GetInstancedActors(TArray<AActor_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_GetInstancedActors>
       )0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_GetInstancedActors");
    FVar15 = (FThreadSafeStaticStat<_protected:_void___cdecl_UAnimSharingStateInstance::GetInstancedActors(TArray<AActor_*,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_GetInstancedActors>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetInstancedActors,*pFVar14,
                          L"STAT_GetInstancedActors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.Value;
        local_res20.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingInstances.cpp"
                   ,0x10);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar20.Value;
      uStackX_c = uVar18;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar10 = true;
      goto LAB_14e2afe7a;
    }
  }
  bVar10 = false;
  FVar21 = local_58;
LAB_14e2afe7a:
  pUVar6 = (this->Instance).field0_0x0.DebugPtr;
  if (pUVar6 != (UAnimSharingInstance *)0x0) {
    bVar3 = this->StateIndex;
    if ((int)(uint)bVar3 < (pUVar6->PerStateData).ArrayNum) {
      if (((pUVar6->PerStateData).ArrayNum <= (int)(uint)bVar3) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pUVar6->PerStateData).AllocatorInstance.Data;
      bVar4 = this->ComponentIndex;
      if ((int)(uint)bVar4 < *(int *)(pFVar7 + (ulonglong)bVar3 * 0xc0 + 0x28)) {
        if ((*(int *)(pFVar7 + (ulonglong)bVar3 * 0xc0 + 0x28) <= (int)(uint)bVar4) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar16 = USkinnedMeshComponent::GetFollowerPoseComponents
                            (*(USkinnedMeshComponent **)
                              (*(longlong *)(pFVar7 + (ulonglong)bVar3 * 0xc0 + 0x20) +
                              (ulonglong)bVar4 * 8));
        this_02 = (FWeakObjectPtr *)(pTVar16->AllocatorInstance).Data;
        iVar5 = pTVar16->ArrayNum;
        pFVar2 = this_02 + iVar5;
        while( true ) {
          if (pTVar16->ArrayNum != iVar5) {
            local_res8 = local_res8 & 0xffffff00;
            `TCheckedPointerIterator<TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
          }
          if (this_02 == pFVar2) break;
          bVar12 = FWeakObjectPtr::IsValid(this_02);
          if (bVar12) {
            pUVar17 = FWeakObjectPtr::Get(this_02);
            pFVar19 = (param_1->AllocatorInstance).Data;
            pFVar7 = pFVar19 + (longlong)param_1->ArrayNum * 8;
            for (; pFVar19 != pFVar7; pFVar19 = pFVar19 + 8) {
              if (*(longlong *)pFVar19 == *(longlong *)&pUVar17[4].field_0x8) goto LAB_14e2b0062;
            }
            pUVar17 = FWeakObjectPtr::Get(this_02);
            local_78 = *(undefined8 *)&pUVar17[4].field_0x8;
            pFVar7 = (param_1->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 < pFVar7 + (longlong)param_1->ArrayMax * 8))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar13 = param_1->ArrayNum;
            if (iVar13 == param_1->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar13 + 1;
            *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_78;
          }
LAB_14e2b0062:
          this_02 = this_02 + 1;
        }
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14e2b03f0

UClass * __cdecl UAnimSharingStateInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingStateInstance",
               &Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingStateInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingStateInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingStateInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton;
}

// StaticRegisterNativesUAnimSharingStateInstance @ 14e2b90e0

void __cdecl UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimSharingStateInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetInstancedActors @ 14e2be740

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
UAnimSharingStateInstance::execGetInstancedActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetInstancedActors((UAnimSharingStateInstance *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

