// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 11

// StaticClass @ 14e3212e0

UClass * __cdecl UInterchangeResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResult",
               &Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton,
               StaticRegisterNativesUInterchangeResult,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResult>,
               InternalVTableHelperCtorCaller<UInterchangeResult>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton;
}

// UInterchangeResult @ 14e4015a0

UInterchangeResult * __thiscall
UInterchangeResult::UInterchangeResult(UInterchangeResult *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResult__6B_;
  (this->SourceAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAssetName).Data.ArrayNum = 0;
  (this->SourceAssetName).Data.ArrayMax = 0;
  (this->DestinationAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationAssetName).Data.ArrayNum = 0;
  (this->DestinationAssetName).Data.ArrayMax = 0;
  (this->AssetFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetFriendlyName).Data.ArrayNum = 0;
  (this->AssetFriendlyName).Data.ArrayMax = 0;
  (this->AssetType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InterchangeKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterchangeKey).Data.ArrayNum = 0;
  (this->InterchangeKey).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResult @ 14e4015f0

UInterchangeResult * __thiscall
UInterchangeResult::UInterchangeResult(UInterchangeResult *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResult__6B_;
  (this->SourceAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAssetName).Data.ArrayNum = 0;
  (this->SourceAssetName).Data.ArrayMax = 0;
  (this->DestinationAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationAssetName).Data.ArrayNum = 0;
  (this->DestinationAssetName).Data.ArrayMax = 0;
  (this->AssetFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetFriendlyName).Data.ArrayNum = 0;
  (this->AssetFriendlyName).Data.ArrayMax = 0;
  (this->AssetType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InterchangeKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterchangeKey).Data.ArrayNum = 0;
  (this->InterchangeKey).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResult @ 14e404c10

void __thiscall UInterchangeResult::~UInterchangeResult(UInterchangeResult *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResult__6B_;
  pFVar1 = (this->InterchangeKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetFriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FromJson @ 14e4363a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResult * __cdecl UInterchangeResult::FromJson(FString *param_1)

{
  TJsonStringReader<wchar_t> *pTVar1;
  code *pcVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar5;
  UInterchangeResult *pUVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  FName *pFVar11;
  FProperty *this;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UInterchangeResult *pUVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_268 [32];
  UInterchangeResult *local_248;
  undefined4 local_240;
  FFeedbackContext *local_238;
  undefined1 local_228 [4];
  uint local_224;
  FString local_220;
  FString local_210;
  TSharedPtr<FJsonObject,1> local_200;
  FString local_1f0;
  undefined8 local_1e0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  StackState local_1c8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_190;
  UClass *local_188;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_120;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  pTVar5 = TJsonStringReader<wchar_t>::Create(&local_120,param_1);
  pTVar15 = (pTVar5->SharedReferenceCount).ReferenceController;
  pTVar1 = pTVar5->Object;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d0 = pTVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  pUVar16 = (UInterchangeResult *)0x0;
  local_1c8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Identifier.Data.ArrayNum = 0;
  local_1c8.Identifier.Data.ArrayMax = 0;
  local_1c8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Object = (FJsonObject *)0x0;
  local_200.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8.Array.ArrayNum = 0;
  local_1c8.Array.ArrayMax = 0;
  local_1c8.Object.Object = (FJsonObject *)0x0;
  local_1c8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar1,&local_1c8,None);
  pUVar6 = pUVar16;
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_1c8,&local_200);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data,
               local_1c8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1c8.Array.AllocatorInstance.Data);
    }
    if (local_1c8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) || (local_200.Object == (FJsonObject *)0x0)) goto LAB_14e4368d4;
    local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.Data.ArrayNum = 0;
    local_1f0.Data.ArrayMax = 0;
    if ((local_200.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UInterchangeResult *)(*pcVar2)();
      return pUVar6;
    }
    local_178 = L"Type";
    uStack_170 = 4;
    local_108._12_4_ = uStack_16c;
    local_108.Size = 4;
    local_108.DataPtr = L"Type";
    bVar4 = FJsonObject::TryGetStringField(local_200.Object,&local_108,&local_1f0);
    FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
    if (bVar4) {
      local_1d8 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
      if ((local_200.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UInterchangeResult *)(*pcVar2)();
        return pUVar6;
      }
      local_168 = L"Properties";
      uStack_160 = 10;
      local_f8._12_4_ = uStack_15c;
      local_f8.Size = 10;
      local_f8.DataPtr = L"Properties";
      bVar4 = FJsonObject::TryGetArrayField(local_200.Object,&local_f8,&local_1d8);
      FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
      if (bVar4) {
        local_158 = local_1f0.Data.AllocatorInstance.Data;
        iStack_150 = local_1f0.Data.ArrayNum + -1;
        if (local_1f0.Data.ArrayNum == 0) {
          iStack_150 = 0;
        }
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        local_e8._12_4_ = uStack_14c;
        local_e8.Size = iStack_150;
        local_e8.DataPtr = (wchar_t *)local_158;
        pUVar7 = (UClass *)UClass::TryFindTypeSlow(pUVar7,&local_e8,None);
        local_1e0 = 0;
        local_188 = pUVar7;
        pUVar8 = GetTransientPackage();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar9 = StaticClass();
        CheckIsClassChildOf_Internal(pUVar9,pUVar7);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_NoFlags;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = pUVar8;
        pUVar6 = (UInterchangeResult *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar10 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        local_190 = local_1d8;
        local_224 = local_1d8->ArrayNum;
        uVar12 = (ulonglong)(int)local_224;
        pFVar14 = (local_1d8->AllocatorInstance).Data;
        pFVar17 = pFVar14 + uVar12 * 0x10;
        while( true ) {
          if (local_190->ArrayNum != (int)uVar12) {
            local_228[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_228);
          }
          FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
          pTVar15 = local_1d0;
          if (pFVar14 == pFVar17) goto LAB_14e4368ca;
          if ((*(longlong *)pFVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UInterchangeResult *)(*pcVar2)();
            return pUVar6;
          }
          plVar10 = (longlong *)(**(code **)**(undefined8 **)pFVar14)();
          local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_210.Data.ArrayNum = 0;
          local_210.Data.ArrayMax = 0;
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          if ((*plVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UInterchangeResult *)(*pcVar2)();
            return pUVar6;
          }
          local_148 = L"Name";
          uStack_140 = 4;
          local_d8._12_4_ = uStack_13c;
          local_d8.Size = 4;
          local_d8.DataPtr = L"Name";
          bVar4 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_d8,&local_210);
          if (!bVar4) break;
          if ((*plVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UInterchangeResult *)(*pcVar2)();
            return pUVar6;
          }
          local_138 = L"Value";
          uStack_130 = 5;
          local_c8._12_4_ = uStack_12c;
          local_c8.Size = 5;
          local_c8.DataPtr = L"Value";
          bVar4 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_c8,&local_220);
          if (!bVar4) break;
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_210.Data.ArrayNum != 0) {
            FVar13.Data = local_210.Data.AllocatorInstance.Data;
          }
          pFVar11 = ::FName::FName(&local_128,(wchar_t *)FVar13.Data);
          this = UStruct::FindPropertyByName((UStruct *)pUVar7,*pFVar11);
          pFVar3 = GWarn;
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_220.Data.ArrayNum != 0) {
            FVar13.Data = local_220.Data.AllocatorInstance.Data;
          }
          bVar4 = FProperty::ValidateImportFlags(this,0,(FOutputDevice *)GWarn);
          if ((bVar4) && (FVar13.Data != (FScriptContainerElement *)0x0)) {
            local_238 = pFVar3;
            local_240 = 0x8000000;
            local_248 = pUVar6;
            (**(code **)(this->_padding_ + 0xe8))(this,FVar13.Data,pUVar6,1);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          pFVar14 = pFVar14 + 0x10;
          uVar12 = (ulonglong)local_224;
          pUVar7 = local_188;
        }
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
        pTVar15 = local_1d0;
        pUVar6 = pUVar16;
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
          FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
          pTVar15 = local_1d0;
        }
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data,
               local_1c8.Array.ArrayNum);
    FVar13.Data = local_1c8.Identifier.Data.AllocatorInstance.Data;
    if ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1c8.Array.AllocatorInstance.Data);
      FVar13.Data = local_1c8.Identifier.Data.AllocatorInstance.Data;
    }
  }
LAB_14e4368ca:
  pUVar16 = pUVar6;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
LAB_14e4368d4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_200.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return pUVar16;
}

// GetMessageLogText @ 14e43fa70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UInterchangeResult::GetMessageLogText(UInterchangeResult *this,FText *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TRefCountPtr<ITextData> TVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  bool bVar14;
  FName local_res8;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FSoftObjectPath local_88;
  FText local_68;
  undefined1 local_58 [16];
  FText local_48;
  FText local_38;
  
  pFVar12 = (FScriptContainerElement *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_b8.Data.ArrayNum = (this->SourceAssetName).Data.ArrayNum;
  lVar11 = (longlong)local_b8.Data.ArrayNum;
  pFVar2 = (this->SourceAssetName).Data.AllocatorInstance.Data;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_b8.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
  }
  iVar13 = local_b8.Data.ArrayNum - 1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  if (0x200 < iVar13) {
    iVar13 = local_b8.Data.ArrayNum - 0x1fe;
    if (local_b8.Data.ArrayNum == 0) {
      iVar13 = -0x1fd;
    }
    pFVar4 = ::FString::RightChop(&local_b8,(FString *)&local_a8,iVar13);
    ::FString::ConcatCF((FString *)&local_d8,L"...",pFVar4);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.TextData.Reference;
    local_b8.Data.ArrayNum = local_d8.Flags;
    local_b8.Data.ArrayMax = local_d8._12_4_;
    local_d8.Flags = 0;
    local_d8._12_4_ = 0;
    local_d8.TextData.Reference = (ITextData *)0x0;
    if ((ITextData *)local_a8.DataPtr != (ITextData *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  pUVar3 = (this->AssetType).field0_0x0.DebugPtr;
  if (pUVar3 == (UClass *)0x0) {
    pFVar4 = ::FString::FString((FString *)&local_a8,L"Unknown");
    FText::FromString(&local_68,pFVar4);
    TVar10.Reference = (ITextData *)local_a8.DataPtr;
  }
  else {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_d8);
    FText::FromString(&local_68,(FString *)&local_d8);
    TVar10.Reference = local_d8.TextData.Reference;
  }
  if (TVar10.Reference != (ITextData *)0x0) {
    FMemory::Free(TVar10.Reference);
  }
  local_c8.Data.ArrayNum = (this->AssetFriendlyName).Data.ArrayNum;
  lVar11 = (longlong)local_c8.Data.ArrayNum;
  pFVar2 = (this->AssetFriendlyName).Data.AllocatorInstance.Data;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.ArrayNum == 0) {
    local_c8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,local_c8.Data.ArrayNum,
               &local_c8.Data.ArrayMax);
    memcpy(local_c8.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
  }
  if (local_c8.Data.ArrayNum < 2) {
    local_d8.TextData.Reference =
         (ITextData *)(this->DestinationAssetName).Data.AllocatorInstance.Data;
    iVar13 = (this->DestinationAssetName).Data.ArrayNum;
    local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_88.AssetPath.PackageName.Number = 0;
    local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_88.AssetPath.AssetName.Number = 0;
    local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Size = iVar13 + -1;
    if (iVar13 == 0) {
      local_a8.Size = 0;
    }
    local_88.SubPathString.Data.ArrayNum = 0;
    local_88.SubPathString.Data.ArrayMax = 0;
    local_d8.Flags = local_a8.Size;
    local_a8._12_4_ = local_d8._12_4_;
    local_a8.DataPtr = (wchar_t *)local_d8.TextData.Reference;
    FSoftObjectPath::SetPath(&local_88,&local_a8);
    local_res8 = local_88.AssetPath.AssetName;
    bVar14 = local_88.AssetPath.AssetName != (FName)0x0;
    if (bVar14) {
      pFVar5 = (FText *)::FName::ToString(&local_res8,(FString *)&local_a8);
      pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->TextData)->
                AllocatorInstance).Data;
    }
    else {
      local_d8.Flags = 0;
      local_d8._12_4_ = 0;
      pFVar5 = &local_d8;
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->TextData)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    uVar1 = pFVar5->Flags;
    iVar13 = *(int *)&pFVar5->field_0xc;
    *(undefined8 *)&pFVar5->Flags = 0;
    if (bVar14) {
      if ((ITextData *)local_a8.DataPtr != (ITextData *)0x0) {
        FMemory::Free(local_a8.DataPtr);
      }
    }
    if ((!bVar14) && (local_d8.TextData.Reference != (ITextData *)0x0)) {
      FMemory::Free(local_d8.TextData.Reference);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.AllocatorInstance.Data = pFVar12;
    local_c8.Data.ArrayNum = uVar1;
    local_c8.Data.ArrayMax = iVar13;
    if ((local_88.AssetPath.PackageName != (FName)0x0) && (1 < local_88.SubPathString.Data.ArrayNum)
       ) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      iVar13 = local_88.SubPathString.Data.ArrayNum + -1;
      if (local_88.SubPathString.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      pFVar4 = ::FString::ConstructFromPtrSize
                         ((FString *)&local_a8,
                          (uchar *)local_88.SubPathString.Data.AllocatorInstance.Data,iVar13);
      if (&local_98 != pFVar4) {
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_98.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if ((ITextData *)local_a8.DataPtr != (ITextData *)0x0) {
        FMemory::Free(local_a8.DataPtr);
      }
      pFVar4 = FPaths::GetExtension((FString *)&local_d8,&local_98,false);
      if (&local_c8 != pFVar4) {
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_c8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_d8.TextData.Reference);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = (FText *)(**(code **)(this->_padding_ + 0x2b8))(this,local_58);
  local_d8.TextData.Reference = local_68.TextData.Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,&local_res8);
  }
  local_d8.Flags = local_68.Flags;
  pFVar6 = FText::FromString(&local_48,&local_c8);
  pFVar7 = FText::FromString(&local_38,&local_b8);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_a8,L"InterchangeManager",L"MessageLog",
                      L"[{0} : \'{1}\', {2}] {3}");
  pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_88,pFVar8,Default);
  FText::Format<FText,FText,FText,FText>
            (__return_storage_ptr__,pFVar9,pFVar7,pFVar6,&local_d8,pFVar5);
  if ((ITextData *)local_a8.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.DataPtr + 0x10))();
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e441ab0

UClass * __cdecl UInterchangeResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResult",
               &Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton,
               StaticRegisterNativesUInterchangeResult,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResult>,
               InternalVTableHelperCtorCaller<UInterchangeResult>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResult.InnerSingleton;
}

// GetResultType @ 14e442680

EInterchangeResultType __thiscall UInterchangeResult::GetResultType(UInterchangeResult *this)

{
  return Success;
}

// GetText @ 14e4430e0

FText * __thiscall
UInterchangeResult::GetText(UInterchangeResult *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResult @ 14e45ffb0

void __cdecl UInterchangeResult::StaticRegisterNativesUInterchangeResult(void)

{
  return;
}

// ToJson @ 14e460f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UInterchangeResult::ToJson(UInterchangeResult *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  code *pcVar2;
  FProperty *this_01;
  FElement *pFVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FArchiveState *pFVar10;
  FArchiveState *this_02;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  FArchiveState *pFVar14;
  TReferenceControllerBase<1> *this_03;
  ulonglong in_stack_fffffffffffffe58;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_188;
  ForAnyElementType local_178;
  undefined8 local_170;
  TSharedPtr<FJsonValue,1> local_168;
  TFieldIterator<FProperty> local_158;
  FString local_140;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_130;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_120;
  TReferenceControllerBase<1> *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  TSharedPtr<FJsonObject,1> local_e0;
  FString local_d0;
  FString local_c0;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_b0;
  TSharedPtr<FJsonObject,1> local_a0;
  TSharedRef<FJsonObject,1> local_90;
  TSharedRef<FJsonObject,1> local_80;
  FString local_70 [3];
  
  pTVar6 = MakeShared<FJsonObject,1>(&local_90);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  pTVar6 = MakeShared<FJsonObject,1>(&local_80);
  local_118 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_118 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_118->SharedReferenceCount = (atomic<int>)((int)local_118->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  pFVar7 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)this->_padding_,local_70,(UObject *)0x0);
  ::FString::FString(&local_110,L"Type");
  FJsonObject::SetStringField(this_00,&local_110,pFVar7);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
  }
  local_158.Struct = (UStruct *)this->_padding_;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  if (local_158.Struct == (UStruct *)0x0) {
    local_158.Field = (FField *)0x0;
  }
  else {
    local_158.Field = (local_158.Struct)->ChildProperties;
  }
  local_158.InterfaceIndex = -1;
  local_158.bIncludeSuper = true;
  local_158.bIncludeDeprecated = true;
  local_158.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_158);
  pTVar12 = _UNK_150651568;
  pFVar3 = ___xmm_00000000000000000000000000000010;
  this_01 = (FProperty *)local_158.Field;
  while (local_158.Field = (FField *)this_01, this_01 != (FProperty *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    FProperty::GetNameCPP(this_01,&local_d0);
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
    (**(code **)(this_01->_padding_ + 0xe0))
              (this_01,&local_140,this,1,0,this,in_stack_fffffffffffffe58,0);
    pTVar8 = ::operator_new(0x60);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      this_03 = (TReferenceControllerBase<1> *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      this_03 = pTVar8 + 1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
      pTVar8[2]._padding_ = 0;
      pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[1]._padding_ = 0;
      pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[3]._padding_ = 0;
      pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar8[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar8[4]._padding_ + 4) = 0;
      pTVar8[5]._padding_ = 0;
      if ((this_03 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      if ((this_03 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
    }
    ::FString::FString(&local_100,L"Name");
    FJsonObject::SetStringField((FJsonObject *)this_03,&local_100,&local_d0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if ((this_03 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    ::FString::FString(&local_f0,L"Value");
    FJsonObject::SetStringField((FJsonObject *)this_03,&local_f0,&local_140);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    pTVar9 = ::operator_new(0x30);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_168.Object = (FJsonValue *)pFVar3;
      local_168.SharedReferenceCount.ReferenceController = pTVar12;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e0.Object = (FJsonObject *)this_03;
      local_e0.SharedReferenceCount.ReferenceController = pTVar8;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar9 + 1),&local_e0);
      if (((FElement *)(pTVar9 + 1) == (FElement *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = pTVar9;
      local_168.Object = (FJsonValue *)(pTVar9 + 1);
      local_168.SharedReferenceCount.ReferenceController = pTVar9;
    }
    if (local_188.AllocatorInstance.Data <= &local_168) {
      uVar13 = (ulonglong)local_188.ArrayMax;
      if ((&local_168 <
           (TSharedPtr<FJsonValue,1> *)(local_188.AllocatorInstance.Data + uVar13 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), in_stack_fffffffffffffe58 = uVar13, bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
    }
    iVar5 = local_188.ArrayNum;
    if (local_188.ArrayNum == local_188.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_188.AllocatorInstance,&local_188.ArrayMax);
    }
    local_188.ArrayNum = iVar5 + 1;
    *(FJsonValue **)&local_188.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
         local_168.Object;
    *(TReferenceControllerBase<1> **)(local_188.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)
         = local_168.SharedReferenceCount.ReferenceController;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_168.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_158.Field = (local_158.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_158);
    this_01 = (FProperty *)local_158.Field;
  }
  pFVar14 = (FArchiveState *)0x0;
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::FString(&local_c0,L"Properties");
  FJsonObject::SetArrayField(this_00,&local_c0,&local_188);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  pFVar10 = ::operator_new(0x40);
  if (pFVar10 != (FArchiveState *)0x0) {
    this_02 = ::operator_new(0xa8);
    if (this_02 != (FArchiveState *)0x0) {
      this_02->_padding_ = 0;
      this_02->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_02->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_02->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_02->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_02->field_0x28 = 0;
      this_02->ArSerializingDefaults = 0;
      this_02->ArPortFlags = 0;
      this_02->ArMaxSerializeSize = 0;
      (this_02->ArUEVer).FileVersionUE4 = 0;
      (this_02->ArUEVer).FileVersionUE5 = 0;
      this_02->ArLicenseeUEVer = 0;
      (this_02->ArEngineVer).Major = 0;
      (this_02->ArEngineVer).Minor = 0;
      (this_02->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_02->ArEngineVer).field_0x6 = 0;
      (this_02->ArEngineVer).Changelist = 0;
      this_02->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_02->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_02->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_02->SerializedProperty = (FProperty *)0x0;
      this_02->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_02->bCustomVersionsAreReset = 0;
      this_02->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_02);
      this_02[1]._padding_ = 0;
      this_02->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      this_02[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      this_02[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar10->field_0x28;
      FArchiveState::SetIsSaving(this_02,true);
      (**(code **)(this_02->_padding_ + 0x108))(this_02,0);
      this_02->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar14 = this_02;
    }
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    pFVar10->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    pFVar10->ArSerializingDefaults = 0;
    pFVar10->ArPortFlags = 0;
    pFVar10->ArMaxSerializeSize = (long64)&local_178;
    pFVar10->ActiveFPLB = (FFastPathLoadBuffer *)pFVar14;
    (pFVar10->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar10->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar10->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    pFVar14 = pFVar10;
  }
  local_120.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar14;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_b0,&local_120);
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = ::operator_new(0x38);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_130.Object = pFVar3;
    local_130.SharedReferenceCount.ReferenceController = pTVar12;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12 = ::operator_new(0x30);
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pTVar11[2]._padding_ = 0x10;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.Object = this_00;
      local_a0.SharedReferenceCount.ReferenceController = pTVar1;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar12 + 1),&local_a0);
      if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      pTVar11[2]._padding_ = (longlong)(pTVar12 + 1);
      *(TReferenceControllerBase<1> **)&pTVar11[2].SharedReferenceCount = pTVar12;
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    local_130.Object = (FElement *)(pTVar11 + 1);
    *(undefined2 *)&pTVar11[3]._padding_ = 0;
    local_130.SharedReferenceCount.ReferenceController = pTVar11;
    if ((local_130.Object == (FElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
  }
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                    (&local_130,
                     (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_b0.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (bVar4) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_178.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_170;
    (__return_storage_ptr__->Data).ArrayMax = local_170._4_4_;
    local_170 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_188.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

