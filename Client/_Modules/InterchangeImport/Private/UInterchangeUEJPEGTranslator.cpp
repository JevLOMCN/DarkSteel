// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 14

// StaticClass @ 14e700400

UClass * __cdecl UInterchangeUEJPEGTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeUEJPEGTranslator",
               &Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeUEJPEGTranslator,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeUEJPEGTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeUEJPEGTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton;
}

// UInterchangeUEJPEGTranslator @ 14e709030

UInterchangeUEJPEGTranslator * __thiscall
UInterchangeUEJPEGTranslator::UInterchangeUEJPEGTranslator
          (UInterchangeUEJPEGTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// UInterchangeUEJPEGTranslator @ 14e709070

UInterchangeUEJPEGTranslator * __thiscall
UInterchangeUEJPEGTranslator::UInterchangeUEJPEGTranslator
          (UInterchangeUEJPEGTranslator *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// ~UInterchangeUEJPEGTranslator @ 14e709c00

void __thiscall
UInterchangeUEJPEGTranslator::~UInterchangeUEJPEGTranslator(UInterchangeUEJPEGTranslator *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetCompressedTexturePayloadData @ 14e7181b0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeUEJPEGTranslator::GetCompressedTexturePayloadData
          (UInterchangeUEJPEGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)&this[-1].field_0x8,L"UEJPEG",&local_28);
  if (bVar1) {
    GetTexturePayloadImplementation
              ((UInterchangeUEJPEGTranslator *)&this[-1].field_0x8,__return_storage_ptr__,&local_28,
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

// GetPrivateStaticClass @ 14e71ab80

UClass * __cdecl UInterchangeUEJPEGTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeUEJPEGTranslator",
               &Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeUEJPEGTranslator,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeUEJPEGTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeUEJPEGTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeUEJPEGTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e71b870

EInterchangeTranslatorAssetType __thiscall
UInterchangeUEJPEGTranslator::GetSupportedAssetTypes(UInterchangeUEJPEGTranslator *this)

{
  return Textures;
}

// GetSupportedFormats @ 14e71c1c0

/* WARNING: Removing unreachable block (ram,0x00014e71c3f5) */
/* WARNING: Removing unreachable block (ram,0x00014e71c2ed) */
/* WARNING: Removing unreachable block (ram,0x00014e71c4c5) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeUEJPEGTranslator::GetSupportedFormats
          (UInterchangeUEJPEGTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  bool local_res10 [8];
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((GInterchangeEnableUEJPEGImport != false) || (GIsAutomationTesting != false)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    ::FString::FString(&local_38,L"uej;UEJpeg image");
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_38) &&
       (((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)*piVar1 * 0x10 &&
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
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10[0] = false;
    FConfigCacheIni::GetBool(GConfig,L"TextureImporter",L"EnableUEJpeg",local_res10,&GEditorIni);
    if (local_res10[0] != false) {
      ::FString::FString(&local_28,L"jpg;JPEG image");
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
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
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e71dfa0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeUEJPEGTranslator::GetTexturePayloadData
          (UInterchangeUEJPEGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar1 = UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
                    ((UInterchangeTranslatorBase *)&this[-1].field_0x8,L"UEJPEG",&local_28);
  if (bVar1) {
    GetTexturePayloadImplementation
              ((UInterchangeUEJPEGTranslator *)&this[-1].field_0x8,__return_storage_ptr__,&local_28,
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

// GetTexturePayloadImplementation @ 14e71eea0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeUEJPEGTranslator::GetTexturePayloadImplementation
          (UInterchangeUEJPEGTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<int> aVar3;
  atomic<unsigned___int64> aVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  char cVar13;
  ERGBFormat EVar14;
  Type TVar15;
  int iVar16;
  ETextureSourceFormat EVar17;
  undefined4 uVar18;
  FName *pFVar19;
  FModuleManager *this_00;
  IModuleInterface *pIVar20;
  TOptional<UE::Interchange::FImportImage> *pTVar21;
  longlong **pplVar22;
  FUniqueBuffer FVar23;
  FBufferOwner *pFVar24;
  FText *pFVar25;
  FBufferOwner *pFVar26;
  undefined1 uVar27;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar28;
  undefined4 uVar29;
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  FUniqueBuffer local_118;
  void *local_110;
  void *pvStack_108;
  ulong64 local_100;
  undefined1 local_f8 [24];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_e0;
  undefined4 local_d8;
  ETextureSourceFormat local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_b8;
  void *local_b0;
  void *local_a0;
  void *local_90;
  char local_80;
  FName local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FText local_60;
  FText local_50;
  void *local_40 [3];
  
  pFVar19 = ::FName::FName(&local_78,"ImageWrapper");
  FVar5 = *pFVar19;
  this_00 = FModuleManager::Get();
  pIVar20 = FModuleManager::LoadModuleChecked(this_00,FVar5);
  uVar29 = 3;
  (**(code **)((longlong)*pIVar20 + 0x58))(pIVar20,&local_128,0xb,0);
  if (local_128 == (longlong *)0x0) {
LAB_14e71ef73:
    uVar29 = 2;
    pplVar22 = (longlong **)(**(code **)((longlong)*pIVar20 + 0x58))(pIVar20,local_70,1,0);
    pTVar9 = local_120;
    pTVar11 = local_120;
    if (&local_128 != pplVar22) {
      local_128 = *pplVar22;
      *pplVar22 = (longlong *)0x0;
      pTVar6 = (TReferenceControllerBase<1> *)pplVar22[1];
      if ((pTVar6 != local_120) &&
         (pplVar22[1] = (longlong *)0x0, pTVar11 = pTVar6,
         local_120 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &local_120->SharedReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          plVar8 = &local_120->_padding_;
          local_120 = pTVar6;
          (**(code **)*plVar8)(pTVar9);
          LOCK();
          paVar1 = &pTVar9->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar11 = local_120;
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
            pTVar11 = local_120;
          }
        }
      }
    }
    local_120 = pTVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
    if (local_128 != (longlong *)0x0) {
      if ((local_128 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
        return pTVar21;
      }
      cVar13 = (**(code **)*local_128)(local_128,(param_1->AllocatorInstance).Data);
      if (cVar13 != '\0') goto LAB_14e71f04b;
    }
    pFVar25 = FText::AsLocalizable_Advanced_LocText
                        (&local_50,L"InterchangeUEJPEGTranslator",L"DecodingFailed",
                         L"Failed to decode UEJPEG.");
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)this,pFVar25);
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    __return_storage_ptr__->bIsSet = false;
    goto LAB_14e71f5db;
  }
  if ((local_128 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  cVar13 = (**(code **)*local_128)(local_128,(param_1->AllocatorInstance).Data);
  if (cVar13 == '\0') goto LAB_14e71ef73;
LAB_14e71f04b:
  if ((local_128 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  plVar8 = local_128;
  EVar14 = (**(code **)(*local_128 + 0x58))(local_128);
  iVar16 = (**(code **)(*plVar8 + 0x50))(plVar8);
  TVar15 = IImageWrapper::ConvertRGBFormat(EVar14,iVar16,(bool *)0x0);
  if ((TVar15 == Invalid) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawFormat != ERawImageFormat::Invalid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeUEJPEGTranslator.cpp"
                          ,0x73,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  EVar17 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar15);
  local_f8._16_8_ = &___7FImportImage_Interchange_UE__6B_;
  local_e0.Owner = (FBufferOwner *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_80 = '\0';
  if ((local_128 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  plVar8 = local_128;
  iVar16 = (**(code **)(*local_128 + 0x50))(local_128);
  if ((iVar16 == 8) && (cVar13 = (**(code **)(*plVar8 + 0x58))(plVar8), cVar13 != '\x04')) {
    uVar27 = 1;
  }
  else {
    uVar27 = 0;
  }
  if ((local_128 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  uVar18 = (**(code **)(*local_128 + 0x48))();
  if ((local_128 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
    return pTVar21;
  }
  local_c8 = (**(code **)(*local_128 + 0x40))();
  pFVar26 = (FBufferOwner *)0x0;
  local_cc = 1;
  local_110 = (void *)0x0;
  pvStack_108 = (void *)0x0;
  local_100 = 0;
  local_d4 = EVar17;
  local_c4 = uVar18;
  local_c0 = uVar27;
  if (param_2) {
    if ((local_128 == (longlong *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
      return pTVar21;
    }
    (**(code **)(*local_128 + 0x20))(local_128,local_40,0);
    FVar23 = MakeUniqueBufferFromArray<unsigned_char,TSizedDefaultAllocator<64>_>
                       ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_f8);
    TVar10.Owner = local_e0.Owner;
                    /* WARNING: Load size is inaccurate */
    TVar28.Owner = *FVar23.Owner.Owner;
    *(undefined8 *)FVar23.Owner.Owner = 0;
    if (local_e0.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_e0.Owner)->ReferenceCountsAndFlags;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        plVar8 = &(local_e0.Owner)->_padding_;
        local_e0.Owner = TVar28.Owner;
        (**(code **)(*plVar8 + 0x10))(TVar10.Owner);
        (TVar10.Owner)->Data = (void *)0x0;
        (TVar10.Owner)->Size = 0;
        LOCK();
        paVar2 = &(TVar10.Owner)->ReferenceCountsAndFlags;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -0x40000000);
        UNLOCK();
        TVar28.Owner = local_e0.Owner;
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)(TVar10.Owner)->_padding_)(TVar10.Owner,1);
          TVar28.Owner = local_e0.Owner;
        }
      }
    }
    local_e0.Owner = TVar28.Owner;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_f8);
    if (local_40[0] != (void *)0x0) {
      FMemory::Free(local_40[0]);
    }
LAB_14e71f447:
    local_d8 = uVar29;
    UE::Interchange::FImportImage::FImportImage
              (&__return_storage_ptr__->TypedValue,(FImportImage *)(local_f8 + 0x10));
    __return_storage_ptr__->bIsSet = true;
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if (local_80 != '\0') {
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
    }
    TVar28.Owner = local_e0.Owner;
    if (local_e0.Owner == (FBufferOwner *)0x0) goto LAB_14e71f5db;
    LOCK();
    paVar2 = &(local_e0.Owner)->ReferenceCountsAndFlags;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) != 1) goto LAB_14e71f5db;
    (**(code **)((local_e0.Owner)->_padding_ + 0x10))(local_e0.Owner);
  }
  else {
    if ((local_128 == (longlong *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar21 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar7)();
      return pTVar21;
    }
    plVar8 = local_128;
    cVar13 = (**(code **)(*local_128 + 0x58))(local_128);
    iVar16 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if (((cVar13 != -1) && (iVar16 != 0)) &&
       (cVar13 = (**(code **)(*plVar8 + 0x38))(plVar8,cVar13,iVar16,&local_110), cVar13 != '\0')) {
      pFVar24 = ::operator_new(0x38);
      if (pFVar24 != (FBufferOwner *)0x0) {
        pFVar24->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
        pFVar24->_padding_ =
             (longlong)
             &
             ___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
        ;
        pFVar24[1]._padding_ = (longlong)local_110;
        local_110 = (void *)0x0;
        pFVar24[1].Data = pvStack_108;
        pFVar24[1].Size = local_100;
        pvStack_108 = (void *)0x0;
        local_100 = 0;
        pFVar24->Data = (void *)pFVar24[1]._padding_;
        pFVar24->Size = (ulong64)pFVar24[1].Data;
        LOCK();
        pFVar24->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar24->ReferenceCountsAndFlags | 0x4000000000000000);
        UNLOCK();
        LOCK();
        pFVar24->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar24->ReferenceCountsAndFlags | 0x1000000000000000);
        UNLOCK();
        pFVar26 = pFVar24;
      }
      FUniqueBuffer::FUniqueBuffer(&local_118,pFVar26);
      TVar28.Owner = local_e0.Owner;
      local_e0 = local_118.Owner.Owner;
      local_118.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      if (TVar28.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar2 = &(TVar28.Owner)->ReferenceCountsAndFlags;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
        UNLOCK();
        if ((aVar4._0_4_ & 0x3fffffff) == 1) {
          (**(code **)((TVar28.Owner)->_padding_ + 0x10))(TVar28.Owner);
          (TVar28.Owner)->Data = (void *)0x0;
          (TVar28.Owner)->Size = 0;
          LOCK();
          paVar2 = &(TVar28.Owner)->ReferenceCountsAndFlags;
          aVar4 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (**(code **)(TVar28.Owner)->_padding_)(TVar28.Owner,1);
          }
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_118.Owner);
      uVar29 = local_d8;
      goto LAB_14e71f447;
    }
    pFVar25 = FText::AsLocalizable_Advanced_LocText
                        (&local_60,L"InterchangeUEJPEGTranslator",L"DecodingFailed",
                         L"Failed to decode UEJPEG.");
    UE::Interchange::FTextureTranslatorUtilities::LogError
              ((UInterchangeTranslatorBase *)this,pFVar25);
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    __return_storage_ptr__->bIsSet = false;
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if (local_80 != '\0') {
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
    }
    TVar28.Owner = local_e0.Owner;
    if (local_e0.Owner == (FBufferOwner *)0x0) goto LAB_14e71f5db;
    LOCK();
    paVar2 = &(local_e0.Owner)->ReferenceCountsAndFlags;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) != 1) goto LAB_14e71f5db;
    (**(code **)((local_e0.Owner)->_padding_ + 0x10))(local_e0.Owner);
  }
  (TVar28.Owner)->Size = 0;
  (TVar28.Owner)->Data = (void *)0x0;
  LOCK();
  paVar2 = &(TVar28.Owner)->ReferenceCountsAndFlags;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -0x40000000);
  UNLOCK();
  if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
    (**(code **)(TVar28.Owner)->_padding_)(TVar28.Owner,1);
  }
LAB_14e71f5db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeUEJPEGTranslator @ 14e72a620

void __cdecl UInterchangeUEJPEGTranslator::StaticRegisterNativesUInterchangeUEJPEGTranslator(void)

{
  return;
}

// SupportCompressedTexturePayloadData @ 14e72a640

bool __thiscall
UInterchangeUEJPEGTranslator::SupportCompressedTexturePayloadData
          (UInterchangeUEJPEGTranslator *this)

{
  return true;
}

// Translate @ 14e72a980

bool __thiscall
UInterchangeUEJPEGTranslator::Translate
          (UInterchangeUEJPEGTranslator *this,UInterchangeBaseNodeContainer *param_1)

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

// _getUObject @ 14e72c080

UObject * __thiscall UInterchangeUEJPEGTranslator::_getUObject(UInterchangeUEJPEGTranslator *this)

{
  return (UObject *)&this[-1].field_0x8;
}

