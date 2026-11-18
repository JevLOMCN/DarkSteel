// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 9

// StaticClass @ 14e476260

UClass * __cdecl UInterchangeTextureBlurNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureBlurNode",
               &Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureBlurNode,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureBlurNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureBlurNode>,local_res8,
               UInterchangeTexture2DNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton;
}

// UInterchangeTextureBlurNode @ 14e4896d0

UInterchangeTextureBlurNode * __thiscall
UInterchangeTextureBlurNode::UInterchangeTextureBlurNode
          (UInterchangeTextureBlurNode *this,FVTableHelper *param_1)

{
  UInterchangeTexture2DNode::UInterchangeTexture2DNode((UInterchangeTexture2DNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureBlurNode__6B_;
  return this;
}

// UInterchangeTextureBlurNode @ 14e489700

UInterchangeTextureBlurNode * __thiscall
UInterchangeTextureBlurNode::UInterchangeTextureBlurNode(UInterchangeTextureBlurNode *this)

{
  UInterchangeTexture2DNode::UInterchangeTexture2DNode((UInterchangeTexture2DNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureBlurNode__6B_;
  return this;
}

// ~UInterchangeTextureBlurNode @ 14e48b810

void __thiscall
UInterchangeTextureBlurNode::~UInterchangeTextureBlurNode(UInterchangeTextureBlurNode *this)

{
  *(undefined ***)this = &___7UInterchangeTextureBlurNode__6B_;
  UInterchangeTexture2DNode::~UInterchangeTexture2DNode((UInterchangeTexture2DNode *)this);
  return;
}

// Create @ 14e48f270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTextureBlurNode * __cdecl
UInterchangeTextureBlurNode::Create
          (UInterchangeBaseNodeContainer *param_1,TStringView<wchar_t> *param_2)

{
  UClass *pUVar1;
  UInterchangeTextureBlurNode *pUVar2;
  FString *pFVar3;
  FString *pFVar4;
  longlong *plVar5;
  undefined1 auStackY_148 [32];
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_1;
  pUVar2 = (UInterchangeTextureBlurNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  pFVar3 = ::FString::FString(&local_f8,L"\\");
  pFVar4 = ::FString::FString(&local_c8,L"\\");
  ::FString::ConcatFC(&local_108,pFVar4,L"Textures");
  ::FString::ConcatFF(&local_e8,&local_108,pFVar3);
  ::FString::ConcatFR(&local_d8,&local_e8,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_108,L"");
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_f8,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_118 != pFVar3) {
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    local_118.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_118.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)pUVar2,&local_d8,&local_118,TranslatedAsset,&local_108)
  ;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14e499660

UClass * __cdecl UInterchangeTextureBlurNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureBlurNode",
               &Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureBlurNode,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureBlurNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureBlurNode>,local_res8,
               UInterchangeTexture2DNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureBlurNode.InnerSingleton;
}

// GetTypeName @ 14e49ae30

FString * __thiscall
UInterchangeTextureBlurNode::GetTypeName
          (UInterchangeTextureBlurNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TextureBlurNode");
  return __return_storage_ptr__;
}

// MakeNodeUid @ 14e49d570

FString * __cdecl
UInterchangeTextureBlurNode::MakeNodeUid
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UInterchangeTextureNode::MakeNodeUid(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeTextureBlurNode @ 14e4a8b50

void __cdecl UInterchangeTextureBlurNode::StaticRegisterNativesUInterchangeTextureBlurNode(void)

{
  return;
}

