// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 11

// StaticClass @ 14e701300

UClass * __cdecl UInterchangePSDTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangePSDTranslator",
               &Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangePSDTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangePSDTranslator>,
               InternalVTableHelperCtorCaller<UInterchangePSDTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton;
}

// UInterchangePSDTranslator @ 14e7089b0

UInterchangePSDTranslator * __thiscall
UInterchangePSDTranslator::UInterchangePSDTranslator
          (UInterchangePSDTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// UInterchangePSDTranslator @ 14e7089f0

UInterchangePSDTranslator * __thiscall
UInterchangePSDTranslator::UInterchangePSDTranslator
          (UInterchangePSDTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// ~UInterchangePSDTranslator @ 14e7099f0

void __thiscall
UInterchangePSDTranslator::~UInterchangePSDTranslator(UInterchangePSDTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e71a340

UClass * __cdecl UInterchangePSDTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangePSDTranslator",
               &Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangePSDTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangePSDTranslator>,
               InternalVTableHelperCtorCaller<UInterchangePSDTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePSDTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e71b860

EInterchangeTranslatorAssetType __thiscall
UInterchangePSDTranslator::GetSupportedAssetTypes(UInterchangePSDTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71c0c0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangePSDTranslator::GetSupportedFormats
          (UInterchangePSDTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((!GInterchangeEnablePSDImport) && (!GIsAutomationTesting)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,L"psd;Photoshop Document");
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

// GetTexturePayloadData @ 14e71db30

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangePSDTranslator::GetTexturePayloadData
          (UInterchangePSDTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned___int64> aVar3;
  FUniqueBuffer FVar4;
  longlong lVar5;
  FUniqueBuffer FVar6;
  bool bVar7;
  FUniqueBuffer FVar8;
  longlong *plVar9;
  FText *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  TMemoryView<void> local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FPSDFileHeader local_d0;
  FImportImage local_a8;
  TMemoryView<void_const_> local_38;
  
  puVar1 = &this[-1].field_0x8;
  local_e8.ArrayMax = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  bVar7 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)puVar1,L"PSD",&local_e8);
  if ((bVar7) && (0x19 < (ulonglong)local_e8.ArrayNum)) {
    local_d0.Signature =
         (((uint)(byte)*local_e8.AllocatorInstance.Data * 0x100 +
          (uint)(byte)local_e8.AllocatorInstance.Data[1]) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[2]) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[3];
    local_d0.nChannels =
         (ushort)(byte)local_e8.AllocatorInstance.Data[0xc] * 0x100 +
         (ushort)(byte)local_e8.AllocatorInstance.Data[0xd];
    local_d0.Version =
         (ushort)(byte)local_e8.AllocatorInstance.Data[5] +
         (ushort)(byte)local_e8.AllocatorInstance.Data[4] * 0x100;
    local_d0.Depth =
         (ushort)(byte)local_e8.AllocatorInstance.Data[0x17] +
         (ushort)(byte)local_e8.AllocatorInstance.Data[0x16] * 0x100;
    local_d0.Height =
         (((uint)(byte)local_e8.AllocatorInstance.Data[0xe] * 0x100 +
          (uint)(byte)local_e8.AllocatorInstance.Data[0xf]) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[0x10]) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[0x11];
    local_d0.Width =
         (((uint)(byte)local_e8.AllocatorInstance.Data[0x13] +
          (uint)(byte)local_e8.AllocatorInstance.Data[0x12] * 0x100) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[0x14]) * 0x100 +
         (uint)(byte)local_e8.AllocatorInstance.Data[0x15];
    local_d0.Mode =
         (ushort)(byte)local_e8.AllocatorInstance.Data[0x19] +
         (ushort)(byte)local_e8.AllocatorInstance.Data[0x18] * 0x100;
    if (local_d0.Signature != 0x38425053) {
      __return_storage_ptr__->bIsSet = false;
      goto LAB_14e71df63;
    }
    if ((((local_d0.Version != 1) || ((local_d0.nChannels - 1U & 0xfffc) != 0)) ||
        (local_d0.nChannels == 2)) ||
       (((local_d0.Depth != 8 && (local_d0.Depth != 0x10)) || ((local_d0.Mode - 1U & 0xfffd) != 0)))
       ) {
      pwVar12 = 
      L"Format of this PSD is not supported. Only Grayscale and RGBColor PSD images are currently supported, in 8-bit or 16-bit."
      ;
      pwVar11 = L"UnsupportedFormat";
LAB_14e71df29:
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_f8,L"InterchangePSDTranslator",pwVar11,pwVar12);
      UE::Interchange::FTextureTranslatorUtilities::LogError
                ((UInterchangeTranslatorBase *)puVar1,pFVar10);
      if (local_f8.Data != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_f8.Data + 0x10))();
      }
      goto LAB_14e71df55;
    }
    if (local_d0.Depth == 8) {
      local_a8.Format = TSF_BGRA8;
    }
    else {
      if (local_d0.Depth != 0x10) {
        pwVar12 = L"This PSD file contains data in an unsupported pixel format.";
        pwVar11 = L"UnsupportedPixelFormat";
        goto LAB_14e71df29;
      }
      local_a8.Format = TSF_RGBA16;
    }
    plVar9 = (longlong *)0x0;
    local_a8.RawData.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_a8._padding_ = (longlong)&___7FImportImage_Interchange_UE__6B_;
    local_a8.RawDataCompressionFormat = TSCF_None;
    local_a8.CompressionSettings = TC_Default;
    local_a8.MipGenSettings.bIsSet = false;
    local_a8.TextureCreatorApplicationMetadata.bIsSet = false;
    local_a8.NumMips = 1;
    local_a8.bSRGB = true;
    local_a8.SizeX = local_d0.Width;
    local_a8.SizeY = local_d0.Height;
    UE::Interchange::FImportImage::ComputeBufferSize(&local_a8);
    FVar8 = FUniqueBuffer::Alloc((ulong64)&local_res8);
    FVar6.Owner.Owner = local_a8.RawData.Owner.Owner;
    FVar4.Owner.Owner = *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar8.Owner.Owner
    ;
    *(undefined8 *)FVar8.Owner.Owner = 0;
    if (local_a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_a8.RawData.Owner.Owner + 0x18);
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar3._0_4_ & 0x3fffffff) == 1) {
        lVar5 = *(longlong *)local_a8.RawData.Owner.Owner;
        local_a8.RawData.Owner.Owner = FVar4.Owner.Owner;
        (**(code **)(lVar5 + 0x10))(FVar6.Owner.Owner);
        *(void **)((longlong)FVar6.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar6.Owner.Owner + 0x18);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        FVar4.Owner.Owner = local_a8.RawData.Owner.Owner;
        if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar6.Owner.Owner)(FVar6.Owner.Owner,1);
          FVar4.Owner.Owner = local_a8.RawData.Owner.Owner;
        }
      }
    }
    local_a8.RawData.Owner.Owner = FVar4.Owner.Owner;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    FVar4.Owner.Owner = local_a8.RawData.Owner.Owner;
    local_f8.Size = (ulong64)plVar9;
    if (local_a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a8.RawData.Owner.Owner + 0x18)
           >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_a8.RawData.Owner.Owner + 8))(local_a8.RawData.Owner.Owner);
      }
      FVar6.Owner.Owner = local_a8.RawData.Owner.Owner;
      local_f8.Size = *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10);
      if (local_a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a8.RawData.Owner.Owner + 0x18)
             >> 0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_a8.RawData.Owner.Owner + 8))(local_a8.RawData.Owner.Owner)
          ;
        }
        plVar9 = *(void **)((longlong)FVar6.Owner.Owner + 8);
      }
    }
    local_38.Data = local_e8.AllocatorInstance.Data;
    local_38.Size = local_e8.ArrayNum;
    local_f8.Data = plVar9;
    bVar7 = UE::Interchange::Private::ReadData(&local_f8,&local_38,&local_d0);
    if (bVar7) {
      UE::Interchange::FImportImage::FImportImage(&__return_storage_ptr__->TypedValue,&local_a8);
      __return_storage_ptr__->bIsSet = true;
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_f8,L"InterchangePSDTranslator",L"FailedRead",
                           L"Failed to read this PSD.");
      UE::Interchange::FTextureTranslatorUtilities::LogError
                ((UInterchangeTranslatorBase *)puVar1,pFVar10);
      if (local_f8.Data != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_f8.Data + 0x10))();
      }
      __return_storage_ptr__->bIsSet = false;
    }
    if (local_a8.TextureCreatorApplicationMetadata.bIsSet != false) {
      if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
                      AllocatorInstance.Data);
      }
      if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                      AllocatorInstance.Data);
      }
      if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                      AllocatorInstance.Data);
      }
    }
    FVar4.Owner.Owner = local_a8.RawData.Owner.Owner;
    if (local_a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_a8.RawData.Owner.Owner + 0x18);
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar3._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_a8.RawData.Owner.Owner + 0x10))
                  (local_a8.RawData.Owner.Owner);
        *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
        }
      }
    }
  }
  else {
LAB_14e71df55:
    __return_storage_ptr__->bIsSet = false;
  }
  if (local_e8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
LAB_14e71df63:
  FMemory::Free(local_e8.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangePSDTranslator @ 14e72a570

void __cdecl UInterchangePSDTranslator::StaticRegisterNativesUInterchangePSDTranslator(void)

{
  return;
}

// Translate @ 14e72a920

bool __thiscall
UInterchangePSDTranslator::Translate
          (UInterchangePSDTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  UInterchangeSourceData *pUVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar1 = *(UInterchangeSourceData **)&this->field_0x30;
  local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  bVar2 = UE::Interchange::Private::GenericTextureTranslate
                    (pUVar1,param_1,(TSubclassOf<UInterchangeTextureNode> *)&local_res8.ObjectPtr);
  return bVar2;
}

// _getUObject @ 14e72c070

UObject * __thiscall UInterchangePSDTranslator::_getUObject(UInterchangePSDTranslator *this)

{
  return (UObject *)&this[-1].field_0x8;
}

