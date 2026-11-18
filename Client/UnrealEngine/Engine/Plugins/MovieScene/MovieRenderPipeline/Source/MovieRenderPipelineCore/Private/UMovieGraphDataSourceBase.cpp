// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 24

// StaticClass @ 14dc980b0

UClass * __cdecl UMovieGraphDataSourceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDataSourceBase",
               &Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphDataSourceBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDataSourceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphDataSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton;
}

// UMovieGraphDataSourceBase @ 14dcaf990

UMovieGraphDataSourceBase * __thiscall
UMovieGraphDataSourceBase::UMovieGraphDataSourceBase
          (UMovieGraphDataSourceBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphDataSourceBase__6B_;
  return this;
}

// UMovieGraphDataSourceBase @ 14dcaf9c0

UMovieGraphDataSourceBase * __thiscall
UMovieGraphDataSourceBase::UMovieGraphDataSourceBase
          (UMovieGraphDataSourceBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphDataSourceBase__6B_;
  return this;
}

// ~UMovieGraphDataSourceBase @ 14dcb2be0

void __thiscall
UMovieGraphDataSourceBase::~UMovieGraphDataSourceBase(UMovieGraphDataSourceBase *this)

{
  *(undefined ***)this = &___7UMovieGraphDataSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CacheDataPreJob @ 14dcbdbf0

void __thiscall
UMovieGraphDataSourceBase::CacheDataPreJob
          (UMovieGraphDataSourceBase *this,FMovieGraphInitConfig *param_1)

{
  return;
}

// CacheHierarchyForShot @ 14dcbdcc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::CacheHierarchyForShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  return;
}

// ExpandShot @ 14dcc7180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::ExpandShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,
          int param_2,int param_3,int param_4,bool param_5)

{
  return;
}

// GetCameraInformation @ 14dccb360

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphDataSourceBase::GetCameraInformation
          (UMovieGraphDataSourceBase *this,
          TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UMoviePipelineExecutorShot *param_1,bool param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDisplayRate @ 14dcccd20

FFrameRate __thiscall UMovieGraphDataSourceBase::GetDisplayRate(UMovieGraphDataSourceBase *this)

{
  FFrameRate in_RDX;
  
  *(undefined4 *)in_RDX = 60000;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetOwningGraph @ 14dcd0bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphPipeline * __thiscall
UMovieGraphDataSourceBase::GetOwningGraph(UMovieGraphDataSourceBase *this)

{
  UClass *pUVar1;
  UMovieGraphPipeline *pUVar2;
  
  pUVar1 = UMovieGraphPipeline::StaticClass();
  pUVar2 = (UMovieGraphPipeline *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14dcd23c0

UClass * __cdecl UMovieGraphDataSourceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDataSourceBase",
               &Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphDataSourceBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDataSourceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphDataSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton;
}

// GetTickResolution @ 14dcd3da0

FFrameRate __thiscall UMovieGraphDataSourceBase::GetTickResolution(UMovieGraphDataSourceBase *this)

{
  FFrameRate in_RDX;
  
  *(undefined4 *)in_RDX = 60000;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// InitializeShot @ 14dcd5c10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::InitializeShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,
          FFrameTime *param_2)

{
  return;
}

// JumpDataSource @ 14dcd7780

void __thiscall
UMovieGraphDataSourceBase::JumpDataSource(UMovieGraphDataSourceBase *this,FFrameTime *param_1)

{
  return;
}

// MuteShot @ 14dcd8710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::MuteShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  return;
}

// PauseDataSource @ 14dcda2a0

void __thiscall UMovieGraphDataSourceBase::PauseDataSource(UMovieGraphDataSourceBase *this)

{
  return;
}

// PlayDataSource @ 14dcda2f0

void __thiscall UMovieGraphDataSourceBase::PlayDataSource(UMovieGraphDataSourceBase *this)

{
  return;
}

// RestoreCachedDataPostJob @ 14dce1f60

void __thiscall UMovieGraphDataSourceBase::RestoreCachedDataPostJob(UMovieGraphDataSourceBase *this)

{
  return;
}

// RestoreHierarchyForShot @ 14dce2030

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::RestoreHierarchyForShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  return;
}

// StaticRegisterNativesUMovieGraphDataSourceBase @ 14dce64e0

void __cdecl UMovieGraphDataSourceBase::StaticRegisterNativesUMovieGraphDataSourceBase(void)

{
  return;
}

// StopDataSource @ 14dce6b00

void __thiscall UMovieGraphDataSourceBase::StopDataSource(UMovieGraphDataSourceBase *this)

{
  return;
}

// SyncDataSourceTime @ 14dce6b60

void __thiscall
UMovieGraphDataSourceBase::SyncDataSourceTime(UMovieGraphDataSourceBase *this,FFrameTime *param_1)

{
  return;
}

// UnmuteShot @ 14dcebe10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDataSourceBase::UnmuteShot
          (UMovieGraphDataSourceBase *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  return;
}

// UpdateShotList @ 14dcecd20

void __thiscall UMovieGraphDataSourceBase::UpdateShotList(UMovieGraphDataSourceBase *this)

{
  return;
}

