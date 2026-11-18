// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 14

// StaticClass @ 14e700040

UClass * __cdecl UInterchangeDDSTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeDDSTranslator",
               &Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeDDSTranslator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeDDSTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeDDSTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton;
}

// UInterchangeDDSTranslator @ 14e7085c0

UInterchangeDDSTranslator * __thiscall
UInterchangeDDSTranslator::UInterchangeDDSTranslator
          (UInterchangeDDSTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IInterchangeSlicedTexturePayloadInterface__;
  return this;
}

// UInterchangeDDSTranslator @ 14e708600

UInterchangeDDSTranslator * __thiscall
UInterchangeDDSTranslator::UInterchangeDDSTranslator
          (UInterchangeDDSTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IInterchangeSlicedTexturePayloadInterface__;
  return this;
}

// ~UInterchangeDDSTranslator @ 14e7098c0

void __thiscall
UInterchangeDDSTranslator::~UInterchangeDDSTranslator(UInterchangeDDSTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x50 = &___7IInterchangeSlicedTexturePayloadInterface__6B_;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// CanImportSourceData @ 14e7108e0

bool __thiscall
UInterchangeDDSTranslator::CanImportSourceData
          (UInterchangeDDSTranslator *this,UInterchangeSourceData *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  longlong lVar2;
  FString local_res18;
  FString local_18;
  
  bVar1 = UInterchangeTranslatorBase::CanImportSourceData
                    ((UInterchangeTranslatorBase *)this,param_1);
  if (!bVar1) {
    return false;
  }
  local_18.Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Filename).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  bVar1 = FPaths::FileExists(&local_18);
  if (!bVar1) {
    bVar1 = false;
    goto LAB_14e7109f4;
  }
  UE::Interchange::Private::InterchangeDDSTranslator::CreateDDSFileReader
            (&local_res18,SUB81(&local_18,0));
  if ((FDDSFile *)local_res18.Data.AllocatorInstance.Data == (FDDSFile *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = UE::DDS::FDDSFile::IsValidTexture2D((FDDSFile *)local_res18.Data.AllocatorInstance.Data)
    ;
    if (!bVar1) {
      bVar1 = UE::DDS::FDDSFile::IsValidTextureCube
                        ((FDDSFile *)local_res18.Data.AllocatorInstance.Data);
      if (!bVar1) {
        bVar1 = UE::DDS::FDDSFile::IsValidTextureArray
                          ((FDDSFile *)local_res18.Data.AllocatorInstance.Data);
        if (!bVar1) {
          bVar1 = UE::DDS::FDDSFile::IsValidTextureVolume
                            ((FDDSFile *)local_res18.Data.AllocatorInstance.Data);
          if (!bVar1) {
            bVar1 = false;
            goto LAB_14e7109c6;
          }
        }
      }
    }
    bVar1 = true;
  }
LAB_14e7109c6:
  if ((FDDSFile *)local_res18.Data.AllocatorInstance.Data != (FDDSFile *)0x0) {
    if (*(void **)(local_res18.Data.AllocatorInstance.Data + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(local_res18.Data.AllocatorInstance.Data + 0x30));
    }
    if (*(void **)(local_res18.Data.AllocatorInstance.Data + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)(local_res18.Data.AllocatorInstance.Data + 0x20));
    }
    ::operator_delete(local_res18.Data.AllocatorInstance.Data,0x48);
  }
LAB_14e7109f4:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPrivateStaticClass @ 14e719c80

UClass * __cdecl UInterchangeDDSTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeDDSTranslator",
               &Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeDDSTranslator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeDDSTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeDDSTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDDSTranslator.InnerSingleton;
}

// GetSlicedTexturePayloadData @ 14e71acd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Interchange::FImportSlicedImage> * __thiscall
UInterchangeDDSTranslator::GetSlicedTexturePayloadData
          (UInterchangeDDSTranslator *this,
          TOptional<UE::Interchange::FImportSlicedImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned___int64> aVar3;
  uint uVar4;
  EDXGIFormat EVar5;
  void *_Src;
  FUniqueBuffer FVar6;
  code *pcVar7;
  FUniqueBuffer FVar8;
  bool bVar9;
  Type TVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  wchar_t *pwVar17;
  FUniqueBuffer FVar18;
  TOptional<UE::Interchange::FImportSlicedImage> *pTVar19;
  byte bVar20;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *this_00;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 local_1d0 [8];
  FString local_1c8;
  int local_1b8;
  uint local_1b4;
  FImportImage local_1a8;
  uint local_138;
  bool local_134;
  uint local_128;
  uint local_124;
  UInterchangeTranslatorBase *local_120;
  FImageView local_118;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_100;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_f8;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FImageView local_90;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  puVar1 = &this[-1].field_0x8;
  local_120 = (UInterchangeTranslatorBase *)puVar1;
  bVar9 = UE::Interchange::FTextureTranslatorUtilities::IsTranslatorValid
                    ((UInterchangeTranslatorBase *)puVar1,L"DDS");
  if (!bVar9) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = *(int *)(*(longlong *)&this[-1].field_0x38 + 0x30);
  lVar21 = (longlong)local_1c8.Data.ArrayNum;
  _Src = *(void **)(*(longlong *)&this[-1].field_0x38 + 0x28);
  if (local_1c8.Data.ArrayNum == 0) {
    local_1c8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)&local_1c8,local_1c8.Data.ArrayNum
               ,&local_1c8.Data.ArrayMax);
    memcpy(local_1c8.Data.AllocatorInstance.Data,_Src,lVar21 * 2);
  }
  UE::Interchange::Private::InterchangeDDSTranslator::CreateDDSFileReader
            ((FString *)local_1d0,SUB81(&local_1c8,0));
  if (local_1d0 == (undefined1  [8])0x0) {
    pFVar14 = FText::FromString(&local_78,&local_1c8);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_d0,L"InterchangeDDSTranslator",L"UnsupportedFormat",
                         L"Failed to import DDS, unsupported format. [{0}]");
    pFVar16 = FTextFormat::FTextFormat(&local_68,pFVar15,Default);
    FText::Format<FText>(&local_f0,pFVar16,pFVar14);
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)puVar1,&local_f0);
    __return_storage_ptr__->bIsSet = false;
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_1c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  bVar9 = UE::DDS::FDDSFile::IsValidTextureCube((FDDSFile *)local_1d0);
  if ((bVar9) || (bVar9 = UE::DDS::FDDSFile::IsValidTextureArray((FDDSFile *)local_1d0), bVar9)) {
    uVar4 = *(uint *)((longlong)local_1d0 + 0x14);
  }
  else {
    bVar9 = UE::DDS::FDDSFile::IsValidTextureVolume((FDDSFile *)local_1d0);
    if (!bVar9) {
      if (1 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      __return_storage_ptr__->bIsSet = false;
      if (*(void **)((longlong)local_1d0 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_1d0 + 0x30));
      }
      if (*(void **)((longlong)local_1d0 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_1d0 + 0x20));
      }
      ::operator_delete((void *)local_1d0,0x48);
      if (local_1c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    uVar4 = *(uint *)((longlong)local_1d0 + 0xc);
  }
  TVar10 = UE::DDS::DXGIFormatGetClosestRawFormat
                     (*(EDXGIFormat *)((longlong)local_1d0 + 0x18),(bool *)0x0);
  if (TVar10 == Invalid) {
    pwVar17 = UE::DDS::DXGIFormatGetName(*(EDXGIFormat *)((longlong)local_1d0 + 0x18));
    pFVar14 = FText::FromString(&local_58,pwVar17);
    EVar5 = *(EDXGIFormat *)((longlong)local_1d0 + 0x18);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_c0,L"InterchangeDDSTranslator",L"InvalidDXGIFormat",
                         L"DDS DXGIFormat not supported : {0} : {1}");
    pFVar16 = FTextFormat::FTextFormat(&local_48,pFVar15,Default);
    FText::Format<int,FText>(&local_e0,pFVar16,EVar5,pFVar14);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)puVar1,&local_e0);
    __return_storage_ptr__->bIsSet = false;
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
  }
  else {
    local_1a8.Format = FImageCoreUtils::ConvertToTextureSourceFormat(TVar10);
    local_1b4 = *(uint *)((longlong)local_1d0 + 0x10);
    if (0xf < local_1b4) {
      if (2 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      local_1b4 = 0xf;
    }
    uVar12 = local_1b4;
    local_1b8 = *(int *)local_1d0;
    local_1a8.bSRGB = false;
    bVar9 = false;
    local_1a8.RawData.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_1a8.RawDataCompressionFormat = TSCF_None;
    local_1a8.CompressionSettings = TC_Default;
    local_1a8.MipGenSettings.bIsSet = false;
    local_1a8.TextureCreatorApplicationMetadata.bIsSet = false;
    local_1a8._padding_ = (longlong)&___7FImportSlicedImage_Interchange_UE__6B_;
    local_134 = false;
    local_1a8.NumMips = uVar12;
    local_138 = uVar4;
    if (local_1b8 == 3) {
      if (TVar10 < BGRE8) {
        if ((((byte)*(FScriptContainerElement *)((longlong)local_1d0 + 0x1c) & 4) == 0) &&
           (bVar9 = UE::DDS::DXGIFormatHasLinearAndSRGBForm
                              (*(EDXGIFormat *)((longlong)local_1d0 + 0x18)), bVar9)) {
          bVar9 = UE::DDS::DXGIFormatIsSRGB(*(EDXGIFormat *)((longlong)local_1d0 + 0x18));
        }
        else {
          bVar9 = true;
        }
      }
      local_1a8.SizeY = *(int *)((longlong)local_1d0 + 8);
      local_1a8.SizeX = *(int *)((longlong)local_1d0 + 4);
      local_134 = true;
      local_1a8.bSRGB = bVar9;
      if (*(code **)(local_1a8._padding_ + 0x10) ==
          UE::Interchange::FImportSlicedImage::ComputeBufferSize) {
        UE::Interchange::FImportImage::ComputeBufferSize(&local_1a8);
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x10))();
      }
      FVar18 = FUniqueBuffer::Alloc((ulong64)&local_100);
      FVar8.Owner.Owner = local_1a8.RawData.Owner.Owner;
      FVar6.Owner.Owner =
           *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar18.Owner.Owner;
      *(undefined8 *)FVar18.Owner.Owner = 0;
      if (local_1a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)local_1a8.RawData.Owner.Owner + 0x18);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
        UNLOCK();
        if ((aVar3._0_4_ & 0x3fffffff) == 1) {
          lVar21 = *(longlong *)local_1a8.RawData.Owner.Owner;
          local_1a8.RawData.Owner.Owner = FVar6.Owner.Owner;
          (**(code **)(lVar21 + 0x10))(FVar8.Owner.Owner);
          *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar2 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
          aVar3 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
          UNLOCK();
          FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
          if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner);
            FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
          }
        }
      }
      local_1a8.RawData.Owner.Owner = FVar6.Owner.Owner;
      this_00 = &local_100;
    }
    else {
      if (TVar10 < BGRE8) {
        if ((((byte)*(FScriptContainerElement *)((longlong)local_1d0 + 0x1c) & 4) == 0) &&
           (bVar9 = UE::DDS::DXGIFormatHasLinearAndSRGBForm
                              (*(EDXGIFormat *)((longlong)local_1d0 + 0x18)), bVar9)) {
          local_1a8.bSRGB = UE::DDS::DXGIFormatIsSRGB(*(EDXGIFormat *)((longlong)local_1d0 + 0x18));
        }
        else {
          local_1a8.bSRGB = true;
        }
      }
      local_1a8.SizeY = *(int *)((longlong)local_1d0 + 8);
      local_1a8.SizeX = *(int *)((longlong)local_1d0 + 4);
      if (*(code **)(local_1a8._padding_ + 0x10) ==
          UE::Interchange::FImportSlicedImage::ComputeBufferSize) {
        UE::Interchange::FImportImage::ComputeBufferSize(&local_1a8);
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x10))();
      }
      FVar18 = FUniqueBuffer::Alloc((ulong64)&local_f8);
      FVar8.Owner.Owner = local_1a8.RawData.Owner.Owner;
      FVar6.Owner.Owner =
           *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar18.Owner.Owner;
      *(undefined8 *)FVar18.Owner.Owner = 0;
      if (local_1a8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)local_1a8.RawData.Owner.Owner + 0x18);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
        UNLOCK();
        if ((aVar3._0_4_ & 0x3fffffff) == 1) {
          lVar21 = *(longlong *)local_1a8.RawData.Owner.Owner;
          local_1a8.RawData.Owner.Owner = FVar6.Owner.Owner;
          (**(code **)(lVar21 + 0x10))(FVar8.Owner.Owner);
          *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar2 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
          aVar3 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
          UNLOCK();
          FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
          if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner);
            FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
          }
        }
      }
      local_1a8.RawData.Owner.Owner = FVar6.Owner.Owner;
      this_00 = &local_f8;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(this_00);
    uVar22 = 0;
    if (uVar12 != 0) {
      do {
        bVar9 = local_1a8.bSRGB;
        bVar20 = (byte)uVar22;
        uVar12 = *(uint *)((longlong)local_1d0 + 4) >> (bVar20 & 0x1f);
        local_128 = 1;
        if (1 < uVar12) {
          local_128 = uVar12;
        }
        uVar12 = *(uint *)((longlong)local_1d0 + 8) >> (bVar20 & 0x1f);
        local_124 = 1;
        if (1 < uVar12) {
          local_124 = uVar12;
        }
        uVar12 = uVar4;
        if (local_1b8 == 3) {
          uVar13 = uVar4 >> (bVar20 & 0x1f);
          uVar12 = 1;
          if (1 < uVar13) {
            uVar12 = uVar13;
          }
        }
        uVar13 = local_138;
        if (local_134 != false) {
          uVar13 = 1;
        }
        uVar24 = 0;
        iVar23 = 0;
        if (0 < (int)uVar22) {
          do {
            lVar21 = (**(code **)(local_1a8._padding_ + 8))();
            iVar23 = iVar23 + 1;
            uVar24 = uVar24 + lVar21 * (int)uVar13;
          } while (iVar23 < (int)uVar22);
        }
        uVar13 = local_128;
        FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
        if (local_1a8.RawData.Owner.Owner == (FBufferOwner *)0x0) {
LAB_14e71b2d6:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawData.GetSize() > uint64(Offset)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                              ,0x26,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
            return pTVar19;
          }
        }
        else {
          if (((ulonglong)
               *(atomic<unsigned___int64> *)((longlong)local_1a8.RawData.Owner.Owner + 0x18) >> 0x3c
              & 4) == 0) {
            (**(code **)(*(longlong *)local_1a8.RawData.Owner.Owner + 8))();
          }
          if (*(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10) <= uVar24) goto LAB_14e71b2d6;
        }
        FVar6.Owner.Owner = local_1a8.RawData.Owner.Owner;
        if (local_1a8.RawData.Owner.Owner == (FBufferOwner *)0x0) {
          local_118.RawData = (void *)0x0;
        }
        else {
          if (((ulonglong)
               *(atomic<unsigned___int64> *)((longlong)local_1a8.RawData.Owner.Owner + 0x18) >> 0x3c
              & 4) == 0) {
            (**(code **)(*(longlong *)local_1a8.RawData.Owner.Owner + 8))
                      (local_1a8.RawData.Owner.Owner);
          }
          local_118.RawData = *(void **)((longlong)FVar6.Owner.Owner + 8);
        }
        local_118._padding_._4_4_ = local_124;
        local_118._padding_._5_1_ = -(bVar9 != false) & 2;
        local_118.RawData = (void *)((longlong)local_118.RawData + uVar24);
        local_118._padding_._0_4_ = uVar13;
        local_118._padding_._0_4_ = uVar12;
        local_118._padding_._4_1_ = TVar10;
        if (local_1b8 == 3) {
          if ((*(uint *)((longlong)local_1d0 + 0x28) != *(uint *)((longlong)local_1d0 + 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("DDS->Mips.Num() == DDS->MipCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeDDSTranslator.cpp"
                                 ,0x1b5,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
            return pTVar19;
          }
          uVar13 = 0;
          if ((int)uVar22 < *(int *)((longlong)local_1d0 + 0x28)) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
            return pTVar19;
          }
          if ((*(uint *)(*(longlong *)((longlong)local_1d0 + 0x20) + 8 +
                        (longlong)(int)uVar22 * 0x30) != uVar12) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("DDS->Mips[MipIndex].Depth == MipNumSlices",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeDDSTranslator.cpp"
                                 ,0x1b6,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
            return pTVar19;
          }
          bVar9 = UE::DDS::FDDSFile::GetMipImage((FDDSFile *)local_1d0,&local_118,uVar22);
          if (!bVar9) {
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_b0,L"InterchangeDDSTranslator",L"InvalidPixelFormat",
                                 L"DDS could not convert pixel format");
            UE::Interchange::FTextureTranslatorUtilities::LogError(local_120,pFVar14);
            if (local_b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
            }
            __return_storage_ptr__->bIsSet = false;
            goto LAB_14e71b658;
          }
        }
        else {
          if ((*(int *)((longlong)local_1d0 + 0x28) !=
               uVar12 * *(uint *)((longlong)local_1d0 + 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("DDS->Mips.Num() == DDS->MipCount * MipNumSlices",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeDDSTranslator.cpp"
                                 ,0x1c1,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
            return pTVar19;
          }
          uVar13 = 0;
          if (uVar12 != 0) {
            do {
              FImageView::GetSlice(&local_118,&local_90,uVar13);
              bVar9 = UE::DDS::FDDSFile::GetMipImage
                                ((FDDSFile *)local_1d0,&local_90,
                                 uVar13 * *(uint *)((longlong)local_1d0 + 0x10) + uVar22);
              if (!bVar9) {
                pFVar14 = FText::AsLocalizable_Advanced_LocText
                                    (&local_a0,L"InterchangeDDSTranslator",L"FailedPixelFormat",
                                     L"DDS could not convert pixel format");
                UE::Interchange::FTextureTranslatorUtilities::LogError(local_120,pFVar14);
                if (local_a0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
                }
                __return_storage_ptr__->bIsSet = false;
                if (local_1a8.TextureCreatorApplicationMetadata.bIsSet != false) {
                  if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
                      .AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.
                                  ApplicationVersion.Data.AllocatorInstance.Data);
                  }
                  if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.
                                  ApplicationName.Data.AllocatorInstance.Data);
                  }
                  if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.
                                  ApplicationVendor.Data.AllocatorInstance.Data);
                  }
                }
                UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
                ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.RawData.Owner);
                goto LAB_14e71b697;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar12);
          }
        }
        uVar22 = uVar22 + 1;
        uVar12 = local_1b4;
      } while (uVar22 < local_1b4);
    }
    bVar9 = false;
    if (TVar10 < BGRE8) {
      if ((((byte)*(FScriptContainerElement *)((longlong)local_1d0 + 0x1c) & 4) == 0) &&
         (bVar9 = UE::DDS::DXGIFormatHasLinearAndSRGBForm
                            (*(EDXGIFormat *)((longlong)local_1d0 + 0x18)), bVar9)) {
        bVar9 = UE::DDS::DXGIFormatIsSRGB(*(EDXGIFormat *)((longlong)local_1d0 + 0x18));
      }
      else {
        bVar9 = true;
      }
    }
    local_1a8.bSRGB = bVar9;
    bVar9 = ERawImageFormat::IsHDR(TVar10);
    if (((bVar9) && (local_1a8.CompressionSettings = TC_HDR, local_1a8.bSRGB != false)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5934438381118291794>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeDDSTranslator.cpp"
                           ,0xae,"PayloadData.bSRGB == false"), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar19 = (TOptional<UE::Interchange::FImportSlicedImage> *)(*pcVar7)();
      return pTVar19;
    }
    if (1 < (int)uVar12) {
      local_1a8.MipGenSettings.TypedValue = TMGS_LeaveExistingMips;
      local_1a8.MipGenSettings.bIsSet = true;
    }
    UE::Interchange::FImportImage::FImportImage((FImportImage *)__return_storage_ptr__,&local_1a8);
    (__return_storage_ptr__->TypedValue)._padding_ =
         (longlong)&___7FImportSlicedImage_Interchange_UE__6B_;
    (__return_storage_ptr__->TypedValue).NumSlice = local_138;
    (__return_storage_ptr__->TypedValue).bIsVolume = local_134;
    __return_storage_ptr__->bIsSet = true;
LAB_14e71b658:
    if (local_1a8.TextureCreatorApplicationMetadata.bIsSet != false) {
      if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
                      .AllocatorInstance.Data);
      }
      if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                      AllocatorInstance.Data);
      }
      if (local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
          AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                      AllocatorInstance.Data);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.RawData.Owner);
    if (local_1d0 == (undefined1  [8])0x0) goto LAB_14e71b6c0;
  }
LAB_14e71b697:
  if (*(void **)((longlong)local_1d0 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)local_1d0 + 0x30));
  }
  if (*(void **)((longlong)local_1d0 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)local_1d0 + 0x20));
  }
  ::operator_delete((void *)local_1d0,0x48);
LAB_14e71b6c0:
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSupportedAssetTypes @ 14e71b820

EInterchangeTranslatorAssetType __thiscall
UInterchangeDDSTranslator::GetSupportedAssetTypes(UInterchangeDDSTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71ba20

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeDDSTranslator::GetSupportedFormats
          (UInterchangeDDSTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((!GInterchangeEnableDDSImport) && (!GIsAutomationTesting)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,L"dds;DirectDraw Surface");
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

// GetTexturePayloadData @ 14e71d130

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeDDSTranslator::GetTexturePayloadData
          (UInterchangeDDSTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> *paVar4;
  ulonglong uVar5;
  atomic<unsigned___int64> aVar6;
  EDXGIFormat EVar7;
  void *_Src;
  FBufferOwner *pFVar8;
  code *pcVar9;
  FBufferOwner *pFVar10;
  bool bVar11;
  Type TVar12;
  ETextureSourceFormat EVar13;
  uint uVar14;
  uint uVar15;
  wchar_t *pwVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  FUniqueBuffer FVar20;
  TOptional<UE::Interchange::FImportImage> *pTVar21;
  long64 lVar22;
  byte bVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint local_178;
  FString local_170;
  undefined1 local_160 [8];
  undefined **local_158;
  FBufferOwner *local_150;
  ETextureSourceCompressionFormat local_148;
  ETextureSourceFormat local_144;
  TextureCompressionSettings local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  bool local_130;
  TextureMipGenSettings local_12c;
  bool local_128;
  FScriptContainerElement *local_120;
  undefined8 local_118;
  FScriptContainerElement *local_110;
  undefined8 local_108;
  FScriptContainerElement *local_100;
  undefined8 local_f8;
  bool local_f0;
  longlong local_e8;
  FImageView local_e0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c8;
  UInterchangeTranslatorBase *local_c0;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  puVar1 = &this[-1].field_0x10;
  local_c0 = (UInterchangeTranslatorBase *)puVar1;
  bVar11 = UE::Interchange::FTextureTranslatorUtilities::IsTranslatorValid
                     ((UInterchangeTranslatorBase *)puVar1,L"DDS");
  if (!bVar11) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = *(int *)(*(longlong *)&this[-1].field_0x40 + 0x30);
  lVar25 = (longlong)local_170.Data.ArrayNum;
  _Src = *(void **)(*(longlong *)&this[-1].field_0x40 + 0x28);
  if (local_170.Data.ArrayNum == 0) {
    local_170.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_170,local_170.Data.ArrayNum
               ,&local_170.Data.ArrayMax);
    memcpy(local_170.Data.AllocatorInstance.Data,_Src,lVar25 * 2);
  }
  UE::Interchange::Private::InterchangeDDSTranslator::CreateDDSFileReader
            ((FString *)local_160,SUB81(&local_170,0));
  if ((local_160 == (undefined1  [8])0x0) ||
     (bVar11 = UE::DDS::FDDSFile::IsValidTexture2D((FDDSFile *)local_160), !bVar11)) {
    pFVar17 = FText::FromString(&local_48,&local_170);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"InterchangeDDSTranslator",L"UnsupportedFormat",
                         L"Failed to import DDS, unsupported format. [{0}]");
    pFVar19 = FTextFormat::FTextFormat(&local_38,pFVar18,Default);
    FText::Format<FText>(&local_a8,pFVar19,pFVar17);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)puVar1,&local_a8);
    __return_storage_ptr__->bIsSet = false;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
LAB_14e71d8db:
    if (local_160 == (undefined1  [8])0x0) goto LAB_14e71d909;
  }
  else {
    TVar12 = UE::DDS::DXGIFormatGetClosestRawFormat
                       (*(EDXGIFormat *)((longlong)local_160 + 0x18),(bool *)0x0);
    if (TVar12 != Invalid) {
      EVar13 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar12);
      local_178 = *(uint *)((longlong)local_160 + 0x10);
      if (0xf < local_178) {
        if (2 < (byte)LogInterchangeImport._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport)
          ;
        }
        local_178 = 0xf;
      }
      local_130 = false;
      local_150 = (FBufferOwner *)0x0;
      local_148 = TSCF_None;
      local_158 = &___7FImportImage_Interchange_UE__6B_;
      local_140 = TC_Default;
      local_128 = false;
      local_f0 = false;
      if (TVar12 < BGRE8) {
        if ((((byte)*(FScriptContainerElement *)((longlong)local_160 + 0x1c) & 4) == 0) &&
           (bVar11 = UE::DDS::DXGIFormatHasLinearAndSRGBForm
                               (*(EDXGIFormat *)((longlong)local_160 + 0x18)), bVar11)) {
          local_130 = UE::DDS::DXGIFormatIsSRGB(*(EDXGIFormat *)((longlong)local_160 + 0x18));
        }
        else {
          local_130 = true;
        }
      }
      local_134 = *(uint *)((longlong)local_160 + 8);
      local_138 = *(uint *)((longlong)local_160 + 4);
      local_144 = EVar13;
      local_13c = local_178;
      (*(code *)local_158[2])(&local_158);
      FVar20 = FUniqueBuffer::Alloc((ulong64)&local_c8);
      pFVar10 = local_150;
      pFVar8 = *(FBufferOwner **)FVar20.Owner.Owner;
      *(undefined8 *)FVar20.Owner.Owner = 0;
      if (local_150 != (FBufferOwner *)0x0) {
        LOCK();
        plVar2 = (longlong *)((longlong)local_150 + 0x18);
        lVar25 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (((uint)lVar25 & 0x3fffffff) == 1) {
          lVar25 = local_150->_padding_;
          local_150 = pFVar8;
          (**(code **)(lVar25 + 0x10))(pFVar10);
          *(longlong *)((longlong)pFVar10 + 8) = 0;
          *(longlong *)((longlong)pFVar10 + 0x10) = 0;
          LOCK();
          puVar3 = (ulonglong *)((longlong)pFVar10 + 0x18);
          uVar5 = *puVar3;
          *puVar3 = *puVar3 - 0x40000000;
          UNLOCK();
          pFVar8 = local_150;
          if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)pFVar10)(pFVar10);
            pFVar8 = local_150;
          }
        }
      }
      local_150 = pFVar8;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8);
      uVar29 = 0;
      local_e8 = 0;
      if (local_178 != 0) {
        do {
          pFVar8 = local_150;
          bVar23 = (byte)uVar29;
          uVar14 = *(uint *)((longlong)local_160 + 4) >> (bVar23 & 0x1f);
          uVar26 = 1;
          if (1 < uVar14) {
            uVar26 = uVar14;
          }
          uVar15 = *(uint *)((longlong)local_160 + 8) >> (bVar23 & 0x1f);
          uVar14 = 1;
          if (1 < uVar15) {
            uVar14 = uVar15;
          }
          if (local_150 == (FBufferOwner *)0x0) {
            local_e0.RawData = (void *)0x0;
          }
          else {
            if (((ulonglong)local_150->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
              (**(code **)(local_150->_padding_ + 8))(local_150);
            }
            local_e0.RawData = pFVar8->Data;
          }
          local_e0._padding_._5_1_ = -(TVar12 < BGRE8) & 2;
          local_e0._padding_._0_4_ = 1;
          local_e0.RawData = (void *)((longlong)local_e0.RawData + local_e8);
          local_e0._padding_._0_4_ = uVar26;
          local_e0._padding_._4_4_ = uVar14;
          local_e0._padding_._4_1_ = TVar12;
          bVar11 = UE::DDS::FDDSFile::GetMipImage((FDDSFile *)local_160,&local_e0,uVar29);
          if (!bVar11) {
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_88,L"InterchangeDDSTranslator",L"FailedPixelFormat",
                                 L"DDS could not convert pixel format");
            UE::Interchange::FTextureTranslatorUtilities::LogError(local_c0,pFVar17);
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            __return_storage_ptr__->bIsSet = false;
            if (local_f0 != false) {
              if (local_100 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100);
              }
              if (local_110 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110);
              }
              if (local_120 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120);
              }
            }
            pFVar8 = local_150;
            if (local_150 != (FBufferOwner *)0x0) {
              LOCK();
              paVar4 = &local_150->ReferenceCountsAndFlags;
              aVar6 = *paVar4;
              *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
              UNLOCK();
              if ((aVar6._0_4_ & 0x3fffffff) == 1) {
                (**(code **)(local_150->_padding_ + 0x10))(local_150);
                pFVar8->Data = (void *)0x0;
                pFVar8->Size = 0;
                LOCK();
                paVar4 = &pFVar8->ReferenceCountsAndFlags;
                aVar6 = *paVar4;
                *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
                UNLOCK();
                if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
                  (**(code **)pFVar8->_padding_)(pFVar8,1);
                }
              }
            }
            goto LAB_14e71d8e0;
          }
          if (((int)uVar29 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InMipIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTexturePayloadData.cpp"
                                  ,0x21,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar9)();
            return pTVar21;
          }
          if (((int)local_13c <= (int)uVar29) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InMipIndex < NumMips",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTexturePayloadData.cpp"
                                  ,0x22,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar9)();
            return pTVar21;
          }
          iVar27 = (int)local_138 >> (bVar23 & 0x1f);
          iVar28 = (int)local_134 >> (bVar23 & 0x1f);
          lVar22 = FTextureSource::GetBytesPerPixel(local_144);
          iVar24 = 1;
          if (1 < iVar28) {
            iVar24 = iVar28;
          }
          iVar28 = 1;
          if (1 < iVar27) {
            iVar28 = iVar27;
          }
          uVar29 = uVar29 + 1;
          local_e8 = local_e8 + lVar22 * iVar24 * (longlong)iVar28;
        } while (uVar29 < local_178);
      }
      bVar11 = false;
      if (TVar12 < BGRE8) {
        if ((((byte)*(FScriptContainerElement *)((longlong)local_160 + 0x1c) & 4) == 0) &&
           (bVar11 = UE::DDS::DXGIFormatHasLinearAndSRGBForm
                               (*(EDXGIFormat *)((longlong)local_160 + 0x18)), bVar11)) {
          bVar11 = UE::DDS::DXGIFormatIsSRGB(*(EDXGIFormat *)((longlong)local_160 + 0x18));
        }
        else {
          bVar11 = true;
        }
      }
      local_130 = bVar11;
      bVar11 = ERawImageFormat::IsHDR(TVar12);
      if (((bVar11) && (local_140 = TC_HDR, local_130 != false)) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5934438381118291794>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeDDSTranslator.cpp"
                              ,0xae,"PayloadData.bSRGB == false"), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar9)();
        return pTVar21;
      }
      if (1 < (int)local_178) {
        local_12c = TMGS_LeaveExistingMips;
        local_128 = true;
      }
      (__return_storage_ptr__->TypedValue).MipGenSettings.bIsSet = local_128;
      (__return_storage_ptr__->TypedValue)._padding_ =
           (longlong)&___7FImportImage_Interchange_UE__6B_;
      (__return_storage_ptr__->TypedValue).RawData.Owner.Owner = local_150;
      (__return_storage_ptr__->TypedValue).RawDataCompressionFormat = local_148;
      (__return_storage_ptr__->TypedValue).Format = local_144;
      (__return_storage_ptr__->TypedValue).CompressionSettings = local_140;
      (__return_storage_ptr__->TypedValue).NumMips = local_13c;
      (__return_storage_ptr__->TypedValue).SizeX = local_138;
      (__return_storage_ptr__->TypedValue).SizeY = local_134;
      (__return_storage_ptr__->TypedValue).bSRGB = local_130;
      local_150 = (FBufferOwner *)0x0;
      if (local_128 != false) {
        (__return_storage_ptr__->TypedValue).MipGenSettings.TypedValue = local_12c;
      }
      (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.bIsSet = local_f0;
      if (local_f0 != false) {
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVendor.Data.AllocatorInstance.Data = local_120;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVendor.Data.ArrayNum = (int)local_118;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVendor.Data.ArrayMax = local_118._4_4_;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationName.Data.AllocatorInstance.Data = local_110;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationName.Data.ArrayNum = (int)local_108;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationName.Data.ArrayMax = local_108._4_4_;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVersion.Data.AllocatorInstance.Data = local_100;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVersion.Data.ArrayNum = (int)local_f8;
        (__return_storage_ptr__->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
        ApplicationVersion.Data.ArrayMax = local_f8._4_4_;
        local_f8 = 0;
        local_120 = (FScriptContainerElement *)0x0;
        local_118 = 0;
        local_110 = (FScriptContainerElement *)0x0;
        local_108 = 0;
        local_100 = (FScriptContainerElement *)0x0;
      }
      __return_storage_ptr__->bIsSet = true;
      if (local_f0 != false) {
        if (local_100 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100);
        }
        if (local_110 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110);
        }
        if (local_120 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120);
        }
      }
      pFVar8 = local_150;
      if (local_150 != (FBufferOwner *)0x0) {
        LOCK();
        paVar4 = &local_150->ReferenceCountsAndFlags;
        aVar6 = *paVar4;
        *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
        UNLOCK();
        if ((aVar6._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(local_150->_padding_ + 0x10))(local_150);
          pFVar8->Data = (void *)0x0;
          pFVar8->Size = 0;
          LOCK();
          paVar4 = &pFVar8->ReferenceCountsAndFlags;
          aVar6 = *paVar4;
          *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
            (**(code **)pFVar8->_padding_)(pFVar8,1);
          }
        }
      }
      goto LAB_14e71d8db;
    }
    pwVar16 = UE::DDS::DXGIFormatGetName(*(EDXGIFormat *)((longlong)local_160 + 0x18));
    pFVar17 = FText::FromString(&local_68,pwVar16);
    EVar7 = *(EDXGIFormat *)((longlong)local_160 + 0x18);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"InterchangeDDSTranslator",L"InvalidDXGIFormat",
                         L"DDS DXGIFormat not supported : {0} : {1}");
    pFVar19 = FTextFormat::FTextFormat(&local_58,pFVar18,Default);
    FText::Format<int,FText>(&local_b8,pFVar19,EVar7,pFVar17);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)puVar1,&local_b8);
    __return_storage_ptr__->bIsSet = false;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
LAB_14e71d8e0:
  if (*(void **)((longlong)local_160 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)local_160 + 0x30));
  }
  if (*(void **)((longlong)local_160 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)local_160 + 0x20));
  }
  ::operator_delete((void *)local_160,0x48);
LAB_14e71d909:
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeDDSTranslator @ 14e72a4e0

void __cdecl UInterchangeDDSTranslator::StaticRegisterNativesUInterchangeDDSTranslator(void)

{
  return;
}

// Translate @ 14e72a650

bool __thiscall
UInterchangeDDSTranslator::Translate
          (UInterchangeDDSTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  void *_Src;
  TObjectPtr<UClass>_u_0 this_00;
  bool bVar1;
  longlong lVar2;
  UInterchangeSourceData *pUVar3;
  TObjectPtr<UClass>_u_0 local_res8;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = *(int *)(*(longlong *)&this->field_0x30 + 0x30);
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = *(void **)(*(longlong *)&this->field_0x30 + 0x28);
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  bVar1 = FPaths::FileExists(&local_18);
  if (!bVar1) {
    bVar1 = false;
    goto LAB_14e72a7cf;
  }
  UE::Interchange::Private::InterchangeDDSTranslator::CreateDDSFileReader
            ((FString *)&local_res8.ObjectPtr,SUB81(&local_18,0));
  this_00 = local_res8;
  if (local_res8.DebugPtr == (UClass *)0x0) {
LAB_14e72a79e:
    bVar1 = false;
  }
  else {
    bVar1 = UE::DDS::FDDSFile::IsValidTexture2D((FDDSFile *)local_res8.DebugPtr);
    if (bVar1) {
      bVar1 = UE::Interchange::FTextureTranslatorUtilities::Generic2DTextureTranslate
                        (*(UInterchangeSourceData **)&this->field_0x30,param_1);
    }
    else {
      bVar1 = UE::DDS::FDDSFile::IsValidTextureCube((FDDSFile *)this_00.DebugPtr);
      if (bVar1) {
        pUVar3 = *(UInterchangeSourceData **)&this->field_0x30;
        if (*(uint *)((longlong)&(this_00.DebugPtr)->_padding_ + 4) < 7) {
          local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
        }
        else {
          local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
        }
      }
      else {
        bVar1 = UE::DDS::FDDSFile::IsValidTextureArray((FDDSFile *)this_00.DebugPtr);
        if (bVar1) {
          pUVar3 = *(UInterchangeSourceData **)&this->field_0x30;
          local_res8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
        }
        else {
          bVar1 = UE::DDS::FDDSFile::IsValidTextureVolume((FDDSFile *)this_00.DebugPtr);
          if (!bVar1) goto LAB_14e72a79e;
          pUVar3 = *(UInterchangeSourceData **)&this->field_0x30;
          local_res8.DebugPtr = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      bVar1 = UE::Interchange::Private::GenericTextureTranslate
                        (pUVar3,param_1,
                         (TSubclassOf<UInterchangeTextureNode> *)&local_res8.ObjectPtr);
    }
  }
  if (this_00.DebugPtr != (UClass *)0x0) {
    if ((void *)(this_00.DebugPtr)->_padding_ != (void *)0x0) {
      FMemory::Free((void *)(this_00.DebugPtr)->_padding_);
    }
    if ((void *)(this_00.DebugPtr)->_padding_ != (void *)0x0) {
      FMemory::Free((void *)(this_00.DebugPtr)->_padding_);
    }
    ::operator_delete(this_00.DebugPtr,0x48);
  }
LAB_14e72a7cf:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// _getUObject @ 14e72c020

UObject * __thiscall UInterchangeDDSTranslator::_getUObject(UInterchangeDDSTranslator *this)

{
  return (UObject *)&this[-1].field_0x10;
}

// _getUObject`adjustor{8}' @ 14e72c02c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeDDSTranslator::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeDDSTranslator::_getUObject_adjustor_8__(UInterchangeDDSTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeDDSTranslator *)&this[-1].field_0x50);
  return (UObject *)pUVar1;
}

