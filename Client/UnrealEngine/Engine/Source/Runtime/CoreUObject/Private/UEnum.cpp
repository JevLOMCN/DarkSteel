// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 50

// StaticClass @ 141f52370

UClass * __cdecl UEnum::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UEnum.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Enum",&Z_Registration_Info_UClass_UEnum.InnerSingleton,
               StaticRegisterNativesUEnum,0x70,8,CLASS_Intrinsic,CASTCLASS_UEnum,L"Engine",
               InternalConstructor<UEnum>,InternalVTableHelperCtorCaller<UEnum>,local_res10,
               UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UEnum.InnerSingleton;
}

// UEnum @ 141f678d0

UEnum * __thiscall UEnum::UEnum(UEnum *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnum__6B_;
  this->_padding_ = 0;
  (this->CppType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CppType).Data.ArrayNum = 0;
  (this->CppType).Data.ArrayMax = 0;
  (this->Names).TaggedNames = 0;
  (this->Names).TaggedValues = 0;
  (this->Names).NumValues = 0;
  (this->EnumPackage).ComparisonIndex = 0;
  (this->EnumPackage).Number = 0;
  return this;
}

// GetPrivateStaticClass @ 141f84c50

UClass * __cdecl UEnum::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UEnum.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Enum",&Z_Registration_Info_UClass_UEnum.InnerSingleton,
               StaticRegisterNativesUEnum,0x70,8,CLASS_Intrinsic,CASTCLASS_UEnum,L"Engine",
               InternalConstructor<UEnum>,InternalVTableHelperCtorCaller<UEnum>,local_res10,
               UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UEnum.InnerSingleton;
}

// Serialize @ 141f9d8b0

void __thiscall UEnum::Serialize(UEnum *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUEnum @ 141fadde0

void __cdecl UEnum::StaticRegisterNativesUEnum(void)

{
  return;
}

// UEnum @ 141fbef60

UEnum * __thiscall UEnum::UEnum(UEnum *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEnum__6B_;
  (this->CppType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CppType).Data.ArrayNum = 0;
  (this->CppType).Data.ArrayMax = 0;
  (this->Names).TaggedNames = 0;
  (this->Names).TaggedValues = 0;
  (this->Names).NumValues = 0;
  this->CppForm = Regular;
  (this->EnumPackage).ComparisonIndex = 0;
  (this->EnumPackage).Number = 0;
  this->EnumDisplayNameFn = (_func___cdecl_FText_int *)0x0;
  return this;
}

// ~UEnum @ 141fc0070

void __thiscall UEnum::~UEnum(UEnum *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  
  this->_padding_ = (longlong)&___7UEnum__6B_;
  pFVar1 = (this->CppType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  uVar2 = (this->Names).TaggedNames;
  if ((uVar2 & 1) != 0) {
    FMemory::Free((void *)(uVar2 & 0xfffffffffffffffe));
  }
  uVar2 = (this->Names).TaggedValues;
  (this->Names).TaggedNames = 0;
  if ((uVar2 & 1) != 0) {
    FMemory::Free((void *)(uVar2 & 0xfffffffffffffffe));
  }
  (this->Names).TaggedValues = 0;
  (this->Names).NumValues = 0;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 141fc1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UEnum::LookupAllEnumNamesWithOptions'::__l2::<lambda_1>::operator()
          (void *this,UEnum **param_1,FName param_2,
          TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
          *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *pTVar5;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *pTVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  undefined1 auStack_968 [32];
  undefined1 local_948 [8];
  ulonglong local_940;
  ForElementType<unsigned_int> local_938;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *local_930;
  int iStack_928;
  uint uStack_924;
  undefined1 *local_920;
  undefined4 uStack_918;
  int iStack_914;
  int local_910;
  int iStack_90c;
  int iStack_908;
  undefined4 uStack_904;
  int local_900;
  FName local_8f8;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *local_8f0;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *local_8e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8e0;
  undefined8 uStack_8c0;
  wchar_t *local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  UEnum **local_8a8;
  ulonglong *local_8a0;
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_968;
  iVar13 = 0;
  local_940 = local_940 & 0xffffffff00000000;
  uVar10 = 1;
  local_8f0 = param_3;
  bVar8 = false;
  if ((*(byte *)this & 4) != 0) {
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.End = local_52;
    local_8f8 = param_2;
    local_888.Base = local_868;
    local_888.CurPos = local_868;
    ::FName::AppendString(&local_8f8,&local_888);
    bVar18 = true;
    local_8b8 = local_888.Base;
    iStack_8b0 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
    local_898._12_4_ = uStack_8ac;
    local_898.Size = iStack_8b0;
    local_898.DataPtr = local_888.Base;
    bVar7 = FPackageName::IsScriptPackage(&local_898);
    bVar8 = true;
    if (!bVar7) {
      cVar12 = '\0';
      goto LAB_141fc1ede;
    }
  }
  bVar18 = bVar8;
  cVar12 = '\x01';
LAB_141fc1ede:
  if (bVar18) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  iVar3 = *(int *)&param_3->field_0x28;
  local_938 = (ForElementType<unsigned_int>)&param_3->field_0x10;
  local_910 = 0;
  iStack_914 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)local_938;
    }
    uVar19 = *puVar16;
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar13;
      local_910 = local_910 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_914 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141fc1f62;
      uVar19 = (puVar16 + 1)[lVar11];
    }
    uVar10 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_900 = (int)lVar11;
    iStack_914 = local_910 + -1 + local_900;
    if (iVar3 < iStack_914) {
      iStack_914 = iVar3;
    }
  }
LAB_141fc1f62:
  iStack_908 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar19 = *(uint *)&param_3->field_0x28;
  TStack_8e0._padding_ = CONCAT44(uVar10,iVar13);
  uStack_918 = 0xffffffff;
  uVar17 = uVar19 & 0xffffffe0;
  TStack_8e0.CurrentBitIndex = iStack_914;
  TStack_8e0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar19 >> 5;
  TStack_8e0._28_4_ = iStack_914;
  TStack_8e0.BaseBitIndex = local_910;
  uStack_8c0 = CONCAT44(uStack_904,iStack_908);
  local_930 = param_3;
  iStack_928 = iVar13;
  uStack_924 = uVar10;
  local_920 = (undefined1 *)local_938;
  iStack_90c = iStack_914;
  local_8e8 = param_3;
  TStack_8e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_938;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_8f0;
  uVar10 = *(int *)((longlong)local_938 + 0x18);
  if (uVar19 != uVar10) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_938 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_938 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_938;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar14 * 4);
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar19 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141fc2080;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar11 * 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar19 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar10 < (int)uVar19) {
      uVar19 = uVar10;
    }
  }
LAB_141fc2080:
  while( true ) {
    pTVar6 = local_8e8;
    if (*(int *)&local_8e8->field_0x8 - *(int *)&local_8e8->field_0x34 != (int)uStack_8c0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UEnum_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_948);
    }
    if (((TStack_8e0.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_8e0.Array == local_938)) && (pTVar6 == pTVar5)) break;
    puVar1 = (ulonglong *)(*(longlong *)pTVar6 + (longlong)TStack_8e0.CurrentBitIndex * 0x18);
    local_940 = *puVar1;
    cVar9 = (*(code *)**(undefined8 **)((longlong)this + 8))
                      ((*(undefined8 **)((longlong)this + 8))[1],&local_940);
    if (cVar9 != '\0') {
      if (*param_1 == (UEnum *)0x0) {
        *param_1 = (UEnum *)puVar1[1];
        **(char **)((longlong)this + 0x10) = cVar12;
        if (((*(byte *)this & 8) == 0) && (cVar12 != '\0')) {
          return;
        }
      }
      else {
        if ((*(byte *)this & 8) != 0) {
          local_8a8 = param_1;
          local_8a0 = puVar1;
          ``UEnum::LookupAllEnumNamesWithOptions'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>
          ::operator()(&local_8a8);
        }
        if ((cVar12 != '\0') && (**(char **)((longlong)this + 0x10) == '\0')) {
          *param_1 = (UEnum *)puVar1[1];
          **(char **)((longlong)this + 0x10) = cVar12;
        }
      }
    }
    TStack_8e0.UnvisitedBitMask = TStack_8e0.UnvisitedBitMask & ~TStack_8e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8e0);
  }
  return;
}

// operator() @ 141fc2180

bool __thiscall `UEnum::LookupEnumNameSlow'::__l2::<lambda_1>::operator()(void *this,FName param_1)

{
  int iVar1;
  FString *this_00;
  size_t sVar2;
  bool bVar3;
  wchar_t *_Str;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = param_1;
  if (*(FName *)this == param_1) {
LAB_141fc2209:
    bVar3 = true;
  }
  else {
    this_00 = ::FName::ToString(&local_res10,&local_18);
    if ((int)(*(longlong **)((longlong)this + 8))[1] == 0) {
      _Str = L"";
LAB_141fc21ce:
      sVar2 = wcslen(_Str);
      iVar1 = ::FString::Find(this_00,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
      bVar4 = true;
      if (iVar1 != -1) goto LAB_141fc2209;
    }
    else {
      _Str = (wchar_t *)**(longlong **)((longlong)this + 8);
      if (_Str != (wchar_t *)0x0) goto LAB_141fc21ce;
    }
    bVar3 = false;
    bVar4 = true;
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// AddNamesToPrimaryList @ 141fc4100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEnum::AddNamesToPrimaryList(UEnum *this)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  UEnum *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UPackage *pUVar7;
  TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
  *this_01;
  TTuple<FName,UEnum_*> *pTVar8;
  UPackage *pUVar9;
  FName *pFVar10;
  TPairInitializer<FName_const_&,UEnum_*_&&> local_res8;
  UEnum *local_res18;
  UEnum ***local_68;
  UEnum **local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  AcquireSRWLockExclusive((PSRWLOCK)&AllEnumNamesLock);
  pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  FVar3 = (FName)pUVar7->_padding_;
  this->EnumPackage = FVar3;
  uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  this_01 = (TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
                           *)&AllEnumNames,uVar6 + FVar3.Number,&this->EnumPackage);
  iVar2 = (this->Names).NumValues;
  pFVar10 = (FName *)((this->Names).TaggedNames & 0xfffffffffffffffe);
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = pFVar10 + iVar2;
  for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
    local_res8.Value = *(UEnum ***)pFVar10;
    pTVar8 = TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
             ::Find(this_01,(FName)local_res8.Value);
    if (((pTVar8 == (TTuple<FName,UEnum_*> *)0x0) ||
        (this_00 = *(UEnum **)&pTVar8->field_0x8, this_00 == (UEnum *)0x0)) ||
       (((uint)this_00->_padding_ >> 0xe & 1) != 0)) {
      local_68 = &local_res8.Value;
      local_60 = &local_res18;
      local_res18 = this;
      TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UEnum_*_&&>_>(this_01,&local_res8,(bool *)&local_68);
    }
    else if (this_00 != this) {
      pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      pUVar9 = GetTransientPackage();
      if ((pUVar7 != pUVar9) && (2 < (byte)LogEnum._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
        ::FName::ToString((FName *)&local_res8.Value,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnum);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141fc4318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&AllEnumNamesLock);
  return;
}

// BeginDestroy @ 141fc6290

void __thiscall UEnum::BeginDestroy(UEnum *this)

{
  RemoveNamesFromPrimaryList(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ContainsExistingMax @ 141fc7900

bool __thiscall UEnum::ContainsExistingMax(UEnum *this)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  FName local_res10;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d8))(this,&local_38,L"MAX");
  pwVar7 = L"";
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar3;
  }
  pFVar4 = ::FName::FName(&local_res10,pwVar6);
  iVar2 = GetIndexByName(this,*pFVar4,CaseSensitive);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (iVar2 == -1) {
    pcVar1 = *(code **)(this->_padding_ + 0x2d8);
    pFVar5 = GenerateEnumPrefix(this,&local_18);
    ::FString::ConcatFC(&local_38,pFVar5,L"_MAX");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    puVar3 = (undefined8 *)(*pcVar1)(this,local_28,FVar8.Data);
    if (*(int *)(puVar3 + 1) != 0) {
      pwVar7 = (wchar_t *)*puVar3;
    }
    ::FName::FName(&local_res8,pwVar7);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar2 = GetIndexByName(this,local_res8,CaseSensitive);
    return iVar2 != -1;
  }
  return true;
}

// FindAuthoredNameStringByValue @ 141fcba70

bool __thiscall UEnum::FindAuthoredNameStringByValue(UEnum *this,FString *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  iVar2 = GetIndexByValue(this,param_2);
  if (iVar2 == -1) {
    return false;
  }
  pFVar3 = (FString *)(**(code **)(this->_padding_ + 0x2c8))(this,local_18,iVar2);
  if (param_1 != pFVar3) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// FindDisplayNameTextByValue @ 141fcbb00

bool __thiscall UEnum::FindDisplayNameTextByValue(UEnum *this,FText *param_1,long64 param_2)

{
  int iVar1;
  FText *pFVar2;
  longlong *local_18 [2];
  
  iVar1 = GetIndexByValue(this,param_2);
  if (iVar1 == -1) {
    return false;
  }
  pFVar2 = (FText *)(**(code **)(this->_padding_ + 0x2c0))(this,local_18,iVar1);
  FText::operator=(param_1,pFVar2);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return true;
}

// FindNameStringByValue @ 141fcbd10

bool __thiscall UEnum::FindNameStringByValue(UEnum *this,FString *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString local_18;
  
  iVar2 = GetIndexByValue(this,param_2);
  if (iVar2 == -1) {
    return false;
  }
  pFVar3 = GetNameStringByIndex(this,&local_18,iVar2);
  if (param_1 != pFVar3) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GenerateEnumPrefix @ 141fcd3f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall UEnum::GenerateEnumPrefix(UEnum *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,__int64> *this_00;
  FString *pFVar6;
  long64 *plVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  longlong local_res10;
  FName local_res20;
  FString local_98;
  FString local_88;
  TArrayView<__int64_const_,int> local_78;
  FName local_68;
  long64 local_60;
  TTuple<FName,__int64> local_58;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar16 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  *piVar16 = 0;
  iVar13 = 0;
  if (0 < (this->Names).NumValues) {
    this_00 = FNameData::operator[](&this->Names,&local_58,0);
    ::FName::ToString((FName *)this_00,__return_storage_ptr__);
    uVar15 = 1;
    if (1 < (this->Names).NumValues) {
      local_res10 = 8;
      do {
        if ((((int)uVar15 < 0) || ((this->Names).NumValues <= (int)uVar15)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd78,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        uVar11 = (this->Names).TaggedNames;
        iVar5 = (this->Names).NumValues;
        if ((iVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        uVar4 = 0;
        if ((int)uVar15 < iVar5) {
          uVar4 = ~uVar15 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        local_78.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
        local_78.ArrayNum = (this->Names).NumValues;
        if ((local_78.ArrayNum < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        plVar7 = TArrayView<__int64_const_,int>::operator[](&local_78,uVar15);
        local_68 = *(FName *)((uVar11 & 0xfffffffffffffffe) + local_res10);
        local_60 = *plVar7;
        ::FName::ToString(&local_68,&local_88);
        uVar9 = local_88.Data._8_8_;
        uVar11 = 0;
        uVar12 = 0;
        while( true ) {
          iVar5 = *piVar16;
          iVar8 = 0;
          iVar14 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar14 = iVar8;
          }
          iVar10 = (int)uVar11;
          if (iVar14 <= iVar10) break;
          iVar14 = (int)uVar9 + -1;
          if ((int)uVar9 == 0) {
            iVar14 = iVar8;
          }
          if (iVar14 <= iVar10) break;
          if ((((iVar10 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), uVar9 = local_88.Data._8_8_, bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (iVar10 < 0) {
code_r0x000141fcd624:
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              );
            uVar9 = local_88.Data._8_8_;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          else {
            iVar5 = (int)uVar9 + -1;
            if ((int)uVar9 == 0) {
              iVar5 = iVar8;
            }
            if (iVar5 <= iVar10) goto code_r0x000141fcd624;
          }
          if (*(short *)(pFVar1 + uVar12) !=
              *(short *)(local_88.Data.AllocatorInstance.Data + uVar12)) break;
          uVar11 = (ulonglong)(iVar10 + 1);
          uVar12 = uVar12 + 2;
        }
        iVar5 = *piVar16 + -1;
        if (*piVar16 == 0) {
          iVar5 = iVar13;
        }
        iVar14 = iVar5;
        if (iVar10 < iVar5) {
          iVar14 = iVar10;
        }
        if (0 < iVar14) {
          iVar8 = iVar14;
        }
        ::FString::RemoveAt(__return_storage_ptr__,iVar8,iVar5 - iVar8,No);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        uVar15 = uVar15 + 1;
        local_res10 = local_res10 + 8;
      } while ((int)uVar15 < (this->Names).NumValues);
    }
    iVar5 = ::FString::Find(__return_storage_ptr__,L"_",1,CaseSensitive,FromEnd,-1);
    if (iVar5 < 1) {
      ::FString::Empty(__return_storage_ptr__);
    }
    else {
      iVar14 = (__return_storage_ptr__->Data).ArrayNum;
      iVar8 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar8 = iVar13;
      }
      iVar14 = iVar8;
      if (iVar5 < iVar8) {
        iVar14 = iVar5;
      }
      iVar5 = iVar13;
      if (0 < iVar14) {
        iVar5 = iVar14;
      }
      ::FString::RemoveAt(__return_storage_ptr__,iVar5,iVar8 - iVar5,No);
    }
  }
  piVar16 = &(__return_storage_ptr__->Data).ArrayNum;
  iVar5 = *piVar16;
  iVar14 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar14 = iVar13;
  }
  if (iVar14 == 0) {
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_98);
    if (__return_storage_ptr__ != &local_98) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      *piVar16 = local_98.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GenerateFullEnumName @ 141fcd870

FString * __thiscall
UEnum::GenerateFullEnumName(UEnum *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *pwVar1;
  FName local_res8;
  FString local_18;
  
  if ((this->CppForm == Regular) || (pwVar1 = wcsstr(param_1,L"::"), pwVar1 != (wchar_t *)0x0)) {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  else {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s::%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetAuthoredNameStringByIndex @ 141fcdaf0

FString * __thiscall
UEnum::GetAuthoredNameStringByIndex(UEnum *this,FString *__return_storage_ptr__,int param_1)

{
  GetNameStringByIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAuthoredNameStringByValue @ 141fcdb10

FString * __thiscall
UEnum::GetAuthoredNameStringByValue(UEnum *this,FString *__return_storage_ptr__,long64 param_1)

{
  int iVar1;
  
  iVar1 = GetIndexByValue(this,param_1);
  (**(code **)(this->_padding_ + 0x2c8))(this,__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// GetBaseEnumNameOnDuplication @ 141fcdb60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
UEnum::GetBaseEnumNameOnDuplication(UEnum *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<FName,__int64> *pTVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  TTuple<FName,__int64> local_18;
  
  iVar4 = (this->Names).NumValues;
  iVar3 = iVar4 + -1;
  if ((iVar3 < 0) || (iVar4 <= iVar3)) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    pTVar5 = FNameData::operator[](&this->Names,&local_18,iVar3);
    local_res8.ComparisonIndex.Value = *(uint *)&pTVar5->field_0x0;
    local_res8.Number = *(uint *)&pTVar5->field_0x4;
  }
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  iVar3 = ::FString::Find(__return_storage_ptr__,L"::",2,CaseSensitive,FromStart,-1);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DoubleColonPos != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
  }
  iVar4 = (__return_storage_ptr__->Data).ArrayNum;
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  iVar4 = iVar8;
  if (iVar3 < iVar8) {
    iVar4 = iVar3;
  }
  iVar7 = 0;
  if (0 < iVar4) {
    iVar7 = iVar4;
  }
  ::FString::RemoveAt(__return_storage_ptr__,iVar7,iVar8 - iVar3,No);
  return __return_storage_ptr__;
}

// GetDisplayNameTextByIndex @ 141fcf0e0

FText * __thiscall
UEnum::GetDisplayNameTextByIndex(UEnum *this,FText *__return_storage_ptr__,int param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FString *pFVar3;
  undefined1 local_res20 [8];
  FString local_28;
  FString local_18;
  
  GetNameStringByIndex(this,&local_28,param_1);
  if (local_28.Data.ArrayNum < 2) {
    pFVar2 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    __return_storage_ptr__->Flags = pFVar2->Flags;
  }
  else if (this->EnumDisplayNameFn == (_func___cdecl_FText_int *)0x0) {
    pFVar3 = GetNameStringByIndex(this,&local_18,param_1);
    FText::FromString(__return_storage_ptr__,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (*this->EnumDisplayNameFn)(__return_storage_ptr__,param_1);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDisplayNameTextByValue @ 141fcf1a0

FText * __thiscall
UEnum::GetDisplayNameTextByValue(UEnum *this,FText *__return_storage_ptr__,long64 param_1)

{
  int iVar1;
  
  iVar1 = GetIndexByValue(this,param_1);
  (**(code **)(this->_padding_ + 0x2c0))(this,__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// GetIndexByName @ 141fcf850

int __thiscall UEnum::GetIndexByName(UEnum *this,FName param_1,EGetByNameFlags param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FName local_res10;
  TArrayView<__int64_const_,int> local_48;
  FString local_38;
  
  lVar10 = (longlong)(this->Names).NumValues;
  uVar8 = 0;
  local_res10 = param_1;
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      if ((((int)uVar8 < 0) || ((this->Names).NumValues <= (int)uVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      uVar1 = (this->Names).TaggedNames;
      iVar5 = (this->Names).NumValues;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      uVar6 = 0;
      if ((int)uVar8 < iVar5) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      local_48.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_48.ArrayNum = (this->Names).NumValues;
      if ((local_48.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      TArrayView<__int64_const_,int>::operator[](&local_48,uVar8);
      uVar2 = *(undefined8 *)((uVar1 & 0xfffffffffffffffe) + lVar9 * 8);
      if (((uint)uVar2 == local_res10.ComparisonIndex.Value) &&
         ((uint)((ulonglong)uVar2 >> 0x20) == local_res10.Number)) {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar10);
  }
  pFVar7 = ::FName::ToString(&local_res10,&local_38);
  iVar5 = GetIndexByNameString(this,pFVar7,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar5;
}

// GetIndexByNameString @ 141fcfa10

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UEnum::GetIndexByNameString(UEnum *this,FString *param_1,EGetByNameFlags param_2)

{
  int *piVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  FRWLockWithExclusiveRecursion *SRWLock;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FCoreRedirectsContext *pFVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  FScriptContainerElement *_Str1;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  EGetByNameFlags EVar10;
  atomic<unsigned_int> aVar11;
  atomic<unsigned_int> aVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FTlsAutoCleanup *pFVar17;
  FName *pFVar18;
  FString *pFVar19;
  UClass *pUVar20;
  FString *pFVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  FTlsAutoCleanup FVar25;
  wchar_t *pwVar26;
  ForAnyElementType FVar27;
  longlong lVar28;
  FCoreRedirectsContext *pFVar29;
  FTlsAutoCleanup this_01;
  EGetByNameFlags EVar30;
  FTlsAutoCleanup FVar31;
  FTlsAutoCleanup FVar32;
  FTlsAutoCleanup FVar33;
  atomic<unsigned_int> local_res8 [2];
  FString *local_res10;
  EGetByNameFlags local_res18;
  undefined1 local_res20 [8];
  FString local_210;
  int local_200;
  undefined1 local_1f8 [8];
  FTlsAutoCleanup local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  undefined4 local_1e4;
  FCoreRedirect *local_1e0;
  FCoreRedirectObjectName local_1d8;
  wchar_t *local_1c0 [2];
  FName local_1b0;
  FName local_1a8;
  FString local_1a0;
  FName local_190;
  FString local_188;
  FCoreRedirectObjectName local_178;
  FName local_160;
  FName local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FScopeCoreRedirectsReadLockedContext local_108;
  TArrayView<__int64_const_,int> local_f8;
  TArrayView<__int64_const_,int> local_e8;
  code *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  FScriptContainerElement *local_b8 [2];
  FString local_a8;
  FScriptContainerElement *local_98 [2];
  FString local_88;
  FScriptContainerElement *local_78 [2];
  FString local_68;
  FName local_58 [3];
  
  local_210.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar28 = (longlong)local_210.Data.ArrayNum;
  this_01 = (FTlsAutoCleanup)0x0;
  iVar15 = 0;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  EVar10 = param_2 & CaseSensitive;
  iVar24 = 0;
  local_1e4 = 0;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (local_210.Data.ArrayNum == 0) {
    local_210.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_210.Data.ArrayNum,0,(ForAnyElementType *)&local_210,local_210.Data.ArrayNum
               ,&local_210.Data.ArrayMax);
    memcpy(local_210.Data.AllocatorInstance.Data,pFVar2,lVar28 * 2);
  }
  local_1f8 = (undefined1  [8])0x0;
  local_1f0 = (FTlsAutoCleanup)0x0;
  local_200 = ::FString::Find(&local_210,L"::",2,CaseSensitive,FromStart,-1);
  FVar33 = this_01;
  if (local_200 == -1) {
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_210.Data.ArrayNum != 0) {
      FVar27.Data = local_210.Data.AllocatorInstance.Data;
    }
    pFVar17 = (FTlsAutoCleanup *)(**(code **)(this->_padding_ + 0x2d8))(this,local_b8,FVar27.Data);
    local_a8.Data.AllocatorInstance.Data = local_b8[0];
    if ((FTlsAutoCleanup *)local_1f8 != pFVar17) {
      FVar33 = *pFVar17;
      *pFVar17 = (FTlsAutoCleanup)0x0;
      iVar15 = *(int *)(pFVar17 + 1);
      local_1f0 = pFVar17[1];
      pFVar17[1] = (FTlsAutoCleanup)0x0;
      local_1f8 = (undefined1  [8])FVar33;
    }
  }
  else {
    pFVar17 = (FTlsAutoCleanup *)::FString::RightChop(&local_210,&local_a8,local_200 + 2);
    if ((FTlsAutoCleanup *)local_1f8 != pFVar17) {
      FVar33 = *pFVar17;
      *pFVar17 = (FTlsAutoCleanup)0x0;
      iVar15 = *(int *)(pFVar17 + 1);
      local_1f0 = pFVar17[1];
      pFVar17[1] = (FTlsAutoCleanup)0x0;
      local_1f8 = (undefined1  [8])FVar33;
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_1d8.ObjectName.ComparisonIndex.Value = 0;
  local_1d8.ObjectName.Number = 0;
  local_1d8.OuterName.ComparisonIndex.Value = 0;
  local_1d8.OuterName.Number = 0;
  local_1d8.PackageName.ComparisonIndex.Value = 0;
  local_1d8.PackageName.Number = 0;
  FVar8 = local_1d8.PackageName;
  if (this != (UEnum *)0x0) {
    FVar8 = (FName)this->_padding_;
    if (this->_padding_ != 0) {
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
      FVar32 = this_01;
      lVar28 = this->_padding_;
      local_1d8.ObjectName = (FName)this->_padding_;
      while( true ) {
        lVar3 = *(longlong *)(lVar28 + 0x20);
        if (lVar3 == 0) break;
        if (1 < FVar32._0_4_) {
          ::FString::AppendChar(&local_1a0,L'.');
        }
        local_160 = *(FName *)(lVar28 + 0x18);
        ::FName::ToString(&local_160,&local_148);
        iVar14 = local_148.Data.ArrayNum + -1;
        if (local_148.Data.ArrayNum == 0) {
          iVar14 = iVar24;
        }
        ::FString::AppendChars(&local_1a0,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar14);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        FVar32._4_4_ = 0;
        FVar32._0_4_ = local_1a0.Data.ArrayNum;
        lVar28 = lVar3;
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (FVar32._0_4_ != 0) {
        FVar27.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      pFVar18 = ::FName::FName(local_58,(wchar_t *)FVar27.Data);
      local_1d8.OuterName = *pFVar18;
      local_1d8.PackageName = *(FName *)(lVar28 + 0x18);
      FVar8 = local_1d8.PackageName;
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        FVar8 = local_1d8.PackageName;
      }
    }
  }
  local_1d8.PackageName = FVar8;
  local_108.NeedsUnlock = true;
  pFVar4 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar29 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar4 != (FCoreRedirectsContext *)0x0) {
    pFVar29 = pFVar4;
  }
  SRWLock = &pFVar29->RWLock;
  local_res8[0] = (pFVar29->RWLock).WriteLockOwnerThreadId;
  local_108.Context = pFVar29;
  if ((local_res8[0] == (atomic<unsigned_int>)0x0) ||
     (aVar11 = (atomic<unsigned_int>)GetCurrentThreadId(), local_res8[0] != aVar11)) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  else {
    piVar1 = &(pFVar29->RWLock).RecursionCount;
    *piVar1 = *piVar1 + 1;
  }
  local_178.ObjectName.ComparisonIndex.Value = 0;
  local_178.ObjectName.Number = 0;
  local_178.OuterName.ComparisonIndex.Value = 0;
  local_178.OuterName.Number = 0;
  local_178.PackageName.ComparisonIndex.Value = 0;
  local_178.PackageName.Number = 0;
  local_1e0 = (FCoreRedirect *)0x0;
  FCoreRedirects::RedirectNameAndValuesUnderReadLock
            (Type_Enum,&local_1d8,&local_178,&local_1e0,None,&local_108);
  uVar23 = 0;
  if ((local_1e0 == (FCoreRedirect *)0x0) ||
     (*(int *)&(local_1e0->ValueChanges).field_0x8 - *(int *)&(local_1e0->ValueChanges).field_0x34 <
      1)) {
    if ((pFVar29->RWLock).RecursionCount < 1) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    else {
      aVar11 = (pFVar29->RWLock).WriteLockOwnerThreadId;
      aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar11 != aVar12) {
        local_res20[0] = 0;
        `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
        operator()(local_res20);
      }
      piVar1 = &(pFVar29->RWLock).RecursionCount;
      *piVar1 = *piVar1 + -1;
    }
LAB_141fcffaa:
    if (local_200 != -1) {
      pFVar19 = (FString *)(**(code **)(this->_padding_ + 0x2d8))(this,local_78);
      if (&local_210 != pFVar19) {
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        local_210.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.Data.ArrayNum = (pFVar19->Data).ArrayNum;
        local_210.Data.ArrayMax = (pFVar19->Data).ArrayMax;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
      }
LAB_141fd0013:
      if (local_78[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0]);
      }
    }
  }
  else {
    if ((6 < (byte)LogCoreRedirects._0_1_) &&
       (pFVar29->Flags == (atomic<FCoreRedirectsContext::EFlags>)0x1)) {
      FCoreRedirectObjectName::CombineNames
                (&local_138,local_1d8.ObjectName,local_1d8.OuterName,local_1d8.PackageName);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    this_00 = &local_1e0->ValueChanges;
    if ((pFVar29->RWLock).RecursionCount < 1) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    else {
      aVar11 = (pFVar29->RWLock).WriteLockOwnerThreadId;
      aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar11 != aVar12) {
        local_res8[0] = (atomic<unsigned_int>)((uint)local_res8[0] & 0xffffff00);
        `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
        operator()(local_res8);
      }
      piVar1 = &(pFVar29->RWLock).RecursionCount;
      *piVar1 = *piVar1 + -1;
    }
    if (this_00 ==
        (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)0x0) goto LAB_141fcffaa;
    if (local_210.Data.ArrayNum == 0) {
      pwVar26 = L"";
      uVar13 = uVar23;
    }
    else {
      pwVar26 = (wchar_t *)local_210.Data.AllocatorInstance.Data;
      uVar13 = local_210.Data.ArrayNum - 1;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar26);
    iVar14 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)this_00,uVar13,&local_210);
    if (iVar14 != -1) {
      lVar28 = *(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28;
      FVar32 = (FTlsAutoCleanup)(lVar28 + 0x10);
      if (lVar28 == 0) {
        FVar32 = this_01;
      }
      if (FVar32 == (FTlsAutoCleanup)0x0) goto LAB_141fcfe1e;
LAB_141fcfe71:
      if (*(int *)((longlong)FVar32 + 8) == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = *(wchar_t **)FVar32;
      }
      ::FString::operator=(&local_210,pwVar26);
      iVar24 = ::FString::Find(&local_210,L"::",2,CaseSensitive,FromStart,-1);
      if (iVar24 == -1) {
        pFVar17 = (FTlsAutoCleanup *)(**(code **)(this->_padding_ + 0x2d8))(this,local_98);
        local_78[0] = local_98[0];
        if ((FTlsAutoCleanup *)local_1f8 != pFVar17) {
          if (FVar33 != (FTlsAutoCleanup)0x0) {
            FMemory::Free((void *)FVar33);
          }
          FVar33 = *pFVar17;
          *pFVar17 = (FTlsAutoCleanup)0x0;
          iVar15 = *(int *)(pFVar17 + 1);
          local_1f0 = pFVar17[1];
          pFVar17[1] = (FTlsAutoCleanup)0x0;
          local_78[0] = local_98[0];
          local_1f8 = (undefined1  [8])FVar33;
        }
      }
      else {
        pFVar17 = (FTlsAutoCleanup *)::FString::RightChop(&local_210,&local_88,iVar24 + 2);
        local_78[0] = local_88.Data.AllocatorInstance.Data;
        if ((FTlsAutoCleanup *)local_1f8 != pFVar17) {
          if (FVar33 != (FTlsAutoCleanup)0x0) {
            FMemory::Free((void *)FVar33);
          }
          FVar33 = *pFVar17;
          *pFVar17 = (FTlsAutoCleanup)0x0;
          iVar15 = *(int *)(pFVar17 + 1);
          local_1f0 = pFVar17[1];
          pFVar17[1] = (FTlsAutoCleanup)0x0;
          local_78[0] = local_88.Data.AllocatorInstance.Data;
          local_1f8 = (undefined1  [8])FVar33;
        }
      }
      goto LAB_141fd0013;
    }
LAB_141fcfe1e:
    if (iVar15 == 0) {
      pwVar26 = L"";
    }
    else {
      iVar24 = iVar15 + -1;
      pwVar26 = (wchar_t *)FVar33;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar24,pwVar26);
    iVar24 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)this_00,uVar13,(FString *)local_1f8);
    FVar25 = this_01;
    if (iVar24 != -1) {
      FVar25 = (FTlsAutoCleanup)(*(longlong *)&this_00->field_0x0 + (longlong)iVar24 * 0x28);
    }
    FVar32 = (FTlsAutoCleanup)((longlong)FVar25 + 0x10);
    if (FVar25 == (FTlsAutoCleanup)0x0) {
      FVar32 = this_01;
    }
    if (FVar32 != (FTlsAutoCleanup)0x0) goto LAB_141fcfe71;
  }
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar27.Data = local_210.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1b0,(wchar_t *)FVar27.Data,FNAME_Find);
  FVar32 = (FTlsAutoCleanup)L"";
  if (iVar15 != 0) {
    FVar32 = FVar33;
  }
  ::FName::FName(&local_1a8,(wchar_t *)FVar32,FNAME_Find);
  local_200 = (this->Names).NumValues;
  FVar25 = this_01;
  FVar32 = this_01;
  if (0 < local_200) {
    do {
      uVar13 = FVar25._0_4_;
      if ((((int)uVar13 < 0) || ((this->Names).NumValues <= (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      uVar5 = (this->Names).TaggedNames;
      iVar15 = (this->Names).NumValues;
      if ((iVar15 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      uVar16 = uVar23;
      if ((int)uVar13 < iVar15) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      local_f8.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_f8.ArrayNum = (this->Names).NumValues;
      if ((local_f8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      TArrayView<__int64_const_,int>::operator[](&local_f8,uVar13);
      uVar6 = *(undefined8 *)((uVar5 & 0xfffffffffffffffe) + (longlong)FVar32 * 8);
      if (((uint)uVar6 == local_1b0.ComparisonIndex.Value) &&
         (FVar33 = (FTlsAutoCleanup)local_1f8, (uint)((ulonglong)uVar6 >> 0x20) == local_1b0.Number)
         ) goto LAB_141fd0690;
      if ((((int)uVar13 < 0) || ((this->Names).NumValues <= (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      uVar5 = (this->Names).TaggedNames;
      iVar15 = (this->Names).NumValues;
      if ((iVar15 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      uVar16 = uVar23;
      if ((int)uVar13 < iVar15) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      local_e8.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_e8.ArrayNum = (this->Names).NumValues;
      if ((local_e8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      TArrayView<__int64_const_,int>::operator[](&local_e8,uVar13);
      uVar6 = *(undefined8 *)((uVar5 & 0xfffffffffffffffe) + (longlong)FVar32 * 8);
      FVar33 = (FTlsAutoCleanup)local_1f8;
      if (((uint)uVar6 == local_1a8.ComparisonIndex.Value) &&
         ((uint)((ulonglong)uVar6 >> 0x20) == local_1a8.Number)) goto LAB_141fd0690;
      FVar25._0_4_ = uVar13 + 1;
      FVar25._4_4_ = 0;
      FVar32 = (FTlsAutoCleanup)((longlong)FVar32 + 1);
    } while ((longlong)FVar32 < (longlong)local_200);
    iVar15 = local_1f0._0_4_;
  }
  iVar24 = local_200;
  EVar30 = local_res18;
  if ((((local_res18 & CheckAuthoredName) != None) &&
      (pUVar20 = Z_Construct_UClass_UEnum_NoRegister(), (UClass *)this->_padding_ != pUVar20)) &&
     (FVar31 = this_01, EVar30 = local_res18, 0 < iVar24)) {
    do {
      uVar13 = FVar31._0_4_;
      (**(code **)(this->_padding_ + 0x2c8))(this,local_1c0);
      pwVar26 = local_1c0[0];
      iVar24 = (int)local_1c0[1];
      if (iVar24 == local_210.Data.ArrayNum) {
        if (1 < iVar24) {
          if (EVar10 == None) {
            iVar14 = FGenericPlatformStricmp::Stricmp
                               (local_1c0[0],(wchar_t *)local_210.Data.AllocatorInstance.Data);
            iVar24 = (int)local_1c0[1];
            bVar9 = iVar14 == 0;
            pwVar26 = local_1c0[0];
          }
          else {
            iVar14 = wcscmp(local_1c0[0],(wchar_t *)local_210.Data.AllocatorInstance.Data);
            bVar9 = iVar14 == 0;
          }
          goto LAB_141fd034c;
        }
LAB_141fd03b3:
        if (pwVar26 != (wchar_t *)0x0) {
          FMemory::Free(pwVar26);
        }
        goto LAB_141fd0690;
      }
      bVar9 = local_210.Data.ArrayNum + iVar24 == 1;
LAB_141fd034c:
      if (bVar9) goto LAB_141fd03b3;
      if (iVar24 == iVar15) {
        if (iVar24 < 2) goto LAB_141fd03b3;
        if (EVar10 == None) {
          iVar24 = FGenericPlatformStricmp::Stricmp(pwVar26,(wchar_t *)FVar33);
          pwVar26 = local_1c0[0];
        }
        else {
          iVar24 = wcscmp(pwVar26,(wchar_t *)FVar33);
        }
        bVar9 = iVar24 == 0;
      }
      else {
        bVar9 = iVar24 + iVar15 == 1;
      }
      if (bVar9) goto LAB_141fd03b3;
      if (pwVar26 != (wchar_t *)0x0) {
        FMemory::Free(pwVar26);
      }
      FVar31._0_4_ = uVar13 + 1;
      FVar31._4_4_ = 0;
      EVar30 = local_res18;
    } while ((int)FVar31._0_4_ < local_200);
  }
  pFVar19 = local_res10;
  iVar15 = (local_res10->Data).ArrayNum;
  if (iVar15 == local_210.Data.ArrayNum) {
    if (1 < iVar15) {
      pFVar2 = (local_res10->Data).AllocatorInstance.Data;
      if (EVar10 == None) {
        iVar15 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)pFVar2,(wchar_t *)local_210.Data.AllocatorInstance.Data);
      }
      else {
        iVar15 = wcscmp((wchar_t *)pFVar2,(wchar_t *)local_210.Data.AllocatorInstance.Data);
      }
      bVar9 = iVar15 == 0;
      goto LAB_141fd0417;
    }
LAB_141fd0495:
    FVar32 = this_01;
    if (((EVar30 & ErrorIfNotFound) == None) || ((pFVar19->Data).ArrayNum < 2)) {
LAB_141fd0502:
      bVar9 = false;
    }
    else {
      local_190.ComparisonIndex.Value = 0;
      local_190.Number = 0;
      pFVar21 = ::FName::ToString(&local_190,&local_68);
      iVar15 = (pFVar19->Data).ArrayNum;
      iVar24 = (pFVar21->Data).ArrayNum;
      if (iVar15 == iVar24) {
        if (iVar15 < 2) {
          FVar32 = (FTlsAutoCleanup)0x1;
          goto LAB_141fd0502;
        }
        pFVar2 = (pFVar21->Data).AllocatorInstance.Data;
        _Str1 = (pFVar19->Data).AllocatorInstance.Data;
        if (EVar10 == None) {
          iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)_Str1,(wchar_t *)pFVar2);
        }
        else {
          iVar15 = wcscmp((wchar_t *)_Str1,(wchar_t *)pFVar2);
        }
        bVar9 = iVar15 == 0;
      }
      else {
        bVar9 = iVar24 + iVar15 == 1;
      }
      FVar32 = (FTlsAutoCleanup)0x1;
      if (bVar9) goto LAB_141fd0502;
      bVar9 = true;
    }
    if ((FVar32 != (FTlsAutoCleanup)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (!bVar9) goto LAB_141fd068b;
    puVar22 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_d0 = &local_1e8;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar17 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar22);
    if (pFVar17[0x2f] != (FTlsAutoCleanup)0x0) {
      this_01 = *(FTlsAutoCleanup *)((longlong)pFVar17[0x2f] + 0x30);
    }
    if ((byte)LogEnum._0_1_ < 3) goto LAB_141fd068b;
    local_150 = (FName)this->_padding_;
    ::FName::ToString(&local_150,&local_118);
    if (this_01 == (FTlsAutoCleanup)0x0) {
      puVar22 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_c0 = local_1e7;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar17 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar22);
      this_01 = pFVar17[6];
      if (this_01 != (FTlsAutoCleanup)0x0) goto LAB_141fd062c;
      ::FString::FString(&local_188,L"None");
    }
    else {
LAB_141fd062c:
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_188,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnum);
    local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
      local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar9 = local_210.Data.ArrayNum + iVar15 == 1;
LAB_141fd0417:
    if (bVar9) goto LAB_141fd0495;
    if ((byte)LogEnum._0_1_ < 3) goto LAB_141fd068b;
    local_158 = (FName)this->_padding_;
    ::FName::ToString(&local_158,&local_128);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnum);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_141fd068b:
  uVar13 = 0xffffffff;
LAB_141fd0690:
  if (FVar33 != (FTlsAutoCleanup)0x0) {
    FMemory::Free((void *)FVar33);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  return uVar13;
}

// GetIndexByValue @ 141fd06d0

int __thiscall UEnum::GetIndexByValue(UEnum *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long64 *plVar5;
  uint uVar6;
  TArrayView<__int64_const_,int> local_18;
  
  uVar6 = 0;
  if (0 < (this->Names).NumValues) {
    do {
      if ((((int)uVar6 < 0) || ((this->Names).NumValues <= (int)uVar6)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = (this->Names).NumValues;
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar4 = 0;
      if ((int)uVar6 < iVar3) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      local_18.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_18.ArrayNum = (this->Names).NumValues;
      if ((local_18.ArrayNum < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      plVar5 = TArrayView<__int64_const_,int>::operator[](&local_18,uVar6);
      if (*plVar5 == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->Names).NumValues);
  }
  return -1;
}

// GetMaxEnumValue @ 141fd1500

long64 __cdecl
UEnum::GetMaxEnumValue
          (TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> *param_1,EEnumFlags param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 & Flags) == None) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
    uVar12 = 1;
    uVar7 = *(ulonglong *)((param_1->AllocatorInstance).Data + 8);
    if (1 < lVar10) {
      lVar11 = 0x10;
      lVar10 = lVar10 + -1;
      uVar9 = uVar7;
      do {
        uVar5 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          lVar6 = (*pcVar3)();
          return lVar6;
        }
        uVar7 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar11 + 8);
        if ((longlong)uVar7 <= (longlong)uVar9) {
          uVar7 = uVar9;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x10;
        lVar10 = lVar10 + -1;
        uVar9 = uVar7;
      } while (lVar10 != 0);
    }
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar8 + lVar10 * 0x10;
    uVar9 = 0;
    while( true ) {
      uVar7 = uVar9;
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<TTuple<FName,__int64>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar8 == pFVar13) break;
      uVar2 = *(ulonglong *)(pFVar8 + 8);
      pFVar8 = pFVar8 + 0x10;
      uVar9 = uVar2 | uVar7;
      if ((uVar2 - 1 & uVar2) != 0) {
        uVar9 = uVar7;
      }
    }
  }
  return uVar7;
}

// GetMaxEnumValue @ 141fd1660

long64 __thiscall UEnum::GetMaxEnumValue(UEnum *this)

{
  long64 lVar1;
  
  lVar1 = UE::GetMaxEnumValue<UEnum::FNameData>(&this->Names,this->EnumFlags);
  return lVar1;
}

// GetNameByIndex @ 141fd17b0

FName __thiscall UEnum::GetNameByIndex(UEnum *this,int param_1)

{
  TTuple<FName,__int64> *pTVar1;
  uint in_register_00000014;
  FName FVar2;
  int in_R8D;
  TTuple<FName,__int64> local_18;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  if ((-1 < in_R8D) && (in_R8D < (this->Names).NumValues)) {
    pTVar1 = FNameData::operator[](&this->Names,&local_18,in_R8D);
    *(undefined8 *)FVar2 = *(undefined8 *)pTVar1;
    return FVar2;
  }
  *(undefined8 *)FVar2 = 0;
  return FVar2;
}

// GetNameByValue @ 141fd1800

FName __thiscall UEnum::GetNameByValue(UEnum *this,long64 param_1)

{
  int iVar1;
  longlong in_R8;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = (this->Names).NumValues;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(((this->Names).TaggedValues & 0xfffffffffffffffe) + uVar3 * 8) == in_R8) {
        *(undefined8 *)param_1 =
             *(undefined8 *)(((this->Names).TaggedNames & 0xfffffffffffffffe) + uVar3 * 8);
        return (FName)param_1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < iVar1);
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetNameStringByIndex @ 141fd1870

FString * __thiscall
UEnum::GetNameStringByIndex(UEnum *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TTuple<FName,__int64> *pTVar2;
  FName local_res8;
  FString local_28;
  TTuple<FName,__int64> local_18;
  
  if ((-1 < param_1) && (param_1 < (this->Names).NumValues)) {
    pTVar2 = FNameData::operator[](&this->Names,&local_18,param_1);
    local_res8.ComparisonIndex.Value = *(uint *)&pTVar2->field_0x0;
    local_res8.Number = *(uint *)&pTVar2->field_0x4;
    if (this->CppForm == Regular) {
      ::FName::ToString(&local_res8,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    ::FName::ToString(&local_res8,&local_28);
    iVar1 = ::FString::Find(&local_28,L"::",2,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      ::FString::RightChop(&local_28,__return_storage_ptr__,iVar1 + 2);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNameStringByValue @ 141fd1970

FString * __thiscall
UEnum::GetNameStringByValue(UEnum *this,FString *__return_storage_ptr__,long64 param_1)

{
  int iVar1;
  
  iVar1 = GetIndexByValue(this,param_1);
  GetNameStringByIndex(this,__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// GetValueByIndex @ 141fd3430

long64 __thiscall UEnum::GetValueByIndex(UEnum *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  TTuple<FName,__int64> *pTVar4;
  TTuple<FName,__int64> local_18;
  
  if ((param_1 < 0) || ((this->Names).NumValues <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xb2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  pTVar4 = FNameData::operator[](&this->Names,&local_18,param_1);
  return *(long64 *)&pTVar4->field_0x8;
}

// GetValueByName @ 141fd34a0

long64 __thiscall UEnum::GetValueByName(UEnum *this,FName param_1,EGetByNameFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  TTuple<FName,__int64> *pTVar5;
  TTuple<FName,__int64> local_18;
  
  iVar3 = GetIndexByName(this,param_1,param_2);
  if (iVar3 == -1) {
    return -1;
  }
  if ((iVar3 < 0) || ((this->Names).NumValues <= iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xb2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  pTVar5 = FNameData::operator[](&this->Names,&local_18,iVar3);
  return *(long64 *)&pTVar5->field_0x8;
}

// GetValueByNameString @ 141fd3520

long64 __thiscall UEnum::GetValueByNameString(UEnum *this,FString *param_1,EGetByNameFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  TTuple<FName,__int64> *pTVar5;
  TTuple<FName,__int64> local_18;
  
  iVar3 = GetIndexByNameString(this,param_1,param_2);
  if (iVar3 == -1) {
    return -1;
  }
  if ((iVar3 < 0) || ((this->Names).NumValues <= iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xb2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  pTVar5 = FNameData::operator[](&this->Names,&local_18,iVar3);
  return *(long64 *)&pTVar5->field_0x8;
}

// GetValueOrBitfieldAsAuthoredNameString @ 141fd35b0

FString * __thiscall
UEnum::GetValueOrBitfieldAsAuthoredNameString
          (UEnum *this,FString *__return_storage_ptr__,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  FString local_28;
  void *local_18 [2];
  
  if (((this->EnumFlags & Flags) != None) && (param_1 != 0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    do {
      lVar1 = 0;
      if (param_1 != 0U) {
        for (; ((ulonglong)param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      bVar3 = 0;
      if (param_1 != 0U) {
        bVar3 = (byte)lVar1;
      }
      uVar4 = 1L << (bVar3 & 0x3f);
      param_1 = param_1 & ~uVar4;
      iVar2 = GetIndexByValue(this,uVar4);
      (**(code **)(this->_padding_ + 0x2c8))(this,local_18,iVar2);
      ::FString::AppendfImpl(&local_28,L"%s%s");
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    } while (param_1 != 0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  iVar2 = GetIndexByValue(this,param_1);
  (**(code **)(this->_padding_ + 0x2c8))(this,__return_storage_ptr__,iVar2);
  return __return_storage_ptr__;
}

// GetValueOrBitfieldAsDisplayNameText @ 141fd3700

FText * __thiscall
UEnum::GetValueOrBitfieldAsDisplayNameText(UEnum *this,FText *__return_storage_ptr__,long64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  FString local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FText local_38;
  
  if (((this->EnumFlags & Flags) == None) || (param_1 == 0)) {
    iVar2 = GetIndexByValue(this,param_1);
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_38,iVar2);
    pFVar3 = FText::ToString(&local_38);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    lVar6 = (longlong)local_68.Data.ArrayNum;
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar1,lVar6 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    do {
      lVar6 = 0;
      if (param_1 != 0U) {
        for (; ((ulonglong)param_1 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
        }
      }
      bVar4 = 0;
      if (param_1 != 0U) {
        bVar4 = (byte)lVar6;
      }
      uVar5 = 1L << (bVar4 & 0x3f);
      param_1 = param_1 & ~uVar5;
      iVar2 = GetIndexByValue(this,uVar5);
      (**(code **)(this->_padding_ + 0x2c0))(this,&local_38,iVar2);
      pFVar3 = FText::ToString(&local_38);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = (pFVar3->Data).ArrayNum;
      lVar6 = (longlong)local_50;
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_50,0,&local_58,local_50,&local_4c);
        memcpy(local_58.Data,pFVar1,lVar6 * 2);
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      ::FString::AppendfImpl(&local_48,L"%s%s");
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    } while (param_1 != 0);
    local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_48.Data.ArrayNum;
    local_68.Data.ArrayMax = local_48.Data.ArrayMax;
  }
  FText::FromString(__return_storage_ptr__,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueOrBitfieldAsString @ 141fd3960

FString * __thiscall
UEnum::GetValueOrBitfieldAsString(UEnum *this,FString *__return_storage_ptr__,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  FString local_28;
  FString local_18;
  
  if (((this->EnumFlags & Flags) != None) && (param_1 != 0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    do {
      lVar1 = 0;
      if (param_1 != 0U) {
        for (; ((ulonglong)param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      bVar3 = 0;
      if (param_1 != 0U) {
        bVar3 = (byte)lVar1;
      }
      uVar4 = 1L << (bVar3 & 0x3f);
      param_1 = param_1 & ~uVar4;
      iVar2 = GetIndexByValue(this,uVar4);
      GetNameStringByIndex(this,&local_18,iVar2);
      ::FString::AppendfImpl(&local_28,L"%s%s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    } while (param_1 != 0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  iVar2 = GetIndexByValue(this,param_1);
  GetNameStringByIndex(this,__return_storage_ptr__,iVar2);
  return __return_storage_ptr__;
}

// GetValueOrBitfieldFromString @ 141fd3a90

long64 __thiscall
UEnum::GetValueOrBitfieldFromString
          (UEnum *this,TStringView<wchar_t> *param_1,EGetByNameFlags param_2)

{
  long64 lVar1;
  long64 local_res8 [2];
  char local_res18 [16];
  TStringView<wchar_t> local_58;
  code *local_48;
  UEnum **local_40;
  TStringView<wchar_t> local_38;
  UEnum *local_28;
  char *local_20;
  long64 *local_18;
  EGetByNameFlags local_10;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_20 = local_res18;
  local_58.Size = 1;
  local_18 = local_res8;
  local_40 = &local_28;
  local_res18[0] = '\x01';
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnum::GetValueOrBitfieldFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_res8[0] = 0;
  local_58.DataPtr = L"|";
  local_28 = this;
  local_10 = param_2;
  UE::String::ParseTokens
            (&local_38,&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_48,
             Trim|SkipEmpty);
  lVar1 = -1;
  if (local_res18[0] != '\0') {
    lVar1 = local_res8[0];
  }
  return lVar1;
}

// IsValidEnumName @ 141fd5e30

bool __thiscall UEnum::IsValidEnumName(UEnum *this,FName param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  TArrayView<__int64_const_,int> local_28;
  
  lVar8 = (longlong)(this->Names).NumValues;
  uVar7 = 0;
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      if ((((int)uVar7 < 0) || ((this->Names).NumValues <= (int)uVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar2 = (this->Names).TaggedNames;
      iVar1 = (this->Names).NumValues;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_28.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_28.ArrayNum = (this->Names).NumValues;
      if ((local_28.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TArrayView<__int64_const_,int>::operator[](&local_28,uVar7);
      if (*(FName *)((uVar2 & 0xfffffffffffffffe) + lVar9 * 8) == param_1) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  return false;
}

// IsValidEnumValue @ 141fd5fa0

bool __thiscall UEnum::IsValidEnumValue(UEnum *this,long64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  long64 *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  TArrayView<__int64_const_,int> local_28;
  
  lVar9 = (longlong)(this->Names).NumValues;
  uVar7 = 0;
  if (0 < lVar9) {
    lVar8 = 0;
    do {
      if ((((int)uVar7 < 0) || ((this->Names).NumValues <= (int)uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar1 = (this->Names).NumValues;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = 0;
      if ((int)uVar7 < iVar1) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_28.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_28.ArrayNum = (this->Names).NumValues;
      if ((local_28.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar6 = TArrayView<__int64_const_,int>::operator[](&local_28,uVar7);
      if (*plVar6 == param_1) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar9);
  }
  return false;
}

// IsValidEnumValueOrBitfield @ 141fd6100

bool __thiscall UEnum::IsValidEnumValueOrBitfield(UEnum *this,long64 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<__int64_const_,int> local_28;
  
  if ((this->EnumFlags & Flags) == None) {
    bVar5 = IsValidEnumValue(this,param_1);
    return bVar5;
  }
  uVar9 = 0;
  if (param_1 != 0) {
    iVar1 = (this->Names).NumValues;
    lVar10 = 0;
    do {
      if (lVar10 == iVar1 + -1) {
        return false;
      }
      if ((((int)uVar9 < 0) || ((this->Names).NumValues <= (int)uVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd78,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar2 = (this->Names).NumValues;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = 0;
      if ((int)uVar9 < iVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_28.DataPtr = (long64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
      local_28.ArrayNum = (this->Names).NumValues;
      if ((local_28.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      puVar8 = (ulonglong *)TArrayView<__int64_const_,int>::operator[](&local_28,uVar9);
      uVar3 = *puVar8;
      if ((uVar3 & uVar3 - 1) == 0) {
        param_1 = param_1 & ~uVar3;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while (param_1 != 0);
  }
  return true;
}

// LookupAllEnumNamesWithOptions @ 141fd6ab0

UEnum * __cdecl
UEnum::LookupAllEnumNamesWithOptions
          (FName param_1,EFindFirstObjectOptions param_2,TFunctionRef<bool___cdecl(FName)> *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
  *pTVar4;
  bool bVar5;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *pTVar6;
  UEnum *pUVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  char local_res10 [8];
  int local_res18;
  UEnum *local_res20;
  EFindFirstObjectOptions local_c8 [2];
  TFunctionRef<bool___cdecl(FName)> *local_c0;
  char *local_b8;
  TMap<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  uStack_a8 = 0;
  local_res20 = (UEnum *)0x0;
  local_b8 = local_res10;
  local_res10[0] = '\0';
  local_c8[0] = param_2;
  local_c0 = param_3;
  if (param_1 != (FName)0x0) {
    pTVar6 = TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
             ::Find((TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
                     *)&AllEnumNames,param_1);
    if (pTVar6 != (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                   *)0x0) {
      `UEnum::LookupAllEnumNamesWithOptions'::__l2::<lambda_1>::operator()
                (local_c8,&local_res20,param_1,pTVar6);
    }
    return local_res20;
  }
  local_90 = 0;
  uStack_a4 = 1;
  uVar12 = AllEnumNames._40_4_;
  uStack_94 = uStack_a8;
  if (uVar12 != 0) {
    puVar14 = (uint *)&AllEnumNames.field_0x10;
    if (AllEnumNames._32_8_ != 0) {
      puVar14 = (uint *)AllEnumNames._32_8_;
    }
    uVar11 = *puVar14;
    local_90 = 0;
    uStack_a8 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)(int)uStack_a8;
      local_90 = local_90 + 0x20;
      uStack_a8 = uStack_a8 + 1;
      uStack_94 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a8)
      goto LAB_141fd6bcd;
      uVar11 = puVar14[lVar8 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uStack_94 = (local_90 - 1) + local_res18;
    if ((int)uVar12 < (int)uStack_94) {
      uStack_94 = uVar12;
    }
  }
LAB_141fd6bcd:
  bVar3 = AllEnumNames._40_1_;
  iStack_88 = AllEnumNames._8_4_ - AllEnumNames._52_4_;
  uVar11 = uVar12 & 0xffffffe0;
  local_b0 = &AllEnumNames;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,uStack_a8);
  local_a0 = 0x154b88ba0;
  TStack_78.CurrentBitIndex = uStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  local_80 = &AllEnumNames;
  iVar10 = (int)uVar12 >> 5;
  TStack_78._28_4_ = uStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&AllEnumNames.field_0x10;
  uVar13 = uVar12;
  uStack_8c = uStack_94;
  if ((int)uVar12 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UEnum *)(*pcVar2)();
      return pUVar7;
    }
    uVar13 = AllEnumNames._40_4_;
  }
  if (uVar12 != uVar13) {
    lVar8 = 0x154b88ba0;
    if (AllEnumNames._32_8_ != 0) {
      lVar8 = AllEnumNames._32_8_;
    }
    uVar12 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_141fd6cf0;
      uVar12 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
  }
LAB_141fd6cf0:
  while( true ) {
    pTVar4 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((((TStack_78.CurrentBitIndex == uVar12) &&
         (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&AllEnumNames.field_0x10)) &&
        (pTVar4 == &AllEnumNames)) ||
       (((lVar8 = *(longlong *)pTVar4,
         `UEnum::LookupAllEnumNamesWithOptions'::__l2::<lambda_1>::operator()
                   (local_c8,&local_res20,
                    *(FName *)((longlong)TStack_78.CurrentBitIndex * 0x60 + lVar8),
                    (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                     *)(lVar8 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x60)),
         local_res20 != (UEnum *)0x0 && (local_res10[0] != '\0')) &&
        ((param_2 & EnsureIfAmbiguous) == None)))) break;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return local_res20;
}

// LookupEnumName @ 141fd6d90

long64 __cdecl
UEnum::LookupEnumName(FName param_1,FName param_2,EFindFirstObjectOptions param_3,UEnum **param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FName,UEnum_*> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  UEnum *this_00;
  long64 lVar12;
  TTuple<FName,__int64> *pTVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  FName local_90;
  TMap<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  code *local_58;
  FName *local_50;
  TTuple<FName,__int64> local_48;
  
  AcquireSRWLockShared((PSRWLOCK)&AllEnumNamesLock);
  this_00 = (UEnum *)0x0;
  if (param_1 == (FName)0x0) {
    if (param_3 == None) {
      iVar14 = 0;
      iVar8 = 0;
      uVar6 = 1;
      uVar16 = AllEnumNames._40_4_;
      uVar7 = 0;
      if (uVar16 != 0) {
        puVar15 = (uint *)&AllEnumNames.field_0x10;
        if (AllEnumNames._32_8_ != 0) {
          puVar15 = (uint *)AllEnumNames._32_8_;
        }
        uVar7 = *puVar15;
        while (uVar7 == 0) {
          lVar10 = (longlong)iVar14;
          iVar8 = iVar8 + 0x20;
          iVar14 = iVar14 + 1;
          uVar7 = uVar16;
          if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar14)
          goto LAB_141fd6eae;
          uVar7 = puVar15[lVar10 + 1];
        }
        uVar6 = -uVar7 & uVar7;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = iVar8 + -1 + (int)lVar10;
        if ((int)uVar16 < (int)uVar7) {
          uVar7 = uVar16;
        }
      }
LAB_141fd6eae:
      bVar3 = AllEnumNames._40_1_;
      uVar17 = uVar16 & 0xffffffe0;
      TStack_80.CurrentBitIndex = uVar7;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uVar6,iVar14);
      local_88 = &AllEnumNames;
      iVar14 = (int)uVar16 >> 5;
      TStack_80._28_4_ = uVar7;
      TStack_80.BaseBitIndex = iVar8;
      uStack_60 = CONCAT44(uStack_9c,AllEnumNames._8_4_ - AllEnumNames._52_4_);
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&AllEnumNames.field_0x10;
      uVar7 = uVar16;
      if ((int)uVar16 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          lVar12 = (*pcVar2)();
          return lVar12;
        }
        uVar7 = AllEnumNames._40_4_;
      }
      if (uVar16 != uVar7) {
        lVar10 = 0x154b88ba0;
        if (AllEnumNames._32_8_ != 0) {
          lVar10 = AllEnumNames._32_8_;
        }
        uVar16 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar11 = (longlong)iVar14;
          uVar17 = uVar17 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar7;
          if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar14)
          goto LAB_141fd6fd0;
          uVar16 = *(uint *)(lVar10 + 4 + lVar11 * 4);
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar16 = (int)lVar10 + -1 + uVar17;
        if ((int)uVar7 < (int)uVar16) {
          uVar16 = uVar7;
        }
      }
LAB_141fd6fd0:
      do {
        pTVar4 = local_88;
        if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_80.CurrentBitIndex == uVar16) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&AllEnumNames.field_0x10))
           && (pTVar4 == &AllEnumNames)) goto LAB_141fd706f;
        pTVar9 = TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
                         *)((longlong)TStack_80.CurrentBitIndex * 0x60 + *(longlong *)pTVar4 + 8),
                        param_2);
        if (pTVar9 == (TTuple<FName,UEnum_*> *)0x0) {
          this_00 = (UEnum *)0x0;
        }
        else {
          this_00 = *(UEnum **)&pTVar9->field_0x8;
          if (this_00 != (UEnum *)0x0) goto LAB_141fd706f;
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      } while( true );
    }
  }
  else if (param_3 == None) {
    this = (TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
            *)TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
              ::Find((TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
                      *)&AllEnumNames,param_1);
    if ((this != (TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
                  *)0x0) &&
       (pTVar9 = TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
                 ::Find(this,param_2), pTVar9 != (TTuple<FName,UEnum_*> *)0x0)) {
      this_00 = *(UEnum **)&pTVar9->field_0x8;
    }
    goto LAB_141fd706f;
  }
  local_50 = &local_90;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnum::LookupEnumName'::__l22::<lambda_1>,bool,FName>::Call;
  local_90 = param_2;
  this_00 = LookupAllEnumNamesWithOptions
                      (param_1,param_3,(TFunctionRef<bool___cdecl(FName)> *)&local_58);
LAB_141fd706f:
  if (param_4 != (UEnum **)0x0) {
    *param_4 = this_00;
  }
  if ((this_00 == (UEnum *)0x0) || (iVar8 = GetIndexByName(this_00,param_2,None), iVar8 == -1)) {
    lVar12 = -1;
  }
  else {
    if (((iVar8 < 0) || ((this_00->Names).NumValues <= iVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      lVar12 = (*pcVar2)();
      return lVar12;
    }
    pTVar13 = FNameData::operator[](&this_00->Names,&local_48,iVar8);
    lVar12 = *(long64 *)&pTVar13->field_0x8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&AllEnumNamesLock);
  return lVar12;
}

// LookupEnumNameSlow @ 141fd7120

long64 __cdecl
UEnum::LookupEnumNameSlow
          (FName param_1,wchar_t *param_2,EFindFirstObjectOptions param_3,UEnum **param_4)

{
  FString *pFVar1;
  UEnum *this;
  FName *pFVar2;
  long64 lVar3;
  FName local_res20;
  FName local_48;
  FName local_40;
  FString *local_38;
  undefined1 local_30 [16];
  FString local_20;
  
  AcquireSRWLockShared((PSRWLOCK)&AllEnumNamesLock);
  ::FName::FName(&local_res20,param_2);
  pFVar1 = ::FString::FString((FString *)local_30,L"::");
  ::FString::ConcatFC(&local_20,pFVar1,param_2);
  if ((FScriptContainerElement *)local_30._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_30._0_8_);
  }
  local_40 = local_res20;
  local_38 = &local_20;
  local_30._8_8_ = &local_40;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEnum::LookupEnumNameSlow'::__l2::<lambda_1>,bool,FName>::Call;
  this = LookupAllEnumNamesWithOptions
                   (param_1,param_3,(TFunctionRef<bool___cdecl(FName)> *)local_30);
  if (param_4 != (UEnum **)0x0) {
    *param_4 = this;
  }
  if (this == (UEnum *)0x0) {
    lVar3 = -1;
  }
  else {
    pFVar2 = ::FName::FName(&local_48,param_2);
    lVar3 = GetValueByName(this,*pFVar2,None);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockShared((PSRWLOCK)&AllEnumNamesLock);
  return lVar3;
}

// ParseEnum @ 141fd8c00

long64 __cdecl UEnum::ParseEnum(wchar_t **param_1)

{
  bool bVar1;
  long64 lVar2;
  ForAnyElementType FVar3;
  wchar_t *local_res8;
  FName local_res10;
  FString local_18;
  
  local_res8 = *param_1;
  lVar2 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FParse::AlnumToken(&local_res8,&local_18);
  if (bVar1) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,(wchar_t *)FVar3.Data,FNAME_Find);
    lVar2 = LookupEnumName((FName)0x0,local_res10,None,(UEnum **)0x0);
    if (lVar2 != -1) {
      *param_1 = local_res8;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return lVar2;
}

// RemoveNamesFromPrimaryList @ 141fe2180

void __thiscall UEnum::RemoveNamesFromPrimaryList(UEnum *this)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,UEnum_*> *pTVar7;
  UEnum *pUVar8;
  FName *pFVar9;
  FName local_res8;
  FName local_res10;
  
  AcquireSRWLockExclusive((PSRWLOCK)&AllEnumNamesLock);
  this_00 = (TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
               ::Find((TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
                       *)&AllEnumNames,this->EnumPackage);
  if (this_00 !=
      (TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
       *)0x0) {
    iVar2 = (this->Names).NumValues;
    pFVar9 = (FName *)((this->Names).TaggedNames & 0xfffffffffffffffe);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar9 + iVar2;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      FVar3 = *pFVar9;
      pTVar7 = TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
               ::Find(this_00,FVar3);
      pUVar8 = (UEnum *)0x0;
      if (pTVar7 != (TTuple<FName,UEnum_*> *)0x0) {
        pUVar8 = *(UEnum **)&pTVar7->field_0x8;
      }
      if ((pUVar8 == this) &&
         (local_res8 = FVar3,
         *(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
        uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        TSet<TTuple<FName,UEnum_*>,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>(this_00,uVar6 + FVar3.Number,&local_res8);
      }
    }
    if ((*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) &&
       (FVar3 = this->EnumPackage, local_res10 = FVar3, AllEnumNames._8_4_ != AllEnumNames._52_4_))
    {
      uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>,FDefaultSetAllocator>
                           *)&AllEnumNames,FVar3.Number + uVar6,&local_res10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141fe22c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&AllEnumNamesLock);
  return;
}

// RenameNamesAfterDuplication @ 141fe2ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UEnum::RenameNamesAfterDuplication(UEnum *this)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FName,__int64> *pTVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FName *this_00;
  int iVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  TTuple<FName,__int64> local_38;
  
  iVar4 = (this->Names).NumValues;
  if (iVar4 != 0) {
    iVar11 = iVar4 + -1;
    if ((iVar11 < 0) || (iVar4 <= iVar11)) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
    else {
      pTVar6 = FNameData::operator[](&this->Names,&local_38,iVar11);
      local_res8.ComparisonIndex.Value = *(uint *)&pTVar6->field_0x0;
      local_res8.Number = *(uint *)&pTVar6->field_0x4;
    }
    ::FName::ToString(&local_res8,&local_68);
    iVar4 = ::FString::Find(&local_68,L"::",2,CaseSensitive,FromStart,-1);
    if ((iVar4 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DoubleColonPos != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                           ,0x125,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    iVar5 = iVar11;
    if (iVar4 < iVar11) {
      iVar5 = iVar4;
    }
    iVar10 = 0;
    if (0 < iVar5) {
      iVar10 = iVar5;
    }
    ::FString::RemoveAt(&local_68,iVar10,iVar11 - iVar4,No);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    iVar4 = (this->Names).NumValues;
    this_00 = (FName *)((this->Names).TaggedNames & 0xfffffffffffffffe);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this_00 + iVar4;
    for (; this_00 != pFVar1; this_00 = this_00 + 1) {
      ::FName::ToString(this_00,&local_58);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar9.Data = local_48.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(&local_58,(wchar_t *)FVar8.Data,(wchar_t *)FVar9.Data,IgnoreCase);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(local_res18,(wchar_t *)FVar9.Data);
      *this_00 = *pFVar7;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ResolveEnumerator @ 141fe2f90

long64 __thiscall UEnum::ResolveEnumerator(UEnum *this,FArchive *param_1,long64 param_2)

{
  return param_2;
}

// Serialize @ 141fe8190

void __thiscall UEnum::Serialize(UEnum *this,FArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulong64 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  TTuple<FName,__int64> *pTVar18;
  FArchive *local_res10;
  ECppForm local_res18 [8];
  undefined1 local_res20 [8];
  uint local_98;
  uint local_94;
  uint local_90 [4];
  TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> local_80;
  TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> local_70;
  TArray<FName,TSizedDefaultAllocator<32>_> local_60;
  undefined8 local_50;
  ulong64 local_48 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  UField::Serialize((UField *)this,param_1);
  uVar11 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    plVar9 = *(longlong **)&param_1->field_0x8;
    local_90[0] = (this->Names).NumValues;
    if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_90);
      }
    }
    else {
      local_90[0] = *(uint *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    local_res10 = (FArchive *)&param_1->field_0x2a;
    puVar14 = (ulong64 *)((this->Names).TaggedValues & 0xfffffffffffffffe);
    uVar6 = (this->Names).NumValues;
    if (0 < (int)uVar6) {
      lVar17 = ((this->Names).TaggedNames & 0xfffffffffffffffe) - (longlong)puVar14;
      uVar11 = (ulonglong)uVar6;
      do {
        local_50 = *(undefined8 *)((longlong)puVar14 + lVar17);
        local_48[0] = *puVar14;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_50);
        plVar9 = *(longlong **)&param_1->field_0x8;
        if ((ulong64 *)plVar9[1] < (ulong64 *)*plVar9 + 1) {
          if ((*(byte *)local_res10 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_48,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_48);
          }
        }
        else {
          local_48[0] = *(ulong64 *)*plVar9;
          *plVar9 = *plVar9 + 8;
        }
        puVar14 = puVar14 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (*(int *)&param_1->field_0x40 < 0x1cf) {
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ArrayNum = 0;
      local_60.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_60);
      if (((this->Names).NumValues != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumValues == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                             ,0x5b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->Names).NumValues = local_60.ArrayNum;
      pvVar8 = FMemory::Malloc((longlong)local_60.ArrayNum << 3,0);
      (this->Names).TaggedNames = (ulonglong)pvVar8 | 1;
      plVar9 = FMemory::Malloc((longlong)local_60.ArrayNum << 3,0);
      (this->Names).TaggedValues = (ulonglong)plVar9 | 1;
      FVar12.Data = local_60.AllocatorInstance.Data;
      if (0 < (this->Names).NumValues) {
        plVar16 = plVar9;
        do {
          uVar13 = (uint)uVar11;
          uVar6 = 0;
          if ((int)uVar13 < local_60.ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)(((longlong)pvVar8 - (longlong)plVar9) + (longlong)plVar16) =
               *(undefined8 *)
                (((longlong)local_60.AllocatorInstance.Data - (longlong)plVar9) + (longlong)plVar16)
          ;
          uVar11 = (ulonglong)(uVar13 + 1);
          *plVar16 = (longlong)(int)uVar13;
          plVar16 = plVar16 + 1;
          FVar12.Data = local_60.AllocatorInstance.Data;
        } while ((int)(uVar13 + 1) < (this->Names).NumValues);
      }
    }
    else {
      iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
      if (iVar7 < 2) {
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        TArrayPrivateFriend::Serialize<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>
                  (param_1,&local_70);
        if (((this->Names).NumValues != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumValues == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                               ,0x69,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->Names).NumValues = local_70.ArrayNum;
        pvVar8 = FMemory::Malloc((longlong)local_70.ArrayNum << 3,0);
        (this->Names).TaggedNames = (ulonglong)pvVar8 | 1;
        puVar10 = FMemory::Malloc((longlong)local_70.ArrayNum << 3,0);
        (this->Names).TaggedValues = (ulonglong)puVar10 | 1;
        FVar12.Data = local_70.AllocatorInstance.Data;
        if (0 < (this->Names).NumValues) {
          lVar17 = (longlong)pvVar8 - (longlong)puVar10;
          uVar15 = uVar11;
          do {
            uVar13 = (uint)uVar11;
            uVar6 = 0;
            if ((int)uVar13 < local_70.ArrayNum) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined8 *)(lVar17 + (longlong)puVar10) =
                 *(undefined8 *)(local_70.AllocatorInstance.Data + uVar15);
            uVar6 = 0;
            if ((int)uVar13 < local_70.ArrayNum) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar11 = (ulonglong)(uVar13 + 1);
            lVar3 = uVar15 + 8;
            uVar15 = uVar15 + 0xc;
            *puVar10 = (ulonglong)(byte)local_70.AllocatorInstance.Data[lVar3];
            puVar10 = puVar10 + 1;
            FVar12.Data = local_70.AllocatorInstance.Data;
          } while ((int)(uVar13 + 1) < (this->Names).NumValues);
        }
      }
      else {
        plVar9 = *(longlong **)&param_1->field_0x8;
        local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.ArrayNum = 0;
        local_80.ArrayMax = 0;
        local_98 = 0;
        if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_98);
          }
        }
        else {
          local_98 = *(uint *)*plVar9;
          *plVar9 = *plVar9 + 4;
        }
        lVar17 = (longlong)(int)local_98;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,local_98,&local_80.AllocatorInstance,&local_80.ArrayNum,
                           &local_80.ArrayMax);
        memset(local_80.AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,lVar17 << 4);
        iVar7 = local_80.ArrayNum;
        uVar11 = (ulonglong)local_80.ArrayNum;
        pTVar18 = (TTuple<FName,__int64> *)(local_80.AllocatorInstance.Data + uVar11 * 0x10);
        FVar12.Data = local_80.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar7) {
            `TCheckedPointerIterator<TTuple<FName,__int64>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if ((TTuple<FName,__int64> *)FVar12.Data == pTVar18) break;
          operator<<<FName,__int64>(param_1,(TTuple<FName,__int64> *)FVar12.Data);
          uVar11 = local_80._8_8_ & 0xffffffff;
          FVar12.Data = FVar12.Data + 0x10;
        }
        FNameData::Initialize(&this->Names,&local_80);
        FVar12.Data = local_80.AllocatorInstance.Data;
      }
    }
    local_res10 = param_1;
    if ((TTuple<FName,__int64> *)FVar12.Data != (TTuple<FName,__int64> *)0x0) {
      FMemory::Free(FVar12.Data);
    }
  }
  if (*(int *)&param_1->field_0x40 < 0x186) {
    puVar10 = *(ulonglong **)&param_1->field_0x8;
    piVar1 = (int *)*puVar10 + 1;
    if ((int *)puVar10[1] < piVar1) {
      local_94 = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_94 = (uint)((ECppForm)local_res10 != Regular);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      if (1 < local_94) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        local_res10._0_1_ = local_94 != 0;
      }
      this->CppForm = (ECppForm)local_res10;
    }
    else {
      iVar7 = *(int *)*puVar10;
      *puVar10 = (ulonglong)piVar1;
      this->CppForm = iVar7 != 0;
    }
  }
  else {
    plVar9 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = this->CppForm;
    if ((ECppForm *)plVar9[1] < (ECppForm *)*plVar9 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(ECppForm *)*plVar9;
      *plVar9 = *plVar9 + 1;
    }
    this->CppForm = local_res18[0];
  }
  bVar5 = param_1->field_0x28 & 1;
  if ((bVar5 != 0) || ((param_1->field_0x28 & 4) != 0)) {
    if (((*(uint *)&param_1->field_0x34 & 0x1000) != 0) && (bVar5 != 0)) {
      RenameNamesAfterDuplication(this);
    }
    AddNamesToPrimaryList(this);
  }
  return;
}

// SetEnums @ 141fe8ed0

bool __thiscall
UEnum::SetEnums(UEnum *this,TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> *param_1,
               ECppForm param_2,EEnumFlags param_3,bool param_4)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long64 lVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  FString *pFVar11;
  UPackage *pUVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FName local_res8;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FName local_80;
  void *local_78 [2];
  void *local_68 [2];
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  if (0 < (this->Names).NumValues) {
    RemoveNamesFromPrimaryList(this);
  }
  uVar2 = (this->Names).TaggedNames;
  if ((uVar2 & 1) != 0) {
    FMemory::Free((void *)(uVar2 & 0xfffffffffffffffe));
  }
  uVar2 = (this->Names).TaggedValues;
  lVar15 = 0;
  (this->Names).TaggedNames = 0;
  if ((uVar2 & 1) != 0) {
    FMemory::Free((void *)(uVar2 & 0xfffffffffffffffe));
  }
  (this->Names).TaggedValues = 0;
  (this->Names).NumValues = 0;
  this->CppForm = param_2;
  this->EnumFlags = param_3;
  if (param_4) {
    if (param_1->ArrayNum != 0) {
      lVar8 = GetMaxEnumValue(param_1,param_3);
      lVar15 = lVar8 + 1;
    }
    FNameData::InitializeWithPlaceholder(&this->Names,param_1,lVar15);
    puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d8))(this,local_78,L"MAX");
    if (*(int *)(puVar9 + 1) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)*puVar9;
    }
    pFVar10 = ::FName::FName(&local_80,pwVar13);
    iVar7 = GetIndexByName(this,*pFVar10,CaseSensitive);
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
    if (iVar7 == -1) {
      pcVar3 = *(code **)(this->_padding_ + 0x2d8);
      pFVar11 = GenerateEnumPrefix(this,&local_58);
      ::FString::ConcatFC(&local_a0,pFVar11,L"_MAX");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_a0.Data.ArrayNum != 0) {
        FVar14.Data = local_a0.Data.AllocatorInstance.Data;
      }
      puVar9 = (undefined8 *)(*pcVar3)(this,local_68,FVar14.Data);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_a8,pwVar13);
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar7 = GetIndexByName(this,local_a8,CaseSensitive);
      if (iVar7 == -1) {
        pcVar3 = *(code **)(this->_padding_ + 0x2d8);
        pFVar11 = GenerateEnumPrefix(this,&local_38);
        ::FString::ConcatFC(&local_90,pFVar11,L"_MAX");
        puVar9 = (undefined8 *)(*pcVar3)(this,local_48);
        if (*(int *)(puVar9 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar9;
        }
        ::FName::FName(&local_res8,pwVar13);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        FVar4 = local_res8;
        pUVar12 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
        lVar8 = LookupEnumName((FName)pUVar12->_padding_,FVar4,None,(UEnum **)0x0);
        if (lVar8 != -1) {
          return false;
        }
        *(FName *)(((this->Names).TaggedNames & 0xfffffffffffffffe) +
                  (longlong)(this->Names).NumValues * 8) = local_res8;
        if ((*(longlong *)
              (((this->Names).TaggedValues & 0xfffffffffffffffe) +
              (longlong)(this->Names).NumValues * 8) != lVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("reinterpret_cast<int64*>(TaggedValues & MaskPointer)[NumValues] == InValue"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                               ,0xb8,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        piVar1 = &(this->Names).NumValues;
        *piVar1 = *piVar1 + 1;
      }
    }
  }
  else {
    FNameData::Initialize(&this->Names,param_1);
  }
  AddNamesToPrimaryList(this);
  return true;
}

