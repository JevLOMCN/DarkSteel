// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 12

// StaticClass @ 14e700fc0

UClass * __cdecl UInterchangeImageWrapperTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeImageWrapperTranslator",
               &Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeImageWrapperTranslator,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeImageWrapperTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeImageWrapperTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton;
}

// UInterchangeImageWrapperTranslator @ 14e708780

UInterchangeImageWrapperTranslator * __thiscall
UInterchangeImageWrapperTranslator::UInterchangeImageWrapperTranslator
          (UInterchangeImageWrapperTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// UInterchangeImageWrapperTranslator @ 14e7087c0

UInterchangeImageWrapperTranslator * __thiscall
UInterchangeImageWrapperTranslator::UInterchangeImageWrapperTranslator
          (UInterchangeImageWrapperTranslator *this)

{
  ETextureImportPNGInfill EVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  EVar1 = UE::TextureUtilitiesCommon::GetPNGInfillSetting();
  this->PNGInfill = EVar1;
  return this;
}

// ~UInterchangeImageWrapperTranslator @ 14e709950

void __thiscall
UInterchangeImageWrapperTranslator::~UInterchangeImageWrapperTranslator
          (UInterchangeImageWrapperTranslator *this)

{
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e719f80

UClass * __cdecl UInterchangeImageWrapperTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeImageWrapperTranslator",
               &Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeImageWrapperTranslator,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeImageWrapperTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeImageWrapperTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e71b840

EInterchangeTranslatorAssetType __thiscall
UInterchangeImageWrapperTranslator::GetSupportedAssetTypes(UInterchangeImageWrapperTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71bc20

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeImageWrapperTranslator::GetSupportedFormats
          (UInterchangeImageWrapperTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  if ((GInterchangeEnablePNGImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"png;Portable Network Graphic");
  }
  if ((GInterchangeEnableBMPImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"bmp;Bitmap image");
  }
  if ((GInterchangeEnableEXRImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"exr;OpenEXR image");
  }
  if ((GInterchangeEnableHDRImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"hdr;High Dynamic Range image");
  }
  if ((GInterchangeEnableTIFFImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"tif;Tag Image File Format");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"tiff;Tag Image File Format");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"tx;Tag Image File Format");
  }
  if ((GInterchangeEnableTGAImport != false) || (GIsAutomationTesting != false)) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       L"tga;Targa image");
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e71d950

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeImageWrapperTranslator::GetTexturePayloadData
          (UInterchangeImageWrapperTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  void *_Src;
  bool bVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::IsTranslatorValid
                    ((UInterchangeTranslatorBase *)&this[-1]._padding_,L"ImageWrapper");
  if (bVar1) {
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    _Src = *(void **)(this[-1]._padding_ + 0x28);
    local_30 = *(int *)(this[-1]._padding_ + 0x30);
    lVar3 = (longlong)local_30;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar3 * 2);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_30 != 0) {
      FVar2.Data = local_38.Data;
    }
    bVar1 = FFileHelper::LoadFileToArray(&local_28,(wchar_t *)FVar2.Data,0);
    if (bVar1) {
      GetTexturePayloadDataFromBuffer
                ((UInterchangeImageWrapperTranslator *)&this[-1]._padding_,__return_storage_ptr__,
                 &local_28);
    }
    else {
      if (1 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      __return_storage_ptr__->bIsSet = false;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadDataFromBuffer @ 14e71e020

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeImageWrapperTranslator::GetTexturePayloadDataFromBuffer
          (UInterchangeImageWrapperTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ETextureImportPNGInfill EVar3;
  FScriptContainerElement *pFVar4;
  long64 lVar5;
  FName FVar6;
  code *pcVar7;
  FUniqueBuffer FVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  ETextureSourceFormat EVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  FBufferOwner *pFVar16;
  TOptional<UE::Interchange::FImportImage> *pTVar17;
  FBufferOwner *pFVar18;
  int iVar19;
  TextureMipGenSettings TVar20;
  uchar *puVar21;
  FUniqueBuffer local_res10;
  FUniqueBuffer local_res18;
  FName local_res20;
  FImage local_198;
  FImportImage local_168;
  FMipMapImage local_f8;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FImageView local_68;
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  lVar5 = param_1->ArrayNum;
  pFVar14 = ::FName::FName(&local_res20,"ImageWrapper");
  FVar6 = *pFVar14;
  this_00 = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this_00,FVar6);
  cVar9 = (**(code **)((longlong)*pIVar15 + 0x60))(pIVar15,pFVar4,lVar5);
  local_168.bSRGB = true;
  local_168._padding_ = (longlong)&___7FImportImage_Interchange_UE__6B_;
  local_168.RawDataCompressionFormat = TSCF_None;
  local_168.Format = TSF_Invalid;
  local_168.CompressionSettings = TC_Default;
  local_168.NumMips = 0;
  local_168.RawData.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_168.SizeX = 0;
  local_168.SizeY = 0;
  local_168.MipGenSettings.bIsSet = false;
  local_168.TextureCreatorApplicationMetadata.bIsSet = false;
  if (cVar9 == -1) goto LAB_14e71e74c;
  if ((GInterchangeEnableMipMapImageImport != false) && (cVar9 == '\t')) {
    pFVar18 = (FBufferOwner *)0x0;
    local_f8.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.RawData.ArrayNum = 0;
    local_f8.SubImages.ArrayNum = 0;
    local_f8.SubImages.ArrayMax = 0;
    local_f8.RawData.ArrayMax = 0;
    local_f8.SubImages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Format = BGRA8;
    local_f8.GammaSpace = sRGB;
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    local_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    local_a8 = (wchar_t *)0x0;
    local_a0 = 0;
    cVar9 = (**(code **)((longlong)*pIVar15 + 0x48))(pIVar15,pFVar4,lVar5,&local_f8);
    if (cVar9 != '\0') {
      bVar10 = UE::TextureUtilitiesCommon::AutoDetectAndChangeGrayScale<FMipMapImage>(&local_f8);
      if ((bVar10) && (3 < (byte)LogInterchangeImport._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      EVar13 = FImageCoreUtils::ConvertToTextureSourceFormat(local_f8.Format);
      bVar10 = local_f8.GammaSpace != Linear;
      FMipMapImage::GetMipImage(&local_f8,&local_68,0);
      local_168.SizeY = local_68._padding_._4_4_;
      local_168.SizeX = (undefined4)local_68._padding_;
      local_168.Format = EVar13;
      local_168.bSRGB = bVar10;
      pFVar16 = ::operator_new(0x38);
      if (pFVar16 != (FBufferOwner *)0x0) {
        pFVar16->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
        pFVar16->_padding_ =
             (longlong)
             &
             ___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
        ;
        pFVar16[1]._padding_ = (longlong)local_f8.RawData.AllocatorInstance.Data;
        local_f8.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar16[1].Data = (void *)local_f8.RawData.ArrayNum;
        pFVar16[1].Size = local_f8.RawData.ArrayMax;
        local_f8.RawData.ArrayNum = 0;
        local_f8.RawData.ArrayMax = 0;
        pFVar16->Data = (void *)pFVar16[1]._padding_;
        pFVar16->Size = (ulong64)pFVar16[1].Data;
        LOCK();
        pFVar16->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar16->ReferenceCountsAndFlags | 0x4000000000000000);
        UNLOCK();
        LOCK();
        pFVar16->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar16->ReferenceCountsAndFlags | 0x1000000000000000);
        UNLOCK();
        pFVar18 = pFVar16;
      }
      FUniqueBuffer::FUniqueBuffer(&local_res10,pFVar18);
      FVar8.Owner.Owner = local_168.RawData.Owner.Owner;
      local_168.RawData.Owner.Owner = local_res10.Owner.Owner;
      local_res10.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      if (FVar8.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)FVar8.Owner.Owner + 0x10))(FVar8.Owner.Owner);
          *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
          }
        }
      }
      FVar8.Owner.Owner = local_res10.Owner.Owner;
      if (local_res10.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_res10.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_res10.Owner.Owner + 0x10))(local_res10.Owner.Owner);
          *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
          }
        }
      }
      bVar11 = ERawImageFormat::IsHDR(local_f8.Format);
      if (((bVar11) && (local_168.CompressionSettings = TC_HDR, bVar10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("bSRGB == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeImageWrapperTranslator.cpp"
                              ,0xda,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar17 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
        return pTVar17;
      }
      local_168.NumMips = local_f8.SubImages.ArrayNum;
      local_168.MipGenSettings.TypedValue = TMGS_FromTextureGroup;
      if (1 < local_f8.SubImages.ArrayNum) {
        local_168.MipGenSettings.TypedValue = TMGS_LeaveExistingMips;
      }
      local_168.MipGenSettings.bIsSet = true;
      if (((1 < (int)local_c0) || (1 < (int)local_b0)) || (1 < (int)local_a0)) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        iVar19 = (int)local_c0 + -1;
        if ((int)local_c0 == 0) {
          iVar19 = 0;
        }
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        ::FString::AssignRange(&local_98,local_c8,iVar19);
        iVar19 = (int)local_b0 + -1;
        if ((int)local_b0 == 0) {
          iVar19 = 0;
        }
        ::FString::AssignRange(&local_88,local_b8,iVar19);
        TVar20 = (int)local_a0 - TMGS_SimpleAverage;
        if ((int)local_a0 == 0) {
          TVar20 = TMGS_FromTextureGroup;
        }
        ::FString::AssignRange(&local_78,local_a8,TVar20);
        if (local_168.TextureCreatorApplicationMetadata.bIsSet != false) {
          if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
                          Data.AllocatorInstance.Data);
          }
          if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.
                          Data.AllocatorInstance.Data);
          }
          if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
                          Data.AllocatorInstance.Data);
          }
        }
        ::FString::FString((FString *)&local_168.TextureCreatorApplicationMetadata,&local_98);
        ::FString::FString(&local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationName,
                           &local_88);
        ::FString::FString(&local_168.TextureCreatorApplicationMetadata.TypedValue.
                            ApplicationVersion,&local_78);
        local_168.TextureCreatorApplicationMetadata.bIsSet = true;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_f8.SubImages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.SubImages.AllocatorInstance.Data);
    }
    if (local_f8.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.RawData.AllocatorInstance.Data);
    }
    goto LAB_14e71e74c;
  }
  local_198._padding_ = 0;
  local_198._padding_._0_4_ = 0;
  local_198.RawData.ArrayMax = 0;
  local_198._padding_._4_2_ = 0x201;
  local_198.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.RawData.ArrayNum = 0;
  cVar12 = (**(code **)((longlong)*pIVar15 + 0x50))(pIVar15,pFVar4,lVar5);
  if (cVar12 != '\0') {
    bVar10 = UE::TextureUtilitiesCommon::AutoDetectAndChangeGrayScale<FImage>(&local_198);
    if ((bVar10) && (3 < (byte)LogInterchangeImport._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    }
    EVar13 = FImageCoreUtils::ConvertToTextureSourceFormat(local_198._padding_._4_1_);
    bVar10 = local_198._padding_._5_1_ != '\0';
    local_168._32_8_ = local_198._padding_;
    local_168.NumMips = 1;
    local_168.Format = EVar13;
    local_168.bSRGB = bVar10;
    pFVar18 = ::operator_new(0x38);
    if (pFVar18 == (FBufferOwner *)0x0) {
      pFVar18 = (FBufferOwner *)0x0;
    }
    else {
      pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
      pFVar18->_padding_ =
           (longlong)
           &___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
      ;
      pFVar18[1]._padding_ = (longlong)local_198.RawData.AllocatorInstance.Data;
      local_198.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar18[1].Data = (void *)local_198.RawData.ArrayNum;
      pFVar18[1].Size = local_198.RawData.ArrayMax;
      local_198.RawData.ArrayNum = 0;
      local_198.RawData.ArrayMax = 0;
      pFVar18->Data = (void *)pFVar18[1]._padding_;
      pFVar18->Size = (ulong64)pFVar18[1].Data;
      LOCK();
      pFVar18->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
      UNLOCK();
      LOCK();
      pFVar18->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
      UNLOCK();
    }
    FUniqueBuffer::FUniqueBuffer(&local_res18,pFVar18);
    FVar8.Owner.Owner = local_168.RawData.Owner.Owner;
    local_168.RawData.Owner.Owner = local_res18.Owner.Owner;
    local_res18.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    if (FVar8.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)FVar8.Owner.Owner + 0x10))(FVar8.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
        }
      }
    }
    FVar8.Owner.Owner = local_res18.Owner.Owner;
    if (local_res18.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_res18.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_res18.Owner.Owner + 0x10))(local_res18.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
        }
      }
    }
    bVar11 = ERawImageFormat::IsHDR(local_198._padding_._4_1_);
    if (((bVar11) && (local_168.CompressionSettings = TC_HDR, bVar10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bSRGB == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeImageWrapperTranslator.cpp"
                            ,0x111,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
      return pTVar17;
    }
    FVar8.Owner.Owner = local_168.RawData.Owner.Owner;
    if (cVar9 == '\0') {
      EVar3 = this->PNGInfill;
      if (EVar3 != Never) {
        if (local_168.RawData.Owner.Owner == (FBufferOwner *)0x0) {
          puVar21 = (uchar *)0x0;
        }
        else {
          if (((ulonglong)
               *(atomic<unsigned___int64> *)((longlong)local_168.RawData.Owner.Owner + 0x18) >> 0x3c
              & 4) == 0) {
            (**(code **)(*(longlong *)local_168.RawData.Owner.Owner + 8))
                      (local_168.RawData.Owner.Owner);
          }
          puVar21 = *(void **)((longlong)FVar8.Owner.Owner + 8);
        }
        UE::TextureUtilitiesCommon::FillZeroAlphaPNGData
                  (local_168.SizeX,local_168.SizeY,local_168.Format,puVar21,EVar3 == Always);
      }
    }
    else if (cVar9 == '\a') {
      if (pFVar4[1] == (FScriptContainerElement)0x1) {
        bVar10 = pFVar4[2] == (FScriptContainerElement)0x1;
LAB_14e71e70f:
        if ((!bVar10) || (pFVar4[0x10] != (FScriptContainerElement)0x8)) goto LAB_14e71e72b;
        local_168.CompressionSettings = TC_Grayscale;
      }
      else {
        if (pFVar4[1] == (FScriptContainerElement)0x0) {
          bVar10 = pFVar4[2] == (FScriptContainerElement)0x3;
          goto LAB_14e71e70f;
        }
LAB_14e71e72b:
        if (local_168.CompressionSettings != TC_Grayscale) goto LAB_14e71e6ed;
      }
      if (pFVar4[2] == (FScriptContainerElement)0x3) {
        local_168.bSRGB = false;
      }
    }
  }
LAB_14e71e6ed:
  if (local_198.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.RawData.AllocatorInstance.Data);
  }
LAB_14e71e74c:
  UE::Interchange::FImportImage::FImportImage(&__return_storage_ptr__->TypedValue,&local_168);
  __return_storage_ptr__->bIsSet = true;
  if (local_168.TextureCreatorApplicationMetadata.bIsSet != false) {
    if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
                    AllocatorInstance.Data);
    }
    if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                    AllocatorInstance.Data);
    }
    if (local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                    AllocatorInstance.Data);
    }
  }
  FVar8.Owner.Owner = local_168.RawData.Owner.Owner;
  if (local_168.RawData.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_168.RawData.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_168.RawData.Owner.Owner + 0x10))
                (local_168.RawData.Owner.Owner);
      *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
      }
    }
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeImageWrapperTranslator @ 14e72a520

void __cdecl
UInterchangeImageWrapperTranslator::StaticRegisterNativesUInterchangeImageWrapperTranslator(void)

{
  return;
}

// Translate @ 14e72a860

bool __thiscall
UInterchangeImageWrapperTranslator::Translate
          (UInterchangeImageWrapperTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  UInterchangeSourceData *pUVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar1 = (UInterchangeSourceData *)this->_padding_;
  local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  bVar2 = UE::Interchange::Private::GenericTextureTranslate
                    (pUVar1,param_1,(TSubclassOf<UInterchangeTextureNode> *)&local_res8.ObjectPtr);
  return bVar2;
}

// _getUObject @ 14e72c050

UObject * __thiscall
UInterchangeImageWrapperTranslator::_getUObject(UInterchangeImageWrapperTranslator *this)

{
  return (UObject *)&this[-1]._padding_;
}

