// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 111

// StaticClass @ 147d4bb20

UClass * __cdecl UKismetTextLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetTextLibrary",
               &Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton,
               StaticRegisterNativesUKismetTextLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetTextLibrary>,
               InternalVTableHelperCtorCaller<UKismetTextLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton;
}

// UKismetTextLibrary @ 147d7a6e0

UKismetTextLibrary * __thiscall
UKismetTextLibrary::UKismetTextLibrary(UKismetTextLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetTextLibrary__6B_;
  return this;
}

// UKismetTextLibrary @ 147d7a710

UKismetTextLibrary * __thiscall
UKismetTextLibrary::UKismetTextLibrary(UKismetTextLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetTextLibrary__6B_;
  return this;
}

// ~UKismetTextLibrary @ 147d7bb90

void __thiscall UKismetTextLibrary::~UKismetTextLibrary(UKismetTextLibrary *this)

{
  *(undefined ***)this = &___7UKismetTextLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AsCurrencyBase @ 147d852c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsCurrencyBase(FText *__return_storage_ptr__,int param_1,FString *param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsCurrencyBase(__return_storage_ptr__,(longlong)param_1,param_2,&local_18,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsCurrency_Float @ 147d85300

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsCurrency_Float
          (FText *__return_storage_ptr__,float param_1,TEnumAsByte<ERoundingMode> param_2,
          bool param_3,bool param_4,int param_5,int param_6,int param_7,int param_8,FString *param_9
          )

{
  TSharedPtr<FCulture,1> local_48;
  FNumberFormattingOptions local_38 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(local_38);
  local_38[0].UseGrouping = param_4;
  local_38[0].MinimumIntegralDigits = param_5;
  local_38[0].MaximumIntegralDigits = param_6;
  local_38[0].MinimumFractionalDigits = param_7;
  local_38[0].MaximumFractionalDigits = param_8;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38[0].AlwaysSign = param_3;
  local_38[0].RoundingMode = (uint)param_2.Value;
  FText::AsCurrency(__return_storage_ptr__,param_1,param_9,local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsCurrency_Integer @ 147d853d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsCurrency_Integer
          (FText *__return_storage_ptr__,int param_1,TEnumAsByte<ERoundingMode> param_2,bool param_3
          ,bool param_4,int param_5,int param_6,int param_7,int param_8,FString *param_9)

{
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_28.UseGrouping = param_4;
  local_28.MinimumIntegralDigits = param_5;
  local_28.MaximumIntegralDigits = param_6;
  local_28.MinimumFractionalDigits = param_7;
  local_28.MaximumFractionalDigits = param_8;
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.AlwaysSign = param_3;
  local_28.RoundingMode = (uint)param_2.Value;
  FText::AsCurrency(__return_storage_ptr__,param_1,param_9,&local_28,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsDateTime_DateTime @ 147d854a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsDateTime_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,
          TEnumAsByte<EDateTimeStyle::Type> param_2,TEnumAsByte<EDateTimeStyle::Type> param_3)

{
  FString *pFVar1;
  TSharedPtr<FCulture,1> local_28;
  FString local_18;
  
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::GetInvariantTimeZone(&local_18);
  FText::AsDateTime(__return_storage_ptr__,param_1,(uint)param_2.Value,(uint)param_3.Value,pFVar1,
                    &local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsDate_DateTime @ 147d85530

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsDate_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,
          TEnumAsByte<EDateTimeStyle::Type> param_2)

{
  FString *pFVar1;
  TSharedPtr<FCulture,1> local_28;
  FString local_18;
  
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::GetInvariantTimeZone(&local_18);
  FText::AsDate(__return_storage_ptr__,param_1,(uint)param_2.Value,pFVar1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsMemory @ 147d85730

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsMemory
          (FText *__return_storage_ptr__,long64 param_1,TEnumAsByte<EMemoryUnitStandard> param_2,
          bool param_3,int param_4,int param_5,int param_6,int param_7)

{
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_28.MinimumIntegralDigits = param_4;
  local_28.MaximumIntegralDigits = param_5;
  local_28.MinimumFractionalDigits = param_6;
  if (param_1 < 0) {
    param_1 = 0;
  }
  local_28.MaximumFractionalDigits = param_7;
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.UseGrouping = param_3;
  FText::AsMemory(__return_storage_ptr__,param_1,&local_28,&local_38,(uint)param_2.Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsPercent_Float @ 147d857f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsPercent_Float
          (FText *__return_storage_ptr__,float param_1,TEnumAsByte<ERoundingMode> param_2,
          bool param_3,bool param_4,int param_5,int param_6,int param_7,int param_8)

{
  TSharedPtr<FCulture,1> local_48;
  FNumberFormattingOptions local_38 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(local_38);
  local_38[0].UseGrouping = param_4;
  local_38[0].MinimumIntegralDigits = param_5;
  local_38[0].MaximumIntegralDigits = param_6;
  local_38[0].MinimumFractionalDigits = param_7;
  local_38[0].MaximumFractionalDigits = param_8;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38[0].AlwaysSign = param_3;
  local_38[0].RoundingMode = (uint)param_2.Value;
  FText::AsPercent(__return_storage_ptr__,param_1,local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTimeZoneDateTime_DateTime @ 147d858b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsTimeZoneDateTime_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,FString *param_2,
          TEnumAsByte<EDateTimeStyle::Type> param_3,TEnumAsByte<EDateTimeStyle::Type> param_4)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsDateTime(__return_storage_ptr__,param_1,(uint)param_3.Value,(uint)param_4.Value,param_2,
                    &local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTimeZoneDate_DateTime @ 147d85900

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsTimeZoneDate_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,FString *param_2,
          TEnumAsByte<EDateTimeStyle::Type> param_3)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsDate(__return_storage_ptr__,param_1,(uint)param_3.Value,param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTimeZoneTime_DateTime @ 147d85950

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsTimeZoneTime_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,FString *param_2,
          TEnumAsByte<EDateTimeStyle::Type> param_3)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsTime(__return_storage_ptr__,param_1,(uint)param_3.Value,param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTime_DateTime @ 147d859a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsTime_DateTime
          (FText *__return_storage_ptr__,FDateTime *param_1,
          TEnumAsByte<EDateTimeStyle::Type> param_2)

{
  FString *pFVar1;
  TSharedPtr<FCulture,1> local_28;
  FString local_18;
  
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::GetInvariantTimeZone(&local_18);
  FText::AsTime(__return_storage_ptr__,param_1,(uint)param_2.Value,pFVar1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTimespan_Timespan @ 147d85a20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::AsTimespan_Timespan(FText *__return_storage_ptr__,FTimespan *param_1)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsTimespan(__return_storage_ptr__,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_BoolToText @ 147d904d0

FText * __cdecl UKismetTextLibrary::Conv_BoolToText(FText *__return_storage_ptr__,bool param_1)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_28;
  FText local_18;
  
  pwVar3 = L"true";
  pwVar2 = L"True";
  pFVar1 = &local_18;
  if (!param_1) {
    pwVar3 = L"false";
    pwVar2 = L"False";
    pFVar1 = &local_28;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(pFVar1,L"Kismet",pwVar2,pwVar3);
  FText::FText(__return_storage_ptr__,pFVar1);
  if (((!param_1 + 1U & 2) != 0) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((param_1) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Conv_ByteToText @ 147d90800

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl UKismetTextLibrary::Conv_ByteToText(FText *__return_storage_ptr__,uchar param_1)

{
  FNumberFormattingOptions *pFVar1;
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
  FText::AsNumber(__return_storage_ptr__,param_1,pFVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_ColorToText @ 147d90960

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_ColorToText(FText *__return_storage_ptr__,FLinearColor *param_1)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FFormatArgumentValue local_28;
  
  local_28.field1_0x8.FloatValue = (param_1->field0_0x0)._s_0.R;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_28.Type = Float;
  ::FString::FString((FString *)&local_38,L"R");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8.FloatValue = (param_1->field0_0x0)._s_0.G;
  local_28.Type = Float;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"G");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8.FloatValue = (param_1->field0_0x0)._s_0.B;
  local_28.Type = Float;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"B");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8.FloatValue = (param_1->field0_0x0)._s_0.A;
  local_28.Type = Float;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"A");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"Core",L"LinearColor",L"R={R} G={G} B={B} A={A}");
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar1,Default);
  FText::Format(__return_storage_ptr__,pFVar2,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_DoubleToText @ 147d90c70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_DoubleToText
          (FText *__return_storage_ptr__,double param_1,TEnumAsByte<ERoundingMode> param_2,
          bool param_3,bool param_4,int param_5,int param_6,int param_7,int param_8)

{
  TSharedPtr<FCulture,1> local_48;
  FNumberFormattingOptions local_38 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(local_38);
  local_38[0].UseGrouping = param_4;
  local_38[0].MinimumIntegralDigits = param_5;
  local_38[0].MaximumIntegralDigits = param_6;
  local_38[0].MinimumFractionalDigits = param_7;
  local_38[0].MaximumFractionalDigits = param_8;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38[0].AlwaysSign = param_3;
  local_38[0].RoundingMode = (uint)param_2.Value;
  FText::AsNumber(__return_storage_ptr__,param_1,local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_Int64ToText @ 147d90dd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_Int64ToText
          (FText *__return_storage_ptr__,long64 param_1,bool param_2,bool param_3,int param_4,
          int param_5)

{
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_28.MinimumIntegralDigits = param_4;
  local_28.MaximumIntegralDigits = param_5;
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.AlwaysSign = param_2;
  local_28.UseGrouping = param_3;
  FText::AsNumber(__return_storage_ptr__,param_1,&local_28,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_IntToText @ 147d90ed0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_IntToText
          (FText *__return_storage_ptr__,int param_1,bool param_2,bool param_3,int param_4,
          int param_5)

{
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_28.MinimumIntegralDigits = param_4;
  local_28.MaximumIntegralDigits = param_5;
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.AlwaysSign = param_2;
  local_28.UseGrouping = param_3;
  FText::AsNumber(__return_storage_ptr__,param_1,&local_28,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_NameToText @ 147d911a0

FText * __cdecl UKismetTextLibrary::Conv_NameToText(FText *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  FText::AsCultureInvariant(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_NumericPropertyToText @ 147d911f0

FText * __cdecl
UKismetTextLibrary::Conv_NumericPropertyToText(FText *__return_storage_ptr__,int *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
                     ,0x203,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// Conv_ObjectToText @ 147d91410

FText * __cdecl
UKismetTextLibrary::Conv_ObjectToText(FText *__return_storage_ptr__,UObject *param_1)

{
  FText *pFVar1;
  ITextData *pIVar2;
  FCoreTexts *pFVar3;
  FName local_res10 [3];
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = FCoreTexts::Get();
    pFVar1 = pFVar3->None;
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar1->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    __return_storage_ptr__->Flags = pFVar1->Flags;
  }
  else {
    local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10[0].Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    FText::AsCultureInvariant(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Conv_RotatorToText @ 147d91660

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_RotatorToText(FText *__return_storage_ptr__,TRotator<double> *param_1)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FFormatArgumentValue local_28;
  
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)param_1->Pitch;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_28.Type = Double;
  ::FString::FString((FString *)&local_38,L"P");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)param_1->Yaw;
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Y");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)param_1->Roll;
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"R");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Core",L"Rotator",L"P={P} Y={Y} R={R}");
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar1,Default);
  FText::Format(__return_storage_ptr__,pFVar2,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_StringToText @ 147d91bf0

FText * __cdecl
UKismetTextLibrary::Conv_StringToText(FText *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  FText::AsCultureInvariant(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// Conv_TextToString @ 147d91e80

FString * __cdecl
UKismetTextLibrary::Conv_TextToString(FString *__return_storage_ptr__,FText *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// Conv_TransformToText @ 147d92070

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_TransformToText(FText *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  FFormatArgumentValue local_1a0;
  FFormatArgumentValue local_180;
  FFormatArgumentValue local_160;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  TVector<double>_u_0 local_f8;
  TRotator<double> local_d8;
  TRotator<double> local_b8;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78;
  double local_58;
  double dStack_50;
  double local_48;
  FTextFormat local_40 [3];
  
  local_78.X = (param_1->Rotation).XY.m128d_f64[0];
  local_78.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_78.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_78.W = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = (param_1->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  local_58 = dVar3;
  dStack_50 = dVar4;
  local_48 = dVar1;
  UE::Math::TQuat<double>::Rotator(&local_78,&local_d8);
  local_1b8 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_1b0 = (param_1->Scale3D).XY.m128d_f64[1];
  local_1a8 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Pairs.ArrayNum = 0;
  local_1f8.Pairs.ArrayMax = 0;
  local_f8._s_0.X = dVar3;
  local_f8._s_0.Y = dVar4;
  local_f8._s_0.Z = dVar1;
  pFVar6 = Conv_VectorToText(&local_140,(TVector<double> *)&local_f8._s_0);
  local_1a0.Type = Text;
  FText::FText((FText *)&local_1a0.TextValue,pFVar6);
  if (local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_1e8,L"T");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1e8,&local_1a0);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_140.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
  }
  local_b8.Pitch = local_d8.Pitch;
  local_b8.Yaw = local_d8.Yaw;
  local_b8.Roll = local_d8.Roll;
  pFVar6 = Conv_RotatorToText(&local_130,&local_b8);
  local_180.Type = Text;
  FText::FText((FText *)&local_180.TextValue,pFVar6);
  if (local_180.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_1d8,L"R");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1d8,&local_180);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_180.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_180.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
  }
  local_98._s_0.X = local_1b8;
  local_98._s_0.Y = dStack_1b0;
  local_98._s_0.Z = local_1a8;
  pFVar6 = Conv_VectorToText(&local_120,(TVector<double> *)&local_98._s_0);
  local_160.Type = Text;
  FText::FText((FText *)&local_160.TextValue,pFVar6);
  if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_1c8,L"S");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1c8,&local_160);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_110,L"Core",L"Transform",L"Translation: {T} Rotation: {R} Scale: {S}");
  pFVar7 = FTextFormat::FTextFormat(local_40,pFVar6,Default);
  FText::Format(__return_storage_ptr__,pFVar7,&local_1f8);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data,
             local_1f8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1f8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_Vector2dToText @ 147d923e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_Vector2dToText(FText *__return_storage_ptr__,TVector2<double> *param_1)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FFormatArgumentValue local_28;
  
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(param_1->field0_0x0)._s_0.X;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_28.Type = Double;
  ::FString::FString((FString *)&local_38,L"X");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(param_1->field0_0x0)._s_0.Y;
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Y");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Core",L"Vector2",L"X={X} Y={Y}");
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar1,Default);
  FText::Format(__return_storage_ptr__,pFVar2,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_VectorToText @ 147d925e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Conv_VectorToText(FText *__return_storage_ptr__,TVector<double> *param_1)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FFormatArgumentValue local_28;
  
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(param_1->field0_0x0)._s_0.X;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_28.Type = Double;
  ::FString::FString((FString *)&local_38,L"X");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(param_1->field0_0x0)._s_0.Y;
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Y");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(param_1->field0_0x0)._s_0.Z;
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Z");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_48,(FString *)&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Core",L"Vector3",L"X={X} Y={Y} Z={Z}");
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar1,Default);
  FText::Format(__return_storage_ptr__,pFVar2,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EditTextPropertySourceString @ 147d99360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UKismetTextLibrary::EditTextPropertySourceString
          (UObject *param_1,FName param_2,FString *param_3,bool param_4)

{
  bool bVar1;
  FText *pFVar2;
  FProperty *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FName local_res10;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_res10 = param_2;
  if (param_1 == (UObject *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"Kismet",L"EditTextPropertySourceString.Warning.NullTextOwner",
                        L"The given TextOwner was null!");
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1a1,pFVar2);
    local_38.TextData.Reference = local_48.TextData.Reference;
  }
  else {
    pFVar3 = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,param_2);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
      bVar1 = Generic_EditTextPropertySourceString(param_1,(FTextProperty *)pFVar3,param_3,param_4);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"Kismet",L"EditTextPropertySourceString.Warning.NullTextProperty"
                        ,L"The given PropertyName ({0}) did not resolve to a TextProperty!");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    pFVar2 = FText::Format<FText>(&local_48,pFVar5,pFVar2);
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1a8,pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return false;
}

// EditTextSourceString @ 147d994b0

bool __cdecl
UKismetTextLibrary::EditTextSourceString
          (UObject *param_1,FText *param_2,FString *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
                     ,0x173,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// EqualEqual_IgnoreCase_TextText @ 147d99de0

bool __cdecl UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(FText *param_1,FText *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  FText::Rebuild(param_2);
  pFVar2 = (FString *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
  FText::Rebuild(param_1);
  pFVar3 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  bVar1 = FTextComparison::EqualToCaseIgnored(pFVar3,pFVar2);
  return bVar1;
}

// EqualEqual_TextText @ 147d99f90

bool __cdecl UKismetTextLibrary::EqualEqual_TextText(FText *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = FText::EqualTo(param_1,param_2,Default);
  return bVar1;
}

// FindTextInLocalizationTable @ 147d9d420

bool __cdecl
UKismetTextLibrary::FindTextInLocalizationTable
          (FString *param_1,FString *param_2,FText *param_3,FString *param_4)

{
  int iVar1;
  bool bVar2;
  FTextKey local_res20 [2];
  FTextKey local_18 [4];
  
  iVar1 = (param_4->Data).ArrayNum;
  FTextKey::FTextKey(local_res20,param_2);
  FTextKey::FTextKey(local_18,param_1);
  if (iVar1 < 2) {
    param_4 = (FString *)0x0;
  }
  bVar2 = FText::FindTextInLiveTable_Advanced(local_18,local_res20,param_3,param_4);
  return bVar2;
}

// Format @ 147d9ec50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UKismetTextLibrary::Format
          (FText *__return_storage_ptr__,FText *param_1,
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FTextFormat local_18;
  
  FTextFormat::FTextFormat(&local_18,param_1,Default);
  FTextFormatter::Format(__return_storage_ptr__,&local_18,param_2,false,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.TextFormatData.SharedReferenceCount.ReferenceController);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FFormatArgumentData,int>
            ((FFormatArgumentData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// Generic_EditTextPropertySourceString @ 147da2350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UKismetTextLibrary::Generic_EditTextPropertySourceString
          (UObject *param_1,FTextProperty *param_2,FString *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  EPropertyAccessResultFlags EVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  code *local_118;
  UObject **local_110;
  UObject *local_108;
  FTextProperty *local_100;
  undefined1 local_f8;
  FText local_f0;
  FText local_e0;
  FString local_d0;
  FString local_c0;
  FText local_b0;
  FText local_a0;
  FString local_90;
  FString local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  FText local_40;
  FText local_30;
  FTextFormat local_20;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
                         ,0x1b1,L"TextOwner is null!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (FTextProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
                         ,0x1b2,L"TextProperty is null!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)(**(longlong **)&param_1->field_0x10 + 0x3e0))
                    (*(longlong **)&param_1->field_0x10,param_2);
  if (cVar4 == '\0') {
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_c0,(UObject *)0x0)
    ;
    pFVar7 = FText::AsCultureInvariant(&local_70,pFVar6);
    pFVar6 = FField::GetPathName((FField *)param_2,&local_d0,(UObject *)0x0);
    pFVar8 = FText::AsCultureInvariant(&local_60,pFVar6);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_e0,L"Kismet",
                        L"EditTextPropertySourceString.Warning.InvalidTextProperty",
                        L"The resolved TextProperty ({0}) doesn\'t belong to the given TextOwner ({1})!"
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_50,pFVar9,Default);
    pFVar7 = FText::Format<FText,FText>(&local_f0,pFVar10,pFVar8,pFVar7);
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1b6,pFVar7);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    local_80.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      local_80.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar2 = PropertyAccessUtil::IsObjectTemplate(param_1);
    EVar5 = PropertyAccessUtil::CanSetPropertyValue((FProperty *)param_2,0x20010,bVar2);
    if (EVar5 == Success) {
      local_110 = &local_108;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UKismetTextLibrary::Generic_EditTextPropertySourceString'::__l2::<lambda_3>,FString>
                  ::Call;
      local_f8 = 0;
      local_108 = param_1;
      local_100 = param_2;
      bVar2 = TextNamespaceUtil::EditTextProperty
                        (param_1,param_2,SourceString,param_3,
                         (TFunctionRef<FString___cdecl(void)> *)&local_118,false);
      return bVar2;
    }
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_80,(UObject *)0x0)
    ;
    pFVar7 = FText::AsCultureInvariant(&local_40,pFVar6);
    pFVar6 = FField::GetPathName((FField *)param_2,&local_90,(UObject *)0x0);
    pFVar8 = FText::AsCultureInvariant(&local_30,pFVar6);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a0,L"Kismet",
                        L"EditTextPropertySourceString.Warning.InvalidAccessPermissions",
                        L"The resolved TextProperty ({0}) cannot be edited as it is read-only on the given TextOwner ({1})!"
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_20,pFVar9,Default);
    pFVar7 = FText::Format<FText,FText>(&local_b0,pFVar10,pFVar8,pFVar7);
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1d1,pFVar7);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetEmptyText @ 147da5950

FText * __cdecl UKismetTextLibrary::GetEmptyText(FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147da8530

UClass * __cdecl UKismetTextLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetTextLibrary",
               &Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton,
               StaticRegisterNativesUKismetTextLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetTextLibrary>,
               InternalVTableHelperCtorCaller<UKismetTextLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetTextLibrary.InnerSingleton;
}

// GetTextId @ 147da9f60

bool __cdecl UKismetTextLibrary::GetTextId(FText *param_1,FString *param_2,FString *param_3)

{
  ITextData *pIVar1;
  FTextKey local_res20 [2];
  FText local_18;
  
  FTextInspector::GetTextId(&local_18);
  if (((int)local_18.TextData.Reference == -1) && (local_18.TextData.Reference._4_4_ == -1)) {
    pIVar1 = (param_1->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    return false;
  }
  local_res20[0].Index = (int)local_18.TextData.Reference;
  FTextKey::ToString(local_res20,param_2);
  local_res20[0].Index = local_18.TextData.Reference._4_4_;
  FTextKey::ToString(local_res20,param_3);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return true;
}

// GetTextSourceString @ 147daa010

FString * __cdecl
UKismetTextLibrary::GetTextSourceString(FString *__return_storage_ptr__,FText *param_1)

{
  ITextData *pIVar1;
  
  FText::BuildSourceString(param_1,__return_storage_ptr__);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsPolyglotDataValid @ 147dadef0

void __cdecl
UKismetTextLibrary::IsPolyglotDataValid(FPolyglotTextData *param_1,bool *param_2,FText *param_3)

{
  bool bVar1;
  
  bVar1 = FPolyglotTextData::IsValid(param_1,param_3);
  *param_2 = bVar1;
  return;
}

// MakeInvariantText @ 147db4f50

FText * __cdecl
UKismetTextLibrary::MakeInvariantText(FText *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  FText::AsCultureInvariant(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// NotEqual_IgnoreCase_TextText @ 147db8340

bool __cdecl UKismetTextLibrary::NotEqual_IgnoreCase_TextText(FText *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = FText::EqualToCaseIgnored(param_1,param_2);
  return !bVar1;
}

// NotEqual_TextText @ 147db8450

bool __cdecl UKismetTextLibrary::NotEqual_TextText(FText *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = FText::EqualTo(param_1,param_2,Default);
  return !bVar1;
}

// PolyglotDataToText @ 147db8e80

FText * __cdecl
UKismetTextLibrary::PolyglotDataToText(FText *__return_storage_ptr__,FPolyglotTextData *param_1)

{
  FPolyglotTextData::GetText(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUKismetTextLibrary @ 147dc4350

void __cdecl UKismetTextLibrary::StaticRegisterNativesUKismetTextLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x34;
  local_18.DataPtr = Z_Construct_UClass_UKismetTextLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StringTableIdAndKeyFromText @ 147dc43b0

bool __cdecl
UKismetTextLibrary::StringTableIdAndKeyFromText(FText *param_1,FName *param_2,FString *param_3)

{
  ITextData *pIVar1;
  bool bVar2;
  
  bVar2 = FTextInspector::GetTableIdAndKey(param_1,param_2,param_3);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return bVar2;
}

// TextFromStringTable @ 147dc5010

FText * __cdecl
UKismetTextLibrary::TextFromStringTable
          (FText *__return_storage_ptr__,FName param_1,FString *param_2)

{
  FTextKey local_res8 [2];
  
  FTextKey::FTextKey(local_res8,param_2);
  FText::FromStringTable(__return_storage_ptr__,param_1,local_res8,FindOrLoad);
  return __return_storage_ptr__;
}

// TextIsCultureInvariant @ 147dc5060

bool __cdecl UKismetTextLibrary::TextIsCultureInvariant(FText *param_1)

{
  return (bool)((byte)(param_1->Flags >> 1) & 1);
}

// TextIsEmpty @ 147dc5070

bool __cdecl UKismetTextLibrary::TextIsEmpty(FText *param_1)

{
  longlong lVar1;
  
  FText::Rebuild(param_1);
  lVar1 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  return *(int *)(lVar1 + 8) < 2;
}

// TextIsFromStringTable @ 147dc5080

bool __cdecl UKismetTextLibrary::TextIsFromStringTable(FText *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  return cVar1 == '\v';
}

// TextIsTransient @ 147dc5090

bool __cdecl UKismetTextLibrary::TextIsTransient(FText *param_1)

{
  return (bool)((byte)param_1->Flags & 1);
}

// TextToLower @ 147dc50a0

FText * __cdecl UKismetTextLibrary::TextToLower(FText *__return_storage_ptr__,FText *param_1)

{
  FText::ToLower(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TextToUpper @ 147dc50d0

FText * __cdecl UKismetTextLibrary::TextToUpper(FText *__return_storage_ptr__,FText *param_1)

{
  FText::ToUpper(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TextTrimPreceding @ 147dc5100

FText * __cdecl UKismetTextLibrary::TextTrimPreceding(FText *__return_storage_ptr__,FText *param_1)

{
  FText::TrimPreceding(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TextTrimPrecedingAndTrailing @ 147dc5120

FText * __cdecl
UKismetTextLibrary::TextTrimPrecedingAndTrailing(FText *__return_storage_ptr__,FText *param_1)

{
  FText::TrimPrecedingAndTrailing(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TextTrimTrailing @ 147dc5140

FText * __cdecl UKismetTextLibrary::TextTrimTrailing(FText *__return_storage_ptr__,FText *param_1)

{
  FText::TrimTrailing(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// execAsCurrencyBase @ 147dcdd80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execAsCurrencyBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_38;
  TSharedPtr<FCulture,1> local_28;
  FText local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsCurrencyBase(&local_18,(longlong)local_res10[0],&local_38,&local_28,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsCurrency_Float @ 147dcdeb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsCurrency_Float(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  byte local_res10 [8];
  FText *local_res18;
  int local_res20 [2];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  float local_94;
  FString local_90;
  FNumberFormattingOptions local_80;
  TSharedPtr<FCulture,1> local_68;
  FText local_58 [2];
  
  local_94 = 0.0;
  local_res18 = param_3;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_a8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  bVar9 = local_a8 != 0;
  local_98 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_9c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c);
  }
  local_a0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  fVar7 = local_94;
  iVar6 = local_98;
  iVar5 = local_9c;
  iVar4 = local_a0;
  iVar3 = local_a4;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_80);
  local_80.RoundingMode = (ERoundingMode)bVar2;
  local_80.MinimumIntegralDigits = iVar6;
  local_80.MaximumIntegralDigits = iVar5;
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_80.MinimumFractionalDigits = iVar4;
  local_80.MaximumFractionalDigits = iVar3;
  local_80.AlwaysSign = bVar8;
  local_80.UseGrouping = bVar9;
  FText::AsCurrency(local_58,fVar7,&local_90,&local_80,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FText::operator=(local_res18,local_58);
  if (local_58[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsCurrency_Integer @ 147dce1e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsCurrency_Integer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  byte local_res10 [8];
  FText *local_res18;
  undefined1 local_res20;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90 [2];
  FString local_88;
  FNumberFormattingOptions local_78;
  TSharedPtr<FCulture,1> local_60;
  FText local_50;
  
  local_90[0] = 0;
  local_res18 = param_3;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20 = local_a8 != 0;
  local_a4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  bVar8 = local_a4 != 0;
  local_94 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  local_98 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_9c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c);
  }
  local_a0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  iVar7 = local_90[0];
  iVar6 = local_94;
  iVar5 = local_98;
  iVar4 = local_9c;
  iVar3 = local_a0;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_78);
  local_78.AlwaysSign = (bool)local_res20;
  local_78.RoundingMode = (ERoundingMode)bVar2;
  local_78.MinimumIntegralDigits = iVar6;
  local_78.MaximumIntegralDigits = iVar5;
  local_78.MinimumFractionalDigits = iVar4;
  local_78.MaximumFractionalDigits = iVar3;
  local_60.Object = (FCulture *)0x0;
  local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78.UseGrouping = bVar8;
  FText::AsCurrency(&local_50,iVar7,&local_88,&local_78,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  FText::operator=(local_res18,&local_50);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsDateTime_DateTime @ 147dce500

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsDateTime_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  byte bVar3;
  FString *pFVar4;
  FDateTime *pFVar5;
  byte local_res10 [16];
  byte local_res20 [8];
  FDateTime local_58;
  TSharedPtr<FCulture,1> local_50;
  FText local_40;
  FString local_30;
  
  local_58.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  pFVar5 = &local_58;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar5 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res20[0];
  bVar2 = local_res10[0];
  local_50.Object = (FCulture *)0x0;
  local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FText::GetInvariantTimeZone(&local_30);
  FText::AsDateTime(&local_40,pFVar5,(uint)bVar3,(uint)bVar2,pFVar4,&local_50);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_40);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return;
}

// execAsDate_DateTime @ 147dce6a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execAsDate_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  FString *pFVar3;
  FDateTime *pFVar4;
  byte local_res10 [16];
  FDateTime local_res20;
  TSharedPtr<FCulture,1> local_48;
  FText local_38;
  FString local_28;
  
  local_res20.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  pFVar4 = &local_res20;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar4 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FText::GetInvariantTimeZone(&local_28);
  FText::AsDate(&local_38,pFVar4,(uint)bVar2,pFVar3,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execAsMemory @ 147dce7f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execAsMemory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  bool bVar8;
  byte local_res10 [8];
  FText *local_res18;
  int local_res20 [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  ulong64 local_78;
  FNumberFormattingOptions local_70;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  
  local_78 = 0;
  local_res18 = param_3;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_7c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c);
  }
  local_80 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_84 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  uVar7 = local_78;
  iVar6 = local_7c;
  iVar5 = local_80;
  iVar4 = local_84;
  iVar3 = local_88;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_70);
  local_70.MinimumIntegralDigits = iVar6;
  local_70.MaximumIntegralDigits = iVar5;
  local_70.MinimumFractionalDigits = iVar4;
  if ((longlong)uVar7 < 0) {
    uVar7 = 0;
  }
  local_70.MaximumFractionalDigits = iVar3;
  local_58.Object = (FCulture *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_70.UseGrouping = bVar8;
  FText::AsMemory(&local_48,uVar7,&local_70,&local_58,(uint)bVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  FText::operator=(local_res18,&local_48);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// execAsPercent_Float @ 147dcea80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execAsPercent_Float(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  byte local_res10 [8];
  FText *local_res18;
  int local_res20 [2];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  FNumberFormattingOptions local_80;
  TSharedPtr<FCulture,1> local_68;
  FText local_58 [2];
  
  local_84 = 0.0;
  local_res18 = param_3;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_98 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  bVar9 = local_98 != 0;
  local_88 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_8c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_8c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_8c);
  }
  local_90 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_94 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  fVar7 = local_84;
  iVar6 = local_88;
  iVar5 = local_8c;
  iVar4 = local_90;
  iVar3 = local_94;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_80);
  local_80.RoundingMode = (ERoundingMode)bVar2;
  local_80.MinimumIntegralDigits = iVar6;
  local_80.MaximumIntegralDigits = iVar5;
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_80.MinimumFractionalDigits = iVar4;
  local_80.MaximumFractionalDigits = iVar3;
  local_80.AlwaysSign = bVar8;
  local_80.UseGrouping = bVar9;
  FText::AsPercent(local_58,fVar7,&local_80,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FText::operator=(local_res18,local_58);
  if (local_58[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
  }
  return;
}

// execAsTimeZoneDateTime_DateTime @ 147dced50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsTimeZoneDateTime_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDateTime *pFVar2;
  byte local_res10 [8];
  byte local_res20 [8];
  FDateTime local_58;
  FString local_50;
  TSharedPtr<FCulture,1> local_40;
  FText local_30;
  
  local_58.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  pFVar2 = &local_58;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar2 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40.Object = (FCulture *)0x0;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsDateTime(&local_30,pFVar2,(uint)local_res20[0],(uint)local_res10[0],&local_50,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_30);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsTimeZoneDate_DateTime @ 147dcef10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsTimeZoneDate_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDateTime *pFVar2;
  byte local_res10 [16];
  FDateTime local_res20;
  FString local_48;
  TSharedPtr<FCulture,1> local_38;
  FText local_28;
  
  local_res20.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = &local_res20;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar2 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsDate(&local_28,pFVar2,(uint)local_res10[0],&local_48,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsTimeZoneTime_DateTime @ 147dcf0a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsTimeZoneTime_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDateTime *pFVar2;
  byte local_res10 [16];
  FDateTime local_res20;
  FString local_48;
  TSharedPtr<FCulture,1> local_38;
  FText local_28;
  
  local_res20.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = &local_res20;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar2 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsTime(&local_28,pFVar2,(uint)local_res10[0],&local_48,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsTime_DateTime @ 147dcf230

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execAsTime_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  FString *pFVar3;
  FDateTime *pFVar4;
  byte local_res10 [16];
  FDateTime local_res20;
  TSharedPtr<FCulture,1> local_48;
  FText local_38;
  FString local_28;
  
  local_res20.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  pFVar4 = &local_res20;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar4 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FText::GetInvariantTimeZone(&local_28);
  FText::AsTime(&local_38,pFVar4,(uint)bVar2,pFVar3,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execAsTimespan_Timespan @ 147dcf380

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execAsTimespan_Timespan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTimespan *pFVar2;
  FTimespan local_res10;
  TSharedPtr<FCulture,1> local_28;
  FText local_18;
  
  local_res10.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar2 = &local_res10;
  if ((FTimespan *)param_2->MostRecentPropertyAddress != (FTimespan *)0x0) {
    pFVar2 = (FTimespan *)param_2->MostRecentPropertyAddress;
  }
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::AsTimespan(&local_18,pFVar2,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_BoolToText @ 147de09d0

void __cdecl UKismetTextLibrary::execConv_BoolToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  int local_res10 [2];
  FText local_38;
  FText local_28;
  FText local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"Kismet",L"False",L"false");
    FText::FText(&local_38,pFVar2);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_28,L"Kismet",L"True",L"true");
    FText::FText(&local_38,pFVar2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_ByteToText @ 147de1150

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execConv_ByteToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  FNumberFormattingOptions *pFVar3;
  uchar local_res10 [24];
  TSharedPtr<FCulture,1> local_28;
  FText local_18;
  
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FNumberFormattingOptions::DefaultNoGrouping();
  FText::AsNumber(&local_18,uVar2,pFVar3,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_ColorToText @ 147de1520

void __cdecl
UKismetTextLibrary::execConv_ColorToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._0_8_ = local_38;
  local_28._8_8_ = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_ColorToText(&local_18,(FLinearColor *)&local_28._s_0);
  FText::operator=(param_3,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_DoubleToText @ 147de1a50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execConv_DoubleToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  byte local_res10 [8];
  FText *local_res18;
  int local_res20 [2];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98 [2];
  double local_90;
  FNumberFormattingOptions local_88;
  TSharedPtr<FCulture,1> local_70;
  FText local_60 [2];
  
  local_90 = 0.0;
  local_res18 = param_3;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_a8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  bVar9 = local_a8 != 0;
  local_98[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_9c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c);
  }
  local_a0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  dVar7 = local_90;
  iVar6 = local_98[0];
  iVar5 = local_9c;
  iVar4 = local_a0;
  iVar3 = local_a4;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_88);
  local_88.RoundingMode = (ERoundingMode)bVar2;
  local_88.MinimumIntegralDigits = iVar6;
  local_88.MaximumIntegralDigits = iVar5;
  local_70.Object = (FCulture *)0x0;
  local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_88.MinimumFractionalDigits = iVar4;
  local_88.MaximumFractionalDigits = iVar3;
  local_88.AlwaysSign = bVar8;
  local_88.UseGrouping = bVar9;
  FText::AsNumber(local_60,dVar7,&local_88,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  FText::operator=(local_res18,local_60);
  if (local_60[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
  }
  return;
}

// execConv_Int64ToText @ 147de2360

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execConv_Int64ToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  long64 lVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  int local_78;
  int local_74;
  long64 local_70;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FNumberFormattingOptions local_48;
  
  local_70 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_74 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  local_78 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  lVar4 = local_70;
  iVar3 = local_74;
  iVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
  local_48.MinimumIntegralDigits = iVar3;
  local_48.MaximumIntegralDigits = iVar2;
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.AlwaysSign = bVar5;
  local_48.UseGrouping = bVar6;
  FText::AsNumber(&local_58,lVar4,&local_48,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_58);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_IntToText @ 147de2b30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execConv_IntToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  int local_78;
  int local_74;
  int local_70 [2];
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FNumberFormattingOptions local_48;
  
  local_70[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_74 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  local_78 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  iVar4 = local_70[0];
  iVar3 = local_74;
  iVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
  local_48.MinimumIntegralDigits = iVar3;
  local_48.MaximumIntegralDigits = iVar2;
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.AlwaysSign = bVar5;
  local_48.UseGrouping = bVar6;
  FText::AsNumber(&local_58,iVar4,&local_48,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_58);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_NameToText @ 147de38f0

void __cdecl UKismetTextLibrary::execConv_NameToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FName local_res10;
  FName local_res20;
  FText local_28;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ::FName::ToString(&local_res20,&local_18);
  FText::AsCultureInvariant(&local_28,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_NumericPropertyToText @ 147de39c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execConv_NumericPropertyToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  ulonglong uVar5;
  double dVar6;
  char cVar7;
  FText *pFVar8;
  UEnum *this;
  long64 lVar9;
  int iVar10;
  undefined1 local_res10 [8];
  TSharedPtr<FCulture,1> local_38;
  FText local_28;
  
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = FText::GetEmpty();
  pIVar3 = *(ITextData **)param_3;
  pIVar4 = (pFVar8->TextData).Reference;
  if (pIVar3 != pIVar4) {
    *(ITextData **)param_3 = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)((longlong)param_3 + 8) = pFVar8->Flags;
  if ((pFVar1 == (FProperty *)0x0) || (puVar2 == (uchar *)0x0)) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"Kismet",L"GenericToText.Warning.NullProperty",
                        L"The property is invalid!");
    iVar10 = 0x215;
LAB_147de3be1:
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,iVar10,pFVar8);
  }
  else {
    uVar5 = *(ulonglong *)(pFVar1->_padding_ + 0x18);
    if ((uVar5 >> 0x18 & 1) == 0) {
      if ((uVar5 >> 0x30 & 1) == 0) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_28,L"Kismet",L"GenericToText.Warning.NotSupported",
                            L"The property not supported");
        iVar10 = 0x234;
        goto LAB_147de3be1;
      }
      lVar9 = (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x210))
                        ((longlong *)pFVar1[1]._padding_,puVar2);
      this = (UEnum *)pFVar1[1]._padding_;
    }
    else {
      cVar7 = (**(code **)(pFVar1->_padding_ + 0x1d0))(pFVar1);
      if (cVar7 != '\0') {
        dVar6 = (double)(**(code **)(pFVar1->_padding_ + 0x230))(pFVar1,puVar2);
        local_38.Object = (FCulture *)0x0;
        local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar8 = FText::AsNumber(&local_28,dVar6,(FNumberFormattingOptions *)0x0,&local_38);
LAB_147de3b4b:
        FText::operator=(param_3,pFVar8);
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        return;
      }
      this = (UEnum *)(**(code **)(pFVar1->_padding_ + 0x1e0))(pFVar1);
      if (this == (UEnum *)0x0) {
        cVar7 = (**(code **)(pFVar1->_padding_ + 0x1d8))(pFVar1);
        if (cVar7 == '\0') {
          return;
        }
        lVar9 = (**(code **)(pFVar1->_padding_ + 0x210))(pFVar1,puVar2);
        local_38.Object = (FCulture *)0x0;
        local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar8 = FText::AsNumber(&local_28,lVar9,(FNumberFormattingOptions *)0x0,&local_38);
        goto LAB_147de3b4b;
      }
      lVar9 = (**(code **)(pFVar1->_padding_ + 0x210))(pFVar1,puVar2);
    }
    pFVar8 = UEnum::GetDisplayNameTextByValue(this,&local_28,lVar9);
    FText::operator=(param_3,pFVar8);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_ObjectToText @ 147de3fa0

void __cdecl
UKismetTextLibrary::execConv_ObjectToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FCoreTexts *pFVar3;
  FName local_res10;
  longlong local_res20;
  FText local_28;
  FString local_18;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    pFVar3 = FCoreTexts::Get();
    pFVar2 = pFVar3->None;
    local_28.TextData.Reference = (pFVar2->TextData).Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,&local_res10);
    }
    local_28.Flags = pFVar2->Flags;
  }
  else {
    local_res10 = *(FName *)(local_res20 + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    FText::AsCultureInvariant(&local_28,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_RotatorToText @ 147de4610

void __cdecl
UKismetTextLibrary::execConv_RotatorToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TRotator<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.Pitch = local_48;
  local_28.Yaw = dStack_40;
  local_28.Roll = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_RotatorToText(&local_58,&local_28);
  FText::operator=(param_3,pFVar2);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_StringToText @ 147de5800

void __cdecl
UKismetTextLibrary::execConv_StringToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *local_38;
  undefined8 local_30;
  FText local_28;
  TStringView<wchar_t> local_18;
  
  local_38 = (ITextData *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.TextData.Reference = local_38;
  local_28.Flags = (int)local_30 - 1;
  if ((int)local_30 == 0) {
    local_28.Flags = 0;
  }
  local_18._12_4_ = local_28._12_4_;
  local_18.Size = local_28.Flags;
  local_18.DataPtr = (wchar_t *)local_38;
  FText::AsCultureInvariant(&local_28,&local_18);
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38 != (ITextData *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execConv_TextToString @ 147de5e00

void __cdecl
UKismetTextLibrary::execConv_TextToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  FText *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FText::ToString(this);
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar3->Data).ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_TransformToText @ 147de6360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetTextLibrary::execConv_TransformToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FText *pFVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_a8 [32];
  FText local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Rotation.XY.m128d_f64[1] = (double)fVar5;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar15 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar14 = Conv_TransformToText(&local_88,pTVar15);
  FText::operator=(param_3,pFVar14);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_Vector2dToText @ 147de6780

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execConv_Vector2dToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_78;
  FFormatArgumentValue_u_8 local_68;
  FFormatArgumentValue_u_8 FStack_60;
  FText local_58;
  FText local_48;
  FFormatArgumentValue local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_38.field1_0x8 = local_68;
  local_78.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Pairs.ArrayNum = 0;
  local_78.Pairs.ArrayMax = 0;
  local_38.Type = Double;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_38.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_58,L"X");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_78,(FString *)&local_58,&local_38);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
  }
  if (local_38.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_38.field1_0x8 = FStack_60;
  local_38.Type = Double;
  local_38.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_38.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString((FString *)&local_58,L"Y");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_78,(FString *)&local_58,&local_38);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
  }
  if (local_38.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_58,L"Core",L"Vector2",L"X={X} Y={Y}");
  pFVar3 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar2,Default);
  FText::Format(&local_48,pFVar3,&local_78);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data,
             local_78.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_78.Pairs.AllocatorInstance.Data);
  }
  FText::operator=(param_3,&local_48);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// execConv_VectorToText @ 147de6f90

void __cdecl
UKismetTextLibrary::execConv_VectorToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_VectorToText(&local_58,(TVector<double> *)&local_28._s_0);
  FText::operator=(param_3,pFVar2);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execEditTextPropertySourceString @ 147defae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execEditTextPropertySourceString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UObject *pUVar2;
  FText *pFVar3;
  FProperty *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  bool bVar7;
  int local_res10 [2];
  FName local_res18;
  UObject *local_res20;
  FName local_88;
  FString local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res20;
  bVar7 = local_res10[0] != 0;
  local_88 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObject *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_70,L"Kismet",L"EditTextPropertySourceString.Warning.NullTextOwner",
                        L"The given TextOwner was null!");
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1a1,pFVar3);
    local_60.TextData.Reference = local_70.TextData.Reference;
  }
  else {
    pFVar4 = UStruct::FindPropertyByName(*(UStruct **)&local_res20->field_0x10,local_res18);
    if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
      bVar7 = Generic_EditTextPropertySourceString(pUVar2,(FTextProperty *)pFVar4,&local_80,bVar7);
      goto LAB_147defcfa;
    }
    pFVar3 = FText::FromName(&local_50,&local_88);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"Kismet",L"EditTextPropertySourceString.Warning.NullTextProperty"
                        ,L"The given PropertyName ({0}) did not resolve to a TextProperty!");
    pFVar6 = FTextFormat::FTextFormat(&local_40,pFVar5,Default);
    pFVar3 = FText::Format<FText>(&local_70,pFVar6,pFVar3);
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x1a8,pFVar3);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  bVar7 = false;
LAB_147defcfa:
  *(bool *)param_3 = bVar7;
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// execEditTextSourceString @ 147defd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetTextLibrary::execEditTextSourceString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  FText *pFVar6;
  FProperty *pFVar7;
  FString *pFVar8;
  bool local_res10 [8];
  UObject *local_res18 [2];
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FText::FText(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar7 = param_2->MostRecentProperty;
  pFVar6 = &local_68;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar6 = (FText *)param_2->MostRecentPropertyAddress;
  }
  if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x1e & 1) == 0)) {
    pFVar7 = (FProperty *)0x0;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = false;
  pFVar8 = &local_78;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar8 = (FString *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_res18[0] == (UObject *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"Kismet",L"EditTextSourceString.Warning.NullTextOwner",
                        L"The given TextOwner was null!");
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,0x18a,pFVar6);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else if (pFVar7 == (FProperty *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"Kismet",L"EditTextSourceString.Warning.NullTextProperty",
                        L"The given Text value was not a TextProperty!");
    FRuntimeErrors::LogRuntimeIssue
              (Warning,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetTextLibrary.cpp"
               ,400,pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    bVar5 = Generic_EditTextPropertySourceString
                      (local_res18[0],(FTextProperty *)pFVar7,pFVar8,local_res10[0]);
    pUVar4 = local_res18[0];
    if (bVar5) {
      *(undefined1 *)param_3 = 1;
      if (pFVar7->ArrayDim < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pUVar4 == (UObject *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FText::operator=(pFVar6,(FText *)(&pUVar4->field_0x0 + pFVar7->Offset_Internal));
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// execEqualEqual_IgnoreCase_TextText @ 147df0f40

void __cdecl
UKismetTextLibrary::execEqualEqual_IgnoreCase_TextText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::EqualToCaseIgnored(this,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execEqualEqual_TextText @ 147df23b0

void __cdecl
UKismetTextLibrary::execEqualEqual_TextText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::EqualTo(this,pFVar3,Default);
  *(bool *)param_3 = bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execFindTextInLocalizationTable @ 147df59f0

void __cdecl
UKismetTextLibrary::execFindTextInLocalizationTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  FTextKey local_res10 [2];
  FTextKey local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar4 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = local_58.Data.ArrayNum;
  FTextKey::FTextKey(local_res10,&local_48);
  FTextKey::FTextKey(local_res18,&local_38);
  pFVar5 = &local_58;
  if (iVar2 < 2) {
    pFVar5 = (FString *)0x0;
  }
  bVar3 = FText::FindTextInLiveTable_Advanced(local_res18,local_res10,pFVar4,pFVar5);
  *(bool *)param_3 = bVar3;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execFormat @ 147df62e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UKismetTextLibrary::execFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFormatArgumentData *pFVar2;
  int iVar3;
  undefined1 local_res10 [8];
  TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> local_78;
  FFormatArgumentData *local_68;
  undefined8 local_60;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FText local_28;
  
  FText::FText(&local_58);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (FFormatArgumentData *)0x0;
  local_60 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar2 = local_68;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_60;
  local_78.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(int)local_60,0,&local_78.AllocatorInstance,(int)local_60,&local_78.ArrayMax);
    ConstructItems<FFormatArgumentData,FFormatArgumentData,int>
              (local_78.AllocatorInstance.Data,pFVar2,iVar3);
  }
  local_48.TextData.Reference = local_58.TextData.Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res10);
  }
  local_48.Flags = local_58.Flags;
  FTextFormat::FTextFormat(&local_38,&local_48,Default);
  FTextFormatter::Format(&local_28,&local_38,&local_78,false,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.TextFormatData.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentData,int>
            ((FFormatArgumentData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FFormatArgumentData *)local_78.AllocatorInstance.Data != (FFormatArgumentData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentData,int>(local_68,(int)local_60);
  if (local_68 != (FFormatArgumentData *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execGetEmptyText @ 147dfa010

void __cdecl UKismetTextLibrary::execGetEmptyText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetTextId @ 147dffc20

void __cdecl UKismetTextLibrary::execGetTextId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FString *pFVar3;
  FString *pFVar4;
  FTextKey local_res10 [2];
  FText local_res18;
  FString local_68;
  FString local_58;
  FText local_48;
  ITextData *local_38;
  uint local_30;
  
  FText::FText(&local_48);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar4 = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_38 = local_48.TextData.Reference;
  pFVar3 = &local_68;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res10);
  }
  local_30 = local_48.Flags;
  FTextInspector::GetTextId(&local_res18);
  if (((int)local_res18.TextData.Reference == -1) && (local_res18.TextData.Reference._4_4_ == -1)) {
    if (local_38 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38 + 0x10))();
    }
    uVar2 = 0;
  }
  else {
    local_res10[0].Index = (int)local_res18.TextData.Reference;
    FTextKey::ToString(local_res10,pFVar4);
    local_res10[0].Index = local_res18.TextData.Reference._4_4_;
    FTextKey::ToString(local_res10,pFVar3);
    if (local_38 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38 + 0x10))();
    }
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// execGetTextSourceString @ 147dffe00

void __cdecl
UKismetTextLibrary::execGetTextSourceString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  FString local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_18.Flags = local_28.Flags;
  FText::BuildSourceString(&local_18,&local_38);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execIsPolyglotDataValid @ 147e05960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKismetTextLibrary::execIsPolyglotDataValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FPolyglotTextData *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  FText *pFVar6;
  FPolyglotTextData *this;
  uchar *puVar7;
  undefined1 auStackY_128 [32];
  uchar local_f8 [8];
  FText local_f0;
  undefined1 local_d8 [72];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  bool local_40;
  FText local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_d8._8_8_ = (FScriptContainerElement *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_8_ = (FScriptContainerElement *)0x0;
  local_d8._32_4_ = 0;
  local_d8._36_4_ = 0;
  local_d8._40_8_ = (FScriptContainerElement *)0x0;
  local_d8._48_4_ = 0;
  local_d8._52_4_ = 0;
  local_d8._56_8_ = (FScriptContainerElement *)0x0;
  local_d8._64_4_ = 0;
  local_d8._68_4_ = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = false;
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  pFVar1 = (FPolyglotTextData *)param_2->MostRecentPropertyAddress;
  local_f8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = (FPolyglotTextData *)local_d8;
  if (pFVar1 != (FPolyglotTextData *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  puVar7 = local_f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_f0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  pFVar6 = &local_f0;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar6 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = FPolyglotTextData::IsValid(this,pFVar6);
  *puVar7 = bVar5;
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar3 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar4 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  if ((FScriptContainerElement *)local_d8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._56_8_);
  }
  if ((FScriptContainerElement *)local_d8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._40_8_);
  }
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
  }
  if ((FScriptContainerElement *)local_d8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  return;
}

// execMakeInvariantText @ 147e11c60

void __cdecl
UKismetTextLibrary::execMakeInvariantText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *local_38;
  undefined8 local_30;
  FText local_28;
  TStringView<wchar_t> local_18;
  
  local_38 = (ITextData *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.TextData.Reference = local_38;
  local_28.Flags = (int)local_30 - 1;
  if ((int)local_30 == 0) {
    local_28.Flags = 0;
  }
  local_18._12_4_ = local_28._12_4_;
  local_18.Size = local_28.Flags;
  local_18.DataPtr = (wchar_t *)local_38;
  FText::AsCultureInvariant(&local_28,&local_18);
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38 != (ITextData *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execNotEqual_IgnoreCase_TextText @ 147e1e730

void __cdecl
UKismetTextLibrary::execNotEqual_IgnoreCase_TextText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::EqualToCaseIgnored(this,pFVar3);
  *(bool *)param_3 = !bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execNotEqual_TextText @ 147e1f9f0

void __cdecl
UKismetTextLibrary::execNotEqual_TextText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::EqualTo(this,pFVar3,Default);
  *(bool *)param_3 = !bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execPolyglotDataToText @ 147e21cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKismetTextLibrary::execPolyglotDataToText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  FPolyglotTextData *this;
  undefined1 auStackY_118 [32];
  FText local_e8;
  undefined1 local_d8 [72];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  bool local_40;
  FText local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_d8._8_8_ = (FScriptContainerElement *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_8_ = (FScriptContainerElement *)0x0;
  local_d8._32_4_ = 0;
  local_d8._36_4_ = 0;
  local_d8._40_8_ = (FScriptContainerElement *)0x0;
  local_d8._48_4_ = 0;
  local_d8._52_4_ = 0;
  local_d8._56_8_ = (FScriptContainerElement *)0x0;
  local_d8._64_4_ = 0;
  local_d8._68_4_ = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = false;
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  this = (FPolyglotTextData *)local_d8;
  if ((FPolyglotTextData *)param_2->MostRecentPropertyAddress != (FPolyglotTextData *)0x0) {
    this = (FPolyglotTextData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPolyglotTextData::GetText(this,&local_e8);
  FText::operator=(param_3,&local_e8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar2 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar3 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  if ((FScriptContainerElement *)local_d8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._56_8_);
  }
  if ((FScriptContainerElement *)local_d8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._40_8_);
  }
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
  }
  if ((FScriptContainerElement *)local_d8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  return;
}

// execStringTableIdAndKeyFromText @ 147e37790

void __cdecl
UKismetTextLibrary::execStringTableIdAndKeyFromText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FString *pFVar4;
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_48;
  FText local_38;
  FText local_28;
  
  FText::FText(&local_38);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.TextData.Reference = local_38.TextData.Reference;
  pFVar4 = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res10);
  }
  local_28.Flags = local_38.Flags;
  bVar2 = FTextInspector::GetTableIdAndKey(&local_28,pFVar3,pFVar4);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execTextFromStringTable @ 147e390b0

void __cdecl
UKismetTextLibrary::execTextFromStringTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FTextKey local_res10 [2];
  FName local_res20;
  FString local_28;
  FText local_18;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FTextKey::FTextKey(local_res10,&local_28);
  FText::FromStringTable(&local_18,FVar2,local_res10,FindOrLoad);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execTextIsCultureInvariant @ 147e391d0

void __cdecl
UKismetTextLibrary::execTextIsCultureInvariant(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *this;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::IsCultureInvariant(this);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextIsEmpty @ 147e39280

void __cdecl UKismetTextLibrary::execTextIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *this;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::IsEmpty(this);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextIsFromStringTable @ 147e39330

void __cdecl
UKismetTextLibrary::execTextIsFromStringTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *this;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::IsFromStringTable(this);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextIsTransient @ 147e393e0

void __cdecl UKismetTextLibrary::execTextIsTransient(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *this;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FText::IsTransient(this);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextToLower @ 147e39490

void __cdecl UKismetTextLibrary::execTextToLower(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::ToLower(this,&local_18);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execTextToUpper @ 147e39560

void __cdecl UKismetTextLibrary::execTextToUpper(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *this;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::ToUpper(this,&local_18);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execTextTrimPreceding @ 147e39630

void __cdecl
UKismetTextLibrary::execTextTrimPreceding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::TrimPreceding(&local_18,pFVar2);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execTextTrimPrecedingAndTrailing @ 147e39700

void __cdecl
UKismetTextLibrary::execTextTrimPrecedingAndTrailing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::TrimPrecedingAndTrailing(&local_18,pFVar2);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execTextTrimTrailing @ 147e397d0

void __cdecl
UKismetTextLibrary::execTextTrimTrailing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::TrimTrailing(&local_18,pFVar2);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

