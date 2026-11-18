// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 19

// StaticClass @ 14e476f80

UClass * __cdecl UInterchangeShaderNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeShaderNode",
               &Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton,
               StaticRegisterNativesUInterchangeShaderNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeShaderNode>,
               InternalVTableHelperCtorCaller<UInterchangeShaderNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton;
}

// UInterchangeShaderNode @ 14e488830

UInterchangeShaderNode * __thiscall
UInterchangeShaderNode::UInterchangeShaderNode(UInterchangeShaderNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  (this->Macro_CustomShaderTypeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomShaderTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomShaderTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomShaderTypeKey).Key,L"ShaderType");
  return this;
}

// UInterchangeShaderNode @ 14e488870

UInterchangeShaderNode * __thiscall
UInterchangeShaderNode::UInterchangeShaderNode(UInterchangeShaderNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  (this->Macro_CustomShaderTypeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomShaderTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomShaderTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomShaderTypeKey).Key,L"ShaderType");
  return this;
}

// ~UInterchangeShaderNode @ 14e48b3c0

void __thiscall UInterchangeShaderNode::~UInterchangeShaderNode(UInterchangeShaderNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  pFVar1 = (this->Macro_CustomShaderTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// AddFloatInput @ 14e48d840

bool __thiscall
UInterchangeShaderNode::AddFloatInput
          (UInterchangeShaderNode *this,FString *param_1,float *param_2,bool param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  if (param_3) {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,param_1);
  }
  else {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_18,param_1);
  }
  bVar1 = UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)this,pFVar2,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddLinearColorInput @ 14e48dc50

bool __thiscall
UInterchangeShaderNode::AddLinearColorInput
          (UInterchangeShaderNode *this,FString *param_1,FLinearColor *param_2,bool param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  if (param_3) {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,param_1);
  }
  else {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_18,param_1);
  }
  bVar1 = UInterchangeBaseNode::AddLinearColorAttribute((UInterchangeBaseNode *)this,pFVar2,param_2)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddStringInput @ 14e48dd80

bool __thiscall
UInterchangeShaderNode::AddStringInput
          (UInterchangeShaderNode *this,FString *param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  if (param_3) {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,param_1);
  }
  else {
    pFVar2 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_18,param_1);
  }
  bVar1 = UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)this,pFVar2,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Create @ 14e48eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeShaderNode * __cdecl
UInterchangeShaderNode::Create
          (UInterchangeBaseNodeContainer *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UInterchangeShaderNode *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  UClass *pUVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStackY_1a8 [32];
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Nodes\\Private\\InterchangeShaderGraphNode.cpp"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UInterchangeShaderNode *)(*pcVar1)();
      return pUVar3;
    }
  }
  pFVar4 = ::FString::FString(&local_108,L"\\");
  pFVar5 = ::FString::FString(&local_118,L"\\");
  ::FString::ConcatFC(&local_138,pFVar5,L"Shaders");
  ::FString::ConcatFF(&local_158,&local_138,pFVar4);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (param_3->Size == 0) {
    ::FString::AppendChars(&local_158,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  }
  else {
    pFVar4 = ::FString::FString(&local_f8,L"\\");
    ::FString::ConcatRF(&local_128,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size,pFVar4);
    ::FString::ConcatFR(&local_148,&local_128,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    iVar7 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_158,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar7);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar6);
  local_c8._8_8_ = param_1;
  pUVar3 = (UInterchangeShaderNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_e8,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  if (&local_168 != pFVar4) {
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_168.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_d8,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_178 != pFVar4) {
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_178.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_178.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)pUVar3,&local_158,&local_178,TranslatedAsset,&local_168
            );
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetCustomShaderType @ 14e493eb0

bool __thiscall
UInterchangeShaderNode::GetCustomShaderType(UInterchangeShaderNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetShaderType");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomShaderTypeKey,&local_28
                     ,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e498fb0

UClass * __cdecl UInterchangeShaderNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeShaderNode",
               &Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton,
               StaticRegisterNativesUInterchangeShaderNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeShaderNode>,
               InternalVTableHelperCtorCaller<UInterchangeShaderNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeShaderNode.InnerSingleton;
}

// GetTypeName @ 14e49acb0

FString * __thiscall
UInterchangeShaderNode::GetTypeName(UInterchangeShaderNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ShaderNode");
  return __return_storage_ptr__;
}

// MakeNodeUid @ 14e49d310

FString * __cdecl
UInterchangeShaderNode::MakeNodeUid
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  int iVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"\\");
  pFVar2 = ::FString::FString(&local_28,L"\\");
  ::FString::ConcatFC(&local_38,pFVar2,L"Shaders");
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,pFVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_2->Size == 0) {
    ::FString::AppendChars
              (__return_storage_ptr__,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  }
  else {
    pFVar1 = ::FString::FString(&local_18,L"\\");
    ::FString::ConcatRF(&local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size,pFVar1);
    ::FString::ConcatFR(&local_38,&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SetCustomShaderType @ 14e4a5070

bool __thiscall
UInterchangeShaderNode::SetCustomShaderType(UInterchangeShaderNode *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetShaderType");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomShaderTypeKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomShaderTypeKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeShaderNode @ 14e4a8940

void __cdecl UInterchangeShaderNode::StaticRegisterNativesUInterchangeShaderNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeShaderNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddFloatInput @ 14e4ac0e0

void __cdecl
UInterchangeShaderNode::execAddFloatInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res10 [2];
  int local_res18 [2];
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pfVar5 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == 0) {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_38,&local_48);
  }
  else {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_38,&local_48);
  }
  bVar3 = UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_1,pFVar4,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddLinearColorInput @ 14e4ac470

void __cdecl
UInterchangeShaderNode::execAddLinearColorInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FLinearColor *pFVar5;
  int local_res10 [2];
  FString local_58;
  FLinearColor local_48;
  FString local_38;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pFVar5 = &local_48;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar5 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_38,&local_58);
  }
  else {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_38,&local_58);
  }
  bVar3 = UInterchangeBaseNode::AddLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,pFVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddStringInput @ 14e4ac970

void __cdecl
UInterchangeShaderNode::execAddStringInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FString *pFVar4;
  int local_res10 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_38,&local_48);
  }
  else {
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_38,&local_48);
  }
  bVar3 = UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_1,pFVar4,&local_58)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomShaderType @ 14e4b56e0

void __cdecl
UInterchangeShaderNode::execGetCustomShaderType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
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
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetShaderType");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     &local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomShaderType @ 14e4c59c0

void __cdecl
UInterchangeShaderNode::execSetCustomShaderType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetShaderType");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[2].field_0x10);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

