// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1488edd90

UClass * __cdecl UUserDefinedEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UserDefinedEnum",
               &Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton,
               StaticRegisterNativesUUserDefinedEnum,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUserDefinedEnum>,
               InternalVTableHelperCtorCaller<UUserDefinedEnum>,local_res8,UEnum::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton;
}

// UUserDefinedEnum @ 14890b830

UUserDefinedEnum * __thiscall
UUserDefinedEnum::UUserDefinedEnum(UUserDefinedEnum *this,FVTableHelper *param_1)

{
  UEnum::UEnum((UEnum *)this,param_1);
  this->_padding_ = (longlong)&___7UUserDefinedEnum__6B_;
  *(undefined8 *)&this->DisplayNameMap = 0;
  *(undefined8 *)&(this->DisplayNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DisplayNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x48 = 0;
  return this;
}

// UUserDefinedEnum @ 14890b8a0

UUserDefinedEnum * __thiscall
UUserDefinedEnum::UUserDefinedEnum(UUserDefinedEnum *this,FObjectInitializer *param_1)

{
  UEnum::UEnum((UEnum *)this,param_1);
  this->_padding_ = (longlong)&___7UUserDefinedEnum__6B_;
  *(undefined8 *)&this->DisplayNameMap = 0;
  *(undefined8 *)&(this->DisplayNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DisplayNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayNameMap).field_0x48 = 0;
  return this;
}

// ~UUserDefinedEnum @ 14890eb50

void __thiscall UUserDefinedEnum::~UUserDefinedEnum(UUserDefinedEnum *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UUserDefinedEnum__6B_;
  *(undefined4 *)&(this->DisplayNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DisplayNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DisplayNameMap);
  UEnum::~UEnum((UEnum *)this);
  return;
}

// GenerateFullEnumName @ 148951290

FString * __thiscall
UUserDefinedEnum::GenerateFullEnumName
          (UUserDefinedEnum *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((char)this->_padding_ != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CppForm == ECppForm::Namespaced",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserDefinedEnum.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GenerateFullEnumName((UEnum *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAuthoredNameStringByIndex @ 148954ec0

FString * __thiscall
UUserDefinedEnum::GetAuthoredNameStringByIndex
          (UUserDefinedEnum *this,FString *__return_storage_ptr__,int param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FString local_18;
  
  pFVar1 = UEnum::GetNameStringByIndex((UEnum *)this,&local_18,param_1);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>::
           Find((TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>
                 *)&this->DisplayNameMap,local_res8);
  if (pFVar2 != (FText *)0x0) {
    pFVar1 = FTextInspector::GetSourceString(pFVar2);
    if (pFVar1 != (FString *)0x0) {
      ::FString::FString(__return_storage_ptr__,pFVar1);
      return __return_storage_ptr__;
    }
  }
  UEnum::GetAuthoredNameStringByIndex((UEnum *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetDisplayNameTextByIndex @ 148958060

FText * __thiscall
UUserDefinedEnum::GetDisplayNameTextByIndex
          (UUserDefinedEnum *this,FText *__return_storage_ptr__,int param_1)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  FName local_res20;
  FString local_28;
  
  pFVar2 = UEnum::GetNameStringByIndex((UEnum *)this,&local_28,param_1);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,pwVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar3 = TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>::
           Find((TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>
                 *)&this->DisplayNameMap,local_res20);
  if (pFVar3 != (FText *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    return __return_storage_ptr__;
  }
  UEnum::GetDisplayNameTextByIndex((UEnum *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14895b2f0

UClass * __cdecl UUserDefinedEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UserDefinedEnum",
               &Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton,
               StaticRegisterNativesUUserDefinedEnum,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUserDefinedEnum>,
               InternalVTableHelperCtorCaller<UUserDefinedEnum>,local_res8,UEnum::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedEnum.InnerSingleton;
}

// ResolveEnumerator @ 14897a420

long64 __thiscall
UUserDefinedEnum::ResolveEnumerator(UUserDefinedEnum *this,FArchive *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5031129492307837118>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserDefinedEnum.cpp"
                     ,0xbe,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return param_2;
}

// Serialize @ 14897d310

void __thiscall UUserDefinedEnum::Serialize(UUserDefinedEnum *this,FArchive *param_1)

{
  UEnum::Serialize((UEnum *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014897d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  return;
}

// Serialize @ 14897d340

void __thiscall UUserDefinedEnum::Serialize(UUserDefinedEnum *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UEnum::Serialize((UEnum *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEditorObjectVersion::GUID);
  return;
}

// SetEnums @ 14897ecb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UUserDefinedEnum::SetEnums
          (UUserDefinedEnum *this,TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> *param_1
          ,ECppForm param_2,EEnumFlags param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  long64 lVar8;
  UPackage *pUVar9;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FName local_res8;
  long64 local_res10;
  undefined4 local_res18;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  
  bVar2 = false;
  bVar6 = false;
  local_res18 = 0;
  if ((!param_4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5031129492307837153>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserDefinedEnum.cpp"
                         ,0xe1,"bAddMaxKeyIfMissing"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (0 < (int)this->_padding_) {
    UEnum::RemoveNamesFromPrimaryList((UEnum *)this);
  }
  if (param_1->ArrayNum == 0) {
    lVar13 = 0;
  }
  else {
    lVar8 = UEnum::GetMaxEnumValue(param_1,param_3);
    lVar13 = lVar8 + 1;
  }
  local_res10 = lVar13;
  UEnum::FNameData::Empty((FNameData *)&this->_padding_);
  UEnum::FNameData::InitializeWithPlaceholder((FNameData *)&this->_padding_,param_1,lVar13);
  *(ECppForm *)&this->_padding_ = param_2;
  *(EEnumFlags *)((longlong)&this->_padding_ + 1) = param_3;
  UEnum::GenerateEnumPrefix((UEnum *)this,&local_88);
  iVar12 = 0;
  do {
    iVar11 = local_88.Data.ArrayNum;
    FVar14.Data = local_88.Data.AllocatorInstance.Data;
    if (iVar12 == 0) {
      local_a0 = local_88.Data.ArrayNum;
      bVar2 = true;
      local_a8.Data = (FScriptContainerElement *)0x0;
      if (local_88.Data.ArrayNum == 0) {
        local_9c = 0;
        FVar14.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,&local_a8,local_88.Data.ArrayNum,&local_9c);
        memcpy(local_a8.Data,FVar14.Data,(longlong)iVar11 * 2);
        FVar14.Data = local_a8.Data;
        iVar11 = local_a0;
      }
    }
    else {
      bVar6 = true;
      ::FString::PrintfImpl(&local_78,L"%s_%d");
      FVar14.Data = local_78.Data.AllocatorInstance.Data;
      iVar11 = local_78.Data.ArrayNum;
    }
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar11 == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar11,0,(ForAnyElementType *)&local_98,iVar11,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,FVar14.Data,(longlong)iVar11 * 2);
    }
    if ((bVar6) &&
       (bVar6 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (bVar2 = false, local_a8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a8.Data);
    }
    pcVar1 = *(code **)(this->_padding_ + 0x2d8);
    ::FString::ConcatFC(&local_68,&local_98,L"_MAX");
    puVar7 = (undefined8 *)(*pcVar1)(this,local_58);
    if (*(int *)(puVar7 + 1) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*puVar7;
    }
    ::FName::FName(&local_res8,pwVar10);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    lVar8 = UEnum::GetValueByName((UEnum *)this,local_res8,None);
    FVar3 = local_res8;
    if (lVar8 == -1) {
      pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      lVar8 = UEnum::LookupEnumName((FName)pUVar9->_padding_,FVar3,None,(UEnum **)0x0);
      if (lVar8 == -1) {
        UEnum::FNameData::UsePlaceholder((FNameData *)&this->_padding_,local_res8,local_res10);
        if (((int)this->_padding_ != param_1->ArrayNum + 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.Num() == (InNames.Num() + 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserDefinedEnum.cpp"
                               ,0xfb,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        UEnum::AddNamesToPrimaryList((UEnum *)this);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        bVar6 = true;
        goto LAB_14897f011;
      }
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x400);
  UEnum::FNameData::DiscardPlaceholder((FNameData *)&this->_padding_);
  if (((int)this->_padding_ != param_1->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Names.Num() == InNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserDefinedEnum.cpp"
                         ,0x102,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (1 < (byte)LogClass._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = false;
LAB_14897f011:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// StaticRegisterNativesUUserDefinedEnum @ 148982b60

void __cdecl UUserDefinedEnum::StaticRegisterNativesUUserDefinedEnum(void)

{
  return;
}

