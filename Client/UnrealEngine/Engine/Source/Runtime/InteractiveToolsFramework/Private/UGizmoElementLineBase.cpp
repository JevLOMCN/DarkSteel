// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 45

// StaticClass @ 149671a50

UClass * __cdecl UGizmoElementLineBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineBase",
               &Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementLineBase,0x1d0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementLineBase>,
               InternalVTableHelperCtorCaller<UGizmoElementLineBase>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton;
}

// UGizmoElementLineBase @ 149684e50

UGizmoElementLineBase * __thiscall
UGizmoElementLineBase::UGizmoElementLineBase(UGizmoElementLineBase *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementLineBase__6B_;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).LineColor.bHasValue = false;
  (this->LineRenderAttributes).LineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).LineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).HoverLineColor.bHasValue = false;
  (this->LineRenderAttributes).HoverLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).HoverLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).InteractLineColor.bHasValue = false;
  (this->LineRenderAttributes).InteractLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).InteractLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).SelectLineColor.bHasValue = false;
  (this->LineRenderAttributes).SelectLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SelectLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).SubdueLineColor.bHasValue = false;
  (this->LineRenderAttributes).SubdueLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->LineThickness = 0.0;
  this->bScreenSpaceLine = true;
  this->HoverLineThicknessMultiplier = 2.0;
  this->InteractLineThicknessMultiplier = 2.0;
  this->SelectLineThicknessMultiplier = 2.0;
  this->SubdueLineThicknessMultiplier = 1.0;
  return this;
}

// UGizmoElementLineBase @ 149684f30

UGizmoElementLineBase * __thiscall
UGizmoElementLineBase::UGizmoElementLineBase
          (UGizmoElementLineBase *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementLineBase__6B_;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).LineColor.bHasValue = false;
  (this->LineRenderAttributes).LineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).LineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).HoverLineColor.bHasValue = false;
  (this->LineRenderAttributes).HoverLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).HoverLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).InteractLineColor.bHasValue = false;
  (this->LineRenderAttributes).InteractLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).InteractLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).SelectLineColor.bHasValue = false;
  (this->LineRenderAttributes).SelectLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SelectLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->LineRenderAttributes).SubdueLineColor.bHasValue = false;
  (this->LineRenderAttributes).SubdueLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->LineThickness = 0.0;
  this->bScreenSpaceLine = true;
  this->HoverLineThicknessMultiplier = 2.0;
  this->InteractLineThicknessMultiplier = 2.0;
  this->SelectLineThicknessMultiplier = 2.0;
  this->SubdueLineThicknessMultiplier = 1.0;
  return this;
}

// ~UGizmoElementLineBase @ 149689be0

void __thiscall UGizmoElementLineBase::~UGizmoElementLineBase(UGizmoElementLineBase *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearHoverLineColor @ 149697660

void __thiscall UGizmoElementLineBase::ClearHoverLineColor(UGizmoElementLineBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->LineRenderAttributes).HoverLineColor.bHasValue = false;
  (this->LineRenderAttributes).HoverLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).HoverLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearInteractLineColor @ 1496976e0

void __thiscall UGizmoElementLineBase::ClearInteractLineColor(UGizmoElementLineBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->LineRenderAttributes).InteractLineColor.bHasValue = false;
  (this->LineRenderAttributes).InteractLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).InteractLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearLineColor @ 149697760

void __thiscall UGizmoElementLineBase::ClearLineColor(UGizmoElementLineBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->LineRenderAttributes).LineColor.bHasValue = false;
  (this->LineRenderAttributes).LineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).LineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearSelectLineColor @ 1496977c0

void __thiscall UGizmoElementLineBase::ClearSelectLineColor(UGizmoElementLineBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->LineRenderAttributes).SelectLineColor.bHasValue = false;
  (this->LineRenderAttributes).SelectLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SelectLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearSubdueLineColor @ 149697880

void __thiscall UGizmoElementLineBase::ClearSubdueLineColor(UGizmoElementLineBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->LineRenderAttributes).SubdueLineColor.bHasValue = false;
  (this->LineRenderAttributes).SubdueLineColor.bOverridesChildState = false;
  (this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// DoesHoverLineColorOverrideChildState @ 14969c9e0

bool __thiscall
UGizmoElementLineBase::DoesHoverLineColorOverrideChildState(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).HoverLineColor.bOverridesChildState;
}

// DoesInteractLineColorOverrideChildState @ 14969ca10

bool __thiscall
UGizmoElementLineBase::DoesInteractLineColorOverrideChildState(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).InteractLineColor.bOverridesChildState;
}

// DoesLineColorOverrideChildState @ 14969ca40

bool __thiscall UGizmoElementLineBase::DoesLineColorOverrideChildState(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).LineColor.bOverridesChildState;
}

// DoesSelectLineColorOverrideChildState @ 14969ca60

bool __thiscall
UGizmoElementLineBase::DoesSelectLineColorOverrideChildState(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).SelectLineColor.bOverridesChildState;
}

// DoesSubdueLineColorOverrideChildState @ 14969ca90

bool __thiscall
UGizmoElementLineBase::DoesSubdueLineColorOverrideChildState(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).SubdueLineColor.bOverridesChildState;
}

// GetCurrentLineThickness @ 1496a0a70

float __thiscall
UGizmoElementLineBase::GetCurrentLineThickness
          (UGizmoElementLineBase *this,bool param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)this->_padding_;
  fVar1 = this->LineThickness;
  if (iVar2 == 1) {
    fVar3 = this->HoverLineThicknessMultiplier;
  }
  else if (iVar2 == 2) {
    fVar3 = this->InteractLineThicknessMultiplier;
  }
  else if (iVar2 == 3) {
    fVar3 = this->SelectLineThicknessMultiplier;
  }
  else {
    fVar3 = fVar1;
    if (iVar2 != 4) goto LAB_1496a0acf;
    fVar3 = this->SubdueLineThicknessMultiplier;
  }
  if (__real_322bcc77 < fVar1) {
    fVar3 = fVar1 * fVar3;
  }
LAB_1496a0acf:
  if (param_1) {
    fVar3 = fVar3 * param_2 * __real_3c360b61;
  }
  return fVar3;
}

// GetHoverLineColor @ 1496a2e40

FLinearColor * __thiscall
UGizmoElementLineBase::GetHoverLineColor
          (UGizmoElementLineBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->LineRenderAttributes).HoverLineColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->LineRenderAttributes).HoverLineColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->LineRenderAttributes).HoverLineColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetHoverLineThicknessMultiplier @ 1496a2e70

float __thiscall UGizmoElementLineBase::GetHoverLineThicknessMultiplier(UGizmoElementLineBase *this)

{
  return this->HoverLineThicknessMultiplier;
}

// GetInteractLineColor @ 1496a2ff0

FLinearColor * __thiscall
UGizmoElementLineBase::GetInteractLineColor
          (UGizmoElementLineBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->LineRenderAttributes).InteractLineColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->LineRenderAttributes).InteractLineColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->LineRenderAttributes).InteractLineColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetInteractLineThicknessMultiplier @ 1496a3020

float __thiscall
UGizmoElementLineBase::GetInteractLineThicknessMultiplier(UGizmoElementLineBase *this)

{
  return this->InteractLineThicknessMultiplier;
}

// GetLineColor @ 1496a3220

FLinearColor * __thiscall
UGizmoElementLineBase::GetLineColor
          (UGizmoElementLineBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->LineRenderAttributes).LineColor.bHasValue != false) {
    uVar1 = *(undefined8 *)((longlong)&(this->LineRenderAttributes).LineColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->LineRenderAttributes).LineColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetLineThickness @ 1496a3250

float __thiscall UGizmoElementLineBase::GetLineThickness(UGizmoElementLineBase *this)

{
  return this->LineThickness;
}

// GetPrivateStaticClass @ 1496a54d0

UClass * __cdecl UGizmoElementLineBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineBase",
               &Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementLineBase,0x1d0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementLineBase>,
               InternalVTableHelperCtorCaller<UGizmoElementLineBase>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton;
}

// GetScreenSpaceLine @ 1496a7d70

bool __thiscall UGizmoElementLineBase::GetScreenSpaceLine(UGizmoElementLineBase *this)

{
  return this->bScreenSpaceLine;
}

// GetSelectLineColor @ 1496a7db0

FLinearColor * __thiscall
UGizmoElementLineBase::GetSelectLineColor
          (UGizmoElementLineBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->LineRenderAttributes).SelectLineColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->LineRenderAttributes).SelectLineColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->LineRenderAttributes).SelectLineColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetSelectLineThicknessMultiplier @ 1496a7de0

float __thiscall
UGizmoElementLineBase::GetSelectLineThicknessMultiplier(UGizmoElementLineBase *this)

{
  return this->SelectLineThicknessMultiplier;
}

// GetSubdueLineColor @ 1496a8d40

FLinearColor * __thiscall
UGizmoElementLineBase::GetSubdueLineColor
          (UGizmoElementLineBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->LineRenderAttributes).SubdueLineColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetSubdueLineThicknessMultiplier @ 1496a8d70

float __thiscall
UGizmoElementLineBase::GetSubdueLineThicknessMultiplier(UGizmoElementLineBase *this)

{
  return this->SubdueLineThicknessMultiplier;
}

// HasHoverLineColor @ 1496ab8e0

bool __thiscall UGizmoElementLineBase::HasHoverLineColor(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).HoverLineColor.bHasValue;
}

// HasInteractLineColor @ 1496ab900

bool __thiscall UGizmoElementLineBase::HasInteractLineColor(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).InteractLineColor.bHasValue;
}

// HasLineColor @ 1496ab920

bool __thiscall UGizmoElementLineBase::HasLineColor(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).LineColor.bHasValue;
}

// HasSelectLineColor @ 1496ab9d0

bool __thiscall UGizmoElementLineBase::HasSelectLineColor(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).SelectLineColor.bHasValue;
}

// HasSubdueLineColor @ 1496ab9f0

bool __thiscall UGizmoElementLineBase::HasSubdueLineColor(UGizmoElementLineBase *this)

{
  return (this->LineRenderAttributes).SubdueLineColor.bHasValue;
}

// SetHoverLineColor @ 1496bda50

void __thiscall
UGizmoElementLineBase::SetHoverLineColor
          (UGizmoElementLineBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->LineRenderAttributes).HoverLineColor.bHasValue = true;
  (this->LineRenderAttributes).HoverLineColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->LineRenderAttributes).HoverLineColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->LineRenderAttributes).HoverLineColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetHoverLineThicknessMultiplier @ 1496bda70

void __thiscall
UGizmoElementLineBase::SetHoverLineThicknessMultiplier(UGizmoElementLineBase *this,float param_1)

{
  this->HoverLineThicknessMultiplier = param_1;
  return;
}

// SetInteractLineColor @ 1496bdb50

void __thiscall
UGizmoElementLineBase::SetInteractLineColor
          (UGizmoElementLineBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->LineRenderAttributes).InteractLineColor.bHasValue = true;
  (this->LineRenderAttributes).InteractLineColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->LineRenderAttributes).InteractLineColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->LineRenderAttributes).InteractLineColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetInteractLineThicknessMultiplier @ 1496bdb70

void __thiscall
UGizmoElementLineBase::SetInteractLineThicknessMultiplier(UGizmoElementLineBase *this,float param_1)

{
  this->InteractLineThicknessMultiplier = param_1;
  return;
}

// SetLineColor @ 1496bdbe0

void __thiscall
UGizmoElementLineBase::SetLineColor(UGizmoElementLineBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->LineRenderAttributes).LineColor.bHasValue = true;
  (this->LineRenderAttributes).LineColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->LineRenderAttributes).LineColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->LineRenderAttributes).LineColor.Value.field0_0x0 + 8) = uVar2;
  return;
}

// SetLineThickness @ 1496bdc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGizmoElementLineBase::SetLineThickness(UGizmoElementLineBase *this,float param_1)

{
  if (param_1 < 0.0) {
    if (2 < (byte)LogGizmoElementLineBase._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGizmoElementLineBase);
    }
    this->LineThickness = 0.0;
    return;
  }
  this->LineThickness = param_1;
  return;
}

// SetScreenSpaceLine @ 1496bfb20

void __thiscall UGizmoElementLineBase::SetScreenSpaceLine(UGizmoElementLineBase *this,bool param_1)

{
  this->bScreenSpaceLine = param_1;
  return;
}

// SetSelectLineColor @ 1496bfb50

void __thiscall
UGizmoElementLineBase::SetSelectLineColor
          (UGizmoElementLineBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->LineRenderAttributes).SelectLineColor.bHasValue = true;
  (this->LineRenderAttributes).SelectLineColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->LineRenderAttributes).SelectLineColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->LineRenderAttributes).SelectLineColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetSelectLineThicknessMultiplier @ 1496bfb70

void __thiscall
UGizmoElementLineBase::SetSelectLineThicknessMultiplier(UGizmoElementLineBase *this,float param_1)

{
  this->SelectLineThicknessMultiplier = param_1;
  return;
}

// SetSubdueLineColor @ 1496bfe50

void __thiscall
UGizmoElementLineBase::SetSubdueLineColor
          (UGizmoElementLineBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->LineRenderAttributes).SubdueLineColor.bHasValue = true;
  (this->LineRenderAttributes).SubdueLineColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->LineRenderAttributes).SubdueLineColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetSubdueLineThicknessMultiplier @ 1496bfe70

void __thiscall
UGizmoElementLineBase::SetSubdueLineThicknessMultiplier(UGizmoElementLineBase *this,float param_1)

{
  this->SubdueLineThicknessMultiplier = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementLineBase @ 1496c29a0

void __cdecl UGizmoElementLineBase::StaticRegisterNativesUGizmoElementLineBase(void)

{
  return;
}

// UpdateRenderState @ 1496c5410

bool __thiscall
UGizmoElementLineBase::UpdateRenderState
          (UGizmoElementLineBase *this,IToolsContextRenderAPI *param_1,TVector<double> *param_2,
          FRenderTraversalState *param_3)

{
  undefined1 uVar1;
  undefined1 local_res8 [8];
  undefined1 local_28 [32];
  
  FGizmoElementLineRenderStateAttributes::Update
            (&param_3->LineRenderState,&this->LineRenderAttributes);
  uVar1 = (**(code **)(this->_padding_ + 0x690))(this,param_1,param_2,param_3,local_res8,local_28);
  return (bool)uVar1;
}

