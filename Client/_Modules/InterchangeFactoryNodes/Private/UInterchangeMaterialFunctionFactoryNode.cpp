// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 10

// StaticClass @ 14e518480

UClass * __cdecl UInterchangeMaterialFunctionFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialFunctionFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFunctionFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton;
}

// UInterchangeMaterialFunctionFactoryNode @ 14e531430

UInterchangeMaterialFunctionFactoryNode * __thiscall
UInterchangeMaterialFunctionFactoryNode::UInterchangeMaterialFunctionFactoryNode
          (UInterchangeMaterialFunctionFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  ::FString::operator=((FString *)&this->field_0x1c0,L"IsMaterialImportEnabled");
  *(undefined ***)this = &___7UInterchangeMaterialFunctionFactoryNode__6B_;
  return this;
}

// UInterchangeMaterialFunctionFactoryNode @ 14e531480

UInterchangeMaterialFunctionFactoryNode * __thiscall
UInterchangeMaterialFunctionFactoryNode::UInterchangeMaterialFunctionFactoryNode
          (UInterchangeMaterialFunctionFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  ::FString::operator=((FString *)&this->field_0x1c0,L"IsMaterialImportEnabled");
  *(undefined ***)this = &___7UInterchangeMaterialFunctionFactoryNode__6B_;
  return this;
}

// ~UInterchangeMaterialFunctionFactoryNode @ 14e535c00

void __thiscall
UInterchangeMaterialFunctionFactoryNode::~UInterchangeMaterialFunctionFactoryNode
          (UInterchangeMaterialFunctionFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  if (*(void **)&this->field_0x1c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1c0);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetInputConnection @ 14e5581b0

bool __thiscall
UInterchangeMaterialFunctionFactoryNode::GetInputConnection
          (UInterchangeMaterialFunctionFactoryNode *this,FString *param_1,FString *param_2,
          FString *param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString FStack_18;
  
  pFVar2 = UInterchangeShaderPortsAPI::MakeInputConnectionKey(&FStack_18,param_1);
  bVar1 = UInterchangeBaseNode::GetStringAttribute((UInterchangeBaseNode *)this,pFVar2,param_2);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    ::FString::FString(&FStack_18,UInterchangeShaderPortsAPI::InputSeparator);
    ::FString::Split(param_2,&FStack_18,param_2,param_3);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetObjectClass @ 14e559040

UClass * __thiscall
UInterchangeMaterialFunctionFactoryNode::GetObjectClass
          (UInterchangeMaterialFunctionFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunction",
               &Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton,
               UMaterialFunction::StaticRegisterNativesUMaterialFunction,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunction>,
               InternalVTableHelperCtorCaller<UMaterialFunction>,aFStackX_8,
               UMaterialFunctionInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55ac10

UClass * __cdecl UInterchangeMaterialFunctionFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialFunctionFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFunctionFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d710

FString * __thiscall
UInterchangeMaterialFunctionFactoryNode::GetTypeName
          (UInterchangeMaterialFunctionFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MaterialFunctionFactoryNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode @ 14e57f5b0

void __cdecl
UInterchangeMaterialFunctionFactoryNode::
StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetInputConnection @ 14e598f10

void __cdecl
UInterchangeMaterialFunctionFactoryNode::execGetInputConnection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar4 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UInterchangeShaderPortsAPI::GetInputConnection
                    ((UInterchangeBaseNode *)param_1,&local_18,pFVar3,pFVar4);
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

