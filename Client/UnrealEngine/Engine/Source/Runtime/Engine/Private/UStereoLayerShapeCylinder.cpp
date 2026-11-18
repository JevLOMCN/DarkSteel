// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147992fd0

UClass * __cdecl UStereoLayerShapeCylinder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeCylinder",
               &Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeCylinder,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeCylinder>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeCylinder>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton;
}

// UStereoLayerShapeCylinder @ 1479a7de0

UStereoLayerShapeCylinder * __thiscall
UStereoLayerShapeCylinder::UStereoLayerShapeCylinder
          (UStereoLayerShapeCylinder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStereoLayerShapeCylinder__6B_;
  return this;
}

// ~UStereoLayerShapeCylinder @ 1479a9b30

void __thiscall
UStereoLayerShapeCylinder::~UStereoLayerShapeCylinder(UStereoLayerShapeCylinder *this)

{
  this->_padding_ = (longlong)&___7UStereoLayerShape__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyShape @ 1479b3450

void __thiscall
UStereoLayerShapeCylinder::ApplyShape(UStereoLayerShapeCylinder *this,FLayerDesc *param_1)

{
  FShapeWrapper *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  IStereoLayerShape *pIVar5;
  IStereoLayerShape *pIVar6;
  longlong local_18 [2];
  
  pIVar6 = ::operator_new(0x18);
  if (pIVar6 == (IStereoLayerShape *)0x0) {
    pIVar6 = (IStereoLayerShape *)0x0;
  }
  else {
    iVar4 = this->Height;
    fVar2 = this->OverlayArc;
    fVar3 = this->Radius;
    *pIVar6 = (IStereoLayerShape)&___7FCylinderLayer__6B_;
    *(float *)(pIVar6 + 1) = fVar3;
    *(float *)(pIVar6 + 2) = (float)iVar4;
    *(float *)&pIVar6[1].field_0x4 = fVar2;
  }
  pFVar1 = &param_1->Shape;
  if (pFVar1 == (FShapeWrapper *)local_18) {
    if (pIVar6 != (IStereoLayerShape *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,1);
    }
  }
  else {
    pIVar5 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar6;
    if (pIVar5 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b34d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,1);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1479ce4a0

UClass * __cdecl UStereoLayerShapeCylinder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeCylinder",
               &Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeCylinder,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeCylinder>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeCylinder>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeCylinder.InnerSingleton;
}

// SetHeight @ 1479e88e0

void __thiscall UStereoLayerShapeCylinder::SetHeight(UStereoLayerShapeCylinder *this,int param_1)

{
  if (this->Height != param_1) {
    this->Height = param_1;
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)this);
    return;
  }
  return;
}

// SetOverlayArc @ 1479e9c50

void __thiscall
UStereoLayerShapeCylinder::SetOverlayArc(UStereoLayerShapeCylinder *this,float param_1)

{
  if (param_1 != this->OverlayArc) {
    this->OverlayArc = param_1;
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)this);
    return;
  }
  return;
}

// SetRadius @ 1479ea6f0

void __thiscall UStereoLayerShapeCylinder::SetRadius(UStereoLayerShapeCylinder *this,float param_1)

{
  if (param_1 != this->Radius) {
    this->Radius = param_1;
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUStereoLayerShapeCylinder @ 1479ee090

void __cdecl UStereoLayerShapeCylinder::StaticRegisterNativesUStereoLayerShapeCylinder(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetHeight @ 147a05ee0

void __cdecl
UStereoLayerShapeCylinder::execSetHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[1].field_0x8 != local_res8[0]) {
    *(int *)&param_1[1].field_0x8 = local_res8[0];
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)param_1);
  }
  return;
}

// execSetOverlayArc @ 147a07a70

void __cdecl
UStereoLayerShapeCylinder::execSetOverlayArc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(float *)&param_1[1].field_0x4) {
    *(float *)&param_1[1].field_0x4 = local_res8[0];
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)param_1);
  }
  return;
}

// execSetRadius @ 147a07db0

void __cdecl
UStereoLayerShapeCylinder::execSetRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(float *)(param_1 + 1)) {
    *(float *)(param_1 + 1) = local_res8[0];
    UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)param_1);
  }
  return;
}

