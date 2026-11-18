// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc98aa0

UClass * __cdecl UMovieGraphConditionGroupQuery_EditorFolder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_EditorFolder",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_EditorFolder>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_EditorFolder>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_EditorFolder @ 14dcaf830

UMovieGraphConditionGroupQuery_EditorFolder * __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::UMovieGraphConditionGroupQuery_EditorFolder
          (UMovieGraphConditionGroupQuery_EditorFolder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
  (this->FolderPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FolderPaths).ArrayNum = 0;
  (this->FolderPaths).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_EditorFolder @ 14dcaf870

UMovieGraphConditionGroupQuery_EditorFolder * __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::UMovieGraphConditionGroupQuery_EditorFolder
          (UMovieGraphConditionGroupQuery_EditorFolder *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
  (this->FolderPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FolderPaths).ArrayNum = 0;
  (this->FolderPaths).ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_EditorFolder @ 14dcb2b30

void __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::~UMovieGraphConditionGroupQuery_EditorFolder
          (UMovieGraphConditionGroupQuery_EditorFolder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
  pFVar1 = (this->FolderPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc40f0

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
UMovieGraphConditionGroupQuery_EditorFolder::Evaluate
          (UMovieGraphConditionGroupQuery_EditorFolder *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  return;
}

// GetDisplayName @ 14dcccb40

FText * __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::GetDisplayName
          (UMovieGraphConditionGroupQuery_EditorFolder *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_EditorFolder",
                 L"Editor Folder");
      atexit(`UMovieGraphConditionGroupQuery_EditorFolder::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dcce070

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::GetIcon
          (UMovieGraphConditionGroupQuery_EditorFolder *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"Icons.FolderOpen");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&EditorFolderIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &EditorFolderIcon;
    }
  }
  return &EditorFolderIcon;
}

// GetPrivateStaticClass @ 14dcd2180

UClass * __cdecl UMovieGraphConditionGroupQuery_EditorFolder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_EditorFolder",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_EditorFolder>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_EditorFolder>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton;
}

// IsEditorOnlyQuery @ 14dcd7190

bool __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::IsEditorOnlyQuery
          (UMovieGraphConditionGroupQuery_EditorFolder *this)

{
  return true;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder @ 14dce64b0

void __cdecl
UMovieGraphConditionGroupQuery_EditorFolder::
StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder(void)

{
  return;
}

