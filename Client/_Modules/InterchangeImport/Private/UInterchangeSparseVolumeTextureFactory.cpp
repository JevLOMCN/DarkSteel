// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 21

// StaticClass @ 14e6ffdc0

UClass * __cdecl UInterchangeSparseVolumeTextureFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSparseVolumeTextureFactory",
               &Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSparseVolumeTextureFactory,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSparseVolumeTextureFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTextureFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton;
}

// UInterchangeSparseVolumeTextureFactory @ 14e708c10

UInterchangeSparseVolumeTextureFactory * __thiscall
UInterchangeSparseVolumeTextureFactory::UInterchangeSparseVolumeTextureFactory
          (UInterchangeSparseVolumeTextureFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTextureFactory__6B_;
  (this->ProcessedPayloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessedPayloads).ArrayNum = 0;
  (this->ProcessedPayloads).ArrayMax = 0;
  this->bSkipImport = false;
  return this;
}

// UInterchangeSparseVolumeTextureFactory @ 14e708c50

UInterchangeSparseVolumeTextureFactory * __thiscall
UInterchangeSparseVolumeTextureFactory::UInterchangeSparseVolumeTextureFactory
          (UInterchangeSparseVolumeTextureFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTextureFactory__6B_;
  (this->ProcessedPayloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessedPayloads).ArrayNum = 0;
  (this->ProcessedPayloads).ArrayMax = 0;
  this->bSkipImport = false;
  return this;
}

// ~UInterchangeSparseVolumeTextureFactory @ 14e709ab0

void __thiscall
UInterchangeSparseVolumeTextureFactory::~UInterchangeSparseVolumeTextureFactory
          (UInterchangeSparseVolumeTextureFactory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTextureFactory__6B_;
  DestructItems<FVolumePayload,int>
            ((FVolumePayload *)(this->ProcessedPayloads).AllocatorInstance.Data,
             (this->ProcessedPayloads).ArrayNum);
  pFVar1 = (this->ProcessedPayloads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e70a260

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  UInterchangeResultError_Generic *pUVar6;
  UObject *pUVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar6 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar3 + 0x28));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x28);
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(lVar3 + 0x30);
  _Src = *(void **)(lVar3 + 0x28);
  local_70 = CONCAT44(local_70._4_4_,iVar2);
  if (iVar2 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_78,iVar2,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar6->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_78) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_78.Data;
    *(undefined4 *)&pUVar6->_padding_ = (undefined4)local_70;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar6->_padding_ + 4) = local_70._4_4_;
    local_70 = 0;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::operator=
            ((FString *)&pUVar6->_padding_,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pUVar7 = (UObject *)(**(code **)(**(longlong **)this + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6->_padding_ = (longlong)pUVar7;
  local_68.TextData.Reference = (param_1->TextData).Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_68.Flags = param_1->Flags;
  pFVar8 = FText::FromString(&local_38,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"InterchangeSparseVolumeTextureFactory",
                      L"SparseVolumeTextureFactory_Failure",
                      L"UInterchangeSparseVolumeTextureFactory: Could not create SparseVolumeTexture asset \'{0}\'. Reason: {1}"
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar9,Default);
  pFVar8 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,&local_68);
  FText::operator=(&pUVar6->Text,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  *(undefined1 *)(*(longlong *)this + 0x40) = 1;
  **(undefined1 **)((longlong)this + 0x10) = 1;
  return;
}

// operator() @ 14e70adc0

void __thiscall
`UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  UInterchangeResultError_Generic *pUVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar8 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar3 + 0x28));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x28);
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(lVar3 + 0x30);
  _Src = *(void **)(lVar3 + 0x28);
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar8->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_28) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_28.Data;
    *(undefined4 *)&pUVar8->_padding_ = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  ::FString::operator=
            ((FString *)&pUVar8->_padding_,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pUVar9 = (UObject *)(**(code **)(**(longlong **)this + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  pUVar8->_padding_ = (longlong)pUVar9;
  pIVar4 = (param_1->TextData).Reference;
  pIVar5 = (pUVar8->Text).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (pUVar8->Text).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (pUVar8->Text).Flags = param_1->Flags;
  return;
}

// operator() @ 14e70bb10

void __thiscall
`UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_148 [160];
  FMipMap *local_a8;
  int local_a0;
  char local_38;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar7 = (undefined8 *)(*pcVar3)(plVar1,local_148,(longlong)param_1 * 0x68 + *plVar2);
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar8 = (undefined8 *)(*plVar1 + 0x20 + (longlong)param_1 * 0x140);
  if (puVar7 != puVar8) {
    if (*(char *)(puVar7 + 0x22) == '\0') {
      if (*(char *)(puVar8 + 0x22) != '\0') {
        DestructItems<UE::SVT::FTextureData::FMipMap,int>
                  ((FMipMap *)puVar8[0x14],*(int *)(puVar8 + 0x15));
        if ((void *)puVar8[0x14] != (void *)0x0) {
          FMemory::Free((void *)puVar8[0x14]);
        }
        *(undefined1 *)(puVar8 + 0x22) = 0;
      }
    }
    else {
      if (*(char *)(puVar8 + 0x22) != '\0') {
        DestructItems<UE::SVT::FTextureData::FMipMap,int>
                  ((FMipMap *)puVar8[0x14],*(int *)(puVar8 + 0x15));
        if ((void *)puVar8[0x14] != (void *)0x0) {
          FMemory::Free((void *)puVar8[0x14]);
        }
      }
      *puVar8 = &___7FVolumePayloadData_Interchange_UE__6B_;
      uVar4 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar4;
      uVar4 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar4;
      uVar4 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar4;
      uVar4 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar4;
      uVar4 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar7[0xd];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar7[0xf];
      puVar8[0xe] = puVar7[0xe];
      puVar8[0xf] = uVar4;
      uVar4 = puVar7[0x11];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar4;
      uVar4 = puVar7[0x13];
      puVar8[0x12] = puVar7[0x12];
      puVar8[0x13] = uVar4;
      puVar8[0x14] = 0;
      puVar8[0x14] = puVar7[0x14];
      puVar7[0x14] = 0;
      *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)(puVar7 + 0x15);
      *(undefined4 *)((longlong)puVar8 + 0xac) = *(undefined4 *)((longlong)puVar7 + 0xac);
      puVar7[0x15] = 0;
      uVar4 = puVar7[0x17];
      puVar8[0x16] = puVar7[0x16];
      puVar8[0x17] = uVar4;
      uVar4 = puVar7[0x19];
      puVar8[0x18] = puVar7[0x18];
      puVar8[0x19] = uVar4;
      uVar4 = puVar7[0x1b];
      puVar8[0x1a] = puVar7[0x1a];
      puVar8[0x1b] = uVar4;
      uVar4 = puVar7[0x1d];
      puVar8[0x1c] = puVar7[0x1c];
      puVar8[0x1d] = uVar4;
      uVar4 = puVar7[0x1f];
      puVar8[0x1e] = puVar7[0x1e];
      puVar8[0x1f] = uVar4;
      uVar4 = puVar7[0x21];
      puVar8[0x20] = puVar7[0x20];
      puVar8[0x21] = uVar4;
      *(undefined1 *)(puVar8 + 0x22) = 1;
    }
  }
  if (local_38 != '\0') {
    DestructItems<UE::SVT::FTextureData::FMipMap,int>(local_a8,local_a0);
    if (local_a8 != (FMipMap *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return;
}

// BackupSourceData @ 14e70eaf0

void __thiscall
UInterchangeSparseVolumeTextureFactory::BackupSourceData
          (UInterchangeSparseVolumeTextureFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e70efe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread
          (UInterchangeSparseVolumeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UInterchangeSparseVolumeTextureFactoryNode *this_00;
  UObjectBase *this_01;
  code *pcVar3;
  FName FVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  FText *pFVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  FImportAssetResult *pFVar15;
  FName *pFVar16;
  ulonglong uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  undefined8 *puVar21;
  ForAnyElementType FVar22;
  int iVar23;
  FImportAssetObjectParams *pFVar24;
  bool bVar25;
  undefined1 auStackY_238 [32];
  undefined1 local_207 [7];
  FImportAssetResult *local_200;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  UClass *local_1e8;
  ulonglong local_1e0;
  TArray<UInterchangeVolumeNode_const_*,TSizedDefaultAllocator<32>_> local_1d8;
  uint local_1c8;
  FImportAssetObjectParams *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  UInterchangeSparseVolumeTextureFactory *local_190;
  FImportAssetObjectParams *local_188;
  FImportAssetResult *local_180;
  FSoftObjectPath local_178;
  undefined1 local_158 [16];
  FName local_148;
  FText local_140;
  FText local_130;
  FText local_120;
  FString local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e0 = local_1e0 & 0xffffffff00000000;
  bVar25 = -1 < CpuChannel->Enabled;
  local_200 = __return_storage_ptr__;
  local_1c0 = param_1;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId488,
               "UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Volume\\InterchangeSparseVolumeTextureFactory.cpp"
               ,0x1e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId488);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  this_00 = (UInterchangeSparseVolumeTextureFactoryNode *)param_1->AssetNode;
  local_190 = this;
  local_188 = param_1;
  local_180 = __return_storage_ptr__;
  if (this_00 != (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
    pUVar9 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) {
      lVar10 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
      if ((lVar10 != 0) &&
         (pUVar9 = Z_Construct_UClass_USparseVolumeTexture_NoRegister(), pUVar9 != (UClass *)0x0)) {
        iVar8 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          UE::InterchangeSparseVolumeTextureFactory::Private::GetVolumeNodes
                    (&local_1d8,this_00,param_1->NodeContainer);
          if (local_1d8.ArrayNum == 0) {
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_140,L"InterchangeSparseVolumeTextureFactory",
                                 L"SparseVolumeTextureFactory_NoVolumes",
                                 L"Asset node parameter class doesn\'t target any UInterchangeVolumeNode."
                                );
            `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
            ::operator()(&local_190,pFVar11);
          }
          else {
            iVar8 = local_1d8.ArrayNum;
            if ((local_1d8.ArrayNum < 2) ||
               (bVar6 = UE::InterchangeSparseVolumeTextureFactory::Private::CheckForGridConsistency
                                  (&local_1d8,param_1->NodeContainer), iVar8 = local_1d8.ArrayNum,
               bVar6)) {
              pUVar12 = param_1->ReimportObject;
              if (pUVar12 == (UObject *)0x0) {
                local_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_178.AssetPath.PackageName.Number = 0;
                local_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_178.AssetPath.AssetName.Number = 0;
                local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_178.SubPathString.Data.ArrayNum = 0;
                local_178.SubPathString.Data.ArrayMax = 0;
                bVar6 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                                  ((UInterchangeFactoryBaseNode *)this_00,&local_178);
                if ((bVar6) &&
                   (pUVar12 = FSoftObjectPath::TryLoad(&local_178,(FUObjectSerializeContext *)0x0),
                   pUVar12 != (UObject *)0x0)) {
                  pUVar9 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
                  iVar23 = (int)pUVar9->_padding_;
                  if ((iVar23 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
                     (((longlong *)
                       *(undefined1 **)
                        (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) +
                        (longlong)iVar23 * 8) == &pUVar9->_padding_ &&
                      (cVar7 = (**(code **)(local_1c0->Translator->_padding_ + 0x2c8))(),
                      cVar7 != '\x01')))) {
                    this->bSkipImport = true;
                    local_200->bIsFactorySkipAsset = true;
                    local_200->ImportedObject = pUVar12;
                  }
                }
                if (local_178.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
                }
              }
              FVar22.Data = local_1d8.AllocatorInstance.Data;
              pFVar15 = local_200;
              if (this->bSkipImport != false) goto LAB_14e70f6e4;
              if ((pUVar12 == (UObject *)0x0) ||
                 (pUVar9 = *(UClass **)&pUVar12->field_0x10, local_1e8 = pUVar9,
                 pUVar9 == (UClass *)0x0)) {
                local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1b0.Data.ArrayNum = 0;
                local_1b0.Data.ArrayMax = 0;
                bVar6 = UInterchangeSparseVolumeTextureFactoryNode::GetCustomAnimationID
                                  (this_00,&local_1b0);
                if ((bVar6) && (1 < local_1b0.Data.ArrayNum)) {
                  pUVar9 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
                }
                else {
                  pUVar9 = Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();
                }
                local_1e8 = pUVar9;
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
                if (pUVar12 != (UObject *)0x0) goto LAB_14e70f2e4;
              }
              else {
LAB_14e70f2e4:
                iVar23 = 0;
                pUVar13 = Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();
                if (pUVar9 == pUVar13) {
                  if (iVar8 < 2) {
                    for (FVar20.Data = FVar22.Data; FVar20.Data != FVar22.Data + (longlong)iVar8 * 8
                        ; FVar20.Data = FVar20.Data + 8) {
                      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_1a0.ArrayNum = 0;
                      local_1a0.ArrayMax = 0;
                      UInterchangeVolumeNode::GetCustomFrameIndicesInAnimation
                                (*(UInterchangeVolumeNode **)FVar20.Data,&local_1a0);
                      iVar23 = iVar23 + local_1a0.ArrayNum;
                      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a0.AllocatorInstance.Data);
                      }
                    }
                    pUVar9 = local_1e8;
                    if (iVar23 < 2) goto LAB_14e70f394;
                  }
                  pFVar11 = FText::AsLocalizable_Advanced_LocText
                                      (&local_120,L"InterchangeSparseVolumeTextureFactory",
                                       L"SparseVolumeTextureFactory_Mismatch",
                                       L"Cannot import a volume animation into a StaticSparseVolumeTexture."
                                      );
                  `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::
                  <lambda_1>::operator()(&local_190,pFVar11);
                  if (local_120.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
                  }
                  if (FVar22.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar22.Data);
                  }
                  goto LAB_14e70f778;
                }
              }
LAB_14e70f394:
              pFVar24 = local_1c0;
              local_1f8.Data = (FScriptContainerElement *)0x0;
              local_1f0 = 0;
              pUVar12 = local_1c0->ReimportObject;
              if (pUVar12 != (UObject *)0x0) {
                pUVar13 = Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister();
                iVar8 = (int)pUVar13->_padding_;
                if ((iVar8 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar8 * 8)
                    == &pUVar13->_padding_)) {
                  uVar2 = *(uint *)&pUVar12[3].field_0x18;
                  local_1e8 = pUVar9;
                  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
                  }
                  if (local_1f0._4_4_ < (int)uVar2) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,uVar2,&local_1f8,(int)local_1f0,(int *)((longlong)&local_1f0 + 4)
                              );
                  }
                  local_1c8 = *(uint *)&pUVar12[3].field_0x18;
                  uVar17 = (ulonglong)(int)local_1c8;
                  puVar21 = *(undefined8 **)&pUVar12[3].field_0x10;
                  local_158._8_8_ = puVar21 + uVar17;
                  while( true ) {
                    uVar5 = local_158._8_8_;
                    if (*(int *)&pUVar12[3].field_0x18 != (int)uVar17) {
                      local_207[0] = 0;
                      `TCheckedPointerIterator<TObjectPtr<UAssetUserData>,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_207);
                    }
                    FVar22.Data = local_1d8.AllocatorInstance.Data;
                    pFVar24 = local_1c0;
                    if (puVar21 == (undefined8 *)uVar5) break;
                    this_01 = (UObjectBase *)*puVar21;
                    iVar8 = (int)local_1f0;
                    if ((int)local_1f0 == local_1f0._4_4_) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_1f8,(int *)((longlong)&local_1f0 + 4));
                    }
                    local_1f0 = CONCAT44(local_1f0._4_4_,iVar8 + 1);
                    *(undefined8 *)(local_1f8.Data + (longlong)iVar8 * 8) = 0;
                    pFVar1 = local_1f8.Data + (longlong)iVar8 * 8;
                    if (this_01 != (UObjectBase *)0x0) {
                      UObjectBase::AddRef(this_01);
                      *(UObjectBase **)pFVar1 = this_01;
                    }
                    pUVar9 = (UClass *)GetTransientPackage();
                    local_1e0 = 0;
                    MakeUniqueObjectName
                              ((UObject *)local_158,pUVar9,
                               (FName)(this_01->ClassPrivate).ObjectPtr.field0_0x0.ObjectPtr.
                                      field0_0x0,None);
                    pcVar3 = *(code **)(this_01->_padding_ + 0x170);
                    pFVar14 = ::FName::ToString((FName *)local_158,&local_110);
                    if ((pFVar14->Data).ArrayNum == 0) {
                      pwVar19 = L"";
                    }
                    else {
                      pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                    }
                    cVar7 = (*pcVar3)(this_01,pwVar19,pUVar9,0x34);
                    if ((cVar7 == '\0') &&
                       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<9096117228230673043>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Volume\\InterchangeSparseVolumeTextureFactory.cpp"
                                           ,0x293,
                                           "UserData->Rename(*NewName.ToString(), NewOuter, (0x0010) | (0x0020) | (0x0004))"
                                          ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      pFVar15 = (FImportAssetResult *)(*pcVar3)();
                      return pFVar15;
                    }
                    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_110.Data.AllocatorInstance.Data);
                    }
                    uVar17 = (ulonglong)local_1c8;
                    puVar21 = puVar21 + 1;
                  }
                }
              }
              pwVar19 = L"";
              if ((pFVar24->AssetName).Data.ArrayNum != 0) {
                pwVar19 = (wchar_t *)(pFVar24->AssetName).Data.AllocatorInstance.Data;
              }
              pFVar16 = ::FName::FName(&local_148,pwVar19);
              pUVar12 = pFVar24->Parent;
              local_1b8 = 0;
              FVar4 = *pFVar16;
              if (FVar4 == (FName)0x0) {
                FObjectInitializer::AssertIfInConstructor
                          (pUVar12,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
              }
              pUVar9 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
              CheckIsClassChildOf_Internal(pUVar9,local_1e8);
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_c8,local_1e8);
              local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
              local_c8._56_8_ = (UPackage *)0x0;
              local_c8._24_4_ = RF_Standalone|RF_Public;
              local_c8._40_8_ = (UObject *)0x0;
              local_c8[0x20] = false;
              local_c8._8_8_ = pUVar12;
              local_c8._16_8_ = FVar4;
              pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8)
              ;
              if (local_c8._64_8_ != 0) {
                plVar18 = (longlong *)(local_c8 + 0x50);
                if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                  plVar18 = (longlong *)local_c8._104_8_;
                }
                (**(code **)(*plVar18 + 0x10))();
              }
              pFVar15 = local_200;
              if (pUVar12 != (UObject *)0x0) {
                local_200->ImportedObject = pUVar12;
                DestructItems<TStrongObjectPtr<UAssetUserData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                          ((TStrongObjectPtr<UAssetUserData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                            *)local_1f8.Data,(int)local_1f0);
                local_1d8.AllocatorInstance.Data = FVar22.Data;
                if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f8.Data);
                }
LAB_14e70f6e4:
                if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.AllocatorInstance.Data);
                }
                if (!bVar25) {
                  return pFVar15;
                }
                FCpuProfilerTrace::OutputEndEvent();
                return pFVar15;
              }
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_100,L"InterchangeSparseVolumeTextureFactory",
                                   L"SparseVolumeTextureFactory_TextureCreateFail",
                                   L"SparseVolumeTexture creation failed.");
              `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::
              <lambda_1>::operator()(&local_190,pFVar11);
              if (local_100.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
              }
              DestructItems<TStrongObjectPtr<UAssetUserData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                        ((TStrongObjectPtr<UAssetUserData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                          *)local_1f8.Data,(int)local_1f0);
              if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data);
              }
              if (FVar22.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar22.Data);
              }
              goto LAB_14e70f778;
            }
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_130,L"InterchangeSparseVolumeTextureFactory",
                                 L"SparseVolumeTextureFactory_InconsistentGrids",
                                 L"UInterchangeVolumeNodes provided for animated SparseVolumeTexture import don\'t have consistent volume grids"
                                );
            `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
            ::operator()(&local_190,pFVar11);
            local_140.TextData.Reference = local_130.TextData.Reference;
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
          if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.AllocatorInstance.Data);
          }
          goto LAB_14e70f778;
        }
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_f0,L"InterchangeSparseVolumeTextureFactory",
                           L"SparseVolumeTextureFactory_NodeClassMissmatch",
                           L"Asset node parameter class doesn\'t derive the USparseVolumeTexture class."
                          );
      `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
      operator()(&local_190,pFVar11);
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      goto LAB_14e70f778;
    }
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_e0,L"InterchangeSparseVolumeTextureFactory",
                       L"SparseVolumeTextureFactory_AssetNodeNull",
                       L"Asset node parameter is not an UInterchangeSparseVolumeTextureFactoryNode."
                      );
  `UInterchangeSparseVolumeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
  operator()(&local_190,pFVar11);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
LAB_14e70f778:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_200;
}

// ClearBackupSourceData @ 14e711950

void __thiscall
UInterchangeSparseVolumeTextureFactory::ClearBackupSourceData
          (UInterchangeSparseVolumeTextureFactory *this,UObject *param_1)

{
  return;
}

// EndImportAsset_GameThread @ 14e713430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeSparseVolumeTextureFactory::EndImportAsset_GameThread
          (UInterchangeSparseVolumeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *this_01;
  FUObjectItem *this_02;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  FSoftObjectPath local_58;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId921,
               "UInterchangeSparseVolumeTextureFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Volume\\InterchangeSparseVolumeTextureFactory.cpp"
               ,0x399);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId921);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (this->bSkipImport != false) {
    __return_storage_ptr__->bIsFactorySkipAsset = true;
    if (!bVar7) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  this_00 = param_1->AssetNode;
  if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_58.AssetPath.PackageName.Number = 0;
      local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_58.AssetPath.AssetName.Number = 0;
      local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.SubPathString.Data.ArrayNum = 0;
      local_58.SubPathString.Data.ArrayMax = 0;
      bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_58);
      if ((bVar3) &&
         (this_01 = FSoftObjectPath::TryLoad(&local_58,(FUObjectSerializeContext *)0x0),
         this_01 != (UObject *)0x0)) {
        pUVar4 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
          }
          pUVar2 = param_1->ReimportObject;
          iVar1 = (this->ProcessedPayloads).ArrayNum;
          pFVar5 = (this->ProcessedPayloads).AllocatorInstance.Data;
          pFVar6 = pFVar5 + (longlong)iVar1 * 0x140;
          while( true ) {
            if ((this->ProcessedPayloads).ArrayNum != iVar1) {
              `TCheckedPointerIterator<FVolumePayload_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar5 == pFVar6) {
              if (pUVar2 == (UObject *)0x0) {
                this_02 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_01->field_0xc);
                FUObjectItem::ClearRootFlags(this_02,RootSet);
                UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
                local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_58.AssetPath.PackageName.Number = 0;
                local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_58.AssetPath.AssetName.Number = 0;
                local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_58.SubPathString.Data.ArrayNum = 0;
                local_58.SubPathString.Data.ArrayMax = 0;
                FSoftObjectPath::SetPath(&local_58,(UObject *)0x0);
                UInterchangeFactoryBaseNode::SetCustomReferenceObject(this_00,&local_58);
                if (local_58.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
                }
              }
              UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_00,false);
              __return_storage_ptr__->ImportedObject = (UObject *)0x0;
              __return_storage_ptr__->bIsFactorySkipAsset = true;
              this->bSkipImport = true;
              goto LAB_14e71366f;
            }
            if (pFVar5[0x130] != (FScriptContainerElement)0x0) break;
            pFVar5 = pFVar5 + 0x140;
          }
          __return_storage_ptr__->ImportedObject = this_01;
          UE::InterchangeSparseVolumeTextureFactory::Private::FillSparseVolumeTextureWithPayloadData
                    ((USparseVolumeTexture *)this_01,&this->ProcessedPayloads);
          goto LAB_14e71366f;
        }
      }
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14e71366f:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e718330

EInterchangeFactoryAssetType __thiscall
UInterchangeSparseVolumeTextureFactory::GetFactoryAssetType
          (UInterchangeSparseVolumeTextureFactory *this)

{
  return Textures;
}

// GetFactoryClass @ 14e718440

UClass * __thiscall
UInterchangeSparseVolumeTextureFactory::GetFactoryClass
          (UInterchangeSparseVolumeTextureFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTexture",
               &Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton,
               USparseVolumeTexture::StaticRegisterNativesUSparseVolumeTexture,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USparseVolumeTexture>,
               InternalVTableHelperCtorCaller<USparseVolumeTexture>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a7c0

UClass * __cdecl UInterchangeSparseVolumeTextureFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSparseVolumeTextureFactory",
               &Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSparseVolumeTextureFactory,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSparseVolumeTextureFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTextureFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTextureFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e71b720

bool __thiscall
UInterchangeSparseVolumeTextureFactory::GetSourceFilenames
          (UInterchangeSparseVolumeTextureFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// HasValidPayloads @ 14e71fa60

bool __thiscall
UInterchangeSparseVolumeTextureFactory::HasValidPayloads
          (UInterchangeSparseVolumeTextureFactory *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ProcessedPayloads).ArrayNum;
  pFVar2 = (this->ProcessedPayloads).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x140;
  while( true ) {
    if ((this->ProcessedPayloads).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVolumePayload_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x130] != (FScriptContainerElement)0x0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x140;
  }
  return false;
}

// ImportAsset_Async @ 14e71fae0

FImportAssetResult * __thiscall
UInterchangeSparseVolumeTextureFactory::ImportAsset_Async
          (UInterchangeSparseVolumeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  UInterchangeSparseVolumeTextureFactoryNode *pUVar1;
  UInterchangeTranslatorBase *this_00;
  UInterchangeVolumeGridNode *this_01;
  UInterchangeVolumeNode *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FText *pFVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  FImportAssetResult *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  FVolumePayload *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  TArray<FVolumePayload,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  FScriptContainerElement *_Dst;
  bool bVar24;
  ForAnyElementType local_258;
  undefined8 local_250;
  undefined1 local_248 [8];
  ForAnyElementType local_240;
  undefined8 local_238;
  undefined1 local_230 [8];
  TArray<UInterchangeVolumeNode_const_*,TSizedDefaultAllocator<32>_> local_228;
  UInterchangeSparseVolumeTextureFactory *local_218;
  FImportAssetObjectParams *local_210;
  UInterchangeVolumeNode *local_208;
  undefined8 local_200;
  FSoftObjectPath local_1f0;
  UInterchangeBaseNodeContainer *local_1d0;
  FScriptContainerElement *local_1c8;
  FString local_1c0;
  UObject *local_1b0;
  FScriptContainerElement *local_1a8;
  void *local_1a0;
  TIntVector3<int> local_198;
  TArray<UInterchangeVolumeGridNode_const_*,TSizedDefaultAllocator<32>_> local_188;
  code *local_178;
  ForAnyElementType **local_170;
  ForAnyElementType *local_168;
  ForAnyElementType *local_160;
  void *local_158;
  FText local_150;
  FText local_140;
  FText local_130;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  TOptional<UE::Interchange::Volume::FAssignmentInfo> local_a8;
  TIntVector3<int> local_58 [2];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId706,
               "UInterchangeSparseVolumeTextureFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Volume\\InterchangeSparseVolumeTextureFactory.cpp"
               ,0x2c2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId706);
  }
  bVar5 = this->bSkipImport;
  pUVar11 = (UObject *)0x0;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = bVar5;
  pUVar1 = (UInterchangeSparseVolumeTextureFactoryNode *)param_1->AssetNode;
  local_218 = this;
  local_210 = param_1;
  if (pUVar1 == (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_150,L"InterchangeSparseVolumeTextureFactory",
                        L"SparseVolumeTextureFactory_Async_AssetNodeNull",
                        L"UInterchangeSparseVolumeTextureFactory: Asset node parameter is null.");
    `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
              (&local_218,pFVar9);
  }
  else {
    pUVar10 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
    iVar22 = (int)pUVar10->_padding_;
    if ((iVar22 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar22 * 8)
        == &pUVar10->_padding_)) {
      local_1b0 = (UObject *)0x0;
      local_1f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1f0.AssetPath.PackageName.Number = 0;
      local_1f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1f0.AssetPath.AssetName.Number = 0;
      local_1f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.SubPathString.Data.ArrayNum = 0;
      local_1f0.SubPathString.Data.ArrayMax = 0;
      bVar5 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1->AssetNode,&local_1f0);
      if (bVar5) {
        pUVar11 = FSoftObjectPath::TryLoad(&local_1f0,(FUObjectSerializeContext *)0x0);
        local_1b0 = pUVar11;
      }
      if (this->bSkipImport != false) {
        __return_storage_ptr__->ImportedObject = pUVar11;
        if (local_1f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.SubPathString.Data.AllocatorInstance.Data);
        }
        if (!bVar24) {
          return __return_storage_ptr__;
        }
        FCpuProfilerTrace::OutputEndEvent();
        return __return_storage_ptr__;
      }
      if (pUVar11 == (UObject *)0x0) {
LAB_14e72042e:
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_d0,L"InterchangeSparseVolumeTextureFactory",
                            L"SparseVolumeTextureFactory_Async_CannotCreateAsync",
                            L"UInterchangeSparseVolumeTextureFactory: Could not create an USparseVolumeTexture asset."
                           );
        `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                  (&local_218,pFVar9);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
      }
      else {
        pUVar10 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
        iVar22 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar22) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
            &pUVar10->_padding_)) goto LAB_14e72042e;
        this_00 = param_1->Translator;
        if (this_00 == (UInterchangeTranslatorBase *)0x0) {
LAB_14e7203e5:
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_e0,L"InterchangeSparseVolumeTextureFactory",
                              L"SparseVolumeTextureFactory_Async_TranslatorPayloadInterface",
                              L"UInterchangeSparseVolumeTextureFactory: The translator does not implement the Interchange volume payload interface."
                             );
          `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                    (&local_218,pFVar9);
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
        }
        else {
          pUVar10 = Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister();
          local_1a0 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar10)
          ;
          if (local_1a0 == (void *)0x0) goto LAB_14e7203e5;
          UE::InterchangeSparseVolumeTextureFactory::Private::GetVolumeNodes
                    (&local_228,pUVar1,param_1->NodeContainer);
          if (local_228.ArrayNum == 0) {
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&local_140,L"InterchangeSparseVolumeTextureFactory",
                                L"SparseVolumeTextureFactory_Async_NoTranslatedNode",
                                L"Asset node parameter class doesn\'t target any UInterchangeVolumeNode."
                               );
            `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::
            operator()(&local_218,pFVar9);
LAB_14e71fcf7:
            if (local_140.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
            }
          }
          else {
            UE::InterchangeSparseVolumeTextureFactory::Private::GetAssignmentInfo
                      (&local_a8,pUVar1,&local_228,param_1->NodeContainer);
            if (local_a8.bIsSet == false) {
              pFVar9 = FText::AsLocalizable_Advanced_LocText
                                 (&local_130,L"InterchangeSparseVolumeTextureFactory",
                                  L"SparseVolumeTextureFactory_Async_NoAssignmentInfo",
                                  L"Failed to extract a valid grid assignment info from UInterchangeVolumeNode."
                                 );
              `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::
              operator()(&local_218,pFVar9);
              local_140.TextData.Reference = local_130.TextData.Reference;
              goto LAB_14e71fcf7;
            }
            local_1d0 = param_1->NodeContainer;
            iVar8 = 0x7fffffff;
            iVar23 = 0x7fffffff;
            local_200 = 0x7fffffff7fffffff;
            pFVar12 = local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 8;
            local_208 = (UInterchangeVolumeNode *)CONCAT44(local_208._4_4_,0x7fffffff);
            local_1c8 = local_228.AllocatorInstance.Data;
            iVar22 = iVar23;
            for (FVar16.Data = local_228.AllocatorInstance.Data; iVar7 = local_228.ArrayNum,
                FVar16.Data != pFVar12; FVar16.Data = FVar16.Data + 8) {
              UE::InterchangeSparseVolumeTextureFactory::Private::GetGridNodes
                        (&local_188,*(UInterchangeVolumeNode **)FVar16.Data,local_1d0);
              pFVar19 = local_188.AllocatorInstance.Data + (longlong)local_188.ArrayNum * 8;
              for (FVar18.Data = local_188.AllocatorInstance.Data; FVar18.Data != pFVar19;
                  FVar18.Data = FVar18.Data + 8) {
                this_01 = *(UInterchangeVolumeGridNode **)FVar18.Data;
                if (this_01 != (UInterchangeVolumeGridNode *)0x0) {
                  bVar5 = UInterchangeVolumeGridNode::GetCustomGridActiveAABBMin(this_01,&local_198)
                  ;
                  uVar21 = iVar22;
                  iVar7 = iVar8;
                  if (bVar5) {
                    iVar7 = (int)local_198.field0_0x0._0_8_;
                    if (iVar8 < (int)local_198.field0_0x0._0_8_) {
                      iVar7 = iVar8;
                    }
                    iVar8 = (int)((ulonglong)local_198.field0_0x0._0_8_ >> 0x20);
                    if (iVar23 < iVar8) {
                      iVar8 = iVar23;
                    }
                    iVar23 = iVar8;
                    uVar21 = local_198.field0_0x0._s_0.Z;
                    if (iVar22 < local_198.field0_0x0._s_0.Z) {
                      uVar21 = iVar22;
                    }
                  }
                  UInterchangeVolumeGridNode::GetCustomGridActiveAABBMax(this_01,local_58);
                  iVar22 = uVar21;
                  iVar8 = iVar7;
                }
              }
              local_200 = CONCAT44(iVar23,iVar8);
              local_208 = (UInterchangeVolumeNode *)CONCAT44(local_208._4_4_,iVar22);
              if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.AllocatorInstance.Data);
              }
            }
            iVar22 = 0;
            local_240.Data = (FScriptContainerElement *)0x0;
            bVar5 = false;
            local_238 = 0;
            if (local_228.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_228.ArrayNum);
            }
            local_238._0_4_ = iVar22;
            if (0 < local_228.ArrayNum) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x68,8,local_228.ArrayNum,&local_240,0,(int *)((longlong)&local_238 + 4));
            }
            local_258.Data = (FScriptContainerElement *)0x0;
            local_250 = 0;
            iVar8 = (int)local_238;
            if (0 < iVar7) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x140,0x10,iVar7,&local_258,0,(int *)((longlong)&local_250 + 4));
              iVar8 = (int)local_238;
            }
            uVar15 = (ulonglong)local_228.ArrayNum;
            uVar21 = local_208._0_4_;
            local_1d0 = (UInterchangeBaseNodeContainer *)
                        CONCAT44(local_1d0._4_4_,local_228.ArrayNum);
            local_1a8 = local_1c8 + uVar15 * 8;
            iVar23 = iVar22;
            while( true ) {
              pFVar19 = local_1a8;
              pFVar12 = local_1c8;
              if (local_228.ArrayNum != (uint)uVar15) {
                local_248[0] = 0;
                `TCheckedPointerIterator<UInterchangeVolumeNode_const_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_248);
                iVar8 = (int)local_238;
              }
              if (pFVar12 == pFVar19) break;
              pUVar2 = *(UInterchangeVolumeNode **)pFVar12;
              local_208 = pUVar2;
              if (iVar8 == local_238._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&local_240,(int *)((longlong)&local_238 + 4));
              }
              pFVar19 = local_240.Data + (longlong)iVar8 * 0x68;
              local_238 = CONCAT44(local_238._4_4_,iVar8 + 1);
              lVar14 = 2;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar19->field_0x0)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(undefined8 *)&pFVar19[8].field_0x0 = 0;
              *(undefined8 *)(pFVar19 + 0x10) = 0;
              *(undefined8 *)(pFVar19 + 0x18) = 0;
              *(undefined8 *)(pFVar19 + 0x20) = 0;
              *(undefined8 *)(pFVar19 + 0x28) = 0;
              *(undefined8 *)(pFVar19 + 0x30) = 0;
              *(undefined8 *)(pFVar19 + 0x38) = 0;
              *(undefined8 *)(pFVar19 + 0x40) = 0;
              *(undefined8 *)(pFVar19 + 0x48) = 0;
              *(undefined8 *)(pFVar19 + 0x50) = 0;
              *(undefined8 *)(pFVar19 + 0x58) = 0;
              *(undefined8 *)(pFVar19 + 0x60) = 0;
              pFVar12 = pFVar19;
              do {
                *(undefined8 *)(pFVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(pFVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(pFVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(pFVar12 + 0x28) = 0xffffffffffffffff;
                pFVar12[0x30] = (FScriptContainerElement)0x0;
                lVar14 = lVar14 + -1;
                pFVar12 = pFVar12 + 0x24;
              } while (lVar14 != 0);
              pFVar19[0x58] = (FScriptContainerElement)0x0;
              iVar8 = (int)local_250;
              if ((int)local_250 == local_250._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x140,0x10,&local_258,(int *)((longlong)&local_250 + 4));
              }
              local_250 = CONCAT44(local_250._4_4_,iVar8 + 1);
              _Dst = local_258.Data + (longlong)iVar8 * 0x140;
              memset(_Dst,0,0x140);
              pFVar12 = (FScriptContainerElement *)
                        UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar2,&local_120)
              ;
              if (_Dst != pFVar12) {
                pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&_Dst->field_0x0)->
                         AllocatorInstance).Data;
                if (pFVar3 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar3);
                }
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&_Dst->field_0x0)->
                AllocatorInstance).Data =
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
                     AllocatorInstance).Data;
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
                AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                *(int *)&_Dst[8].field_0x0 = *(int *)&pFVar12[8].field_0x0;
                *(int *)&_Dst[0xc].field_0x0 = *(int *)&pFVar12[0xc].field_0x0;
                *(undefined8 *)&pFVar12[8].field_0x0 = 0;
              }
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              pUVar2 = local_208;
              local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1c0.Data.ArrayNum = 0;
              local_1c0.Data.ArrayMax = 0;
              bVar6 = UInterchangeVolumeNode::GetCustomFileName(local_208,&local_1c0);
              if ((bVar6) && (1 < local_1c0.Data.ArrayNum)) {
                bVar5 = true;
                iVar8 = local_1c0.Data.ArrayNum + -1;
                if (local_1c0.Data.ArrayNum == 0) {
                  iVar8 = 0;
                }
                ::FString::AssignRange
                          ((FString *)pFVar19,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar8
                          );
                if ((local_a8.bIsSet == false) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x1bd,
                                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar13 = (FImportAssetResult *)(*pcVar4)();
                  return pFVar13;
                }
                *(FComponentMapping *)(pFVar19 + 0x10) =
                     local_a8.TypedValue.Attributes.Elements[0].Mappings.Elements[0];
                *(FComponentMapping *)(pFVar19 + 0x18) =
                     local_a8.TypedValue.Attributes.Elements[0].Mappings.Elements[1];
                *(FComponentMapping *)(pFVar19 + 0x20) =
                     local_a8.TypedValue.Attributes.Elements[0].Mappings.Elements[2];
                *(FComponentMapping *)(pFVar19 + 0x28) =
                     local_a8.TypedValue.Attributes.Elements[0].Mappings.Elements[3];
                *(undefined8 *)(pFVar19 + 0x30) = local_a8.TypedValue.Attributes.Elements._32_8_;
                *(undefined8 *)(pFVar19 + 0x38) =
                     local_a8.TypedValue.Attributes.Elements[1].Mappings.Elements._4_8_;
                *(undefined8 *)(pFVar19 + 0x40) =
                     local_a8.TypedValue.Attributes.Elements[1].Mappings.Elements._12_8_;
                *(undefined8 *)(pFVar19 + 0x48) =
                     local_a8.TypedValue.Attributes.Elements[1].Mappings.Elements._20_8_;
                *(undefined8 *)(pFVar19 + 0x50) = local_a8.TypedValue.Attributes.Elements[1]._28_8_;
                *(undefined8 *)(pFVar19 + 0x5c) = local_200;
                *(undefined4 *)(pFVar19 + 100) = uVar21;
                *(undefined4 *)(pFVar19 + 0x58) = local_a8.TypedValue._72_4_;
                UInterchangeVolumeNode::GetCustomFrameIndicesInAnimation
                          (pUVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(_Dst + 0x10));
                if (*(int *)(_Dst + 0x18) == 0) {
                  iVar23 = iVar23 + 1;
                }
                else {
                  iVar23 = iVar23 + *(int *)(_Dst + 0x18);
                }
              }
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
              local_1c8 = local_1c8 + 8;
              uVar15 = (ulonglong)local_1d0 & 0xffffffff;
              iVar8 = (int)local_238;
            }
            if (bVar5) {
              local_168 = &local_240;
              local_160 = &local_258;
              local_158 = local_1a0;
              local_170 = &local_168;
              local_178 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_2>,void,int>
                          ::Call;
              ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_178,None);
              iVar8 = (int)local_250;
              uVar15 = (ulonglong)(int)local_250;
              pFVar17 = (FVolumePayload *)(local_258.Data + uVar15 * 0x140);
              FVar16.Data = local_258.Data;
              while( true ) {
                if ((int)uVar15 != iVar8) {
                  `TCheckedPointerIterator<FVolumePayload,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_230);
                  uVar15 = local_250 & 0xffffffff;
                }
                if ((FVolumePayload *)FVar16.Data == pFVar17) {
                  pFVar9 = FText::AsLocalizable_Advanced_LocText
                                     (&local_f0,L"InterchangeSparseVolumeTextureFactory",
                                      L"SparseVolumeTextureFactory_Async_CannotRetrievePayload",
                                      L"UInterchangeSparseVolumeTextureFactory: The factory couldn\'t retrieve any valid payload from the translator."
                                     );
                  `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::
                  operator()(&local_218,pFVar9);
                  local_110.TextData.Reference = local_f0.TextData.Reference;
                  goto LAB_14e7201c8;
                }
                if ((((FVolumePayload *)FVar16.Data)->PayloadData).bIsSet != false) break;
                FVar16.Data = FVar16.Data + 0x140;
              }
              pUVar10 = Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();
              pUVar11 = local_1b0;
              iVar8 = (int)pUVar10->_padding_;
              if ((*(int *)(*(longlong *)&local_1b0->field_0x10 + 0x38) < iVar8) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&local_1b0->field_0x10 + 0x30) + (longlong)iVar8 * 8)
                  != &pUVar10->_padding_)) {
                pUVar10 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
                iVar8 = (int)pUVar10->_padding_;
                if ((iVar8 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
                   (((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar8 * 8
                      ) == &pUVar10->_padding_ && (iVar23 < 1)))) goto LAB_14e720360;
              }
              else if (iVar23 != 1) {
LAB_14e720360:
                pFVar9 = FText::AsLocalizable_Advanced_LocText
                                   (&local_100,L"InterchangeSparseVolumeTextureFactory",
                                    L"SparseVolumeTextureFactory_Async_CannotSetup",
                                    L"UInterchangeSparseVolumeTextureFactory: The factory cannot setup the created asset with the provided payload data."
                                   );
                `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::
                operator()(&local_218,pFVar9);
                local_110.TextData.Reference = local_100.TextData.Reference;
                goto LAB_14e7201c8;
              }
              pTVar20 = &this->ProcessedPayloads;
              if (pTVar20 == (TArray<FVolumePayload,TSizedDefaultAllocator<32>_> *)&local_258) {
              }
              else {
                DestructItems<FVolumePayload,int>
                          ((FVolumePayload *)(pTVar20->AllocatorInstance).Data,
                           (this->ProcessedPayloads).ArrayNum);
                pFVar12 = (pTVar20->AllocatorInstance).Data;
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
                (pTVar20->AllocatorInstance).Data = local_258.Data;
                (this->ProcessedPayloads).ArrayNum = (int)local_250;
                (this->ProcessedPayloads).ArrayMax = local_250._4_4_;
                local_258.Data = (FScriptContainerElement *)0x0;
                local_250 = 0;
                local_250._0_4_ = iVar22;
              }
            }
            else {
              pFVar9 = FText::AsLocalizable_Advanced_LocText
                                 (&local_110,L"InterchangeSparseVolumeTextureFactory",
                                  L"SparseVolumeTextureFactory_InvalidPayloadKey",
                                  L"None of the translated UInterchangeVolumeGridNodes has a valid payload key."
                                 );
              `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::
              operator()(&local_218,pFVar9);
LAB_14e7201c8:
              if (local_110.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
              }
            }
            DestructItems<FVolumePayload,int>((FVolumePayload *)local_258.Data,(int)local_250);
            if ((FVolumePayload *)local_258.Data != (FVolumePayload *)0x0) {
              FMemory::Free(local_258.Data);
            }
            DestructItems<UE::Interchange::FVolumePayloadKey,int>
                      ((FVolumePayloadKey *)local_240.Data,(int)local_238);
            if ((FVolumePayloadKey *)local_240.Data != (FVolumePayloadKey *)0x0) {
              FMemory::Free(local_240.Data);
            }
          }
          if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
        }
      }
      if (local_1f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.SubPathString.Data.AllocatorInstance.Data);
      }
      goto LAB_14e7204b7;
    }
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_c0,L"InterchangeSparseVolumeTextureFactory",
                        L"SparseVolumeTextureFactory_Async_NodeWrongClass",
                        L"UInterchangeSparseVolumeTextureFactory: Asset node parameter is not a child of UInterchangeSparseVolumeTextureFactoryNode."
                       );
    `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
              (&local_218,pFVar9);
    local_150.TextData.Reference = local_c0.TextData.Reference;
  }
  if (local_150.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
  }
LAB_14e7204b7:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ReinstateSourceData @ 14e727db0

void __thiscall
UInterchangeSparseVolumeTextureFactory::ReinstateSourceData
          (UInterchangeSparseVolumeTextureFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e728330

bool __thiscall
UInterchangeSparseVolumeTextureFactory::SetSourceFilename
          (UInterchangeSparseVolumeTextureFactory *this,UObject *param_1,FString *param_2,
          int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e728cc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeSparseVolumeTextureFactory::SetupObject_GameThread
          (UInterchangeSparseVolumeTextureFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  TObjectIterator<UHeterogeneousVolumeComponent> local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1010,
               "UInterchangeSparseVolumeTextureFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Volume\\InterchangeSparseVolumeTextureFactory.cpp"
               ,0x3f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1010);
  }
  if (this->bSkipImport == false) {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                           ,0x125,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1->bIsReimport != false) {
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar5 = Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister();
      GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UHeterogeneousVolumeComponent>::Advance(&local_28);
        lVar6 = (longlong)local_28.Index;
        if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) break;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar6 = (**(code **)(**(longlong **)
                               (local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x690))
                          (*(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),0
                          );
        if (lVar6 != 0) {
          lVar7 = (longlong)local_28.Index;
          uVar4 = 0;
          if (local_28.Index < local_28.ObjectArray.ArrayNum) {
            uVar4 = (uint)~local_28.Index >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(**(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) +
                      0x6b8))(*(longlong **)
                               (local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8),0,lVar6);
          lVar6 = (longlong)local_28.Index;
          uVar4 = 0;
          if (local_28.Index < local_28.ObjectArray.ArrayNum) {
            uVar4 = (uint)~local_28.Index >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UActorComponent::MarkRenderStateDirty
                    (*(UActorComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8))
          ;
        }
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticRegisterNativesUInterchangeSparseVolumeTextureFactory @ 14e72a5d0

void __cdecl
UInterchangeSparseVolumeTextureFactory::StaticRegisterNativesUInterchangeSparseVolumeTextureFactory
          (void)

{
  return;
}

