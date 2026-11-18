// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc98be0

UClass * __cdecl UMovieGraphConditionGroupQuery_Sublevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Sublevel",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Sublevel>
               ,InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Sublevel>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_Sublevel @ 14dcaf910

UMovieGraphConditionGroupQuery_Sublevel * __thiscall
UMovieGraphConditionGroupQuery_Sublevel::UMovieGraphConditionGroupQuery_Sublevel
          (UMovieGraphConditionGroupQuery_Sublevel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
  (this->Sublevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sublevels).ArrayNum = 0;
  (this->Sublevels).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_Sublevel @ 14dcaf950

UMovieGraphConditionGroupQuery_Sublevel * __thiscall
UMovieGraphConditionGroupQuery_Sublevel::UMovieGraphConditionGroupQuery_Sublevel
          (UMovieGraphConditionGroupQuery_Sublevel *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
  (this->Sublevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sublevels).ArrayNum = 0;
  (this->Sublevels).ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_Sublevel @ 14dcb2b90

void __thiscall
UMovieGraphConditionGroupQuery_Sublevel::~UMovieGraphConditionGroupQuery_Sublevel
          (UMovieGraphConditionGroupQuery_Sublevel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
  DestructItems<TSoftObjectPtr<UWorld>,int>
            ((TSoftObjectPtr<UWorld> *)(this->Sublevels).AllocatorInstance.Data,
             (this->Sublevels).ArrayNum);
  pFVar1 = (this->Sublevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc4190

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
UMovieGraphConditionGroupQuery_Sublevel::Evaluate
          (UMovieGraphConditionGroupQuery_Sublevel *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  AActor *this_00;
  void *_Src;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar5;
  bool bVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  ULevel *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  undefined1 local_98 [4];
  uint local_94;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  AActor *local_80;
  FString local_78;
  AActor *local_68;
  TPersistentObjectPtr<FSoftObjectPath> *local_60;
  FString local_58;
  FString local_48;
  
  this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Sublevels).AllocatorInstance.Data;
  bVar4 = false;
  bVar3 = false;
  local_94 = (this->Sublevels).ArrayNum;
  uVar12 = (ulonglong)(int)local_94;
  local_60 = this_01 + uVar12;
  do {
    pTVar5 = local_60;
    if ((this->Sublevels).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TSoftObjectPtr<UWorld>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_98);
    }
    if (this_01 == pTVar5) {
      return;
    }
    pUVar7 = (UWorld *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar7 == (UWorld *)0x0) {
LAB_14dcc42c8:
      pUVar8 = UMovieGraphCollection::StaticClass();
      pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      if (pUVar10 == (UObject *)0x0) {
        bVar3 = true;
        pFVar11 = ::FString::FString(&local_48,L"<unknown>");
      }
      else {
        iVar1 = *(int *)&pUVar10[1].field_0x8;
        bVar4 = true;
        _Src = *(void **)(pUVar10 + 1);
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = iVar1;
        if (iVar1 == 0) {
          local_78.Data.ArrayMax = iVar1;
          pFVar11 = &local_78;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,(ForAnyElementType *)&local_78,iVar1,&local_78.Data.ArrayMax);
          memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
          pFVar11 = &local_78;
        }
      }
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = (pFVar11->Data).ArrayNum;
      lVar14 = (longlong)local_88;
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (local_88 == 0) {
        local_84 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88,0,&local_90,local_88,&local_84);
        memcpy(local_90.Data,pFVar2,lVar14 * 2);
      }
      if ((bVar3) &&
         (bVar3 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        FSoftObjectPath::ToString(&this_01->ObjectID,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
    else {
      pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_14dcc42c8;
      pUVar9 = UWorld::GetCurrentLevel(pUVar7);
      if (pUVar9 != (ULevel *)0x0) {
        pFVar13 = (pUVar9->Actors).AllocatorInstance.Data;
        iVar1 = (pUVar9->Actors).ArrayNum;
        pFVar2 = pFVar13 + (longlong)iVar1 * 8;
        while( true ) {
          if ((pUVar9->Actors).ArrayNum != iVar1) {
            `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_98);
          }
          if (pFVar13 == pFVar2) break;
          this_00 = *(AActor **)pFVar13;
          if (((this_00 == (AActor *)0x0) ||
              (pUVar7 = AActor::GetWorld(this_00), pUVar7 == (UWorld *)0x0)) ||
             (bVar6 = UWorld::IsEditorWorld(pUVar7), !bVar6)) {
            local_80 = (AActor *)0x0;
            pFVar13 = pFVar13 + 8;
          }
          else {
            local_80 = this_00;
            TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
            Emplace<AActor_*_const_&>(param_3,&local_68,(bool *)&local_80);
            pFVar13 = pFVar13 + 8;
          }
        }
      }
    }
    uVar12 = (ulonglong)local_94;
    this_01 = this_01 + 1;
  } while( true );
}

// GetDisplayName @ 14dcccc80

FText * __thiscall
UMovieGraphConditionGroupQuery_Sublevel::GetDisplayName
          (UMovieGraphConditionGroupQuery_Sublevel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_Sublevel",L"Sublevel"
                );
      atexit(`UMovieGraphConditionGroupQuery_Sublevel::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dcce1f0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_Sublevel::GetIcon(UMovieGraphConditionGroupQuery_Sublevel *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"Icons.Level");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&SublevelIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &SublevelIcon;
    }
  }
  return &SublevelIcon;
}

// GetPrivateStaticClass @ 14dcd2300

UClass * __cdecl UMovieGraphConditionGroupQuery_Sublevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Sublevel",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Sublevel>
               ,InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Sublevel>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel @ 14dce64d0

void __cdecl
UMovieGraphConditionGroupQuery_Sublevel::
StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel(void)

{
  return;
}

