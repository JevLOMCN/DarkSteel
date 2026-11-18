// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b509fd0

UClass * __cdecl UDS_M_GameOptionDataText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataText",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataText,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataText>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataText>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton;
}

// UDS_M_GameOptionDataText @ 14b511140

UDS_M_GameOptionDataText * __thiscall
UDS_M_GameOptionDataText::UDS_M_GameOptionDataText
          (UDS_M_GameOptionDataText *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataText__6B_;
  return this;
}

// UDS_M_GameOptionDataText @ 14b511190

UDS_M_GameOptionDataText * __thiscall
UDS_M_GameOptionDataText::UDS_M_GameOptionDataText
          (UDS_M_GameOptionDataText *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataText__6B_;
  return this;
}

// ~UDS_M_GameOptionDataText @ 14b512f20

void __thiscall UDS_M_GameOptionDataText::~UDS_M_GameOptionDataText(UDS_M_GameOptionDataText *this)

{
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515d80

UClass * __cdecl UDS_M_GameOptionDataText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataText",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataText,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataText>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataText>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataText.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDataText @ 14b516cb0

void __cdecl UDS_M_GameOptionDataText::StaticRegisterNativesUDS_M_GameOptionDataText(void)

{
  return;
}

// GetCurrentOptionValueText @ 14bd5ba20

FString * __thiscall
UDS_M_GameOptionDataText::GetCurrentOptionValueText
          (UDS_M_GameOptionDataText *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FDS_GameOptionBaseTableRow *pFVar2;
  FText *this_00;
  FString *pFVar3;
  FText local_68;
  FDS_Text local_58;
  
  UDS_M_GameOptionDataBase::GetGameOptionStringValueByIndex
            ((UDS_M_GameOptionDataBase *)this,__return_storage_ptr__,0);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    iVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->field_0x40,GameOptionID);
    pFVar2 = FDS_GameOptionBaseTableRow::Get((longlong)iVar1,true);
    if ((pFVar2 == (FDS_GameOptionBaseTableRow *)0x0) || ((pFVar2->DefaultValue).ArrayNum < 1)) {
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
    }
    else {
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.StringTableType = None;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringTable
                (&local_58,StringUi,(longlong)*(int *)(pFVar2->DefaultValue).AllocatorInstance.Data)
      ;
    }
    this_00 = FDS_Text::GetText(&local_58,&local_68);
    pFVar3 = FText::ToString(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar3);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultOptionValueText @ 14bd5bb50

FDS_Text * __thiscall
UDS_M_GameOptionDataText::GetDefaultOptionValueText
          (UDS_M_GameOptionDataText *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  FDS_GameOptionBaseTableRow *pFVar2;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->field_0x40,GameOptionID);
  pFVar2 = FDS_GameOptionBaseTableRow::Get((longlong)iVar1,true);
  if ((pFVar2 != (FDS_GameOptionBaseTableRow *)0x0) && (0 < (pFVar2->DefaultValue).ArrayNum)) {
    iVar1 = *(int *)(pFVar2->DefaultValue).AllocatorInstance.Data;
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
    __return_storage_ptr__->StringTableType = None;
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,(longlong)iVar1);
    return __return_storage_ptr__;
  }
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
  return __return_storage_ptr__;
}

