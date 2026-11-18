// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b56b230

UClass * __cdecl UDS_PostProcessDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessDataAsset",
               &Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessDataAsset,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PostProcessDataAsset>,
               InternalVTableHelperCtorCaller<UDS_PostProcessDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton;
}

// UDS_PostProcessDataAsset @ 14b56d6c0

UDS_PostProcessDataAsset * __thiscall
UDS_PostProcessDataAsset::UDS_PostProcessDataAsset
          (UDS_PostProcessDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PostProcessDataAsset__6B_;
  this->ConstructionMPC = (UMaterialParameterCollection *)0x0;
  this->BreachMPC = (UMaterialParameterCollection *)0x0;
  this->DetectionMPC = (UMaterialParameterCollection *)0x0;
  this->WaterOnLensMPC = (UMaterialParameterCollection *)0x0;
  this->ConstructionMI = (UMaterialInterface *)0x0;
  this->BreachMI = (UMaterialInterface *)0x0;
  this->DetectionMI = (UMaterialInterface *)0x0;
  this->WaterOnLensMI = (UMaterialInterface *)0x0;
  this->BreachBlendInCurve = (UCurveFloat *)0x0;
  this->BreachBlendOutCurve = (UCurveFloat *)0x0;
  this->BreachBlendProcessInCurve = (UCurveFloat *)0x0;
  this->BreachBlendProcessOutCurve = (UCurveFloat *)0x0;
  this->WaterOnLensBlendProcessOutCurve = (UCurveFloat *)0x0;
  this->BreachBlendTime0 = (UCurveFloat *)0x0;
  this->BreachBlendTime1 = (UCurveFloat *)0x0;
  this->BreachBlendTime2 = (UCurveFloat *)0x0;
  this->DetectionBlendTime0 = (UCurveFloat *)0x0;
  this->DetectionBlendTime1 = (UCurveFloat *)0x0;
  this->DetectionBlendTime2 = (UCurveFloat *)0x0;
  this->WaterOnLensBlendTime0 = (UCurveFloat *)0x0;
  return this;
}

// UDS_PostProcessDataAsset @ 14b56d760

UDS_PostProcessDataAsset * __thiscall
UDS_PostProcessDataAsset::UDS_PostProcessDataAsset
          (UDS_PostProcessDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PostProcessDataAsset__6B_;
  this->ConstructionMPC = (UMaterialParameterCollection *)0x0;
  this->BreachMPC = (UMaterialParameterCollection *)0x0;
  this->DetectionMPC = (UMaterialParameterCollection *)0x0;
  this->WaterOnLensMPC = (UMaterialParameterCollection *)0x0;
  this->ConstructionMI = (UMaterialInterface *)0x0;
  this->BreachMI = (UMaterialInterface *)0x0;
  this->DetectionMI = (UMaterialInterface *)0x0;
  this->WaterOnLensMI = (UMaterialInterface *)0x0;
  this->BreachBlendInCurve = (UCurveFloat *)0x0;
  this->BreachBlendOutCurve = (UCurveFloat *)0x0;
  this->BreachBlendProcessInCurve = (UCurveFloat *)0x0;
  this->BreachBlendProcessOutCurve = (UCurveFloat *)0x0;
  this->WaterOnLensBlendProcessOutCurve = (UCurveFloat *)0x0;
  this->BreachBlendTime0 = (UCurveFloat *)0x0;
  this->BreachBlendTime1 = (UCurveFloat *)0x0;
  this->BreachBlendTime2 = (UCurveFloat *)0x0;
  this->DetectionBlendTime0 = (UCurveFloat *)0x0;
  this->DetectionBlendTime1 = (UCurveFloat *)0x0;
  this->DetectionBlendTime2 = (UCurveFloat *)0x0;
  this->WaterOnLensBlendTime0 = (UCurveFloat *)0x0;
  return this;
}

// ~UDS_PostProcessDataAsset @ 14b56e2a0

void __thiscall UDS_PostProcessDataAsset::~UDS_PostProcessDataAsset(UDS_PostProcessDataAsset *this)

{
  this->_padding_ = (longlong)&___7UDS_PostProcessDataAsset__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f4c0

UClass * __cdecl UDS_PostProcessDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessDataAsset",
               &Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessDataAsset,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PostProcessDataAsset>,
               InternalVTableHelperCtorCaller<UDS_PostProcessDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_PostProcessDataAsset @ 14b56fce0

void __cdecl UDS_PostProcessDataAsset::StaticRegisterNativesUDS_PostProcessDataAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_PostProcessDataAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurve @ 14b570c20

void __cdecl UDS_PostProcessDataAsset::execGetCurve(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 1:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x20;
    return;
  case 2:
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 3);
    return;
  case 3:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x8;
    return;
  case 4:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x10;
    return;
  case 5:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x20;
    return;
  case 6:
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 4);
    return;
  case 7:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x8;
    return;
  case 8:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x10;
    return;
  case 9:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x18;
    return;
  case 10:
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x20;
    return;
  case 0xb:
    uVar2 = *(undefined8 *)(param_1 + 5);
  }
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetMaterial @ 14b570e00

void __cdecl
UDS_PostProcessDataAsset::execGetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res10 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\x01') {
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 2);
    return;
  }
  if (local_res10[0] == '\x02') {
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x8;
    return;
  }
  if (local_res10[0] != '\x03') {
    if (local_res10[0] != '\x04') {
      *(undefined8 *)param_3 = 0;
      return;
    }
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x18;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x10;
  return;
}

// execGetMaterialParameterCollection @ 14b570f00

void __cdecl
UDS_PostProcessDataAsset::execGetMaterialParameterCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res10 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\x01') {
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
    return;
  }
  if (local_res10[0] == '\x02') {
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
    return;
  }
  if (local_res10[0] != '\x03') {
    if (local_res10[0] != '\x04') {
      *(undefined8 *)param_3 = 0;
      return;
    }
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// GetCurve @ 14bbf7c60

UCurveFloat * __thiscall
UDS_PostProcessDataAsset::GetCurve(UDS_PostProcessDataAsset *this,EPPCurveKind param_1)

{
  switch(param_1) {
  case BreachIn:
    return this->BreachBlendInCurve;
  case BreachOut:
    return this->BreachBlendOutCurve;
  case BreachProcessIn:
    return this->BreachBlendProcessInCurve;
  case BreachProcessOut:
    return this->BreachBlendProcessOutCurve;
  case BreachTime0:
    return this->BreachBlendTime0;
  case BreachTime1:
    return this->BreachBlendTime1;
  case BreachTime2:
    return this->BreachBlendTime2;
  case DetectionTime0:
    return this->DetectionBlendTime0;
  case DetectionTime1:
    return this->DetectionBlendTime1;
  case DetectionTime2:
    return this->DetectionBlendTime2;
  case WaterOnLensOut:
    return this->WaterOnLensBlendTime0;
  default:
    return (UCurveFloat *)0x0;
  }
}

