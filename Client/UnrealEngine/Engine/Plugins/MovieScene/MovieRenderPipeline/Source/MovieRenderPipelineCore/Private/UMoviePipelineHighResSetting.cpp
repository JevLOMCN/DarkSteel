// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// StaticClass @ 14dc67650

UClass * __cdecl UMoviePipelineHighResSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineHighResSetting",
               &Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineHighResSetting,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineHighResSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineHighResSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton;
}

// UMoviePipelineHighResSetting @ 14dc73a10

UMoviePipelineHighResSetting * __thiscall
UMoviePipelineHighResSetting::UMoviePipelineHighResSetting
          (UMoviePipelineHighResSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineHighResSetting__6B_;
  return this;
}

// ~UMoviePipelineHighResSetting @ 14dc74a20

void __thiscall
UMoviePipelineHighResSetting::~UMoviePipelineHighResSetting(UMoviePipelineHighResSetting *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineHighResSetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetFormatArguments @ 14dc80490

void __thiscall
UMoviePipelineHighResSetting::GetFormatArguments
          (UMoviePipelineHighResSetting *this,FMoviePipelineFormatArgs *param_1)

{
  FString *pFVar1;
  FString local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,this->TileCount);
  ::FString::FString((FString *)local_28,L"tile_count");
  local_38._0_8_ = local_28;
  local_38._8_8_ = &local_48;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = ::FString::SanitizeFloat(&local_48,(double)this->OverlapRatio,1);
  ::FString::FString((FString *)local_38,L"overlap_percent");
  local_28._0_8_ = local_38;
  local_28._8_8_ = pFVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_28
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,this->TileCount);
  ::FString::FString((FString *)local_38,L"unreal/highres/tileCount");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_48;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = ::FString::SanitizeFloat(&local_48,(double)this->OverlapRatio,1);
  ::FString::FString((FString *)local_38,L"unreal/highres/overlapPercent");
  local_28._0_8_ = local_38;
  local_28._8_8_ = pFVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dc82650

UClass * __cdecl UMoviePipelineHighResSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineHighResSetting",
               &Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineHighResSetting,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineHighResSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineHighResSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dc844c0

bool __thiscall UMoviePipelineHighResSetting::IsValidOnPrimary(UMoviePipelineHighResSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dc84500

bool __thiscall UMoviePipelineHighResSetting::IsValidOnShots(UMoviePipelineHighResSetting *this)

{
  return true;
}

// SetupForPipelineImpl @ 14dc895b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineHighResSetting::SetupForPipelineImpl
          (UMoviePipelineHighResSetting *this,UMoviePipeline *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IConsoleVariable *this_00;
  int iVar4;
  undefined1 local_res8 [8];
  
  if (this->bOverrideSubSurfaceScattering == false) {
    iVar4 = 0;
  }
  else {
    iVar4 = this->BurleySampleCount;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SSS.Burley.NumSamplesOverride",0);
  if ((this_00 == (IConsoleVariable *)0x0) &&
     (bVar2 = `UMoviePipelineHighResSetting::SetupForPipelineImpl'::__l4::<lambda_1>::operator()
                        (local_res8), !bVar2)) {
    return;
  }
  iVar3 = (**(code **)(*(longlong *)this_00 + 200))(this_00);
  this->PrevBurleyOverride = iVar3;
  IConsoleVariable::SetWithCurrentPriority<int>
            (this_00,iVar4,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  return;
}

// StaticRegisterNativesUMoviePipelineHighResSetting @ 14dc89d30

void __cdecl UMoviePipelineHighResSetting::StaticRegisterNativesUMoviePipelineHighResSetting(void)

{
  return;
}

// TeardownForPipelineImpl @ 14dc89d90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineHighResSetting::TeardownForPipelineImpl
          (UMoviePipelineHighResSetting *this,UMoviePipeline *param_1)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *this_00;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SSS.Burley.NumSamplesOverride",0);
  if ((this_00 == (IConsoleVariable *)0x0) &&
     (bVar2 = `UMoviePipelineHighResSetting::TeardownForPipelineImpl'::__l4::<lambda_1>::operator()
                        (local_res18), !bVar2)) {
    return;
  }
  local_res20 = 0;
  IConsoleVariable::SetWithCurrentPriority<int>
            (this_00,this->PrevBurleyOverride,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  return;
}

// UpdateTelemetry @ 14dc8c8e0

void __thiscall
UMoviePipelineHighResSetting::UpdateTelemetry
          (UMoviePipelineHighResSetting *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesHighResTiling = true;
  return;
}

// ValidateStateImpl @ 14dc8dfe0

void __thiscall UMoviePipelineHighResSetting::ValidateStateImpl(UMoviePipelineHighResSetting *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FText local_28;
  FText local_18;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar4 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FText,int>((FText *)this->_padding_,iVar4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FText,int>((FText *)this->_padding_,iVar4);
    *(undefined4 *)&this->_padding_ = 0;
  }
  iVar4 = this->TileCount;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  if (1 < iVar4) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MovieRenderPipeline",L"HighRes_UnsupportedFeatures",
                        L"Tiling does not support all rendering features (bloom, some screen-space effects). Additionally, TAA is not supported and will be forced off when rendering. Use Spatial/Temporal sampling instead. Tiling does not support reference motion blur with the Path Tracer."
                       );
    if (((FText *)this->_padding_ <= pFVar5) && (pFVar5 < (FText *)this->_padding_ + *piVar1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (int)this->_padding_;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    FText::FText((FText *)((longlong)iVar4 * 0x10 + this->_padding_),pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if ((float)((uint)this->OverlapRatio & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"MovieRenderPipeline",L"HighRes_OverlapNeeded",
                          L"Increase the overlap amount to avoid seams in the final image. More overlap results in longer renders so start at 0.1 and increase as needed."
                         );
      if (((FText *)this->_padding_ <= pFVar5) && (pFVar5 < (FText *)this->_padding_ + *piVar1)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (int)this->_padding_;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar4 + 1;
      FText::FText((FText *)((longlong)iVar4 * 0x10 + this->_padding_),pFVar5);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// operator() @ 15058b640

bool __thiscall
`UMoviePipelineHighResSetting::SetupForPipelineImpl'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5941914059459788646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5941914059459788646>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_UMoviePipelineHighResSetting::SetupForPipelineImpl(UMoviePipeline*___ptr64)___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058b680

bool __thiscall
`UMoviePipelineHighResSetting::TeardownForPipelineImpl'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5941914059459788640>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5941914059459788640>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_UMoviePipelineHighResSetting::TeardownForPipelineImpl(UMoviePipeline*___ptr64)___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

