// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dcf6a30

UClass * __cdecl UMoviePipelineAntiAliasingSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineAntiAliasingSetting",
               &Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineAntiAliasingSetting,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineAntiAliasingSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineAntiAliasingSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton;
}

// UMoviePipelineAntiAliasingSetting @ 14dd0c6f0

UMoviePipelineAntiAliasingSetting * __thiscall
UMoviePipelineAntiAliasingSetting::UMoviePipelineAntiAliasingSetting
          (UMoviePipelineAntiAliasingSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineAntiAliasingSetting__6B_;
  return this;
}

// ~UMoviePipelineAntiAliasingSetting @ 14dd0e340

void __thiscall
UMoviePipelineAntiAliasingSetting::~UMoviePipelineAntiAliasingSetting
          (UMoviePipelineAntiAliasingSetting *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineAntiAliasingSetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetFormatArguments @ 14dd256e0

void __thiscall
UMoviePipelineAntiAliasingSetting::GetFormatArguments
          (UMoviePipelineAntiAliasingSetting *this,FMoviePipelineFormatArgs *param_1)

{
  FString local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->TemporalSampleCount);
  ::FString::FString((FString *)local_18,L"ts_count");
  local_28._0_8_ = local_18;
  local_28._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_28
            );
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->SpatialSampleCount);
  ::FString::FString((FString *)local_28,L"ss_count");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_18
            );
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->TemporalSampleCount);
  ::FString::FString((FString *)local_28,L"unreal/aa/temporalSampleCount");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->SpatialSampleCount);
  ::FString::FString((FString *)local_28,L"unreal/aa/spatialSampleCount");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd2dbf0

UClass * __cdecl UMoviePipelineAntiAliasingSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineAntiAliasingSetting",
               &Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineAntiAliasingSetting,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineAntiAliasingSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineAntiAliasingSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dd33db0

bool __thiscall
UMoviePipelineAntiAliasingSetting::IsValidOnPrimary(UMoviePipelineAntiAliasingSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dd33e00

bool __thiscall
UMoviePipelineAntiAliasingSetting::IsValidOnShots(UMoviePipelineAntiAliasingSetting *this)

{
  return true;
}

// StaticRegisterNativesUMoviePipelineAntiAliasingSetting @ 14dd45550

void __cdecl
UMoviePipelineAntiAliasingSetting::StaticRegisterNativesUMoviePipelineAntiAliasingSetting(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b6e0

void __thiscall
UMoviePipelineAntiAliasingSetting::UpdateTelemetry
          (UMoviePipelineAntiAliasingSetting *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  int iVar1;
  
  iVar1 = this->TemporalSampleCount;
  if (this->TemporalSampleCount < param_1->TemporalSampleCount) {
    iVar1 = param_1->TemporalSampleCount;
  }
  param_1->TemporalSampleCount = iVar1;
  iVar1 = this->SpatialSampleCount;
  if (this->SpatialSampleCount < param_1->SpatialSampleCount) {
    iVar1 = param_1->SpatialSampleCount;
  }
  param_1->SpatialSampleCount = iVar1;
  return;
}

// ValidateStateImpl @ 14dd4b890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineAntiAliasingSetting::ValidateStateImpl(UMoviePipelineAntiAliasingSetting *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EAntiAliasingMethod EVar6;
  int iVar7;
  longlong *plVar8;
  FTextFormat *pFVar9;
  FText *pFVar10;
  undefined1 auStackY_1d8 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_188;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_178;
  FText local_168;
  FText local_158;
  FTextFormat local_148;
  FText local_138;
  FTextFormat local_128;
  FText local_118;
  FFormatArgumentValue local_108;
  FText local_e8;
  FTextFormat local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UMoviePipelineSetting::ValidateStateImpl((UMoviePipelineSetting *)this);
  iVar5 = 8;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  plVar8 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.TemporalAASamples",1);
  if (plVar8 != (longlong *)0x0) {
    iVar5 = (**(code **)(*plVar8 + 200))(plVar8);
  }
  EVar6 = UE::MovieRenderPipeline::GetEffectiveAntiAliasingMethod(this);
  if ((EVar6 - AAM_TemporalAA & 0xfffffffd) == 0) {
    if (iVar5 < this->SpatialSampleCount * this->TemporalSampleCount) {
      FText::AsLocalizable_Advanced_LocText
                (&local_138,L"MovieRenderPipeline",L"AntiAliasing_BetterOffWithoutTAA",
                 L"If the product of Temporal and Spatial counts ({0}x{1}={2}) is greater than the number of TAA samples (controlled by r.TemporalAASamples, currently {3}) then TAA is ineffective and you should consider overriding AA to None for better quality."
                );
      iVar7 = this->SpatialSampleCount;
      iVar2 = this->TemporalSampleCount;
      pFVar9 = FTextFormat::FTextFormat(&local_d8,&local_138,Default);
      local_b8.Type = Int;
      local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_70 = (longlong)(iVar7 * iVar2);
      local_50 = (longlong)iVar5;
      local_98 = 0;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_78 = 0;
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = 0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 4;
      local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar2;
      local_90 = (longlong)iVar7;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,0,&local_188.AllocatorInstance,4,&local_188.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_188.AllocatorInstance.Data,&local_b8,4);
      local_148.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_148.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_148.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_168,&local_148,&local_188);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
      if ((FFormatArgumentValue *)local_188.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      if (((FText *)this->_padding_ <= &local_168) &&
         (&local_168 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar7 + 1;
      FText::FText((FText *)((longlong)iVar7 * 0x10 + this->_padding_),&local_168);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
    }
    if ((this->SpatialSampleCount & 1) == 0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_e8,L"MovieRenderPipeline",L"AntiAliasing_InsufficientJitters",
                           L"Temporal Anti-Aliasing does not converge when using an even number of samples. Disable TAA or increase sample count."
                          );
      if (((FText *)this->_padding_ <= pFVar10) &&
         (pFVar10 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar7 + 1;
      FText::FText((FText *)((longlong)iVar7 * 0x10 + this->_padding_),pFVar10);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
  }
  EVar6 = UE::MovieRenderPipeline::GetEffectiveAntiAliasingMethod(this);
  if ((EVar6 == AAM_None) && (this->TemporalSampleCount * this->SpatialSampleCount < iVar5)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_118,L"MovieRenderPipeline",L"AntiAliasing_InsufficientSamples",
               L"Temporal Anti-Aliasing uses at least {0} samples. Increase Spatial/Temporal sub-sample count to maintain visual anti-aliasing quality."
              );
    pFVar9 = FTextFormat::FTextFormat(&local_c8,&local_118,Default);
    local_108.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar5;
    local_108.Type = Int;
    local_108.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_108.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_178.AllocatorInstance.Data,&local_108,1);
    local_128.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_128.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_128.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_158,&local_128,&local_178);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    if ((FFormatArgumentValue *)local_178.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_108.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    if (((FText *)this->_padding_ <= &local_158) &&
       (&local_158 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    FText::FText((FText *)((longlong)iVar5 * 0x10 + this->_padding_),&local_158);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
  }
  return;
}

