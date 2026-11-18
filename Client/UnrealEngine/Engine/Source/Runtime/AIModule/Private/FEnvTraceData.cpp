// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticStruct @ 146f0f470

UScriptStruct * __cdecl FEnvTraceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvTraceData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvTraceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvTraceData,(UObject *)pUVar1,L"EnvTraceData");
  }
  return Z_Registration_Info_UScriptStruct_FEnvTraceData.OuterSingleton;
}

// FEnvTraceData @ 146f29340

FEnvTraceData * __thiscall FEnvTraceData::FEnvTraceData(FEnvTraceData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->ProjectDown = 1024.0;
  (this->NavigationFilter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->TraceChannel = '\0';
  this->SerializedChannel = '\0';
  this->VersionNum = 0;
  this->ProjectUp = 1024.0;
  this->ExtentX = 10.0;
  this->ExtentY = 10.0;
  this->ExtentZ = 10.0;
  this->PostProjectionVerticalOffset = 0.0;
  (this->TraceProfileName).ComparisonIndex = 0;
  (this->TraceProfileName).Number = 0;
  this->TraceShape = '\0';
  this->TraceMode = '\0';
  puVar2 = &this->field_0x38;
  this->bTraceComplex = 0;
  this->bCanProjectDown = 0;
  this->bCanDisableTrace = 1;
  this->bCanTraceOnGeometry = 1;
  this->bCanTraceOnNavMesh = 1;
  this->bOnlyBlockingHits = 1;
  return this;
}

// OnPostLoad @ 146f5e6e0

void __thiscall FEnvTraceData::OnPostLoad(FEnvTraceData *this)

{
  ECollisionChannel EVar1;
  ETraceTypeQuery EVar2;
  
  if (this->VersionNum == 0) {
    EVar1 = UEngineTypes::ConvertToCollisionChannel((uint)(this->TraceChannel).Value);
    (this->SerializedChannel).Value = (uchar)EVar1;
  }
  EVar2 = UEngineTypes::ConvertToTraceType((uint)(this->SerializedChannel).Value);
  (this->TraceChannel).Value = (uchar)EVar2;
  this->VersionNum = 1;
  return;
}

// SetGeometryOnly @ 146f74ac0

void __thiscall FEnvTraceData::SetGeometryOnly(FEnvTraceData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  (this->TraceMode).Value = '\x02';
  puVar2 = &this->field_0x38;
  this->bCanTraceOnNavMesh = 0;
  this->bCanDisableTrace = 0;
  this->bCanTraceOnGeometry = 1;
  return;
}

// SetNavmeshOnly @ 146f74cf0

void __thiscall FEnvTraceData::SetNavmeshOnly(FEnvTraceData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  (this->TraceMode).Value = '\x01';
  puVar2 = &this->field_0x38;
  this->bCanTraceOnNavMesh = 1;
  this->bCanDisableTrace = 0;
  this->bCanTraceOnGeometry = 0;
  return;
}

// ToText @ 146f7ab80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FEnvTraceData::ToText(FEnvTraceData *this,FText *__return_storage_ptr__,EDescriptionMode param_1)

{
  float fVar1;
  uchar uVar2;
  int iVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  UClass *pUVar12;
  ForAnyElementType FVar13;
  byte bVar14;
  UClass *pUVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  bool bVar18;
  float fVar19;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FName local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_7a8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_798
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_788
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_778
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_768
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_758
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_748
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_738
  ;
  FNumberFormattingOptions local_728;
  FNumberFormattingOptions local_710;
  FString local_6f8;
  TSharedPtr<FCulture,1> local_6e8;
  FString local_6d8;
  FString local_6c8;
  TSharedPtr<FCulture,1> local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  TSharedPtr<FCulture,1> local_648;
  FString local_638;
  TSharedPtr<FCulture,1> local_628;
  FString local_618;
  TSharedPtr<FCulture,1> local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FFormatArgumentValue local_598;
  FFormatArgumentValue local_578;
  FFormatArgumentValue local_558;
  FFormatArgumentValue local_538;
  FFormatArgumentValue local_518;
  FFormatArgumentValue local_4f8;
  FFormatArgumentValue local_4d8;
  FFormatArgumentValue local_4b8;
  FFormatArgumentValue local_498;
  FFormatArgumentValue local_478;
  FFormatArgumentValue local_458;
  FText local_438;
  FText local_428;
  FText local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FText local_3d8;
  FText local_3c8;
  FText local_3b8;
  FText local_3a8;
  FText local_398;
  FText local_388;
  FText local_378;
  FText local_368;
  FText local_358;
  FText local_348;
  FText local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FFormatArgumentValue local_198;
  FFormatArgumentValue local_178;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FTextFormat local_f8;
  FTextFormat local_e8;
  FTextFormat local_d8;
  FTextFormat local_c8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  FTextFormat local_58 [3];
  
  pUVar15 = (UClass *)0x0;
  local_res8[0] = 0;
  FText::FText(__return_storage_ptr__);
  uVar2 = (this->TraceMode).Value;
  if ((uVar2 == '\x02') || (uVar2 == '\x03')) {
    FNumberFormattingOptions::FNumberFormattingOptions(&local_710);
    local_710.MaximumFractionalDigits = 2;
    local_7a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7a8.Pairs.ArrayNum = 0;
    local_7a8.Pairs.ArrayMax = 0;
    local_648.Object = (FCulture *)0x0;
    local_648.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = FText::AsNumber(&local_3d8,this->ExtentX,&local_710,&local_648);
    local_4d8.Type = Text;
    FText::FText((FText *)&local_4d8.TextValue,pFVar10);
    if ((local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FText *)(*pcVar5)();
      return pFVar10;
    }
    ::FString::FString(&local_658,L"ExtentX");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_7a8,&local_658,&local_4d8);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    if (local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.SharedReferenceCount.ReferenceController);
    local_628.Object = (FCulture *)0x0;
    local_628.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = FText::AsNumber(&local_3c8,this->ExtentY,&local_710,&local_628);
    local_4b8.Type = Text;
    FText::FText((FText *)&local_4b8.TextValue,pFVar10);
    if ((local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FText *)(*pcVar5)();
      return pFVar10;
    }
    ::FString::FString(&local_638,L"ExtentY");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_7a8,&local_638,&local_4b8);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
    if (local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_3c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.SharedReferenceCount.ReferenceController);
    local_608.Object = (FCulture *)0x0;
    local_608.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = FText::AsNumber(&local_3b8,this->ExtentZ,&local_710,&local_608);
    local_498.Type = Text;
    FText::FText((FText *)&local_498.TextValue,pFVar10);
    if ((local_498.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FText *)(*pcVar5)();
      return pFVar10;
    }
    ::FString::FString(&local_618,L"ExtentZ");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_7a8,&local_618,&local_498);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
    if (local_498.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_498.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_3b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.SharedReferenceCount.ReferenceController);
    uVar2 = (this->TraceShape).Value;
    if (uVar2 == '\0') {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_308,L"EnvQueryGenerator",L"Line",L"line");
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_308.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
      }
    }
    else {
      if (uVar2 == '\x02') {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_318,L"EnvQueryGenerator",L"SphereWithRadius",
                             L"sphere (radius: {ExtentX})");
        pFVar11 = FTextFormat::FTextFormat(&local_d8,pFVar10,Default);
        pFVar10 = FText::Format(&local_328,pFVar11,&local_7a8);
        bVar14 = 6;
        bVar9 = false;
        bVar18 = false;
      }
      else {
        if (uVar2 == '\x03') {
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_338,L"EnvQueryGenerator",L"CasuleWithRadiusHalfHeight",
                               L"capsule (radius: {ExtentX}, half height: {ExtentZ})");
          pFVar11 = FTextFormat::FTextFormat(&local_c8,pFVar10,Default);
          pFVar10 = FText::Format(&local_348,pFVar11,&local_7a8);
          bVar14 = 0x18;
          bVar9 = false;
        }
        else {
          if (uVar2 == '\x01') {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_358,L"EnvQueryGenerator",L"BoxWithExtents",
                                 L"box (extent: {ExtentX} {ExtentY} {ExtentZ)");
            pFVar11 = FTextFormat::FTextFormat(&local_b8,pFVar10,Default);
            pFVar10 = FText::Format(&local_368,pFVar11,&local_7a8);
            bVar14 = 0x60;
          }
          else {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_378,L"EnvQueryGenerator",L"Unknown",L"unknown");
            bVar14 = 0x80;
          }
          bVar9 = true;
          pFVar10 = FText::FText(&local_388,pFVar10);
        }
        pFVar10 = FText::FText(&local_398,pFVar10);
        bVar18 = true;
      }
      pFVar10 = FText::FText(&local_3a8,pFVar10);
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_3a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
      }
      if ((bVar18) && (local_398.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
      }
      if ((bVar9) && (local_388.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
      }
      if (((char)bVar14 < '\0') &&
         (bVar14 = bVar14 & 0x7f, local_378.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 0x40) != 0) &&
         (bVar14 = bVar14 & 0xbf, local_368.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 0x20) != 0) &&
         (bVar14 = bVar14 & 0xdf, local_358.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 0x10) != 0) &&
         (bVar14 = bVar14 & 0xef, local_348.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 8) != 0) &&
         (bVar14 = bVar14 & 0xf7, local_338.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 4) != 0) &&
         (bVar14 = bVar14 & 0xfb, local_328.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
      }
      if (((bVar14 & 2) != 0) && (local_318.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_7a8.Pairs.AllocatorInstance.Data,
               local_7a8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_7a8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_7a8.Pairs.AllocatorInstance.Data);
    }
    if (param_1 == Brief) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChannelEnum = StaticEnum<enum_ETraceTypeQuery>();
        _Init_thread_footer(&::_TSS0);
      }
      if ((ChannelEnum == (UEnum *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChannelEnum != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                             ,0xb3,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      local_598.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
      local_788.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_788.Pairs.ArrayNum = 0;
      local_788.Pairs.ArrayMax = 0;
      local_598.Type = Text;
      if (local_598.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_598.TextValue.field0_0x0.TypedValue.TextData.Reference + 8)
        )(local_598.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
      }
      local_598.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
      if ((local_598.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_5f8,L"ExtentDescription");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_788,&local_5f8,&local_598);
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
      if (local_598.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_598.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      bVar9 = this->bCanProjectDown == 0;
      bVar18 = this->bCanProjectDown == 0;
      pFVar10 = &local_2e8;
      pwVar16 = L"projection";
      if (bVar18) {
        pwVar16 = L"trace";
      }
      pwVar17 = L"Projection";
      if (bVar18) {
        pwVar17 = L"Trace";
        pFVar10 = &local_2f8;
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText(pFVar10,L"EnvQueryGenerator",pwVar17,pwVar16);
      local_478.Type = Text;
      FText::FText((FText *)&local_478.TextValue,pFVar10);
      if ((local_478.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar18)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_5e8,L"ProjectionTraceDesc");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_788,&local_5e8,&local_478);
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
      if (local_478.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_478.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if ((bVar9) && (local_2f8.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
      }
      if ((!bVar9) && (local_2e8.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
      }
      pFVar10 = UEnum::GetDisplayNameTextByValue
                          (ChannelEnum,&local_2d8,(ulonglong)(this->TraceChannel).Value);
      local_458.Type = Text;
      FText::FText((FText *)&local_458.TextValue,pFVar10);
      if ((local_458.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_5d8,L"Channel");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_788,&local_5d8,&local_458);
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
      if (local_458.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_458.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_2d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_2b8,L"EnvQueryGenerator",L"GeometryBriefDescription",
                           L"{ExtentDescription} {ProjectionTraceDesc} on {Channel}");
      pFVar11 = FTextFormat::FTextFormat(&local_a8,pFVar10,Default);
      pFVar10 = FText::Format(&local_2c8,pFVar11,&local_788);
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_2c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
      }
      if (local_2b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_788.Pairs.AllocatorInstance.Data,
                 local_788.Pairs.ArrayNum);
      FVar13.Data = local_788.Pairs.AllocatorInstance.Data;
    }
    else {
      local_578.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
      local_758.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_758.Pairs.ArrayNum = 0;
      local_758.Pairs.ArrayMax = 0;
      local_578.Type = Text;
      if (local_578.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_578.TextValue.field0_0x0.TypedValue.TextData.Reference + 8)
        )(local_578.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res10);
      }
      local_578.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
      if ((local_578.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_5c8,L"Description");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_758,&local_5c8,&local_578);
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
      if (local_578.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_578.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (this->bTraceComplex != 0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_298,L"EnvQueryGenerator",L"DescWithComplexCollision",
                             L"{Description}, complex collision");
        pFVar11 = FTextFormat::FTextFormat(&local_98,pFVar10,Default);
        pFVar10 = FText::Format(&local_2a8,pFVar11,&local_758);
        FText::operator=(__return_storage_ptr__,pFVar10);
        if (local_2a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
        }
        if (local_298.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
        }
      }
      if (this->bOnlyBlockingHits == 0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_278,L"EnvQueryGenerator",L"DescWithNonBlocking",
                             L"{Description}, accept non blocking");
        pFVar11 = FTextFormat::FTextFormat(&local_88,pFVar10,Default);
        pFVar10 = FText::Format(&local_288,pFVar11,&local_758);
        FText::operator=(__return_storage_ptr__,pFVar10);
        if (local_288.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
        }
        if (local_278.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_758.Pairs.AllocatorInstance.Data,
                 local_758.Pairs.ArrayNum);
      FVar13.Data = local_758.Pairs.AllocatorInstance.Data;
    }
  }
  else {
    if (uVar2 != '\x01') {
      if (uVar2 != '\x04') {
        return __return_storage_ptr__;
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_3e8,L"EnvQueryGenerator",L"NavigationOverLedges",
                           L"Navmesh trace going over navmesh ledges");
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_3e8.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_268,L"EnvQueryGenerator",L"Navmesh",L"navmesh");
    FText::operator=(__return_storage_ptr__,pFVar10);
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
    if (this->bCanProjectDown == 0) {
      local_738.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_738.Pairs.ArrayNum = 0;
      local_738.Pairs.ArrayMax = 0;
      FFormatArgumentValue::FFormatArgumentValue(&local_118,__return_storage_ptr__);
      ::FString::FString(&local_698,L"Description");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_738,&local_698,&local_118);
      if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_698.Data.AllocatorInstance.Data);
      }
      if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_428,L"EnvQueryGenerator",L"DescriptionWithTrace",
                           L"{Description} trace");
      pFVar11 = FTextFormat::FTextFormat(&local_f8,pFVar10,Default);
      pFVar10 = FText::Format(&local_438,pFVar11,&local_738);
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_438.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
      }
      if (local_428.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
      }
      pUVar4 = (this->NavigationFilter).Class.field0_0x0.DebugPtr;
      if ((pUVar4 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), pUVar12 != (UClass *)0x0
         )) {
        iVar3 = (int)pUVar12->_padding_;
        if (((int)pUVar4->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar12->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((bVar9) && ((this->NavigationFilter).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
          local_768.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_768.Pairs.ArrayNum = 0;
          local_768.Pairs.ArrayMax = 0;
          FFormatArgumentValue::FFormatArgumentValue(&local_198,__return_storage_ptr__);
          ::FString::FString(&local_688,L"Description");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_768,&local_688,&local_198);
          if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_688.Data.AllocatorInstance.Data);
          }
          if (local_198.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_198.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          pUVar4 = (this->NavigationFilter).Class.field0_0x0.DebugPtr;
          if ((pUVar4 != (UClass *)0x0) &&
             (pUVar12 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(),
             pUVar12 != (UClass *)0x0)) {
            iVar3 = (int)pUVar12->_padding_;
            if (((int)pUVar4->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar12->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              pUVar15 = (this->NavigationFilter).Class.field0_0x0.DebugPtr;
            }
          }
          local_res20 = (FName)pUVar15->_padding_;
          ::FName::ToString(&local_res20,&local_668);
          pFVar10 = FText::FromString(&local_418,&local_668);
          local_4f8.Type = Text;
          FText::FText((FText *)&local_4f8.TextValue,pFVar10);
          if ((local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar5)();
            return pFVar10;
          }
          ::FString::FString(&local_678,L"NavigationFilter");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_768,&local_678,&local_4f8);
          if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_678.Data.AllocatorInstance.Data);
          }
          if (local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_418.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
          }
          if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Data.AllocatorInstance.Data);
          }
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_3f8,L"EnvQueryGenerator",L"DescriptionWithNavigationFilter",
                               L"{Description} (filter: {NavigationFilter})");
          pFVar11 = FTextFormat::FTextFormat(local_58,pFVar10,Default);
          pFVar10 = FText::Format(&local_408,pFVar11,&local_768);
          FText::operator=(__return_storage_ptr__,pFVar10);
          if (local_408.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
          }
          if (local_3f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_768.Pairs.AllocatorInstance.Data,
                     local_768.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_768.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_768.Pairs.AllocatorInstance.Data);
          }
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_738.Pairs.AllocatorInstance.Data,
                 local_738.Pairs.ArrayNum);
      FVar13.Data = local_738.Pairs.AllocatorInstance.Data;
    }
    else {
      FNumberFormattingOptions::FNumberFormattingOptions(&local_728);
      local_728.MaximumFractionalDigits = 0;
      local_798.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_798.Pairs.ArrayNum = 0;
      local_798.Pairs.ArrayMax = 0;
      FFormatArgumentValue::FFormatArgumentValue(&local_178,__return_storage_ptr__);
      ::FString::FString(&local_5b8,L"Description");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_798,&local_5b8,&local_178);
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_178.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      fVar19 = this->ProjectUp;
      fVar1 = this->ProjectDown;
      if (fVar1 == fVar19) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_228,L"EnvQueryGenerator",L"Height",L"height");
        bVar9 = true;
        bVar18 = false;
        bVar6 = false;
        bVar7 = false;
      }
      else {
        pwVar17 = L"down";
        pwVar16 = L"Down";
        pFVar10 = &local_238;
        if (fVar1 <= fVar19) {
          pwVar17 = L"up";
          pwVar16 = L"Up";
          pFVar10 = &local_248;
        }
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (pFVar10,L"EnvQueryGenerator",pwVar16,pwVar17);
        pFVar10 = FText::FText(&local_258,pFVar10);
        bVar9 = false;
        bVar18 = true;
        bVar6 = false;
        bVar7 = true;
        if (fVar1 <= fVar19) {
          bVar9 = false;
          bVar18 = true;
          bVar6 = true;
          bVar7 = false;
        }
      }
      local_538.Type = Text;
      FText::FText((FText *)&local_538.TextValue,pFVar10);
      if ((local_538.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_5a8,L"Direction");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_798,&local_5a8,&local_538);
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
      }
      if (local_538.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_538.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if ((bVar18) && (local_258.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
      }
      if ((bVar6) && (local_248.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
      }
      if ((bVar7) && (local_238.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if ((bVar9) && (local_228.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      fVar19 = this->ProjectUp;
      if (this->ProjectUp <= this->ProjectDown) {
        fVar19 = this->ProjectDown;
      }
      local_6e8.Object = (FCulture *)0x0;
      local_6e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar10 = FText::AsNumber(&local_218,fVar19,&local_728,&local_6e8);
      local_558.Type = Text;
      FText::FText((FText *)&local_558.TextValue,pFVar10);
      if ((local_558.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FText *)(*pcVar5)();
        return pFVar10;
      }
      ::FString::FString(&local_6f8,L"ProjectionAmount");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_798,&local_6f8,&local_558);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if (local_558.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_558.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_218.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6e8.SharedReferenceCount.ReferenceController);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_1f8,L"EnvQueryGenerator",L"DescriptionWithProjection",
                           L"projection ({Direction}: {ProjectionAmount}");
      pFVar11 = FTextFormat::FTextFormat(&local_e8,pFVar10,Default);
      pFVar10 = FText::Format(&local_208,pFVar11,&local_798);
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_208.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
      }
      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
      }
      if (__real_3f800000 < this->ExtentX) {
        local_728.MaximumFractionalDigits = 2;
        local_778.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_778.Pairs.ArrayNum = 0;
        local_778.Pairs.ArrayMax = 0;
        FFormatArgumentValue::FFormatArgumentValue(&local_158,__return_storage_ptr__);
        ::FString::FString(&local_6d8,L"Description");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_778,&local_6d8,&local_158);
        if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
        }
        if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        local_6b8.Object = (FCulture *)0x0;
        local_6b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar10 = FText::AsNumber(&local_1e8,this->ExtentX,&local_728,&local_6b8);
        local_518.Type = Text;
        FText::FText((FText *)&local_518.TextValue,pFVar10);
        if ((local_518.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FText *)(*pcVar5)();
          return pFVar10;
        }
        ::FString::FString(&local_6c8,L"Radius");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_778,&local_6c8,&local_518);
        if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
        }
        if (local_518.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_518.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6b8.SharedReferenceCount.ReferenceController);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_1c8,L"EnvQueryGenerator",L"DescriptionWithRadius",
                             L"{Description}, radius {Radius}");
        pFVar11 = FTextFormat::FTextFormat(&local_78,pFVar10,Default);
        pFVar10 = FText::Format(&local_1d8,pFVar11,&local_778);
        FText::operator=(__return_storage_ptr__,pFVar10);
        if (local_1d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
        }
        if (local_1c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_778.Pairs.AllocatorInstance.Data,
                   local_778.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_778.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_778.Pairs.AllocatorInstance.Data);
        }
      }
      local_748.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.Pairs.ArrayNum = 0;
      local_748.Pairs.ArrayMax = 0;
      FFormatArgumentValue::FFormatArgumentValue(&local_138,__return_storage_ptr__);
      ::FString::FString(&local_6a8,L"Description");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_748,&local_6a8,&local_138);
      if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_1a8,L"EnvQueryGenerator",L"DescriptionWithEnding",
                           L"{Description})");
      pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar10,Default);
      pFVar10 = FText::Format(&local_1b8,pFVar11,&local_748);
      FText::operator=(__return_storage_ptr__,pFVar10);
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_748.Pairs.AllocatorInstance.Data,
                 local_748.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_748.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_748.Pairs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_798.Pairs.AllocatorInstance.Data,
                 local_798.Pairs.ArrayNum);
      FVar13.Data = local_798.Pairs.AllocatorInstance.Data;
    }
  }
  if ((TTuple<FString,FFormatArgumentValue> *)FVar13.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return __return_storage_ptr__;
}

