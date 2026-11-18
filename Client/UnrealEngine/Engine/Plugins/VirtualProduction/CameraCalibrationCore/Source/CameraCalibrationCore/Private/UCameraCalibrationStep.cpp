// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 21

// StaticClass @ 14d6787c0

UClass * __cdecl UCameraCalibrationStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationStep",
               &Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationStep,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraCalibrationStep>,
               InternalVTableHelperCtorCaller<UCameraCalibrationStep>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton;
}

// UCameraCalibrationStep @ 14d6aa9a0

UCameraCalibrationStep * __thiscall
UCameraCalibrationStep::UCameraCalibrationStep(UCameraCalibrationStep *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraCalibrationStep__6B_;
  return this;
}

// UCameraCalibrationStep @ 14d6aa9d0

UCameraCalibrationStep * __thiscall
UCameraCalibrationStep::UCameraCalibrationStep
          (UCameraCalibrationStep *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraCalibrationStep__6B_;
  return this;
}

// ~UCameraCalibrationStep @ 14d6accb0

void __thiscall UCameraCalibrationStep::~UCameraCalibrationStep(UCameraCalibrationStep *this)

{
  *(undefined ***)this = &___7UCameraCalibrationStep__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 14d6b4c50

void __thiscall UCameraCalibrationStep::Activate(UCameraCalibrationStep *this)

{
  return;
}

// BuildUI @ 14d6b8b70

TSharedRef<SWidget,1> * __thiscall
UCameraCalibrationStep::BuildUI
          (UCameraCalibrationStep *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  SVerticalBox *pSVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_248;
  FMemScope local_230;
  FArguments local_228;
  
  pFVar7 = SVerticalBox::FArguments::FArguments(&local_228);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_230,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\CameraCalibrationStep.h"
             ,0x30,local_res10);
  FMemScope::~FMemScope(&local_230);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_248._Widget.Object;
  if (local_248._Widget.Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_248._Widget.Object,(FSlateBaseNamedArgs *)pFVar7);
  SVerticalBox::Construct(local_248._Widget.Object,pFVar7);
  if (local_248._Widget.Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  if (((local_248._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)local_248._Widget.Object + 0x228))(local_248._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d6b8cad;
  }
  bVar6 = 0x20;
LAB_14d6b8cad:
  (local_248._Widget.Object)->field_0x30 = (local_248._Widget.Object)->field_0x30 & 0xdf;
  (local_248._Widget.Object)->field_0x30 = (local_248._Widget.Object)->field_0x30 | bVar6;
  if (local_248._Widget.Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  (local_248._Widget.Object)->field_0x31 = (local_248._Widget.Object)->field_0x31 | 4;
  if (local_248._Widget.Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  FVar3.ReferenceController = local_248._Widget.SharedReferenceCount.ReferenceController;
  local_248._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_248._Widget.Object = (SVerticalBox *)0x0;
  if (pSVar2 == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_228._Slots.AllocatorInstance.Data,local_228._Slots.ArrayNum);
  if ((FSlotArguments *)local_228._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_228._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_228);
  return __return_storage_ptr__;
}

// Deactivate @ 14d6bfd90

void __thiscall UCameraCalibrationStep::Deactivate(UCameraCalibrationStep *this)

{
  return;
}

// DependsOnStep @ 14d6c00d0

bool __thiscall
UCameraCalibrationStep::DependsOnStep(UCameraCalibrationStep *this,UCameraCalibrationStep *param_1)

{
  return false;
}

// FriendlyName @ 14d6cb790

FName __thiscall UCameraCalibrationStep::FriendlyName(UCameraCalibrationStep *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Invalid");
  return in_RDX;
}

// GetCameraCalibrationStepsController @ 14d6d2760

FCameraCalibrationStepsController * __thiscall
UCameraCalibrationStep::GetCameraCalibrationStepsController(UCameraCalibrationStep *this)

{
  return (FCameraCalibrationStepsController *)0x0;
}

// GetOverlayMID @ 14d6d6270

UMaterialInstanceDynamic * __thiscall
UCameraCalibrationStep::GetOverlayMID(UCameraCalibrationStep *this)

{
  return (UMaterialInstanceDynamic *)0x0;
}

// GetPrivateStaticClass @ 14d6d81c0

UClass * __cdecl UCameraCalibrationStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationStep",
               &Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationStep,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraCalibrationStep>,
               InternalVTableHelperCtorCaller<UCameraCalibrationStep>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton;
}

// Initialize @ 14d6de950

void __thiscall
UCameraCalibrationStep::Initialize
          (UCameraCalibrationStep *this,TWeakPtr<FCameraCalibrationStepsController,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014d6de970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// IsActive @ 14d6e1600

bool __thiscall UCameraCalibrationStep::IsActive(UCameraCalibrationStep *this)

{
  return false;
}

// IsOverlayEnabled @ 14d6e1d90

bool __thiscall UCameraCalibrationStep::IsOverlayEnabled(UCameraCalibrationStep *this)

{
  return false;
}

// OnViewportClicked @ 14d6e53c0

bool __thiscall
UCameraCalibrationStep::OnViewportClicked
          (UCameraCalibrationStep *this,FGeometry *param_1,FPointerEvent *param_2)

{
  return false;
}

// OnViewportInputKey @ 14d6e5400

bool __thiscall
UCameraCalibrationStep::OnViewportInputKey
          (UCameraCalibrationStep *this,FKey *param_1,EInputEvent *param_2)

{
  return false;
}

// OnViewportMarqueeSelect @ 14d6e5430

bool __thiscall
UCameraCalibrationStep::OnViewportMarqueeSelect
          (UCameraCalibrationStep *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  return false;
}

// Shutdown @ 14d6eed40

void __thiscall UCameraCalibrationStep::Shutdown(UCameraCalibrationStep *this)

{
  return;
}

// StaticRegisterNativesUCameraCalibrationStep @ 14d6f0130

void __cdecl UCameraCalibrationStep::StaticRegisterNativesUCameraCalibrationStep(void)

{
  return;
}

// Tick @ 14d6f2980

void __thiscall UCameraCalibrationStep::Tick(UCameraCalibrationStep *this,float param_1)

{
  return;
}

