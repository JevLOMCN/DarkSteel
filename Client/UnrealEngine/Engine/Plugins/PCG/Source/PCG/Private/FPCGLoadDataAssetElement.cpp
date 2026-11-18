// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator()<FSoftClassPath> @ 149915210

void __thiscall
`FPCGLoadDataAssetElement::ExecuteInternal'::__l53::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  int iVar1;
  TArrayView<FSoftClassPath_const_,int> local_68;
  undefined1 local_58 [32];
  FPCGAttributeAccessorKeysEntries local_38;
  
  this_00 = *(FPCGMetadataAttribute<FSoftClassPath> **)((longlong)this + 0x10);
  iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<FSoftClassPath>::GetValue(this_00,(FSoftClassPath *)local_58,iVar1);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,-1);
  local_68.DataPtr = (FSoftClassPath *)local_58;
  local_68.ArrayNum = 1;
  IPCGAttributeAccessor::SetRange<FSoftClassPath>
            ((IPCGAttributeAccessor *)**(undefined8 **)this,&local_68,0,
             (IPCGAttributeAccessorKeys *)&local_38,
             AllowSetDefaultValue|AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return;
}

// operator()<FSoftObjectPath> @ 149916cd0

void __thiscall
`FPCGLoadDataAssetElement::ExecuteInternal'::__l53::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArrayView<FSoftObjectPath_const_,int> local_68;
  FSoftObjectPath local_58;
  FPCGAttributeAccessorKeysEntries local_38;
  
  this_00 = *(FPCGMetadataAttribute<FSoftObjectPath> **)((longlong)this + 0x10);
  iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this_00,&local_58,iVar2);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,-1);
  local_68.DataPtr = &local_58;
  local_68.ArrayNum = 1;
  IPCGAttributeAccessor::SetRange<FSoftObjectPath>
            ((IPCGAttributeAccessor *)**(undefined8 **)this,&local_68,0,
             (IPCGAttributeAccessorKeys *)&local_38,
             AllowSetDefaultValue|AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 1499da400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGLoadDataAssetElement::CanExecuteOnlyOnMainThread
          (FPCGLoadDataAssetElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 1499e72b0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGLoadDataAssetElement::ExecuteInternal(FPCGLoadDataAssetElement *this,FPCGContext *param_1)

{
  FName *pFVar1;
  FName *this_00;
  FParseTagResult *pFVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  FName _Src;
  longlong *plVar6;
  ITextData *pIVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  UPCGLoadDataAssetSettings *pUVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  UPCGMetadata *pUVar17;
  long64 lVar18;
  UPCGData *pUVar19;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_01;
  UPCGMetadata *pUVar20;
  FString *pFVar21;
  FText *pFVar22;
  FText *pFVar23;
  FTextFormat *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  FParseTagResult *pFVar27;
  size_t _Size;
  FParseTagResult *pFVar28;
  UPCGMetadata *pUVar29;
  ForAnyElementType FVar30;
  longlong lVar31;
  FPCGDataCollection *pFVar32;
  uint uVar33;
  FName *pFVar34;
  uint uVar35;
  bool bVar36;
  undefined1 auStackY_9e8 [32];
  undefined1 local_9a7;
  undefined1 local_9a6;
  bool local_9a5 [5];
  undefined1 local_9a0 [16];
  uint local_990;
  longlong local_988;
  FName *local_980;
  UPCGMetadata *local_978;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_970;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_960;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_950;
  float local_940;
  uint local_93c;
  TArray<FPCGAttributeIdentifier,TSizedDefaultAllocator<32>_> local_938;
  uint local_928 [8];
  undefined4 local_908;
  undefined4 local_904;
  undefined8 local_900;
  undefined8 local_8f8;
  UPCGLoadDataAssetSettings *local_8f0;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_8e8;
  FSoftObjectPath local_8d8;
  undefined1 local_8b8 [8];
  FString local_8b0;
  double local_8a0;
  FName *local_898;
  FPCGDataCollection *local_890;
  FName local_888;
  FSoftObjectPath local_880;
  FSoftClassPath local_860;
  undefined8 *local_840;
  UPCGMetadata *pUStack_838;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *local_830;
  TPersistentObjectPtr<FSoftObjectPath> local_828;
  TVector<double> *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  TVector4<double> *local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  TQuat<double> *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  TTransform<double> *local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  FString *local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  uint *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  bool *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  TRotator<double> *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  FName *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  FTextFormat local_768;
  FText local_758;
  FString local_748;
  FString local_738;
  int *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  float *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  double *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  TVector2<double> *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  FString local_6e8;
  undefined8 *local_6d8;
  UPCGMetadata *pUStack_6d0;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *local_6c8;
  FFormatArgumentValue local_6b8;
  TArrayView<UE::Math::TVector4<double>_const_,int> local_698;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_688;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_678;
  TArrayView<FString_const_,int> local_668;
  TArrayView<bool_const_,int> local_658;
  TArrayView<UE::Math::TRotator<double>_const_,int> local_648;
  TArrayView<FName_const_,int> local_638;
  FString local_628;
  FString local_618;
  FText local_608;
  FText local_5f8;
  FText local_5e8;
  FText local_5d8;
  FText local_5c8;
  FString local_5b8;
  TArrayView<int_const_,int> local_5a8;
  TArrayView<__int64_const_,int> local_598;
  undefined1 local_588 [16];
  FName local_578;
  undefined1 local_568 [16];
  FName local_558;
  undefined1 local_548 [16];
  FName local_538;
  undefined1 local_528 [16];
  FName local_518;
  TArrayView<float_const_,int> local_508;
  TArrayView<double_const_,int> local_4f8;
  TVector2<double> local_4e8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_4d8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  TVector<double> local_4a0;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  TRotator<double> local_470;
  FStringFormatArg local_458;
  FStringFormatArg local_438;
  FStringFormatArg local_418;
  FStringFormatArg local_3f8;
  FTextFormat local_3d8;
  FString local_3c8;
  FString local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  FText local_398;
  FTextFormat local_388;
  TVector4<double> local_378;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  TQuat<double> local_338;
  FText local_318;
  FPCGAttributeAccessorKeysEntries local_308;
  FPCGAttributeAccessorKeysEntries local_2d8;
  FPCGAttributeAccessorKeysEntries local_2a8;
  FPCGAttributeAccessorKeysEntries local_278;
  FPCGAttributeAccessorKeysEntries local_248;
  FPCGAttributeAccessorKeysEntries local_218;
  FPCGAttributeAccessorKeysEntries local_1e8;
  FPCGAttributeAccessorKeysEntries local_1b8;
  FPCGAttributeAccessorKeysEntries local_188;
  FPCGAttributeAccessorKeysEntries local_158;
  FPCGAttributeAccessorKeysEntries local_128;
  FPCGAttributeAccessorKeysEntries local_f8;
  FPCGAttributeAccessorKeysEntries local_c8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  bVar36 = -1 < CpuChannel->Enabled;
  local_9a0._8_8_ = param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"FPCGDataAssetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                          ,0xf6,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  local_8f0 = FPCGContext::GetInputSettings<UPCGLoadDataAssetSettings>(param_1);
  if ((local_8f0 == (UPCGLoadDataAssetSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                          ,0xf9,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  if ((char)param_1[1].OutputData.InactiveOutputPinBitmask != '\0') {
    local_93c = *(uint *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
    uVar26 = (ulonglong)(int)local_93c;
    pFVar34 = (FName *)param_1[1].InputData.InactiveOutputPinBitmask;
    local_898 = pFVar34 + uVar26 * 5;
    while( true ) {
      pFVar1 = local_898;
      local_980 = pFVar34;
      if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != (int)uVar26) {
        local_9a7 = 0;
        `TCheckedPointerIterator<TTuple<FSoftObjectPath,int,int>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_9a7);
      }
      if (pFVar34 == pFVar1) break;
      local_8d8.SubPathString.Data.ArrayNum = pFVar34[3].ComparisonIndex.Value;
      _Size = (size_t)local_8d8.SubPathString.Data.ArrayNum;
      _Src = pFVar34[2];
      local_8d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8d8.AssetPath.PackageName = *pFVar34;
      local_8d8.AssetPath.AssetName = pFVar34[1];
      if (local_8d8.SubPathString.Data.ArrayNum == 0) {
        local_8d8.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_8d8.SubPathString.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_8d8.SubPathString,
                   local_8d8.SubPathString.Data.ArrayNum,&local_8d8.SubPathString.Data.ArrayMax);
        memcpy(local_8d8.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
      }
      local_828.WeakPtr.ObjectIndex = 0;
      local_828.WeakPtr.ObjectSerialNumber = 0;
      FSoftObjectPath::FSoftObjectPath(&local_828.ObjectID,&local_8d8);
      if (local_8d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d8.SubPathString.Data.AllocatorInstance.Data);
      }
      pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_828);
      if (pUVar15 == (UObject *)0x0) {
        if (local_828.ObjectID.AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&local_828.ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_828);
          goto LAB_1499e74d4;
        }
      }
      else {
LAB_1499e74d4:
        if (pUVar15 != (UObject *)0x0) {
          pUVar16 = Z_Construct_UClass_UPCGDataAsset_NoRegister();
          iVar5 = (int)pUVar16->_padding_;
          if ((iVar5 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar16->_padding_)) {
            uVar35 = (param_1->OutputData).TaggedData.ArrayNum;
            uVar26 = (ulonglong)(int)uVar35;
            pFVar32 = &param_1->OutputData;
            local_990 = uVar35;
            local_890 = pFVar32;
            if ((pFVar32 == (FPCGDataCollection *)(pUVar15 + 1)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            iVar5 = *(int *)&pUVar15[1].field_0x8;
            if (iVar5 != 0) {
              iVar14 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x78,8,iVar5,(ForAnyElementType *)pFVar32,
                                  &(param_1->OutputData).TaggedData.ArrayNum,
                                  &(param_1->OutputData).TaggedData.ArrayMax);
              ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                        ((pFVar32->TaggedData).AllocatorInstance.Data + (longlong)iVar14 * 0x78,
                         *(FPCGTaggedData **)(pUVar15 + 1),iVar5);
            }
            param_1 = (FPCGContext *)local_9a0._8_8_;
            iVar5 = *(int *)&(((FPCGContext *)(local_9a0._8_8_ + 600))->OutputData).
                             bCancelExecutionOnEmpty;
            if (iVar5 == 0) {
              if (((((FPCGContext *)(local_9a0._8_8_ + 600))->OutputData).DataCrcs.ArrayNum != 0) &&
                 ((int)uVar35 <
                  (((FPCGDataCollection *)(local_9a0._8_8_ + 0x38))->TaggedData).ArrayNum)) {
                lVar31 = uVar26 * 0x78;
                do {
                  uVar33 = 0;
                  if ((int)uVar35 <
                      (((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).ArrayNum) {
                    uVar33 = ~uVar35 >> 0x1f;
                  }
                  local_988 = lVar31;
                  if ((uVar33 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    uVar13 = (*pcVar9)();
                    return (bool)uVar13;
                  }
                  plVar6 = *(longlong **)
                            ((((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).
                             AllocatorInstance.Data + lVar31);
                  if (plVar6 != (longlong *)0x0) {
                    pUVar19 = (UPCGData *)(**(code **)(*plVar6 + 0x310))(plVar6,param_1,1);
                    pUVar17 = (UPCGMetadata *)(**(code **)(pUVar19->_padding_ + 0x328))();
                    uVar33 = 0;
                    if ((int)uVar35 <
                        (((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).ArrayNum) {
                      uVar33 = ~uVar35 >> 0x1f;
                    }
                    local_978 = pUVar17;
                    if ((uVar33 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      uVar13 = (*pcVar9)();
                      return (bool)uVar13;
                    }
                    FPCGDataPtrWrapper::operator=
                              ((FPCGDataPtrWrapper *)
                               ((((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).
                                AllocatorInstance.Data + (longlong)(int)uVar35 * 0x78),pUVar19);
                    iVar5 = (((FPCGContext *)((undefined8)param_1 + 1))->OutputData).DataCrcs.
                            ArrayNum;
                    pFVar28 = (FParseTagResult *)
                              (((FPCGContext *)((undefined8)param_1 + 1))->OutputData).DataCrcs.
                              AllocatorInstance.Data;
                    pFVar2 = pFVar28 + iVar5;
                    while( true ) {
                      if ((((FPCGContext *)((undefined8)param_1 + 1))->OutputData).DataCrcs.ArrayNum
                          != iVar5) {
                        local_9a5[1] = false;
                        `TCheckedPointerIterator<PCG::Private::FParseTagResult,int,0>::operator!='::
                        __l2::<lambda_1>::operator()(local_9a5 + 1);
                      }
                      lVar31 = local_988;
                      if (pFVar28 == pFVar2) break;
                      local_908 = 0xffffffff;
                      local_904 = 0;
                      bVar12 = PCG::Private::SetAttributeFromTag
                                         (pFVar28,pUVar17,-1,SetDefaultValue|CreateAttribute,
                                          (TOptional<FName>)&local_908);
                      if (!bVar12) {
                        pFVar27 = (FParseTagResult *)&pFVar28->OriginalAttribute;
                        if (*(int *)((longlong)&(pFVar28->OriginalAttribute).field0_0x0 + 0xc) == -1
                           ) {
                          pFVar27 = pFVar28;
                        }
                        pFVar22 = FText::FromString(&local_318,&pFVar27->Attribute);
                        pFVar23 = FText::AsLocalizable_Advanced_LocText
                                            (&local_5c8,L"PCGLoadDataAssetElement",
                                             L"TagFailedToSetDefaultValue",
                                             L"Default Tag Value \'{0}\' failed to set its value to the target asset data, most likely due to type mismatch."
                                            );
                        pFVar24 = FTextFormat::FTextFormat(&local_3d8,pFVar23,Default);
                        local_6b8.Type = Text;
                        FText::FText((FText *)&local_6b8.TextValue,pFVar22);
                        if ((local_6b8.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                             (ITextData *)0x0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsSet()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                ,0xbd,
                                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                               ), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          uVar13 = (*pcVar9)();
                          return (bool)uVar13;
                        }
                        local_970.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_970.ArrayNum = 1;
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x20,8,1,0,&local_970.AllocatorInstance,1,&local_970.ArrayMax);
                        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                                  (local_970.AllocatorInstance.Data,&local_6b8,1);
                        local_768.TextFormatData.Object = (pFVar24->TextFormatData).Object;
                        local_768.TextFormatData.SharedReferenceCount.ReferenceController =
                             (pFVar24->TextFormatData).SharedReferenceCount.ReferenceController;
                        if (local_768.TextFormatData.SharedReferenceCount.ReferenceController !=
                            (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          (local_768.TextFormatData.SharedReferenceCount.ReferenceController)->
                          SharedReferenceCount =
                               (atomic<int>)
                               ((int)(local_768.TextFormatData.SharedReferenceCount.
                                     ReferenceController)->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        FText::Format(&local_758,&local_768,&local_970);
                        DestructItems<FFormatArgumentValue,int>
                                  ((FFormatArgumentValue *)local_970.AllocatorInstance.Data,
                                   local_970.ArrayNum);
                        if ((FFormatArgumentValue *)local_970.AllocatorInstance.Data !=
                            (FFormatArgumentValue *)0x0) {
                          FMemory::Free(local_970.AllocatorInstance.Data);
                        }
                        if (local_6b8.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                            (ITextData *)0x0) {
                          (**(code **)((longlong)
                                       *(ITextData *)
                                        local_6b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                                      + 0x10))();
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  ((pFVar24->TextFormatData).SharedReferenceCount.
                                   ReferenceController);
                        pIVar7 = (pFVar22->TextData).Reference;
                        if (pIVar7 != (ITextData *)0x0) {
                          (**(code **)((longlong)*pIVar7 + 0x10))();
                        }
                        PCGLog::LogWarningOnGraph(&local_758,param_1);
                        if (local_758.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_758.TextData.Reference + 0x10))();
                        }
                        pUVar17 = local_978;
                        if (local_5c8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_5c8.TextData.Reference + 0x10))();
                          pUVar17 = local_978;
                        }
                      }
                      pFVar28 = pFVar28 + 1;
                    }
                  }
                  lVar31 = lVar31 + 0x78;
                  uVar35 = uVar35 + 1;
                } while ((int)uVar35 <
                         (((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).ArrayNum);
                uVar26 = (ulonglong)local_990;
                local_988 = lVar31;
              }
            }
            else {
              uVar25 = (int)pFVar34[4].ComparisonIndex.Value % iVar5;
              uVar33 = 0;
              if ((int)uVar25 < iVar5) {
                uVar33 = ~uVar25 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              pUVar15 = *(UObject **)
                         (*(longlong *)
                           &(((FPCGContext *)((undefined8)param_1 + 1))->OutputData).TaggedData.
                            ArrayNum + (longlong)(int)uVar25 * 8);
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
                if (pUVar15 != (UObject *)0x0) goto LAB_1499e7625;
              }
              else if (pUVar15 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar15);
LAB_1499e7625:
                pUVar17 = (UPCGMetadata *)(**(code **)(*(longlong *)pUVar15 + 800))(pUVar15);
                if ((pUVar17 != (UPCGMetadata *)0x0) &&
                   (lVar18 = UPCGMetadata::GetItemCountForChild(pUVar17), 0 < lVar18)) {
                  local_938.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_938.ArrayNum = 0;
                  local_938.ArrayMax = 0;
                  local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_8e8.ArrayNum = 0;
                  local_8e8.ArrayMax = 0;
                  UPCGMetadata::GetAllAttributes(pUVar17,&local_938,&local_8e8);
                  local_988 = CONCAT44(local_988._4_4_,uVar35);
                  if ((int)uVar35 <
                      (((FPCGDataCollection *)((longlong)param_1 + 0x38))->TaggedData).ArrayNum) {
                    pUVar29 = (UPCGMetadata *)(uVar26 * 0x78);
LAB_1499e7690:
                    uVar33 = (uint)uVar26;
                    uVar35 = 0;
                    if ((int)uVar33 < (pFVar32->TaggedData).ArrayNum) {
                      uVar35 = ~uVar33 >> 0x1f;
                    }
                    local_978 = pUVar29;
                    if ((uVar35 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      uVar13 = (*pcVar9)();
                      return (bool)uVar13;
                    }
                    plVar6 = *(longlong **)
                              ((pFVar32->TaggedData).AllocatorInstance.Data + (longlong)pUVar29);
                    if (plVar6 != (longlong *)0x0) {
                      pUVar19 = (UPCGData *)(**(code **)(*plVar6 + 0x310))(plVar6,param_1,1);
                      pUVar29 = (UPCGMetadata *)(**(code **)(pUVar19->_padding_ + 0x328))(pUVar19);
                      uVar35 = 0;
                      if ((int)uVar33 < (pFVar32->TaggedData).ArrayNum) {
                        uVar35 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar9 = (code *)swi(3);
                        uVar13 = (*pcVar9)();
                        return (bool)uVar13;
                      }
                      FPCGDataPtrWrapper::operator=
                                ((FPCGDataPtrWrapper *)
                                 ((pFVar32->TaggedData).AllocatorInstance.Data +
                                 (longlong)(int)uVar33 * 0x78),pUVar19);
                      uVar10 = local_9a0._8_8_;
                      iVar5 = local_938.ArrayNum;
                      uVar26 = (ulonglong)local_938.ArrayNum;
                      pFVar34 = (FName *)(local_938.AllocatorInstance.Data + uVar26 * 0x18);
                      FVar30.Data = local_938.AllocatorInstance.Data;
LAB_1499e7790:
                      do {
                        if ((int)uVar26 != iVar5) {
                          local_9a6 = 0;
                          `TCheckedPointerIterator<FPCGAttributeIdentifier,int,0>::operator!='::__l2
                          ::<lambda_1>::operator()(&local_9a6);
                        }
                        if ((FName *)FVar30.Data == pFVar34) goto LAB_1499e826e;
                        local_588._0_8_ = *(undefined8 *)FVar30.Data;
                        local_588._8_8_ = *(FName *)((longlong)FVar30.Data + 8);
                        local_578 = *(FName *)((longlong)FVar30.Data + 0x10);
                        this_01 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                                  UPCGMetadata::GetConstAttribute
                                            (pUVar17,(FPCGAttributeIdentifier *)local_588);
                        if ((this_01 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0)
                           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("DefaultAttribute",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                                                  ,0x133,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          uVar13 = (*pcVar9)();
                          return (bool)uVar13;
                        }
                        local_568._0_8_ = *(undefined8 *)FVar30.Data;
                        local_568._8_8_ = *(FName *)((longlong)FVar30.Data + 8);
                        local_558 = *(FName *)((longlong)FVar30.Data + 0x10);
                        pUVar20 = (UPCGMetadata *)
                                  UPCGMetadata::GetMutableAttribute
                                            (pUVar29,(FPCGAttributeIdentifier *)local_568);
                        if (pUVar20 != (UPCGMetadata *)0x0) {
                          uVar3 = *(ushort *)&this_01->field_0x70;
                          uVar4 = *(ushort *)&(pUVar20->OtherParents).Hash.SecondaryData;
                          if (uVar3 < 0xf) {
                            if (0xe < uVar4) goto LAB_1499e816d;
                            if (PCG::Private::BroadcastableTypes.Values[uVar3][uVar4] == false)
                            goto LAB_1499e78cf;
LAB_1499e78eb:
                            PCGAttributeAccessorHelpers::CreateAccessor
                                      ((FPCGMetadataAttributeBase *)local_9a0,pUVar20,
                                       SUB81(pUVar29,0));
                            local_840 = (undefined8 *)local_9a0;
                            pUStack_838 = pUVar17;
                            local_830 = this_01;
                            local_6d8 = local_840;
                            pUStack_6d0 = pUVar17;
                            local_6c8 = this_01;
                            switch(*(undefined2 *)&this_01->field_0x70) {
                            case 0:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              local_940 = FPCGMetadataAttribute<float>::GetValue
                                                    ((FPCGMetadataAttribute<float> *)this_01,iVar14)
                              ;
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_2a8,-1);
                              local_718 = &local_940;
                              uStack_710 = 1;
                              local_508._12_4_ = uStack_70c;
                              local_508.ArrayNum = 1;
                              local_508.DataPtr = local_718;
                              IPCGAttributeAccessor::SetRange<float>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_508,0,
                                         (IPCGAttributeAccessorKeys *)&local_2a8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_2a8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_2a8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 1:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              local_8a0 = FPCGMetadataAttribute<double>::GetValue
                                                    ((FPCGMetadataAttribute<double> *)this_01,iVar14
                                                    );
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_278,-1);
                              local_708 = &local_8a0;
                              uStack_700 = 1;
                              local_4f8._12_4_ = uStack_6fc;
                              local_4f8.ArrayNum = 1;
                              local_4f8.DataPtr = local_708;
                              IPCGAttributeAccessor::SetRange<double>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_4f8,0,
                                         (IPCGAttributeAccessorKeys *)&local_278,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_278.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_278.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 2:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              local_928[0] = FPCGMetadataAttribute<int>::GetValue
                                                       ((FPCGMetadataAttribute<int> *)this_01,iVar14
                                                       );
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_308,-1);
                              local_7a8 = local_928;
                              uStack_7a0 = 1;
                              local_5a8._12_4_ = uStack_79c;
                              local_5a8.ArrayNum = 1;
                              local_5a8.DataPtr = (int *)local_7a8;
                              IPCGAttributeAccessor::SetRange<int>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_5a8,0,
                                         (IPCGAttributeAccessorKeys *)&local_308,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_308.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_308.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 3:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              local_8b0.Data._8_8_ =
                                   FPCGMetadataAttribute<__int64>::GetValue
                                             ((FPCGMetadataAttribute<__int64> *)this_01,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_2d8,-1);
                              local_728 = &local_8b0.Data.ArrayNum;
                              uStack_720 = 1;
                              local_598._12_4_ = uStack_71c;
                              local_598.ArrayNum = 1;
                              local_598.DataPtr = (long64 *)local_728;
                              IPCGAttributeAccessor::SetRange<__int64>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_598,0,
                                         (IPCGAttributeAccessorKeys *)&local_2d8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_2d8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_2d8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 4:
                              local_3a8 = 0;
                              uStack_3a0 = 0;
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                                        ((FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
                                         this_01,&local_4e8,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_248,-1);
                              local_6f8 = &local_4e8;
                              uStack_6f0 = 1;
                              local_4d8._12_4_ = uStack_6ec;
                              local_4d8.ArrayNum = 1;
                              local_4d8.DataPtr = local_6f8;
                              IPCGAttributeAccessor::SetRange<UE::Math::TVector2<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_4d8,0,
                                         (IPCGAttributeAccessorKeys *)&local_248,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_248.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_248.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 5:
                              local_4a8 = 0;
                              local_4b8 = 0;
                              uStack_4b0 = 0;
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                                        ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                                         this_01,&local_4a0,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_218,-1);
                              local_7f8 = &local_4a0;
                              uStack_7f0 = 1;
                              local_4c8._12_4_ = uStack_7ec;
                              local_4c8.ArrayNum = 1;
                              local_4c8.DataPtr = local_7f8;
                              IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_4c8,0,
                                         (IPCGAttributeAccessorKeys *)&local_218,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_218.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_218.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 6:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                                        ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
                                         this_01,&local_378,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_1e8,-1);
                              local_7e8 = &local_378;
                              uStack_7e0 = 1;
                              local_698._12_4_ = uStack_7dc;
                              local_698.ArrayNum = 1;
                              local_698.DataPtr = local_7e8;
                              IPCGAttributeAccessor::SetRange<UE::Math::TVector4<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_698,0,
                                         (IPCGAttributeAccessorKeys *)&local_1e8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_1e8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_1e8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 7:
                              local_358 = 0;
                              uStack_350 = 0;
                              local_348 = 0;
                              uStack_340 = 0;
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue
                                        ((FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)this_01,
                                         &local_338,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_1b8,-1);
                              local_7d8 = &local_338;
                              uStack_7d0 = 1;
                              local_688._12_4_ = uStack_7cc;
                              local_688.ArrayNum = 1;
                              local_688.DataPtr = local_7d8;
                              IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_688,0,
                                         (IPCGAttributeAccessorKeys *)&local_1b8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_1b8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_1b8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 8:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
                                        (this_01,&local_98,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_188,-1);
                              local_7c8 = &local_98;
                              uStack_7c0 = 1;
                              local_678._12_4_ = uStack_7bc;
                              local_678.ArrayNum = 1;
                              local_678.DataPtr = local_7c8;
                              IPCGAttributeAccessor::SetRange<UE::Math::TTransform<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_678,0,
                                         (IPCGAttributeAccessorKeys *)&local_188,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_188.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_188.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 9:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<FString>::GetValue
                                        ((FPCGMetadataAttribute<FString> *)this_01,&local_738,iVar14
                                        );
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_158,-1);
                              local_7b8 = &local_738;
                              uStack_7b0 = 1;
                              local_668._12_4_ = uStack_7ac;
                              local_668.ArrayNum = 1;
                              local_668.DataPtr = local_7b8;
                              IPCGAttributeAccessor::SetRange<FString>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_668,0,
                                         (IPCGAttributeAccessorKeys *)&local_158,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_158.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_158.ExtractedEntries.AllocatorInstance.Data);
                              }
                              if (local_738.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_738.Data.AllocatorInstance.Data);
                              }
                              break;
                            case 10:
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              local_9a5[0] = FPCGMetadataAttribute<bool>::GetValue
                                                       ((FPCGMetadataAttribute<bool> *)this_01,
                                                        iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_128,-1);
                              local_798 = local_9a5;
                              uStack_790 = 1;
                              local_658._12_4_ = uStack_78c;
                              local_658.ArrayNum = 1;
                              local_658.DataPtr = local_798;
                              IPCGAttributeAccessor::SetRange<bool>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_658,0,
                                         (IPCGAttributeAccessorKeys *)&local_128,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_128.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_128.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 0xb:
                              local_478 = 0;
                              local_488 = 0;
                              uStack_480 = 0;
                              iVar14 = FPCGMetadataAttributeBase::GetValueKey
                                                 ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                                        ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
                                         this_01,&local_470,iVar14);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_f8,-1);
                              local_788 = &local_470;
                              uStack_780 = 1;
                              local_648._12_4_ = uStack_77c;
                              local_648.ArrayNum = 1;
                              local_648.DataPtr = local_788;
                              IPCGAttributeAccessor::SetRange<UE::Math::TRotator<double>_>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_648,0,
                                         (IPCGAttributeAccessorKeys *)&local_f8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_f8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_f8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 0xc:
                              FPCGMetadataAttributeBase::GetValueKey
                                        ((FPCGMetadataAttributeBase *)this_01,0);
                              FPCGMetadataAttribute<FName>::GetValue
                                        ((FPCGMetadataAttribute<FName> *)this_01,(int)&local_888);
                              FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                                        (&local_c8,-1);
                              local_778 = &local_888;
                              uStack_770 = 1;
                              local_638._12_4_ = uStack_76c;
                              local_638.ArrayNum = 1;
                              local_638.DataPtr = local_778;
                              IPCGAttributeAccessor::SetRange<FName>
                                        ((IPCGAttributeAccessor *)local_9a0._0_8_,&local_638,0,
                                         (IPCGAttributeAccessorKeys *)&local_c8,
                                         AllowSetDefaultValue|AllowBroadcastAndConstructible);
                              if (local_c8.ExtractedEntries.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_c8.ExtractedEntries.AllocatorInstance.Data);
                              }
                              break;
                            case 0xd:
                              local_880.AssetPath.PackageName.ComparisonIndex.Value = 0;
                              local_880.AssetPath.PackageName.Number = 0;
                              local_880.AssetPath.AssetName.ComparisonIndex.Value = 0;
                              local_880.AssetPath.AssetName.Number = 0;
                              local_880.SubPathString.Data.AllocatorInstance.Data =
                                   (FScriptContainerElement *)0x0;
                              local_880.SubPathString.Data.ArrayNum = 0;
                              local_880.SubPathString.Data.ArrayMax = 0;
                              `FPCGLoadDataAssetElement::ExecuteInternal'::__l53::<lambda_1>::
                              operator()<FSoftObjectPath>(&local_6d8,&local_880);
                              break;
                            case 0xe:
                              local_860._0_8_ = 0;
                              local_860._8_8_ = 0;
                              local_860._16_8_ = 0;
                              local_860._24_8_ = 0;
                              `FPCGLoadDataAssetElement::ExecuteInternal'::__l53::<lambda_1>::
                              operator()<FSoftClassPath>(&local_6d8,&local_860);
                            }
                            if ((IPCGAttributeAccessor *)local_9a0._0_8_ !=
                                (IPCGAttributeAccessor *)0x0) {
                              (**(code **)*(longlong *)local_9a0._0_8_)(local_9a0._0_8_,1);
                              uVar26 = local_938._8_8_ & 0xffffffff;
                              FVar30.Data = FVar30.Data + 0x18;
                              goto LAB_1499e7790;
                            }
                          }
                          else {
                            if ((uVar4 < 0xf) && (uVar3 < 0xf)) {
LAB_1499e78cf:
                              if (PCG::Private::ConstructibleTypes.Values[uVar4][uVar3] != false)
                              goto LAB_1499e78eb;
                            }
LAB_1499e816d:
                            pFVar21 = PCG::Private::GetTypeName(&local_628,uVar4);
                            FText::FromString(&local_608,pFVar21);
                            if (local_628.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_628.Data.AllocatorInstance.Data);
                            }
                            pFVar21 = PCG::Private::GetTypeName
                                                (&local_618,*(ushort *)&this_01->field_0x70);
                            FText::FromString(&local_5f8,pFVar21);
                            if (local_618.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_618.Data.AllocatorInstance.Data);
                            }
                            pFVar22 = FText::FromName(&local_398,(FName *)FVar30.Data);
                            pFVar23 = FText::AsLocalizable_Advanced_LocText
                                                (&local_5d8,L"PCGLoadDataAssetElement",
                                                 L"DefaultTypeDoesNotMatchAssetType",
                                                 L"Default value \'{0}\' does not have a compatible type (\'{1}\') to its original type (\'{2}\') in the asset. Will be skipped."
                                                );
                            pFVar24 = FTextFormat::FTextFormat(&local_388,pFVar23,Default);
                            pFVar22 = FText::Format<FText,FText,FText>
                                                (&local_5e8,pFVar24,pFVar22,&local_5f8,&local_608);
                            PCGLog::LogWarningOnGraph(pFVar22,(FPCGContext *)uVar10);
                            if (local_5e8.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
                            }
                            if (local_5d8.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
                            }
                          }
                          uVar26 = local_938._8_8_ & 0xffffffff;
                          FVar30.Data = FVar30.Data + 0x18;
                          goto LAB_1499e7790;
                        }
                        local_548._0_8_ = *(undefined8 *)FVar30.Data;
                        local_548._8_8_ = *(FName *)((longlong)FVar30.Data + 8);
                        local_538 = *(FName *)((longlong)FVar30.Data + 0x10);
                        UPCGMetadata::AddAttribute
                                  (pUVar29,pUVar17,(FPCGAttributeIdentifier *)local_548);
                        local_528._0_8_ = *(undefined8 *)FVar30.Data;
                        local_528._8_8_ = *(FName *)((longlong)FVar30.Data + 8);
                        local_518 = *(FName *)((longlong)FVar30.Data + 0x10);
                        UPCGMetadata::GetMutableAttribute
                                  (pUVar29,(FPCGAttributeIdentifier *)local_528);
                        uVar26 = local_938._8_8_ & 0xffffffff;
                        FVar30.Data = FVar30.Data + 0x18;
                      } while( true );
                    }
                    goto LAB_1499e8284;
                  }
LAB_1499e829f:
                  if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_8e8.AllocatorInstance.Data);
                  }
                  if ((FName *)local_938.AllocatorInstance.Data != (FName *)0x0) {
                    FMemory::Free(local_938.AllocatorInstance.Data);
                  }
                  uVar26 = (ulonglong)local_990;
                  param_1 = (FPCGContext *)local_9a0._8_8_;
                }
              }
            }
            pFVar34 = local_980;
            if ((((local_8f0->bTagOutputsBasedOnOutputPins != false) ||
                 (local_900 = 0, local_8f0->InputIndexTag != (FName)0x0)) ||
                (local_8f8 = 0, local_8f0->DataIndexTag != (FName)0x0)) &&
               ((int)uVar26 < (param_1->OutputData).TaggedData.ArrayNum)) {
              pFVar1 = &local_8f0->InputIndexTag;
              lVar31 = (longlong)(int)uVar26 * 0x78;
              this_00 = &local_8f0->DataIndexTag;
              do {
                pUVar11 = local_8f0;
                uVar33 = (uint)uVar26;
                uVar35 = 0;
                if ((int)uVar33 < (param_1->OutputData).TaggedData.ArrayNum) {
                  uVar35 = ~uVar33 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  uVar13 = (*pcVar9)();
                  return (bool)uVar13;
                }
                pFVar8 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
                if (pUVar11->bTagOutputsBasedOnOutputPins != false) {
                  local_928[1] = 0;
                  local_928[2] = 0;
                  if (*(FName *)(pFVar8 + lVar31 + 0x60) != (FName)0x0) {
                    pFVar21 = ::FName::ToString((FName *)(pFVar8 + lVar31 + 0x60),&local_5b8);
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               (pFVar8 + lVar31 + 0x10),(FString *)local_8b8,(bool *)pFVar21);
                    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                    }
                  }
                }
                local_928[5] = 0;
                local_928[6] = 0;
                pFVar34 = local_980;
                if (*pFVar1 != (FName)0x0) {
                  pFVar21 = ::FName::ToString(pFVar1,&local_3c8);
                  FStringFormatArg::FStringFormatArg(&local_458,pFVar21);
                  pFVar34 = local_980;
                  FStringFormatArg::FStringFormatArg(&local_438,local_980[4].ComparisonIndex.Value);
                  local_950.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_950.ArrayNum = 2;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,2,0,&local_950.AllocatorInstance,2,&local_950.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (local_950.AllocatorInstance.Data,&local_458,2);
                  ::FString::FormatImpl(&local_748,L"{0}:{1}",&local_950);
                  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             (pFVar8 + lVar31 + 0x10),(FString *)(local_8b8 + 4),(bool *)&local_748)
                  ;
                  if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_748.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)local_950.AllocatorInstance.Data,local_950.ArrayNum
                            );
                  if ((FStringFormatArg *)local_950.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(local_950.AllocatorInstance.Data);
                  }
                  if (local_438.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_438.StringValue.Data.AllocatorInstance.Data);
                  }
                  if (local_458.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_458.StringValue.Data.AllocatorInstance.Data);
                  }
                }
                local_928[3] = 0;
                local_928[4] = 0;
                if (*this_00 != (FName)0x0) {
                  pFVar21 = ::FName::ToString(this_00,&local_3b8);
                  FStringFormatArg::FStringFormatArg(&local_418,pFVar21);
                  FStringFormatArg::FStringFormatArg(&local_3f8,pFVar34[4].Number);
                  local_960.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_960.ArrayNum = 2;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,2,0,&local_960.AllocatorInstance,2,&local_960.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (local_960.AllocatorInstance.Data,&local_418,2);
                  ::FString::FormatImpl(&local_6e8,L"{0}:{1}",&local_960);
                  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             (pFVar8 + lVar31 + 0x10),&local_8b0,(bool *)&local_6e8);
                  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)local_960.AllocatorInstance.Data,local_960.ArrayNum
                            );
                  if ((FStringFormatArg *)local_960.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(local_960.AllocatorInstance.Data);
                  }
                  if (local_3f8.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3f8.StringValue.Data.AllocatorInstance.Data);
                  }
                  if (local_418.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_418.StringValue.Data.AllocatorInstance.Data);
                  }
                }
                uVar26 = (ulonglong)(uVar33 + 1);
                lVar31 = lVar31 + 0x78;
              } while ((int)(uVar33 + 1) < (param_1->OutputData).TaggedData.ArrayNum);
            }
          }
        }
      }
      if (local_828.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar26 = (ulonglong)local_93c;
      pFVar34 = pFVar34 + 5;
    }
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
LAB_1499e826e:
  pUVar29 = local_978;
  pFVar32 = local_890;
  param_1 = (FPCGContext *)local_9a0._8_8_;
  uVar33 = (uint)local_988;
LAB_1499e8284:
  uVar33 = uVar33 + 1;
  uVar26 = (ulonglong)uVar33;
  pUVar29 = (UPCGMetadata *)((longlong)pUVar29 + 0x78);
  local_988 = CONCAT44(local_988._4_4_,uVar33);
  local_978 = pUVar29;
  if ((param_1->OutputData).TaggedData.ArrayNum <= (int)uVar33) goto LAB_1499e829f;
  goto LAB_1499e7690;
}

// PrepareDataInternal @ 149a04d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGLoadDataAssetElement::PrepareDataInternal(FPCGLoadDataAssetElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FParseTagResult *pFVar7;
  void *_Src;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UPCGLoadDataAssetSettings *pUVar12;
  UClass *pUVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  size_t _Size;
  FScriptContainerElement *pFVar17;
  FObjectPtr_u_0 *pFVar18;
  bool bVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FObjectPtr_u_0 local_108;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_e0;
  FObjectPtr_u_0 local_d0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c8;
  UPCGLoadDataAssetSettings *local_b8;
  FSoftObjectPath local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  FParseTagResult local_80;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId186,"FPCGLoadDataAssetElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
               ,0xba);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId186);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                         ,0xbc,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  pUVar12 = FPCGContext::GetInputSettings<UPCGLoadDataAssetSettings>(param_1);
  local_b8 = pUVar12;
  if ((pUVar12 == (UPCGLoadDataAssetSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                         ,0xc0,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  if (pUVar12->bSetDefaultAttributeOverridesFromInput == false) {
    iVar5 = (pUVar12->CommaSeparatedDefaultAttributeOverrides).Data.ArrayNum;
    if ((1 < iVar5) || ((pUVar12->DefaultAttributeOverrides).ArrayNum != 0)) {
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      if (iVar5 < 2) {
        pTVar14 = &pUVar12->DefaultAttributeOverrides;
        if ((pTVar14 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DefaultValues",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                               ,0xe3,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
      }
      else {
        pTVar14 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                            (&local_90,&pUVar12->CommaSeparatedDefaultAttributeOverrides);
        if (&local_f0 != pTVar14) {
          DestructItems<FString,int>((FString *)0x0,0);
          local_f0.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
          (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_f0.ArrayNum = pTVar14->ArrayNum;
          local_f0.ArrayMax = pTVar14->ArrayMax;
          pTVar14->ArrayNum = 0;
          pTVar14->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
        pTVar14 = &local_f0;
      }
      uVar6 = pTVar14->ArrayNum;
      pTVar3 = &param_1[1].OutputData.DataCrcs;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      piVar2 = &param_1[1].OutputData.DataCrcs.ArrayMax;
      if (param_1[1].OutputData.DataCrcs.ArrayMax < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,uVar6,&pTVar3->AllocatorInstance,param_1[1].OutputData.DataCrcs.ArrayNum,
                   piVar2);
      }
      iVar5 = pTVar14->ArrayNum;
      pFVar16 = (pTVar14->AllocatorInstance).Data;
      pFVar17 = pFVar16 + (longlong)iVar5 * 0x10;
      while( true ) {
        if (pTVar14->ArrayNum != iVar5) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        FVar15.Data = local_f0.AllocatorInstance.Data;
        if (pFVar16 == pFVar17) break;
        PCG::Private::FParseTagResult::FParseTagResult(&local_80,(FString *)pFVar16);
        pFVar7 = (FParseTagResult *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar7 <= &local_80) && (&local_80 < pFVar7 + *piVar2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar11 = param_1[1].OutputData.DataCrcs.ArrayNum;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&pTVar3->AllocatorInstance,piVar2);
          param_1[1].OutputData.DataCrcs.ArrayNum = iVar11;
        }
        param_1[1].OutputData.DataCrcs.ArrayNum = iVar11 + 1;
        PCG::Private::FParseTagResult::FParseTagResult
                  ((FParseTagResult *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x48),
                   &local_80);
        if ((local_80.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_80.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_80.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
        }
        if ((local_80.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_80.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_80.OriginalAttribute.field0_0x0.TypedValue.Data.
                                AllocatorInstance.Data);
        }
        if (local_80.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Attribute.Data.AllocatorInstance.Data);
        }
        pFVar16 = pFVar16 + 0x10;
      }
      DestructItems<FString,int>((FString *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
      pUVar12 = local_b8;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
        pUVar12 = local_b8;
      }
    }
  }
  else {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_c8,&PCGPinConstants::DefaultInputLabel);
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_100,&PCGLoadDataAsset::DefaultProviderPinLabel);
    iVar5 = local_100.ArrayNum;
    if (local_100.ArrayNum != 0) {
      if ((local_100.ArrayNum != 1) && (local_100.ArrayNum != local_c8.ArrayNum)) {
        PCGLog::InputOutput::LogInvalidCardinalityError
                  (PCGPinConstants::DefaultInputLabel,PCGLoadDataAsset::DefaultProviderPinLabel,
                   param_1);
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
        if ((FPCGTaggedData *)local_100.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_100.AllocatorInstance.Data);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
        if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
        bVar9 = true;
        goto LAB_149a05400;
      }
      piVar2 = &param_1[1].OutputData.TaggedData.ArrayNum;
      pFVar18 = (FObjectPtr_u_0 *)
                (local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 0x78);
      FVar15.Data = local_100.AllocatorInstance.Data;
      while( true ) {
        if (local_100.ArrayNum != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if ((FObjectPtr_u_0 *)FVar15.Data == pFVar18) break;
        local_d0 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar15.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149a04f66:
          if (local_d0.Handle == (UObject *)0x0) goto LAB_149a04f84;
          pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_d0,pUVar13);
          local_108 = local_d0;
          if (!bVar9) goto LAB_149a04f84;
        }
        else {
          if (local_d0.Handle != (UObject *)0x0) {
            UE::GC::MarkAsReachable(local_d0.Handle);
            goto LAB_149a04f66;
          }
LAB_149a04f84:
          local_108.Handle = (UObject *)0x0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_108.Handle != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_108.Handle);
        }
        if (((*(FObjectPtr_u_0 **)piVar2 <= &local_108) &&
            (&local_108 < *(FObjectPtr_u_0 **)piVar2 + *(int *)&param_1[1].OutputData.field_0x14))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar11._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar11._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar11._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        puVar1 = &param_1[1].OutputData.field_0x14;
        if (iVar11 == *(int *)puVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)piVar2,(int *)puVar1);
        }
        *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar11 + 1;
        ((FObjectPtr_u_0 *)(*(longlong *)piVar2 + (longlong)iVar11 * 8))->Handle =
             (UObject *)local_108;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_108.Handle != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_108.Handle);
        }
        FVar15.Data = FVar15.Data + 0x78;
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if ((FPCGTaggedData *)local_100.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)&param_1[1].OutputData.InactiveOutputPinBitmask = 1;
  bVar9 = pUVar12->bWarnIfNoAsset;
  local_b0.SubPathString.Data.ArrayNum = *(int *)&(pUVar12->Asset).SoftObjectPtr.field_0x20;
  _Size = (size_t)local_b0.SubPathString.Data.ArrayNum;
  local_b0.AssetPath.PackageName.ComparisonIndex.Value =
       *(uint *)&(pUVar12->Asset).SoftObjectPtr.field_0x8;
  local_b0.AssetPath.PackageName.Number = *(uint *)&(pUVar12->Asset).SoftObjectPtr.field_0xc;
  local_b0.AssetPath.AssetName.ComparisonIndex.Value =
       *(uint *)&(pUVar12->Asset).SoftObjectPtr.field_0x10;
  local_b0.AssetPath.AssetName.Number = *(uint *)&(pUVar12->Asset).SoftObjectPtr.field_0x14;
  bVar4 = pUVar12->bSynchronousLoad;
  _Src = *(void **)&(pUVar12->Asset).SoftObjectPtr.field_0x18;
  local_b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b0.SubPathString.Data.ArrayNum == 0) {
    local_b0.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_b0.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_b0.SubPathString,local_b0.SubPathString.Data.ArrayNum,
               &local_b0.SubPathString.Data.ArrayMax);
    memcpy(local_b0.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_e0.AllocatorInstance,1,&local_e0.ArrayMax);
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_e0.AllocatorInstance.Data,&local_b0,1);
  bVar9 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                    ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel,
                     &pUVar12->AssetReferenceSelector,&local_e0,false,bVar9 == false,bVar4);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
  if ((FSoftObjectPath *)local_e0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_149a05400:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

