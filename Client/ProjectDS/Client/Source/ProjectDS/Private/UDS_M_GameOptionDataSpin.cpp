// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b509ed0

UClass * __cdecl UDS_M_GameOptionDataSpin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataSpin",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataSpin,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataSpin>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataSpin>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton;
}

// UDS_M_GameOptionDataSpin @ 14b5110a0

UDS_M_GameOptionDataSpin * __thiscall
UDS_M_GameOptionDataSpin::UDS_M_GameOptionDataSpin
          (UDS_M_GameOptionDataSpin *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataSpin__6B_;
  return this;
}

// UDS_M_GameOptionDataSpin @ 14b5110f0

UDS_M_GameOptionDataSpin * __thiscall
UDS_M_GameOptionDataSpin::UDS_M_GameOptionDataSpin
          (UDS_M_GameOptionDataSpin *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataSpin__6B_;
  return this;
}

// ~UDS_M_GameOptionDataSpin @ 14b512f00

void __thiscall UDS_M_GameOptionDataSpin::~UDS_M_GameOptionDataSpin(UDS_M_GameOptionDataSpin *this)

{
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515cc0

UClass * __cdecl UDS_M_GameOptionDataSpin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataSpin",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataSpin,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataSpin>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataSpin>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataSpin.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDataSpin @ 14b516ca0

void __cdecl UDS_M_GameOptionDataSpin::StaticRegisterNativesUDS_M_GameOptionDataSpin(void)

{
  return;
}

// GetOptionValueText @ 14bd5eae0

FDS_Text * __thiscall
UDS_M_GameOptionDataSpin::GetOptionValueText
          (UDS_M_GameOptionDataSpin *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  FDS_Text *pFVar5;
  FName FVar6;
  FString local_78;
  FDS_Text local_68;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->field_0x40,GameOptionID);
  pFVar4 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar4 == (FDS_GameOptionBaseTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3498148517816303603>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataSpin.cpp"
                       ,0xd,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar1)();
      return pFVar5;
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
  }
  else {
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    UDS_M_GameOptionDataBase::GetGameOptionValue((UDS_M_GameOptionDataBase *)this);
    ::FString::PrintfImpl(&local_78,L"EDS_%s");
    FVar6 = DS_Util::GetStringEnumTableKey((FString *)&stack0x00000008,(int)&local_78);
    FDS_Text::SetTextFromStringEnumTable(&local_68,(FName *)FVar6);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    __return_storage_ptr__->StringTableType = local_68.StringTableType;
    __return_storage_ptr__->StringTableID = local_68.StringTableID;
    __return_storage_ptr__->StringEnumTableNameID = local_68.StringEnumTableNameID;
    (__return_storage_ptr__->DateTime).Ticks = local_68.DateTime.Ticks;
    (__return_storage_ptr__->TimeSpan).Ticks = local_68.TimeSpan.Ticks;
    __return_storage_ptr__->TimeExpressionType = local_68.TimeExpressionType;
    __return_storage_ptr__->IsExpression = local_68.IsExpression;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         local_68.UniqueString.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_68.UniqueString.Data.ArrayNum;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_68.UniqueString.Data.ArrayMax;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
         local_68.FormatArgs.AllocatorInstance.Data;
    (__return_storage_ptr__->FormatArgs).ArrayNum = local_68.FormatArgs.ArrayNum;
    (__return_storage_ptr__->FormatArgs).ArrayMax = local_68.FormatArgs.ArrayMax;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_68.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

