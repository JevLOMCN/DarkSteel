// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 149671fe0

UClass * __cdecl USingleClickTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickTool",
               &Z_Registration_Info_UClass_USingleClickTool.InnerSingleton,
               StaticRegisterNativesUSingleClickTool,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleClickTool>,
               InternalVTableHelperCtorCaller<USingleClickTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickTool.InnerSingleton;
}

// USingleClickTool @ 149688380

USingleClickTool * __thiscall
USingleClickTool::USingleClickTool(USingleClickTool *this,FVTableHelper *param_1)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7USingleClickTool__6B_;
  return this;
}

// USingleClickTool @ 1496883c0

USingleClickTool * __thiscall USingleClickTool::USingleClickTool(USingleClickTool *this)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7USingleClickTool__6B_;
  return this;
}

// ~USingleClickTool @ 14968aa90

void __thiscall USingleClickTool::~USingleClickTool(USingleClickTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// GetPrivateStaticClass @ 1496a76a0

UClass * __cdecl USingleClickTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickTool",
               &Z_Registration_Info_UClass_USingleClickTool.InnerSingleton,
               StaticRegisterNativesUSingleClickTool,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleClickTool>,
               InternalVTableHelperCtorCaller<USingleClickTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickTool.InnerSingleton;
}

// IsHitByClick @ 1496adfe0

FInputRayHit * __thiscall
USingleClickTool::IsHitByClick
          (USingleClickTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

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

// OnClicked @ 1496b58f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall USingleClickTool::OnClicked(USingleClickTool *this,FInputDeviceRay *param_1)

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
                     (&local_48,L"USingleClickTool",L"OnClickedMessage",
                      L"USingleClickTool::OnClicked at ({0},{1})");
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

// Setup @ 1496c2300

void __thiscall USingleClickTool::Setup(USingleClickTool *this)

{
  UObject *pUVar1;
  USingleClickInputBehavior *pUVar2;
  undefined1 *puVar3;
  
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<USingleClickInputBehavior>(pUVar1);
  puVar3 = &this->field_0xc0;
  if (this == (USingleClickTool *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar2->_padding_ + 0x378))(pUVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001496c235c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2f8))(this,pUVar2,0,*(code **)(*(longlong *)this + 0x2f8));
  return;
}

// StaticRegisterNativesUSingleClickTool @ 1496c2d70

void __cdecl USingleClickTool::StaticRegisterNativesUSingleClickTool(void)

{
  return;
}

