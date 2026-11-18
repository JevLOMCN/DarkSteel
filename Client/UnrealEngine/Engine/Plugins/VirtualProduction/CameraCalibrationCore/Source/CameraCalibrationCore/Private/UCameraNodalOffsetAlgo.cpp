// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 24

// StaticClass @ 14d67ee30

UClass * __cdecl UCameraNodalOffsetAlgo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraNodalOffsetAlgo",
               &Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton,
               StaticRegisterNativesUCameraNodalOffsetAlgo,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraNodalOffsetAlgo>,
               InternalVTableHelperCtorCaller<UCameraNodalOffsetAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton;
}

// UCameraNodalOffsetAlgo @ 14d6aae40

UCameraNodalOffsetAlgo * __thiscall
UCameraNodalOffsetAlgo::UCameraNodalOffsetAlgo(UCameraNodalOffsetAlgo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraNodalOffsetAlgo__6B_;
  return this;
}

// UCameraNodalOffsetAlgo @ 14d6aae70

UCameraNodalOffsetAlgo * __thiscall
UCameraNodalOffsetAlgo::UCameraNodalOffsetAlgo
          (UCameraNodalOffsetAlgo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraNodalOffsetAlgo__6B_;
  return this;
}

// ~UCameraNodalOffsetAlgo @ 14d6ace30

void __thiscall UCameraNodalOffsetAlgo::~UCameraNodalOffsetAlgo(UCameraNodalOffsetAlgo *this)

{
  *(undefined ***)this = &___7UCameraNodalOffsetAlgo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildHelpWidget @ 14d6b79e0

TSharedRef<SWidget,1> * __thiscall
UCameraNodalOffsetAlgo::BuildHelpWidget
          (UCameraNodalOffsetAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\CameraNodalOffsetAlgo.h"
             ,0x5a,local_res10);
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

// BuildUI @ 14d6b8e30

TSharedRef<SWidget,1> * __thiscall
UCameraNodalOffsetAlgo::BuildUI
          (UCameraNodalOffsetAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// FriendlyName @ 14d6cb820

FName __thiscall UCameraNodalOffsetAlgo::FriendlyName(UCameraNodalOffsetAlgo *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid Name");
  return in_RDX;
}

// GetNodalOffset @ 14d6d6020

bool __thiscall
UCameraNodalOffsetAlgo::GetNodalOffset
          (UCameraNodalOffsetAlgo *this,FNodalPointOffset *param_1,float *param_2,float *param_3,
          float *param_4,FText *param_5)

{
  return false;
}

// GetOverlayMaterial @ 14d6d64f0

UMaterialInterface * __thiscall
UCameraNodalOffsetAlgo::GetOverlayMaterial(UCameraNodalOffsetAlgo *this)

{
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14d6d8490

UClass * __cdecl UCameraNodalOffsetAlgo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraNodalOffsetAlgo",
               &Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton,
               StaticRegisterNativesUCameraNodalOffsetAlgo,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraNodalOffsetAlgo>,
               InternalVTableHelperCtorCaller<UCameraNodalOffsetAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton;
}

// HasCalibrationData @ 14d6dd130

bool __thiscall UCameraNodalOffsetAlgo::HasCalibrationData(UCameraNodalOffsetAlgo *this)

{
  return false;
}

// ImportCalibrationRow @ 14d6ddc70

int __thiscall
UCameraNodalOffsetAlgo::ImportCalibrationRow
          (UCameraNodalOffsetAlgo *this,TSharedRef<FJsonObject,1> *param_1,FImage *param_2)

{
  return -1;
}

// ImportSessionData @ 14d6ddc90

void __thiscall
UCameraNodalOffsetAlgo::ImportSessionData
          (UCameraNodalOffsetAlgo *this,TSharedRef<FJsonObject,1> *param_1)

{
  return;
}

// Initialize @ 14d6deb40

void __thiscall
UCameraNodalOffsetAlgo::Initialize(UCameraNodalOffsetAlgo *this,UNodalOffsetTool *param_1)

{
  return;
}

// IsOverlayEnabled @ 14d6e1dc0

bool __thiscall UCameraNodalOffsetAlgo::IsOverlayEnabled(UCameraNodalOffsetAlgo *this)

{
  return false;
}

// OnSavedNodalOffset @ 14d6e53b0

void __thiscall UCameraNodalOffsetAlgo::OnSavedNodalOffset(UCameraNodalOffsetAlgo *this)

{
  return;
}

// OnViewportClicked @ 14d6e53f0

bool __thiscall
UCameraNodalOffsetAlgo::OnViewportClicked
          (UCameraNodalOffsetAlgo *this,FGeometry *param_1,FPointerEvent *param_2)

{
  return false;
}

// OnViewportInputKey @ 14d6e5420

bool __thiscall
UCameraNodalOffsetAlgo::OnViewportInputKey
          (UCameraNodalOffsetAlgo *this,FKey *param_1,EInputEvent *param_2)

{
  return false;
}

// PostImportCalibrationData @ 14d6e5450

void __thiscall UCameraNodalOffsetAlgo::PostImportCalibrationData(UCameraNodalOffsetAlgo *this)

{
  return;
}

// PreImportCalibrationData @ 14d6e5620

void __thiscall UCameraNodalOffsetAlgo::PreImportCalibrationData(UCameraNodalOffsetAlgo *this)

{
  return;
}

// ShortName @ 14d6ee920

FName __thiscall UCameraNodalOffsetAlgo::ShortName(UCameraNodalOffsetAlgo *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid");
  return in_RDX;
}

// Shutdown @ 14d6eed70

void __thiscall UCameraNodalOffsetAlgo::Shutdown(UCameraNodalOffsetAlgo *this)

{
  return;
}

// StaticRegisterNativesUCameraNodalOffsetAlgo @ 14d6f01a0

void __cdecl UCameraNodalOffsetAlgo::StaticRegisterNativesUCameraNodalOffsetAlgo(void)

{
  return;
}

// Tick @ 14d6f29b0

void __thiscall UCameraNodalOffsetAlgo::Tick(UCameraNodalOffsetAlgo *this,float param_1)

{
  return;
}

