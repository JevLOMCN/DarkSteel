// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 14966fec0

UClass * __cdecl UClickDragTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragTool",
               &Z_Registration_Info_UClass_UClickDragTool.InnerSingleton,
               StaticRegisterNativesUClickDragTool,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UClickDragTool>,
               InternalVTableHelperCtorCaller<UClickDragTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragTool.InnerSingleton;
}

// UClickDragTool @ 1496835b0

UClickDragTool * __thiscall
UClickDragTool::UClickDragTool(UClickDragTool *this,FVTableHelper *param_1)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UClickDragTool__6B_;
  return this;
}

// UClickDragTool @ 1496835f0

UClickDragTool * __thiscall UClickDragTool::UClickDragTool(UClickDragTool *this)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UClickDragTool__6B_;
  return this;
}

// ~UClickDragTool @ 149689550

void __thiscall UClickDragTool::~UClickDragTool(UClickDragTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// CanBeginClickDragSequence @ 1496967b0

FInputRayHit * __thiscall
UClickDragTool::CanBeginClickDragSequence
          (UClickDragTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  
  __return_storage_ptr__->bHit = true;
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->HitDepth = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res10[0];
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a4290

UClass * __cdecl UClickDragTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragTool",
               &Z_Registration_Info_UClass_UClickDragTool.InnerSingleton,
               StaticRegisterNativesUClickDragTool,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UClickDragTool>,
               InternalVTableHelperCtorCaller<UClickDragTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragTool.InnerSingleton;
}

// OnClickDrag @ 1496b4bd0

void __thiscall UClickDragTool::OnClickDrag(UClickDragTool *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClickPress @ 1496b4fa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UClickDragTool::OnClickPress(UClickDragTool *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSharedPtr<FCulture,1> local_78;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)&this[-1].field_0x8 + 0x2d8))();
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pcVar1 = *(code **)(*plVar2 + 0x360);
  pFVar3 = FText::AsNumber(&local_38,(param_1->ScreenPosition).field0_0x0._s_0.Y,
                           (FNumberFormattingOptions *)0x0,&local_68);
  local_78.Object = (FCulture *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_28,(param_1->ScreenPosition).field0_0x0._s_0.X,
                           (FNumberFormattingOptions *)0x0,&local_78);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UClickDragTool",L"OnClickPressMessage",
                      L"UClickDragTool::OnClickPress: clicked at ({0},{1})");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  pFVar3 = FText::Format<FText,FText>(&local_58,pFVar6,pFVar4,pFVar3);
  (*pcVar1)(plVar2,pFVar3,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// OnClickRelease @ 1496b5590

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UClickDragTool::OnClickRelease(UClickDragTool *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSharedPtr<FCulture,1> local_78;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)&this[-1].field_0x8 + 0x2d8))();
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pcVar1 = *(code **)(*plVar2 + 0x360);
  pFVar3 = FText::AsNumber(&local_38,(param_1->ScreenPosition).field0_0x0._s_0.Y,
                           (FNumberFormattingOptions *)0x0,&local_68);
  local_78.Object = (FCulture *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_28,(param_1->ScreenPosition).field0_0x0._s_0.X,
                           (FNumberFormattingOptions *)0x0,&local_78);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UClickDragTool",L"OnClickReleaseMessage",
                      L"UClickDragTool::OnClickRelease: released at ({0},{1})");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  pFVar3 = FText::Format<FText,FText>(&local_58,pFVar6,pFVar4,pFVar3);
  (*pcVar1)(plVar2,pFVar3,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// OnTerminateDragSequence @ 1496b5d60

void __thiscall UClickDragTool::OnTerminateDragSequence(UClickDragTool *this)

{
  return;
}

// Setup @ 1496c18e0

void __thiscall UClickDragTool::Setup(UClickDragTool *this)

{
  UObject *pUVar1;
  UClickDragInputBehavior *pUVar2;
  undefined1 *puVar3;
  
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UClickDragInputBehavior>(pUVar1);
  puVar3 = &this->field_0xc0;
  if (this == (UClickDragTool *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001496c193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2f8))(this,pUVar2,0,*(code **)(*(longlong *)this + 0x2f8));
  return;
}

// StaticRegisterNativesUClickDragTool @ 1496c2780

void __cdecl UClickDragTool::StaticRegisterNativesUClickDragTool(void)

{
  return;
}

