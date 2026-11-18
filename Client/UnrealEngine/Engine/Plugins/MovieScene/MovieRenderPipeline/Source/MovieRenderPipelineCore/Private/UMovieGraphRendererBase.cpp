// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dc9e5e0

UClass * __cdecl UMovieGraphRendererBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphRendererBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton;
}

// UMovieGraphRendererBase @ 14dcb10f0

UMovieGraphRendererBase * __thiscall
UMovieGraphRendererBase::UMovieGraphRendererBase
          (UMovieGraphRendererBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphRendererBase__6B_;
  return this;
}

// UMovieGraphRendererBase @ 14dcb1120

UMovieGraphRendererBase * __thiscall
UMovieGraphRendererBase::UMovieGraphRendererBase
          (UMovieGraphRendererBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphRendererBase__6B_;
  return this;
}

// ~UMovieGraphRendererBase @ 14dcb3390

void __thiscall UMovieGraphRendererBase::~UMovieGraphRendererBase(UMovieGraphRendererBase *this)

{
  *(undefined ***)this = &___7UMovieGraphRendererBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetMinimalCameraInfo @ 14dcce890

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalCameraInfo * __thiscall
UMovieGraphRendererBase::GetMinimalCameraInfo
          (UMovieGraphRendererBase *this,FMinimalCameraInfo *__return_storage_ptr__,int param_1)

{
  undefined8 local_res10 [3];
  
  (__return_storage_ptr__->ViewActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)local_res10);
  FMinimalViewInfo::FMinimalViewInfo(&__return_storage_ptr__->ViewInfo);
  return __return_storage_ptr__;
}

// GetMinimalCameraInfo @ 14dcce8d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalCameraInfo * __thiscall
UMovieGraphRendererBase::GetMinimalCameraInfo
          (UMovieGraphRendererBase *this,FMinimalCameraInfo *__return_storage_ptr__,
          UMovieGraphEvaluatedConfig *param_1,int param_2)

{
  (**(code **)(*(longlong *)this + 0x2d8))(this,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14dcd0be0

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
UMovieGraphRendererBase::GetOwningGraph(UMovieGraphRendererBase *this)

{
  UClass *pUVar1;
  UMovieGraphPipeline *pUVar2;
  
  pUVar1 = UMovieGraphPipeline::StaticClass();
  pUVar2 = (UMovieGraphPipeline *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPreviewData @ 14dcd1420

TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRendererBase::GetPreviewData
          (UMovieGraphRendererBase *this,
          TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd3240

UClass * __cdecl UMovieGraphRendererBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphRendererBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton;
}

// GetRenderTimeStatistics @ 14dcd3620

FRenderTimeStatistics * __thiscall
UMovieGraphRendererBase::GetRenderTimeStatistics(UMovieGraphRendererBase *this,int param_1)

{
  return (FRenderTimeStatistics *)0x0;
}

// Render @ 14dce0730

void __thiscall
UMovieGraphRendererBase::Render(UMovieGraphRendererBase *this,FMovieGraphTimeStepData *param_1)

{
  return;
}

// SetupRenderingPipelineForShot @ 14dce4750

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphRendererBase::SetupRenderingPipelineForShot
          (UMovieGraphRendererBase *this,UMoviePipelineExecutorShot *param_1)

{
  return;
}

// StaticRegisterNativesUMovieGraphRendererBase @ 14dce6830

void __cdecl UMovieGraphRendererBase::StaticRegisterNativesUMovieGraphRendererBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphRendererBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownRenderingPipelineForShot @ 14dce7310

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphRendererBase::TeardownRenderingPipelineForShot
          (UMovieGraphRendererBase *this,UMoviePipelineExecutorShot *param_1)

{
  return;
}

// execGetPreviewData @ 14dcf17a0

void __cdecl
UMovieGraphRendererBase::execGetPreviewData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FMovieGraphImagePreviewData *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_18);
  if (param_3 != puVar1) {
    DestructItems<FMovieGraphImagePreviewData,int>
              (*(FMovieGraphImagePreviewData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  DestructItems<FMovieGraphImagePreviewData,int>(local_18,local_10);
  if (local_18 != (FMovieGraphImagePreviewData *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

