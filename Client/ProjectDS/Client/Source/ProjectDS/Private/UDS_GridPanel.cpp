// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4a51c0

UClass * __cdecl UDS_GridPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GridPanel",
               &Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton,
               StaticRegisterNativesUDS_GridPanel,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GridPanel>,InternalVTableHelperCtorCaller<UDS_GridPanel>,
               local_res8,UGridPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton;
}

// UDS_GridPanel @ 14b4a6fb0

UDS_GridPanel * __thiscall UDS_GridPanel::UDS_GridPanel(UDS_GridPanel *this,FVTableHelper *param_1)

{
  UGridPanel::UGridPanel((UGridPanel *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_GridPanel @ 14b4a7870

void __thiscall UDS_GridPanel::~UDS_GridPanel(UDS_GridPanel *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UGridPanel::~UGridPanel((UGridPanel *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8b40

UClass * __cdecl UDS_GridPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GridPanel",
               &Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton,
               StaticRegisterNativesUDS_GridPanel,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GridPanel>,InternalVTableHelperCtorCaller<UDS_GridPanel>,
               local_res8,UGridPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GridPanel.InnerSingleton;
}

// StaticRegisterNativesUDS_GridPanel @ 14b4a9580

void __cdecl UDS_GridPanel::StaticRegisterNativesUDS_GridPanel(void)

{
  return;
}

// UDS_GridPanel @ 14bc83dc0

UDS_GridPanel * __thiscall
UDS_GridPanel::UDS_GridPanel(UDS_GridPanel *this,FObjectInitializer *param_1)

{
  UGridPanel::UGridPanel((UGridPanel *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_GridPanel::BeginDestroy(UDS_GridPanel *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3ba0

void __thiscall UDS_GridPanel::ReleaseSlateResources(UDS_GridPanel *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1e8 != &uStack_18) {
    *(undefined8 *)&this->field_0x1e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1f0,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccb440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GridPanel::SynchronizeProperties(UDS_GridPanel *this)

{
  SGridPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FDestructionSentinel FStack_88;
  FDestructionSentinel FStack_70;
  undefined1 auStack_58 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_50;
  ForAnyElementType FStack_48;
  ulonglong uStack_40;
  undefined1 auStack_38 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_30;
  ForAnyElementType FStack_28;
  ulonglong uStack_20;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(SGridPanel **)&this->field_0x1e8 != (SGridPanel *)0x0) {
    SGridPanel::ClearFill(*(SGridPanel **)&this->field_0x1e8);
    uVar5 = 0;
    uVar7 = uVar5;
    uVar8 = uVar5;
    if (0 < *(int *)&this->field_0x1d0) {
      do {
        if ((*(longlong *)&this->field_0x1e8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (uint)uVar7;
        pSVar1 = *(SGridPanel **)&this->field_0x1e8;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&this->field_0x1d0) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        auStack_58._0_4_ = *(float *)(uVar8 + *(longlong *)&this->field_0x1c8);
        TStack_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_48.Data = (FScriptContainerElement *)0x0;
        auStack_58[4] = true;
        uStack_40 = 0;
        SGridPanel::SetColumnFill(pSVar1,uVar6,(TAttribute<float> *)auStack_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_50,(FWriteAccessScope *)&FStack_88);
        if (((int)uStack_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_48.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
          uStack_40 = uStack_40 & 0xffffffff00000000;
        }
        if (FStack_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
        }
        if (FStack_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_50.AccessDetector);
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar8 = uVar8 + 4;
      } while ((int)(uVar6 + 1) < *(int *)&this->field_0x1d0);
    }
    uVar7 = uVar5;
    if (0 < *(int *)&this->field_0x1e0) {
      do {
        if ((*(longlong *)&this->field_0x1e8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (uint)uVar7;
        pSVar1 = *(SGridPanel **)&this->field_0x1e8;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&this->field_0x1e0) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        auStack_38._0_4_ = *(float *)(uVar5 + *(longlong *)&this->field_0x1d8);
        TStack_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_28.Data = (FScriptContainerElement *)0x0;
        auStack_38[4] = true;
        uStack_20 = 0;
        SGridPanel::SetRowFill(pSVar1,uVar6,(TAttribute<float> *)auStack_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_30,(FWriteAccessScope *)&FStack_70);
        if (((int)uStack_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_28.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
          uStack_20 = uStack_20 & 0xffffffff00000000;
        }
        if (FStack_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_70.Accessor,&FStack_70);
        }
        if (FStack_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_30.AccessDetector);
        uVar5 = uVar5 + 4;
        uVar7 = (ulonglong)(uVar6 + 1);
      } while ((int)(uVar6 + 1) < *(int *)&this->field_0x1e0);
    }
  }
  return;
}

