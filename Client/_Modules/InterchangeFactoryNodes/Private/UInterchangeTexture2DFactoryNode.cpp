// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 22

// StaticClass @ 14e514f00

UClass * __cdecl UInterchangeTexture2DFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTexture2DFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DFactoryNode,0x4f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton;
}

// UInterchangeTexture2DFactoryNode @ 14e534540

UInterchangeTexture2DFactoryNode * __thiscall
UInterchangeTexture2DFactoryNode::UInterchangeTexture2DFactoryNode
          (UInterchangeTexture2DFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DFactoryNode__6B_;
  (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressXKey).Key,L"AddressX");
  (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressYKey).Key,L"AddressY");
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
  return this;
}

// UInterchangeTexture2DFactoryNode @ 14e534610

UInterchangeTexture2DFactoryNode * __thiscall
UInterchangeTexture2DFactoryNode::UInterchangeTexture2DFactoryNode
          (UInterchangeTexture2DFactoryNode *this)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DFactoryNode__6B_;
  (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressXKey).Key,L"AddressX");
  (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressYKey).Key,L"AddressY");
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
  return this;
}

// ~UInterchangeTexture2DFactoryNode @ 14e5367b0

void __thiscall
UInterchangeTexture2DFactoryNode::~UInterchangeTexture2DFactoryNode
          (UInterchangeTexture2DFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeTexture2DFactoryNode__6B_;
  UE::Interchange::TMapAttributeHelper<int,FString>::~TMapAttributeHelper<int,FString>
            (&this->SourceBlocks);
  pFVar1 = (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e548460

void __thiscall
UInterchangeTexture2DFactoryNode::CopyWithObject
          (UInterchangeTexture2DFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
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
  uchar local_res10 [8];
  uchar local_res20 [8];
  FName local_108;
  FName local_100;
  TAttributeHandle<unsigned_char,void> local_f8;
  TAttributeHandle<unsigned_char,void> local_e0;
  FString local_c8;
  FString local_b8;
  void *local_a8 [2];
  FString local_98;
  void *local_88 [2];
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TAttributeHandle<unsigned_char,void> local_50;
  FString local_38;
  FString local_28;
  
  UInterchangeTextureFactoryNode::CopyWithObject
            ((UInterchangeTextureFactoryNode *)this,param_1,param_2);
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar5 = StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_a8);
  ::FString::ConcatFC(&local_c8,pFVar6,L".GetAddressX");
  if (local_a8[0] != (void *)0x0) {
    FMemory::Free(local_a8[0]);
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
                    (pFVar2,&this->Macro_CustomAddressXKey);
  if (bVar4) {
    pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (pFVar2,&local_68,&this->Macro_CustomAddressXKey);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_f8,&pTVar7->Key,pTVar7->AttributeStorage);
    if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_f8);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_f8,local_res10);
      if ((EVar8 & Operation_Success) != None) {
        if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_108,L"AddressX");
        pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomAddressXKey).Key,pUVar5,
                   local_108);
        goto LAB_14e548614;
      }
      ::FString::FString(&local_98,&(this->Macro_CustomAddressXKey).Key);
      pFVar6 = ::FString::FString(&local_38,&local_c8);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar6,(FAttributeKey *)&local_98);
    }
    if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548614:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_88);
  ::FString::ConcatFC(&local_b8,pFVar6,L".GetAddressY");
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
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
                    (pFVar2,&this->Macro_CustomAddressYKey);
  if (bVar4) {
    pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (pFVar2,&local_50,&this->Macro_CustomAddressYKey);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_e0,&pTVar7->Key,pTVar7->AttributeStorage);
    if (local_50.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_e0);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_e0,local_res20);
      if ((EVar8 & Operation_Success) != None) {
        if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_100,L"AddressY");
        pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomAddressYKey).Key,pUVar5,
                   local_100);
        goto LAB_14e548778;
      }
      ::FString::FString(&local_78,&(this->Macro_CustomAddressYKey).Key);
      pFVar6 = ::FString::FString(&local_28,&local_b8);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar6,(FAttributeKey *)&local_78);
    }
    if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548778:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetObjectClass @ 14e559690

UClass * __thiscall
UInterchangeTexture2DFactoryNode::GetObjectClass(UInterchangeTexture2DFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2D",&Z_Registration_Info_UClass_UTexture2D.InnerSingleton,
               UTexture2D::StaticRegisterNativesUTexture2D,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture2D>,InternalVTableHelperCtorCaller<UTexture2D>,
               aFStackX_8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2D.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55bd50

UClass * __cdecl UInterchangeTexture2DFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTexture2DFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DFactoryNode,0x4f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.InnerSingleton;
}

// GetSourceBlock @ 14e55cff0

bool __thiscall
UInterchangeTexture2DFactoryNode::GetSourceBlock
          (UInterchangeTexture2DFactoryNode *this,int param_1,FString *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  int iVar5;
  int *piVar6;
  EAttributeStorageResult EVar7;
  int *piVar8;
  undefined1 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = (this->SourceBlocks).Attributes.WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e55d032;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    if ((this->SourceBlocks).Attributes.Object != (FAttributeStorage *)0x0) {
      if (*(int *)&(this->SourceBlocks).CachedKeysAndValues.field_0x8 !=
          *(int *)&(this->SourceBlocks).CachedKeysAndValues.field_0x34) {
        puVar9 = *(undefined1 **)&(this->SourceBlocks).CachedKeysAndValues.field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->SourceBlocks).CachedKeysAndValues.field_0x38;
        }
        iVar5 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->SourceBlocks).CachedKeysAndValues.field_0x48 - 1U
                                  & param_1) * 4);
        if (iVar5 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar5 * 0x40 +
                            *(longlong *)&(this->SourceBlocks).CachedKeysAndValues);
            if (*piVar8 == param_1) {
              piVar6 = piVar8 + 2;
              if (piVar8 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              if (piVar6 != (int *)0x0) {
                EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                                  ((TAttributeHandle<FString,void> *)(piVar6 + 6),param_2);
                bVar11 = EVar7 == Operation_Success;
                goto LAB_14e55d064;
              }
              break;
            }
            iVar5 = piVar8[0xe];
          } while (iVar5 != -1);
        }
      }
      goto LAB_14e55d062;
    }
  }
LAB_14e55d032:
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494661>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x185,"AttributesPtr.IsValid()");
  if (bVar11) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14e55d062:
  bVar11 = false;
LAB_14e55d064:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// PostInitProperties @ 14e55f2a0

void __thiscall
UInterchangeTexture2DFactoryNode::PostInitProperties(UInterchangeTexture2DFactoryNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::AttributeKey.Key.Data.ArrayNum = 0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
      ::__l2::AttributeKey.Key.Data.ArrayMax = 0;
      ::FString::operator=
                (&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
                  ::__l2::AttributeKey.Key,L"SourceBlocks");
      atexit(`UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
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
             &`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTexture2DFactoryNodeStaticData::GetBaseSourceBlocksKey(void)'
              ::__l2::AttributeKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Serialize @ 14e55fe40

void __thiscall
UInterchangeTexture2DFactoryNode::Serialize
          (UInterchangeTexture2DFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(&this->SourceBlocks);
  }
  return;
}

// Serialize @ 14e55fe80

void __thiscall
UInterchangeTexture2DFactoryNode::Serialize
          (UInterchangeTexture2DFactoryNode *this,FStructuredArchiveRecord param_1)

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

// StaticRegisterNativesUInterchangeTexture2DFactoryNode @ 14e57fb10

void __cdecl
UInterchangeTexture2DFactoryNode::StaticRegisterNativesUInterchangeTexture2DFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomAddressX @ 14e588ee0

void __cdecl
UInterchangeTexture2DFactoryNode::execGetCustomAddressX
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TEnumAsByte<TextureAddress> *pTVar5;
  TEnumAsByte<TextureAddress> local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0].Value = '\0';
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
  pTVar5 = local_res8;
  if ((TEnumAsByte<TextureAddress> *)param_2->MostRecentPropertyAddress !=
      (TEnumAsByte<TextureAddress> *)0x0) {
    pTVar5 = (TEnumAsByte<TextureAddress> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddressX");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<TEnumAsByte<enum_TextureAddress>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1c),
                     &local_38,pTVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomAddressY @ 14e589140

void __cdecl
UInterchangeTexture2DFactoryNode::execGetCustomAddressY
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TEnumAsByte<TextureAddress> *pTVar5;
  TEnumAsByte<TextureAddress> local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0].Value = '\0';
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
  pTVar5 = local_res8;
  if ((TEnumAsByte<TextureAddress> *)param_2->MostRecentPropertyAddress !=
      (TEnumAsByte<TextureAddress> *)0x0) {
    pTVar5 = (TEnumAsByte<TextureAddress> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddressY");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<TEnumAsByte<enum_TextureAddress>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x10
                     ,&local_38,pTVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetSourceBlock @ 14e59aff0

void __cdecl
UInterchangeTexture2DFactoryNode::execGetSourceBlock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  int local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetSourceBlock((UInterchangeTexture2DFactoryNode *)param_1,local_res10[0],pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSourceBlockByCoordinates @ 14e59b0f0

void __cdecl
UInterchangeTexture2DFactoryNode::execGetSourceBlockByCoordinates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int local_res10 [2];
  int local_res18 [2];
  FString local_28;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  pFVar4 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = UE::TextureUtilitiesCommon::GetUDIMIndex(local_res18[0],local_res10[0]);
  bVar2 = GetSourceBlock((UInterchangeTexture2DFactoryNode *)param_1,iVar3,pFVar4);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSourceBlocks @ 14e59b240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeTexture2DFactoryNode::execGetSourceBlocks
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator> local_68
  ;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<int,FString>::ToMap
            ((TMapAttributeHelper<int,FString> *)&param_1[0x1c].field_0x20,
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

// execSetCustomAddressX @ 14e59f2f0

void __cdecl
UInterchangeTexture2DFactoryNode::execSetCustomAddressX
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar uVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  UClass *pUVar7;
  bool bVar8;
  uchar local_res8 [8];
  uchar local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  uVar3 = local_res8[0];
  bVar8 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".SetAddressX");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = uVar3;
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1c),
                     local_res10,None);
  if ((EVar6 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)(param_1 + 0x1c));
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar6,&local_78,(FAttributeKey *)&local_48);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (bVar8) {
      ::FName::FName(&local_res20,L"AddressX");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,(FString *)(param_1 + 0x1c)
                );
      pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)(param_1 + 0x1c),pUVar7,
                 local_res20);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execSetCustomAddressY @ 14e59f530

void __cdecl
UInterchangeTexture2DFactoryNode::execSetCustomAddressY
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar uVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  UClass *pUVar7;
  bool bVar8;
  uchar local_res8 [8];
  uchar local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  uVar3 = local_res8[0];
  bVar8 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".SetAddressY");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = uVar3;
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x10
                     ,local_res10,None);
  if ((EVar6 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)&param_1[0x1c].field_0x10);
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar6,&local_78,(FAttributeKey *)&local_48);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (bVar8) {
      ::FName::FName(&local_res20,L"AddressY");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,
                 (FString *)&param_1[0x1c].field_0x10);
      pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)&param_1[0x1c].field_0x10,pUVar7,
                 local_res20);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execSetSourceBlock @ 14e5b4e20

void __cdecl
UInterchangeTexture2DFactoryNode::execSetSourceBlock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint local_res8 [2];
  uint local_res10 [2];
  FString local_18;
  
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
  local_res10[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<int,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<int,FString> *)&param_1[0x1c].field_0x20,local_res8[0],
             (int *)local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSourceBlockByCoordinates @ 14e5b4f10

void __cdecl
UInterchangeTexture2DFactoryNode::execSetSourceBlockByCoordinates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  int local_res10 [4];
  uint local_res20 [2];
  FString local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = UE::TextureUtilitiesCommon::GetUDIMIndex(local_res10[0],local_res8[0]);
  UE::Interchange::TMapAttributeHelper<int,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<int,FString> *)&param_1[0x1c].field_0x20,local_res20[0],
             (int *)local_res20,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSourceBlocks @ 14e5b5040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeTexture2DFactoryNode::execSetSourceBlocks
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
           local_78;
  if ((TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)0x0) {
    pTVar3 = (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<int,FString>::operator=
            ((TMapAttributeHelper<int,FString> *)&param_1[0x1c].field_0x20,pTVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

