// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149ce55b0

UClass * __cdecl UPCGInstanceDataPackerByRegex::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataPackerByRegex",
               &Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataPackerByRegex,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGInstanceDataPackerByRegex>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataPackerByRegex>,local_res8,
               UPCGInstanceDataPackerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton;
}

// UPCGInstanceDataPackerByRegex @ 149d34400

UPCGInstanceDataPackerByRegex * __thiscall
UPCGInstanceDataPackerByRegex::UPCGInstanceDataPackerByRegex
          (UPCGInstanceDataPackerByRegex *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGInstanceDataPackerByRegex__6B_;
  (this->RegexPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegexPatterns).ArrayNum = 0;
  (this->RegexPatterns).ArrayMax = 0;
  return this;
}

// UPCGInstanceDataPackerByRegex @ 149d34440

UPCGInstanceDataPackerByRegex * __thiscall
UPCGInstanceDataPackerByRegex::UPCGInstanceDataPackerByRegex
          (UPCGInstanceDataPackerByRegex *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGInstanceDataPackerByRegex__6B_;
  (this->RegexPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegexPatterns).ArrayNum = 0;
  (this->RegexPatterns).ArrayMax = 0;
  return this;
}

// ~UPCGInstanceDataPackerByRegex @ 149d35020

void __thiscall
UPCGInstanceDataPackerByRegex::~UPCGInstanceDataPackerByRegex(UPCGInstanceDataPackerByRegex *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGInstanceDataPackerByRegex__6B_;
  DestructItems<FString,int>
            ((FString *)(this->RegexPatterns).AllocatorInstance.Data,(this->RegexPatterns).ArrayNum)
  ;
  pFVar1 = (this->RegexPatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGInstanceDataPackerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149d54650

UClass * __cdecl UPCGInstanceDataPackerByRegex::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataPackerByRegex",
               &Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataPackerByRegex,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGInstanceDataPackerByRegex>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataPackerByRegex>,local_res8,
               UPCGInstanceDataPackerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataPackerByRegex.InnerSingleton;
}

// PackInstances_Implementation @ 149d5dac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UPCGInstanceDataPackerByRegex::PackInstances_Implementation
          (UPCGInstanceDataPackerByRegex *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          FPCGMeshInstanceList *param_3,FPCGPackedCustomData *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  ForElementType<FSetElementId> FVar12;
  FName *this_00;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_278 [32];
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined1 local_228 [8];
  TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> local_220;
  FPCGMetadataAttributeBase *local_210;
  uint local_208;
  TArray<FName,TSizedDefaultAllocator<32>_> local_200;
  FPCGPackedCustomData *local_1f0;
  FScriptContainerElement *local_1e8;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_1e0;
  FRegexMatcher local_1d0;
  int local_1b0 [2];
  UPCGSpatialData *local_1a8;
  FScriptContainerElement *local_1a0;
  UPCGInstanceDataPackerByRegex *local_198;
  FPCGMeshInstanceList *local_190;
  FRegexPattern local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FString local_128;
  FString local_118;
  FText local_108;
  FName local_f8;
  FPCGMetadataDomainID FStack_f0;
  FPCGAttributeIdentifier local_d8;
  FText local_b8;
  FTextFormat local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  bVar2 = false;
  bVar18 = false;
  local_1f0 = param_4;
  local_208 = 0;
  local_1a8 = param_2;
  local_198 = this;
  local_190 = param_3;
  if ((param_2 == (UPCGSpatialData *)0x0) ||
     ((UPCGMetadata *)param_2->_padding_ == (UPCGMetadata *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"PCGInstanceDataPackerByRegex",L"InvalidInputData",
                          L"Invalid input data");
      pFVar8 = FText::ToString(pFVar9);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      bVar18 = param_1 != (FPCGContext *)0x0;
      if (bVar18) {
        FPCGContext::GetTaskName(param_1,&local_118);
        FPCGContext::GetExecutionSourceName(param_1,&local_128);
      }
      local_258 = (FScriptContainerElement *)pwVar14;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar18) && (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if ((bVar18) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    UPCGMetadata::GetAttributes((UPCGMetadata *)param_2->_padding_,&local_200,&local_1e0);
    local_208 = (this->RegexPatterns).ArrayNum;
    uVar7 = (ulonglong)(int)local_208;
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pFVar13 = (this->RegexPatterns).AllocatorInstance.Data;
    pFVar16 = pFVar13 + uVar7 * 0x10;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_1a0 = pFVar16;
    while( true ) {
      local_1e8 = pFVar13;
      if ((this->RegexPatterns).ArrayNum != (int)uVar7) {
        local_228[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_228);
      }
      if (pFVar13 == pFVar16) break;
      FRegexPattern::FRegexPattern(&local_188,(FString *)pFVar13,None);
      uVar17 = 0;
      if (0 < local_200.ArrayNum) {
        lVar15 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar17 < local_200.ArrayNum) {
            uVar5 = ~uVar17 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_250 = (FScriptContainerElement *)(longlong)local_200.ArrayNum;
            local_258 = (FScriptContainerElement *)(longlong)(int)uVar17;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          this_00 = (FName *)(local_200.AllocatorInstance.Data + lVar15);
          pFVar8 = ::FName::ToString(this_00,&local_178);
          FRegexMatcher::FRegexMatcher(&local_1d0,&local_188,pFVar8);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          bVar4 = FRegexMatcher::FindNext(&local_1d0);
          if (bVar4) {
            local_f8 = *this_00;
            FStack_f0 = PCGMetadataDomainID::Default;
            FVar3 = FStack_f0;
            FStack_f0._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_d8.MetadataDomain.Flag = FStack_f0.Flag;
            local_d8.MetadataDomain._1_3_ = FStack_f0._1_3_;
            local_d8.MetadataDomain.CustomFlag = FStack_f0.CustomFlag;
            local_d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_f0 = FVar3;
            local_d8.Name = local_f8;
            local_210 = UPCGMetadata::GetConstAttribute
                                  ((UPCGMetadata *)local_1a8->_padding_,&local_d8);
            if ((local_210 == (FPCGMetadataAttributeBase *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AttributeBase",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerByRegex.cpp"
                                   ,0x2f,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar12 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar12 = local_98.Hash.SecondaryData;
              }
              for (iVar6 = *(int *)((longlong)FVar12 +
                                   (ulonglong)(local_98.HashSize - 1U & local_210->AttributeId) * 4)
                  ; iVar6 != -1;
                  iVar6 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
                if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar6 * 0xc) ==
                    local_210->AttributeId) goto LAB_149d5df8a;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_98,local_1b0,(bool *)&local_210->AttributeId);
            switch(local_210->TypeId) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 10:
              param_4->NumCustomDataFloats = param_4->NumCustomDataFloats + 1;
              break;
            case 4:
              param_4->NumCustomDataFloats = param_4->NumCustomDataFloats + 2;
              break;
            case 5:
            case 0xb:
              param_4->NumCustomDataFloats = param_4->NumCustomDataFloats + 3;
              break;
            case 6:
            case 7:
              param_4->NumCustomDataFloats = param_4->NumCustomDataFloats + 4;
              break;
            default:
              if (2 < (byte)LogPCG._0_1_) {
                pFVar9 = FText::FromName(&local_b8,this_00);
                pFVar10 = FText::AsLocalizable_Advanced_LocText
                                    (&local_138,L"PCGInstanceDataPackerByRegex",
                                     L"InvalidAttributeType",
                                     L"Attribute name \'{0}\' is not of a valid type");
                pFVar11 = FTextFormat::FTextFormat(&local_a8,pFVar10,Default);
                pFVar9 = FText::Format<FText>(&local_148,pFVar11,pFVar9);
                pFVar8 = FText::ToString(pFVar9);
                if ((pFVar8->Data).ArrayNum == 0) {
                  pwVar14 = L"";
                }
                else {
                  pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
                }
                if (param_1 != (FPCGContext *)0x0) {
                  FPCGContext::GetTaskName(param_1,&local_158);
                  bVar2 = true;
                  bVar18 = true;
                  FPCGContext::GetExecutionSourceName(param_1,&local_168);
                }
                local_258 = (FScriptContainerElement *)pwVar14;
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if ((bVar18) &&
                   (bVar18 = false,
                   local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                }
                if ((bVar2) &&
                   (bVar2 = false,
                   local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                if (local_148.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
                }
                param_4 = local_1f0;
                if (local_138.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
                  param_4 = local_1f0;
                }
              }
              goto LAB_149d5df8a;
            }
            if (local_220.AllocatorInstance.Data <= (FScriptContainerElement *)&local_210) {
              if ((FScriptContainerElement *)&local_210 <
                  local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 8) {
                local_240 = (longlong)local_220.ArrayNum;
                local_238 = 8;
                local_258 = (FScriptContainerElement *)&local_210;
                local_250 = local_220.AllocatorInstance.Data;
                local_248 = (longlong)local_220.ArrayMax;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
            }
            iVar6 = local_220.ArrayNum;
            if (local_220.ArrayNum == local_220.ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_220.AllocatorInstance,&local_220.ArrayMax);
            }
            local_220.ArrayNum = iVar6 + 1;
            *(FPCGMetadataAttributeBase **)(local_220.AllocatorInstance.Data + (longlong)iVar6 * 8)
                 = local_210;
          }
LAB_149d5df8a:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1d0.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1d0.Pattern.Implementation.SharedReferenceCount.ReferenceController);
          uVar17 = uVar17 + 1;
          lVar15 = lVar15 + 8;
          pFVar13 = local_1e8;
          pFVar16 = local_1a0;
        } while ((int)uVar17 < local_200.ArrayNum);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.Implementation.SharedReferenceCount.ReferenceController);
      uVar7 = (ulonglong)local_208;
      pFVar13 = pFVar13 + 0x10;
      this = local_198;
    }
    UPCGInstanceDataPackerBase::PackCustomDataFromAttributes
              ((UPCGInstanceDataPackerBase *)this,local_190,&local_220,param_4);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUPCGInstanceDataPackerByRegex @ 149d662e0

void __cdecl UPCGInstanceDataPackerByRegex::StaticRegisterNativesUPCGInstanceDataPackerByRegex(void)

{
  return;
}

