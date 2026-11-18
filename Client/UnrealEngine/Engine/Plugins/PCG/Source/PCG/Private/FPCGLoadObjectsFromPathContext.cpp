// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGLoadObjectsFromPathContext @ 149b55520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGLoadObjectsFromPathContext * __thiscall
FPCGLoadObjectsFromPathContext::FPCGLoadObjectsFromPathContext(FPCGLoadObjectsFromPathContext *this)

{
  FPCGContext::FPCGContext((FPCGContext *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FPCGContext__;
  this->_padding_ = (longlong)&_vftable__for__IPCGAsyncLoadingContext__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PathsToObjectsAndDataIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathsToObjectsAndDataIndex).ArrayNum = 0;
  (this->PathsToObjectsAndDataIndex).ArrayMax = 0;
  return this;
}

// InitializeAndRequestLoad @ 149c283c0

/* WARNING: Removing unreachable block (ram,0x000149c28ae6) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
          (FPCGLoadObjectsFromPathContext *this,FName param_1,
          FPCGAttributePropertyInputSelector *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          bool param_6)

{
  FPCGCrc *pFVar1;
  FName *pFVar2;
  FSoftObjectPath *this_00;
  TArray<TTuple<FSoftObjectPath,int,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  undefined8 uVar9;
  undefined8 this_01;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  longlong lVar17;
  FString *pFVar18;
  FText *pFVar19;
  UPCGMetadata *this_02;
  long64 lVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType this_03;
  size_t _Size;
  uint uVar22;
  FSoftObjectPath *pFVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  FName local_res10;
  FPCGAttributePropertyInputSelector *local_res18;
  uint local_3d8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_3d0;
  undefined1 local_3c0 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_3b0;
  undefined1 local_3a0 [24];
  TObjectPtr<UPCGMetadata>_u_0 local_388;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_380;
  longlong local_370;
  FPCGAttributePropertySelector local_368;
  FString local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  long64 local_2f8;
  long64 lStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  TSharedPtr<FCulture,1> local_2d8;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TSharedPtr<FCulture,1> local_2a8;
  TSharedPtr<FCulture,1> local_298;
  TSharedPtr<FCulture,1> local_288;
  TSharedPtr<FCulture,1> local_278;
  TArrayView<FString,int> local_268;
  TStringView<wchar_t> local_258;
  FString local_248;
  FText local_238;
  FString local_228;
  FString local_218;
  FText local_208;
  FText local_1f8;
  FString local_1e8;
  FString local_1d8;
  FText local_1c8;
  FText local_1b8;
  FString local_1a8;
  FString local_198;
  FText local_188;
  FText local_178;
  FString local_168;
  FText local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  FText local_118;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uVar24 = 0;
  if ((char)this->_padding_ == '\0') {
    local_res10 = param_1;
    local_res18 = param_2;
    if (((UPCGNode *)this->_padding_ == (UPCGNode *)0x0) ||
       (bVar10 = UPCGNode::IsInputPinConnected((UPCGNode *)this->_padding_,&local_res10), !bVar10))
    {
      uVar13 = param_3->ArrayNum;
      pTVar3 = &this->PathsToObjectsAndDataIndex;
      local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d0.ArrayNum = 0;
      local_3d0.ArrayMax = 0;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      piVar4 = &(this->PathsToObjectsAndDataIndex).ArrayMax;
      if ((this->PathsToObjectsAndDataIndex).ArrayMax < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar13,&pTVar3->AllocatorInstance,
                   (this->PathsToObjectsAndDataIndex).ArrayNum,piVar4);
      }
      iVar12 = param_3->ArrayNum;
      uVar26 = uVar24;
      if (0 < iVar12) {
        do {
          uVar22 = (uint)uVar24;
          uVar13 = 0;
          if ((int)uVar22 < iVar12) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          pFVar23 = (FSoftObjectPath *)((param_3->AllocatorInstance).Data + uVar26);
          if ((pFVar23->AssetPath).PackageName != (FName)0x0) {
            TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FSoftObjectPath_const_&>(&local_3d0,pFVar23);
          }
          iVar12 = (this->PathsToObjectsAndDataIndex).ArrayNum;
          if (iVar12 == *piVar4) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar3->AllocatorInstance,piVar4);
          }
          (this->PathsToObjectsAndDataIndex).ArrayNum = iVar12 + 1;
          this_00 = (FSoftObjectPath *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x28);
          FSoftObjectPath::FSoftObjectPath(this_00,pFVar23);
          this_00[1].AssetPath.PackageName.Number = uVar22;
          uVar26 = uVar26 + 0x20;
          uVar24 = (ulonglong)(uVar22 + 1);
          this_00[1].AssetPath.PackageName.ComparisonIndex.Value = 0xffffffff;
          iVar12 = param_3->ArrayNum;
        } while ((int)(uVar22 + 1) < iVar12);
      }
    }
    else {
      local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d0.ArrayNum = 0;
      local_3d0.ArrayMax = 0;
      FPCGDataCollection::GetInputsByPin
                ((FPCGDataCollection *)&this->_padding_,&local_380,&local_res10);
      local_3d8 = 0;
      if (0 < local_380.ArrayNum) {
        local_370 = 0;
        uVar26 = uVar24;
        do {
          lVar25 = local_370;
          uVar22 = (uint)uVar24;
          uVar13 = 0;
          if ((int)uVar22 < local_380.ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          pFVar21 = local_380.AllocatorInstance.Data + lVar25 * 0x78;
          if (*(UPCGData **)&pFVar21->field_0x0 == (UPCGData *)0x0) {
            if (1 < (byte)LogPCG._0_1_) {
              local_2d8.Object = (FCulture *)0x0;
              local_2d8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar14 = FText::AsNumber(&local_a8,uVar22,(FNumberFormattingOptions *)0x0,&local_2d8)
              ;
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_d8,L"PCGLoadObjectsFromPathContext",L"InvalidData",
                                   L"Invalid data for input {0}");
              pFVar16 = FTextFormat::FTextFormat(&local_78,pFVar15,Default);
              pFVar14 = FText::Format<FText>(&local_e8,pFVar16,pFVar14);
              FText::ToString(pFVar14);
              FPCGContext::GetTaskName((FPCGContext *)this,&local_f8);
              FPCGContext::GetExecutionSourceName((FPCGContext *)this,&local_108);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
              }
              if (local_d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2d8.SharedReferenceCount.ReferenceController);
            }
          }
          else {
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      (param_2,(FPCGAttributePropertyInputSelector *)&local_368,
                       *(UPCGData **)&pFVar21->field_0x0);
            PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((UPCGData *)(local_3c0 + 8),
                       *(FPCGAttributePropertySelector **)&pFVar21->field_0x0,SUB81(&local_368,0));
            PCGAttributeAccessorHelpers::CreateConstKeys
                      ((UPCGData *)local_3c0,*(FPCGAttributePropertySelector **)&pFVar21->field_0x0)
            ;
            if (((IPCGAttributeAccessor *)local_3c0._8_8_ == (IPCGAttributeAccessor *)0x0) ||
               ((IPCGAttributeAccessorKeys *)local_3c0._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
              if ((param_4) &&
                 (((this_02 = (UPCGMetadata *)
                              (**(code **)(**(longlong **)&pFVar21->field_0x0 + 800))(),
                   this_02 != (UPCGMetadata *)0x0 &&
                   (iVar12 = UPCGMetadata::GetAttributeCount(this_02), iVar12 == 0)) &&
                  (lVar20 = UPCGMetadata::GetLocalItemCount(this_02), lVar20 == 0)))) {
                piVar4 = &(this->PathsToObjectsAndDataIndex).ArrayMax;
                iVar12 = (this->PathsToObjectsAndDataIndex).ArrayNum;
                local_2f8 = lVar20;
                lStack_2f0 = lVar20;
                if (iVar12 == *piVar4) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&(this->PathsToObjectsAndDataIndex).AllocatorInstance,
                                      piVar4);
                }
                local_2e8 = 0;
                (this->PathsToObjectsAndDataIndex).ArrayNum = iVar12 + 1;
                lVar25 = (longlong)iVar12;
                local_2e0 = 0;
                pFVar21 = (this->PathsToObjectsAndDataIndex).AllocatorInstance.Data;
                *(long64 *)(pFVar21 + lVar25 * 0x28) = local_2f8;
                *(long64 *)(pFVar21 + lVar25 * 0x28 + 8) = lStack_2f0;
                *(undefined8 *)(pFVar21 + lVar25 * 0x28 + 0x10) = 0;
                *(undefined8 *)(pFVar21 + lVar25 * 0x28 + 0x18) = 0;
                *(uint *)(pFVar21 + lVar25 * 0x28 + 0x20) = uVar22;
                *(undefined4 *)(pFVar21 + lVar25 * 0x28 + 0x24) = 0xffffffff;
              }
              if ((!param_5) && (1 < (byte)LogPCG._0_1_)) {
                local_278.Object = (FCulture *)0x0;
                local_278.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                pFVar14 = FText::AsNumber(&local_98,uVar22,(FNumberFormattingOptions *)0x0,
                                          &local_278);
                pFVar18 = FPCGAttributePropertySelector::ToString(&local_368,&local_168,false);
                FText::FromString(&local_158,pFVar18);
                if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                }
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_118,L"PCGLoadObjectsFromPathContext",
                                     L"AttributeNotFound",
                                     L"Attribute/Property \'{0}\' does not exist on input {1}");
                pFVar16 = FTextFormat::FTextFormat(&local_88,pFVar15,Default);
                pFVar14 = FText::Format<FText,FText>(&local_128,pFVar16,&local_158,pFVar14);
                FText::ToString(pFVar14);
                FPCGContext::GetTaskName((FPCGContext *)this,&local_138);
                FPCGContext::GetExecutionSourceName((FPCGContext *)this,&local_148);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                if (local_128.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
                }
                if (local_118.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_278.SharedReferenceCount.ReferenceController);
              }
            }
            else {
              iVar12 = (**(code **)(*(longlong *)local_3c0._0_8_ + 0x10))();
              if (iVar12 != 0) {
                local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3b0.ArrayNum = 0;
                local_3b0.ArrayMax = 0;
                TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_3b0,iVar12,Default);
                this_01 = local_3c0._8_8_;
                uVar9 = local_3c0._0_8_;
                iVar5 = local_3b0.ArrayNum;
                local_2c8 = local_3b0.AllocatorInstance.Data;
                if ((local_3b0.ArrayNum < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                iStack_2c0 = iVar5;
                local_268._12_4_ = uStack_2bc;
                local_268.ArrayNum = iVar5;
                local_268.DataPtr = (FString *)local_2c8;
                bVar10 = IPCGAttributeAccessor::GetRange<FString>
                                   ((IPCGAttributeAccessor *)this_01,&local_268,0,
                                    (IPCGAttributeAccessorKeys *)uVar9,
                                    AllowBroadcastAndConstructible);
                if (bVar10) {
                  iVar5 = (this->PathsToObjectsAndDataIndex).ArrayNum;
                  pTVar3 = &this->PathsToObjectsAndDataIndex;
                  uVar13 = iVar5 + iVar12;
                  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
                  }
                  if ((this->PathsToObjectsAndDataIndex).ArrayMax < (int)uVar13) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,uVar13,&pTVar3->AllocatorInstance,iVar5,
                               &(this->PathsToObjectsAndDataIndex).ArrayMax);
                  }
                  uVar13 = 0;
                  if (0 < local_3b0.ArrayNum) {
                    lVar25 = 0;
                    do {
                      uVar22 = 0;
                      if ((int)uVar13 < local_3b0.ArrayNum) {
                        uVar22 = ~uVar13 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar7 = (code *)swi(3);
                        uVar11 = (*pcVar7)();
                        return (bool)uVar11;
                      }
                      pFVar21 = local_3b0.AllocatorInstance.Data + lVar25;
                      if (*(int *)(pFVar21 + 8) < 2) {
LAB_149c2883f:
                        bVar10 = true;
                      }
                      else {
                        ::FString::FString(&local_328,L"None");
                        uVar26 = 0x10;
                        iVar12 = *(int *)(pFVar21 + 8);
                        if (iVar12 == local_328.Data.ArrayNum) {
                          if (iVar12 < 2) goto LAB_149c2883f;
                          iVar12 = wcscmp(*(wchar_t **)pFVar21,
                                          (wchar_t *)local_328.Data.AllocatorInstance.Data);
                          bVar10 = iVar12 == 0;
                        }
                        else {
                          bVar10 = iVar12 + local_328.Data.ArrayNum == 1;
                        }
                        if (bVar10) goto LAB_149c2883f;
                        bVar10 = false;
                      }
                      if ((uVar26 != 0) &&
                         (uVar26 = 0,
                         local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_328.Data.AllocatorInstance.Data);
                      }
                      if ((bVar10) && (param_4)) {
                        iVar12 = (this->PathsToObjectsAndDataIndex).ArrayNum;
                        local_318 = 0;
                        uStack_310 = 0;
                        if (iVar12 == (this->PathsToObjectsAndDataIndex).ArrayMax) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x828,&pTVar3->AllocatorInstance,
                                              &(this->PathsToObjectsAndDataIndex).ArrayMax);
                        }
                        (this->PathsToObjectsAndDataIndex).ArrayNum = iVar12 + 1;
                        lVar17 = (longlong)iVar12;
                        local_308 = 0;
                        local_300 = 0;
                        pFVar6 = (pTVar3->AllocatorInstance).Data;
                        *(undefined8 *)(pFVar6 + lVar17 * 0x28) = local_318;
                        *(undefined8 *)(pFVar6 + lVar17 * 0x28 + 8) = uStack_310;
                        *(undefined8 *)(pFVar6 + lVar17 * 0x28 + 0x10) = 0;
                        *(undefined8 *)(pFVar6 + lVar17 * 0x28 + 0x18) = 0;
                        *(uint *)(pFVar6 + lVar17 * 0x28 + 0x20) = local_3d8;
                        *(uint *)(pFVar6 + lVar17 * 0x28 + 0x24) = uVar13;
                      }
                      local_3a0._0_4_ = 0;
                      local_3a0._4_4_ = 0;
                      local_3a0._8_4_ = 0;
                      local_3a0._12_4_ = 0;
                      local_3a0._16_4_ = 0;
                      local_3a0[0x14] = false;
                      local_3a0._21_3_ = 0;
                      local_388.DebugPtr = (UPCGMetadata *)0x0;
                      local_2b8 = *(wchar_t **)pFVar21;
                      iStack_2b0 = *(int *)(pFVar21 + 8) + -1;
                      if (*(int *)(pFVar21 + 8) == 0) {
                        iStack_2b0 = 0;
                      }
                      local_258._12_4_ = uStack_2ac;
                      local_258.Size = iStack_2b0;
                      local_258.DataPtr = local_2b8;
                      FSoftObjectPath::SetPath((FSoftObjectPath *)local_3a0,&local_258);
                      FVar8.Data = local_3d0.AllocatorInstance.Data;
                      if ((FName)local_3a0._0_8_ == (FName)0x0) {
                        if (((!bVar10) || (!param_5)) && (1 < (byte)LogPCG._0_1_)) {
                          local_298.Object = (FCulture *)0x0;
                          local_298.SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          pFVar14 = FText::AsNumber(&local_68,local_3d8,
                                                    (FNumberFormattingOptions *)0x0,&local_298);
                          pFVar18 = FPCGAttributePropertySelector::ToString
                                              (&local_368,&local_248,false);
                          FText::FromString(&local_238,pFVar18);
                          if (local_248.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_248.Data.AllocatorInstance.Data);
                          }
                          local_2a8.Object = (FCulture *)0x0;
                          local_2a8.SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          pFVar15 = FText::AsNumber(&local_58,uVar13,(FNumberFormattingOptions *)0x0
                                                    ,&local_2a8);
                          pFVar19 = FText::AsLocalizable_Advanced_LocText
                                              (&local_1f8,L"PCGLoadObjectsFromPathContext",
                                               L"InvalidPath",
                                               L"Value number {0} for Attribute/Property \'{1}\' on input {2} is not a valid path or is null. Will be ignored."
                                              );
                          pFVar16 = FTextFormat::FTextFormat(&local_c8,pFVar19,Default);
                          pFVar14 = FText::Format<FText,FText,FText>
                                              (&local_208,pFVar16,pFVar15,&local_238,pFVar14);
                          FText::ToString(pFVar14);
                          FPCGContext::GetTaskName((FPCGContext *)this,&local_218);
                          FPCGContext::GetExecutionSourceName((FPCGContext *)this,&local_228);
                          UE::Logging::Private::BasicLog<2>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                          if (local_228.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_228.Data.AllocatorInstance.Data);
                          }
                          if (local_218.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_218.Data.AllocatorInstance.Data);
                          }
                          if (local_208.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
                          }
                          if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
                          }
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline
                                    (local_2a8.SharedReferenceCount.ReferenceController);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline
                                    (local_298.SharedReferenceCount.ReferenceController);
                        }
                        if ((FPCGCrc)local_3a0._16_8_ != (FPCGCrc)0x0) {
                          FMemory::Free((void *)local_3a0._16_8_);
                        }
                      }
                      else {
                        pFVar23 = (FSoftObjectPath *)
                                  (local_3d0.AllocatorInstance.Data +
                                  (longlong)local_3d0.ArrayNum * 0x20);
                        this_03.Data = local_3d0.AllocatorInstance.Data;
                        if ((FSoftObjectPath *)local_3d0.AllocatorInstance.Data != pFVar23) {
                          do {
                            bVar10 = FSoftObjectPath::operator==
                                               ((FSoftObjectPath *)this_03.Data,
                                                (FSoftObjectPath *)local_3a0);
                            if (bVar10) {
                              if ((int)((longlong)this_03.Data - (longlong)FVar8.Data >> 5) != -1)
                              goto LAB_149c28a76;
                              break;
                            }
                            this_03.Data = this_03.Data + 0x20;
                          } while ((FSoftObjectPath *)this_03.Data != pFVar23);
                        }
                        iVar12 = local_3d0.ArrayNum;
                        if ((local_3d0.AllocatorInstance.Data <= (FSoftObjectPath *)local_3a0) &&
                           ((FScriptContainerElement *)local_3a0 <
                            local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayMax * 0x20))
                        {
                          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             );
                          if (bVar10) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          iVar12 = local_3d0.ArrayNum;
                        }
                        if (iVar12 == local_3d0.ArrayMax) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x820,&local_3d0.AllocatorInstance,&local_3d0.ArrayMax
                                             );
                        }
                        uVar9 = local_3a0._16_8_;
                        local_3d0.ArrayNum = iVar12 + 1;
                        lVar17 = (longlong)iVar12 * 0x20;
                        pFVar21 = local_3d0.AllocatorInstance.Data + lVar17 + 0x10;
                        *(undefined8 *)&local_3d0.AllocatorInstance.Data[lVar17].field_0x0 =
                             local_3a0._0_8_;
                        *(undefined8 *)(local_3d0.AllocatorInstance.Data + lVar17 + 8) =
                             local_3a0._8_8_;
                        *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
                        _Size = (size_t)(int)local_388._0_4_;
                        *(undefined4 *)(pFVar21 + 8) = local_388._0_4_;
                        if (local_388._0_4_ == 0) {
                          *(int *)(local_3d0.AllocatorInstance.Data + lVar17 + 0x1c) = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (1,1,local_388._0_4_,0,(ForAnyElementType *)pFVar21,
                                     local_388._0_4_,
                                     (int *)(local_3d0.AllocatorInstance.Data + lVar17 + 0x1c));
                    /* WARNING: Load size is inaccurate */
                          memcpy(*pFVar21,(void *)uVar9,_Size);
                        }
LAB_149c28a76:
                        iVar12 = (this->PathsToObjectsAndDataIndex).ArrayNum;
                        if (iVar12 == (this->PathsToObjectsAndDataIndex).ArrayMax) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x828,&pTVar3->AllocatorInstance,
                                              &(this->PathsToObjectsAndDataIndex).ArrayMax);
                        }
                        lVar17 = (longlong)iVar12;
                        (this->PathsToObjectsAndDataIndex).ArrayNum = iVar12 + 1;
                        pFVar21 = (pTVar3->AllocatorInstance).Data;
                        pFVar2 = (FName *)(pFVar21 + lVar17 * 0x28);
                        pFVar2->ComparisonIndex = (FNameEntryId)local_3a0._0_4_;
                        pFVar2->Number = local_3a0._4_4_;
                        pFVar2[1].ComparisonIndex = (FNameEntryId)local_3a0._8_4_;
                        pFVar2[1].Number = local_3a0._12_4_;
                        *(undefined8 *)(pFVar21 + lVar17 * 0x28 + 0x10) = 0;
                        pFVar1 = (FPCGCrc *)(pFVar21 + lVar17 * 0x28 + 0x10);
                        pFVar1->Value = local_3a0._16_4_;
                        pFVar1->bValid = (bool)local_3a0[0x14];
                        *(undefined3 *)&pFVar1->field_0x5 = local_3a0._21_3_;
                        *(undefined4 *)(pFVar21 + lVar17 * 0x28 + 0x18) = local_388._0_4_;
                        *(undefined4 *)(pFVar21 + lVar17 * 0x28 + 0x1c) = local_388._4_4_;
                        *(uint *)(pFVar21 + lVar17 * 0x28 + 0x20) = local_3d8;
                        *(uint *)(pFVar21 + lVar17 * 0x28 + 0x24) = uVar13;
                        local_388.DebugPtr = (UPCGMetadata *)0x0;
                        local_3a0._16_4_ = 0;
                        local_3a0[0x14] = false;
                        local_3a0._21_3_ = 0;
                      }
                      uVar13 = uVar13 + 1;
                      lVar25 = lVar25 + 0x10;
                      uVar22 = local_3d8;
                    } while ((int)uVar13 < local_3b0.ArrayNum);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
                  if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3b0.AllocatorInstance.Data);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_3c0._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_3c0._0_8_)(local_3c0._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_3c0._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_3c0._8_8_)(local_3c0._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_368.ExtraNames.AllocatorInstance.Data,
                             local_368.ExtraNames.ArrayNum);
                  if (local_368.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_368.ExtraNames.AllocatorInstance.Data);
                  }
                }
                else {
                  if (1 < (byte)LogPCG._0_1_) {
                    local_288.Object = (FCulture *)0x0;
                    local_288.SharedReferenceCount.ReferenceController =
                         (TReferenceControllerBase<1> *)0x0;
                    pFVar14 = FText::AsNumber(&local_b8,uVar22,(FNumberFormattingOptions *)0x0,
                                              &local_288);
                    pFVar18 = PCG::Private::GetTypeName(&local_1e8,*(short *)(local_3c0._8_8_ + 10))
                    ;
                    FText::FromString(&local_1c8,pFVar18);
                    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                    }
                    pFVar18 = FPCGAttributePropertySelector::ToString(&local_368,&local_1d8,false);
                    FText::FromString(&local_1b8,pFVar18);
                    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                    }
                    pFVar15 = FText::AsLocalizable_Advanced_LocText
                                        (&local_178,L"PCGLoadObjectsFromPathContext",
                                         L"InvalidAttribute",
                                         L"Attribute/Property \'{0}\'({1}) is not convertible to a SoftObjectPath on input {2}"
                                        );
                    pFVar16 = FTextFormat::FTextFormat(&local_48,pFVar15,Default);
                    pFVar14 = FText::Format<FText,FText,FText>
                                        (&local_188,pFVar16,&local_1b8,&local_1c8,pFVar14);
                    FText::ToString(pFVar14);
                    FPCGContext::GetTaskName((FPCGContext *)this,&local_198);
                    FPCGContext::GetExecutionSourceName((FPCGContext *)this,&local_1a8);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                    }
                    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_198.Data.AllocatorInstance.Data);
                    }
                    if (local_188.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
                    }
                    if (local_178.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_288.SharedReferenceCount.ReferenceController);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
                  if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3b0.AllocatorInstance.Data);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_3c0._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_3c0._0_8_)(local_3c0._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_3c0._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_3c0._8_8_)(local_3c0._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_368.ExtraNames.AllocatorInstance.Data,
                             local_368.ExtraNames.ArrayNum);
                  if (local_368.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_368.ExtraNames.AllocatorInstance.Data);
                  }
                }
                goto LAB_149c28d5f;
              }
            }
            if ((IPCGAttributeAccessorKeys *)local_3c0._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
              (**(code **)*(longlong *)local_3c0._0_8_)(local_3c0._0_8_,1);
            }
            if ((IPCGAttributeAccessor *)local_3c0._8_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_3c0._8_8_)(local_3c0._8_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_368.ExtraNames.AllocatorInstance.Data,
                       local_368.ExtraNames.ArrayNum);
            if (local_368.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.ExtraNames.AllocatorInstance.Data);
            }
          }
LAB_149c28d5f:
          local_3d8 = uVar22 + 1;
          uVar24 = (ulonglong)local_3d8;
          local_370 = local_370 + 1;
          param_2 = local_res18;
        } while ((int)local_3d8 < local_380.ArrayNum);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
      if ((FPCGTaggedData *)local_380.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
    }
    if (local_3d0.ArrayNum != 0) {
      bVar10 = IPCGAsyncLoadingContext::RequestResourceLoad
                         ((IPCGAsyncLoadingContext *)&this->_padding_,(FPCGContext *)this,&local_3d0
                          ,!param_6);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
      if ((FSoftObjectPath *)local_3d0.AllocatorInstance.Data == (FSoftObjectPath *)0x0) {
        return bVar10;
      }
      FMemory::Free(local_3d0.AllocatorInstance.Data);
      return bVar10;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_3d0.AllocatorInstance.Data,0);
    if ((FSoftObjectPath *)local_3d0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_3d0.AllocatorInstance.Data);
    }
  }
  return true;
}

