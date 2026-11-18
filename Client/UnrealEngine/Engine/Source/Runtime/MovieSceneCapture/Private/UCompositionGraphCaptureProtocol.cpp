// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 12

// StaticClass @ 146bd1fb0

UClass * __cdecl UCompositionGraphCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompositionGraphCaptureProtocol",
               &Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUCompositionGraphCaptureProtocol,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UCompositionGraphCaptureProtocol>,
               InternalVTableHelperCtorCaller<UCompositionGraphCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton;
}

// UCompositionGraphCaptureProtocol @ 146bd8320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UCompositionGraphCaptureProtocol * __thiscall
UCompositionGraphCaptureProtocol::UCompositionGraphCaptureProtocol
          (UCompositionGraphCaptureProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UCompositionGraphCaptureProtocol__6B_;
  (this->IncludeRenderPasses).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeRenderPasses).Value.ArrayNum = 0;
  (this->IncludeRenderPasses).Value.ArrayMax = 0;
  (this->PostProcessingMaterial).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PostProcessingMaterial).AssetPath.PackageName.Number = 0;
  (this->PostProcessingMaterial).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PostProcessingMaterial).AssetPath.AssetName.Number = 0;
  (this->PostProcessingMaterial).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostProcessingMaterial).SubPathString.Data.ArrayNum = 0;
  (this->PostProcessingMaterial).SubPathString.Data.ArrayMax = 0;
  (this->PostProcessingMaterialPtr).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SceneViewport).Object = (FSceneViewport *)0x0;
  (this->SceneViewport).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewExtension).Object = (FFrameCaptureViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UCompositionGraphCaptureProtocol @ 146bd93c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UCompositionGraphCaptureProtocol::~UCompositionGraphCaptureProtocol
          (UCompositionGraphCaptureProtocol *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7UCompositionGraphCaptureProtocol__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->SceneViewport).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->PostProcessingMaterial).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->IncludeRenderPasses).Value.AllocatorInstance.Data,
             (this->IncludeRenderPasses).Value.ArrayNum);
  pFVar4 = (this->IncludeRenderPasses).Value.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CaptureFrameImpl @ 146bdbe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UCompositionGraphCaptureProtocol::CaptureFrameImpl
          (UCompositionGraphCaptureProtocol *this,FFrameMetrics *param_1)

{
  FString *pFVar1;
  FFrameCaptureViewExtension *pFVar2;
  FScriptContainerElement *pFVar3;
  IConsoleVariable *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 local_68 [16];
  void *local_58 [2];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((this->ViewExtension).Object == (FFrameCaptureViewExtension *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar2 = (this->ViewExtension).Object;
  puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 800))(this,local_58,param_1,L"",0);
  pFVar1 = &pFVar2->OutputFilename;
  if (pFVar1 != (FString *)puVar8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
    *puVar8 = 0;
    (pFVar2->OutputFilename).Data.ArrayNum = *(int *)(puVar8 + 1);
    (pFVar2->OutputFilename).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
  }
  pFVar2->bNeedsCapture = true;
  IConsoleVariable::Set<int>(pFVar2->CVarDumpFrames,1,ECVF_SetByCode,(FName)0x0);
  pIVar4 = pFVar2->CVarDumpFramesAsHDR;
  bVar7 = pFVar2->bCaptureFramesInHDR;
  local_48 = 0xe000000;
  lVar5 = *(longlong *)pIVar4;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0xf000000;
  local_30 = 0x1000000;
  uVar9 = (**(code **)(lVar5 + 0xa8))(pIVar4,local_68,&local_48);
  puVar10 = &u_0;
  if (bVar7 != false) {
    puVar10 = &u_1;
  }
  (**(code **)(lVar5 + 0xb0))(pIVar4,puVar10,uVar9);
  IConsoleVariable::Set<int>
            (pFVar2->CVarHDRCompressionQuality,pFVar2->HDRCompressionQuality,ECVF_SetByCode,
             (FName)0x0);
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  return;
}

// FinalizeImpl @ 146bddd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UCompositionGraphCaptureProtocol::FinalizeImpl(UCompositionGraphCaptureProtocol *this)

{
  FFrameCaptureViewExtension *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FGenericWindow,1> *pTVar4;
  void *pvVar5;
  TSharedPtr<SWindow,1> local_28;
  TSharedPtr<FGenericWindow,1> local_18;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSceneViewport::FindWindow((FSceneViewport *)this->_padding_,&local_28);
  if (local_28.Object == (SWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = SWindow::GetNativeWindow(local_28.Object,&local_18);
  if (pTVar4->Object == (FGenericWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar5 = (void *)(**(code **)(pTVar4->Object->_padding_ + 0xc0))();
  HDRRemoveCustomMetaData(pvVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->ViewExtension).Object == (FFrameCaptureViewExtension *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ViewExtension).Object;
  pFVar1->bNeedsCapture = false;
  pFVar1->RestoreDumpHDR = 0;
  pFVar1->RestoreHDRCompressionQuality = 0;
  IConsoleVariable::Set<int>(pFVar1->CVarDumpFramesAsHDR,0,ECVF_SetByCode,(FName)0x0);
  IConsoleVariable::Set<int>
            (pFVar1->CVarHDRCompressionQuality,pFVar1->RestoreHDRCompressionQuality,ECVF_SetByCode,
             (FName)0x0);
  IConsoleVariable::Set<int>(pFVar1->CVarDumpFrames,0,ECVF_SetByCode,(FName)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 146be0360

UClass * __cdecl UCompositionGraphCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompositionGraphCaptureProtocol",
               &Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUCompositionGraphCaptureProtocol,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UCompositionGraphCaptureProtocol>,
               InternalVTableHelperCtorCaller<UCompositionGraphCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton;
}

// HasFinishedProcessingImpl @ 146be15b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UCompositionGraphCaptureProtocol::HasFinishedProcessingImpl(UCompositionGraphCaptureProtocol *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->ViewExtension).Object == (FFrameCaptureViewExtension *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->ViewExtension).Object)->bNeedsCapture == false;
}

// OnLoadConfigImpl @ 146be3d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UCompositionGraphCaptureProtocol::OnLoadConfigImpl
          (UCompositionGraphCaptureProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FString *this_00;
  FScriptContainerElement *_Src;
  int iVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  local_28.Data.ArrayNum = (param_1->OutputFormat).Data.ArrayNum;
  lVar2 = (longlong)local_28.Data.ArrayNum;
  this_00 = &param_1->OutputFormat;
  _Src = (this_00->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  iVar1 = ::FString::Find(&local_28,L"{frame}",7,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_28,L"{shot_frame}",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      ::FString::AppendChars(&local_28,L".{frame}",8);
      iVar1 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar1 = 0;
      }
      ::FString::AssignRange(this_00,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
      if (3 < (byte)LogMovieSceneCapture._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
      }
    }
  }
  iVar1 = ::FString::Find(&local_28,L"{material}",10,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_28,L".{frame}",8,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      ::FString::AppendChars(&local_28,L"{material}",10);
    }
    else {
      ::FString::FString(&local_18,L"{material}");
      ::FString::InsertAt(&local_28,iVar1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar1 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AssignRange(this_00,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// OnReleaseConfigImpl @ 146be47c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UCompositionGraphCaptureProtocol::OnReleaseConfigImpl
          (UCompositionGraphCaptureProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  this_00 = &param_1->OutputFormat;
  pFVar2 = ::FString::Replace(this_00,&local_18,L"{material}",L"",IgnoreCase);
  if (this_00 != pFVar2) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OutputFormat).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->OutputFormat).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(this_00,&local_18,L".{frame}",L"",IgnoreCase);
  if (this_00 != pFVar2) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OutputFormat).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->OutputFormat).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupImpl @ 146be7850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UCompositionGraphCaptureProtocol::SetupImpl(UCompositionGraphCaptureProtocol *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  EDisplayOutputFormat EVar10;
  EDisplayColorGamut EVar11;
  wchar_t *pwVar12;
  UMaterialInterface *pUVar13;
  UClass *pUVar14;
  FFrameCaptureViewExtension *this_00;
  TSharedPtr<FGenericWindow,1> *pTVar15;
  void *pvVar16;
  UMaterialInterface *pUVar17;
  FAutoRegister local_res8 [8];
  uint local_res10 [2];
  TRawPtrProxy<FFrameCaptureViewExtension> local_res18;
  FString local_b8;
  FFrameCaptureViewExtension *local_a8;
  FSharedReferencer<1> FStack_a0;
  FString local_98;
  TSharedRef<FFrameCaptureViewExtension,1> local_88;
  TSharedPtr<SWindow,1> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TSharedRef<ISceneViewExtension,1> local_58;
  TStringView<wchar_t> local_48;
  TSharedPtr<FGenericWindow,1> local_38;
  
  if ((char)this->_padding_ == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  EVar11 = DCIP3_D65;
  (this->SceneViewport).Object = (FSceneViewport *)this->_padding_;
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar5 != (this->SceneViewport).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->SceneViewport).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (this->SceneViewport).WeakReferenceCount.ReferenceController = pTVar5;
  }
  pUVar17 = (UMaterialInterface *)0x0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pwVar12 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar12,L"-CustomRenderPasses=",&local_98,false,(wchar_t **)0x0);
  if (bVar8) {
    ::FString::ParseIntoArray(&local_98,&(this->IncludeRenderPasses).Value,L",",true);
  }
  local_res10[0] = (uint)(this->CaptureGamut).Value;
  pwVar12 = FCommandLine::Get();
  FParse::Value(pwVar12,L"-CaptureGamut=",(int *)local_res10);
  pwVar12 = FCommandLine::Get();
  FParse::Value(pwVar12,L"-HDRCompressionQuality=",&this->HDRCompressionQuality);
  pwVar12 = FCommandLine::Get();
  FParse::Bool(pwVar12,L"-CaptureFramesInHDR=",&this->bCaptureFramesInHDR);
  pwVar12 = FCommandLine::Get();
  FParse::Bool(pwVar12,L"-DisableScreenPercentage=",&this->bDisableScreenPercentage);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  pwVar12 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar12,L"-PostProcessingMaterial=",&local_b8,false,(wchar_t **)0x0);
  if (bVar8) {
    local_68 = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iStack_60 = 0;
    }
    else {
      iStack_60 = local_b8.Data.ArrayNum + -1;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&this->PostProcessingMaterial,&local_48);
  }
  pUVar13 = (UMaterialInterface *)
            FSoftObjectPath::TryLoad(&this->PostProcessingMaterial,(FUObjectSerializeContext *)0x0);
  if (pUVar13 != (UMaterialInterface *)0x0) {
    pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar4 = (int)pUVar14->_padding_;
    if ((iVar4 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar14->_padding_)) goto LAB_146be7a2e;
  }
  pUVar13 = pUVar17;
LAB_146be7a2e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->PostProcessingMaterialPtr).field0_0x0.DebugPtr = pUVar13;
  this_00 = ::operator_new(0x88);
  if (this_00 == (FFrameCaptureViewExtension *)0x0) {
    local_res18.Object = (FFrameCaptureViewExtension *)0x0;
  }
  else {
    local_res18.Object =
         FFrameCaptureViewExtension::FFrameCaptureViewExtension
                   (this_00,local_res8,&(this->IncludeRenderPasses).Value,this->bCaptureFramesInHDR,
                    this->HDRCompressionQuality,local_res10[0],
                    (this->PostProcessingMaterialPtr).field0_0x0.DebugPtr,
                    this->bDisableScreenPercentage);
    if ((((local_res18.Object != (FFrameCaptureViewExtension *)0x0) &&
         ((local_res18.Object)->_padding_ != 0)) && ((local_res18.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res18.Object)->_padding_ + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
  }
  TSharedRef<FFrameCaptureViewExtension,1>::
  TSharedRef<FFrameCaptureViewExtension,1><FFrameCaptureViewExtension>(&local_88,&local_res18);
  local_58.Object = (ISceneViewExtension *)local_88.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_a8 = local_88.Object;
  FStack_a0.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ViewExtension != (TSharedPtr<FFrameCaptureViewExtension,1> *)&local_a8) {
    (this->ViewExtension).Object = local_88.Object;
    local_a8 = (FFrameCaptureViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewExtension).SharedReferenceCount,&FStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  EVar10 = HDRGetDefaultDisplayOutputFormat();
  HDRGetDefaultDisplayColorGamut();
  bVar8 = IsHDREnabled();
  if ((bVar8) && (GRHIGlobals.SupportsHDROutput != false)) {
    pUVar17 = (UMaterialInterface *)0x1;
  }
  bVar3 = (this->CaptureGamut).Value;
  if (bVar3 == 5) {
    EVar10 = HDR_LinearEXR;
  }
  else {
    EVar11 = (EDisplayColorGamut)bVar3;
  }
  if ((char)this->_padding_ == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  if (this->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  FSceneViewport::FindWindow((FSceneViewport *)this->_padding_,&local_78);
  if (local_78.Object == (SWindow *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pTVar15 = SWindow::GetNativeWindow(local_78.Object,&local_38);
  if (pTVar15->Object == (FGenericWindow *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pvVar16 = (void *)(**(code **)(pTVar15->Object->_padding_ + 0xc0))();
  HDRAddCustomMetaData(pvVar16,EVar10,EVar11,SUB81(pUVar17,0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return true;
}

// StaticRegisterNativesUCompositionGraphCaptureProtocol @ 146be8cb0

void __cdecl
UCompositionGraphCaptureProtocol::StaticRegisterNativesUCompositionGraphCaptureProtocol(void)

{
  return;
}

// TickImpl @ 146be91f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UCompositionGraphCaptureProtocol::TickImpl(UCompositionGraphCaptureProtocol *this)

{
  return;
}

