// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// GetTransportName @ 14d7ae8f0

FText * __cdecl
IMediaIOCoreDeviceProvider::GetTransportName
          (FText *__return_storage_ptr__,EMediaIOTransportType param_1,
          EMediaIOQuadLinkTransportType param_2)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Single",L"single");
  if (param_1 == DualLink) {
    pwVar3 = L"dual";
    pwVar2 = L"Dual";
  }
  else if (param_1 == QuadLink) {
    if (param_2 == SquareDivision) {
      pwVar3 = L"quadSQ";
      pwVar2 = L"QuadSquare";
    }
    else {
      if (param_2 != TwoSampleInterleave) {
        return __return_storage_ptr__;
      }
      pwVar3 = L"quadSI";
      pwVar2 = L"QuadTSI";
    }
  }
  else {
    if (param_1 != HDMI) {
      return __return_storage_ptr__;
    }
    pwVar3 = L"HDMI";
    pwVar2 = L"HDMI";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MediaIOCoreDeviceProvider",pwVar2,pwVar3);
  FText::operator=(__return_storage_ptr__,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// ToText @ 14d7c0450

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,
          FMediaIOConfiguration *param_1,bool param_2)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FText *pFVar8;
  wchar_t *pwVar9;
  bool bVar10;
  TSharedPtr<FCulture,1> local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  if (param_2) {
    local_e8.Object = (FCulture *)0x0;
    local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = FText::AsNumber(&local_a8,(param_1->MediaConnection).PortIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_e8);
    pFVar2 = GetTransportName(&local_98,(param_1->MediaConnection).TransportType,
                              (param_1->MediaConnection).QuadTransportType);
    local_f8.Object = (FCulture *)0x0;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsNumber(&local_88,(param_1->MediaConnection).Device.DeviceIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_f8);
    pFVar4 = FText::FromName(&local_78,(FName *)&param_1->MediaConnection);
    bVar10 = param_1->bIsInput;
    pwVar9 = L"In";
    pFVar5 = &local_b8;
    if (bVar10 == false) {
      pwVar9 = L"Out";
      pFVar5 = &local_c8;
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (pFVar5,L"MediaIOCoreDeviceProvider",pwVar9,pwVar9);
    pFVar5 = FText::FText(&local_68,pFVar5);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"MediaIOCoreDeviceProvider",
                        L"FMediaIOConfigurationToTextAutoDetect",
                        L"{0} - {1} [device{2}/{3}{4}/auto]");
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar6,Default);
    FText::Format<FText,FText,FText,FText,FText>
              (__return_storage_ptr__,pFVar7,pFVar5,pFVar4,pFVar3,pFVar2,pFVar1);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (((2U - (bVar10 != false) & 2) != 0) && (local_c8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    if ((bVar10 != false) && (local_b8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  else if ((((param_1->MediaConnection).Device.DeviceIdentifier == -1) ||
           ((param_1->MediaConnection).PortIdentifier == -1)) ||
          ((param_1->MediaMode).DeviceModeIdentifier == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Invalid",L"<Invalid>");
  }
  else {
    pFVar1 = FMediaIOMode::GetModeName(&param_1->MediaMode,&local_58);
    local_f8.Object = (FCulture *)0x0;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber(&local_68,(param_1->MediaConnection).PortIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_f8);
    pFVar3 = GetTransportName(&local_78,(param_1->MediaConnection).TransportType,
                              (param_1->MediaConnection).QuadTransportType);
    local_e8.Object = (FCulture *)0x0;
    local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = FText::AsNumber(&local_88,(param_1->MediaConnection).Device.DeviceIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_e8);
    pFVar6 = FText::FromName(&local_98,(FName *)&param_1->MediaConnection);
    pwVar9 = L"In";
    bVar10 = param_1->bIsInput == false;
    pFVar5 = &local_d8;
    if (bVar10) {
      pwVar9 = L"Out";
      pFVar5 = &local_c8;
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (pFVar5,L"MediaIOCoreDeviceProvider",pwVar9,pwVar9);
    pFVar5 = FText::FText(&local_a8,pFVar5);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_b8,L"MediaIOCoreDeviceProvider",L"FMediaIOConfigurationToText",
                        L"{0} - {1} [device{2}/{3}{4}/{5}]");
    pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
    FText::Format<FText,FText,FText,FText,FText,FText>
              (__return_storage_ptr__,pFVar7,pFVar5,pFVar6,pFVar4,pFVar3,pFVar2,pFVar1);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if ((bVar10) && (local_c8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    if ((!bVar10) && (local_d8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ToText @ 14d7c07b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,
          FMediaIOConnection *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSharedPtr<FCulture,1> local_88;
  TSharedPtr<FCulture,1> local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (((param_1->Device).DeviceIdentifier == -1) || (param_1->PortIdentifier == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Invalid",L"<Invalid>");
  }
  else {
    local_78.Object = (FCulture *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = FText::AsNumber(&local_58,param_1->PortIdentifier,(FNumberFormattingOptions *)0x0,
                             &local_78);
    pFVar2 = GetTransportName(&local_48,param_1->TransportType,param_1->QuadTransportType);
    local_88.Object = (FCulture *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsNumber(&local_38,(param_1->Device).DeviceIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_88);
    pFVar4 = FText::FromName(&local_28,(FName *)param_1);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"MediaIOCoreDeviceProvider",L"FMediaIOConnectionToText",
                        L"{0} [device{1}/{2}{3}]");
    pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
    FText::Format<FText,FText,FText,FText>
              (__return_storage_ptr__,pFVar6,pFVar4,pFVar3,pFVar2,pFVar1);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ToText @ 14d7c0920

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,FMediaIODevice *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FFormatArgumentValue local_78;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  iVar1 = param_1->DeviceIdentifier;
  if (iVar1 == -1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Invalid",L"<Invalid>");
  }
  else {
    pFVar5 = FText::FromName(&local_28,&param_1->DeviceName);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MediaIOCoreDeviceProvider",L"FMediaIODeviceToText",
                        L"{0} [device{1}]");
    pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
    local_78.Type = Text;
    FText::FText((FText *)&local_78.TextValue,pFVar5);
    if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar3)();
        return pFVar5;
      }
    }
    local_58 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 2;
    local_50 = (longlong)iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_98.AllocatorInstance.Data,&local_78,2);
    local_88.TextFormatData.Object = (pFVar7->TextFormatData).Object;
    local_88.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(__return_storage_ptr__,&local_88,&local_98);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar5->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// ToText @ 14d7c0b10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,
          FMediaIOInputConfiguration *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  undefined1 local_res18 [8];
  FText local_d8;
  TSharedPtr<FCulture,1> local_c8;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  if (((((param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier == -1) ||
       ((param_1->MediaConfiguration).MediaConnection.PortIdentifier == -1)) ||
      ((param_1->MediaConfiguration).MediaMode.DeviceModeIdentifier == -1)) ||
     ((param_1->InputType == FillAndKey && (param_1->KeyPortIdentifier == -1)))) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Invalid",L"<Invalid>");
  }
  else {
    pFVar1 = FText::GetEmpty();
    local_d8.TextData.Reference = (pFVar1->TextData).Reference;
    if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
      (*(code *)(((((FCulture *)local_d8.TextData.Reference)->Implementation).Ptr)->ICULocale).
                _padding_)(local_d8.TextData.Reference,local_res18);
    }
    local_d8.Flags = pFVar1->Flags;
    if (param_1->InputType == FillAndKey) {
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar1 = FText::AsNumber(&local_98,param_1->KeyPortIdentifier,(FNumberFormattingOptions *)0x0,
                               &local_c8);
      pFVar2 = GetTransportName(&local_88,
                                (param_1->MediaConfiguration).MediaConnection.TransportType,
                                (param_1->MediaConfiguration).MediaConnection.QuadTransportType);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_b8,L"MediaIOCoreDeviceProvider",
                          L"FMediaIOInputConfigurationKeyToText",L" - Key[{0}{1}]");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_78,pFVar3,Default);
      pFVar1 = FText::Format<FText,FText>((FText *)&local_a8,pFVar4,pFVar2,pFVar1);
      FText::operator=(&local_d8,pFVar1);
      if (local_a8.Object != (FCulture *)0x0) {
        (**(code **)((((local_a8.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      if (local_b8.Object != (FCulture *)0x0) {
        (**(code **)((((local_b8.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    local_c8.Object = (FCulture *)local_d8.TextData.Reference;
    if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                (local_d8.TextData.Reference,local_res18);
    }
    local_c8.SharedReferenceCount.ReferenceController._0_4_ = local_d8.Flags;
    pFVar1 = FMediaIOMode::GetModeName(&(param_1->MediaConfiguration).MediaMode,&local_78);
    local_a8.Object = (FCulture *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber(&local_88,(param_1->MediaConfiguration).MediaConnection.PortIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_a8);
    pFVar3 = GetTransportName(&local_68,(param_1->MediaConfiguration).MediaConnection.TransportType,
                              (param_1->MediaConfiguration).MediaConnection.QuadTransportType);
    local_b8.Object = (FCulture *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = FText::AsNumber(&local_58,
                             (param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier,
                             (FNumberFormattingOptions *)0x0,&local_b8);
    pFVar6 = FText::FromName(&local_48,(FName *)&(param_1->MediaConfiguration).MediaConnection);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"MediaIOCoreDeviceProvider",L"FMediaIOInputConfigurationToText",
                        L"Fill - {0} [device{1}/{2}{3}/{4}{5}]");
    pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
    FText::Format<FText,FText,FText,FText,FText,FText>
              (__return_storage_ptr__,pFVar4,pFVar6,pFVar5,pFVar3,pFVar2,pFVar1,(FText *)&local_c8);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ToText @ 14d7c0e00

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,FMediaIOMode *param_1)

{
  FMediaIOMode::GetModeName(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToText @ 14d7c0e20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IMediaIOCoreDeviceProvider::ToText
          (IMediaIOCoreDeviceProvider *this,FText *__return_storage_ptr__,
          FMediaIOOutputConfiguration *param_1)

{
  EMediaIOReferenceType EVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 local_res18 [8];
  TSharedPtr<FCulture,1> local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FText local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  if ((((param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier != -1) &&
      ((param_1->MediaConfiguration).MediaConnection.PortIdentifier != -1)) &&
     ((param_1->MediaConfiguration).MediaMode.DeviceModeIdentifier != -1)) {
    bVar2 = true;
    if (param_1->OutputType == FillAndKey) {
      bVar2 = true;
      if (param_1->KeyPortIdentifier == -1) {
        bVar2 = false;
      }
    }
    if (((param_1->OutputReference != Input) || (param_1->ReferencePortIdentifier != -1)) && (bVar2)
       ) {
      pFVar3 = FText::GetEmpty();
      local_b8.TextData.Reference = (pFVar3->TextData).Reference;
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                  (local_b8.TextData.Reference,local_res18);
      }
      local_b8.Flags = pFVar3->Flags;
      if (param_1->OutputType == FillAndKey) {
        local_e8.Object = (FCulture *)0x0;
        local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar3 = FText::AsNumber(&local_98,param_1->KeyPortIdentifier,
                                 (FNumberFormattingOptions *)0x0,&local_e8);
        pFVar4 = GetTransportName(&local_a8,
                                  (param_1->MediaConfiguration).MediaConnection.TransportType,
                                  (param_1->MediaConfiguration).MediaConnection.QuadTransportType);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_c8,L"MediaIOCoreDeviceProvider",
                            L"FMediaIOOutputConfigurationKeyToText",L" - Key[{0}{1}]");
        pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_88,pFVar5,Default);
        pFVar3 = FText::Format<FText,FText>((FText *)&local_f8,pFVar6,pFVar4,pFVar3);
        FText::operator=(&local_b8,pFVar3);
        if (local_f8.Object != (FCulture *)0x0) {
          (**(code **)((((local_f8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        if (local_c8.Object != (FCulture *)0x0) {
          (**(code **)((((local_c8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
      }
      pFVar3 = FText::GetEmpty();
      local_d8.TextData.Reference = (pFVar3->TextData).Reference;
      if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
        (*(code *)(((((FCulture *)local_d8.TextData.Reference)->Implementation).Ptr)->ICULocale).
                  _padding_)(local_d8.TextData.Reference,local_res18);
      }
      local_d8.Flags = pFVar3->Flags;
      EVar1 = param_1->OutputReference;
      if (EVar1 == Input) {
        local_e8.Object = (FCulture *)0x0;
        local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar3 = FText::AsNumber(&local_88,param_1->ReferencePortIdentifier,
                                 (FNumberFormattingOptions *)0x0,&local_e8);
        pFVar4 = GetTransportName(&local_98,
                                  (param_1->MediaConfiguration).MediaConnection.TransportType,
                                  (param_1->MediaConfiguration).MediaConnection.QuadTransportType);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_c8,L"MediaIOCoreDeviceProvider",
                            L"FMediaIOOutputConfigurationRefToText",L" - Ref[{0}{1}]");
        pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_a8,pFVar5,Default);
        pFVar3 = FText::Format<FText,FText>((FText *)&local_f8,pFVar6,pFVar4,pFVar3);
        FText::operator=(&local_d8,pFVar3);
        if (local_f8.Object != (FCulture *)0x0) {
          (**(code **)((((local_f8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        if (local_c8.Object != (FCulture *)0x0) {
          (**(code **)((((local_c8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
      }
      else {
        if (EVar1 == External) {
          pwVar11 = L"External";
          pwVar10 = L"External";
        }
        else {
          if (EVar1 != FreeRun) goto LAB_14d7c10d4;
          pwVar11 = L"FreeRun";
          pwVar10 = L"FreeRun";
        }
        pFVar3 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_f8,L"MediaIOCoreDeviceProvider",pwVar10,pwVar11);
        FText::operator=(&local_d8,pFVar3);
        if (local_f8.Object != (FCulture *)0x0) {
          (**(code **)((((local_f8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
      }
LAB_14d7c10d4:
      local_e8.Object = (FCulture *)local_d8.TextData.Reference;
      if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                  (local_d8.TextData.Reference,local_res18);
      }
      local_e8.SharedReferenceCount.ReferenceController._0_4_ = local_d8.Flags;
      local_a8.TextData.Reference = local_b8.TextData.Reference;
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                  (local_b8.TextData.Reference,local_res18);
      }
      local_a8.Flags = local_b8.Flags;
      pFVar3 = FMediaIOMode::GetModeName(&(param_1->MediaConfiguration).MediaMode,&local_88);
      local_f8.Object = (FCulture *)0x0;
      local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar4 = FText::AsNumber(&local_78,
                               (param_1->MediaConfiguration).MediaConnection.PortIdentifier,
                               (FNumberFormattingOptions *)0x0,&local_f8);
      pFVar5 = GetTransportName(&local_68,
                                (param_1->MediaConfiguration).MediaConnection.TransportType,
                                (param_1->MediaConfiguration).MediaConnection.QuadTransportType);
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = FText::AsNumber(&local_58,
                               (param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier
                               ,(FNumberFormattingOptions *)0x0,&local_c8);
      pFVar8 = FText::FromName(&local_48,(FName *)&(param_1->MediaConfiguration).MediaConnection);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"MediaIOCoreDeviceProvider",
                          L"FMediaIOOutputConfigurationToText",
                          L"Fill - {0} [device{1}/{2}{3}/{4}]{5}{6}");
      pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar9,Default);
      FText::Format<FText,FText,FText,FText,FText,FText,FText>
                (__return_storage_ptr__,pFVar6,pFVar8,pFVar7,pFVar5,pFVar4,pFVar3,&local_a8,
                 (FText *)&local_e8);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if ((FCulture *)local_d8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_b8.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MediaIOCoreDeviceProvider",L"Invalid",L"<Invalid>");
  return __return_storage_ptr__;
}

