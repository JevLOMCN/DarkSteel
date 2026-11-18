// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 8

// StaticClass @ 14ac64100

UClass * __cdecl UTemplateSequenceSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSystem",
               &Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceSystem,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequenceSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequenceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton;
}

// UTemplateSequenceSystem @ 14ac70cb0

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequenceSystem * __thiscall
UTemplateSequenceSystem::UTemplateSequenceSystem
          (UTemplateSequenceSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  return this;
}

// UTemplateSequenceSystem @ 14ac70d10

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequenceSystem * __thiscall
UTemplateSequenceSystem::UTemplateSequenceSystem
          (UTemplateSequenceSystem *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FTemplateSequenceComponentTypes *pFVar5;
  FScriptContainerElement *this_00;
  undefined8 local_res8;
  UObject *local_res18;
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
  *(TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> *)&this->_padding_ =
       pFVar5->TemplateSequence;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  local_28._First = (FComponentTypeID *)&local_res8;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 2);
  local_res8._0_2_ = (ushort)pFVar5->TemplateSequence;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&this->ApplicableFilter,&local_28);
  piVar1 = &(this->ApplicableFilter).Filter.ComplexMasks.ArrayMax;
  uVar2._0_2_ = (pFVar4->Tags).NeedsLink;
  uVar2._2_2_ = (pFVar4->Tags).NeedsUnlink;
  local_res8 = (UClass *)CONCAT44(local_res8._4_4_,uVar2);
  iVar3 = (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance,piVar1)
    ;
  }
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = iVar3 + 1;
  local_28._First = (FComponentTypeID *)&local_res8;
  this_00 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data +
            (longlong)iVar3 * 0x3c;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38].field_0x0 = 2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_28);
  return this;
}

// ~UTemplateSequenceSystem @ 14ac71840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTemplateSequenceSystem::~UTemplateSequenceSystem(UTemplateSequenceSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
  pFVar1 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// operator() @ 14ac71a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UTemplateSequenceSystem::OnRun'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FInstanceHandle> param_2
          ,TRead<FGuid> param_3,TRead<UE::MovieScene::FTemplateSequenceComponentData> param_4)

{
  longlong lVar1;
  ushort uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FComponentMask *pFVar9;
  FEntityAllocation *pFVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_66 [6];
  longlong local_60;
  ulonglong local_58;
  FPlaybackCapabilityPtr local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  pFVar9 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  uVar2 = *(ushort *)(*(longlong *)this + 0x132);
  if (((uVar2 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar2)) ||
     (bVar6 = true,
     (*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) ==
     0)) {
    bVar6 = false;
  }
  uVar2 = *(ushort *)(*(longlong *)this + 0x134);
  if (((uVar2 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar2)) ||
     (bVar7 = true,
     (*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) ==
     0)) {
    bVar7 = false;
  }
  pFVar10 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
  iVar11 = 0;
  local_58 = (ulonglong)pFVar10->Size;
  if (local_58 != 0) {
    lVar13 = 0;
    do {
      local_60 = (ulonglong)*(ushort *)((longlong)param_2 + lVar13 * 4) * 0x140 +
                 *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
      pTVar3 = *(TReferenceControllerBase<1> **)(local_60 + 0x120);
      lVar4 = *(longlong *)(local_60 + 0x118);
      lVar1 = (longlong)param_4 + (longlong)iVar11 * 0x14;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = IsInGameThread();
      if (!bVar8) {
        local_66[0] = bVar8;
        `UE::MovieScene::FSharedPlaybackState::
        FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>'::__l2::<lambda_1>
        ::operator()(local_66);
      }
      UE::MovieScene::IStaticBindingOverridesPlaybackCapability::GetPlaybackCapabilityID();
      UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                ((FPlaybackCapabilitiesImpl *)(lVar4 + 0x38),&local_50,
                 1 << ((byte)local_66._2_4_ & 0x1f));
      if (local_50.Ptr == (longlong *)0x0) {
LAB_14ac71c17:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_14ac71c1f:
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_313004018097979313>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x4f,"StaticOverrides");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        plVar12 = local_50.Ptr;
        if (local_50.StorageMode != Inline) {
          if ((local_50.StorageMode != RawPointer) && (local_50.StorageMode != SharedPointer)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x30,L"Unexpected playback capability storage mode");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto LAB_14ac71c17;
          }
          plVar12 = *(longlong **)local_50.Ptr;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (plVar12 == (longlong *)0x0) goto LAB_14ac71c1f;
        if (bVar6) {
          local_40 = *(undefined4 *)param_3;
          uStack_3c = *(undefined4 *)((longlong)param_3 + 4);
          uStack_38 = *(undefined4 *)((longlong)param_3 + 8);
          uStack_34 = *(undefined4 *)((longlong)param_3 + 0xc);
          local_30 = *(undefined4 *)(local_60 + 0x128);
          (**(code **)(*plVar12 + 0x10))(plVar12,lVar1,&local_40);
        }
        else if (bVar7) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar1);
        }
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 1;
      param_3 = (TRead<FGuid>)((longlong)param_3 + 0x10);
    } while (lVar13 < (longlong)local_58);
  }
  return;
}

// GetPrivateStaticClass @ 14ac781f0

UClass * __cdecl UTemplateSequenceSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSystem",
               &Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceSystem,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequenceSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequenceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton;
}

// OnRun @ 14ac7bdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequenceSystem::OnRun
          (UTemplateSequenceSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FTemplateSequenceComponentTypes *pFVar6;
  FScriptContainerElement *this_00;
  undefined1 auStack_1e8 [32];
  FComponentTypeID local_1c8;
  ushort local_1c6;
  FComponentTypeID local_1c4 [6];
  undefined8 local_1b8;
  TStatIdData *pTStack_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  uint uStack_19c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  <lambda_1> local_188;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_178;
  TComponentTypeID<FGuid> TStack_176;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> TStack_174;
  undefined2 uStack_172;
  undefined8 uStack_170;
  TStatIdData *pTStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined1 local_148 [4];
  FComponentAccess aFStack_144 [2];
  wchar_t *pwStack_140;
  TStatIdData *local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  FEntityComponentFilter local_120;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  bVar3 = UE::MovieScene::FCachedEntityFilterResult_Match::Matches
                    (&this->ApplicableFilter,(FEntityManager *)(this->_padding_ + 0x28));
  if (bVar3) {
    pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar6 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
    lVar1 = this->_padding_;
    if (*(longlong *)(lVar1 + 0x580) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_188.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
    local_1b8 = 0;
    pTStack_1b0 = &TStatId::TStatId_NAME_None;
    local_178 = pFVar5->InstanceHandle;
    TStack_176 = pFVar5->GenericObjectBinding;
    TStack_174 = pFVar6->TemplateSequence;
    local_1c8.Value = (pFVar5->Tags).NeedsLink.Value;
    uStack_170 = 0;
    pTStack_168 = &TStatId::TStatId_NAME_None;
    local_148._2_2_ = TStack_176;
    local_148._0_2_ = local_178;
    unique0x10000244 = TStack_174;
    unique0x10000246 = uStack_172;
    local_1c6 = (pFVar5->Tags).NeedsUnlink.Value;
    uStack_1a0 = 0x6ff;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_160 = CONCAT71(uStack_1a7,local_1a8) & 0xffffffffffffffe0;
    uStack_158._4_4_ = uStack_19c;
    uStack_158._0_4_ = AnyHiPriThreadHiPriTask;
    local_120.AllMask.Bits.NumBits = 0;
    local_120.AllMask.Bits.MaxBits = 0x180;
    pwStack_140 = (wchar_t *)0x0;
    local_138 = &TStatId::TStatId_NAME_None;
    local_120.NoneMask.Bits.NumBits = 0;
    local_120.NoneMask.Bits.MaxBits = 0x180;
    local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ComplexMasks.ArrayNum = 0;
    local_120.ComplexMasks.ArrayMax = 0;
    local_70 = 0;
    local_6c = 0x180;
    local_38 = 0;
    local_34 = 0x180;
    local_1a8 = local_1a8 & 0xe0;
    local_188.BuiltInComponents = pFVar5;
    uStack_130 = uStack_160;
    local_128 = uStack_158;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_148,&local_120);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_120);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 4),&local_120);
    iVar4 = local_120.ComplexMasks.ArrayNum;
    if (local_120.ComplexMasks.ArrayNum == local_120.ComplexMasks.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_120.ComplexMasks.AllocatorInstance,
                         &local_120.ComplexMasks.ArrayMax);
    }
    local_120.ComplexMasks.ArrayNum = iVar4 + 1;
    local_198._First = &local_1c8;
    this_00 = local_120.ComplexMasks.AllocatorInstance.Data + (longlong)iVar4 * 0x3c;
    local_198._Last = local_1c4;
    *(int *)(this_00 + 0x30) = 0;
    *(int *)(this_00 + 0x34) = 0x180;
    this_00[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_198);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequenceComponentData>_>
    ::Iterate_PerAllocationImpl<_UTemplateSequenceSystem::OnRun_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequenceComponentData>_>
                *)local_148,(FEntityManager *)(this->_padding_ + 0x28),&local_120,&local_188);
    if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUTemplateSequenceSystem @ 14ac805c0

void __cdecl UTemplateSequenceSystem::StaticRegisterNativesUTemplateSequenceSystem(void)

{
  return;
}

