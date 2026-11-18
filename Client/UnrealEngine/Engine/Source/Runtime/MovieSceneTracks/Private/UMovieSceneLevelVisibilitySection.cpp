// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146721af0

UClass * __cdecl UMovieSceneLevelVisibilitySection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneLevelVisibilitySection",
               &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLevelVisibilitySection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLevelVisibilitySection>,
               InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilitySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton;
}

// UMovieSceneLevelVisibilitySection @ 1467658f0

UMovieSceneLevelVisibilitySection * __thiscall
UMovieSceneLevelVisibilitySection::UMovieSceneLevelVisibilitySection
          (UMovieSceneLevelVisibilitySection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->LevelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelNames).ArrayNum = 0;
  (this->LevelNames).ArrayMax = 0;
  return this;
}

// UMovieSceneLevelVisibilitySection @ 146765940

UMovieSceneLevelVisibilitySection * __thiscall
UMovieSceneLevelVisibilitySection::UMovieSceneLevelVisibilitySection
          (UMovieSceneLevelVisibilitySection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->LevelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelNames).ArrayNum = 0;
  (this->LevelNames).ArrayMax = 0;
  this->Visibility = Visible;
  return this;
}

// ~UMovieSceneLevelVisibilitySection @ 14676a990

void __thiscall
UMovieSceneLevelVisibilitySection::~UMovieSceneLevelVisibilitySection
          (UMovieSceneLevelVisibilitySection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pFVar1 = (this->LevelNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467990a0

UClass * __cdecl UMovieSceneLevelVisibilitySection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneLevelVisibilitySection",
               &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLevelVisibilitySection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLevelVisibilitySection>,
               InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilitySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.InnerSingleton;
}

// GetVisibility @ 14679c1a0

ELevelVisibility __thiscall
UMovieSceneLevelVisibilitySection::GetVisibility(UMovieSceneLevelVisibilitySection *this)

{
  return this->Visibility;
}

// ImportEntityImpl @ 14679feb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneLevelVisibilitySection::ImportEntityImpl
          (UMovieSceneLevelVisibilitySection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_38;
  TComponentTypeID<FLevelVisibilityComponentData> local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined1 local_18;
  
  plVar1 = &this[-1]._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_30 = pFVar2->LevelVisibility;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  local_20 = 1;
  local_28 = plVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  local_18 = 0;
  local_38 = &
             ___7__TEntityBuilder_U__TAdd_UFLevelVisibilityComponentData___MovieScene_UE___MovieScene_UE__6B_
  ;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FLevelVisibilityComponentData>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FLevelVisibilityComponentData>_> *)
                     &local_38);
  return;
}

// SetVisibility @ 1467c2410

void __thiscall
UMovieSceneLevelVisibilitySection::SetVisibility
          (UMovieSceneLevelVisibilitySection *this,ELevelVisibility param_1)

{
  this->Visibility = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneLevelVisibilitySection @ 1467c2980

void __cdecl
UMovieSceneLevelVisibilitySection::StaticRegisterNativesUMovieSceneLevelVisibilitySection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca810

UObject * __thiscall
UMovieSceneLevelVisibilitySection::_getUObject(UMovieSceneLevelVisibilitySection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetLevelNames @ 1467cb820

void __cdecl
UMovieSceneLevelVisibilitySection::execGetLevelNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[7].field_0x8);
  return;
}

// execGetVisibility @ 1467cbce0

void __cdecl
UMovieSceneLevelVisibilitySection::execGetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 7);
  return;
}

// execSetLevelNames @ 1467ccac0

void __cdecl
UMovieSceneLevelVisibilitySection::execSetLevelNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
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
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[7].field_0x8,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetVisibility @ 1467ccd20

void __cdecl
UMovieSceneLevelVisibilitySection::execSetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 7) = local_res8[0];
  return;
}

