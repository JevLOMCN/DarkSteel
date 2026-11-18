// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetButtonTableID_WrapperImpl @ 14b462250

void __cdecl UDS_CommonRichTextBlock::SetButtonTableID_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ButtonData *pUVar1;
  
  if (*(longlong *)param_2 < 1) {
    pUVar1 = (UDS_ButtonData *)0x0;
    *(undefined8 *)((longlong)param_1 + 0x840) = 0;
  }
  else {
    *(longlong *)((longlong)param_1 + 0x840) = *(longlong *)param_2;
    pUVar1 = LoadButtonDataByTableID(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ButtonData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(UDS_ButtonData **)((longlong)param_1 + 0x8b8) = pUVar1;
  SetStyleByButtonData(param_1);
  return;
}

// SetDSText_WrapperImpl @ 14b462260

void __cdecl UDS_CommonRichTextBlock::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  FText *pFVar2;
  FText FStack_18;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x848),param_2);
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x358);
  pFVar2 = FDS_Text::GetText((FDS_Text *)((longlong)param_1 + 0x848),&FStack_18);
  (*pcVar1)(param_1,pFVar2);
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetStyleTableID_WrapperImpl @ 14b462270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_CommonRichTextBlock::SetStyleTableID_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  long64 lVar2;
  UObject *pUVar3;
  FDS_ResourceStyleTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FSlateFontInfo *pFVar9;
  undefined1 auStackY_268 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FSoftObjectPath FStack_228;
  FSoftObjectPath FStack_208;
  FLinearColor_u_0 FStack_1e8;
  uint uStack_1d8;
  TStringView<wchar_t> TStack_1c8;
  FString FStack_1b8;
  uint uStack_1a8;
  FSlateFontInfo FStack_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar2 = *(long64 *)param_2;
  if (lVar2 < 1) {
    *(undefined8 *)((longlong)param_1 + 0x898) = 0;
    return;
  }
  *(long64 *)((longlong)param_1 + 0x898) = lVar2;
  FStack_228.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_228.AssetPath.PackageName.Number = 0;
  FStack_228.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_228.AssetPath.AssetName.Number = 0;
  FStack_228.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_228.SubPathString.Data.ArrayNum = 0;
  FStack_228.SubPathString.Data.ArrayMax = 0;
  pFVar4 = FDS_ResourceStyleTableRow::Get(lVar2,true);
  if (pFVar4 == (FDS_ResourceStyleTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
    pwVar11 = L"FDS_ResourceStyleTableRow is nullptr StyleID - %ld";
    uVar10 = 0x5f;
  }
  else {
    pFVar6 = FSoftObjectPath::ToString(&pFVar4->Path,(FString *)&FStack_1e8._s_0);
    pFVar6 = FWN_SoftObjectUtils::GetObjectPath(&FStack_1b8,pFVar6,false);
    FStack_208.AssetPath.PackageName.ComparisonIndex.Value = 0;
    FStack_208.AssetPath.PackageName.Number = 0;
    FStack_208.AssetPath.AssetName.ComparisonIndex.Value = 0;
    FStack_208.AssetPath.AssetName.Number = 0;
    FStack_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_208.SubPathString.Data.ArrayNum = 0;
    FStack_208.SubPathString.Data.ArrayMax = 0;
    TStack_1c8.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    TStack_1c8.Size = iVar1 + -1;
    if (iVar1 == 0) {
      TStack_1c8.Size = 0;
    }
    FSoftObjectPath::SetPath(&FStack_208,&TStack_1c8);
    if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
    }
    FStack_228.AssetPath.PackageName = FStack_208.AssetPath.PackageName;
    FStack_228.AssetPath.AssetName = FStack_208.AssetPath.AssetName;
    if (FStack_228.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_228.SubPathString.Data.AllocatorInstance.Data);
    }
    FStack_228.SubPathString.Data.AllocatorInstance.Data =
         FStack_208.SubPathString.Data.AllocatorInstance.Data;
    FStack_228.SubPathString.Data.ArrayNum = FStack_208.SubPathString.Data.ArrayNum;
    FStack_228.SubPathString.Data.ArrayMax = FStack_208.SubPathString.Data.ArrayMax;
    FStack_208.SubPathString.Data.ArrayNum = 0;
    FStack_208.SubPathString.Data.ArrayMax = 0;
    FStack_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((void *)FStack_1e8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)FStack_1e8._0_8_);
    }
    if ((FStack_228.AssetPath.PackageName == (FName)0x0) ||
       ((pUVar7 = (UClass *)FSoftObjectPath::ResolveObject(&FStack_228), pUVar7 == (UClass *)0x0 &&
        (pUVar7 = (UClass *)FSoftObjectPath::TryLoad(&FStack_228,(FUObjectSerializeContext *)0x0),
        pUVar7 == (UClass *)0x0)))) goto LAB_14bcc90d3;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       (((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar8->_padding_ || (pUVar7 == (UClass *)0x0)))) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
      pUVar5 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
      pwVar11 = L"UClass is null StyleID - %ld";
      uVar10 = 0x78;
    }
    else {
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar3 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UObject *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
        pUVar5 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
        pwVar11 = L"DefaultObject is null StyleID - %ld";
        uVar10 = 0x7f;
      }
      else {
        pUVar7 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pFVar9 = FSlateFontInfo::FSlateFontInfo(&FStack_1a0,(FSlateFontInfo *)(pUVar3 + 1));
          URichTextBlock::SetDefaultFont(param_1,pFVar9);
          if (*(char *)((longlong)param_1 + 0x8a0) == '\x01') {
            SetOverrideColor(param_1,(FLinearColor *)((longlong)param_1 + 0x8a4));
          }
          else {
            FStack_1e8._0_8_ = *(undefined8 *)&pUVar3[3].field_0x10;
            FStack_1e8._8_8_ = *(undefined8 *)&pUVar3[3].field_0x18;
            uStack_1a8 = uStack_1a8 & 0xffffff00;
            uStack_1d8 = uStack_1a8;
            URichTextBlock::SetDefaultColorAndOpacity(param_1,(FSlateColor *)&FStack_1e8._s_0);
          }
          FStack_1e8._0_8_ = *(undefined8 *)(pUVar3 + 4);
          FStack_1e8._8_8_ = *(undefined8 *)&pUVar3[4].field_0x8;
          URichTextBlock::SetDefaultShadowOffset(param_1,(TVector2<double> *)&FStack_1e8._s_0);
          FStack_1e8._0_8_ = *(undefined8 *)&pUVar3[4].field_0x10;
          FStack_1e8._8_8_ = *(undefined8 *)&pUVar3[4].field_0x18;
          URichTextBlock::SetDefaultShadowColorAndOpacity(param_1,(FLinearColor *)&FStack_1e8._s_0);
          goto LAB_14bcc90d3;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
        pUVar5 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
        pwVar11 = L"UCommonTextStyle is null  StyleID - %ld";
        uVar10 = 0x86;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,uVar10,pwVar11);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
LAB_14bcc90d3:
  if (FStack_228.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetOverrideColor_WrapperImpl @ 14b462280

void __cdecl UDS_CommonRichTextBlock::SetOverrideColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FLinearColor_u_0 FStack_48;
  uint uStack_38;
  uint uStack_18;
  
  *(undefined1 *)((longlong)param_1 + 0x8a0) = 1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  uStack_18 = uStack_18 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = uVar1;
  uStack_38 = uStack_18;
  FStack_48._0_8_ = *(undefined8 *)param_2;
  FStack_48._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  URichTextBlock::SetDefaultColorAndOpacity(param_1,(FSlateColor *)&FStack_48._s_0);
  return;
}

// StaticClass @ 14b462290

UClass * __cdecl UDS_CommonRichTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonRichTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonRichTextBlock,0x8c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonRichTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonRichTextBlock>,local_res8,
               UCommonRichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton;
}

// UDS_CommonRichTextBlock @ 14b465c30

UDS_CommonRichTextBlock * __thiscall
UDS_CommonRichTextBlock::UDS_CommonRichTextBlock
          (UDS_CommonRichTextBlock *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UCommonRichTextBlock::UCommonRichTextBlock((UCommonRichTextBlock *)this,param_1);
  this->IsButtonText = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  this->ButtonTableID = 0;
  this->StyleTableID = 0;
  this->IsOverrideColor = false;
  FVar1 = FLinearColor::White;
  this->ButtonStateType = Normal;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ButtonDataPtr).field0_0x0.DebugPtr = (UDS_ButtonData *)0x0;
  return this;
}

// UDS_CommonRichTextBlock @ 14b465cf0

UDS_CommonRichTextBlock * __thiscall
UDS_CommonRichTextBlock::UDS_CommonRichTextBlock
          (UDS_CommonRichTextBlock *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UCommonRichTextBlock::UCommonRichTextBlock((UCommonRichTextBlock *)this,param_1);
  this->IsButtonText = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  this->ButtonTableID = 0;
  this->StyleTableID = 0;
  this->IsOverrideColor = false;
  FVar1 = FLinearColor::White;
  this->ButtonStateType = Normal;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ButtonDataPtr).field0_0x0.DebugPtr = (UDS_ButtonData *)0x0;
  return this;
}

// ~UDS_CommonRichTextBlock @ 14b466720

void __thiscall UDS_CommonRichTextBlock::~UDS_CommonRichTextBlock(UDS_CommonRichTextBlock *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar1 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonRichTextBlock::~UCommonRichTextBlock((UCommonRichTextBlock *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467ce0

IClassDescriptor * __thiscall
UDS_CommonRichTextBlock::GetFieldNotificationDescriptor(UDS_CommonRichTextBlock *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonRichTextBlock::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b468620

UClass * __cdecl UDS_CommonRichTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonRichTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonRichTextBlock,0x8c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonRichTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonRichTextBlock>,local_res8,
               UCommonRichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonRichTextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonRichTextBlock @ 14b468d00

void __cdecl UDS_CommonRichTextBlock::StaticRegisterNativesUDS_CommonRichTextBlock(void)

{
  return;
}

// LoadButtonDataByTableID @ 14bca95d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ButtonData * __thiscall
UDS_CommonRichTextBlock::LoadButtonDataByTableID(UDS_CommonRichTextBlock *this)

{
  int iVar1;
  FDS_ResourceStyleTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_ButtonData *pUVar7;
  undefined1 auStackY_1f8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FSoftObjectPath local_1b8;
  FSoftObjectPath local_198;
  TStringView<wchar_t> local_178;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (this->ButtonTableID < 1) {
    return (UDS_ButtonData *)0x0;
  }
  local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1b8.AssetPath.PackageName.Number = 0;
  local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1b8.AssetPath.AssetName.Number = 0;
  local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.SubPathString.Data.ArrayNum = 0;
  local_1b8.SubPathString.Data.ArrayMax = 0;
  pFVar2 = FDS_ResourceStyleTableRow::Get(this->ButtonTableID,true);
  if (pFVar2 == (FDS_ResourceStyleTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CommonRichTextBlock::LoadButtonDataByTableID",0x30,Yes);
      pwVar9 = L"FDS_ResourceStyleTableRow is nullptr DataID - %d";
      uVar8 = 0x106;
      goto LAB_14bca98b5;
    }
  }
  else {
    pFVar4 = FSoftObjectPath::ToString(&pFVar2->Path,&local_158);
    pFVar4 = FWN_SoftObjectUtils::GetObjectPath(&local_168,pFVar4,false);
    local_198.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_198.AssetPath.PackageName.Number = 0;
    local_198.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_198.AssetPath.AssetName.Number = 0;
    local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.SubPathString.Data.ArrayNum = 0;
    local_198.SubPathString.Data.ArrayMax = 0;
    local_178.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar1 = (pFVar4->Data).ArrayNum;
    local_178.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_178.Size = 0;
    }
    FSoftObjectPath::SetPath(&local_198,&local_178);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_1b8.AssetPath.PackageName = local_198.AssetPath.PackageName;
    local_1b8.AssetPath.AssetName = local_198.AssetPath.AssetName;
    if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
    }
    local_1b8.SubPathString.Data.AllocatorInstance.Data =
         local_198.SubPathString.Data.AllocatorInstance.Data;
    local_1b8.SubPathString.Data.ArrayNum = local_198.SubPathString.Data.ArrayNum;
    local_1b8.SubPathString.Data.ArrayMax = local_198.SubPathString.Data.ArrayMax;
    local_198.SubPathString.Data.ArrayNum = 0;
    local_198.SubPathString.Data.ArrayMax = 0;
    local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_1b8.AssetPath.PackageName != (FName)0x0) {
      pUVar5 = (UClass *)FSoftObjectPath::ResolveObject(&local_1b8);
      if ((pUVar5 == (UClass *)0x0) &&
         (pUVar5 = (UClass *)FSoftObjectPath::TryLoad(&local_1b8,(FUObjectSerializeContext *)0x0),
         pUVar5 == (UClass *)0x0)) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_CommonRichTextBlock::LoadButtonDataByTableID",0x30,Yes);
          pwVar9 = L"UObject is nullptr DataID - %d";
          uVar8 = 0x118;
LAB_14bca98b5:
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        pUVar6 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if (((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar6->_padding_)) || (pUVar5 == (UClass *)0x0)) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_CommonRichTextBlock::LoadButtonDataByTableID",0x30,Yes);
            pwVar9 = L"UClass is nullptr DataID - %d";
            uVar8 = 0x120;
            goto LAB_14bca98b5;
          }
        }
        else {
          if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar5);
          }
          pUVar7 = (UDS_ButtonData *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar7 != (UDS_ButtonData *)0x0) {
            pUVar5 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) goto LAB_14bca98e3;
          }
        }
      }
    }
  }
  pUVar7 = (UDS_ButtonData *)0x0;
LAB_14bca98e3:
  if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// SetButtonStateType @ 14bcc52e0

void __thiscall
UDS_CommonRichTextBlock::SetButtonStateType
          (UDS_CommonRichTextBlock *this,EDS_ButtonStateType *param_1)

{
  this->ButtonStateType = *param_1;
  SetStyleByButtonData(this);
  return;
}

// SetButtonTableID @ 14bcc5390

void __thiscall
UDS_CommonRichTextBlock::SetButtonTableID(UDS_CommonRichTextBlock *this,long64 *param_1)

{
  UDS_ButtonData *pUVar1;
  
  if (*param_1 < 1) {
    pUVar1 = (UDS_ButtonData *)0x0;
    this->ButtonTableID = 0;
  }
  else {
    this->ButtonTableID = *param_1;
    pUVar1 = LoadButtonDataByTableID(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ButtonData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  (this->ButtonDataPtr).field0_0x0.DebugPtr = pUVar1;
  SetStyleByButtonData(this);
  return;
}

// SetDSText @ 14bcc5aa0

void __thiscall UDS_CommonRichTextBlock::SetDSText(UDS_CommonRichTextBlock *this,FDS_Text *param_1)

{
  code *pcVar1;
  FText *pFVar2;
  FText local_18;
  
  FDS_Text::operator=(&this->DSText,param_1);
  pcVar1 = *(code **)(this->_padding_ + 0x358);
  pFVar2 = FDS_Text::GetText(&this->DSText,&local_18);
  (*pcVar1)(this,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetOverrideColor @ 14bcc7e80

void __thiscall
UDS_CommonRichTextBlock::SetOverrideColor(UDS_CommonRichTextBlock *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  this->IsOverrideColor = true;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_18 = local_18 & 0xffffff00;
  *(undefined8 *)&(this->OverrideColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->OverrideColor).field0_0x0 + 8) = uVar1;
  local_38 = local_18;
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  URichTextBlock::SetDefaultColorAndOpacity((URichTextBlock *)this,(FSlateColor *)&local_48._s_0);
  return;
}

// SetStyleByButtonData @ 14bcc8ab0

void __thiscall UDS_CommonRichTextBlock::SetStyleByButtonData(UDS_CommonRichTextBlock *this)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  UDS_ButtonData *this_00;
  FSlateFontInfo *pFVar5;
  UClass *pUVar6;
  longlong local_res8;
  FLinearColor_u_0 local_108;
  uint local_f8;
  uint local_d8;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  if (this->IsButtonText == false) {
    return;
  }
  this_00 = (this->ButtonDataPtr).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ButtonData *)0x0) goto LAB_14bcc8b7e;
  pUVar6 = (this->ButtonData).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  pUVar6 = (this->ButtonData).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
LAB_14bcc8b6e:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14bcc8b6e;
    pUVar6 = (this->ButtonData).Class.field0_0x0.DebugPtr;
  }
  this_00 = UClass::GetDefaultObject<UDS_ButtonData>(pUVar6);
  if (this_00 == (UDS_ButtonData *)0x0) {
    return;
  }
LAB_14bcc8b7e:
  UDS_ButtonData::GetTextStyle(this_00,(EDS_ButtonStateType *)&local_res8);
  if (local_res8 != 0) {
    FSlateFontInfo::FSlateFontInfo(&local_c8);
    pFVar5 = FSlateFontInfo::FSlateFontInfo
                       (&local_68,*(UObject **)(local_res8 + 0x28),*(float *)(local_res8 + 0x70),
                        (FName *)(local_res8 + 0x68),(FFontOutlineSettings *)(local_res8 + 0x38));
    FSlateFontInfo::operator=(&local_c8,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
    lVar3 = local_res8;
    local_c8.LetterSpacing = *(int *)(local_res8 + 0x74);
    local_c8.SkewAmount = *(float *)(local_res8 + 0x78);
    local_c8.bForceMonospaced = *(bool *)(local_res8 + 0x7d);
    local_c8.MonospacedWidth = *(float *)(local_res8 + 0x80);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(local_res8 + 0x30) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(local_res8 + 0x30));
    }
    local_c8.FontMaterial.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)(lVar3 + 0x30);
    pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_c8);
    URichTextBlock::SetDefaultFont((URichTextBlock *)this,pFVar5);
    if (this->IsOverrideColor == true) {
      SetOverrideColor(this,&this->OverrideColor);
    }
    else {
      local_d8 = local_d8 & 0xffffff00;
      local_108._0_8_ = *(undefined8 *)(local_res8 + 0x88);
      local_108._8_8_ = *(undefined8 *)(local_res8 + 0x90);
      local_f8 = local_d8;
      URichTextBlock::SetDefaultColorAndOpacity
                ((URichTextBlock *)this,(FSlateColor *)&local_108._s_0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetStyleTableID @ 14bcc8ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonRichTextBlock::SetStyleTableID(UDS_CommonRichTextBlock *this,long64 *param_1)

{
  int iVar1;
  long64 lVar2;
  UObject *pUVar3;
  FDS_ResourceStyleTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FSlateFontInfo *pFVar9;
  undefined1 auStackY_268 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FSoftObjectPath local_228;
  FSoftObjectPath local_208;
  FLinearColor_u_0 local_1e8;
  uint local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  uint local_1a8;
  FSlateFontInfo local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar2 = *param_1;
  if (lVar2 < 1) {
    this->StyleTableID = 0;
    return;
  }
  this->StyleTableID = lVar2;
  local_228.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_228.AssetPath.PackageName.Number = 0;
  local_228.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_228.AssetPath.AssetName.Number = 0;
  local_228.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.SubPathString.Data.ArrayNum = 0;
  local_228.SubPathString.Data.ArrayMax = 0;
  pFVar4 = FDS_ResourceStyleTableRow::Get(lVar2,true);
  if (pFVar4 == (FDS_ResourceStyleTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
    pwVar11 = L"FDS_ResourceStyleTableRow is nullptr StyleID - %ld";
    uVar10 = 0x5f;
  }
  else {
    pFVar6 = FSoftObjectPath::ToString(&pFVar4->Path,(FString *)&local_1e8._s_0);
    pFVar6 = FWN_SoftObjectUtils::GetObjectPath(&local_1b8,pFVar6,false);
    local_208.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_208.AssetPath.PackageName.Number = 0;
    local_208.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_208.AssetPath.AssetName.Number = 0;
    local_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.SubPathString.Data.ArrayNum = 0;
    local_208.SubPathString.Data.ArrayMax = 0;
    local_1c8.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    local_1c8.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_1c8.Size = 0;
    }
    FSoftObjectPath::SetPath(&local_208,&local_1c8);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    local_228.AssetPath.PackageName = local_208.AssetPath.PackageName;
    local_228.AssetPath.AssetName = local_208.AssetPath.AssetName;
    if (local_228.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.SubPathString.Data.AllocatorInstance.Data);
    }
    local_228.SubPathString.Data.AllocatorInstance.Data =
         local_208.SubPathString.Data.AllocatorInstance.Data;
    local_228.SubPathString.Data.ArrayNum = local_208.SubPathString.Data.ArrayNum;
    local_228.SubPathString.Data.ArrayMax = local_208.SubPathString.Data.ArrayMax;
    local_208.SubPathString.Data.ArrayNum = 0;
    local_208.SubPathString.Data.ArrayMax = 0;
    local_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((void *)local_1e8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    if ((local_228.AssetPath.PackageName == (FName)0x0) ||
       ((pUVar7 = (UClass *)FSoftObjectPath::ResolveObject(&local_228), pUVar7 == (UClass *)0x0 &&
        (pUVar7 = (UClass *)FSoftObjectPath::TryLoad(&local_228,(FUObjectSerializeContext *)0x0),
        pUVar7 == (UClass *)0x0)))) goto LAB_14bcc90d3;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       (((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar8->_padding_ || (pUVar7 == (UClass *)0x0)))) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
      pwVar11 = L"UClass is null StyleID - %ld";
      uVar10 = 0x78;
    }
    else {
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar3 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UObject *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
        pwVar11 = L"DefaultObject is null StyleID - %ld";
        uVar10 = 0x7f;
      }
      else {
        pUVar7 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pFVar9 = FSlateFontInfo::FSlateFontInfo(&local_1a0,(FSlateFontInfo *)(pUVar3 + 1));
          URichTextBlock::SetDefaultFont((URichTextBlock *)this,pFVar9);
          if (this->IsOverrideColor == true) {
            SetOverrideColor(this,&this->OverrideColor);
          }
          else {
            local_1e8._0_8_ = *(undefined8 *)&pUVar3[3].field_0x10;
            local_1e8._8_8_ = *(undefined8 *)&pUVar3[3].field_0x18;
            local_1a8 = local_1a8 & 0xffffff00;
            local_1d8 = local_1a8;
            URichTextBlock::SetDefaultColorAndOpacity
                      ((URichTextBlock *)this,(FSlateColor *)&local_1e8._s_0);
          }
          local_1e8._0_8_ = *(undefined8 *)(pUVar3 + 4);
          local_1e8._8_8_ = *(undefined8 *)&pUVar3[4].field_0x8;
          URichTextBlock::SetDefaultShadowOffset
                    ((URichTextBlock *)this,(TVector2<double> *)&local_1e8._s_0);
          local_1e8._0_8_ = *(undefined8 *)&pUVar3[4].field_0x10;
          local_1e8._8_8_ = *(undefined8 *)&pUVar3[4].field_0x18;
          URichTextBlock::SetDefaultShadowColorAndOpacity
                    ((URichTextBlock *)this,(FLinearColor *)&local_1e8._s_0);
          goto LAB_14bcc90d3;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bcc90d3;
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CommonRichTextBlock::SetStyleTableID",0x28,Yes);
        pwVar11 = L"UCommonTextStyle is null  StyleID - %ld";
        uVar10 = 0x86;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar10,pwVar11);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bcc90d3:
  if (local_228.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SynchronizeProperties @ 14bccaa10

void __thiscall UDS_CommonRichTextBlock::SynchronizeProperties(UDS_CommonRichTextBlock *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_ButtonData *pUVar5;
  
  UCommonRichTextBlock::SynchronizeProperties((UCommonRichTextBlock *)this);
  if (this->IsButtonText == false) {
    if (this->StyleTableID < 1) {
      return;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    SetStyleTableID(this,&this->StyleTableID);
    return;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  pUVar2 = (this->ButtonData).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UDS_ButtonData_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((this->ButtonData).Class.field0_0x0.DebugPtr != (UClass *)0x0))
    goto LAB_14bccaabe;
  }
  if (this->ButtonTableID < 1) {
    return;
  }
  this->ButtonTableID = this->ButtonTableID;
  pUVar5 = LoadButtonDataByTableID(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_ButtonData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ButtonDataPtr).field0_0x0.DebugPtr = pUVar5;
  SetStyleByButtonData(this);
LAB_14bccaabe:
  SetStyleByButtonData(this);
  return;
}

