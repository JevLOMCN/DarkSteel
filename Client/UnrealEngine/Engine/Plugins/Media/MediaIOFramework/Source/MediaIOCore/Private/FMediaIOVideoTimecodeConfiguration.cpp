// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// StaticStruct @ 14d77d740

UScriptStruct * __cdecl FMediaIOVideoTimecodeConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration,
                         (UObject *)pUVar1,L"MediaIOVideoTimecodeConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.OuterSingleton;
}

// operator== @ 14d78dcd0

bool __thiscall
FMediaIOVideoTimecodeConfiguration::operator==
          (FMediaIOVideoTimecodeConfiguration *this,FMediaIOVideoTimecodeConfiguration *param_1)

{
  EMediaIOTransportType EVar1;
  
  if ((((((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier ==
          (param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier) &&
        (EVar1 = (param_1->MediaConfiguration).MediaConnection.TransportType,
        EVar1 == (this->MediaConfiguration).MediaConnection.TransportType)) &&
       ((param_1->MediaConfiguration).MediaConnection.PortIdentifier ==
        (this->MediaConfiguration).MediaConnection.PortIdentifier)) &&
      ((EVar1 != QuadLink ||
       ((param_1->MediaConfiguration).MediaConnection.QuadTransportType ==
        (this->MediaConfiguration).MediaConnection.QuadTransportType)))) &&
     (((param_1->MediaConfiguration).MediaMode.DeviceModeIdentifier ==
       (this->MediaConfiguration).MediaMode.DeviceModeIdentifier &&
      (((this->MediaConfiguration).bIsInput == (param_1->MediaConfiguration).bIsInput &&
       (this->TimecodeFormat == param_1->TimecodeFormat)))))) {
    return true;
  }
  return false;
}

// IsValid @ 14d7b1a60

bool __thiscall
FMediaIOVideoTimecodeConfiguration::IsValid(FMediaIOVideoTimecodeConfiguration *this)

{
  if ((((this->TimecodeFormat != None) &&
       ((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier != -1)) &&
      ((this->MediaConfiguration).MediaConnection.PortIdentifier != -1)) &&
     ((this->MediaConfiguration).MediaMode.DeviceModeIdentifier != -1)) {
    return true;
  }
  return false;
}

// ToText @ 14d7bfe20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FMediaIOVideoTimecodeConfiguration::ToText
          (FMediaIOVideoTimecodeConfiguration *this,FText *__return_storage_ptr__,bool param_1)

{
  EMediaIOStandardType EVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FText *pFVar10;
  wchar_t *pwVar11;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_288;
  FFrameRate local_278;
  FText local_270;
  undefined1 local_260 [8];
  FText local_258;
  FText local_248;
  FText local_238;
  TSharedPtr<FCulture,1> local_228;
  TSharedPtr<FCulture,1> local_218;
  FTextFormat local_208;
  FText local_1f8;
  TSharedPtr<FCulture,1> local_1e8;
  TSharedPtr<FCulture,1> local_1d8;
  FText local_1c8;
  FText local_1b8;
  FFormatArgumentValue local_1a8;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  local_res18[0] = 0;
  if (param_1) {
    local_218.Object = (FCulture *)0x0;
    local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = FText::AsNumber(&local_108,(this->MediaConfiguration).MediaConnection.PortIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_218);
    pFVar5 = IMediaIOCoreDeviceProvider::GetTransportName
                       (&local_f8,(this->MediaConfiguration).MediaConnection.TransportType,
                        (this->MediaConfiguration).MediaConnection.QuadTransportType);
    local_228.Object = (FCulture *)0x0;
    local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = FText::AsNumber(&local_e8,
                             (this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_228);
    pFVar7 = FText::FromName(&local_d8,(FName *)&(this->MediaConfiguration).MediaConnection);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_188,L"MediaIOCoreDefinitions",
                        L"FMediaIOAutoDetectConfigurationToText",L"{0} [device{1}/{2}{3}]");
    pFVar9 = FTextFormat::FTextFormat(&local_c8,pFVar8,Default);
    FText::Format<FText,FText,FText,FText>(&local_248,pFVar9,pFVar7,pFVar6,pFVar5,pFVar4);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    local_258.TextData.Reference = local_248.TextData.Reference;
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 8))
                (local_248.TextData.Reference,local_res18);
    }
    local_258.Flags = local_248.Flags;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"MediaIOCoreDefinitions",
                        L"MediaTimecodeAutoDetectConfigurationRefText",L"{0} / Auto");
    pFVar9 = FTextFormat::FTextFormat(&local_b8,pFVar4,Default);
    local_1a8.Type = Text;
    FText::FText((FText *)&local_1a8.TextValue,&local_258);
    if ((local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_288.AllocatorInstance,1,&local_288.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_288.AllocatorInstance.Data,&local_1a8,1);
    local_208.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_208.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_208.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(__return_storage_ptr__,&local_208,&local_288);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
    if ((FFormatArgumentValue *)local_288.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    local_270.TextData.Reference = local_248.TextData.Reference;
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      local_270.TextData.Reference = local_248.TextData.Reference;
    }
    goto LAB_14d7c03f8;
  }
  if ((((this->TimecodeFormat == None) ||
       ((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier == -1)) ||
      ((this->MediaConfiguration).MediaConnection.PortIdentifier == -1)) ||
     ((this->MediaConfiguration).MediaMode.DeviceModeIdentifier == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCoreDefinitions",L"InvalidConfiguration",L"<Invalid>"
              );
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_270,L"MediaIOCoreDefinitions",L"InvalidTimecode",L"<Invalid>");
  if (this->TimecodeFormat == LTC) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"MediaIOCoreDefinitions",L"LTCLabel",L"LTC");
    FText::operator=(&local_270,pFVar4);
    local_168.TextData.Reference = local_118.TextData.Reference;
LAB_14d7c0164:
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
  }
  else if (this->TimecodeFormat == VITC) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"MediaIOCoreDefinitions",L"VITCLabel",L"VITC");
    FText::operator=(&local_270,pFVar4);
    goto LAB_14d7c0164;
  }
  if ((this->MediaConfiguration).MediaMode.DeviceModeIdentifier == -1) {
    FText::AsLocalizable_Advanced_LocText
              (&local_1f8,L"MediaIOCoreDefinitions",L"InvalidMode",L"<Invalid>");
  }
  else {
    local_278 = (this->MediaConfiguration).MediaMode.FrameRate;
    EVar1 = (this->MediaConfiguration).MediaMode.Standard;
    if (EVar1 == Interlaced) {
      local_278.Numerator = local_278.Numerator / 2;
    }
    FMediaIOCommonDisplayModes::GetMediaIOCommonDisplayModeInfoName
              (&local_1f8,(this->MediaConfiguration).MediaMode.Resolution.field0_0x0._s_0.X,
               (this->MediaConfiguration).MediaMode.Resolution.field0_0x0._s_0.Y,&local_278,EVar1);
  }
  local_1d8.Object = (FCulture *)0x0;
  local_1d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_a8,(this->MediaConfiguration).MediaConnection.PortIdentifier,
                           (FNumberFormattingOptions *)0x0,&local_1d8);
  pFVar5 = IMediaIOCoreDeviceProvider::GetTransportName
                     (&local_98,(this->MediaConfiguration).MediaConnection.TransportType,
                      (this->MediaConfiguration).MediaConnection.QuadTransportType);
  local_1e8.Object = (FCulture *)0x0;
  local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6 = FText::AsNumber(&local_88,
                           (this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier,
                           (FNumberFormattingOptions *)0x0,&local_1e8);
  pFVar7 = FText::FromName(&local_78,(FName *)&(this->MediaConfiguration).MediaConnection);
  bVar3 = (this->MediaConfiguration).bIsInput;
  pwVar11 = L"In";
  if (bVar3 == false) {
    pwVar11 = L"Out";
  }
  pFVar8 = &local_148;
  if (bVar3 != false) {
    pFVar8 = &local_138;
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText(pFVar8,L"MediaIOCoreDefinitions",pwVar11,pwVar11);
  pFVar8 = FText::FText(&local_68,pFVar8);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_158,L"MediaIOCoreDefinitions",L"FMediaIOConfigurationToText",
                       L"{0} - {1} [device{2}/{3}{4}/{5}]");
  pFVar9 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
  FText::Format<FText,FText,FText,FText,FText,FText>
            (&local_238,pFVar9,pFVar8,pFVar7,pFVar6,pFVar5,pFVar4,&local_1f8);
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  if (((2U - (bVar3 != false) & 2) != 0) && (local_148.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  if ((bVar3 != false) && (local_138.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  local_1c8.TextData.Reference = local_270.TextData.Reference;
  if (local_270.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_270.TextData.Reference + 8))
              (local_270.TextData.Reference,local_res20);
  }
  local_1c8.Flags = local_270.Flags;
  local_1b8.TextData.Reference = local_238.TextData.Reference;
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 8))
              (local_238.TextData.Reference,local_260);
  }
  local_1b8.Flags = local_238.Flags;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_128,L"MediaIOCoreDefinitions",L"MediaTimecodeConfigurationRefText",
                      L"{0}/{1}");
  pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar4,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar9,&local_1b8,&local_1c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
LAB_14d7c03f8:
  if (local_270.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

