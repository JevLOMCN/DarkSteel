// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b509610

UClass * __cdecl UDS_M_GameOptionDataColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataColor",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataColor,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_GameOptionDataColor>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataColor>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton;
}

// UDS_M_GameOptionDataColor @ 14b510f60

UDS_M_GameOptionDataColor * __thiscall
UDS_M_GameOptionDataColor::UDS_M_GameOptionDataColor
          (UDS_M_GameOptionDataColor *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataColor__6B_;
  return this;
}

// UDS_M_GameOptionDataColor @ 14b510fb0

UDS_M_GameOptionDataColor * __thiscall
UDS_M_GameOptionDataColor::UDS_M_GameOptionDataColor
          (UDS_M_GameOptionDataColor *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataColor__6B_;
  return this;
}

// ~UDS_M_GameOptionDataColor @ 14b512ec0

void __thiscall
UDS_M_GameOptionDataColor::~UDS_M_GameOptionDataColor(UDS_M_GameOptionDataColor *this)

{
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515b40

UClass * __cdecl UDS_M_GameOptionDataColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataColor",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataColor,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_GameOptionDataColor>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataColor>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataColor.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDataColor @ 14b516c80

void __cdecl UDS_M_GameOptionDataColor::StaticRegisterNativesUDS_M_GameOptionDataColor(void)

{
  return;
}

// GetOptionColor @ 14bd5e470

FLinearColor * __thiscall
UDS_M_GameOptionDataColor::GetOptionColor
          (UDS_M_GameOptionDataColor *this,FLinearColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_GameOptionBaseTableRow *pFVar5;
  FLinearColor *pFVar6;
  UDS_GameOptionData *this_00;
  FDS_ResourceColorTableRow *pFVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FString local_28;
  FLinearColor_u_0 local_18;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->field_0x40,GameOptionID);
  pFVar5 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar5 == (FDS_GameOptionBaseTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8638704916308688922>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataColor.cpp"
                       ,0x1a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    uVar4 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->field_0x40,GameOptionValueIndex);
    if ((-1 < (int)uVar4) && ((int)uVar4 < (pFVar5->DefaultValue).ArrayNum)) {
      this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1a8);
      if (this_00 == (UDS_GameOptionData *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5540522698196647849>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                           ,0x57,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar1)();
          return pFVar6;
        }
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
      }
      else {
        UDS_GameOptionData::GetGameOptionStringValue(this_00,&local_28,uVar4);
      }
      bVar2 = FLinearColor::InitFromString((FLinearColor *)&local_18._s_0,&local_28);
      uVar9 = local_18._s_0.R;
      uVar10 = local_18._s_0.G;
      uVar11 = local_18._s_0.B;
      uVar12 = local_18._s_0.A;
      if (!bVar2) {
        uVar8 = 0;
        if ((int)uVar4 < (pFVar5->DefaultValue).ArrayNum) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar1)();
          return pFVar6;
        }
        pFVar7 = FDS_ResourceColorTableRow::Get
                           ((longlong)
                            *(int *)((pFVar5->DefaultValue).AllocatorInstance.Data +
                                    (longlong)(int)uVar4 * 4),true);
        if (pFVar7 == (FDS_ResourceColorTableRow *)0x0) {
          uVar9 = 0.0;
          uVar10 = 0.0;
          uVar11 = 0.0;
          uVar12 = 0.0;
        }
        else {
          uVar10 = FLinearColor::sRGBToLinearTable[(pFVar7->Color).field0_0x0._s_0.G];
          uVar11 = FLinearColor::sRGBToLinearTable[(pFVar7->Color).field0_0x0._s_0.B];
          uVar9 = FLinearColor::sRGBToLinearTable[(pFVar7->Color).field0_0x0._s_0.R];
          uVar12 = (float)(pFVar7->Color).field0_0x0._s_0.A * __real_3b808081;
          local_18._s_0.R = (float)uVar9;
          local_18._s_0.G = (float)uVar10;
          local_18._s_0.B = (float)uVar11;
          local_18._s_0.A = (float)uVar12;
        }
      }
      (__return_storage_ptr__->field0_0x0)._s_0.R = (float)uVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.G = (float)uVar10;
      (__return_storage_ptr__->field0_0x0)._s_0.B = (float)uVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.A = (float)uVar12;
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetOptionValueText @ 14bd5e880

FDS_Text * __thiscall
UDS_M_GameOptionDataColor::GetOptionValueText
          (UDS_M_GameOptionDataColor *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  FDS_Text *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName local_res8;
  FDS_Text local_a8;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->field_0x40,GameOptionID);
  pFVar4 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar4 == (FDS_GameOptionBaseTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8638704916308688910>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataColor.cpp"
                       ,0xe,"false");
    if (!bVar2) {
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
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDS_Text *)(*pcVar1)();
    return pFVar5;
  }
  FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
            ((FDS_DataContainer *)&this->field_0x40,GameOptionValueIndex);
  local_a8.StringTableType = None;
  local_a8.StringTableID = 0;
  local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_a8.StringEnumTableNameID.Number = 0;
  local_a8.DateTime.Ticks = 0;
  local_a8.TimeSpan.Ticks = 0;
  iVar3 = 0;
  local_a8.TimeExpressionType = None;
  local_a8.IsExpression = false;
  local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.UniqueString.Data.ArrayNum = 0;
  local_a8.UniqueString.Data.ArrayMax = 0;
  local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.FormatArgs.ArrayNum = 0;
  local_a8.FormatArgs.ArrayMax = 0;
  ::FString::PrintfImpl(&local_38,L"EDS_%s");
  ::FString::PrintfImpl(&local_48,L"/Script/ProjectDS.%s");
  if (local_48.Data.ArrayNum == 0) {
    local_58 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_58 = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14bd5e9c4;
  }
  sVar6 = wcslen((wchar_t *)local_58);
  iVar3 = (int)sVar6;
LAB_14bd5e9c4:
  iStack_50 = iVar3;
  pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
  local_28._12_4_ = uStack_4c;
  local_28.Size = iStack_50;
  local_28.DataPtr = (wchar_t *)local_58;
  pUVar8 = StaticFindObject(pUVar7,(UObject *)0x0,&local_28,None);
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FDS_Text::SetTextFromStringEnumTable(&local_a8,&local_res8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->StringTableType = local_a8.StringTableType;
  __return_storage_ptr__->StringTableID = local_a8.StringTableID;
  __return_storage_ptr__->StringEnumTableNameID = local_a8.StringEnumTableNameID;
  (__return_storage_ptr__->DateTime).Ticks = local_a8.DateTime.Ticks;
  (__return_storage_ptr__->TimeSpan).Ticks = local_a8.TimeSpan.Ticks;
  __return_storage_ptr__->TimeExpressionType = local_a8.TimeExpressionType;
  __return_storage_ptr__->IsExpression = local_a8.IsExpression;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       local_a8.UniqueString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_a8.UniqueString.Data.ArrayNum;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_a8.UniqueString.Data.ArrayMax;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
       local_a8.FormatArgs.AllocatorInstance.Data;
  (__return_storage_ptr__->FormatArgs).ArrayNum = local_a8.FormatArgs.ArrayNum;
  (__return_storage_ptr__->FormatArgs).ArrayMax = local_a8.FormatArgs.ArrayMax;
  local_a8.FormatArgs.ArrayNum = 0;
  local_a8.FormatArgs.ArrayMax = 0;
  local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.UniqueString.Data.ArrayNum = 0;
  local_a8.UniqueString.Data.ArrayMax = 0;
  local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
  if (local_a8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

