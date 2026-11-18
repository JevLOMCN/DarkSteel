// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 16

// StaticClass @ 14e6abb00

UClass * __cdecl UInterchangeMaterialXTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialXTranslator",
               &Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialXTranslator,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialXTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialXTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton;
}

// UInterchangeMaterialXTranslator @ 14e6b5960

UInterchangeMaterialXTranslator * __thiscall
UInterchangeMaterialXTranslator::UInterchangeMaterialXTranslator
          (UInterchangeMaterialXTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IInterchangeBlockedTexturePayloadInterface__;
  return this;
}

// UInterchangeMaterialXTranslator @ 14e6b59a0

UInterchangeMaterialXTranslator * __thiscall
UInterchangeMaterialXTranslator::UInterchangeMaterialXTranslator
          (UInterchangeMaterialXTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IInterchangeBlockedTexturePayloadInterface__;
  return this;
}

// ~UInterchangeMaterialXTranslator @ 14e6b9bd0

void __thiscall
UInterchangeMaterialXTranslator::~UInterchangeMaterialXTranslator
          (UInterchangeMaterialXTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x50 = &___7IInterchangeBlockedTexturePayloadInterface__6B_;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetBlockedTexturePayloadData @ 14e6c30f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TOptional<UE::Interchange::FImportBlockedImage> * __cdecl
UInterchangeMaterialXTranslator::GetBlockedTexturePayloadData
          (TOptional<UE::Interchange::FImportBlockedImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2,UInterchangeResultsContainer *param_3,
          TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *param_4)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 this;
  FUniqueBuffer FVar6;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *pTVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar11;
  UClass *pUVar12;
  longlong *plVar13;
  TOptional<UE::Interchange::FImportBlockedImage> *pTVar14;
  FImportImage *pFVar15;
  FUObjectItem *pFVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStackY_328 [32];
  undefined1 local_2f8 [8];
  TArray<UE::Interchange::FImportImage,TSizedDefaultAllocator<32>_> local_2f0;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 local_2d0;
  UObjectBaseUtility *pUStack_2c8;
  FImportBlockedImage local_2b8;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  UInterchangeResultsContainer *local_218;
  TOptional<UE::Interchange::FImportBlockedImage> *local_210;
  FString local_208;
  FString local_1f8;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FString local_1b8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_1a8;
  undefined1 local_198 [40];
  int local_170;
  undefined4 uStack_16c;
  FString local_168;
  FImportImage local_158;
  char local_e8;
  longlong local_d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8 [40];
  int local_80;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_240 = param_4;
  local_218 = param_3;
  local_210 = __return_storage_ptr__;
  ::FString::FString(&local_1f8,param_1);
  pFVar10 = FPaths::GetExtension(&local_168,&local_1f8,false);
  ::FString::FString(&local_208,L"exr");
  iVar8 = (pFVar10->Data).ArrayNum;
  if (iVar8 == local_208.Data.ArrayNum) {
    if (iVar8 < 2) {
      bVar18 = true;
    }
    else {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                         (wchar_t *)local_208.Data.AllocatorInstance.Data);
      bVar18 = iVar8 == 0;
    }
  }
  else {
    bVar18 = iVar8 + local_208.Data.ArrayNum == 1;
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_2b8.bSRGB = true;
  local_2b8.BlocksData.ArrayNum = 0;
  local_2b8.BlocksData.ArrayMax = 0;
  local_2b8.RawData.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_2b8.BlocksData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Format = TSF_Invalid;
  local_2b8.MipGenSettings.bIsSet = false;
  local_2b8.CompressionSettings = -(uint)bVar18 & TC_HalfFloat;
  local_2b8.TextureCreatorApplicationMetadata.bIsSet = false;
  ::FString::FString(&local_1b8,L"(.+?)[._](\\d{4})$");
  UE::TextureUtilitiesCommon::GetUDIMBlocksFromSourceFile
            ((TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
             local_a8,&local_1f8,&local_1b8,(FString *)0x0);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  uVar17 = local_a8._8_4_ - local_74;
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,uVar17,&local_2f0.AllocatorInstance,0,&local_2f0.ArrayMax);
  }
  local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_238._padding_._0_4_ = 0;
  local_238._padding_._4_4_ = 1;
  local_238.UnvisitedBitMask = 0xffffffff;
  local_238.CurrentBitIndex = 0;
  local_238.BaseBitIndex = 0;
  if (local_80 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
  }
  TStack_1e0._padding_ = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
  local_1e8 = (longlong *)local_a8;
  TStack_1e0.CurrentBitIndex = local_238.CurrentBitIndex;
  TStack_1e0.UnvisitedBitMask = local_238.UnvisitedBitMask;
  TStack_1e0._28_4_ = local_238._28_4_;
  TStack_1e0.BaseBitIndex = local_238.BaseBitIndex;
  local_170 = local_a8._8_4_ - local_74;
  local_198._16_8_ = local_238.Array;
  uStack_1c0 = CONCAT44(uStack_16c,local_170);
  TStack_1e0.Array = local_238.Array;
  local_198._0_8_ = local_1e8;
  local_198._8_8_ = TStack_1e0._padding_;
  local_198._24_8_ = TStack_1e0._16_8_;
  local_198._32_8_ = TStack_1e0._24_8_;
  pTVar11 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_198,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),local_80);
  pTVar7 = local_240;
  local_d0 = pTVar11->_padding_;
  local_248 = pTVar11->Array;
  local_c0._0_4_ = pTVar11->UnvisitedBitMask;
  local_c0._4_4_ = pTVar11->CurrentBitIndex;
  uStack_b8 = *(undefined8 *)&pTVar11->BaseBitIndex;
  local_2d8 = local_c0._4_4_;
  pTStack_c8 = local_248;
  do {
    plVar13 = local_1e8;
    iVar8 = local_2d8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      local_2f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2f8);
    }
    if (((TStack_1e0.CurrentBitIndex == iVar8) && (TStack_1e0.Array == local_248)) &&
       (plVar13 == (longlong *)local_a8)) {
      UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData(&local_2b8,&local_2f0);
      pTVar14 = local_210;
      FVar6.Owner.Owner = local_2b8.RawData.Owner.Owner;
      local_2b8.RawData.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      (local_210->TypedValue).RawData.Owner.Owner = (FBufferOwner *)FVar6.Owner.Owner;
      (local_210->TypedValue).BlocksData.AllocatorInstance.Data =
           local_2b8.BlocksData.AllocatorInstance.Data;
      (local_210->TypedValue).BlocksData.ArrayNum = local_2b8.BlocksData.ArrayNum;
      (local_210->TypedValue).BlocksData.ArrayMax = local_2b8.BlocksData.ArrayMax;
      (local_210->TypedValue).Format = local_2b8.Format;
      (local_210->TypedValue).CompressionSettings = local_2b8.CompressionSettings;
      (local_210->TypedValue).bSRGB = local_2b8.bSRGB;
      local_2b8.BlocksData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.BlocksData.ArrayNum = 0;
      local_2b8.BlocksData.ArrayMax = 0;
      (local_210->TypedValue).MipGenSettings.bIsSet = local_2b8.MipGenSettings.bIsSet;
      if (local_2b8.MipGenSettings.bIsSet != false) {
        (local_210->TypedValue).MipGenSettings.TypedValue = local_2b8.MipGenSettings.TypedValue;
      }
      (local_210->TypedValue).TextureCreatorApplicationMetadata.bIsSet =
           local_2b8.TextureCreatorApplicationMetadata.bIsSet;
      if (local_2b8.TextureCreatorApplicationMetadata.bIsSet != false) {
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
        AllocatorInstance.Data =
             local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
             AllocatorInstance.Data;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
        ArrayNum = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                   ArrayNum;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
        ArrayMax = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                   ArrayMax;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
        AllocatorInstance.Data =
             local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
             AllocatorInstance.Data;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
        ArrayNum = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                   ArrayNum;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
        ArrayMax = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                   ArrayMax;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
        .AllocatorInstance.Data =
             local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
             AllocatorInstance.Data;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
        .ArrayNum = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
                    ArrayNum;
        (local_210->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data
        .ArrayMax = local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
                    ArrayMax;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.ArrayNum = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.ArrayMax = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
        AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.ArrayNum = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.ArrayMax = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
        AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.ArrayNum = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.ArrayMax = 0;
        local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
        AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_210->bIsSet = true;
      DestructItems<UE::Interchange::FImportImage,int>
                ((FImportImage *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
      if ((FImportImage *)local_2f0.AllocatorInstance.Data != (FImportImage *)0x0) {
        FMemory::Free(local_2f0.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      if (local_2b8.TextureCreatorApplicationMetadata.bIsSet != false) {
        if (local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
                        Data.AllocatorInstance.Data);
        }
        if (local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                        AllocatorInstance.Data);
        }
        if (local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
                        Data.AllocatorInstance.Data);
        }
      }
      if (local_2b8.BlocksData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.BlocksData.AllocatorInstance.Data);
      }
      FVar6.Owner.Owner = local_2b8.RawData.Owner.Owner;
      if (local_2b8.RawData.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_2b8.RawData.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_2b8.RawData.Owner.Owner + 0x10))
                    (local_2b8.RawData.Owner.Owner);
          *(void **)((longlong)FVar6.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar6.Owner.Owner + 0x18);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar6.Owner.Owner)(FVar6.Owner.Owner,1);
          }
        }
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_240->SharedReferenceCount).ReferenceController);
      return pTVar14;
    }
    lVar3 = *plVar13;
    iVar8 = *(int *)((longlong)TStack_1e0.CurrentBitIndex * 0x20 + lVar3);
    pFVar10 = (FString *)(lVar3 + 8 + (longlong)TStack_1e0.CurrentBitIndex * 0x20);
    local_1a8.Object = pTVar7->Object;
    local_1a8.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Interchange::Private::FScopedTranslator::FScopedTranslator
              ((FScopedTranslator *)&local_2d0.ObjectPtr,pFVar10,param_3,&local_1a8);
    this = local_2d0;
    if (local_2d0.DebugPtr == (UInterchangeTranslatorBase *)0x0) {
LAB_14e6c35a9:
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8288618507059331220>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\MaterialX\\InterchangeMaterialXTranslator.cpp"
                          ,0x94,"TextureTranslator");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TOptional<UE::Interchange::FImportBlockedImage> *)(*pcVar5)();
        return pTVar14;
      }
LAB_14e6c35db:
      if (pUStack_2c8 != (UObjectBaseUtility *)0x0) {
        UObjectBaseUtility::ClearInternalFlags(pUStack_2c8,Async);
      }
      if (this.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
        UObjectBaseUtility::ClearInternalFlags((UObjectBaseUtility *)this.DebugPtr,Async);
      }
    }
    else {
      pUVar12 = Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
      plVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this.DebugPtr,pUVar12)
      ;
      if (plVar13 == (longlong *)0x0) goto LAB_14e6c35a9;
      if (pFVar10 != (FString *)param_2) {
        pFVar4 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::FString::FString((FString *)param_2,pFVar10);
        if (*(int *)((longlong)&param_2->field0_0x0 + 0xc) == -1) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             );
          if (bVar18) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TOptional<UE::Interchange::FImportBlockedImage> *)(*pcVar5)();
            return pTVar14;
          }
        }
      }
      (**(code **)(*plVar13 + 0x10))(plVar13,&local_158,pFVar10,param_2);
      if (local_e8 != '\0') {
        iVar9 = local_2f0.ArrayNum;
        if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
        }
        local_2f0.ArrayNum = iVar9 + 1;
        pFVar15 = UE::Interchange::FImportImage::FImportImage
                            ((FImportImage *)
                             (local_2f0.AllocatorInstance.Data + (longlong)iVar9 * 0x70),&local_158)
        ;
        local_2b8.Format = pFVar15->Format;
        local_2e0 = -1;
        local_2dc = -1;
        UE::TextureUtilitiesCommon::ExtractUDIMCoordinates(iVar8,&local_2e0,&local_2dc);
        if ((local_2e0 != -1) && (local_2dc != -1)) {
          UE::Interchange::FImportBlockedImage::InitBlockFromImage
                    (&local_2b8,local_2e0,local_2dc,pFVar15);
          if (local_e8 != '\0') {
            if (local_158.TextureCreatorApplicationMetadata.bIsSet != false) {
              if (local_158.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
                  AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.TextureCreatorApplicationMetadata.TypedValue.
                              ApplicationVersion.Data.AllocatorInstance.Data);
              }
              if (local_158.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
                  AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.TextureCreatorApplicationMetadata.TypedValue.ApplicationName
                              .Data.AllocatorInstance.Data);
              }
              if (local_158.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
                  AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.TextureCreatorApplicationMetadata.TypedValue.
                              ApplicationVendor.Data.AllocatorInstance.Data);
              }
            }
            UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
            ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_158.RawData.Owner);
          }
          goto LAB_14e6c3545;
        }
        if (local_e8 != '\0') {
          UE::Interchange::FImportImage::~FImportImage(&local_158);
        }
        goto LAB_14e6c35db;
      }
LAB_14e6c3545:
      if (pUStack_2c8 != (UObjectBaseUtility *)0x0) {
        pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(&pUStack_2c8->field_0x8 + 4))
        ;
        FUObjectItem::ClearRootFlags(pFVar16,Async);
      }
      if (this.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
        pFVar16 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&(this.DebugPtr)->_padding_ + 4));
        FUObjectItem::ClearRootFlags(pFVar16,Async);
      }
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    local_2d0.DebugPtr = (UInterchangeTranslatorBase *)0x0;
    pUStack_2c8 = (UObjectBaseUtility *)0x0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    param_3 = local_218;
  } while( true );
}

// GetBlockedTexturePayloadData @ 14e6c3840

TOptional<UE::Interchange::FImportBlockedImage> * __thiscall
UInterchangeMaterialXTranslator::GetBlockedTexturePayloadData
          (UInterchangeMaterialXTranslator *this,
          TOptional<UE::Interchange::FImportBlockedImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_18;
  
  local_18.Object = *(FAnalyticsHelper **)&this[-1].field_0x40;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x48;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GetBlockedTexturePayloadData
            (__return_storage_ptr__,param_1,param_2,
             *(UInterchangeResultsContainer **)&this[-1].field_0x30,&local_18);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e6c5040

UClass * __cdecl UInterchangeMaterialXTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialXTranslator",
               &Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialXTranslator,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialXTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialXTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e6c8d20

EInterchangeTranslatorAssetType __thiscall
UInterchangeMaterialXTranslator::GetSupportedAssetTypes(UInterchangeMaterialXTranslator *this)

{
  return Materials;
}

// GetSupportedFormats @ 14e6c8f30

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeMaterialXTranslator::GetSupportedFormats
          (UInterchangeMaterialXTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if ((bVar1) && ((GInterchangeEnableMaterialXImport != false || (GIsAutomationTesting != false))))
  {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6c96b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TOptional<UE::Interchange::FImportImage> * __cdecl
UInterchangeMaterialXTranslator::GetTexturePayloadData
          (TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2,UInterchangeResultsContainer *param_3,
          TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 _Src;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  UClass *pUVar7;
  longlong *plVar8;
  TOptional<UE::Interchange::FImportImage> *pTVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  bool bVar12;
  TOptional<FString>_u_0 local_100;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 local_f0;
  longlong local_e8;
  FString local_e0;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_d0;
  FString local_c0;
  FImportImage local_a8;
  bool local_38;
  
  local_100.TypedValue.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar11 = (longlong)local_100.TypedValue.Data.ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_100.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  if (local_100.TypedValue.Data.ArrayNum == 0) {
    local_100.TypedValue.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)&local_100.TypedValue,
               local_100.TypedValue.Data.ArrayNum,&local_100.TypedValue.Data.ArrayMax);
    memcpy((void *)local_100.TypedValue.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
  }
  pFVar6 = FPaths::GetExtension(&local_c0,&local_100.TypedValue,false);
  ::FString::FString(&local_e0,L"exr");
  iVar5 = (pFVar6->Data).ArrayNum;
  if (iVar5 == local_e0.Data.ArrayNum) {
    if (iVar5 < 2) {
      bVar12 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                         (wchar_t *)local_e0.Data.AllocatorInstance.Data);
      bVar12 = iVar5 == 0;
    }
  }
  else {
    bVar12 = local_e0.Data.ArrayNum + iVar5 == 1;
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_d0.Object = param_4->Object;
  local_d0.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::Private::FScopedTranslator::FScopedTranslator
            ((FScopedTranslator *)&local_f0.ObjectPtr,&local_100.TypedValue,param_3,&local_d0);
  if (local_f0.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
    pUVar7 = Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)local_f0.DebugPtr,pUVar7)
    ;
    if (plVar8 != (longlong *)0x0) {
      if (&local_100 != &param_2->field0_0x0) {
        pFVar2 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_100.TypedValue.Data.AllocatorInstance.Data;
        lVar11 = (longlong)local_100.TypedValue.Data.ArrayNum;
        piVar1 = (int *)((longlong)&param_2->field0_0x0 + 0xc);
        (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_2->field0_0x0 + 8) = local_100.TypedValue.Data.ArrayNum;
        if (local_100.TypedValue.Data.ArrayNum == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_2,
                     local_100.TypedValue.Data.ArrayNum,piVar1);
          memcpy((param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                 lVar11 * 2);
        }
        if ((*piVar1 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar3)();
          return pTVar9;
        }
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_a8,param_1,param_2);
      if (local_38 != false) {
        local_a8.CompressionSettings = -(uint)bVar12 & TC_HalfFloat;
      }
      __return_storage_ptr__->bIsSet = local_38;
      if ((local_38 != false) &&
         (UE::Interchange::FImportImage::FImportImage(&__return_storage_ptr__->TypedValue,&local_a8)
         , local_38 != false)) {
        if (local_a8.TextureCreatorApplicationMetadata.bIsSet != false) {
          if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
                          Data.AllocatorInstance.Data);
          }
          if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data
                          .AllocatorInstance.Data);
          }
          if (local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data.
              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
                          Data.AllocatorInstance.Data);
          }
        }
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_a8.RawData.Owner);
      }
      if (local_e8 != 0) {
        pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_e8 + 0xc));
        FUObjectItem::ClearRootFlags(pFVar10,Async);
      }
      if (local_f0.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
        UObjectBaseUtility::ClearInternalFlags((UObjectBaseUtility *)local_f0.DebugPtr,Async);
      }
      goto LAB_14e6c99c0;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_e8 != 0) {
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_e8 + 0xc));
    FUObjectItem::ClearRootFlags(pFVar10,Async);
  }
  if (local_f0.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
    pFVar10 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&(local_f0.DebugPtr)->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar10,Async);
  }
LAB_14e6c99c0:
  if (local_100.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100.TypedValue.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6c9a10

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeMaterialXTranslator::GetTexturePayloadData
          (UInterchangeMaterialXTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_18;
  
  local_18.Object = *(FAnalyticsHelper **)&this[-1].field_0x48;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x50;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GetTexturePayloadData
            (__return_storage_ptr__,param_1,param_2,
             *(UInterchangeResultsContainer **)&this[-1].field_0x38,&local_18);
  return __return_storage_ptr__;
}

// GetTranslatorType @ 14e6c9b10

EInterchangeTranslatorType __thiscall
UInterchangeMaterialXTranslator::GetTranslatorType(UInterchangeMaterialXTranslator *this)

{
  return Assets;
}

// StaticRegisterNativesUInterchangeMaterialXTranslator @ 14e6d2330

void __cdecl
UInterchangeMaterialXTranslator::StaticRegisterNativesUInterchangeMaterialXTranslator(void)

{
  return;
}

// Translate @ 14e6d6060

bool __thiscall
UInterchangeMaterialXTranslator::Translate
          (UInterchangeMaterialXTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  return false;
}

// _getUObject @ 14e6d8010

UObject * __thiscall
UInterchangeMaterialXTranslator::_getUObject(UInterchangeMaterialXTranslator *this)

{
  return (UObject *)&this[-1].field_0x10;
}

// _getUObject`adjustor{8}' @ 14e6d801c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeMaterialXTranslator::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeMaterialXTranslator::_getUObject_adjustor_8__(UInterchangeMaterialXTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeMaterialXTranslator *)&this[-1].field_0x50);
  return (UObject *)pUVar1;
}

