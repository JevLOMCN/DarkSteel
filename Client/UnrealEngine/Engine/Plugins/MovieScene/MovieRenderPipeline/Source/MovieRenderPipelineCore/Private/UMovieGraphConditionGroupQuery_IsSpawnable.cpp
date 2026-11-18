// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc99920

UClass * __cdecl UMovieGraphConditionGroupQuery_IsSpawnable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_IsSpawnable",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton
               ,StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_IsSpawnable>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_IsSpawnable>,local_res8
               ,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_IsSpawnable @ 14dcaf8b0

UMovieGraphConditionGroupQuery_IsSpawnable * __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::UMovieGraphConditionGroupQuery_IsSpawnable
          (UMovieGraphConditionGroupQuery_IsSpawnable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_IsSpawnable__6B_;
  return this;
}

// UMovieGraphConditionGroupQuery_IsSpawnable @ 14dcaf8e0

UMovieGraphConditionGroupQuery_IsSpawnable * __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::UMovieGraphConditionGroupQuery_IsSpawnable
          (UMovieGraphConditionGroupQuery_IsSpawnable *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_IsSpawnable__6B_;
  return this;
}

// ~UMovieGraphConditionGroupQuery_IsSpawnable @ 14dcb2b70

void __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::~UMovieGraphConditionGroupQuery_IsSpawnable
          (UMovieGraphConditionGroupQuery_IsSpawnable *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc4100

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
UMovieGraphConditionGroupQuery_IsSpawnable::Evaluate
          (UMovieGraphConditionGroupQuery_IsSpawnable *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *local_res10;
  AActor *local_48;
  TOptional<FMovieSceneSpawnableAnnotation> local_40;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar3 == pFVar1) break;
    local_res10 = *(UObject **)pFVar3;
    FMovieSceneSpawnableAnnotation::Find(&local_40,local_res10);
    if (local_40.bIsSet != false) {
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
                (param_3,&local_48,(bool *)&local_res10);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetDisplayName @ 14dcccbe0

FText * __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::GetDisplayName
          (UMovieGraphConditionGroupQuery_IsSpawnable *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_IsSpawnable",
                 L"Is Spawnable");
      atexit(`UMovieGraphConditionGroupQuery_IsSpawnable::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dcce130

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::GetIcon
          (UMovieGraphConditionGroupQuery_IsSpawnable *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"GraphEditor.SpawnActor_16x");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&SpawnableIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &SpawnableIcon;
    }
  }
  return &SpawnableIcon;
}

// GetPrivateStaticClass @ 14dcd2240

UClass * __cdecl UMovieGraphConditionGroupQuery_IsSpawnable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_IsSpawnable",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton
               ,StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_IsSpawnable>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_IsSpawnable>,local_res8
               ,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable @ 14dce64c0

void __cdecl
UMovieGraphConditionGroupQuery_IsSpawnable::
StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable(void)

{
  return;
}

