// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 11

// StaticClass @ 14e521660

UClass * __cdecl UInterchangeTextureLightProfileFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureLightProfileFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton
               ,StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode,0x538,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureLightProfileFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfileFactoryNode>,local_res8
               ,UInterchangeTexture2DFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton;
}

// UInterchangeTextureLightProfileFactoryNode @ 14e535080

UInterchangeTextureLightProfileFactoryNode * __thiscall
UInterchangeTextureLightProfileFactoryNode::UInterchangeTextureLightProfileFactoryNode
          (UInterchangeTextureLightProfileFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTexture2DFactoryNode::UInterchangeTexture2DFactoryNode
            ((UInterchangeTexture2DFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTextureLightProfileFactoryNode__6B_;
  (this->Macro_CustomBrightnessKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomBrightnessKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBrightnessKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBrightnessKey).Key,L"Brightness");
  (this->Macro_CustomTextureMultiplierKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTextureMultiplierKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTextureMultiplierKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTextureMultiplierKey).Key,L"TextureMultiplier");
  (this->AttributeHelperIESSourceFileContentChunks).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AttributeHelperIESSourceFileContentChunks).Attributes.WeakReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AttributeHelperIESSourceFileContentChunks).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttributeHelperIESSourceFileContentChunks).KeyCount.Key.Data.ArrayNum = 0;
  (this->AttributeHelperIESSourceFileContentChunks).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeTextureLightProfileFactoryNode @ 14e536b40

void __thiscall
UInterchangeTextureLightProfileFactoryNode::~UInterchangeTextureLightProfileFactoryNode
          (UInterchangeTextureLightProfileFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeTextureLightProfileFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AttributeHelperIESSourceFileContentChunks);
  pFVar1 = (this->Macro_CustomTextureMultiplierKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomBrightnessKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeTexture2DFactoryNode__6B_;
  UE::Interchange::TMapAttributeHelper<int,FString>::~TMapAttributeHelper<int,FString>
            ((TMapAttributeHelper<int,FString> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e549a60

void __thiscall
UInterchangeTextureLightProfileFactoryNode::CopyWithObject
          (UInterchangeTextureLightProfileFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  int iVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  uchar auStackX_10 [8];
  uchar auStackX_20 [8];
  FName FStack_108;
  FName FStack_100;
  TAttributeHandle<unsigned_char,void> TStack_f8;
  TAttributeHandle<unsigned_char,void> TStack_e0;
  FString FStack_c8;
  FString FStack_b8;
  void *apvStack_a8 [2];
  FString FStack_98;
  void *apvStack_88 [2];
  FString FStack_78;
  TAttributeHandle<unsigned_char,void> TStack_68;
  TAttributeHandle<unsigned_char,void> TStack_50;
  FString FStack_38;
  FString FStack_28;
  
  UInterchangeTextureFactoryNode::CopyWithObject
            ((UInterchangeTextureFactoryNode *)this,param_1,param_2);
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar5 = UInterchangeTexture2DFactoryNode::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_a8);
  ::FString::ConcatFC(&FStack_c8,pFVar6,L".GetAddressX");
  if (apvStack_a8[0] != (void *)0x0) {
    FMemory::Free(apvStack_a8[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (pFVar2,&TStack_68,(FAttributeKey *)&this->_padding_);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&TStack_f8,&pTVar7->Key,pTVar7->AttributeStorage);
    if (TStack_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_68.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_f8);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&TStack_f8,auStackX_10);
      if ((EVar8 & Operation_Success) != None) {
        if (TStack_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_f8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_108,L"AddressX");
        pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar5,FStack_108
                  );
        goto LAB_14e548614;
      }
      ::FString::FString(&FStack_98,(FString *)&this->_padding_);
      pFVar6 = ::FString::FString(&FStack_38,&FStack_c8);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar6,(FAttributeKey *)&FStack_98);
    }
    if (TStack_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_f8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548614:
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_88);
  ::FString::ConcatFC(&FStack_b8,pFVar6,L".GetAddressY");
  if (apvStack_88[0] != (void *)0x0) {
    FMemory::Free(apvStack_88[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (pFVar2,&TStack_50,(FAttributeKey *)&this->_padding_);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&TStack_e0,&pTVar7->Key,pTVar7->AttributeStorage);
    if (TStack_50.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_50.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_e0);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&TStack_e0,auStackX_20);
      if ((EVar8 & Operation_Success) != None) {
        if (TStack_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_e0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_100,L"AddressY");
        pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar5,FStack_100
                  );
        goto LAB_14e548778;
      }
      ::FString::FString(&FStack_78,(FString *)&this->_padding_);
      pFVar6 = ::FString::FString(&FStack_28,&FStack_b8);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar6,(FAttributeKey *)&FStack_78);
    }
    if (TStack_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_e0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548778:
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetObjectClass @ 14e559700

UClass * __thiscall
UInterchangeTextureLightProfileFactoryNode::GetObjectClass
          (UInterchangeTextureLightProfileFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLightProfile",
               &Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton,
               UTextureLightProfile::StaticRegisterNativesUTextureLightProfile,0x178,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTextureLightProfile>,
               InternalVTableHelperCtorCaller<UTextureLightProfile>,aFStackX_8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55c050

UClass * __cdecl UInterchangeTextureLightProfileFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureLightProfileFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton
               ,StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode,0x538,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureLightProfileFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfileFactoryNode>,local_res8
               ,UInterchangeTexture2DFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode @ 14e57fbb0

void __cdecl
UInterchangeTextureLightProfileFactoryNode::
StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomBrightness @ 14e58b980

void __cdecl
UInterchangeTextureLightProfileFactoryNode::execGetCustomBrightness
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetBrightness");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1f].field_0x20
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomTextureMultiplier @ 14e596490

void __cdecl
UInterchangeTextureLightProfileFactoryNode::execGetCustomTextureMultiplier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetTextureMultiplier");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x20].field_0x8,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomBrightness @ 14e5a30b0

void __cdecl
UInterchangeTextureLightProfileFactoryNode::execSetCustomBrightness
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  float local_res8 [2];
  undefined4 local_res10 [2];
  float local_res18 [4];
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_48);
  ::FString::ConcatFC(&local_58,pFVar4,L".SetBrightness");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1f].field_0x20
                     ,local_res18,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_38,(FString *)&param_1[0x1f].field_0x20);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_68,(FAttributeKey *)&local_38);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomTextureMultiplier @ 14e5b1890

void __cdecl
UInterchangeTextureLightProfileFactoryNode::execSetCustomTextureMultiplier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  float local_res8 [2];
  undefined4 local_res10 [2];
  float local_res18 [4];
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_48);
  ::FString::ConcatFC(&local_58,pFVar4,L".SetTextureMultiplier");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x20].field_0x8,
                     local_res18,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_38,(FString *)&param_1[0x20].field_0x8);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_68,(FAttributeKey *)&local_38);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

