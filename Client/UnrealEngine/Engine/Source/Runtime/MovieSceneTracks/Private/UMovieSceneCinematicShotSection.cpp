// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 1467222e0

UClass * __cdecl UMovieSceneCinematicShotSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotSection",
               &Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCinematicShotSection,0x8b0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCinematicShotSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCinematicShotSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton;
}

// UMovieSceneCinematicShotSection @ 1467629a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneCinematicShotSection * __thiscall
UMovieSceneCinematicShotSection::UMovieSceneCinematicShotSection
          (UMovieSceneCinematicShotSection *this,FVTableHelper *param_1)

{
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ShotDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotDisplayName).Data.ArrayNum = 0;
  (this->ShotDisplayName).Data.ArrayMax = 0;
  FText::FText(&this->DisplayName_DEPRECATED);
  return this;
}

// UMovieSceneCinematicShotSection @ 146762a00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneCinematicShotSection * __thiscall
UMovieSceneCinematicShotSection::UMovieSceneCinematicShotSection
          (UMovieSceneCinematicShotSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ShotDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotDisplayName).Data.ArrayNum = 0;
  (this->ShotDisplayName).Data.ArrayMax = 0;
  FText::FText(&this->DisplayName_DEPRECATED);
  return this;
}

// ~UMovieSceneCinematicShotSection @ 146769ff0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCinematicShotSection::~UMovieSceneCinematicShotSection
          (UMovieSceneCinematicShotSection *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pIVar1 = (this->DisplayName_DEPRECATED).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->ShotDisplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMovieSceneSubSection::~UMovieSceneSubSection((UMovieSceneSubSection *)this);
  return;
}

// GetPrivateStaticClass @ 146797de0

UClass * __cdecl UMovieSceneCinematicShotSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotSection",
               &Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCinematicShotSection,0x8b0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCinematicShotSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCinematicShotSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.InnerSingleton;
}

// GetShotDisplayName @ 14679afe0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieSceneCinematicShotSection::GetShotDisplayName
          (UMovieSceneCinematicShotSection *this,FString *__return_storage_ptr__)

{
  UMovieSceneSequence *pUVar1;
  FName local_res8;
  
  if ((this->ShotDisplayName).Data.ArrayNum < 2) {
    pUVar1 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)this);
    if (pUVar1 != (UMovieSceneSequence *)0x0) {
      pUVar1 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)this);
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,&this->ShotDisplayName);
  return __return_storage_ptr__;
}

// PostLoad @ 1467b2120

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneCinematicShotSection::PostLoad(UMovieSceneCinematicShotSection *this)

{
  FText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  UMovieSceneSubSection::PostLoad((UMovieSceneSubSection *)this);
  this_00 = &this->DisplayName_DEPRECATED;
  bVar3 = FText::IsEmpty(this_00);
  if (!bVar3) {
    pFVar4 = FText::ToString(this_00);
    ::FString::operator=(&this->ShotDisplayName,pFVar4);
    pFVar5 = FText::GetEmpty();
    pIVar1 = (this_00->TextData).Reference;
    pIVar2 = (pFVar5->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (this_00->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->DisplayName_DEPRECATED).Flags = pFVar5->Flags;
  }
  return;
}

// StaticRegisterNativesUMovieSceneCinematicShotSection @ 1467c2760

void __cdecl
UMovieSceneCinematicShotSection::StaticRegisterNativesUMovieSceneCinematicShotSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetShotDisplayName @ 1467cbb30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneCinematicShotSection::execGetShotDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  UMovieSceneSequence *pUVar2;
  FName local_res8;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)(param_1 + 0x37) < 2) &&
     (pUVar2 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)param_1),
     pUVar2 != (UMovieSceneSequence *)0x0)) {
    pUVar2 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)param_1);
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x37);
    _Src = *(void **)&param_1[0x36].field_0x20;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetShotDisplayName @ 1467ccc00

void __cdecl
UMovieSceneCinematicShotSection::execSetShotDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = UMovieSceneSection::TryModify((UMovieSceneSection *)param_1,true);
  _Src.Data = local_18.Data;
  if ((bVar5) && (puVar7 = &param_1[0x36].field_0x20, (ForAnyElementType *)puVar7 != &local_18)) {
    iVar4 = (int)local_10;
    lVar6 = (longlong)(int)local_10;
    puVar1 = &param_1[0x37].field_0x4;
    iVar2 = *(int *)puVar1;
    *(int *)(param_1 + 0x37) = (int)local_10;
    if (((int)local_10 == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,iVar2,(ForAnyElementType *)puVar7,(int)local_10,(int *)puVar1);
      if (iVar4 != 0) {
        memcpy(*(void **)puVar7,_Src.Data,lVar6 * 2);
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

