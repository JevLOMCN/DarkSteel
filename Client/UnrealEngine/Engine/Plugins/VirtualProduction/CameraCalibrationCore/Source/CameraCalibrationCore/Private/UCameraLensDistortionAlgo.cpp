// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 28

// StaticClass @ 14d67e580

UClass * __cdecl UCameraLensDistortionAlgo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraLensDistortionAlgo",
               &Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton,
               StaticRegisterNativesUCameraLensDistortionAlgo,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraLensDistortionAlgo>,
               InternalVTableHelperCtorCaller<UCameraLensDistortionAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton;
}

// UCameraLensDistortionAlgo @ 14d6aade0

UCameraLensDistortionAlgo * __thiscall
UCameraLensDistortionAlgo::UCameraLensDistortionAlgo
          (UCameraLensDistortionAlgo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraLensDistortionAlgo__6B_;
  return this;
}

// UCameraLensDistortionAlgo @ 14d6aae10

UCameraLensDistortionAlgo * __thiscall
UCameraLensDistortionAlgo::UCameraLensDistortionAlgo
          (UCameraLensDistortionAlgo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraLensDistortionAlgo__6B_;
  return this;
}

// ~UCameraLensDistortionAlgo @ 14d6ace10

void __thiscall
UCameraLensDistortionAlgo::~UCameraLensDistortionAlgo(UCameraLensDistortionAlgo *this)

{
  *(undefined ***)this = &___7UCameraLensDistortionAlgo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginCalibration @ 14d6b6770

TTask<FDistortionCalibrationResult> __thiscall
UCameraLensDistortionAlgo::BeginCalibration(UCameraLensDistortionAlgo *this,FText *param_1)

{
  (param_1->TextData).Reference = (ITextData *)0x0;
  return (TTask<FDistortionCalibrationResult>)param_1;
}

// BuildHelpWidget @ 14d6b7870

TSharedRef<SWidget,1> * __thiscall
UCameraLensDistortionAlgo::BuildHelpWidget
          (UCameraLensDistortionAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  FText *pFVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_5d8;
  TAttribute<FText> local_5d0;
  TSharedRef<STextBlock,1> local_5a0;
  FText local_590;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_580;
  FArguments local_568;
  
  pFVar2 = STextBlock::FArguments::FArguments(&local_568);
  pFVar3 = FText::FromString(&local_590,L"Coming soon!");
  FText::FText(&local_5d0.Value,pFVar3);
  local_5d0.bIsSet = true;
  local_5d0.Getter._16_8_ = 0;
  local_5d0.Getter._0_8_ = 0;
  local_5d0.Getter._8_8_ = 0;
  pFVar2 = STextBlock::FArguments::Text(pFVar2,&local_5d0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_580,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\CameraLensDistortionAlgo.h"
             ,0x7b,local_res10);
  FMemScope::~FMemScope(&local_5d8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_580,&local_5a0,pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580._Widget.SharedReferenceCount.ReferenceController);
  if (local_590.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_568);
  return __return_storage_ptr__;
}

// BuildUI @ 14d6b8e00

TSharedRef<SWidget,1> * __thiscall
UCameraLensDistortionAlgo::BuildUI
          (UCameraLensDistortionAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// CancelCalibration @ 14d6b92c0

void __thiscall UCameraLensDistortionAlgo::CancelCalibration(UCameraLensDistortionAlgo *this)

{
  return;
}

// FriendlyName @ 14d6cb7f0

FName __thiscall UCameraLensDistortionAlgo::FriendlyName(UCameraLensDistortionAlgo *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid Name");
  return in_RDX;
}

// GetCalibrationStatus @ 14d6d2620

bool __thiscall
UCameraLensDistortionAlgo::GetCalibrationStatus(UCameraLensDistortionAlgo *this,FText *param_1)

{
  return false;
}

// GetLensDistortion @ 14d6d5290

bool __thiscall
UCameraLensDistortionAlgo::GetLensDistortion
          (UCameraLensDistortionAlgo *this,float *param_1,float *param_2,FDistortionInfo *param_3,
          FFocalLengthInfo *param_4,FImageCenterInfo *param_5,TSubclassOf<ULensModel> *param_6,
          double *param_7,FText *param_8)

{
  return false;
}

// GetOverlayMaterial @ 14d6d64e0

UMaterialInterface * __thiscall
UCameraLensDistortionAlgo::GetOverlayMaterial(UCameraLensDistortionAlgo *this)

{
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14d6d83e0

UClass * __cdecl UCameraLensDistortionAlgo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraLensDistortionAlgo",
               &Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton,
               StaticRegisterNativesUCameraLensDistortionAlgo,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraLensDistortionAlgo>,
               InternalVTableHelperCtorCaller<UCameraLensDistortionAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensDistortionAlgo.InnerSingleton;
}

// HasCalibrationData @ 14d6dd120

bool __thiscall UCameraLensDistortionAlgo::HasCalibrationData(UCameraLensDistortionAlgo *this)

{
  return false;
}

// ImportCalibrationRow @ 14d6ddc60

int __thiscall
UCameraLensDistortionAlgo::ImportCalibrationRow
          (UCameraLensDistortionAlgo *this,TSharedRef<FJsonObject,1> *param_1,FImage *param_2)

{
  return -1;
}

// ImportSessionData @ 14d6ddc80

void __thiscall
UCameraLensDistortionAlgo::ImportSessionData
          (UCameraLensDistortionAlgo *this,TSharedRef<FJsonObject,1> *param_1)

{
  return;
}

// Initialize @ 14d6deb30

void __thiscall
UCameraLensDistortionAlgo::Initialize(UCameraLensDistortionAlgo *this,ULensDistortionTool *param_1)

{
  return;
}

// IsOverlayEnabled @ 14d6e1db0

bool __thiscall UCameraLensDistortionAlgo::IsOverlayEnabled(UCameraLensDistortionAlgo *this)

{
  return false;
}

// OnDistortionSavedToLens @ 14d6e4cd0

void __thiscall UCameraLensDistortionAlgo::OnDistortionSavedToLens(UCameraLensDistortionAlgo *this)

{
  return;
}

// OnViewportClicked @ 14d6e53e0

bool __thiscall
UCameraLensDistortionAlgo::OnViewportClicked
          (UCameraLensDistortionAlgo *this,FGeometry *param_1,FPointerEvent *param_2)

{
  return false;
}

// PostImportCalibrationData @ 14d6e5440

void __thiscall
UCameraLensDistortionAlgo::PostImportCalibrationData(UCameraLensDistortionAlgo *this)

{
  return;
}

// PreImportCalibrationData @ 14d6e5610

void __thiscall UCameraLensDistortionAlgo::PreImportCalibrationData(UCameraLensDistortionAlgo *this)

{
  return;
}

// ShortName @ 14d6ee8f0

FName __thiscall UCameraLensDistortionAlgo::ShortName(UCameraLensDistortionAlgo *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid");
  return in_RDX;
}

// Shutdown @ 14d6eed60

void __thiscall UCameraLensDistortionAlgo::Shutdown(UCameraLensDistortionAlgo *this)

{
  return;
}

// StaticRegisterNativesUCameraLensDistortionAlgo @ 14d6f0190

void __cdecl UCameraLensDistortionAlgo::StaticRegisterNativesUCameraLensDistortionAlgo(void)

{
  return;
}

// SupportsAsyncCalibration @ 14d6f0270

bool __thiscall UCameraLensDistortionAlgo::SupportsAsyncCalibration(UCameraLensDistortionAlgo *this)

{
  return false;
}

// SupportsModel @ 14d6f0280

bool __thiscall
UCameraLensDistortionAlgo::SupportsModel
          (UCameraLensDistortionAlgo *this,TSubclassOf<ULensModel> *param_1)

{
  return false;
}

// Tick @ 14d6f29a0

void __thiscall UCameraLensDistortionAlgo::Tick(UCameraLensDistortionAlgo *this,float param_1)

{
  return;
}

