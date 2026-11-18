// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 19

// StaticClass @ 14e47a070

UClass * __cdecl UInterchangeTexture2DNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTexture2DNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DNode,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeTexture2DNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton;
}

// UInterchangeTexture2DNode @ 14e489510

UInterchangeTexture2DNode * __thiscall
UInterchangeTexture2DNode::UInterchangeTexture2DNode
          (UInterchangeTexture2DNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DNode__6B_;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SourceBlocks).KeyCountHandle);
  (this->SourceBlocks).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SourceBlocks).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomWrapUKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomWrapUKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomWrapUKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomWrapUKey).Key,L"WrapU");
  (this->Macro_CustomWrapVKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomWrapVKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomWrapVKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomWrapVKey).Key,L"WrapV");
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomForceLongLatCubemapKey).Key,L"ForceLongLatCubemap");
  return this;
}

// UInterchangeTexture2DNode @ 14e4895f0

UInterchangeTexture2DNode * __thiscall
UInterchangeTexture2DNode::UInterchangeTexture2DNode(UInterchangeTexture2DNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DNode__6B_;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SourceBlocks).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SourceBlocks).KeyCountHandle);
  (this->SourceBlocks).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SourceBlocks).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomWrapUKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomWrapUKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomWrapUKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomWrapUKey).Key,L"WrapU");
  (this->Macro_CustomWrapVKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomWrapVKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomWrapVKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomWrapVKey).Key,L"WrapV");
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomForceLongLatCubemapKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomForceLongLatCubemapKey).Key,L"ForceLongLatCubemap");
  return this;
}

// ~UInterchangeTexture2DNode @ 14e48b760

void __thiscall
UInterchangeTexture2DNode::~UInterchangeTexture2DNode(UInterchangeTexture2DNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeTexture2DNode__6B_;
  pFVar1 = (this->Macro_CustomForceLongLatCubemapKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomWrapVKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomWrapUKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::TMapAttributeHelper<int,FString>::~TMapAttributeHelper<int,FString>
            (&this->SourceBlocks);
  this->_padding_ = (longlong)&___7UInterchangeTextureNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// Create @ 14e48f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTexture2DNode * __cdecl
UInterchangeTexture2DNode::Create
          (UInterchangeBaseNodeContainer *param_1,TStringView<wchar_t> *param_2)

{
  UClass *pUVar1;
  UInterchangeTexture2DNode *pUVar2;
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
  pUVar2 = (UInterchangeTexture2DNode *)
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

// GetPrivateStaticClass @ 14e4995a0

UClass * __cdecl UInterchangeTexture2DNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTexture2DNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DNode,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeTexture2DNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DNode.InnerSingleton;
}

// GetTypeName @ 14e49ae00

FString * __thiscall
UInterchangeTexture2DNode::GetTypeName
          (UInterchangeTexture2DNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Texture2DNode");
  return __return_storage_ptr__;
}

// MakeNodeUid @ 14e49d540

FString * __cdecl
UInterchangeTexture2DNode::MakeNodeUid
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UInterchangeTextureNode::MakeNodeUid(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// PostInitProperties @ 14e49db90

void __thiscall UInterchangeTexture2DNode::PostInitProperties(UInterchangeTexture2DNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::StringKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::StringKey.Key.Data.ArrayNum = 0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::StringKey.Key.Data.ArrayMax = 0;
      ::FString::operator=
                (&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
                  ::__l2::StringKey.Key,L"SourceBlocks");
      atexit(`UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey'::__l2::
             _dynamic_atexit_destructor_for__StringKey__);
      _Init_thread_footer(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_18.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_18.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Interchange::TMapAttributeHelper<int,FString>::Initialize
            (&this->SourceBlocks,&local_18,
             &`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DNodeStaticData::GetBaseSourceBlocksKey(void)'
              ::__l2::StringKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Serialize @ 14e49f2b0

void __thiscall
UInterchangeTexture2DNode::Serialize(UInterchangeTexture2DNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(&this->SourceBlocks);
  }
  return;
}

// Serialize @ 14e49f2f0

void __thiscall
UInterchangeTexture2DNode::Serialize
          (UInterchangeTexture2DNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(&this->SourceBlocks);
  }
  return;
}

// StaticRegisterNativesUInterchangeTexture2DNode @ 14e4a8b10

void __cdecl UInterchangeTexture2DNode::StaticRegisterNativesUInterchangeTexture2DNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTexture2DNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomWrapU @ 14e4b7bb0

void __cdecl
UInterchangeTexture2DNode::execGetCustomWrapU(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  EInterchangeTextureWrapMode *pEVar5;
  EInterchangeTextureWrapMode local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = Wrap;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pEVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (EInterchangeTextureWrapMode *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetWrapU");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<enum_EInterchangeTextureWrapMode>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 7),&local_38,
                     pEVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomWrapV @ 14e4b7ce0

void __cdecl
UInterchangeTexture2DNode::execGetCustomWrapV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  EInterchangeTextureWrapMode *pEVar5;
  EInterchangeTextureWrapMode local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = Wrap;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pEVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (EInterchangeTextureWrapMode *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetWrapV");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<enum_EInterchangeTextureWrapMode>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x10,
                     &local_38,pEVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetForceLongLatCubemap @ 14e4b7f40

void __cdecl
UInterchangeTexture2DNode::execGetForceLongLatCubemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetForceLongLatCubemap");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x20,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetSourceBlocks @ 14e4b9e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeTexture2DNode::execGetSourceBlocks(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator> local_68
  ;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<int,FString>::ToMap
            ((TMapAttributeHelper<int,FString> *)(param_1 + 4),
             (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
             &local_68);
  if (param_3 != &local_68) {
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>_>
              (param_3,&local_68);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execSetCustomWrapU @ 14e4c89c0

void __cdecl
UInterchangeTexture2DNode::execSetCustomWrapU(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetWrapU");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 7),puVar7,None
                    );
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 7));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomWrapV @ 14e4c8b80

void __cdecl
UInterchangeTexture2DNode::execSetCustomWrapV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetWrapV");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x10,
                     puVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[7].field_0x10);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetForceLongLatCubemap @ 14e4c8f00

void __cdecl
UInterchangeTexture2DNode::execSetForceLongLatCubemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetForceLongLatCubemap");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x20,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[7].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

