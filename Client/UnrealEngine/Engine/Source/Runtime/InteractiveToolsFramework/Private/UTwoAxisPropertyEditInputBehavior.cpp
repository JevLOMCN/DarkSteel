// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 26

// StaticClass @ 14962d670

UClass * __cdecl UTwoAxisPropertyEditInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"TwoAxisPropertyEditInputBehavior",
               &Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton,
               StaticRegisterNativesUTwoAxisPropertyEditInputBehavior,0x90,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwoAxisPropertyEditInputBehavior>,
               InternalVTableHelperCtorCaller<UTwoAxisPropertyEditInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton;
}

// UTwoAxisPropertyEditInputBehavior @ 14963d360

UTwoAxisPropertyEditInputBehavior * __thiscall
UTwoAxisPropertyEditInputBehavior::UTwoAxisPropertyEditInputBehavior
          (UTwoAxisPropertyEditInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->bInDrag = false;
  this->bKeyPressed = false;
  this->_padding_ = (longlong)&___7UTwoAxisPropertyEditInputBehavior__6B_;
  (this->State).StartValue = 0.0;
  this->Target = (ITwoAxisPropertyEditBehaviorTarget *)0x0;
  (this->State).bAdjustingHorizontally = true;
  return this;
}

// UTwoAxisPropertyEditInputBehavior @ 14963d3a0

UTwoAxisPropertyEditInputBehavior * __thiscall
UTwoAxisPropertyEditInputBehavior::UTwoAxisPropertyEditInputBehavior
          (UTwoAxisPropertyEditInputBehavior *this)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  this->bInDrag = false;
  this->bKeyPressed = false;
  this->_padding_ = (longlong)&___7UTwoAxisPropertyEditInputBehavior__6B_;
  (this->State).StartValue = 0.0;
  this->Target = (ITwoAxisPropertyEditBehaviorTarget *)0x0;
  (this->State).bAdjustingHorizontally = true;
  return this;
}

// ~UTwoAxisPropertyEditInputBehavior @ 14963f600

void __thiscall
UTwoAxisPropertyEditInputBehavior::~UTwoAxisPropertyEditInputBehavior
          (UTwoAxisPropertyEditInputBehavior *this)

{
  this->_padding_ = (longlong)&___7UTwoAxisPropertyEditInputBehavior__6B_;
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginCapture @ 14964b090

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::BeginCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  ITwoAxisPropertyEditBehaviorTarget *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  float fVar8;
  
  if (param_1->InputDevice == Keyboard) {
    this->bKeyPressed = true;
    __return_storage_ptr__->State = Begin;
    __return_storage_ptr__->Source = (UInputBehavior *)this;
  }
  else {
    if (param_1->InputDevice == Mouse) {
      uVar2 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
      uVar3 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
      uVar4 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
      uVar5 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
      pIVar1 = this->Target;
      this->bInDrag = true;
      *(undefined4 *)&(this->State).StartOrigin.field0_0x0 = uVar2;
      *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 4) = uVar3;
      *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 8) = uVar4;
      *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 0xc) = uVar5;
      (this->State).bAdjustingHorizontally = true;
      *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = uVar2;
      *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar3;
      *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar4;
      *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar5;
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))();
      if (plVar7 != (longlong *)0x0) {
        cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
        if (cVar6 != '\0') {
          fVar8 = (float)(**(code **)(*plVar7 + 0x10))(plVar7);
          (this->State).StartValue = fVar8;
        }
      }
      (__return_storage_ptr__->Data).CustomData = (void *)0x0;
      __return_storage_ptr__->State = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      (__return_storage_ptr__->Data).WhichSide = Any;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->State = Ignore;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  }
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// BeginKeyboardCapture @ 14964b4b0

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::BeginKeyboardCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  this->bKeyPressed = true;
  __return_storage_ptr__->State = Begin;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// BeginMouseCapture @ 14964b510

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::BeginMouseCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  float fVar7;
  
  uVar1 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
  this->bInDrag = true;
  (this->State).bAdjustingHorizontally = true;
  *(undefined4 *)&(this->State).StartOrigin.field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 0xc) = uVar4;
  *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar4;
  plVar6 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
  if (plVar6 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (cVar5 != '\0') {
      fVar7 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
      (this->State).StartValue = fVar7;
    }
  }
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// DrawHUD @ 149650960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UTwoAxisPropertyEditInputBehavior::DrawHUD
          (UTwoAxisPropertyEditInputBehavior *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  UFont *pUVar10;
  float fVar11;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_308;
  FText local_2f8;
  FTextFormat local_2e8;
  FText local_2d8;
  TSharedPtr<FCulture,1> local_2c8;
  FFormatArgumentValue local_2b8;
  undefined4 local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  undefined1 local_258 [16];
  FTextFormat local_248;
  undefined1 local_238 [152];
  longlong local_1a0;
  longlong lStack_198;
  
  if (this->bInDrag != false) {
    FText::FText(&local_2f8);
    if ((this->State).bAdjustingHorizontally == false) {
      plVar5 = (longlong *)(**(code **)((longlong)*this->Target + 0x10))();
    }
    else {
      plVar5 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if (cVar3 != '\0') {
        local_2c8.Object = (FCulture *)0x0;
        local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        fVar11 = (float)(**(code **)(*plVar5 + 0x10))(plVar5);
        pFVar6 = FText::AsNumber(&local_268,fVar11,(FNumberFormattingOptions *)0x0,&local_2c8);
        pFVar7 = (FText *)(**(code **)(*plVar5 + 8))(plVar5,local_258);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_278,L"UTwoAxisPropertyEditInputBehavior",
                            L"BrushAdjustmentMessage",L"{0}: {1}");
        pFVar9 = FTextFormat::FTextFormat(&local_248,pFVar8,Default);
        local_2b8.Type = Text;
        FText::FText((FText *)&local_2b8.TextValue,pFVar7);
        if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_298 = 4;
        FText::FText(&local_288,pFVar6);
        if (local_288.TextData.Reference == (ITextData *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_308.AllocatorInstance,2,&local_308.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_308.AllocatorInstance.Data,&local_2b8,2);
        local_2e8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
        local_2e8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_2e8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_2e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_2d8,&local_2e8,&local_308);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
        if ((FFormatArgumentValue *)local_308.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
        if (local_288.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
        }
        if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar7->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (pFVar6->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        FText::operator=(&local_2f8,&local_2d8);
        if (local_2d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
        }
        if (local_278.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        pUVar10 = UEngine::GetMediumFont();
        FCanvasTextItem::FCanvasTextItem
                  ((FCanvasTextItem *)local_238,&(this->State).StartOrigin,&local_2f8,pUVar10,
                   &FLinearColor::White);
        local_238._72_4_ = local_238._72_4_ | 2;
        local_238._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
        local_1a0 = ___xmm_3ff00000000000003ff0000000000000;
        lStack_198 = _UNK_150689688;
        FCanvas::DrawItem(param_1,(FCanvasItem *)local_238);
        FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_238);
      }
    }
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ForceEndCapture @ 1496523b0

void __thiscall
UTwoAxisPropertyEditInputBehavior::ForceEndCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureData *param_1)

{
  this->bInDrag = false;
  *(undefined8 *)&this->State = 0;
  (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
  return;
}

// GetPrivateStaticClass @ 149658500

UClass * __cdecl UTwoAxisPropertyEditInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"TwoAxisPropertyEditInputBehavior",
               &Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton,
               StaticRegisterNativesUTwoAxisPropertyEditInputBehavior,0x90,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwoAxisPropertyEditInputBehavior>,
               InternalVTableHelperCtorCaller<UTwoAxisPropertyEditInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwoAxisPropertyEditInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658890

EInputDevices __thiscall
UTwoAxisPropertyEditInputBehavior::GetSupportedDevices(UTwoAxisPropertyEditInputBehavior *this)

{
  return Mouse|Keyboard;
}

// Initialize @ 1496595a0

void __thiscall
UTwoAxisPropertyEditInputBehavior::Initialize
          (UTwoAxisPropertyEditInputBehavior *this,ITwoAxisPropertyEditBehaviorTarget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (ITwoAxisPropertyEditBehaviorTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\TwoAxisPropertyEditBehavior.cpp"
                       ,0x12,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Target = param_1;
  *(undefined8 *)&this->State = 0;
  (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
  return;
}

// IsKeyboardPressed @ 14965a470

bool __thiscall
UTwoAxisPropertyEditInputBehavior::IsKeyboardPressed
          (UTwoAxisPropertyEditInputBehavior *this,FInputDeviceState *param_1)

{
  FName *pFVar1;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  pFVar1 = (FName *)(**(code **)((longlong)*this->Target + 0x18))(this->Target,local_28);
  if (((param_1->Keyboard).ActiveKey.Button.KeyName == *pFVar1) &&
     ((param_1->Keyboard).ActiveKey.bDown != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return false;
}

// IsMousePressed @ 14965a4d0

bool __thiscall
UTwoAxisPropertyEditInputBehavior::IsMousePressed
          (UTwoAxisPropertyEditInputBehavior *this,FInputDeviceState *param_1)

{
  if (((param_1->Mouse).Left.bDown != false) && (this->bKeyPressed != false)) {
    return true;
  }
  return false;
}

// OnDragEnd @ 14965e000

void __thiscall
UTwoAxisPropertyEditInputBehavior::OnDragEnd(UTwoAxisPropertyEditInputBehavior *this)

{
  this->bInDrag = false;
  *(undefined8 *)&this->State = 0;
  (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
  return;
}

// OnDragStart @ 14965e040

void __thiscall
UTwoAxisPropertyEditInputBehavior::OnDragStart
          (UTwoAxisPropertyEditInputBehavior *this,TVector2<double> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  float fVar7;
  
  uVar1 = *(undefined4 *)&param_1->field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  this->bInDrag = true;
  (this->State).bAdjustingHorizontally = true;
  *(undefined4 *)&(this->State).StartOrigin.field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->State).StartOrigin.field0_0x0 + 0xc) = uVar4;
  *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar4;
  plVar6 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
  if (plVar6 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (cVar5 != '\0') {
      fVar7 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
      (this->State).StartValue = fVar7;
    }
  }
  return;
}

// OnDragUpdate @ 14965e0b0

void __thiscall
UTwoAxisPropertyEditInputBehavior::OnDragUpdate
          (UTwoAxisPropertyEditInputBehavior *this,TVector2<double> *param_1)

{
  longlong lVar1;
  ITwoAxisPropertyEditBehaviorTarget *pIVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  dVar3 = (param_1->field0_0x0)._s_0.X - (this->State).CurrentOrigin.field0_0x0._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y - (this->State).CurrentOrigin.field0_0x0._s_0.Y;
  fVar12 = (float)((uint)(float)dVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar13 = (float)((uint)(float)dVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((this->State).bAdjustingHorizontally == false) {
    plVar10 = (longlong *)(**(code **)((longlong)*this->Target + 0x10))();
  }
  else {
    plVar10 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
  }
  if ((plVar10 != (longlong *)0x0) &&
     (cVar9 = (**(code **)(*plVar10 + 0x30))(plVar10), cVar9 != '\0')) {
    fVar14 = __real_bf800000;
    if ((this->State).bAdjustingHorizontally != false) {
      fVar14 = __real_3f800000;
      dVar4 = dVar3;
    }
    lVar1 = *plVar10;
    fVar11 = (float)(**(code **)(lVar1 + 0x20))(plVar10);
    fVar11 = (float)(**(code **)(lVar1 + 0x28))(plVar10,fVar11 * (float)dVar4);
    (**(code **)(*plVar10 + 0x18))(plVar10,fVar11 * fVar14 + (this->State).StartValue);
  }
  if ((this->State).bAdjustingHorizontally == false) {
LAB_14965e1f6:
    if (fVar12 <= fVar13) goto LAB_14965e25d;
    plVar10 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
    cVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if (cVar9 == '\0') goto LAB_14965e25d;
    uVar5 = *(undefined4 *)&param_1->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    pIVar2 = this->Target;
    (this->State).bAdjustingHorizontally = true;
    *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = uVar5;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar6;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar7;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar8;
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))();
  }
  else {
    if (fVar13 <= fVar12) {
LAB_14965e1ed:
      if ((this->State).bAdjustingHorizontally != false) goto LAB_14965e25d;
      goto LAB_14965e1f6;
    }
    plVar10 = (longlong *)(**(code **)((longlong)*this->Target + 0x10))();
    cVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if (cVar9 == '\0') goto LAB_14965e1ed;
    uVar5 = *(undefined4 *)&param_1->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    pIVar2 = this->Target;
    (this->State).bAdjustingHorizontally = false;
    *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = uVar5;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar6;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar7;
    *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar8;
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if ((plVar10 != (longlong *)0x0) &&
     (cVar9 = (**(code **)(*plVar10 + 0x30))(plVar10), cVar9 != '\0')) {
    fVar12 = (float)(**(code **)(*plVar10 + 0x10))(plVar10);
    (this->State).StartValue = fVar12;
  }
LAB_14965e25d:
                    /* WARNING: Could not recover jumptable at 0x00014965e283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Target + 0x20))();
  return;
}

// ResetDragState @ 1496605c0

void __thiscall
UTwoAxisPropertyEditInputBehavior::ResetDragState(UTwoAxisPropertyEditInputBehavior *this)

{
  *(undefined8 *)&this->State = 0;
  (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
  return;
}

// ResetOrigin @ 149660600

void __thiscall
UTwoAxisPropertyEditInputBehavior::ResetOrigin
          (UTwoAxisPropertyEditInputBehavior *this,TVector2<double> *param_1,bool param_2,
          bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  float fVar7;
  
  if (param_3) {
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    (this->State).StartOrigin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->State).StartOrigin.field0_0x0._s_0.Y = dVar4;
  }
  (this->State).bAdjustingHorizontally = param_2;
  uVar1 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  *(undefined4 *)&(this->State).CurrentOrigin.field0_0x0 = *(undefined4 *)&param_1->field0_0x0;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(this->State).CurrentOrigin.field0_0x0 + 0xc) = uVar3;
  if (param_2) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->Target + 8))();
  }
  else {
    plVar6 = (longlong *)(**(code **)((longlong)*this->Target + 0x10))();
  }
  if (plVar6 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (cVar5 != '\0') {
      fVar7 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
      (this->State).StartValue = fVar7;
    }
  }
  return;
}

// StaticRegisterNativesUTwoAxisPropertyEditInputBehavior @ 149664db0

void __cdecl
UTwoAxisPropertyEditInputBehavior::StaticRegisterNativesUTwoAxisPropertyEditInputBehavior(void)

{
  return;
}

// UpdateCapture @ 1496669c0

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::UpdateCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  EInputCaptureState EVar1;
  FName *pFVar2;
  TVector2<double>_u_0 local_38;
  TReferenceControllerBase<1> *local_28;
  
  if (param_1->InputDevice == Keyboard) {
    pFVar2 = (FName *)(**(code **)((longlong)*this->Target + 0x18))(this->Target,&local_38);
    if (((param_1->Keyboard).ActiveKey.Button.KeyName == *pFVar2) &&
       ((param_1->Keyboard).ActiveKey.bDown != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
      EVar1 = Continue;
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
      this->bKeyPressed = false;
LAB_149666a93:
      EVar1 = End;
    }
  }
  else {
    if (param_1->InputDevice != Mouse) {
      __return_storage_ptr__->State = Ignore;
      goto LAB_149666a9a;
    }
    if (((param_1->Mouse).Left.bDown == false) || (this->bKeyPressed == false)) {
      this->bInDrag = false;
      *(undefined8 *)&this->State = 0;
      (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
      (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
      (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
      (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
      *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
      goto LAB_149666a93;
    }
    local_38._s_0.X = (param_1->Mouse).Position2D.field0_0x0._s_0.X;
    local_38._s_0.Y = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
    OnDragUpdate(this,(TVector2<double> *)&local_38._s_0);
    EVar1 = Continue;
  }
  __return_storage_ptr__->State = EVar1;
LAB_149666a9a:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// UpdateKeyboardCapture @ 149666d90

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::UpdateKeyboardCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  FName *pFVar1;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  pFVar1 = (FName *)(**(code **)((longlong)*this->Target + 0x18))(this->Target,local_28);
  if (((param_1->Keyboard).ActiveKey.Button.KeyName == *pFVar1) &&
     ((param_1->Keyboard).ActiveKey.bDown != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    __return_storage_ptr__->State = Continue;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    this->bKeyPressed = false;
    __return_storage_ptr__->State = End;
  }
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// UpdateMouseCapture @ 149666f10

FInputCaptureUpdate * __thiscall
UTwoAxisPropertyEditInputBehavior::UpdateMouseCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  TVector2<double>_u_0 local_48 [4];
  
  if (((param_1->Mouse).Left.bDown != false) && (this->bKeyPressed != false)) {
    local_48[0]._0_8_ = (param_1->Mouse).Position2D.field0_0x0._s_0.X;
    local_48[0]._8_8_ = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
    OnDragUpdate(this,(TVector2<double> *)&local_48[0]._s_0);
    __return_storage_ptr__->State = Continue;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
    (__return_storage_ptr__->Data).CustomData = (void *)0x0;
    (__return_storage_ptr__->Data).WhichSide = Any;
    return __return_storage_ptr__;
  }
  this->bInDrag = false;
  *(undefined8 *)&this->State = 0;
  (this->State).StartOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).StartOrigin.field0_0x0._s_0.Y = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.X = 0.0;
  (this->State).CurrentOrigin.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->State).bAdjustingHorizontally = 1;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  __return_storage_ptr__->State = End;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667d60

FInputCaptureRequest * __thiscall
UTwoAxisPropertyEditInputBehavior::WantsCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  FName *pFVar1;
  uint uVar2;
  double dVar3;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  if (param_1->InputDevice == Keyboard) {
    pFVar1 = (FName *)(**(code **)((longlong)*this->Target + 0x18))(this->Target,local_28);
    if (((param_1->Keyboard).ActiveKey.Button.KeyName == *pFVar1) &&
       ((param_1->Keyboard).ActiveKey.bDown != false)) {
      uVar2 = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      dVar3 = 0.0;
    }
    else {
      uVar2 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      dVar3 = __real_7fefffffffffffff;
    }
    __return_storage_ptr__->Type = (uVar2 ^ 1) + Begin;
    if ((char)uVar2 == '\0') {
      this = (UTwoAxisPropertyEditInputBehavior *)0x0;
    }
    __return_storage_ptr__->Source = (UInputBehavior *)this;
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
    __return_storage_ptr__->HitDepth = dVar3;
  }
  else if (param_1->InputDevice == Mouse) {
    if (((param_1->Mouse).Left.bDown == false) || (this->bKeyPressed == false)) {
      uVar2 = 0;
      dVar3 = __real_7fefffffffffffff;
    }
    else {
      uVar2 = 1;
      dVar3 = 0.0;
    }
    __return_storage_ptr__->Type = (uVar2 ^ 1) + Begin;
    if ((char)uVar2 == '\0') {
      this = (UTwoAxisPropertyEditInputBehavior *)0x0;
    }
    __return_storage_ptr__->Source = (UInputBehavior *)this;
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
    __return_storage_ptr__->HitDepth = dVar3;
  }
  else {
    __return_storage_ptr__->Type = Ignore;
    __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
  }
  return __return_storage_ptr__;
}

// WantsKeyboardCapture @ 1496680c0

FInputCaptureRequest * __thiscall
UTwoAxisPropertyEditInputBehavior::WantsKeyboardCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  FName *pFVar1;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  pFVar1 = (FName *)(**(code **)((longlong)*this->Target + 0x18))(this->Target,local_28);
  if (((param_1->Keyboard).ActiveKey.Button.KeyName == *pFVar1) &&
     ((param_1->Keyboard).ActiveKey.bDown != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
    __return_storage_ptr__->Type = Begin;
    __return_storage_ptr__->Source = (UInputBehavior *)this;
    __return_storage_ptr__->HitDepth = 0.0;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
    __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
    __return_storage_ptr__->Type = Ignore;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  }
  return __return_storage_ptr__;
}

// WantsMouseCapture @ 149668170

FInputCaptureRequest * __thiscall
UTwoAxisPropertyEditInputBehavior::WantsMouseCapture
          (UTwoAxisPropertyEditInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  if (((param_1->Mouse).Left.bDown != false) && (this->bKeyPressed != false)) {
    __return_storage_ptr__->Side = Any;
    __return_storage_ptr__->Owner = (void *)0x0;
    __return_storage_ptr__->HitDepth = 0.0;
    __return_storage_ptr__->Type = Begin;
    __return_storage_ptr__->Source = (UInputBehavior *)this;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Side = Any;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Type = Ignore;
  return __return_storage_ptr__;
}

