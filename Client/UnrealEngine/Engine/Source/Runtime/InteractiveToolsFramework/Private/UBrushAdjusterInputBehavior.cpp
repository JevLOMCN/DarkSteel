// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 18

// StaticClass @ 14966c280

UClass * __cdecl UBrushAdjusterInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushAdjusterInputBehavior",
               &Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton,
               StaticRegisterNativesUBrushAdjusterInputBehavior,0xe0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushAdjusterInputBehavior>,
               InternalVTableHelperCtorCaller<UBrushAdjusterInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton;
}

// UBrushAdjusterInputBehavior @ 149683450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushAdjusterInputBehavior * __thiscall
UBrushAdjusterInputBehavior::UBrushAdjusterInputBehavior
          (UBrushAdjusterInputBehavior *this,FVTableHelper *param_1)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this,param_1);
  this->bAdjustingBrush = false;
  *(undefined ***)this = &___7UBrushAdjusterInputBehavior__6B_;
  this->bAdjustingHorizontally = true;
  this->SizeAdjustSpeed = 0.002;
  this->StrengthAdjustSpeed = 0.005;
  return this;
}

// UBrushAdjusterInputBehavior @ 1496834a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushAdjusterInputBehavior * __thiscall
UBrushAdjusterInputBehavior::UBrushAdjusterInputBehavior(UBrushAdjusterInputBehavior *this)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  this->bAdjustingBrush = false;
  *(undefined ***)this = &___7UBrushAdjusterInputBehavior__6B_;
  this->bAdjustingHorizontally = true;
  this->SizeAdjustSpeed = 0.002;
  this->StrengthAdjustSpeed = 0.005;
  return this;
}

// ~UBrushAdjusterInputBehavior @ 149689510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::~UBrushAdjusterInputBehavior(UBrushAdjusterInputBehavior *this)

{
  *(undefined ***)this = &___7UBrushAdjusterInputBehavior__6B_;
  UAnyButtonInputBehavior::~UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  return;
}

// BeginCapture @ 149692500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputCaptureUpdate * __thiscall
UBrushAdjusterInputBehavior::BeginCapture
          (UBrushAdjusterInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  this->bAdjustingBrush = true;
  __return_storage_ptr__->State = Begin;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// DrawHUD @ 14969d330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::DrawHUD
          (UBrushAdjusterInputBehavior *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  UBrushBaseProperties *pUVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  UFont *pUVar5;
  TRefCountPtr<ITextData> TVar6;
  TSharedPtr<FCulture,1> local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  undefined1 local_228 [152];
  longlong local_190;
  longlong lStack_188;
  
  if (this->bAdjustingBrush != false) {
    FText::FText(&local_278);
    local_288.Object = (FCulture *)0x0;
    local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar1 = (this->BrushTool->BrushProperties).field0_0x0.DebugPtr;
    if (this->bAdjustingHorizontally == false) {
      pFVar2 = FText::AsNumber(&local_238,pUVar1->BrushStrength,(FNumberFormattingOptions *)0x0,
                               &local_288);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_268,L"UBaseBrushTool",L"AdjustStrength",L"Strength: {0}");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_248,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_258,pFVar4,pFVar2);
      FText::operator=(&local_278,pFVar2);
      TVar6.Reference = local_268.TextData.Reference;
      if (local_258.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
        TVar6.Reference = local_268.TextData.Reference;
      }
    }
    else {
      pFVar2 = FText::AsNumber(&local_248,pUVar1->BrushRadius,(FNumberFormattingOptions *)0x0,
                               &local_288);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_258,L"UBaseBrushTool",L"AdjustRadius",L"Radius: {0}");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_238,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_268,pFVar4,pFVar2);
      FText::operator=(&local_278,pFVar2);
      TVar6.Reference = local_258.TextData.Reference;
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
        TVar6.Reference = local_258.TextData.Reference;
      }
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.SharedReferenceCount.ReferenceController);
    pUVar5 = UEngine::GetMediumFont();
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_228,&this->BrushOrigin,&local_278,pUVar5,
               &FLinearColor::White);
    local_228._72_4_ = local_228._72_4_ | 2;
    local_228._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
    local_190 = ___xmm_3ff00000000000003ff0000000000000;
    lStack_188 = _UNK_150689688;
    FCanvas::DrawItem(param_1,(FCanvasItem *)local_228);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_228);
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ForceEndCapture @ 14969f4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::ForceEndCapture
          (UBrushAdjusterInputBehavior *this,FInputCaptureData *param_1)

{
  this->bAdjustingBrush = false;
  return;
}

// GetPrivateStaticClass @ 1496a4110

UClass * __cdecl UBrushAdjusterInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushAdjusterInputBehavior",
               &Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton,
               StaticRegisterNativesUBrushAdjusterInputBehavior,0xe0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushAdjusterInputBehavior>,
               InternalVTableHelperCtorCaller<UBrushAdjusterInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 1496a8e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EInputDevices __thiscall
UBrushAdjusterInputBehavior::GetSupportedDevices(UBrushAdjusterInputBehavior *this)

{
  return Keyboard;
}

// Initialize @ 1496ac080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::Initialize(UBrushAdjusterInputBehavior *this,UBaseBrushTool *param_1)

{
  this->BrushTool = param_1;
  return;
}

// IsPressed @ 1496ae390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBrushAdjusterInputBehavior::IsPressed(UBrushAdjusterInputBehavior *this,FInputDeviceState *param_1)

{
  if ((((param_1->InputDevice & Keyboard) != None) &&
      (*(undefined4 *)&this->field_0x50 = 1,
      (param_1->Keyboard).ActiveKey.Button.KeyName == EKeys::B.KeyName)) &&
     ((param_1->Keyboard).ActiveKey.bDown != false)) {
    return true;
  }
  return false;
}

// IsReleased @ 1496ae3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBrushAdjusterInputBehavior::IsReleased
          (UBrushAdjusterInputBehavior *this,FInputDeviceState *param_1)

{
  if ((((param_1->InputDevice & Keyboard) != None) &&
      ((param_1->Keyboard).ActiveKey.Button.KeyName == EKeys::B.KeyName)) &&
     ((param_1->Keyboard).ActiveKey.bReleased != false)) {
    return true;
  }
  return false;
}

// OnDragStart @ 1496b5a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::OnDragStart
          (UBrushAdjusterInputBehavior *this,TVector2<double> *param_1)

{
  UBaseBrushTool *pUVar1;
  UBrushBaseProperties *pUVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  
  pUVar1 = this->BrushTool;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  this->bAdjustingHorizontally = true;
  (this->BrushOrigin).field0_0x0._s_0.X = dVar3;
  (this->BrushOrigin).field0_0x0._s_0.Y = dVar4;
  (this->AdjustmentOrigin).field0_0x0._s_0.X = dVar3;
  (this->AdjustmentOrigin).field0_0x0._s_0.Y = dVar4;
  pUVar2 = (pUVar1->BrushProperties).field0_0x0.DebugPtr;
  lVar5 = 0xb8;
  if (pUVar2->bSpecifyRadius == false) {
    lVar5 = 0xb0;
  }
  this->StartBrushRadius = *(float *)((longlong)&pUVar2->_padding_ + lVar5);
  this->StartBrushStrength = ((pUVar1->BrushProperties).field0_0x0.DebugPtr)->BrushStrength;
  return;
}

// OnDragUpdate @ 1496b5a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::OnDragUpdate
          (UBrushAdjusterInputBehavior *this,TVector2<double> *param_1)

{
  UBrushBaseProperties *pUVar1;
  double dVar2;
  double dVar3;
  UBaseBrushTool *pUVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (this->bAdjustingBrush != false) {
    fVar7 = (float)((param_1->field0_0x0)._s_0.Y - (this->AdjustmentOrigin).field0_0x0._s_0.Y);
    fVar8 = (float)((param_1->field0_0x0)._s_0.X - (this->AdjustmentOrigin).field0_0x0._s_0.X);
    fVar6 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (this->bAdjustingHorizontally == false) {
      pUVar4 = this->BrushTool;
      if (fVar6 < (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        dVar2 = (param_1->field0_0x0)._s_0.X;
        dVar3 = (param_1->field0_0x0)._s_0.Y;
        this->bAdjustingHorizontally = true;
        (this->AdjustmentOrigin).field0_0x0._s_0.X = dVar2;
        (this->AdjustmentOrigin).field0_0x0._s_0.Y = dVar3;
        pUVar1 = (pUVar4->BrushProperties).field0_0x0.DebugPtr;
        lVar5 = 0xb8;
        if (pUVar1->bSpecifyRadius == false) {
          lVar5 = 0xb0;
        }
        this->StartBrushRadius = *(float *)((longlong)&pUVar1->_padding_ + lVar5);
        this->StartBrushStrength = ((pUVar4->BrushProperties).field0_0x0.DebugPtr)->BrushStrength;
        pUVar4 = this->BrushTool;
        goto LAB_1496b5be4;
      }
    }
    else {
      if (fVar6 <= (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        pUVar4 = this->BrushTool;
LAB_1496b5be4:
        pUVar1 = (pUVar4->BrushProperties).field0_0x0.DebugPtr;
        if (pUVar1->bSpecifyRadius != false) {
          fVar6 = this->SizeAdjustSpeed * (pUVar4->LastBrushStamp).HitResult.Distance * fVar8 +
                  this->StartBrushRadius;
          if (fVar6 <= __real_3c23d70a) {
            fVar6 = __real_3c23d70a;
          }
          pUVar1->BrushRadius = fVar6;
          return;
        }
        fVar6 = this->SizeAdjustSpeed * fVar8 + this->StartBrushRadius;
        if (__real_3f800000 <= fVar6) {
          fVar6 = __real_3f800000;
        }
        if (fVar6 <= __real_3c23d70a) {
          fVar6 = __real_3c23d70a;
        }
        pUVar1->BrushSize = fVar6;
        return;
      }
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      this->bAdjustingHorizontally = false;
      (this->AdjustmentOrigin).field0_0x0._s_0.X = dVar2;
      (this->AdjustmentOrigin).field0_0x0._s_0.Y = dVar3;
      pUVar1 = (this->BrushTool->BrushProperties).field0_0x0.DebugPtr;
      lVar5 = 0xb8;
      if (pUVar1->bSpecifyRadius == false) {
        lVar5 = 0xb0;
      }
      this->StartBrushRadius = *(float *)((longlong)&pUVar1->_padding_ + lVar5);
      this->StartBrushStrength =
           ((this->BrushTool->BrushProperties).field0_0x0.DebugPtr)->BrushStrength;
      pUVar4 = this->BrushTool;
    }
    fVar6 = this->StartBrushStrength - fVar7 * this->StrengthAdjustSpeed;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    ((pUVar4->BrushProperties).field0_0x0.DebugPtr)->BrushStrength = fVar6;
  }
  return;
}

// ResetAdjustmentOrigin @ 1496bbbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBrushAdjusterInputBehavior::ResetAdjustmentOrigin
          (UBrushAdjusterInputBehavior *this,TVector2<double> *param_1,bool param_2)

{
  UBaseBrushTool *pUVar1;
  UBrushBaseProperties *pUVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  this->bAdjustingHorizontally = param_2;
  pUVar1 = this->BrushTool;
  (this->AdjustmentOrigin).field0_0x0._s_0.X = dVar3;
  (this->AdjustmentOrigin).field0_0x0._s_0.Y = dVar4;
  pUVar2 = (pUVar1->BrushProperties).field0_0x0.DebugPtr;
  lVar5 = 0xb8;
  if (pUVar2->bSpecifyRadius == false) {
    lVar5 = 0xb0;
  }
  this->StartBrushRadius = *(float *)((longlong)&pUVar2->_padding_ + lVar5);
  this->StartBrushStrength = ((pUVar1->BrushProperties).field0_0x0.DebugPtr)->BrushStrength;
  return;
}

// StaticRegisterNativesUBrushAdjusterInputBehavior @ 1496c2760

void __cdecl UBrushAdjusterInputBehavior::StaticRegisterNativesUBrushAdjusterInputBehavior(void)

{
  return;
}

// UpdateCapture @ 1496c3b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputCaptureUpdate * __thiscall
UBrushAdjusterInputBehavior::UpdateCapture
          (UBrushAdjusterInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x330))(this,param_1);
  if (cVar1 == '\0') {
    __return_storage_ptr__->State = Continue;
  }
  else {
    this->bAdjustingBrush = false;
    __return_storage_ptr__->State = End;
  }
  (__return_storage_ptr__->Data).WhichSide = Any;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// WantsCapture @ 1496c5c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputCaptureRequest * __thiscall
UBrushAdjusterInputBehavior::WantsCapture
          (UBrushAdjusterInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 800))(this,param_1);
  __return_storage_ptr__->Side = Any;
  __return_storage_ptr__->Owner = (void *)0x0;
  if (cVar1 != '\0') {
    __return_storage_ptr__->Type = Begin;
    __return_storage_ptr__->Source = (UInputBehavior *)this;
    __return_storage_ptr__->HitDepth = 0.0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  return __return_storage_ptr__;
}

