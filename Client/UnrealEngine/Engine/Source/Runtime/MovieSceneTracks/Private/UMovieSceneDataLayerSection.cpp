// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 27

// StaticClass @ 1467278c0

UClass * __cdecl UMovieSceneDataLayerSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDataLayerSection",
               &Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDataLayerSection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDataLayerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDataLayerSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton;
}

// UMovieSceneDataLayerSection @ 146763f30

UMovieSceneDataLayerSection * __thiscall
UMovieSceneDataLayerSection::UMovieSceneDataLayerSection
          (UMovieSceneDataLayerSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->DataLayerAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayerAssets).ArrayNum = 0;
  (this->DataLayerAssets).ArrayMax = 0;
  return this;
}

// UMovieSceneDataLayerSection @ 146763f80

UMovieSceneDataLayerSection * __thiscall
UMovieSceneDataLayerSection::UMovieSceneDataLayerSection
          (UMovieSceneDataLayerSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->DesiredState = Activated;
  this->PrerollState = Activated;
  this->bFlushOnActivated = true;
  this->bFlushOnUnload = false;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->DataLayerAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayerAssets).ArrayNum = 0;
  (this->DataLayerAssets).ArrayMax = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  return this;
}

// ~UMovieSceneDataLayerSection @ 14676a3a0

void __thiscall
UMovieSceneDataLayerSection::~UMovieSceneDataLayerSection(UMovieSceneDataLayerSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pFVar1 = (this->DataLayerAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetDesiredState @ 146794a90

EDataLayerRuntimeState __thiscall
UMovieSceneDataLayerSection::GetDesiredState(UMovieSceneDataLayerSection *this)

{
  return this->DesiredState;
}

// GetFlushOnActivated @ 146794f40

bool __thiscall UMovieSceneDataLayerSection::GetFlushOnActivated(UMovieSceneDataLayerSection *this)

{
  return this->bFlushOnActivated;
}

// GetFlushOnUnload @ 146794f50

bool __thiscall UMovieSceneDataLayerSection::GetFlushOnUnload(UMovieSceneDataLayerSection *this)

{
  return this->bFlushOnUnload;
}

// GetPrerollState @ 146796ed0

EDataLayerRuntimeState __thiscall
UMovieSceneDataLayerSection::GetPrerollState(UMovieSceneDataLayerSection *this)

{
  return this->PrerollState;
}

// GetPrivateStaticClass @ 1467987a0

UClass * __cdecl UMovieSceneDataLayerSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDataLayerSection",
               &Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDataLayerSection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDataLayerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDataLayerSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerSection.InnerSingleton;
}

// ImportEntityImpl @ 14679ea30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneDataLayerSection::ImportEntityImpl
          (UMovieSceneDataLayerSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_38;
  TComponentTypeID<FMovieSceneDataLayerComponentData> local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined1 local_18;
  
  plVar1 = &this[-1]._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_30 = pFVar2->DataLayer;
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
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneDataLayerComponentData___MovieScene_UE___MovieScene_UE__6B_
  ;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>_> *)
                     &local_38);
  return;
}

// SetDesiredState @ 1467c1b70

void __thiscall
UMovieSceneDataLayerSection::SetDesiredState
          (UMovieSceneDataLayerSection *this,EDataLayerRuntimeState param_1)

{
  this->DesiredState = param_1;
  return;
}

// SetFlushOnActivated @ 1467c1c00

void __thiscall
UMovieSceneDataLayerSection::SetFlushOnActivated(UMovieSceneDataLayerSection *this,bool param_1)

{
  this->bFlushOnActivated = param_1;
  return;
}

// SetFlushOnUnload @ 1467c1c10

void __thiscall
UMovieSceneDataLayerSection::SetFlushOnUnload(UMovieSceneDataLayerSection *this,bool param_1)

{
  this->bFlushOnUnload = param_1;
  return;
}

// SetPrerollState @ 1467c22d0

void __thiscall
UMovieSceneDataLayerSection::SetPrerollState
          (UMovieSceneDataLayerSection *this,EDataLayerRuntimeState param_1)

{
  this->PrerollState = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneDataLayerSection @ 1467c2890

void __cdecl UMovieSceneDataLayerSection::StaticRegisterNativesUMovieSceneDataLayerSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca760

UObject * __thiscall UMovieSceneDataLayerSection::_getUObject(UMovieSceneDataLayerSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetDataLayerAssets @ 1467cb6e0

void __cdecl
UMovieSceneDataLayerSection::execGetDataLayerAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != param_1 + 7) {
    iVar1 = *(int *)&param_1[7].field_0x8;
    _Src = *(void **)(param_1 + 7);
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetDesiredState @ 1467cb790

void __cdecl
UMovieSceneDataLayerSection::execGetDesiredState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x10;
  return;
}

// execGetFlushOnActivated @ 1467cb7c0

void __cdecl
UMovieSceneDataLayerSection::execGetFlushOnActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x12;
  return;
}

// execGetFlushOnUnload @ 1467cb7f0

void __cdecl
UMovieSceneDataLayerSection::execGetFlushOnUnload(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x13;
  return;
}

// execGetPrerollState @ 1467cbb00

void __cdecl
UMovieSceneDataLayerSection::execGetPrerollState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x11;
  return;
}

// execHasPreRoll @ 1467cbd10

void __cdecl
UMovieSceneDataLayerSection::execHasPreRoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0.0 < (float)*(int *)(param_1 + 5);
  return;
}

// execSetDataLayerAssets @ 1467cc770

void __cdecl
UMovieSceneDataLayerSection::execSetDataLayerAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  UDataLayerAsset **ppUVar4;
  void **ppvVar5;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar5 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  puVar1 = &param_1[7].field_0xc;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  ppUVar4 = *ppvVar5;
  *(int *)&param_1[7].field_0x8 = iVar2;
  if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*(int *)puVar1,(ForAnyElementType *)(param_1 + 7),iVar2,(int *)puVar1);
    ConstructItems<TObjectPtr<UDataLayerAsset>,UDataLayerAsset_*,int>
              (*(void **)(param_1 + 7),ppUVar4,iVar2);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetDesiredState @ 1467cc870

void __cdecl
UMovieSceneDataLayerSection::execSetDesiredState(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[7].field_0x10 = local_res8[0];
  return;
}

// execSetFlushOnActivated @ 1467cc8f0

void __cdecl
UMovieSceneDataLayerSection::execSetFlushOnActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0x12 = local_res8[0] != 0;
  return;
}

// execSetFlushOnUnload @ 1467cc980

void __cdecl
UMovieSceneDataLayerSection::execSetFlushOnUnload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0x13 = local_res8[0] != 0;
  return;
}

// execSetPrerollState @ 1467ccb80

void __cdecl
UMovieSceneDataLayerSection::execSetPrerollState(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[7].field_0x11 = local_res8[0];
  return;
}

