// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 21

// StaticClass @ 14d67e130

UClass * __cdecl UCameraImageCenterAlgo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraImageCenterAlgo",
               &Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton,
               StaticRegisterNativesUCameraImageCenterAlgo,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraImageCenterAlgo>,
               InternalVTableHelperCtorCaller<UCameraImageCenterAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton;
}

// UCameraImageCenterAlgo @ 14d6aad80

UCameraImageCenterAlgo * __thiscall
UCameraImageCenterAlgo::UCameraImageCenterAlgo(UCameraImageCenterAlgo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsActive = false;
  this->_padding_ = (longlong)&___7UCameraImageCenterAlgo__6B_;
  return this;
}

// UCameraImageCenterAlgo @ 14d6aadb0

UCameraImageCenterAlgo * __thiscall
UCameraImageCenterAlgo::UCameraImageCenterAlgo
          (UCameraImageCenterAlgo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsActive = false;
  this->_padding_ = (longlong)&___7UCameraImageCenterAlgo__6B_;
  return this;
}

// ~UCameraImageCenterAlgo @ 14d6acdf0

void __thiscall UCameraImageCenterAlgo::~UCameraImageCenterAlgo(UCameraImageCenterAlgo *this)

{
  this->_padding_ = (longlong)&___7UCameraImageCenterAlgo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 14d6b4c60

void __thiscall UCameraImageCenterAlgo::Activate(UCameraImageCenterAlgo *this)

{
  return;
}

// BuildHelpWidget @ 14d6b7700

TSharedRef<SWidget,1> * __thiscall
UCameraImageCenterAlgo::BuildHelpWidget
          (UCameraImageCenterAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\CameraImageCenterAlgo.h"
             ,0x4a,local_res10);
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

// BuildUI @ 14d6b8dd0

TSharedRef<SWidget,1> * __thiscall
UCameraImageCenterAlgo::BuildUI
          (UCameraImageCenterAlgo *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// Deactivate @ 14d6bfda0

void __thiscall UCameraImageCenterAlgo::Deactivate(UCameraImageCenterAlgo *this)

{
  return;
}

// FriendlyName @ 14d6cb7c0

FName __thiscall UCameraImageCenterAlgo::FriendlyName(UCameraImageCenterAlgo *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid Name");
  return in_RDX;
}

// GetOverlayMaterial @ 14d6d64d0

UMaterialInterface * __thiscall
UCameraImageCenterAlgo::GetOverlayMaterial(UCameraImageCenterAlgo *this)

{
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14d6d8330

UClass * __cdecl UCameraImageCenterAlgo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraImageCenterAlgo",
               &Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton,
               StaticRegisterNativesUCameraImageCenterAlgo,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraImageCenterAlgo>,
               InternalVTableHelperCtorCaller<UCameraImageCenterAlgo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton;
}

// HasImageCenterChanged @ 14d6dd2c0

bool __thiscall UCameraImageCenterAlgo::HasImageCenterChanged(UCameraImageCenterAlgo *this)

{
  return false;
}

// Initialize @ 14d6deb20

void __thiscall
UCameraImageCenterAlgo::Initialize(UCameraImageCenterAlgo *this,UImageCenterTool *param_1)

{
  return;
}

// IsActive @ 14d6e1610

bool __thiscall UCameraImageCenterAlgo::IsActive(UCameraImageCenterAlgo *this)

{
  return this->bIsActive;
}

// IsOverlayEnabled @ 14d6e1da0

bool __thiscall UCameraImageCenterAlgo::IsOverlayEnabled(UCameraImageCenterAlgo *this)

{
  return false;
}

// OnSavedImageCenter @ 14d6e53a0

void __thiscall UCameraImageCenterAlgo::OnSavedImageCenter(UCameraImageCenterAlgo *this)

{
  return;
}

// OnViewportClicked @ 14d6e53d0

bool __thiscall
UCameraImageCenterAlgo::OnViewportClicked
          (UCameraImageCenterAlgo *this,FGeometry *param_1,FPointerEvent *param_2)

{
  return false;
}

// OnViewportInputKey @ 14d6e5410

bool __thiscall
UCameraImageCenterAlgo::OnViewportInputKey
          (UCameraImageCenterAlgo *this,FKey *param_1,EInputEvent *param_2)

{
  return false;
}

// Shutdown @ 14d6eed50

void __thiscall UCameraImageCenterAlgo::Shutdown(UCameraImageCenterAlgo *this)

{
  return;
}

// StaticRegisterNativesUCameraImageCenterAlgo @ 14d6f0180

void __cdecl UCameraImageCenterAlgo::StaticRegisterNativesUCameraImageCenterAlgo(void)

{
  return;
}

// Tick @ 14d6f2990

void __thiscall UCameraImageCenterAlgo::Tick(UCameraImageCenterAlgo *this,float param_1)

{
  return;
}

