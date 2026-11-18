// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 12

// StaticClass @ 146347ec0

UClass * __cdecl UGeometryCollectionBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionBlueprintLibrary",
               &Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGeometryCollectionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton;
}

// UGeometryCollectionBlueprintLibrary @ 14635d5f0

UGeometryCollectionBlueprintLibrary * __thiscall
UGeometryCollectionBlueprintLibrary::UGeometryCollectionBlueprintLibrary
          (UGeometryCollectionBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionBlueprintLibrary__6B_;
  return this;
}

// UGeometryCollectionBlueprintLibrary @ 14635d620

UGeometryCollectionBlueprintLibrary * __thiscall
UGeometryCollectionBlueprintLibrary::UGeometryCollectionBlueprintLibrary
          (UGeometryCollectionBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionBlueprintLibrary__6B_;
  return this;
}

// ~UGeometryCollectionBlueprintLibrary @ 14635ef20

void __thiscall
UGeometryCollectionBlueprintLibrary::~UGeometryCollectionBlueprintLibrary
          (UGeometryCollectionBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UGeometryCollectionBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 146379a40

UClass * __cdecl UGeometryCollectionBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionBlueprintLibrary",
               &Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGeometryCollectionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.InnerSingleton;
}

// SetCustomInstanceDataByIndex @ 14638c3a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGeometryCollectionBlueprintLibrary::SetCustomInstanceDataByIndex
          (UGeometryCollectionComponent *param_1,int param_2,float param_3)

{
  UObjectBaseUtility *this;
  UClass *pUVar1;
  longlong *plVar2;
  
  if ((((param_1 != (UGeometryCollectionComponent *)0x0) &&
       (*(longlong *)&param_1->CustomRenderer != 0)) &&
      (plVar2 = *(longlong **)&(param_1->CustomRenderer).field_0x8, plVar2 != (longlong *)0x0)) &&
     (this = (UObjectBaseUtility *)(**(code **)(*plVar2 + 8))(), this != (UObjectBaseUtility *)0x0))
  {
    pUVar1 = UGeometryCollectionCustomDataInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
    }
  }
  return;
}

// SetCustomInstanceDataByName @ 14638c420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGeometryCollectionBlueprintLibrary::SetCustomInstanceDataByName
          (UGeometryCollectionComponent *param_1,FName param_2,float param_3)

{
  UObjectBaseUtility *this;
  UClass *pUVar1;
  longlong *plVar2;
  
  if ((((param_1 != (UGeometryCollectionComponent *)0x0) &&
       (*(longlong *)&param_1->CustomRenderer != 0)) &&
      (plVar2 = *(longlong **)&(param_1->CustomRenderer).field_0x8, plVar2 != (longlong *)0x0)) &&
     (this = (UObjectBaseUtility *)(**(code **)(*plVar2 + 8))(), this != (UObjectBaseUtility *)0x0))
  {
    pUVar1 = UGeometryCollectionCustomDataInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    }
  }
  return;
}

// SetISMPoolCustomInstanceData @ 14638cf50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGeometryCollectionBlueprintLibrary::SetISMPoolCustomInstanceData
          (UGeometryCollectionComponent *param_1,int param_2,float param_3)

{
  UObjectBaseUtility *this;
  UClass *pUVar1;
  longlong *plVar2;
  
  if ((((param_1 != (UGeometryCollectionComponent *)0x0) &&
       (*(longlong *)&param_1->CustomRenderer != 0)) &&
      (plVar2 = *(longlong **)&(param_1->CustomRenderer).field_0x8, plVar2 != (longlong *)0x0)) &&
     (this = (UObjectBaseUtility *)(**(code **)(*plVar2 + 8))(), this != (UObjectBaseUtility *)0x0))
  {
    pUVar1 = UGeometryCollectionCustomDataInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
    }
  }
  return;
}

// StaticRegisterNativesUGeometryCollectionBlueprintLibrary @ 14638f510

void __cdecl
UGeometryCollectionBlueprintLibrary::StaticRegisterNativesUGeometryCollectionBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetCustomInstanceDataByIndex @ 146396cd0

void __cdecl
UGeometryCollectionBlueprintLibrary::execSetCustomInstanceDataByIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UObjectBaseUtility *this;
  UClass *pUVar5;
  longlong *plVar6;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_38 [4];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_38[0] != 0) && (*(longlong *)(local_38[0] + 0x808) != 0)) &&
     (*(longlong **)(local_38[0] + 0x810) != (longlong *)0x0)) {
    this = (UObjectBaseUtility *)(**(code **)(**(longlong **)(local_38[0] + 0x810) + 8))();
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar5 = UGeometryCollectionCustomDataInterface::StaticClass();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,uVar3);
      }
    }
  }
  return;
}

// execSetCustomInstanceDataByName @ 146396e20

void __cdecl
UGeometryCollectionBlueprintLibrary::execSetCustomInstanceDataByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  UObjectBaseUtility *this;
  UClass *pUVar5;
  longlong *plVar6;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  longlong local_38 [4];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res20;
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_38[0] != 0) && (*(longlong *)(local_38[0] + 0x808) != 0)) &&
     (*(longlong **)(local_38[0] + 0x810) != (longlong *)0x0)) {
    this = (UObjectBaseUtility *)(**(code **)(**(longlong **)(local_38[0] + 0x810) + 8))();
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar5 = UGeometryCollectionCustomDataInterface::StaticClass();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,uVar3);
      }
    }
  }
  return;
}

// execSetISMPoolCustomInstanceData @ 1463973a0

void __cdecl
UGeometryCollectionBlueprintLibrary::execSetISMPoolCustomInstanceData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UObjectBaseUtility *this;
  UClass *pUVar5;
  longlong *plVar6;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_38 [4];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_38[0] != 0) && (*(longlong *)(local_38[0] + 0x808) != 0)) &&
     (*(longlong **)(local_38[0] + 0x810) != (longlong *)0x0)) {
    this = (UObjectBaseUtility *)(**(code **)(**(longlong **)(local_38[0] + 0x810) + 8))();
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar5 = UGeometryCollectionCustomDataInterface::StaticClass();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,uVar3);
      }
    }
  }
  return;
}

