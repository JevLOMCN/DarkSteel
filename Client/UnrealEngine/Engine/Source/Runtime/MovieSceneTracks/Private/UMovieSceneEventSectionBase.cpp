// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146724530

UClass * __cdecl UMovieSceneEventSectionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSectionBase",
               &Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSectionBase,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventSectionBase>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSectionBase>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton;
}

// UMovieSceneEventSectionBase @ 146765060

UMovieSceneEventSectionBase * __thiscall
UMovieSceneEventSectionBase::UMovieSceneEventSectionBase
          (UMovieSceneEventSectionBase *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEventSectionBase__6B_;
  return this;
}

// UMovieSceneEventSectionBase @ 146765090

UMovieSceneEventSectionBase * __thiscall
UMovieSceneEventSectionBase::UMovieSceneEventSectionBase
          (UMovieSceneEventSectionBase *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEventSectionBase__6B_;
  return this;
}

// ~UMovieSceneEventSectionBase @ 14676a780

void __thiscall
UMovieSceneEventSectionBase::~UMovieSceneEventSectionBase(UMovieSceneEventSectionBase *this)

{
  *(undefined ***)this = &___7UMovieSceneEventSectionBase__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAllEntryPoints @ 146793f80

TArrayView<FMovieSceneEvent,int> * __thiscall
UMovieSceneEventSectionBase::GetAllEntryPoints
          (UMovieSceneEventSectionBase *this,
          TArrayView<FMovieSceneEvent,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FMovieSceneEvent *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146798c20

UClass * __cdecl UMovieSceneEventSectionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSectionBase",
               &Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSectionBase,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventSectionBase>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSectionBase>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSectionBase.InnerSingleton;
}

// Serialize @ 1467c1360

void __thiscall
UMovieSceneEventSectionBase::Serialize(UMovieSceneEventSectionBase *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  return;
}

// Serialize @ 1467c13c0

void __thiscall
UMovieSceneEventSectionBase::Serialize
          (UMovieSceneEventSectionBase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FReleaseObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,pFVar1);
  return;
}

// StaticRegisterNativesUMovieSceneEventSectionBase @ 1467c2920

void __cdecl UMovieSceneEventSectionBase::StaticRegisterNativesUMovieSceneEventSectionBase(void)

{
  return;
}

