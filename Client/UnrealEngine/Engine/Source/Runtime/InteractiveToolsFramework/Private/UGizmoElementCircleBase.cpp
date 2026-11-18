// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 36

// StaticClass @ 1496648f0

UClass * __cdecl UGizmoElementCircleBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircleBase",
               &Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementCircleBase,0x290,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCircleBase>,
               InternalVTableHelperCtorCaller<UGizmoElementCircleBase>,aFStackX_8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton;
}

// UGizmoElementCircleBase @ 1496847d0

UGizmoElementCircleBase * __thiscall
UGizmoElementCircleBase::UGizmoElementCircleBase
          (UGizmoElementCircleBase *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCircleBase__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  (this->Axis0).field0_0x0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  (this->Axis0).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis0).field0_0x0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->Axis1).field0_0x0._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->Axis1).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis1).field0_0x0._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  this->Radius = 100.0;
  this->PartialStartAngle = 0.0;
  this->PartialEndAngle = 6.283185307179586;
  this->PartialViewDependentMaxCosTol = 0.9599999785423279;
  (this->RadiusMultiplier).Default.bIsSet = false;
  (this->RadiusMultiplier).Hover.bIsSet = false;
  (this->RadiusMultiplier).Interact.bIsSet = false;
  (this->RadiusMultiplier).Select.bIsSet = false;
  (this->RadiusMultiplier).Subdue.bIsSet = false;
  this->NumSegments = 0x40;
  this->PartialType = None;
  return this;
}

// UGizmoElementCircleBase @ 1496848c0

UGizmoElementCircleBase * __thiscall
UGizmoElementCircleBase::UGizmoElementCircleBase
          (UGizmoElementCircleBase *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCircleBase__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  (this->Axis0).field0_0x0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  (this->Axis0).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis0).field0_0x0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->Axis1).field0_0x0._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->Axis1).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis1).field0_0x0._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  this->Radius = 100.0;
  this->PartialStartAngle = 0.0;
  this->PartialEndAngle = 6.283185307179586;
  this->PartialViewDependentMaxCosTol = 0.9599999785423279;
  (this->RadiusMultiplier).Default.bIsSet = false;
  (this->RadiusMultiplier).Hover.bIsSet = false;
  (this->RadiusMultiplier).Interact.bIsSet = false;
  (this->RadiusMultiplier).Select.bIsSet = false;
  (this->RadiusMultiplier).Subdue.bIsSet = false;
  this->NumSegments = 0x40;
  this->PartialType = None;
  return this;
}

// ~UGizmoElementCircleBase @ 149689a20

void __thiscall UGizmoElementCircleBase::~UGizmoElementCircleBase(UGizmoElementCircleBase *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAxis0 @ 1496a0310

TVector<double> * __thiscall
UGizmoElementCircleBase::GetAxis0
          (UGizmoElementCircleBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Axis1).field0_0x0._s_0.Y;
  dVar1 = (this->Axis1).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Axis1).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetAxis1 @ 1496a0340

TVector<double> * __thiscall
UGizmoElementCircleBase::GetAxis1
          (UGizmoElementCircleBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Axis0).field0_0x0._s_0.Y;
  dVar1 = (this->Axis0).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Axis0).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCenter @ 1496a04f0

TVector<double> * __thiscall
UGizmoElementCircleBase::GetCenter
          (UGizmoElementCircleBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCurrentRadius @ 1496a0af0

double __thiscall UGizmoElementCircleBase::GetCurrentRadius(UGizmoElementCircleBase *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->Radius;
  dVar2 = FGizmoPerStateValueDouble::GetValueForState
                    (&this->RadiusMultiplier,(EGizmoElementInteractionState)this->_padding_);
  if (__real_3e45798ee0000000 < dVar1) {
    return (double)(float)(dVar1 * (double)(float)dVar2);
  }
  return (double)(float)dVar2;
}

// GetHoverRadiusMultiplier @ 1496a2f00

double __thiscall UGizmoElementCircleBase::GetHoverRadiusMultiplier(UGizmoElementCircleBase *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->RadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->RadiusMultiplier;
  }
  if ((this->RadiusMultiplier).Hover.bIsSet != false) {
    return (this->RadiusMultiplier).Hover.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetInteractRadiusMultiplier @ 1496a30b0

double __thiscall
UGizmoElementCircleBase::GetInteractRadiusMultiplier(UGizmoElementCircleBase *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->RadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->RadiusMultiplier;
  }
  if ((this->RadiusMultiplier).Interact.bIsSet != false) {
    return (this->RadiusMultiplier).Interact.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetNumSegments @ 1496a38d0

int __thiscall UGizmoElementCircleBase::GetNumSegments(UGizmoElementCircleBase *this)

{
  return this->NumSegments;
}

// GetPartialEndAngle @ 1496a3f20

double __thiscall UGizmoElementCircleBase::GetPartialEndAngle(UGizmoElementCircleBase *this)

{
  return this->PartialEndAngle;
}

// GetPartialStartAngle @ 1496a3f30

double __thiscall UGizmoElementCircleBase::GetPartialStartAngle(UGizmoElementCircleBase *this)

{
  return this->PartialStartAngle;
}

// GetPartialType @ 1496a3f40

EGizmoElementPartialType __thiscall
UGizmoElementCircleBase::GetPartialType(UGizmoElementCircleBase *this)

{
  return this->PartialType;
}

// GetPartialViewDependentMaxCosTol @ 1496a3f50

double __thiscall
UGizmoElementCircleBase::GetPartialViewDependentMaxCosTol(UGizmoElementCircleBase *this)

{
  return this->PartialViewDependentMaxCosTol;
}

// GetPrivateStaticClass @ 1496a4fb0

UClass * __cdecl UGizmoElementCircleBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircleBase",
               &Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementCircleBase,0x290,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCircleBase>,
               InternalVTableHelperCtorCaller<UGizmoElementCircleBase>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton;
}

// GetRadius @ 1496a7a80

double __thiscall UGizmoElementCircleBase::GetRadius(UGizmoElementCircleBase *this)

{
  return this->Radius;
}

// GetSelectRadiusMultiplier @ 1496a7e70

double __thiscall UGizmoElementCircleBase::GetSelectRadiusMultiplier(UGizmoElementCircleBase *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->RadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->RadiusMultiplier;
  }
  if ((this->RadiusMultiplier).Select.bIsSet != false) {
    return (this->RadiusMultiplier).Select.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetSubdueRadiusMultiplier @ 1496a8e00

double __thiscall UGizmoElementCircleBase::GetSubdueRadiusMultiplier(UGizmoElementCircleBase *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->RadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->RadiusMultiplier;
  }
  if ((this->RadiusMultiplier).Subdue.bIsSet != false) {
    return (this->RadiusMultiplier).Subdue.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// IsPartial @ 1496ae140

bool __thiscall
UGizmoElementCircleBase::IsPartial
          (UGizmoElementCircleBase *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,bool param_5)

{
  undefined1 auVar1 [16];
  EGizmoElementPartialType EVar2;
  TVector<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TVector<double>_u_0 local_58;
  double local_30;
  TVector<double> local_28;
  
  EVar2 = this->PartialType;
  if (EVar2 != None) {
    if (EVar2 == Partial) {
      return true;
    }
    if (EVar2 == PartialViewDependent) {
      local_30 = (param_4->field0_0x0)._s_0.Z;
      auVar1 = *(undefined1 (*) [16])&param_4->field0_0x0;
      dVar6 = auVar1._0_8_;
      uVar7 = auVar1._8_4_;
      uVar8 = auVar1._12_4_;
      if (param_5) {
        dVar6 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
        local_58._s_0.Z = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
        local_58._8_4_ = SUB84(dVar6,0);
        local_58._0_8_ = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
        local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        pTVar3 = UE::Math::TVector<double>::GetSafeNormal
                           ((TVector<double> *)&local_58._s_0,&local_28,__real_3e45798ee0000000,
                            &UE::Math::TVector<double>::ZeroVector);
        local_30 = (pTVar3->field0_0x0)._s_0.Z;
        auVar1 = *(undefined1 (*) [16])&pTVar3->field0_0x0;
        dVar6 = auVar1._0_8_;
        uVar7 = auVar1._8_4_;
        uVar8 = auVar1._12_4_;
      }
      dVar6 = (double)CONCAT44(uVar8,uVar7) * (param_2->field0_0x0)._s_0.Y +
              dVar6 * (param_2->field0_0x0)._s_0.X + local_30 * (param_2->field0_0x0)._s_0.Z;
      uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      return (double)CONCAT44(uVar5,uVar4) < this->PartialViewDependentMaxCosTol ||
             (double)CONCAT44(uVar5,uVar4) == this->PartialViewDependentMaxCosTol;
    }
  }
  return false;
}

// IsPartial @ 1496ae250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UGizmoElementCircleBase::IsPartial
          (UGizmoElementCircleBase *this,FSceneView *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double *pdVar1;
  bool bVar2;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Y = (param_1->ViewMatrices).ViewMatrix.M[1][2];
  local_28._s_0.X = (param_1->ViewMatrices).ViewMatrix.M[0][2];
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  local_28._s_0.Z = (param_1->ViewMatrices).ViewMatrix.M[2][2];
  bVar2 = IsPartial(this,param_2,param_3,&param_1->ViewLocation,(TVector<double> *)&local_28._s_0,
                    *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1);
  return bVar2;
}

// IsPartial @ 1496ae2d0

bool __thiscall
UGizmoElementCircleBase::IsPartial
          (UGizmoElementCircleBase *this,UGizmoViewContext *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  bool bVar1;
  TVector<double> *pTVar2;
  undefined1 local_38 [32];
  
  bVar1 = (bool)(**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  pTVar2 = (TVector<double> *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_38);
  bVar1 = IsPartial(this,param_2,param_3,&param_1->ViewLocation,pTVar2,bVar1);
  return bVar1;
}

// SetAxis0 @ 1496bd260

void __thiscall
UGizmoElementCircleBase::SetAxis0(UGizmoElementCircleBase *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Axis0).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Axis0).field0_0x0._s_0.Y = dVar1;
  (this->Axis0).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Axis0,__real_3e45798ee0000000);
  return;
}

// SetAxis1 @ 1496bd290

void __thiscall
UGizmoElementCircleBase::SetAxis1(UGizmoElementCircleBase *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Axis1).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Axis1).field0_0x0._s_0.Y = dVar1;
  (this->Axis1).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Axis1,__real_3e45798ee0000000);
  return;
}

// SetCenter @ 1496bd360

void __thiscall
UGizmoElementCircleBase::SetCenter(UGizmoElementCircleBase *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  (this->Center).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetHoverRadiusMultiplier @ 1496bdae0

void __thiscall
UGizmoElementCircleBase::SetHoverRadiusMultiplier(UGizmoElementCircleBase *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->RadiusMultiplier).Hover;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->RadiusMultiplier).Hover.bIsSet = true;
  }
  return;
}

// SetInteractRadiusMultiplier @ 1496bdb90

void __thiscall
UGizmoElementCircleBase::SetInteractRadiusMultiplier(UGizmoElementCircleBase *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->RadiusMultiplier).Interact;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->RadiusMultiplier).Interact.bIsSet = true;
  }
  return;
}

// SetNumSegments @ 1496bdcb0

void __thiscall UGizmoElementCircleBase::SetNumSegments(UGizmoElementCircleBase *this,int param_1)

{
  this->NumSegments = param_1;
  return;
}

// SetPartialEndAngle @ 1496bf2e0

void __thiscall
UGizmoElementCircleBase::SetPartialEndAngle(UGizmoElementCircleBase *this,double param_1)

{
  this->PartialEndAngle = param_1;
  return;
}

// SetPartialStartAngle @ 1496bf2f0

void __thiscall
UGizmoElementCircleBase::SetPartialStartAngle(UGizmoElementCircleBase *this,double param_1)

{
  this->PartialStartAngle = param_1;
  return;
}

// SetPartialType @ 1496bf300

void __thiscall
UGizmoElementCircleBase::SetPartialType
          (UGizmoElementCircleBase *this,EGizmoElementPartialType param_1)

{
  this->PartialType = param_1;
  return;
}

// SetPartialViewDependentMaxCosTol @ 1496bf310

void __thiscall
UGizmoElementCircleBase::SetPartialViewDependentMaxCosTol
          (UGizmoElementCircleBase *this,double param_1)

{
  this->PartialViewDependentMaxCosTol = param_1;
  return;
}

// SetRadius @ 1496bf960

void __thiscall UGizmoElementCircleBase::SetRadius(UGizmoElementCircleBase *this,double param_1)

{
  this->Radius = param_1;
  return;
}

// SetSelectRadiusMultiplier @ 1496bfb90

void __thiscall
UGizmoElementCircleBase::SetSelectRadiusMultiplier(UGizmoElementCircleBase *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->RadiusMultiplier).Select;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->RadiusMultiplier).Select.bIsSet = true;
  }
  return;
}

// SetSubdueRadiusMultiplier @ 1496bfe90

void __thiscall
UGizmoElementCircleBase::SetSubdueRadiusMultiplier(UGizmoElementCircleBase *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->RadiusMultiplier).Subdue;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->RadiusMultiplier).Subdue.bIsSet = true;
  }
  return;
}

// StaticRegisterNativesUGizmoElementCircleBase @ 1496c2930

void __cdecl UGizmoElementCircleBase::StaticRegisterNativesUGizmoElementCircleBase(void)

{
  return;
}

