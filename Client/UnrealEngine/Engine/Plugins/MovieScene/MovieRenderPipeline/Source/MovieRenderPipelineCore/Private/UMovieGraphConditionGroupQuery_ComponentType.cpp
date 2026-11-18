// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc989a0

UClass * __cdecl UMovieGraphConditionGroupQuery_ComponentType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentType>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ComponentType @ 14dcaf720

UMovieGraphConditionGroupQuery_ComponentType * __thiscall
UMovieGraphConditionGroupQuery_ComponentType::UMovieGraphConditionGroupQuery_ComponentType
          (UMovieGraphConditionGroupQuery_ComponentType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
  (this->ClassViewerWidget).Object = (SClassViewer *)0x0;
  (this->ClassViewerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTypes).ArrayNum = 0;
  (this->ComponentTypes).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_ComponentType @ 14dcaf760

UMovieGraphConditionGroupQuery_ComponentType * __thiscall
UMovieGraphConditionGroupQuery_ComponentType::UMovieGraphConditionGroupQuery_ComponentType
          (UMovieGraphConditionGroupQuery_ComponentType *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
  (this->ClassViewerWidget).Object = (SClassViewer *)0x0;
  (this->ClassViewerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTypes).ArrayNum = 0;
  (this->ComponentTypes).ArrayMax = 0;
  this->bOnlyMatchComponents = true;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ComponentType @ 14dcb2a90

void __thiscall
UMovieGraphConditionGroupQuery_ComponentType::~UMovieGraphConditionGroupQuery_ComponentType
          (UMovieGraphConditionGroupQuery_ComponentType *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
  pFVar1 = (this->ComponentTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassViewerWidget).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphConditionGroupQuery_ComponentType::Evaluate
          (UMovieGraphConditionGroupQuery_ComponentType *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((this->bOnlyMatchComponents != false) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  EvaluateActorsAndComponents
            (this,param_1,param_2,param_3,
             (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// EvaluateActorsAndComponents @ 14dcc5d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphConditionGroupQuery_ComponentType::EvaluateActorsAndComponents
          (UMovieGraphConditionGroupQuery_ComponentType *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_4
          )

{
  ForElementType<UActorComponent_*> FVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  AActor *this_00;
  AActor *this_01;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  ForElementType<UActorComponent_*> FVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStackY_178 [32];
  undefined1 local_147 [7];
  UClass *local_140;
  uint local_138;
  AActor *local_130;
  UActorComponent *local_128;
  AActor *local_120;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_118;
  FScriptContainerElement *local_110;
  ForElementType<UActorComponent_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_130 = (AActor *)param_4;
  bVar11 = -1 < CpuChannel->Enabled;
  local_118 = param_1;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1985,
               "UMovieGraphConditionGroupQuery_ComponentType::EvaluateActorsAndComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x7c1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1985);
  }
  this_01 = local_130;
  local_138 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_138;
  pFVar10 = (param_1->AllocatorInstance).Data;
  local_108.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
  local_40 = 0;
  local_110 = pFVar10 + uVar8 * 8;
  local_3c = 0x18;
  do {
    pFVar2 = local_110;
    if (param_1->ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_147);
    }
    if (pFVar10 == pFVar2) {
      if (local_108.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    this_00 = *(AActor **)pFVar10;
    local_40 = 0;
    local_120 = this_00;
    if ((local_3c < 0) && (local_3c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                (8,8,0,&local_108,0,&local_3c);
    }
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UClass *)0x0) goto LAB_14dcc5ebc;
LAB_14dcc5eef:
      pUVar5 = (UClass *)0x0;
    }
    else {
      if (pUVar4 == (UClass *)0x0) goto LAB_14dcc5eef;
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14dcc5ebc:
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar5 == (UClass *)0x0) goto LAB_14dcc5eef;
      iVar3 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pUVar5 = pUVar4;
      if (!bVar12) goto LAB_14dcc5eef;
    }
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    local_140 = pUVar4;
    if (pUVar5 == pUVar6) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this_00,(TSubclassOf<UActorComponent>)&local_140,
                 (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_108);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this_00,(TSubclassOf<UActorComponent>)&local_140,
                 (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_108);
    }
    iVar3 = local_40;
    FVar9 = (ForElementType<UActorComponent_*>)&local_108;
    if (local_108.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
      FVar9 = local_108.SecondaryData;
    }
    FVar1 = (ForElementType<UActorComponent_*>)((longlong)FVar9 + (longlong)local_40 * 8);
LAB_14dcc5f73:
    if (local_40 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_147);
    }
    if (FVar9 != FVar1) {
      local_140 = *(UClass **)FVar9;
      pFVar7 = (this->ComponentTypes).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)(this->ComponentTypes).ArrayNum * 8;
      if (pFVar7 == pFVar2) {
LAB_14dcc5ffd:
        FVar9 = (ForElementType<UActorComponent_*>)((longlong)FVar9 + 8);
      }
      else {
        do {
          if (*(longlong *)pFVar7 == 0) {
            bVar12 = local_140->_padding_ == 0;
          }
          else {
            bVar12 = *(longlong *)pFVar7 == local_140->_padding_;
          }
          if (bVar12) {
            if (this->bOnlyMatchComponents != false) {
              TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
              Emplace<UActorComponent_*_const_&>
                        ((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                          *)this_01,&local_128,(bool *)&local_140);
              FVar9 = (ForElementType<UActorComponent_*>)((longlong)FVar9 + 8);
              goto LAB_14dcc5f73;
            }
            TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
            Emplace<AActor_*_const_&>(param_3,&local_130,(bool *)&local_120);
            goto LAB_14dcc5ffd;
          }
          pFVar7 = pFVar7 + 8;
        } while (pFVar7 != pFVar2);
        FVar9 = (ForElementType<UActorComponent_*>)((longlong)FVar9 + 8);
      }
      goto LAB_14dcc5f73;
    }
    local_40 = 0;
    if ((local_3c < 0) && (local_3c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                (8,8,0,&local_108,0,&local_3c);
    }
    pFVar10 = pFVar10 + 8;
    uVar8 = (ulonglong)local_138;
    param_1 = local_118;
  } while( true );
}

// GetDisplayName @ 14dccca00

FText * __thiscall
UMovieGraphConditionGroupQuery_ComponentType::GetDisplayName
          (UMovieGraphConditionGroupQuery_ComponentType *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ComponentType",
                 L"Component Type");
      atexit(`UMovieGraphConditionGroupQuery_ComponentType::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdef0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ComponentType::GetIcon
          (UMovieGraphConditionGroupQuery_ComponentType *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"ClassIcon.ActorComponent");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorTagIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorTagIcon;
    }
  }
  return &ActorTagIcon;
}

// GetPrivateStaticClass @ 14dcd2000

UClass * __cdecl UMovieGraphConditionGroupQuery_ComponentType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentType>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton;
}

// Serialize @ 14dce26b0

void __thiscall
UMovieGraphConditionGroupQuery_ComponentType::Serialize
          (UMovieGraphConditionGroupQuery_ComponentType *this,FArchive *param_1)

{
  int iVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieRenderPipelineCoreObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FMovieRenderPipelineCoreObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bOnlyMatchComponents = false;
  }
  return;
}

// Serialize @ 14dce2710

void __thiscall
UMovieGraphConditionGroupQuery_ComponentType::Serialize
          (UMovieGraphConditionGroupQuery_ComponentType *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FMovieRenderPipelineCoreObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FMovieRenderPipelineCoreObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bOnlyMatchComponents = false;
  }
  return;
}

// ShouldEvaluateComponents @ 14dce4b10

bool __thiscall
UMovieGraphConditionGroupQuery_ComponentType::ShouldEvaluateComponents
          (UMovieGraphConditionGroupQuery_ComponentType *this)

{
  return this->bOnlyMatchComponents;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType @ 14dce6490

void __cdecl
UMovieGraphConditionGroupQuery_ComponentType::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType(void)

{
  return;
}

