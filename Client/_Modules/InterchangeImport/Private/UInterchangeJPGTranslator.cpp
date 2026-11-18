// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 14

// StaticClass @ 14e701200

UClass * __cdecl UInterchangeJPGTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeJPGTranslator",
               &Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeJPGTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeJPGTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeJPGTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton;
}

// UInterchangeJPGTranslator @ 14e708810

UInterchangeJPGTranslator * __thiscall
UInterchangeJPGTranslator::UInterchangeJPGTranslator
          (UInterchangeJPGTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// UInterchangeJPGTranslator @ 14e708850

UInterchangeJPGTranslator * __thiscall
UInterchangeJPGTranslator::UInterchangeJPGTranslator
          (UInterchangeJPGTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// ~UInterchangeJPGTranslator @ 14e709970

void __thiscall
UInterchangeJPGTranslator::~UInterchangeJPGTranslator(UInterchangeJPGTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetCompressedTexturePayloadData @ 14e718130

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeJPGTranslator::GetCompressedTexturePayloadData
          (UInterchangeJPGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)&this[-1].field_0x8,L"JPEG",&local_28);
  if (bVar1) {
    GetTexturePayloadImplementation
              ((UInterchangeJPGTranslator *)&this[-1].field_0x8,__return_storage_ptr__,&local_28,
               true);
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e71a040

UClass * __cdecl UInterchangeJPGTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeJPGTranslator",
               &Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeJPGTranslator,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeJPGTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeJPGTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeJPGTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e71b850

EInterchangeTranslatorAssetType __thiscall
UInterchangeJPGTranslator::GetSupportedAssetTypes(UInterchangeJPGTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71be90

/* WARNING: Removing unreachable block (ram,0x00014e71bfbc) */
/* WARNING: Removing unreachable block (ram,0x00014e71c096) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeJPGTranslator::GetSupportedFormats
          (UInterchangeJPGTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FString local_18;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((GInterchangeEnableJPGImport != false) || (GIsAutomationTesting != false)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    ::FString::FString(&local_28,L"jpg;JPEG image");
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
       (((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)*piVar1 * 0x10 &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)))) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_18,L"jpeg;JPEG image");
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e71dab0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeJPGTranslator::GetTexturePayloadData
          (UInterchangeJPGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)&this[-1].field_0x8,L"JPEG",&local_28);
  if (bVar1) {
    GetTexturePayloadImplementation
              ((UInterchangeJPGTranslator *)&this[-1].field_0x8,__return_storage_ptr__,&local_28,
               false);
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadImplementation @ 14e71e800

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeJPGTranslator::GetTexturePayloadImplementation
          (UInterchangeJPGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,bool param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar6;
  bool bVar7;
  char cVar8;
  ERGBFormat EVar9;
  Type TVar10;
  int iVar11;
  ETextureSourceFormat EVar12;
  undefined4 uVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  TOptional<UE::Interchange::FImportImage> *pTVar16;
  FUniqueBuffer FVar17;
  FBufferOwner *pFVar18;
  FText *pFVar19;
  FBufferOwner *pFVar20;
  undefined1 uVar21;
  longlong *plVar22;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar23;
  FUniqueBuffer local_res18;
  longlong *local_f8;
  TReferenceControllerBase<1> *local_f0;
  void *local_e8;
  void *pvStack_e0;
  ulong64 local_d8;
  undefined1 local_d0 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c0;
  undefined4 local_b8;
  ETextureSourceFormat local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_98;
  void *local_90;
  void *local_80;
  void *local_70;
  char local_60;
  FName local_58;
  FText local_50;
  FText local_40;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar14 = ::FName::FName(&local_58,"ImageWrapper");
  FVar4 = *pFVar14;
  this_00 = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,&local_f8,1,0);
  if (local_f8 != (longlong *)0x0) {
    if ((local_f8 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
      return pTVar16;
    }
    cVar8 = (**(code **)*local_f8)(local_f8,pFVar3);
    if (cVar8 != '\0') {
      if ((local_f8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar16;
      }
      plVar22 = local_f8;
      EVar9 = (**(code **)(*local_f8 + 0x58))(local_f8);
      iVar11 = (**(code **)(*plVar22 + 0x50))(plVar22);
      TVar10 = IImageWrapper::ConvertRGBFormat(EVar9,iVar11,(bool *)0x0);
      if ((TVar10 == Invalid) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawFormat != ERawImageFormat::Invalid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeJPGTranslator.cpp"
                             ,0x6c,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar16;
      }
      EVar12 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar10);
      local_d0._8_8_ = &___7FImportImage_Interchange_UE__6B_;
      local_c0.Owner = (FBufferOwner *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      local_98 = 0;
      local_60 = '\0';
      if ((local_f8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar16;
      }
      plVar22 = local_f8;
      iVar11 = (**(code **)(*local_f8 + 0x50))(local_f8);
      if ((iVar11 == 8) && (cVar8 = (**(code **)(*plVar22 + 0x58))(plVar22), cVar8 != '\x04')) {
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      if ((local_f8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar16;
      }
      uVar13 = (**(code **)(*local_f8 + 0x48))();
      if ((local_f8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar16;
      }
      local_a8 = (**(code **)(*local_f8 + 0x40))();
      local_ac = 1;
      local_d8 = 0;
      local_e8 = (void *)0x0;
      pvStack_e0 = (void *)0x0;
      local_b4 = EVar12;
      local_a4 = uVar13;
      local_a0 = uVar21;
      if (param_2) {
        FVar17 = MakeUniqueBufferFromArray<unsigned_char,TSizedDefaultAllocator<64>_>
                           ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_d0);
        TVar6.Owner = local_c0.Owner;
                    /* WARNING: Load size is inaccurate */
        TVar23.Owner = *FVar17.Owner.Owner;
        *(undefined8 *)FVar17.Owner.Owner = 0;
        if (local_c0.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &(local_c0.Owner)->ReferenceCountsAndFlags;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
          UNLOCK();
          if ((aVar2._0_4_ & 0x3fffffff) == 1) {
            plVar22 = &(local_c0.Owner)->_padding_;
            local_c0.Owner = TVar23.Owner;
            (**(code **)(*plVar22 + 0x10))(TVar6.Owner);
            (TVar6.Owner)->Data = (void *)0x0;
            (TVar6.Owner)->Size = 0;
            LOCK();
            paVar1 = &(TVar6.Owner)->ReferenceCountsAndFlags;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
            UNLOCK();
            TVar23.Owner = local_c0.Owner;
            if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
              (**(code **)(TVar6.Owner)->_padding_)(TVar6.Owner,1);
              TVar23.Owner = local_c0.Owner;
            }
          }
        }
        local_c0.Owner = TVar23.Owner;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_d0);
        local_b8 = 2;
LAB_14e71ecc0:
        UE::Interchange::FImportImage::FImportImage
                  (&__return_storage_ptr__->TypedValue,(FImportImage *)(local_d0 + 8));
        __return_storage_ptr__->bIsSet = true;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        if (local_60 != '\0') {
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          if (local_90 != (void *)0x0) {
            FMemory::Free(local_90);
          }
        }
        TVar23.Owner = local_c0.Owner;
        if (local_c0.Owner == (FBufferOwner *)0x0) goto LAB_14e71ee64;
        LOCK();
        paVar1 = &(local_c0.Owner)->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) != 1) goto LAB_14e71ee64;
        (**(code **)((local_c0.Owner)->_padding_ + 0x10))(local_c0.Owner);
        (TVar23.Owner)->Data = (void *)0x0;
        (TVar23.Owner)->Size = 0;
      }
      else {
        plVar22 = local_f8;
        if ((local_f8 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar22 = local_f8, bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
          return pTVar16;
        }
        cVar8 = (**(code **)(*plVar22 + 0x58))(plVar22);
        iVar11 = (**(code **)(*plVar22 + 0x50))(plVar22);
        if (((cVar8 != -1) && (iVar11 != 0)) &&
           (cVar8 = (**(code **)(*plVar22 + 0x38))(plVar22,cVar8,iVar11,&local_e8), cVar8 != '\0'))
        {
          pFVar18 = ::operator_new(0x38);
          pFVar20 = (FBufferOwner *)0x0;
          if (pFVar18 != (FBufferOwner *)0x0) {
            pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
            ;
            pFVar18[1]._padding_ = (longlong)local_e8;
            local_e8 = (void *)0x0;
            pFVar18[1].Data = pvStack_e0;
            pFVar18[1].Size = local_d8;
            pvStack_e0 = (void *)0x0;
            local_d8 = 0;
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
            pFVar20 = pFVar18;
          }
          FUniqueBuffer::FUniqueBuffer(&local_res18,pFVar20);
          TVar23.Owner = local_c0.Owner;
          local_c0 = local_res18.Owner.Owner;
          local_res18.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
          if (TVar23.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = &(TVar23.Owner)->ReferenceCountsAndFlags;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
            UNLOCK();
            if ((aVar2._0_4_ & 0x3fffffff) == 1) {
              (**(code **)((TVar23.Owner)->_padding_ + 0x10))(TVar23.Owner);
              (TVar23.Owner)->Data = (void *)0x0;
              (TVar23.Owner)->Size = 0;
              LOCK();
              paVar1 = &(TVar23.Owner)->ReferenceCountsAndFlags;
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
              UNLOCK();
              if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
                (**(code **)(TVar23.Owner)->_padding_)(TVar23.Owner,1);
              }
            }
          }
          FVar17.Owner.Owner = local_res18.Owner.Owner;
          if (local_res18.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_res18.Owner.Owner + 0x18);
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
            UNLOCK();
            if ((aVar2._0_4_ & 0x3fffffff) == 1) {
              (**(code **)(*(longlong *)local_res18.Owner.Owner + 0x10))(local_res18.Owner.Owner);
              *(void **)((longlong)FVar17.Owner.Owner + 8) = (void *)0x0;
              *(ulong64 *)((longlong)FVar17.Owner.Owner + 0x10) = 0;
              LOCK();
              paVar1 = (atomic<unsigned___int64> *)((longlong)FVar17.Owner.Owner + 0x18);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
              UNLOCK();
              if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
                (*(code *)**(undefined8 **)FVar17.Owner.Owner)(FVar17.Owner.Owner,1);
              }
            }
          }
          goto LAB_14e71ecc0;
        }
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_50,L"InterchangeJPEGTranslator",L"DecodingFailed",
                             L"Failed to decode JPEG.");
        UE::Interchange::FTextureTranslatorUtilities::LogError
                  ((UInterchangeTranslatorBase *)this,pFVar19);
        if (local_50.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
        }
        __return_storage_ptr__->bIsSet = false;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        if (local_60 != '\0') {
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          if (local_90 != (void *)0x0) {
            FMemory::Free(local_90);
          }
        }
        TVar23.Owner = local_c0.Owner;
        if (local_c0.Owner == (FBufferOwner *)0x0) goto LAB_14e71ee64;
        LOCK();
        paVar1 = &(local_c0.Owner)->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) != 1) goto LAB_14e71ee64;
        (**(code **)((local_c0.Owner)->_padding_ + 0x10))(local_c0.Owner);
        (TVar23.Owner)->Data = (void *)0x0;
        (TVar23.Owner)->Size = 0;
      }
      LOCK();
      paVar1 = &(TVar23.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar23.Owner)->_padding_)(TVar23.Owner,1);
      }
      goto LAB_14e71ee64;
    }
  }
  pFVar19 = FText::AsLocalizable_Advanced_LocText
                      (&local_40,L"InterchangeJPEGTranslator",L"DecodingFailed",
                       L"Failed to decode JPEG.");
  UE::Interchange::FTextureTranslatorUtilities::LogError((UInterchangeTranslatorBase *)this,pFVar19)
  ;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  __return_storage_ptr__->bIsSet = false;
LAB_14e71ee64:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeJPGTranslator @ 14e72a530

void __cdecl UInterchangeJPGTranslator::StaticRegisterNativesUInterchangeJPGTranslator(void)

{
  return;
}

// SupportCompressedTexturePayloadData @ 14e72a630

bool __thiscall
UInterchangeJPGTranslator::SupportCompressedTexturePayloadData(UInterchangeJPGTranslator *this)

{
  return true;
}

// Translate @ 14e72a8c0

bool __thiscall
UInterchangeJPGTranslator::Translate
          (UInterchangeJPGTranslator *this,UInterchangeBaseNodeContainer *param_1)

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

// _getUObject @ 14e72c060

UObject * __thiscall UInterchangeJPGTranslator::_getUObject(UInterchangeJPGTranslator *this)

{
  return (UObject *)&this[-1].field_0x8;
}

