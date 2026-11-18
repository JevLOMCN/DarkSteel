// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 12

// StaticClass @ 14e700d00

UClass * __cdecl UInterchangeIESTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeIESTranslator",
               &Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeIESTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeIESTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeIESTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton;
}

// UInterchangeIESTranslator @ 14e708700

UInterchangeIESTranslator * __thiscall
UInterchangeIESTranslator::UInterchangeIESTranslator
          (UInterchangeIESTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 =
       &_vftable__for__IInterchangeTextureLightProfilePayloadInterface__;
  return this;
}

// UInterchangeIESTranslator @ 14e708740

UInterchangeIESTranslator * __thiscall
UInterchangeIESTranslator::UInterchangeIESTranslator
          (UInterchangeIESTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 =
       &_vftable__for__IInterchangeTextureLightProfilePayloadInterface__;
  return this;
}

// ~UInterchangeIESTranslator @ 14e709930

void __thiscall
UInterchangeIESTranslator::~UInterchangeIESTranslator(UInterchangeIESTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTextureLightProfilePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetLightProfilePayloadData @ 14e718ad0

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
UInterchangeIESTranslator::GetLightProfilePayloadData
          (UInterchangeIESTranslator *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)&this[-1].field_0x8,L"IES",&local_28);
  if (bVar1) {
    (**(code **)(*(longlong *)this + 0x10))
              (this,__return_storage_ptr__,local_28.AllocatorInstance.Data,
               local_28.ArrayNum & 0xffffffff);
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLightProfilePayloadData @ 14e718b50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
UInterchangeIESTranslator::GetLightProfilePayloadData
          (UInterchangeIESTranslator *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,uchar *param_1,
          uint param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  ulonglong _Size;
  FUniqueBuffer FVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uint uVar6;
  long64 lVar7;
  FUniqueBuffer FVar8;
  wchar_t *pwVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  void *_Dst;
  FUniqueBuffer FVar13;
  void *_Size_00;
  float fVar14;
  FImportImage local_128;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  long64 local_a8;
  long64 lStack_a0;
  FIESConverter local_98;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  _Dst = (void *)0x0;
  local_128.bSRGB = true;
  local_128.RawData.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_128.RawDataCompressionFormat = TSCF_None;
  local_128.Format = TSF_Invalid;
  local_128.CompressionSettings = TC_Default;
  local_128.NumMips = 0;
  local_128.SizeX = 0;
  local_128.SizeY = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_128.MipGenSettings.bIsSet = false;
  local_128.TextureCreatorApplicationMetadata.bIsSet = false;
  local_128._padding_ = (longlong)&___7FImportLightProfile_Interchange_UE__6B_;
  local_b8 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  _Size = (ulonglong)param_2;
  if (param_2 != 0) {
    lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,_Size,&local_b0,&local_a8,&lStack_a0);
    memset(local_b0.Data + lVar7,0,_Size);
  }
  memcpy(local_b0.Data,param_1,_Size);
  FIESConverter::FIESConverter(&local_98,(uchar *)local_b0.Data,(uint)local_a8);
  bVar5 = FIESConverter::IsValid(&local_98);
  if (bVar5) {
    uVar6 = FIESConverter::GetHeight(&local_98);
    local_128.SizeX = FIESConverter::GetWidth(&local_98);
    local_128.SizeY = uVar6;
    local_128.NumMips = 1;
    local_128.Format = TSF_RGBA16F;
    local_128.bSRGB = false;
    if (*(code **)(local_128._padding_ + 0x10) == UE::Interchange::FImportImage::ComputeBufferSize)
    {
      UE::Interchange::FImportImage::ComputeBufferSize(&local_128);
    }
    else {
      (**(code **)(local_128._padding_ + 0x10))();
    }
    FVar8 = FUniqueBuffer::Alloc((ulong64)&local_70);
    FVar4.Owner.Owner = local_128.RawData.Owner.Owner;
    FVar13.Owner.Owner =
         *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar8.Owner.Owner;
    *(undefined8 *)FVar8.Owner.Owner = 0;
    if (local_128.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_128.RawData.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        lVar3 = *(longlong *)local_128.RawData.Owner.Owner;
        local_128.RawData.Owner.Owner = FVar13.Owner.Owner;
        (**(code **)(lVar3 + 0x10))(FVar4.Owner.Owner);
        *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
          FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
        }
      }
    }
    local_128.RawData.Owner.Owner = FVar13.Owner.Owner;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_70);
    local_128.CompressionSettings = TC_HDR;
    fVar14 = FIESConverter::GetBrightness(&local_98);
    FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
    local_b8 = CONCAT44(local_98.Multiplier,fVar14);
    _Size_00 = _Dst;
    if (local_128.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_128.RawData.Owner.Owner + 0x18)
           >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_128.RawData.Owner.Owner + 8))(local_128.RawData.Owner.Owner)
        ;
      }
      _Size_00 = *(void **)((longlong)FVar13.Owner.Owner + 0x10);
    }
    _Src.Data = local_98.RawData.AllocatorInstance.Data;
    FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
    if (local_128.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_128.RawData.Owner.Owner + 0x18)
           >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_128.RawData.Owner.Owner + 8))(local_128.RawData.Owner.Owner)
        ;
      }
      _Dst = *(void **)((longlong)FVar13.Owner.Owner + 8);
    }
    memcpy(_Dst,_Src.Data,(size_t)_Size_00);
    UE::Interchange::FImportImage::FImportImage((FImportImage *)__return_storage_ptr__,&local_128);
    (__return_storage_ptr__->TypedValue)._padding_ =
         (longlong)&___7FImportLightProfile_Interchange_UE__6B_;
    (__return_storage_ptr__->TypedValue).SourceDataBuffer.AllocatorInstance.Data = local_b0.Data;
    (__return_storage_ptr__->TypedValue).Brightness = (float)local_b8;
    (__return_storage_ptr__->TypedValue).TextureMultiplier = local_b8._4_4_;
    (__return_storage_ptr__->TypedValue).SourceDataBuffer.ArrayNum = local_a8;
    (__return_storage_ptr__->TypedValue).SourceDataBuffer.ArrayMax = lStack_a0;
    __return_storage_ptr__->bIsSet = true;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    lStack_a0 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.Impl.SharedReferenceCount.ReferenceController);
    if (local_98.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.RawData.AllocatorInstance.Data);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_128.TextureCreatorApplicationMetadata.bIsSet != false) {
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
                      .AllocatorInstance.Data);
      }
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                      AllocatorInstance.Data);
      }
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                      AllocatorInstance.Data);
      }
    }
    FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
    if (local_128.RawData.Owner.Owner == (FBufferOwner *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_128.RawData.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) != 1) {
      return __return_storage_ptr__;
    }
    (**(code **)(*(longlong *)local_128.RawData.Owner.Owner + 0x10))(local_128.RawData.Owner.Owner);
  }
  else {
    pwVar9 = FIESConverter::GetError(&local_98);
    pFVar10 = FText::FromString(&local_50,pwVar9);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_60,L"InterchangeIESTranslator",L"IESImportFailure_Generic",
                         L"IES import failed: \"{0}\"");
    pFVar12 = FTextFormat::FTextFormat(&local_40,pFVar11,Default);
    pFVar10 = FText::Format<FText>(&local_70,pFVar12,pFVar10);
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)&this[-1].field_0x8,pFVar10);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)(*(longlong *)&(local_70.TextData.Reference)->field_0x0 + 0x10))();
    }
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    __return_storage_ptr__->bIsSet = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.Impl.SharedReferenceCount.ReferenceController);
    if (local_98.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.RawData.AllocatorInstance.Data);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_128.TextureCreatorApplicationMetadata.bIsSet != false) {
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
                      .AllocatorInstance.Data);
      }
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                      AllocatorInstance.Data);
      }
      if (local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                      AllocatorInstance.Data);
      }
    }
    FVar13.Owner.Owner = local_128.RawData.Owner.Owner;
    if (local_128.RawData.Owner.Owner == (FBufferOwner *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_128.RawData.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) != 1) {
      return __return_storage_ptr__;
    }
    (**(code **)(*(longlong *)local_128.RawData.Owner.Owner + 0x10))(local_128.RawData.Owner.Owner);
  }
  ((FBufferOwner *)FVar13.Owner.Owner)->Data = (void *)0x0;
  ((FBufferOwner *)FVar13.Owner.Owner)->Size = 0;
  LOCK();
  paVar1 = &((FBufferOwner *)FVar13.Owner.Owner)->ReferenceCountsAndFlags;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
  UNLOCK();
  if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
    (**(code **)((FBufferOwner *)FVar13.Owner.Owner)->_padding_)(FVar13.Owner.Owner,1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e719ec0

UClass * __cdecl UInterchangeIESTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeIESTranslator",
               &Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeIESTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeIESTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeIESTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeIESTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e71b830

EInterchangeTranslatorAssetType __thiscall
UInterchangeIESTranslator::GetSupportedAssetTypes(UInterchangeIESTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71bb20

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeIESTranslator::GetSupportedFormats
          (UInterchangeIESTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((!GInterchangeEnableIESImport) && (!GIsAutomationTesting)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,L"ies;IES light profile");
  local_20 = CONCAT44(local_20._4_4_,1);
  local_28.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = (int)local_20;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeIESTranslator @ 14e72a510

void __cdecl UInterchangeIESTranslator::StaticRegisterNativesUInterchangeIESTranslator(void)

{
  return;
}

// Translate @ 14e72a800

bool __thiscall
UInterchangeIESTranslator::Translate
          (UInterchangeIESTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  UInterchangeSourceData *pUVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar1 = *(UInterchangeSourceData **)&this->field_0x30;
  local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  bVar2 = UE::Interchange::Private::GenericTextureTranslate
                    (pUVar1,param_1,(TSubclassOf<UInterchangeTextureNode> *)&local_res8.ObjectPtr);
  return bVar2;
}

// _getUObject @ 14e72c040

UObject * __thiscall UInterchangeIESTranslator::_getUObject(UInterchangeIESTranslator *this)

{
  return (UObject *)&this[-1].field_0x8;
}

