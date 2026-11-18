// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 55

// operator= @ 14b502a70

FDS_Text * __thiscall FDS_Text::operator=(FDS_Text *this,FDS_Text *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &param_1->UniqueString;
  this->StringTableType = param_1->StringTableType;
  pFVar2 = &this->UniqueString;
  this->StringTableID = param_1->StringTableID;
  this->StringEnumTableNameID = param_1->StringEnumTableNameID;
  (this->DateTime).Ticks = (param_1->DateTime).Ticks;
  (this->TimeSpan).Ticks = (param_1->TimeSpan).Ticks;
  this->TimeExpressionType = param_1->TimeExpressionType;
  this->IsExpression = param_1->IsExpression;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UniqueString).Data.ArrayNum = (param_1->UniqueString).Data.ArrayNum;
    (this->UniqueString).Data.ArrayMax = (param_1->UniqueString).Data.ArrayMax;
    (param_1->UniqueString).Data.ArrayNum = 0;
    (param_1->UniqueString).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->FormatArgs;
  pTVar4 = &this->FormatArgs;
  if (pTVar4 != pTVar3) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar4->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FormatArgs).ArrayNum = (param_1->FormatArgs).ArrayNum;
    (this->FormatArgs).ArrayMax = (param_1->FormatArgs).ArrayMax;
    (param_1->FormatArgs).ArrayNum = 0;
    (param_1->FormatArgs).ArrayMax = 0;
  }
  return this;
}

// StaticStruct @ 14b5b88d0

UScriptStruct * __cdecl FDS_Text::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_Text.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_Text.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_Text,(UObject *)pUVar1,L"DS_Text");
  }
  return Z_Registration_Info_UScriptStruct_FDS_Text.OuterSingleton;
}

// operator= @ 14b5be380

FDS_Text * __thiscall FDS_Text::operator=(FDS_Text *this,FDS_Text *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDS_TextFormatArg *pFVar4;
  
  this->StringTableType = param_1->StringTableType;
  this->StringTableID = param_1->StringTableID;
  this->StringEnumTableNameID = param_1->StringEnumTableNameID;
  (this->DateTime).Ticks = (param_1->DateTime).Ticks;
  (this->TimeSpan).Ticks = (param_1->TimeSpan).Ticks;
  this->TimeExpressionType = param_1->TimeExpressionType;
  this->IsExpression = param_1->IsExpression;
  ::FString::operator=(&this->UniqueString,&param_1->UniqueString);
  pTVar1 = &this->FormatArgs;
  if (pTVar1 != &param_1->FormatArgs) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
    iVar3 = (param_1->FormatArgs).ArrayNum;
    piVar2 = &(this->FormatArgs).ArrayMax;
    pFVar4 = (FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data;
    (this->FormatArgs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// FDS_Text @ 14b5e8fd0

FDS_Text * __thiscall FDS_Text::FDS_Text(FDS_Text *this,FDS_Text *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDS_TextFormatArg *pFVar4;
  
  this->StringTableType = param_1->StringTableType;
  this->StringTableID = param_1->StringTableID;
  this->StringEnumTableNameID = param_1->StringEnumTableNameID;
  (this->DateTime).Ticks = (param_1->DateTime).Ticks;
  (this->TimeSpan).Ticks = (param_1->TimeSpan).Ticks;
  this->TimeExpressionType = param_1->TimeExpressionType;
  this->IsExpression = param_1->IsExpression;
  ::FString::FString(&this->UniqueString,&param_1->UniqueString);
  pTVar1 = &this->FormatArgs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->FormatArgs).ArrayMax;
  iVar3 = (param_1->FormatArgs).ArrayNum;
  pFVar4 = (FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data;
  (this->FormatArgs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// FromStringTableFormat<FDS_StringWorldID_const_&> @ 14b7d2360

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<FDS_StringWorldID_const_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FDS_StringWorldID *param_3)

{
  int iVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringWorldID_const_&>
            ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x28),param_3
            );
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<FString_const_&> @ 14b8ae4f0

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<FString_const_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FString *param_3)

{
  int iVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString_const_&>
            ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x28),param_3
            );
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTable @ 14b8c3b50

FDS_Text * __cdecl
FDS_Text::FromStringTable
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromStringTable(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FromStringTableFormat<int_&,FString_&,FString_&> @ 14bbe9550

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int_&,FString_&,FString_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3,
          FString *param_4,FString *param_5)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  FDS_Int32StringFormatArg *pFVar5;
  longlong lVar6;
  FString *pFVar7;
  int iVar8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_28;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  pFVar1 = (FInstancedStruct *)(local_28.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
  local_28.ArrayNum = iVar3 + 1;
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar4[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar5 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar5 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar5->Value = *param_3;
  }
  if (local_28.ArrayNum == local_28.ArrayMax) {
    local_28.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  lVar6 = (longlong)local_28.ArrayNum;
  local_28.ArrayNum = local_28.ArrayNum + 1;
  pFVar1 = (FInstancedStruct *)(local_28.AllocatorInstance.Data + lVar6 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar4[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
  FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
  pFVar7 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
  if (pFVar7 != (FString *)0x0) {
    iVar3 = (param_4->Data).ArrayNum;
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange(pFVar7,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar8);
  }
  iVar3 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  local_28.ArrayNum = iVar3 + 1;
  pFVar1 = (FInstancedStruct *)(local_28.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar4[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
  FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
  pFVar7 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
  if (pFVar7 != (FString *)0x0) {
    iVar8 = (param_5->Data).ArrayNum;
    iVar3 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(pFVar7,(wchar_t *)(param_5->Data).AllocatorInstance.Data,iVar3);
  }
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_28);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FDS_TextFormatArg *)local_28.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetText @ 14bcfd7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall FDS_Text::GetText(FDS_Text *this,FText *__return_storage_ptr__)

{
  EDS_TimeExpression EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  UScriptStruct *pUVar5;
  long64 *plVar6;
  float *pfVar7;
  FDS_StringIDWrapper *pFVar8;
  FDS_Text *this_00;
  FName *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  FText *pFVar16;
  FDS_StringEnumTableRow *pFVar17;
  FDS_StringDialogueTableRow *pFVar18;
  FDS_StringMailTableRow *pFVar19;
  FDS_StringErrorTableRow *pFVar20;
  UScriptStruct *pUVar21;
  FString *pFVar22;
  UDS_LogManager *pUVar23;
  FTextFormat *pFVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStackY_458 [32];
  longlong local_418;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_408
  ;
  FText local_3f8;
  FString local_3e8;
  uint local_3d8;
  FName local_3d4;
  longlong local_3c8;
  FText *local_3c0;
  FString local_3b8;
  FString local_3a8;
  FDS_StringIDWrapper local_398;
  longlong local_390;
  FDS_StringIDWrapper local_388;
  longlong local_380;
  FDS_StringIDWrapper local_378;
  longlong local_370;
  FDS_StringIDWrapper local_368;
  longlong local_360;
  FDS_StringIDWrapper local_358;
  longlong local_350;
  TSharedPtr<FCulture,1> local_348;
  TSharedPtr<FCulture,1> local_338;
  TSharedPtr<FCulture,1> local_328;
  FString local_318;
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
  FText local_198;
  FString local_188;
  FTextFormat local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  bVar13 = false;
  bVar12 = false;
  local_3c0 = __return_storage_ptr__;
  FText::FText(&local_3f8);
  EVar1 = this->TimeExpressionType;
  if (EVar1 != None) {
    if ((this->TimeSpan).Ticks == 0) {
      if (0 < (this->DateTime).Ticks) {
        UDS_TimeUtilManager::ConvertStringFromDateTime
                  (&local_3a8,&this->DateTime,EVar1,this->IsExpression);
        pFVar16 = FText::FromString(&local_2f8,&local_3a8);
        FText::operator=(&local_3f8,pFVar16);
        if (local_2f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
        }
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      UDS_TimeUtilManager::ConvertStringFromTimespan
                (&local_3b8,&this->TimeSpan,EVar1,this->IsExpression);
      pFVar16 = FText::FromString(&local_308,&local_3b8);
      FText::operator=(&local_3f8,pFVar16);
      if (local_308.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
      }
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14bcfd909;
  }
  if (this->StringEnumTableNameID == (FName)0x0) {
    if ((this->UniqueString).Data.ArrayNum < 2) {
      lVar25 = this->StringTableID;
      if (lVar25 == 0) {
        if (0 < (this->FormatArgs).ArrayNum) {
          pFVar16 = FText::FromString(&local_248,L"{1}");
          FText::operator=(&local_3f8,pFVar16);
          if (local_248.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
          }
        }
      }
      else {
        switch(this->StringTableType) {
        case StringBase:
          local_398 = (FDS_StringIDWrapper)&___7FDS_StringBaseID__6B_;
          local_390 = lVar25;
          pFVar16 = FDS_StringIDWrapper::Text(&local_398,&local_2c8);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_2c8.TextData.Reference;
          break;
        case StringUi:
          local_388 = (FDS_StringIDWrapper)&___7FDS_StringUiID__6B_;
          local_380 = lVar25;
          pFVar16 = FDS_StringIDWrapper::Text(&local_388,&local_2b8);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_2b8.TextData.Reference;
          break;
        case StringItem:
          local_378 = (FDS_StringIDWrapper)&___7FDS_StringItemID__6B_;
          local_370 = lVar25;
          pFVar16 = FDS_StringIDWrapper::Text(&local_378,&local_2a8);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_2a8.TextData.Reference;
          break;
        case StringQuest:
          local_368 = (FDS_StringIDWrapper)&___7FDS_StringQuestID__6B_;
          local_360 = lVar25;
          pFVar16 = FDS_StringIDWrapper::Text(&local_368,&local_298);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_298.TextData.Reference;
          break;
        case StringWorld:
          local_358 = (FDS_StringIDWrapper)&___7FDS_StringWorldID__6B_;
          local_350 = lVar25;
          pFVar16 = FDS_StringIDWrapper::Text(&local_358,&local_288);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_288.TextData.Reference;
          break;
        case StringDialogue:
          pFVar18 = FDS_StringDialogueTableRow::GetRef(lVar25,true);
          pFVar16 = FText::FromString(&local_278,&pFVar18->Text);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_278.TextData.Reference;
          break;
        case StringMail:
          pFVar19 = FDS_StringMailTableRow::GetRef(lVar25,true);
          pFVar16 = FText::FromString(&local_268,&pFVar19->Text);
          FText::operator=(&local_3f8,pFVar16);
          local_258.TextData.Reference = local_268.TextData.Reference;
          break;
        case StringError:
          pFVar20 = FDS_StringErrorTableRow::GetRef(lVar25,true);
          pFVar16 = FDS_StringIDWrapper::Text
                              ((FDS_StringIDWrapper *)&pFVar20->ID_StringUi,&local_258);
          FText::operator=(&local_3f8,pFVar16);
          break;
        default:
          goto switchD_14bcfd9a1_default;
        }
        if (local_258.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
        }
      }
switchD_14bcfd9a1_default:
      iVar2 = (this->FormatArgs).ArrayNum;
      local_3c8 = (longlong)iVar2;
      if (0 < iVar2) {
        local_408.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.Pairs.ArrayNum = 0;
        local_408.Pairs.ArrayMax = 0;
        if (0 < iVar2) {
          lVar25 = 0;
          local_418 = 0;
          uVar26 = 0;
          do {
            local_3d8 = uVar26 + 1;
            local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e8.Data.ArrayNum = 0;
            local_3e8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_3e8,local_3d8);
            uVar27 = ~uVar26 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              pFVar16 = (FText *)(*pcVar11)();
              return pFVar16;
            }
            pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
            piVar4 = *(int **)(pFVar3 + local_418 + 8);
            if ((piVar4 == (int *)0x0) ||
               (pUVar5 = *(UScriptStruct **)(pFVar3 + local_418), pUVar5 == (UScriptStruct *)0x0)) {
LAB_14bcfdd6d:
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              plVar6 = *(long64 **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((plVar6 != (long64 *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_Int64StringFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfde11:
                  local_338.Object = (FCulture *)0x0;
                  local_338.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  uVar15 = 0;
                  if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                    uVar15 = uVar27;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    pFVar16 = (FText *)(*pcVar11)();
                    return pFVar16;
                  }
                  pFVar16 = FText::AsNumber(&local_228,*plVar6,
                                            (FNumberFormattingOptions *)
                                            ((this->FormatArgs).AllocatorInstance.Data +
                                            local_418 + 0x10),&local_338);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_228.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_338.SharedReferenceCount.ReferenceController)
                  ;
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_Int64StringFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfde11;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pfVar7 = *(float **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pfVar7 != (float *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_FloatStringFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfdf4f:
                  local_328.Object = (FCulture *)0x0;
                  local_328.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  uVar15 = 0;
                  if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                    uVar15 = uVar27;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    pFVar16 = (FText *)(*pcVar11)();
                    return pFVar16;
                  }
                  pFVar16 = FText::AsNumber(&local_218,*pfVar7,
                                            (FNumberFormattingOptions *)
                                            ((this->FormatArgs).AllocatorInstance.Data +
                                            local_418 + 0x10),&local_328);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_218.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_328.SharedReferenceCount.ReferenceController)
                  ;
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_FloatStringFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfdf4f;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar8 = *(FDS_StringIDWrapper **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar8 != (FDS_StringIDWrapper *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringBaseIDFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe07e:
                  pFVar16 = FDS_StringIDWrapper::Text(pFVar8,&local_208);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_208.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringBaseIDFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe07e;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar8 = *(FDS_StringIDWrapper **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar8 != (FDS_StringIDWrapper *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringUiIDFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe14a:
                  pFVar16 = FDS_StringIDWrapper::Text(pFVar8,&local_1f8);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringUiIDFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe14a;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar8 = *(FDS_StringIDWrapper **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar8 != (FDS_StringIDWrapper *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringItemIDFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe216:
                  pFVar16 = FDS_StringIDWrapper::Text(pFVar8,&local_1e8);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringItemIDFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe216;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar8 = *(FDS_StringIDWrapper **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar8 != (FDS_StringIDWrapper *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringQuestIDFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe2e2:
                  pFVar16 = FDS_StringIDWrapper::Text(pFVar8,&local_1d8);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringQuestIDFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe2e2;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar8 = *(FDS_StringIDWrapper **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar8 != (FDS_StringIDWrapper *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringWorldIDFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe3ae:
                  pFVar16 = FDS_StringIDWrapper::Text(pFVar8,&local_1c8);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringWorldIDFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe3ae;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              this_00 = *(FDS_Text **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((this_00 != (FDS_Text *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_DSTextFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe47a:
                  pFVar16 = GetText(this_00,&local_1b8);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_DSTextFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe47a;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar22 = *(FString **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar22 != (FString *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe546:
                  pFVar16 = FText::FromString(&local_1a8,pFVar22);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe546;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar3 = (this->FormatArgs).AllocatorInstance.Data;
              pFVar9 = *(FName **)(pFVar3 + lVar25 * 0x28 + 8);
              if ((pFVar9 != (FName *)0x0) &&
                 (pUVar5 = *(UScriptStruct **)(pFVar3 + lVar25 * 0x28),
                 pUVar5 != (UScriptStruct *)0x0)) {
                pUVar21 = FDS_StringEnumKeyFormatArg::StaticStruct();
                if (pUVar5 == pUVar21) {
LAB_14bcfe616:
                  pFVar17 = FDS_StringEnumTableRow::GetRef(pFVar9,true);
                  pFVar16 = FText::FromString(&local_198,&pFVar17->Text);
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
                  if (local_198.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
                  }
                  goto LAB_14bcfe7db;
                }
                pUVar21 = FDS_StringEnumKeyFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfe616;
                }
              }
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              lVar10 = *(longlong *)((this->FormatArgs).AllocatorInstance.Data + lVar25 * 0x28);
              if (lVar10 == 0) {
                bVar12 = true;
                pFVar22 = ::FString::FString(&local_188,L"Invalid or Empty");
              }
              else {
                local_3d4 = *(FName *)(lVar10 + 0x18);
                bVar13 = true;
                ::FName::ToString(&local_3d4,&local_318);
                pFVar22 = &local_318;
              }
              pFVar3 = (pFVar22->Data).AllocatorInstance.Data;
              (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar22->Data).ArrayNum = 0;
              (pFVar22->Data).ArrayMax = 0;
              if ((bVar12) &&
                 (bVar12 = false,
                 local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if ((bVar13) &&
                 (bVar13 = false,
                 local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_318.Data.AllocatorInstance.Data);
              }
              pUVar23 = UDS_LogManager::GetInst();
              if (pUVar23 != (UDS_LogManager *)0x0) {
                pUVar23 = UDS_LogManager::GetInst();
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"FDS_Text::GetText",0x11,Yes);
                UDS_LogManager::PrintLog
                          (pUVar23,1,Warning,local_168.Ptr,0x154,
                           L"FormatArgs Has Invalid Arg. Index : %d, Typename :  %s");
                if ((void *)local_168._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
              if (pFVar3 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar3);
              }
            }
            else {
              pUVar21 = FDS_Int32StringFormatArg::StaticStruct();
              if (pUVar5 != pUVar21) {
                pUVar21 = FDS_Int32StringFormatArg::StaticStruct();
                if (pUVar21 != (UScriptStruct *)0x0) {
                  iVar2 = (int)pUVar21->_padding_;
                  if (((int)pUVar5->_padding_ < iVar2) ||
                     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                      &pUVar21->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) goto LAB_14bcfdcd5;
                }
                goto LAB_14bcfdd6d;
              }
LAB_14bcfdcd5:
              local_348.Object = (FCulture *)0x0;
              local_348.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              uVar15 = 0;
              if ((int)uVar26 < (this->FormatArgs).ArrayNum) {
                uVar15 = uVar27;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                pFVar16 = (FText *)(*pcVar11)();
                return pFVar16;
              }
              pFVar16 = FText::AsNumber(&local_238,*piVar4,
                                        (FNumberFormattingOptions *)
                                        ((this->FormatArgs).AllocatorInstance.Data +
                                        local_418 + 0x10),&local_348);
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString_&,FText>(&local_408,&local_3e8,pFVar16);
              if (local_238.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_348.SharedReferenceCount.ReferenceController);
            }
LAB_14bcfe7db:
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
            local_418 = local_418 + 0x28;
            lVar25 = lVar25 + 1;
            __return_storage_ptr__ = local_3c0;
            uVar26 = local_3d8;
          } while (lVar25 < local_3c8);
        }
        pFVar24 = FTextFormat::FTextFormat(&local_178,&local_3f8,Default);
        FText::Format(__return_storage_ptr__,pFVar24,&local_408);
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_408.Pairs.AllocatorInstance.Data,
                   local_408.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_408.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_408.Pairs.AllocatorInstance.Data);
        }
        if (local_3f8.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      goto LAB_14bcfd909;
    }
    pFVar16 = FText::FromString(&local_2d8,&this->UniqueString);
    FText::operator=(&local_3f8,pFVar16);
    local_2e8.TextData.Reference = local_2d8.TextData.Reference;
  }
  else {
    pFVar17 = FDS_StringEnumTableRow::GetRef(&this->StringEnumTableNameID,true);
    pFVar16 = FText::FromString(&local_2e8,&pFVar17->Text);
    FText::operator=(&local_3f8,pFVar16);
  }
  if (local_2e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
  }
LAB_14bcfd909:
  FText::FText(__return_storage_ptr__,&local_3f8);
  if (local_3f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 14bd056f0

bool __thiscall FDS_Text::IsEmpty(FDS_Text *this)

{
  if ((((this->StringTableType == None) && (this->StringTableID == 0)) &&
      (this->StringEnumTableNameID == (FName)0x0)) && ((this->FormatArgs).ArrayNum < 1)) {
    return (this->UniqueString).Data.ArrayNum < 2;
  }
  return false;
}

// Reset @ 14bd1ad00

void __thiscall FDS_Text::Reset(FDS_Text *this)

{
  int *piVar1;
  
  this->StringTableType = None;
  this->StringTableID = 0;
  (this->StringEnumTableNameID).ComparisonIndex = 0;
  (this->StringEnumTableNameID).Number = 0;
  (this->DateTime).Ticks = 0;
  (this->TimeSpan).Ticks = 0;
  this->TimeExpressionType = None;
  this->IsExpression = false;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FormatArgs).AllocatorInstance.Data,
             (this->FormatArgs).ArrayNum);
  piVar1 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->FormatArgs).AllocatorInstance,0,piVar1);
  }
  ::FString::Empty(&this->UniqueString);
  return;
}

// SetTextFormatFromStringTable @ 14bd22570

void __thiscall
FDS_Text::SetTextFormatFromStringTable
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,
          TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *param_3)

{
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_>::operator=(&this->FormatArgs,param_3);
  return;
}

// SetTextFromDateTime @ 14bd22590

void __thiscall
FDS_Text::SetTextFromDateTime
          (FDS_Text *this,FDateTime *param_1,EDS_TimeExpression param_2,bool param_3)

{
  (this->DateTime).Ticks = param_1->Ticks;
  this->TimeExpressionType = param_2;
  this->IsExpression = param_3;
  return;
}

// SetTextFromDateToDate @ 14bd225b0

void __thiscall
FDS_Text::SetTextFromDateToDate
          (FDS_Text *this,FDateTime *param_1,FDateTime *param_2,EDS_TimeExpression param_3,
          bool param_4)

{
  (this->TimeSpan).Ticks = param_2->Ticks - param_1->Ticks;
  this->IsExpression = param_4;
  this->TimeExpressionType = param_3;
  return;
}

// SetTextFromNumber @ 14bd225d0

void __thiscall
FDS_Text::SetTextFromNumber(FDS_Text *this,int param_1,FNumberFormattingOptions *param_2)

{
  int *piVar1;
  FInstancedStruct *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  uchar *puVar3;
  int iVar4;
  FDS_Int32StringFormatArg *pFVar5;
  
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FormatArgs).AllocatorInstance.Data,
             (this->FormatArgs).ArrayNum);
  piVar1 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if ((this->FormatArgs).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->FormatArgs).AllocatorInstance,0,piVar1);
  }
  this->StringTableType = None;
  this->StringTableID = 0;
  iVar4 = (this->FormatArgs).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->FormatArgs).AllocatorInstance,piVar1);
  }
  (this->FormatArgs).ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((this->FormatArgs).AllocatorInstance.Data + (longlong)iVar4 * 0x28)
  ;
  FInstancedStruct::FInstancedStruct(this_00);
  puVar3 = *(uchar **)&param_2->MinimumIntegralDigits;
  TVar2 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)&param_2->MinimumFractionalDigits;
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_2;
  this_00[1].StructMemory = puVar3;
  this_00[2].ScriptStruct.field0_0x0 = TVar2;
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar5 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar5 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar5->Value = param_1;
  }
  return;
}

// SetTextFromNumber @ 14bd226c0

void __thiscall
FDS_Text::SetTextFromNumber(FDS_Text *this,float param_1,FNumberFormattingOptions *param_2)

{
  int *piVar1;
  int iVar2;
  float local_res10 [2];
  
  local_res10[0] = param_1;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FormatArgs).AllocatorInstance.Data,
             (this->FormatArgs).ArrayNum);
  piVar1 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if ((this->FormatArgs).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->FormatArgs).AllocatorInstance,0,piVar1);
  }
  this->StringTableType = None;
  this->StringTableID = 0;
  iVar2 = (this->FormatArgs).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->FormatArgs).AllocatorInstance,piVar1);
  }
  (this->FormatArgs).ArrayNum = iVar2 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<float_const_&>
            ((FDS_TextFormatArg *)
             ((this->FormatArgs).AllocatorInstance.Data + (longlong)iVar2 * 0x28),local_res10,
             param_2);
  return;
}

// SetTextFromSec @ 14bd22780

void __thiscall
FDS_Text::SetTextFromSec(FDS_Text *this,float param_1,EDS_TimeExpression param_2,bool param_3)

{
  float fVar1;
  
  fVar1 = param_1 * __real_4b189680;
  this->TimeExpressionType = param_2;
  this->IsExpression = param_3;
  (this->TimeSpan).Ticks = (longlong)fVar1;
  return;
}

// SetTextFromStringEnumTable @ 14bd227a0

void __thiscall FDS_Text::SetTextFromStringEnumTable(FDS_Text *this,FName *param_1)

{
  this->StringEnumTableNameID = *param_1;
  return;
}

// SetTextFromStringID @ 14bd227b0

void __thiscall FDS_Text::SetTextFromStringID(FDS_Text *this,FDS_StringBaseID *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringBase;
  return;
}

// SetTextFromStringID @ 14bd227d0

void __thiscall FDS_Text::SetTextFromStringID(FDS_Text *this,FDS_StringItemID *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringItem;
  return;
}

// SetTextFromStringID @ 14bd227f0

void __thiscall FDS_Text::SetTextFromStringID(FDS_Text *this,FDS_StringQuestID *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringQuest;
  return;
}

// SetTextFromStringID @ 14bd22810

void __thiscall FDS_Text::SetTextFromStringID(FDS_Text *this,FDS_StringUiID *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringUi;
  return;
}

// SetTextFromStringID @ 14bd22830

void __thiscall FDS_Text::SetTextFromStringID(FDS_Text *this,FDS_StringWorldID *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringWorld;
  return;
}

// SetTextFromStringTable @ 14bd22850

void __thiscall FDS_Text::SetTextFromStringTable(FDS_Text *this,FDS_StringBaseTableRow *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringBase;
  return;
}

// SetTextFromStringTable @ 14bd22870

void __thiscall FDS_Text::SetTextFromStringTable(FDS_Text *this,FDS_StringQuestTableRow *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringQuest;
  return;
}

// SetTextFromStringTable @ 14bd22890

void __thiscall FDS_Text::SetTextFromStringTable(FDS_Text *this,FDS_StringUiTableRow *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringUi;
  return;
}

// SetTextFromStringTable @ 14bd228b0

void __thiscall FDS_Text::SetTextFromStringTable(FDS_Text *this,FDS_StringWorldTableRow *param_1)

{
  this->StringTableID = param_1->ID;
  this->StringTableType = StringWorld;
  return;
}

// SetTextFromStringTable @ 14bd228d0

void __thiscall
FDS_Text::SetTextFromStringTable(FDS_Text *this,EDS_StringTableType param_1,long64 param_2)

{
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  return;
}

// SetTextFromTimespan @ 14bd228e0

void __thiscall
FDS_Text::SetTextFromTimespan
          (FDS_Text *this,FTimespan *param_1,EDS_TimeExpression param_2,bool param_3)

{
  (this->TimeSpan).Ticks = param_1->Ticks;
  this->TimeExpressionType = param_2;
  this->IsExpression = param_3;
  return;
}

// SetTextFromUniqueString @ 14bd22900

void __thiscall FDS_Text::SetTextFromUniqueString(FDS_Text *this,FString *param_1)

{
  ::FString::operator=(&this->UniqueString,param_1);
  return;
}

// SetTextFromUnixTime @ 14bd22910

void __thiscall
FDS_Text::SetTextFromUnixTime(FDS_Text *this,double param_1,EDS_TimeExpression param_2,bool param_3)

{
  longlong lVar1;
  FDateTime *pFVar2;
  double dVar3;
  FDateTime local_res8;
  
  dVar3 = param_1 * __real_416312d000000000;
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  lVar1 = pFVar2->Ticks;
  this->TimeExpressionType = param_2;
  this->IsExpression = param_3;
  (this->DateTime).Ticks = lVar1 + (longlong)dVar3;
  return;
}

// FromStringTableFormat<FDS_Text,FDS_Text_&> @ 14bd39de0

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<FDS_Text,FDS_Text_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FDS_Text *param_3,FDS_Text *param_4)

{
  FDS_TextFormatArg *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  FNumberFormattingOptions *pFVar8;
  longlong lVar9;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  pFVar1 = (FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
  local_18.ArrayNum = iVar7 + 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar1);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar2 = pFVar8->UseGrouping;
  bVar3 = pFVar8->IndicateNearlyInteger;
  uVar4 = pFVar8->field_0x3;
  EVar5 = pFVar8->RoundingMode;
  iVar7 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (pFVar1->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (pFVar1->NumberFormatOption).UseGrouping = bVar2;
  (pFVar1->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (pFVar1->NumberFormatOption).field_0x3 = uVar4;
  (pFVar1->NumberFormatOption).RoundingMode = EVar5;
  (pFVar1->NumberFormatOption).MinimumIntegralDigits = iVar7;
  (pFVar1->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar7 = pFVar8->MaximumFractionalDigits;
  (pFVar1->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (pFVar1->NumberFormatOption).MaximumFractionalDigits = iVar7;
  FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar1,param_3);
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar9 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  pFVar1 = (FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + lVar9 * 0x28);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar1);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar2 = pFVar8->UseGrouping;
  bVar3 = pFVar8->IndicateNearlyInteger;
  uVar4 = pFVar8->field_0x3;
  EVar5 = pFVar8->RoundingMode;
  iVar7 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (pFVar1->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (pFVar1->NumberFormatOption).UseGrouping = bVar2;
  (pFVar1->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (pFVar1->NumberFormatOption).field_0x3 = uVar4;
  (pFVar1->NumberFormatOption).RoundingMode = EVar5;
  (pFVar1->NumberFormatOption).MinimumIntegralDigits = iVar7;
  (pFVar1->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar7 = pFVar8->MaximumFractionalDigits;
  (pFVar1->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (pFVar1->NumberFormatOption).MaximumFractionalDigits = iVar7;
  FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar1,param_4);
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<int_&> @ 14bd9fc30

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3)

{
  FInstancedStruct *this;
  FObjectPtr_u_0 FVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  FDS_Int32StringFormatArg *pFVar4;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar2 + 1;
  this = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x28);
  FInstancedStruct::FInstancedStruct(this);
  pFVar3 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar1 = pFVar3[1];
  this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar3;
  this[1].StructMemory = (uchar *)FVar1;
  this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar3[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
  pFVar4 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
  if (pFVar4 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar4->Value = *param_3;
  }
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<int_&,FDS_Text> @ 14bd9fd40

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int_&,FDS_Text>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3,
          FDS_Text *param_4)

{
  FInstancedStruct *this;
  FDS_TextFormatArg *this_00;
  FObjectPtr_u_0 FVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  FObjectPtr_u_0 *pFVar8;
  FDS_Int32StringFormatArg *pFVar9;
  longlong lVar10;
  FNumberFormattingOptions *pFVar11;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  this = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
  local_18.ArrayNum = iVar7 + 1;
  FInstancedStruct::FInstancedStruct(this);
  pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar1 = pFVar8[1];
  this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
  this[1].StructMemory = (uchar *)FVar1;
  this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
  pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
  if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar9->Value = *param_3;
  }
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar10 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  this_00 = (FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + lVar10 * 0x28);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_00);
  pFVar11 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar2 = pFVar11->UseGrouping;
  bVar3 = pFVar11->IndicateNearlyInteger;
  uVar4 = pFVar11->field_0x3;
  EVar5 = pFVar11->RoundingMode;
  iVar7 = pFVar11->MinimumIntegralDigits;
  iVar6 = pFVar11->MaximumIntegralDigits;
  (this_00->NumberFormatOption).AlwaysSign = pFVar11->AlwaysSign;
  (this_00->NumberFormatOption).UseGrouping = bVar2;
  (this_00->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this_00->NumberFormatOption).field_0x3 = uVar4;
  (this_00->NumberFormatOption).RoundingMode = EVar5;
  (this_00->NumberFormatOption).MinimumIntegralDigits = iVar7;
  (this_00->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar7 = pFVar11->MaximumFractionalDigits;
  (this_00->NumberFormatOption).MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  (this_00->NumberFormatOption).MaximumFractionalDigits = iVar7;
  FDS_TextFormatArg::SetArg<FDS_Text_&>(this_00,param_4);
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<int_const_&> @ 14bd9feb0

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int_const_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3)

{
  FInstancedStruct *this;
  FObjectPtr_u_0 FVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  FDS_Int32StringFormatArg *pFVar4;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar2 + 1;
  this = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x28);
  FInstancedStruct::FInstancedStruct(this);
  pFVar3 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar1 = pFVar3[1];
  this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar3;
  this[1].StructMemory = (uchar *)FVar1;
  this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar3[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
  pFVar4 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
  if (pFVar4 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar4->Value = *param_3;
  }
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<FDS_Text> @ 14bd9ffc0

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<FDS_Text>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FDS_Text *param_3)

{
  FDS_TextFormatArg *this;
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  FNumberFormattingOptions *pFVar7;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar6 + 1;
  this = (FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  pFVar7 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar1 = pFVar7->UseGrouping;
  bVar2 = pFVar7->IndicateNearlyInteger;
  uVar3 = pFVar7->field_0x3;
  EVar4 = pFVar7->RoundingMode;
  iVar6 = pFVar7->MinimumIntegralDigits;
  iVar5 = pFVar7->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar7->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar1;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar5;
  iVar6 = pFVar7->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar7->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  FDS_TextFormatArg::SetArg<FDS_Text_&>(this,param_3);
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetTextFormatFromStringTable<FString_const_&> @ 14bdac0b0

void __thiscall
FDS_Text::SetTextFormatFromStringTable<FString_const_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,FString *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FString *this_01;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->FormatArgs).ArrayNum;
  if (iVar4 == *piVar2) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
  this_01 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
  if (this_01 != (FString *)0x0) {
    ::FString::operator=(this_01,param_3);
  }
  return;
}

// FromStringTableFormat<int> @ 14be04e50

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3)

{
  FInstancedStruct *this;
  FObjectPtr_u_0 FVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  FDS_Int32StringFormatArg *pFVar4;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar2 + 1;
  this = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x28);
  FInstancedStruct::FInstancedStruct(this);
  pFVar3 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar1 = pFVar3[1];
  this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar3;
  this[1].StructMemory = (uchar *)FVar1;
  this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar3[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
  pFVar4 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
  if (pFVar4 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar4->Value = *param_3;
  }
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<int,int_&> @ 14be04f60

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<int,int_&>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,int *param_3,
          int *param_4)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  FDS_Int32StringFormatArg *pFVar5;
  longlong lVar6;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  pFVar1 = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
  local_18.ArrayNum = iVar3 + 1;
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar4[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar5 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar5 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar5->Value = *param_3;
  }
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar6 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  pFVar1 = (FInstancedStruct *)(local_18.AllocatorInstance.Data + lVar6 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar4[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar5 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar5 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar5->Value = *param_4;
  }
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetTextFormatFromStringTable<int_&,int_&> @ 14be0e940

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int_&,int_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3,int *param_4)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_3;
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_4;
  }
  return;
}

// SetTextFormatFromStringTable<int_const_&> @ 14be0ea80

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int_const_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_Int32StringFormatArg *pFVar6;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->FormatArgs).ArrayNum;
  if (iVar4 == *piVar2) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = *param_3;
  }
  return;
}

// SetTextFormatFromStringTable<FDS_StringBaseID_const_&> @ 14be0eb50

void __thiscall
FDS_Text::SetTextFormatFromStringTable<FDS_StringBaseID_const_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,FDS_StringBaseID *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar3 = (this->FormatArgs).ArrayNum;
  if (iVar3 == *piVar2) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar3 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
            ((FDS_TextFormatArg *)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 0x28),
             param_3);
  return;
}

// SetTextFormatFromStringTable<FDS_StringWorldID_const_&> @ 14be0ebf0

void __thiscall
FDS_Text::SetTextFormatFromStringTable<FDS_StringWorldID_const_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,FDS_StringWorldID *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_StringWorldIDFormatArg *pFVar6;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->FormatArgs).ArrayNum;
  if (iVar4 == *piVar2) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(this_00);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(this_00);
  if (pFVar6 != (FDS_StringWorldIDFormatArg *)0x0) {
    (pFVar6->Value).ID = param_3->ID;
  }
  return;
}

// FromStringID @ 14be1fd30

FDS_Text * __cdecl
FDS_Text::FromStringID(FDS_Text *__return_storage_ptr__,FDS_StringBaseID *param_1)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromStringID(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FromStringTableFormat<> @ 14be682d0

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTableFormat<FString> @ 14be68350

FDS_Text * __cdecl
FDS_Text::FromStringTableFormat<FString>
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FString *param_3)

{
  int iVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString>
            ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x28),param_3
            );
  SetTextFormatFromStringTable(__return_storage_ptr__,param_1,param_2,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetTextFormatFromStringTable<int_const_&,int> @ 14be72260

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int_const_&,int>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3,int *param_4)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_3;
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_4;
  }
  return;
}

// SetTextFormatFromStringTable<int,int_&> @ 14be723a0

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int,int_&>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3,int *param_4)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_3;
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_4;
  }
  return;
}

// FromStringID @ 14beec4b0

FDS_Text * __cdecl
FDS_Text::FromStringID(FDS_Text *__return_storage_ptr__,FDS_StringItemID *param_1)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromStringID(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FDS_Text @ 14bf990a0

FDS_Text * __thiscall FDS_Text::FDS_Text(FDS_Text *this,FDS_Text *param_1)

{
  this->StringTableType = param_1->StringTableType;
  this->StringTableID = param_1->StringTableID;
  this->StringEnumTableNameID = param_1->StringEnumTableNameID;
  (this->DateTime).Ticks = (param_1->DateTime).Ticks;
  (this->TimeSpan).Ticks = (param_1->TimeSpan).Ticks;
  this->TimeExpressionType = param_1->TimeExpressionType;
  this->IsExpression = param_1->IsExpression;
  (this->UniqueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueString).Data.AllocatorInstance.Data =
       (param_1->UniqueString).Data.AllocatorInstance.Data;
  (param_1->UniqueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueString).Data.ArrayNum = (param_1->UniqueString).Data.ArrayNum;
  (this->UniqueString).Data.ArrayMax = (param_1->UniqueString).Data.ArrayMax;
  (param_1->UniqueString).Data.ArrayNum = 0;
  (param_1->UniqueString).Data.ArrayMax = 0;
  (this->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatArgs).AllocatorInstance.Data = (param_1->FormatArgs).AllocatorInstance.Data;
  (param_1->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatArgs).ArrayNum = (param_1->FormatArgs).ArrayNum;
  (this->FormatArgs).ArrayMax = (param_1->FormatArgs).ArrayMax;
  (param_1->FormatArgs).ArrayNum = 0;
  (param_1->FormatArgs).ArrayMax = 0;
  return this;
}

// SetTextFormatFromStringTable<int,int> @ 14bfffab0

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int,int>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3,int *param_4)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_3;
  }
  iVar5 = (this->FormatArgs).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = *param_4;
  }
  return;
}

// FromStringID @ 14c01a290

FDS_Text * __cdecl
FDS_Text::FromStringID(FDS_Text *__return_storage_ptr__,FDS_StringWorldID *param_1)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromStringID(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FromStringTable @ 14c01a2e0

FDS_Text * __cdecl
FDS_Text::FromStringTable(FDS_Text *__return_storage_ptr__,FDS_StringWorldTableRow *param_1)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromStringTable(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FromUniqueString @ 14c01a330

FDS_Text * __cdecl FDS_Text::FromUniqueString(FDS_Text *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  SetTextFromUniqueString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetTextFormatFromStringTable<int> @ 14c068320

void __thiscall
FDS_Text::SetTextFormatFromStringTable<int>
          (FDS_Text *this,EDS_StringTableType param_1,long64 param_2,int *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_Int32StringFormatArg *pFVar6;
  
  pTVar1 = &this->FormatArgs;
  this->StringTableType = param_1;
  this->StringTableID = param_2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,(this->FormatArgs).ArrayNum);
  piVar2 = &(this->FormatArgs).ArrayMax;
  (this->FormatArgs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->FormatArgs).ArrayNum;
  if (iVar4 == *piVar2) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->FormatArgs).ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = *param_3;
  }
  return;
}

