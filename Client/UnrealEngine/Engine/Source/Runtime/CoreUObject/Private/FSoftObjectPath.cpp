// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 52

// FSoftObjectPath @ 141e566a0

FSoftObjectPath * __thiscall
FSoftObjectPath::FSoftObjectPath(FSoftObjectPath *this,FSoftObjectPath *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  
  FVar4 = (param_1->AssetPath).AssetName;
  pFVar1 = &this->SubPathString;
  piVar2 = &(this->SubPathString).Data.ArrayMax;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar4;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->SubPathString).Data.ArrayNum;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  (this->SubPathString).Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  return this;
}

// operator= @ 141e580a0

FSoftObjectPath * __thiscall
FSoftObjectPath::operator=(FSoftObjectPath *this,FSoftObjectPath *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FName FVar5;
  
  FVar5 = (param_1->AssetPath).AssetName;
  pFVar1 = &this->SubPathString;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar5;
  if (pFVar1 != &param_1->SubPathString) {
    iVar3 = (this->SubPathString).Data.ArrayMax;
    piVar2 = &(this->SubPathString).Data.ArrayMax;
    _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
    iVar4 = (param_1->SubPathString).Data.ArrayNum;
    (this->SubPathString).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4);
      }
    }
  }
  return this;
}

// GetLongPackageName @ 141fd1040

FString * __thiscall
FSoftObjectPath::GetLongPackageName(FSoftObjectPath *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (this->AssetPath).PackageName;
  bVar2 = local_res8 != (FName)0x0;
  if (bVar2) {
    pFVar1 = ::FName::ToString(&local_res8,&local_18);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FSoftObjectPath @ 1420a3000

FSoftObjectPath * __thiscall
FSoftObjectPath::FSoftObjectPath
          (FSoftObjectPath *this,FTopLevelAssetPath *param_1,TStringOverload<FString> *param_2)

{
  int iVar1;
  FUtf8String *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  TStringOverload<FUtf8String> local_48;
  FUtf8String local_38;
  FUtf8String local_28;
  
  pFVar3 = (FScriptContainerElement *)0x0;
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  (this->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPathString).Data.ArrayNum = 0;
  (this->SubPathString).Data.ArrayMax = 0;
  iVar1 = (param_2->String).Data.ArrayNum;
  iVar4 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar4;
  }
  pFVar2 = FUtf8String::ConstructFromPtrSize
                     (&local_38,(wchar_t *)(param_2->String).Data.AllocatorInstance.Data,iVar5);
  local_48.String.Data.ArrayMax = iVar4;
  if (&local_28 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    local_48.String.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_48.String.Data.AllocatorInstance.Data = pFVar3;
  local_48.String.Data.ArrayNum = iVar4;
  SetPath(this,param_1,&local_48);
  pFVar3 = (param_2->String).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// operator= @ 1420a5370

FSoftObjectPath * __thiscall
FSoftObjectPath::operator=(FSoftObjectPath *this,FSoftObjectPath *param_1)

{
  FUtf8String *pFVar1;
  FUtf8String *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  
  FVar4 = (param_1->AssetPath).AssetName;
  pFVar1 = &param_1->SubPathString;
  pFVar2 = &this->SubPathString;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar4;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubPathString).Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
    (this->SubPathString).Data.ArrayMax = (param_1->SubPathString).Data.ArrayMax;
    (param_1->SubPathString).Data.ArrayNum = 0;
    (param_1->SubPathString).Data.ArrayMax = 0;
  }
  return this;
}

// StaticStruct @ 1421f4170

UScriptStruct * __cdecl FSoftObjectPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftObjectPath.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FSoftObjectPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectPath,(UObject *)pUVar1,
                         L"SoftObjectPath");
  }
  return Z_Registration_Info_UScriptStruct_FSoftObjectPath.OuterSingleton;
}

// operator== @ 1422022d0

bool __thiscall FSoftObjectPath::operator==(FSoftObjectPath *this,FSoftObjectPath *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (((this->AssetPath).PackageName == (param_1->AssetPath).PackageName) &&
     ((this->AssetPath).AssetName == (param_1->AssetPath).AssetName)) {
    iVar2 = (this->SubPathString).Data.ArrayNum;
    iVar1 = (param_1->SubPathString).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((uchar *)(this->SubPathString).Data.AllocatorInstance.Data,
                         (uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator() @ 1422026d0

void __thiscall
`FSoftObjectPath::LoadAsync'::__l2::<lambda_1>::operator()
          (void *this,FTopLevelAssetPath *param_1,UObject *param_2,Type param_3)

{
  longlong *plVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  if ((*(longlong *)((longlong)this + 0x20) != 0) && (1 < *(int *)((longlong)this + 0x38))) {
    bVar2 = IsInGameThread();
    if ((bVar2) && (GIsSavingPackage != false)) {
      param_2 = (UObject *)0x0;
    }
    else {
      param_2 = FSoftObjectPath::ResolveObjectInternal((FSoftObjectPath *)((longlong)this + 0x20));
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x40),
             &local_28);
  if ((*(int *)((longlong)this + 0x50) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x48), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// AddPIEPackageName @ 1422037f0

void __cdecl FSoftObjectPath::AddPIEPackageName(FName param_1)

{
  FName local_res8;
  FName local_res10 [3];
  
  local_res8 = param_1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&PIEPackageNames,local_res10,(bool *)&local_res8);
  return;
}

// AppendString @ 142204290

void __thiscall
FSoftObjectPath::AppendString(FSoftObjectPath *this,TStringBuilderBase<char8_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    ::operator<<(param_1,&this->AssetPath);
    iVar1 = (this->SubPathString).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      *param_1->CurPos = ':';
      param_1->CurPos = param_1->CurPos + 1;
      iVar1 = (this->SubPathString).Data.ArrayNum;
      pFVar2 = (this->SubPathString).Data.AllocatorInstance.Data;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      uVar4 = (ulong64)iVar5;
      if (param_1->End < param_1->CurPos + uVar4) {
        TStringBuilderBase<char8_t>::Extend(param_1,uVar4);
      }
      if (iVar5 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,pFVar2,uVar4);
        param_1->CurPos = (uchar *)((longlong)pvVar3 + uVar4);
      }
    }
  }
  return;
}

// AppendString @ 142204370

void __thiscall
FSoftObjectPath::AppendString(FSoftObjectPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    ::operator<<(param_1,&this->AssetPath);
    iVar1 = (this->SubPathString).Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L':';
      param_1->CurPos = param_1->CurPos + 1;
      operator<<<wchar_t,FUtf8String_const_&>(param_1,&this->SubPathString);
    }
  }
  return;
}

// AppendString @ 1422043f0

void __thiscall FSoftObjectPath::AppendString(FSoftObjectPath *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    ::FName::AppendString((FName *)this,param_1);
    if ((this->AssetPath).AssetName != (FName)0x0) {
      ::FString::AppendChars(param_1,L".",1);
      ::FName::AppendString(&(this->AssetPath).AssetName,param_1);
    }
    iVar1 = (this->SubPathString).Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      ::FString::AppendChar(param_1,L':');
      iVar1 = (this->SubPathString).Data.ArrayNum;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      ::FString::AppendChars
                (param_1,(uchar *)(this->SubPathString).Data.AllocatorInstance.Data,iVar2);
    }
  }
  return;
}

// ClearPIEPackageNames @ 142206a10

void __cdecl FSoftObjectPath::ClearPIEPackageNames(void)

{
  bool bVar1;
  
  bVar1 = 1 < PIEPackageNames.HashSize;
  if (!bVar1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&PIEPackageNames);
  }
  PIEPackageNames.Elements._8_4_ = 0;
  if (PIEPackageNames.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&PIEPackageNames,0,
               (int *)&PIEPackageNames.Elements.field_0xc);
  }
  PIEPackageNames.Elements._48_4_ = 0xffffffff;
  PIEPackageNames.Elements._52_4_ = 0;
  PIEPackageNames.Elements._40_4_ = 0;
  if (0x80 < (uint)PIEPackageNames.Elements._44_4_) {
    PIEPackageNames.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&PIEPackageNames.Elements.field_0x10,0);
  }
  if (bVar1) {
    PIEPackageNames.HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&PIEPackageNames);
  }
  return;
}

// ConstructFromAssetPath @ 142207a00

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromAssetPath
          (FSoftObjectPath *__return_storage_ptr__,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_1->PackageName;
  FVar2 = param_1->AssetName;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName = FVar1;
  (__return_storage_ptr__->AssetPath).AssetName = FVar2;
  FUtf8String::Empty(&__return_storage_ptr__->SubPathString);
  return __return_storage_ptr__;
}

// ConstructFromAssetPathAndSubpath @ 142207a30

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromAssetPathAndSubpath
          (FSoftObjectPath *__return_storage_ptr__,FTopLevelAssetPath *param_1,
          TStringOverload<FString> *param_2)

{
  FName FVar1;
  FName FVar2;
  FUtf8String *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FUtf8String local_48;
  FUtf8String local_38;
  undefined8 local_28 [2];
  
  iVar5 = (param_2->String).Data.ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = iVar6;
  }
  pFVar3 = FUtf8String::ConstructFromPtrSize
                     (&local_48,(wchar_t *)(param_2->String).Data.AllocatorInstance.Data,iVar7);
  iVar5 = iVar6;
  if (&local_38 != pFVar3) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar3->Data).ArrayNum;
    iVar5 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar1 = param_1->PackageName;
  FVar2 = param_1->AssetName;
  pFVar3 = &__return_storage_ptr__->SubPathString;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName = FVar1;
  (__return_storage_ptr__->AssetPath).AssetName = FVar2;
  if (pFVar3 == (FUtf8String *)local_28) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    (pFVar3->Data).AllocatorInstance.Data = pFVar4;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = iVar6;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar5;
  }
  pFVar4 = (param_2->String).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// ConstructFromAssetPathAndSubpath @ 142207b10

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromAssetPathAndSubpath
          (FSoftObjectPath *__return_storage_ptr__,FTopLevelAssetPath *param_1,
          TStringOverload<FUtf8String> *param_2)

{
  FUtf8String *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FName FVar6;
  undefined8 local_18 [2];
  
  FVar5 = param_1->PackageName;
  FVar6 = param_1->AssetName;
  pFVar4 = (param_2->String).Data.AllocatorInstance.Data;
  pFVar1 = &__return_storage_ptr__->SubPathString;
  (param_2->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_2->String).Data.ArrayNum;
  iVar3 = (param_2->String).Data.ArrayMax;
  (param_2->String).Data.ArrayNum = 0;
  (param_2->String).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName = FVar5;
  (__return_storage_ptr__->AssetPath).AssetName = FVar6;
  if (pFVar1 == (FUtf8String *)local_18) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    (pFVar1->Data).AllocatorInstance.Data = pFVar4;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = iVar2;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar3;
  }
  pFVar4 = (param_2->String).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// ConstructFromObject @ 142207b90

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromObject(FSoftObjectPath *__return_storage_ptr__,FObjectPtr *param_1)

{
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  SetPath(__return_storage_ptr__,(param_1->field0_0x0).Handle);
  return __return_storage_ptr__;
}

// ConstructFromObject @ 142207bd0

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromObject(FSoftObjectPath *__return_storage_ptr__,UObject *param_1)

{
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  SetPath(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConstructFromPackageAsset @ 142207c00

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromPackageAsset
          (FSoftObjectPath *__return_storage_ptr__,FName param_1,FName param_2)

{
  FUtf8String *pFVar1;
  undefined8 local_18 [3];
  
  pFVar1 = &__return_storage_ptr__->SubPathString;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName = param_1;
  (__return_storage_ptr__->AssetPath).AssetName = param_2;
  if (pFVar1 != (FUtf8String *)local_18) {
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPackageAssetSubpath @ 142207c50

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromPackageAssetSubpath
          (FSoftObjectPath *__return_storage_ptr__,FName param_1,FName param_2,FString *param_3)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [16];
  FUtf8String local_38;
  undefined8 local_28 [2];
  
  iVar5 = (param_3->Data).ArrayNum;
  pFVar2 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = iVar4;
  }
  pFVar1 = FUtf8String::ConstructFromPtrSize
                     ((FUtf8String *)local_48,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                      iVar3);
  iVar5 = iVar4;
  if (&local_38 != pFVar1) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar1->Data).ArrayNum;
    iVar5 = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  pFVar1 = &__return_storage_ptr__->SubPathString;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName = param_1;
  (__return_storage_ptr__->AssetPath).AssetName = param_2;
  if (pFVar1 == (FUtf8String *)local_28) {
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      local_48._0_8_ = param_1;
      local_48._8_8_ = param_2;
      FMemory::Free(pFVar2);
    }
  }
  else {
    (pFVar1->Data).AllocatorInstance.Data = pFVar2;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = iVar4;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = iVar5;
  }
  return __return_storage_ptr__;
}

// ConstructFromStringPath @ 142207d40

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromStringPath(FSoftObjectPath *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  SetPath(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// ConstructFromStringPath @ 142207da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromStringPath
          (FSoftObjectPath *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  undefined8 uVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  uVar1 = *(undefined8 *)&param_1->Size;
  puVar2 = param_1->DataPtr;
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  iVar4 = (int)uVar1;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.End = (wchar_t *)local_28;
  iVar3 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,iVar4);
  if (local_248.End < local_248.CurPos + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,(longlong)iVar3);
  }
  if (iVar4 != 0) {
    local_248.CurPos = UE::Core::Private::Convert(local_248.CurPos,iVar3,puVar2,iVar4);
  }
  local_258.Size = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_258.DataPtr = local_248.Base;
  SetPath(__return_storage_ptr__,&local_258);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// ConstructFromStringPath @ 142207ec0

FSoftObjectPath * __cdecl
FSoftObjectPath::ConstructFromStringPath
          (FSoftObjectPath *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  SetPath(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// ExportTextItem @ 14220ad10

bool __thiscall
FSoftObjectPath::ExportTextItem
          (FSoftObjectPath *this,FString *param_1,FSoftObjectPath *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  size_t _Size;
  FScriptContainerElement *_Src;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FSoftObjectPath local_48;
  
  _Src = (FScriptContainerElement *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->AssetPath).PackageName == (FName)0x0) {
    ::FString::AppendChars(param_1,L"None",4);
  }
  else {
    local_48.AssetPath.PackageName = (this->AssetPath).PackageName;
    local_48.AssetPath.AssetName = (this->AssetPath).AssetName;
    local_48.SubPathString.Data.ArrayNum = (this->SubPathString).Data.ArrayNum;
    _Size = (size_t)local_48.SubPathString.Data.ArrayNum;
    pFVar5 = (this->SubPathString).Data.AllocatorInstance.Data;
    iVar4 = 1;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.SubPathString.Data.ArrayNum == 0) {
      local_48.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_48.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum,
                 &local_48.SubPathString.Data.ArrayMax);
      memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,pFVar5,_Size);
    }
    if (SoftObjectPath::bResolveCoreRedirects != false) {
      FixupCoreRedirects(&local_48);
    }
    if ((param_4 & 0x2000U) == 0) {
      pFVar1 = ToString(&local_48,&local_58);
      _Src = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar1->Data).ArrayNum;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res8 = local_48.AssetPath.AssetName;
      if (local_48.AssetPath.AssetName == (FName)0x0) {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        iVar3 = local_78.Data.ArrayNum;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        FVar2.Data = (FScriptContainerElement *)0x0;
      }
      else {
        pFVar1 = ::FName::ToString(&local_res8,&local_68);
        _Src = (pFVar1->Data).AllocatorInstance.Data;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar3 = (pFVar1->Data).ArrayNum;
        (pFVar1->Data).ArrayNum = 0;
        (pFVar1->Data).ArrayMax = 0;
        FVar2.Data = local_68.Data.AllocatorInstance.Data;
      }
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
    }
    if ((param_4 & 1U) == 0) {
      iVar4 = iVar3 + -1;
      pFVar5 = _Src;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
    }
    else {
      ::FString::AppendChars(param_1,L"\"",1);
      local_78.Data.ArrayNum = iVar3;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar3 == 0) {
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,(ForAnyElementType *)&local_78,iVar3,&local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
      ::FString::ReplaceQuotesWithEscapedQuotes(&local_78,&local_68);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar3 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
      pFVar5 = (FScriptContainerElement *)L"\"";
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    ::FString::AppendChars(param_1,(wchar_t *)pFVar5,iVar4);
    if (_Src != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src);
    }
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      return true;
    }
  }
  return true;
}

// FixupCoreRedirects @ 14220c850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall FSoftObjectPath::FixupCoreRedirects(FSoftObjectPath *this)

{
  bool bVar1;
  int iVar2;
  FCoreRedirectObjectName *pFVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *this_00;
  ECoreRedirectFlags EVar7;
  bool bVar8;
  undefined1 auStack_8e8 [32];
  undefined1 local_8c8 [16];
  FString local_8b8;
  FCoreRedirectObjectName local_8a8;
  FCoreRedirectObjectName local_890;
  undefined4 local_878;
  FCoreRedirectObjectName local_868;
  TStringBuilderBase<wchar_t> local_848;
  FScriptContainerElement local_828 [2048];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_8e8;
  bVar8 = false;
  iVar2 = 0;
  local_878 = 0;
  FCoreRedirectObjectName::FCoreRedirectObjectName(&local_890,this);
  local_848.Base = (wchar_t *)local_828;
  local_8a8.ObjectName.ComparisonIndex.Value = 0;
  local_8a8.ObjectName.Number = 0;
  local_848.CurPos = (wchar_t *)local_828;
  local_8a8.OuterName.ComparisonIndex.Value = 0;
  local_8a8.OuterName.Number = 0;
  local_848.End = (wchar_t *)local_28;
  local_8a8.PackageName.ComparisonIndex.Value = 0;
  local_8a8.PackageName.Number = 0;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  ::FName::ToString(&local_890.PackageName,&local_848);
  local_8c8._8_4_ = (int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1);
  local_8c8._0_8_ = local_848.Base;
  bVar1 = FPackageName::IsScriptPackage((TStringView<wchar_t> *)local_8c8);
  EVar7 = Type_Object;
  if (bVar1) {
    EVar7 = Type_AllMask;
  }
  pFVar3 = FCoreRedirects::GetRedirectedName(&local_868,EVar7,&local_890,None);
  local_8a8.ObjectName = pFVar3->ObjectName;
  local_8a8.OuterName = pFVar3->OuterName;
  local_8a8.PackageName = pFVar3->PackageName;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  if (((local_890.ObjectName == local_8a8.ObjectName) &&
      (local_890.OuterName == local_8a8.OuterName)) &&
     (local_890.PackageName == local_8a8.PackageName)) {
    return false;
  }
  pFVar4 = FCoreRedirectObjectName::ToString(&local_890,(FString *)&local_868);
  if ((pFVar4->Data).ArrayNum == 0) {
    local_8c8._0_8_ = L"";
LAB_14220c998:
    sVar5 = wcslen((wchar_t *)local_8c8._0_8_);
    iVar2 = (int)sVar5;
  }
  else {
    local_8c8._0_8_ = (pFVar4->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_8c8._0_8_ != (FScriptContainerElement *)0x0)
    goto LAB_14220c998;
  }
  local_8c8._8_4_ = iVar2;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  this_00 = StaticFindObjectSafe(pUVar6,(UObject *)0x0,(TStringView<wchar_t> *)local_8c8,None);
  if (local_868.ObjectName != (FName)0x0) {
    FMemory::Free((void *)local_868.ObjectName);
  }
  FCoreRedirectObjectName::ToString(&local_8a8,&local_8b8);
  if (this_00 != (UObject *)0x0) {
    pFVar4 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_00,(FString *)local_8c8,(UObject *)0x0);
    iVar2 = (pFVar4->Data).ArrayNum;
    if (iVar2 == local_8b8.Data.ArrayNum) {
      if (iVar2 < 2) {
        bVar8 = true;
        goto LAB_14220ca42;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                         (wchar_t *)local_8b8.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = local_8b8.Data.ArrayNum + iVar2 == 1;
    }
    bVar8 = true;
    if (!bVar1) {
      bVar1 = false;
      goto LAB_14220ca45;
    }
  }
LAB_14220ca42:
  bVar1 = true;
LAB_14220ca45:
  if ((bVar8) && ((FScriptContainerElement *)local_8c8._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_8c8._0_8_);
  }
  if (!bVar1) {
    if ((FName)local_8b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
    return false;
  }
  local_8c8._0_8_ = local_8b8.Data.AllocatorInstance.Data;
  local_868.OuterName.ComparisonIndex.Value = local_8b8.Data.ArrayNum - 1;
  if (local_8b8.Data.ArrayNum == 0) {
    local_868.OuterName.ComparisonIndex.Value = 0;
  }
  local_8c8._8_4_ = local_868.OuterName.ComparisonIndex.Value;
  local_868.ObjectName = (FName)local_8b8.Data.AllocatorInstance.Data;
  local_868.OuterName.Number = local_8c8._12_4_;
  SetPath(this,(TStringView<wchar_t> *)&local_868);
  if ((FName)local_8b8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  return true;
}

// FixupForPIE @ 14220caf0

bool __thiscall
FSoftObjectPath::FixupForPIE
          (FSoftObjectPath *this,int param_1,
          TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> *param_2)

{
  return false;
}

// FixupForPIE @ 14220cb00

bool __thiscall
FSoftObjectPath::FixupForPIE
          (FSoftObjectPath *this,TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> *param_1)

{
  UE::GetPlayInEditorID();
  return false;
}

// GetAssetName @ 14220cf70

FString * __thiscall
FSoftObjectPath::GetAssetName(FSoftObjectPath *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (this->AssetPath).AssetName;
  bVar2 = local_res8 != (FName)0x0;
  if (bVar2) {
    pFVar1 = ::FName::ToString(&local_res8,&local_18);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOrCreateIDForObject @ 14220ddc0

FSoftObjectPath * __cdecl
FSoftObjectPath::GetOrCreateIDForObject(FSoftObjectPath *__return_storage_ptr__,FObjectPtr param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftObjectPath *pFVar3;
  
  if (*(longlong *)param_1.field0_0x0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                       ,0x3ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  SetPath(__return_storage_ptr__,*(UObject **)param_1.field0_0x0);
  return __return_storage_ptr__;
}

// ImportTextItem @ 1422113b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSoftObjectPath::ImportTextItem
          (FSoftObjectPath *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258 [2];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  pwVar3 = FPropertyHelpers::ReadToken(*param_1,&local_238,true);
  if (pwVar3 == (wchar_t *)0x0) goto LAB_142211486;
  *param_1 = pwVar3;
  if (((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) == 4) &&
     (iVar2 = FGenericPlatformStricmp::Strnicmp(L"None",local_238.Base,4), iVar2 == 0)) {
LAB_14221146d:
    (this->AssetPath).AssetName.ComparisonIndex = 0;
    (this->AssetPath).AssetName.Number = 0;
    (this->AssetPath).PackageName.ComparisonIndex = 0;
    (this->AssetPath).PackageName.Number = 0;
    FUtf8String::Reset(&this->SubPathString,0);
  }
  else {
    pwVar3 = *param_1;
    if (*pwVar3 == L'(') {
      *param_1 = pwVar3 + 1;
      if (pwVar3[1] != L')') {
        *param_1 = pwVar3;
        goto LAB_142211486;
      }
      *param_1 = pwVar3 + 2;
      goto LAB_14221146d;
    }
    if (*pwVar3 == L'\'') {
      local_238.CurPos = local_238.Base;
      *param_1 = pwVar3 + 1;
      pwVar3 = FPropertyHelpers::ReadToken(pwVar3 + 1,&local_238,true);
      if (pwVar3 != (wchar_t *)0x0) {
        *param_1 = pwVar3;
        wVar1 = *pwVar3;
        *param_1 = pwVar3 + 1;
        if (wVar1 == L'\'') goto LAB_1422114c6;
      }
LAB_142211486:
      bVar4 = false;
      goto LAB_1422114f4;
    }
LAB_1422114c6:
    local_258[0].Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
    local_258[0].DataPtr = local_238.Base;
    SetPath(this,local_258);
  }
  bVar4 = true;
LAB_1422114f4:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return bVar4;
}

// LoadAsync @ 1422138e0

int __thiscall
FSoftObjectPath::LoadAsync
          (FSoftObjectPath *this,
          TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
          *param_1,FLoadAssetAsyncOptionalParams *param_2)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  size_t _Size;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  FSoftObjectPath local_120;
  FName local_100;
  FName FStack_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4 [3];
  FName local_d8;
  FName FStack_d0;
  bool local_c8;
  FName local_b8;
  FName FStack_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FName local_98;
  FName FStack_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TDelegateBase<FNotThreadSafeDelegateMode> local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FLoadAssetAsyncOptionalParams local_40;
  
  local_e8 = (this->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_e8;
  _Src = (this->SubPathString).Data.AllocatorInstance.Data;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_100 = (this->AssetPath).PackageName;
  FStack_f8 = (this->AssetPath).AssetName;
  if (local_e8 == 0) {
    local_e4[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8,0,&local_f0,local_e8,local_e4);
    memcpy(local_f0.Data,_Src,_Size);
  }
  iVar2 = local_e8;
  FVar1.Data = local_f0.Data;
  local_120.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.AssetPath.PackageName = local_100;
  local_120.AssetPath.AssetName = FStack_f8;
  local_120.SubPathString.Data.ArrayNum = local_e8;
  if (local_e8 == 0) {
    local_120.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8,0,(ForAnyElementType *)&local_120.SubPathString,local_e8,
               &local_120.SubPathString.Data.ArrayMax);
    memcpy(local_120.SubPathString.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2);
  }
  if (SoftObjectPath::bResolveCoreRedirects != false) {
    FixupCoreRedirects(&local_120);
  }
  iVar2 = local_e8;
  FVar1.Data = local_f0.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,local_e8);
  local_b8 = local_100;
  FStack_b0 = FStack_f8;
  if (local_e8 == 0) {
    local_a0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8,0,&local_a8,local_e8,(int *)((longlong)&local_a0 + 4));
    memcpy(local_a8.Data,FVar1.Data,(longlong)iVar2);
  }
  iVar2 = local_120.SubPathString.Data.ArrayNum;
  FVar1.Data = local_120.SubPathString.Data.AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = CONCAT44(local_80._4_4_,local_120.SubPathString.Data.ArrayNum);
  local_98 = local_120.AssetPath.PackageName;
  FStack_90 = local_120.AssetPath.AssetName;
  if (local_120.SubPathString.Data.ArrayNum == 0) {
    local_80 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_120.SubPathString.Data.ArrayNum,0,&local_88,
               local_120.SubPathString.Data.ArrayNum,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,FVar1.Data,(longlong)iVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_78,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_60);
  local_48 = &local_130;
  puVar3 = UE::Core::Private::DelegateAllocate(0x70,&local_130);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTopLevelAssetPath__PEAVUObject__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FSoftObjectPath::LoadAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    *(FName *)(puVar3 + 3) = local_b8;
    *(FName *)(puVar3 + 4) = FStack_b0;
    puVar3[5] = 0;
    puVar3[5] = local_a8.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar3 + 6) = (undefined4)local_a0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = local_a0._4_4_;
    local_a0 = 0;
    *(FName *)(puVar3 + 7) = local_98;
    *(FName *)(puVar3 + 8) = FStack_90;
    puVar3[9] = 0;
    puVar3[9] = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar3 + 10) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar3 + 0x54) = local_80._4_4_;
    local_80 = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 0xb),&local_78);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_78);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_40.ProgressDelegate.Object = (param_2->ProgressDelegate).Object;
  local_40.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController;
  (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->ProgressDelegate).Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_40.PackagePriority = param_2->PackagePriority;
  local_40.InstancingContext = param_2->InstancingContext;
  local_40.LoadFlags = param_2->LoadFlags;
  local_60.AccessType = Reader;
  local_60._4_4_ = 0;
  local_60.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_d8);
  if (local_60.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_60.Accessor);
  }
  local_60.Accessor = (FMRSWRecursiveAccessDetector *)local_130.DelegateAllocator;
  local_60._16_4_ = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)FStack_d0,(FDestructionSentinel *)&local_d8);
  }
  local_d8 = local_120.AssetPath.PackageName;
  FStack_d0 = local_120.AssetPath.AssetName;
  iVar2 = LoadAssetAsync((FTopLevelAssetPath *)&local_d8,
                         (TDelegate<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                          *)&local_60,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_d8);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)FStack_d0,(FDestructionSentinel *)&local_d8);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_120.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  return iVar2;
}

// PostLoadPath @ 142215b50

void __thiscall FSoftObjectPath::PostLoadPath(FSoftObjectPath *this,FArchive *param_1)

{
  return;
}

// PreSavePath @ 142215b60

bool __thiscall FSoftObjectPath::PreSavePath(FSoftObjectPath *this,bool *param_1)

{
  bool bVar1;
  
  if (SoftObjectPath::bResolveCoreRedirects) {
    bVar1 = FixupCoreRedirects(this);
    return bVar1;
  }
  return false;
}

// RemapPackage @ 14221a830

bool __thiscall FSoftObjectPath::RemapPackage(FSoftObjectPath *this,FName param_1,FName param_2)

{
  if ((this->AssetPath).PackageName == param_1) {
    (this->AssetPath).PackageName = param_2;
    return true;
  }
  return false;
}

// ResolveObject @ 14221bb90

UObject * __thiscall FSoftObjectPath::ResolveObject(FSoftObjectPath *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    bVar1 = IsInGameThread();
    if ((!bVar1) || (GIsSavingPackage == false)) {
      pUVar2 = ResolveObjectInternal(this);
      return pUVar2;
    }
  }
  return (UObject *)0x0;
}

// ResolveObjectInternal @ 14221bbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall FSoftObjectPath::ResolveObjectInternal(FSoftObjectPath *this)

{
  code *pcVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FNameEntryId FVar7;
  UClass *pUVar8;
  UObject *pUVar10;
  FString *pFVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FNameEntryId FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_928 [32];
  UObject *local_8e8 [2];
  undefined1 local_8d8 [16];
  FSoftObjectPath local_8c8;
  FString local_8a8;
  FString local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  size_t sVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_928;
  FVar3 = (this->AssetPath).PackageName;
  FVar4 = (this->AssetPath).AssetName;
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  local_8d8._0_8_ = FVar3;
  local_8d8._8_8_ = FVar4;
  local_8e8[0] = StaticFindObject(pUVar8,(FTopLevelAssetPath *)local_8d8,None);
  pFVar16 = (FScriptContainerElement *)0x0;
  FVar15.Value = 0;
  uVar17 = 0;
  if (local_8e8[0] != (UObject *)0x0) {
    if (1 < (this->SubPathString).Data.ArrayNum) {
      pFVar13 = (this->SubPathString).Data.AllocatorInstance.Data;
      local_888.Base = local_868;
      local_888.CurPos = local_868;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      local_888.End = local_52;
      iVar6 = (this->SubPathString).Data.ArrayNum;
      uVar14 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar14 = FVar15.Value;
      }
      iVar6 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pFVar13,uVar14);
      if (local_888.End < local_888.CurPos + iVar6) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,(longlong)iVar6);
      }
      if (uVar14 != 0) {
        local_888.CurPos =
             UE::Core::Private::Convert(local_888.CurPos,iVar6,(uchar *)pFVar13,uVar14);
      }
      if (local_888.End < local_888.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *local_888.CurPos = L'\0';
      local_8d8._0_8_ = local_888.Base;
      FVar7.Value = uVar17;
      if ((FName)local_888.Base != (FName)0x0) {
        sVar9 = wcslen(local_888.Base);
        FVar7.Value = (uint)sVar9;
      }
      pUVar10 = local_8e8[0];
      local_8d8._8_4_ = FVar7.Value;
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      local_8e8[0] = StaticFindObject(pUVar8,pUVar10,(TStringView<wchar_t> *)local_8d8,None);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
    if (local_8e8[0] != (UObject *)0x0) goto LAB_14221bf50;
  }
  if (((this->AssetPath).PackageName != (FName)0x0) && (1 < (this->SubPathString).Data.ArrayNum)) {
    local_8c8.AssetPath.PackageName = (this->AssetPath).PackageName;
    local_8c8.AssetPath.AssetName = (this->AssetPath).AssetName;
    local_8c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8c8.SubPathString.Data.ArrayNum = 0;
    local_8c8.SubPathString.Data.ArrayMax = 0;
    FUtf8String::Empty(&local_8c8.SubPathString);
    pUVar10 = ResolveObject(&local_8c8);
    if (pUVar10 != (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)pUVar10 + 0x88);
      iVar6 = (this->SubPathString).Data.ArrayNum;
      uVar14 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar14 = FVar15.Value;
      }
      pFVar11 = ::FString::ConstructFromPtrSize
                          ((FString *)local_8d8,
                           (uchar *)(this->SubPathString).Data.AllocatorInstance.Data,uVar14);
      if (&local_898 != pFVar11) {
        pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar17 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((FName)local_8d8._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_8d8._0_8_);
      }
      pFVar13 = (FScriptContainerElement *)L"";
      if (uVar17 != 0) {
        pFVar13 = pFVar16;
      }
      (*pcVar1)(pUVar10,pFVar13,local_8e8);
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
    }
    if (local_8c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((local_8e8[0] != (UObject *)0x0) || (SoftObjectPath::bResolveCoreRedirects == false))
  goto LAB_14221bf50;
  iVar6 = (this->SubPathString).Data.ArrayNum;
  local_8c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.SubPathString.Data.ArrayNum = iVar6;
  local_8c8.AssetPath.PackageName = (this->AssetPath).PackageName;
  local_8c8.AssetPath.AssetName = (this->AssetPath).AssetName;
  pFVar16 = (this->SubPathString).Data.AllocatorInstance.Data;
  if (iVar6 == 0) {
    local_8c8.SubPathString.Data.ArrayNum = 0;
    local_8c8.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,(ForAnyElementType *)&local_8c8.SubPathString,iVar6,
               &local_8c8.SubPathString.Data.ArrayMax);
    memcpy(local_8c8.SubPathString.Data.AllocatorInstance.Data,pFVar16,(longlong)iVar6);
  }
  bVar5 = FixupCoreRedirects(&local_8c8);
  if (bVar5) {
    pFVar12 = (FName *)ToString(&local_8c8,&local_8a8);
    if (pFVar12[1].ComparisonIndex.Value == 0) {
      local_8d8._0_8_ = L"";
LAB_14221becf:
      sVar9 = wcslen((wchar_t *)local_8d8._0_8_);
      FVar15.Value = (uint)sVar9;
    }
    else {
      local_8d8._0_8_ = *pFVar12;
      if ((FName)local_8d8._0_8_ != (FName)0x0) goto LAB_14221becf;
    }
    local_8d8._8_4_ = FVar15.Value;
    pUVar8 = Z_Construct_UClass_UObject_NoRegister();
    local_8e8[0] = StaticFindObject(pUVar8,(UObject *)0x0,(TStringView<wchar_t> *)local_8d8,None);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_8c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14221bf50:
  while( true ) {
    pUVar10 = local_8e8[0];
    if (local_8e8[0] == (UObject *)0x0) {
      return (UObject *)0x0;
    }
    pUVar8 = UObjectRedirector::GetPrivateStaticClass();
    lVar2 = *(longlong *)&pUVar10->field_0x10;
    iVar6 = (int)pUVar8->_padding_;
    if (*(int *)(lVar2 + 0x38) < iVar6) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar8->_padding_) {
      return local_8e8[0];
    }
    local_8e8[0] = *(UObject **)(pUVar10 + 1);
  }
  return local_8e8[0];
}

// Serialize @ 14221d0c0

bool __thiscall FSoftObjectPath::Serialize(FSoftObjectPath *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x140))(param_1,this);
  return true;
}

// Serialize @ 14221d0f0

bool __thiscall FSoftObjectPath::Serialize(FSoftObjectPath *this,FStructuredArchiveSlot param_1)

{
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x140))
            (*(longlong **)(*(longlong *)param_1 + 8),this);
  return true;
}

// SerializeFromMismatchedTag @ 14222a0c0

bool __thiscall
FSoftObjectPath::SerializeFromMismatchedTag
          (FSoftObjectPath *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  FArchive *pFVar2;
  int iVar3;
  FSlotBase local_res18 [2];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  ToString(this,&local_28);
  bVar1 = SerializeFromMismatchedTagTemplate<_FSoftObjectPath::SerializeFromMismatchedTag_::__l2::UObjectTypePolicy>
                    (&local_28,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  if ((pFVar2->field_0x28 & 1) != 0) {
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    local_18.Size = iVar3;
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    SetPath(this,&local_18);
    UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SerializePath @ 14222a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSoftObjectPath::SerializePath(FSoftObjectPath *this,FArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FUtf8String *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FUtf8String *pFVar12;
  undefined1 auStack_978 [32];
  FString FStack_958;
  FString FStack_948;
  FString FStack_938;
  FUtf8String FStack_928;
  FName aFStack_918 [2];
  FScriptContainerElement *pFStack_908;
  int iStack_900;
  undefined4 uStack_8fc;
  FString FStack_8f8;
  TStringView<wchar_t> TStack_8e8;
  TStringView<wchar_t> TStack_8d8;
  FString FStack_8c8;
  FUtf8String FStack_8b8;
  FUtf8String FStack_8a8;
  FString FStack_898;
  FUtf8String FStack_888;
  TStringBuilderBase<wchar_t> TStack_878;
  wchar_t awStack_858 [1035];
  wchar_t awStack_42 [5];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_978;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)*(undefined8 *)&param_1->field_0x40 < 0x202) {
      FStack_958.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_958.Data.ArrayNum = 0;
      FStack_958.Data.ArrayMax = 0;
      ::operator<<(param_1,&FStack_958);
      if (*(int *)&param_1->field_0x40 < 0x1e4) {
        pFVar5 = FPackageName::GetNormalizedObjectPath(&FStack_8f8,&FStack_958);
        if (&FStack_958 != pFVar5) {
          if (FStack_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_958.Data.AllocatorInstance.Data);
          }
          FStack_958.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_958.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          FStack_958.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (FStack_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_8f8.Data.AllocatorInstance.Data);
        }
      }
      pFStack_908 = FStack_958.Data.AllocatorInstance.Data;
      iStack_900 = FStack_958.Data.ArrayNum + -1;
      if (FStack_958.Data.ArrayNum == 0) {
        iStack_900 = 0;
      }
      TStack_8e8._12_4_ = uStack_8fc;
      TStack_8e8.Size = iStack_900;
      TStack_8e8.DataPtr = (wchar_t *)FStack_958.Data.AllocatorInstance.Data;
      SetPath(this,&TStack_8e8);
      if (FStack_958.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(FStack_958.Data.AllocatorInstance.Data);
      return;
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ef) {
      pFVar10 = (FScriptContainerElement *)0x0;
      aFStack_918[0].ComparisonIndex.Value = 0;
      aFStack_918[0].Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,aFStack_918);
      TStack_878.Base = awStack_858;
      TStack_878.bIsDynamic = false;
      TStack_878.bIsExternal = false;
      TStack_878.CurPos = awStack_858;
      TStack_878.End = awStack_42;
      ::FName::AppendString(aFStack_918,&TStack_878);
      pFStack_908 = (FScriptContainerElement *)TStack_878.Base;
      iStack_900 = (int)((longlong)TStack_878.CurPos - (longlong)TStack_878.Base >> 1);
      TStack_8d8._12_4_ = uStack_8fc;
      TStack_8d8.Size = iStack_900;
      TStack_8d8.DataPtr = TStack_878.Base;
      FTopLevelAssetPath::TrySetPath(&this->AssetPath,&TStack_8d8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_878);
      iVar4 = (this->SubPathString).Data.ArrayNum;
      pFVar12 = &this->SubPathString;
      FStack_948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_948.Data.ArrayNum = 0;
      FStack_948.Data.ArrayMax = 0;
      iVar9 = 0;
      iVar11 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar11 = iVar9;
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&FStack_8c8,(uchar *)(this->SubPathString).Data.AllocatorInstance.Data,
                          iVar11);
      if (&FStack_948 != pFVar5) {
        if (FStack_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_948.Data.AllocatorInstance.Data);
        }
        FStack_948.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_948.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        FStack_948.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (FStack_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_8c8.Data.AllocatorInstance.Data);
      }
      ::operator<<(param_1,&FStack_948);
      iVar4 = FStack_948.Data.ArrayNum + -1;
      if (FStack_948.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         (&FStack_8b8,(wchar_t *)FStack_948.Data.AllocatorInstance.Data,iVar4);
      iVar4 = iVar9;
      if (&FStack_8a8 != pFVar6) {
        pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar9 = (pFVar6->Data).ArrayNum;
        iVar4 = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (FStack_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_8b8.Data.AllocatorInstance.Data);
      }
      if (pFVar12 == &FStack_8a8) {
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
      }
      else {
        pFVar8 = (pFVar12->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pFVar12->Data).AllocatorInstance.Data = pFVar10;
        (this->SubPathString).Data.ArrayNum = iVar9;
        (this->SubPathString).Data.ArrayMax = iVar4;
      }
      if (FStack_948.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(FStack_948.Data.AllocatorInstance.Data);
      return;
    }
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*plVar7 + 0x178))(plVar7,&(this->AssetPath).AssetName);
  pFVar12 = &this->SubPathString;
  piVar1 = &(this->SubPathString).Data.ArrayNum;
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  iVar9 = 0;
  if (iVar4 < 0xc0) {
    if ((param_1->field_0x28 & 1) == 0) {
      FStack_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_938.Data.ArrayNum = 0;
      FStack_938.Data.ArrayMax = 0;
      iVar4 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar4 = iVar9;
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&FStack_898,(uchar *)(pFVar12->Data).AllocatorInstance.Data,iVar4);
      if (&FStack_938 != pFVar5) {
        if (FStack_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_938.Data.AllocatorInstance.Data);
        }
        FStack_938.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_938.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        FStack_938.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (FStack_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_898.Data.AllocatorInstance.Data);
      }
      ::operator<<(param_1,&FStack_938);
      FStack_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_928.Data.ArrayNum = 0;
      FStack_928.Data.ArrayMax = 0;
      iVar4 = FStack_938.Data.ArrayNum + -1;
      if (FStack_938.Data.ArrayNum == 0) {
        iVar4 = iVar9;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         (&FStack_888,(wchar_t *)FStack_938.Data.AllocatorInstance.Data,iVar4);
      if (&FStack_928 != pFVar6) {
        FStack_928.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_928.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        FStack_928.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (FStack_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_888.Data.AllocatorInstance.Data);
      }
      FUtf8String::operator=(pFVar12,&FStack_928);
      if (FStack_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_928.Data.AllocatorInstance.Data);
      }
      if (FStack_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_938.Data.AllocatorInstance.Data);
      }
    }
    else {
      SoftObjectPathLoadSubPathWorkaround(param_1,pFVar12);
    }
  }
  else {
    ::operator<<(param_1,pFVar12);
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar4 < 0xc1) {
    iVar4 = *piVar1;
    iVar11 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar11 = iVar9;
    }
    if (((iVar11 < 0) || (iVar4 < iVar11)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (pFVar12->Data).AllocatorInstance.Data;
    pFVar8 = pFVar10 + iVar11;
    do {
      if (pFVar8 == pFVar10) {
        return;
      }
      pFVar8 = pFVar8 + -1;
    } while (*pFVar8 == (FScriptContainerElement)0x0);
    iVar4 = (int)pFVar8 - (int)pFVar10;
    if (iVar4 != -1) {
      iVar4 = iVar4 + 1;
      iVar9 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar9 = 0;
      }
      iVar11 = iVar9;
      if (iVar4 < iVar9) {
        iVar11 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar11) {
        iVar4 = iVar11;
      }
      FUtf8String::RemoveAt(pFVar12,iVar4,iVar9 - iVar4,Default);
    }
  }
  return;
}

// SerializePathWithoutFixup @ 14222a340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSoftObjectPath::SerializePathWithoutFixup(FSoftObjectPath *this,FArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FUtf8String *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FUtf8String *pFVar12;
  undefined1 auStack_978 [32];
  FString local_958;
  FString local_948;
  FString local_938;
  FUtf8String local_928;
  FName local_918 [2];
  FScriptContainerElement *local_908;
  int iStack_900;
  undefined4 uStack_8fc;
  FString local_8f8;
  TStringView<wchar_t> local_8e8;
  TStringView<wchar_t> local_8d8;
  FString local_8c8;
  FUtf8String local_8b8;
  FUtf8String local_8a8;
  FString local_898;
  FUtf8String local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_978;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)*(undefined8 *)&param_1->field_0x40 < 0x202) {
      local_958.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_958.Data.ArrayNum = 0;
      local_958.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_958);
      if (*(int *)&param_1->field_0x40 < 0x1e4) {
        pFVar5 = FPackageName::GetNormalizedObjectPath(&local_8f8,&local_958);
        if (&local_958 != pFVar5) {
          if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.Data.AllocatorInstance.Data);
          }
          local_958.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_958.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_958.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
        }
      }
      local_908 = local_958.Data.AllocatorInstance.Data;
      iStack_900 = local_958.Data.ArrayNum + -1;
      if (local_958.Data.ArrayNum == 0) {
        iStack_900 = 0;
      }
      local_8e8._12_4_ = uStack_8fc;
      local_8e8.Size = iStack_900;
      local_8e8.DataPtr = (wchar_t *)local_958.Data.AllocatorInstance.Data;
      SetPath(this,&local_8e8);
      if (local_958.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
      return;
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ef) {
      pFVar10 = (FScriptContainerElement *)0x0;
      local_918[0].ComparisonIndex.Value = 0;
      local_918[0].Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_918);
      local_878.Base = local_858;
      local_878.bIsDynamic = false;
      local_878.bIsExternal = false;
      local_878.CurPos = local_858;
      local_878.End = local_42;
      ::FName::AppendString(local_918,&local_878);
      local_908 = (FScriptContainerElement *)local_878.Base;
      iStack_900 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
      local_8d8._12_4_ = uStack_8fc;
      local_8d8.Size = iStack_900;
      local_8d8.DataPtr = local_878.Base;
      FTopLevelAssetPath::TrySetPath(&this->AssetPath,&local_8d8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
      iVar4 = (this->SubPathString).Data.ArrayNum;
      pFVar12 = &this->SubPathString;
      local_948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_948.Data.ArrayNum = 0;
      local_948.Data.ArrayMax = 0;
      iVar9 = 0;
      iVar11 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar11 = iVar9;
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_8c8,(uchar *)(this->SubPathString).Data.AllocatorInstance.Data,
                          iVar11);
      if (&local_948 != pFVar5) {
        if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_948.Data.AllocatorInstance.Data);
        }
        local_948.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_948.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_948.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
      }
      ::operator<<(param_1,&local_948);
      iVar4 = local_948.Data.ArrayNum + -1;
      if (local_948.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         (&local_8b8,(wchar_t *)local_948.Data.AllocatorInstance.Data,iVar4);
      iVar4 = iVar9;
      if (&local_8a8 != pFVar6) {
        pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar9 = (pFVar6->Data).ArrayNum;
        iVar4 = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
      }
      if (pFVar12 == &local_8a8) {
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
      }
      else {
        pFVar8 = (pFVar12->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pFVar12->Data).AllocatorInstance.Data = pFVar10;
        (this->SubPathString).Data.ArrayNum = iVar9;
        (this->SubPathString).Data.ArrayMax = iVar4;
      }
      if (local_948.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
      return;
    }
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*plVar7 + 0x178))(plVar7,&(this->AssetPath).AssetName);
  pFVar12 = &this->SubPathString;
  piVar1 = &(this->SubPathString).Data.ArrayNum;
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  iVar9 = 0;
  if (iVar4 < 0xc0) {
    if ((param_1->field_0x28 & 1) == 0) {
      local_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_938.Data.ArrayNum = 0;
      local_938.Data.ArrayMax = 0;
      iVar4 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar4 = iVar9;
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_898,(uchar *)(pFVar12->Data).AllocatorInstance.Data,iVar4);
      if (&local_938 != pFVar5) {
        if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_938.Data.AllocatorInstance.Data);
        }
        local_938.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_938.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_938.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898.Data.AllocatorInstance.Data);
      }
      ::operator<<(param_1,&local_938);
      local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_928.Data.ArrayNum = 0;
      local_928.Data.ArrayMax = 0;
      iVar4 = local_938.Data.ArrayNum + -1;
      if (local_938.Data.ArrayNum == 0) {
        iVar4 = iVar9;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         (&local_888,(wchar_t *)local_938.Data.AllocatorInstance.Data,iVar4);
      if (&local_928 != pFVar6) {
        local_928.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_928.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
      FUtf8String::operator=(pFVar12,&local_928);
      if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_928.Data.AllocatorInstance.Data);
      }
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
    }
    else {
      SoftObjectPathLoadSubPathWorkaround(param_1,pFVar12);
    }
  }
  else {
    ::operator<<(param_1,pFVar12);
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar4 < 0xc1) {
    iVar4 = *piVar1;
    iVar11 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar11 = iVar9;
    }
    if (((iVar11 < 0) || (iVar4 < iVar11)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (pFVar12->Data).AllocatorInstance.Data;
    pFVar8 = pFVar10 + iVar11;
    do {
      if (pFVar8 == pFVar10) {
        return;
      }
      pFVar8 = pFVar8 + -1;
    } while (*pFVar8 == (FScriptContainerElement)0x0);
    iVar4 = (int)pFVar8 - (int)pFVar10;
    if (iVar4 != -1) {
      iVar4 = iVar4 + 1;
      iVar9 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar9 = 0;
      }
      iVar11 = iVar9;
      if (iVar4 < iVar9) {
        iVar11 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar11) {
        iVar4 = iVar11;
      }
      FUtf8String::RemoveAt(pFVar12,iVar4,iVar9 - iVar4,Default);
    }
  }
  return;
}

// SetPath @ 14222afa0

void __thiscall FSoftObjectPath::SetPath(FSoftObjectPath *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  
  FVar1 = param_1->AssetName;
  (this->AssetPath).PackageName = param_1->PackageName;
  (this->AssetPath).AssetName = FVar1;
  FUtf8String::Empty(&this->SubPathString);
  return;
}

// SetPath @ 14222afc0

void __thiscall
FSoftObjectPath::SetPath
          (FSoftObjectPath *this,FTopLevelAssetPath *param_1,TStringOverload<FString> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FUtf8String *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  FUtf8String local_38;
  FUtf8String local_28;
  
  FVar3 = param_1->AssetName;
  pFVar5 = (FScriptContainerElement *)0x0;
  (this->AssetPath).PackageName = param_1->PackageName;
  (this->AssetPath).AssetName = FVar3;
  iVar1 = (param_2->String).Data.ArrayNum;
  iVar6 = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  pFVar4 = FUtf8String::ConstructFromPtrSize
                     (&local_38,(wchar_t *)(param_2->String).Data.AllocatorInstance.Data,iVar7);
  iVar7 = iVar6;
  if (&local_28 != pFVar4) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar4->Data).ArrayNum;
    iVar7 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar4 = &this->SubPathString;
  if (pFVar4 == &local_28) {
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  else {
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar4->Data).AllocatorInstance.Data = pFVar5;
    (this->SubPathString).Data.ArrayNum = iVar6;
    (this->SubPathString).Data.ArrayMax = iVar7;
  }
  pFVar5 = (param_2->String).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// SetPath @ 14222b0a0

void __thiscall
FSoftObjectPath::SetPath
          (FSoftObjectPath *this,FTopLevelAssetPath *param_1,TStringOverload<FUtf8String> *param_2)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  
  FVar3 = param_1->AssetName;
  pFVar1 = &this->SubPathString;
  (this->AssetPath).PackageName = param_1->PackageName;
  (this->AssetPath).AssetName = FVar3;
  if (pFVar1 != &param_2->String) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_2->String).Data.AllocatorInstance.Data;
    (param_2->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubPathString).Data.ArrayNum = (param_2->String).Data.ArrayNum;
    (this->SubPathString).Data.ArrayMax = (param_2->String).Data.ArrayMax;
    (param_2->String).Data.ArrayNum = 0;
    (param_2->String).Data.ArrayMax = 0;
  }
  pFVar2 = (param_2->String).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetPath @ 14222b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSoftObjectPath::SetPath(FSoftObjectPath *this,UObject *param_1)

{
  longlong *plVar1;
  FUtf8String *pFVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UObject *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  ForElementType<FName> FVar14;
  longlong lVar15;
  uchar *_Dst;
  wchar_t *pwVar16;
  undefined1 auStack_ad8 [32];
  uchar *local_ab8;
  ForElementType<FName> local_ab0;
  longlong local_aa8;
  longlong local_aa0;
  undefined8 local_a98;
  uchar local_a88 [8];
  FUtf8String local_a80;
  uchar local_a70 [8];
  FName local_a68 [2];
  ForElementType<FName> local_a58;
  int local_850;
  int local_84c;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_ad8;
  if (param_1 == (UObject *)0x0) {
    (this->AssetPath).AssetName.ComparisonIndex = 0;
    (this->AssetPath).AssetName.Number = 0;
    (this->AssetPath).PackageName.ComparisonIndex = 0;
    (this->AssetPath).PackageName.Number = 0;
    FUtf8String::Reset(&this->SubPathString,0);
  }
  else {
    pUVar3 = *(UObject **)&param_1->field_0x20;
    if (pUVar3 == (UObject *)0x0) {
      local_a70[0] = '\0';
      local_a70[1] = '\0';
      local_a70[2] = '\0';
      local_a70[3] = '\0';
      local_a70[4] = '\0';
      local_a70[5] = '\0';
      local_a70[6] = '\0';
      local_a70[7] = '\0';
      pUVar13 = CastChecked<UPackage,UObject_const_>(param_1);
      uVar7 = *(undefined4 *)((longlong)&pUVar13->_padding_ + 4);
      (this->AssetPath).PackageName.ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&pUVar13->_padding_;
      (this->AssetPath).PackageName.Number = uVar7;
      (this->AssetPath).AssetName.ComparisonIndex = 0;
      (this->AssetPath).AssetName.Number = 0;
      FUtf8String::Empty(&this->SubPathString);
    }
    else {
      plVar1 = (longlong *)&pUVar3->field_0x20;
      if (*(longlong *)&pUVar3->field_0x20 == 0) {
        uVar8 = *(undefined4 *)&param_1->field_0x18;
        uVar9 = *(undefined4 *)&param_1->field_0x1c;
        pUVar13 = CastChecked<UPackage,UObject_const_>(pUVar3);
        uVar7 = *(undefined4 *)((longlong)&pUVar13->_padding_ + 4);
        (this->AssetPath).PackageName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar13->_padding_;
        (this->AssetPath).PackageName.Number = uVar7;
        (this->AssetPath).AssetName.ComparisonIndex = (FNameEntryId)uVar8;
        (this->AssetPath).AssetName.Number = uVar9;
        FUtf8String::Empty(&this->SubPathString);
      }
      else {
        local_84c = 0x40;
        local_a58.SecondaryData = (ForElementType<FName>)0x0;
        local_850 = 0;
        lVar15 = *plVar1;
        lVar10 = local_aa8;
        while (pUVar6 = pUVar3, lVar15 != 0) {
          local_a88[0] = param_1->field_0x18;
          local_a88[1] = param_1->field_0x19;
          local_a88[2] = param_1->field_0x1a;
          local_a88[3] = param_1->field_0x1b;
          local_a88[4] = param_1->field_0x1c;
          local_a88[5] = param_1->field_0x1d;
          local_a88[6] = param_1->field_0x1e;
          local_a88[7] = param_1->field_0x1f;
          FVar14 = (ForElementType<FName>)&local_a58;
          if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
            FVar14 = local_a58.SecondaryData;
          }
          if ((ulonglong)FVar14 <= local_a88) {
            local_aa8 = (longlong)local_84c;
            FVar14 = (ForElementType<FName>)&local_a58;
            if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
              FVar14 = local_a58.SecondaryData;
            }
            if (local_a88 < (uchar *)((longlong)FVar14 + local_aa8 * 8)) {
              local_aa0 = (longlong)local_850;
              local_a98 = 8;
              local_ab8 = local_a88;
              local_ab0 = (ForElementType<FName>)&local_a58;
              if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
                local_ab0 = local_a58.SecondaryData;
              }
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              lVar10 = local_aa8;
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
          }
          local_aa8 = lVar10;
          if (local_850 == local_84c) {
            local_850 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                  (0x408,&local_a58,&local_84c);
          }
          lVar15 = (longlong)local_850;
          FVar14 = (ForElementType<FName>)&local_a58;
          if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
            FVar14 = local_a58.SecondaryData;
          }
          local_850 = local_850 + 1;
          *(uchar (*) [8])((longlong)FVar14 + lVar15 * 8) = local_a88;
          pUVar3 = (UObject *)*plVar1;
          plVar1 = (longlong *)&pUVar3->field_0x20;
          lVar15 = *(longlong *)&pUVar3->field_0x20;
          param_1 = pUVar6;
          lVar10 = local_aa8;
        }
        uVar8 = *(undefined4 *)&param_1->field_0x18;
        uVar9 = *(undefined4 *)&param_1->field_0x1c;
        local_aa8 = lVar10;
        pUVar13 = CastChecked<UPackage,UObject_const_>(pUVar6);
        uVar7 = *(undefined4 *)((longlong)&pUVar13->_padding_ + 4);
        (this->AssetPath).PackageName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar13->_padding_;
        (this->AssetPath).PackageName.Number = uVar7;
        local_848.CurPos = local_828;
        (this->AssetPath).AssetName.ComparisonIndex = (FNameEntryId)uVar8;
        (this->AssetPath).AssetName.Number = uVar9;
        local_848.Base = local_828;
        local_848.End = (wchar_t *)local_28;
        local_848.bIsDynamic = false;
        local_848.bIsExternal = false;
        while (local_850 != 0) {
          if (local_850 < 1) {
            local_ab0 = (ForElementType<FName>)(longlong)local_850;
            local_ab8 = (uchar *)0x0;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar12 = local_850 + -1;
          FVar14 = (ForElementType<FName>)&local_a58;
          if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
            FVar14 = local_a58.SecondaryData;
          }
          local_a68[0] = *(FName *)((longlong)FVar14 + (longlong)iVar12 * 8);
          FVar14 = (ForElementType<FName>)&local_a58;
          if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
            FVar14 = local_a58.SecondaryData;
          }
          _Dst = (uchar *)((longlong)FVar14 + (longlong)iVar12 * 8);
          iVar12 = (local_850 - iVar12) + -1;
          if (iVar12 != 0) {
            memmove(_Dst,_Dst + 8,(longlong)iVar12 << 3);
          }
          local_850 = local_850 + -1;
          ::FName::AppendString(local_a68,&local_848);
          if (local_848.End < local_848.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_848,1);
          }
          *local_848.CurPos = L'.';
          local_848.CurPos = local_848.CurPos + 1;
        }
        if (((int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount <= Len()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                ,0xe8,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pwVar16 = local_848.CurPos + -1;
        bVar11 = local_848.End < local_848.CurPos;
        local_848.CurPos = pwVar16;
        if (bVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_848,1);
        }
        *local_848.CurPos = L'\0';
        FUtf8String::FUtf8String(&local_a80,local_848.Base);
        pFVar2 = &this->SubPathString;
        if (pFVar2 != &local_a80) {
          pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pFVar2->Data).AllocatorInstance.Data = local_a80.Data.AllocatorInstance.Data;
          (this->SubPathString).Data.ArrayNum = local_a80.Data.ArrayNum;
          (this->SubPathString).Data.ArrayMax = local_a80.Data.ArrayMax;
          local_a80.Data.ArrayNum = 0;
          local_a80.Data.ArrayMax = 0;
          local_a80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a80.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
        if (local_a58.SecondaryData != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)local_a58.SecondaryData);
        }
      }
    }
  }
  return;
}

// SetPath @ 14222b580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSoftObjectPath::SetPath(FSoftObjectPath *this,TStringView<char> *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_248.End = (wchar_t *)local_28;
  pcVar1 = param_1->DataPtr;
  iVar2 = (int)*(undefined8 *)&param_1->Size;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  if (local_28 < local_228 + iVar2) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,(longlong)iVar2);
  }
  if (iVar2 != 0) {
    local_248.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_248.CurPos,iVar2,pcVar1,iVar2);
  }
  local_258.Size = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_258.DataPtr = local_248.Base;
  SetPath(this,&local_258);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return;
}

// SetPath @ 14222b680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSoftObjectPath::SetPath(FSoftObjectPath *this,TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_248.Base = local_228;
  puVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  local_248.CurPos = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.End = (wchar_t *)local_28;
  iVar2 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar3);
  if (local_248.End < local_248.CurPos + iVar2) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,(longlong)iVar2);
  }
  if (iVar3 != 0) {
    local_248.CurPos = UE::Core::Private::Convert(local_248.CurPos,iVar2,puVar1,iVar3);
  }
  local_258.Size = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_258.DataPtr = local_248.Base;
  SetPath(this,&local_258);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return;
}

// SetPath @ 14222b790

void __thiscall FSoftObjectPath::SetPath(FSoftObjectPath *this,TStringView<wchar_t> *param_1)

{
  ushort uVar1;
  FName FVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TStringView<wchar_t> *pTVar11;
  wchar_t *pwVar12;
  FName *pFVar13;
  FUtf8String *pFVar14;
  ulonglong uVar15;
  int iVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  FName local_res18;
  FName local_res20;
  FUtf8String local_108;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  undefined8 uStack_e0;
  FName local_d8;
  FName FStack_d0;
  FName local_c8;
  FName FStack_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8 [2];
  TStringView<wchar_t> local_98;
  FUtf8String local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  iVar10 = param_1->Size;
  if ((iVar10 == 0) ||
     ((iVar7 = wcsncmp(param_1->DataPtr,L"None",(longlong)iVar10), iVar7 == 0 &&
      (*(short *)(&u_None + (longlong)iVar10 * 2) == 0)))) {
    (this->AssetPath).AssetName.ComparisonIndex = 0;
    (this->AssetPath).AssetName.Number = 0;
    (this->AssetPath).PackageName.ComparisonIndex = 0;
    (this->AssetPath).PackageName.Number = 0;
    FUtf8String::Reset(&this->SubPathString,0);
    return;
  }
  local_98.DataPtr = param_1->DataPtr;
  local_98.Size = param_1->Size;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar11 = FPackageName::ExportTextPathToObjectPath(&local_78,&local_98);
  iVar10 = pTVar11->Size;
  uVar5 = *(undefined4 *)&pTVar11->field_0xc;
  param_1->DataPtr = pTVar11->DataPtr;
  param_1->Size = iVar10;
  *(undefined4 *)&param_1->field_0xc = uVar5;
  iVar10 = param_1->Size;
  if ((iVar10 < 1) || (pwVar19 = param_1->DataPtr, *pwVar19 != L'/')) {
LAB_14222bd22:
    (this->AssetPath).AssetName.ComparisonIndex = 0;
    (this->AssetPath).AssetName.Number = 0;
    (this->AssetPath).PackageName.ComparisonIndex = 0;
    (this->AssetPath).PackageName.Number = 0;
LAB_14222b9f3:
    FUtf8String::Reset(&this->SubPathString,0);
    return;
  }
  pwVar12 = TStringView<wchar_t>::operator[](param_1,iVar10 + -1);
  uVar15 = 0;
  if ((ushort)*pwVar12 < 0x40) {
    uVar15 = 1L << ((byte)*pwVar12 & 0x3f);
  }
  if ((uVar15 & 0x400400000000000) != 0) goto LAB_14222bd22;
  iVar7 = 2;
  if (2 < iVar10) {
    lVar18 = 4;
    do {
      if (((iVar7 < 0) || (iVar10 <= iVar7)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pwVar19 = param_1->DataPtr;
      if (((-(ulonglong)(*(ushort *)((longlong)pwVar19 + lVar18) < 0x40) & 0x400400000000000) >>
           ((byte)*(ushort *)((longlong)pwVar19 + lVar18) & 0x3f) & 1) != 0) {
        if (((iVar7 + -1 < 0) || (iVar10 <= iVar7 + -1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pwVar19 = param_1->DataPtr;
        uVar1 = *(ushort *)((longlong)pwVar19 + lVar18 + -2);
        if (((-(ulonglong)(uVar1 < 0x40) & 0x400400000000000) >> (ulonglong)((byte)uVar1 & 0x3f) & 1
            ) != 0) {
          (this->AssetPath).AssetName.ComparisonIndex = 0;
          (this->AssetPath).AssetName.Number = 0;
          (this->AssetPath).PackageName.ComparisonIndex = 0;
          (this->AssetPath).PackageName.Number = 0;
          goto LAB_14222b9f3;
        }
      }
      iVar10 = param_1->Size;
      iVar7 = iVar7 + 1;
      lVar18 = lVar18 + 2;
    } while (iVar7 < iVar10);
  }
  local_68 = param_1->DataPtr;
  uStack_60 = *(undefined8 *)&param_1->Size;
  pwVar12 = pwVar19;
  while ((pwVar12 != pwVar19 + (int)*(undefined8 *)&param_1->Size &&
         (((-(ulonglong)((ushort)*pwVar12 < 0x40) & 0x400400000000000) >> ((byte)*pwVar12 & 0x3f) &
          1) == 0))) {
    pwVar12 = pwVar12 + 1;
  }
  iVar10 = param_1->Size;
  iVar7 = (int)((longlong)pwVar12 - (longlong)pwVar19 >> 1);
  if (iVar7 == iVar10) {
    pFVar13 = ::FName::FName(&local_res18,iVar7,pwVar19,FNAME_Add);
    local_e8 = *pFVar13;
    uStack_e0 = 0;
    (this->AssetPath).PackageName = local_e8;
    (this->AssetPath).AssetName.ComparisonIndex = 0;
    (this->AssetPath).AssetName.Number = 0;
    FUtf8String::Empty(&this->SubPathString);
    return;
  }
  iVar8 = (iVar10 - iVar7) + -1;
  iVar16 = iVar10;
  if (iVar8 < iVar10) {
    iVar16 = iVar8;
  }
  iStack_f0 = 0;
  if (0 < iVar16) {
    iStack_f0 = iVar16;
  }
  local_f8 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_f0);
  param_1->DataPtr = local_f8;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_ec,iStack_f0);
  if (param_1->Size == 0) {
LAB_14222baa8:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Path.IsEmpty() && !Delimiters.Contains(Path[0])",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                       ,0xec,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((param_1->Size < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((-(ulonglong)((ushort)*param_1->DataPtr < 0x40) & 0x400400000000000) >>
         ((byte)*param_1->DataPtr & 0x3f) & 1) != 0) goto LAB_14222baa8;
  }
  pwVar12 = param_1->DataPtr;
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  pwVar17 = pwVar12;
  while ((pwVar17 != pwVar12 + (int)*(undefined8 *)&param_1->Size &&
         (((-(ulonglong)((ushort)*pwVar17 < 0x40) & 0x400400000000000) >> ((byte)*pwVar17 & 0x3f) &
          1) == 0))) {
    pwVar17 = pwVar17 + 1;
  }
  iVar10 = param_1->Size;
  iVar16 = (int)((longlong)pwVar17 - (longlong)pwVar12 >> 1);
  if (iVar16 == iVar10) {
    pFVar13 = ::FName::FName(&local_res20,iVar16,pwVar12,FNAME_Add);
    FVar2 = *pFVar13;
    pFVar13 = ::FName::FName(&local_b8,iVar7,pwVar19,FNAME_Add);
    local_d8 = *pFVar13;
    (this->AssetPath).PackageName = local_d8;
    (this->AssetPath).AssetName = FVar2;
    FStack_d0 = FVar2;
    FUtf8String::Empty(&this->SubPathString);
    return;
  }
  iVar9 = (iVar10 - iVar16) + -1;
  iVar8 = iVar10;
  if (iVar9 < iVar10) {
    iVar8 = iVar9;
  }
  iStack_f0 = 0;
  if (0 < iVar8) {
    iStack_f0 = iVar8;
  }
  local_f8 = pwVar12 + ((longlong)iVar10 - (longlong)iStack_f0);
  param_1->DataPtr = local_f8;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_ec,iStack_f0);
  if (param_1->Size != 0) {
    if ((param_1->Size < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((-(ulonglong)((ushort)*param_1->DataPtr < 0x40) & 0x400400000000000) >>
         ((byte)*param_1->DataPtr & 0x3f) & 1) == 0) goto LAB_14222bc47;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Path.IsEmpty() && !Delimiters.Contains(Path[0])",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                     ,0xf8,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14222bc47:
  pFVar13 = ::FName::FName(&local_b0,iVar16,pwVar12,FNAME_Add);
  FVar2 = *pFVar13;
  pFVar13 = ::FName::FName(local_a8,iVar7,pwVar19,FNAME_Add);
  uVar3 = *(undefined8 *)&param_1->Size;
  pwVar19 = param_1->DataPtr;
  local_c8 = *pFVar13;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  (this->AssetPath).PackageName = local_c8;
  (this->AssetPath).AssetName = FVar2;
  FStack_c0 = FVar2;
  pFVar14 = FUtf8String::ConstructFromPtrSize(&local_88,pwVar19,(int)uVar3);
  if (&local_108 != pFVar14) {
    local_108.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_108.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar14 = &this->SubPathString;
  FUtf8String::operator=(pFVar14,&local_108);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  iVar10 = isalpha(0x3a);
  if (iVar10 != 0) {
    FUtf8String::ReplaceCharInlineIgnoreCase(pFVar14,':','.');
    return;
  }
  FUtf8String::ReplaceCharInlineCaseSensitive(pFVar14,':','.');
  return;
}

// ToString @ 142231960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FSoftObjectPath::ToString(FSoftObjectPath *this,FString *__return_storage_ptr__)

{
  FName FVar1;
  undefined1 auStack_888 [32];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_888;
  FVar1 = (this->AssetPath).PackageName;
  if ((this->SubPathString).Data.ArrayNum < 2) {
    if (FVar1 == (FName)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
    }
    else {
      FTopLevelAssetPath::ToString(&this->AssetPath,__return_storage_ptr__);
    }
  }
  else {
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    if (FVar1 != (FName)0x0) {
      ::FName::AppendString((FName *)this,&local_868);
      if ((this->AssetPath).AssetName != (FName)0x0) {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'.';
        local_868.CurPos = local_868.CurPos + 1;
        ::FName::AppendString(&(this->AssetPath).AssetName,&local_868);
      }
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L':';
    local_868.CurPos = local_868.CurPos + 1;
    operator<<<wchar_t,FUtf8String_const_&>(&local_868,&this->SubPathString);
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(__return_storage_ptr__,local_868.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  return __return_storage_ptr__;
}

// ToString @ 142231ae0

void __thiscall
FSoftObjectPath::ToString(FSoftObjectPath *this,TStringBuilderBase<char8_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    ::operator<<(param_1,&this->AssetPath);
    iVar1 = (this->SubPathString).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      *param_1->CurPos = ':';
      param_1->CurPos = param_1->CurPos + 1;
      iVar1 = (this->SubPathString).Data.ArrayNum;
      pFVar2 = (this->SubPathString).Data.AllocatorInstance.Data;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      uVar4 = (ulong64)iVar5;
      if (param_1->End < param_1->CurPos + uVar4) {
        TStringBuilderBase<char8_t>::Extend(param_1,uVar4);
      }
      if (iVar5 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,pFVar2,uVar4);
        param_1->CurPos = (uchar *)((longlong)pvVar3 + uVar4);
      }
    }
  }
  return;
}

// ToString @ 142231bc0

void __thiscall
FSoftObjectPath::ToString(FSoftObjectPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((this->AssetPath).PackageName != (FName)0x0) {
    ::operator<<(param_1,&this->AssetPath);
    iVar1 = (this->SubPathString).Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L':';
      param_1->CurPos = param_1->CurPos + 1;
      operator<<<wchar_t,FUtf8String_const_&>(param_1,&this->SubPathString);
    }
  }
  return;
}

// TryLoad @ 142232d30

UObject * __thiscall
FSoftObjectPath::TryLoad(FSoftObjectPath *this,FUObjectSerializeContext *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  UObject *pUVar6;
  FString *pFVar7;
  size_t sVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  UObject *local_res8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FSoftObjectPath local_78;
  FString local_58;
  FSoftObjectPath local_48;
  
  pFVar12 = (FScriptContainerElement *)0x0;
  local_res8 = (UObject *)0x0;
  if ((this->AssetPath).PackageName == (FName)0x0) {
    return (UObject *)0x0;
  }
  iVar14 = 0;
  if (1 < (this->SubPathString).Data.ArrayNum) {
    local_78.AssetPath.PackageName = (this->AssetPath).PackageName;
    local_78.AssetPath.AssetName = (this->AssetPath).AssetName;
    local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.SubPathString.Data.ArrayNum = 0;
    local_78.SubPathString.Data.ArrayMax = 0;
    FUtf8String::Empty(&local_78.SubPathString);
    pUVar6 = TryLoad(&local_78,param_1);
    if ((((this->AssetPath).PackageName == (FName)0x0) ||
        (((bVar4 = IsInGameThread(), bVar4 && (GIsSavingPackage != false)) ||
         (local_res8 = ResolveObjectInternal(this),
         FVar10.Data = local_78.SubPathString.Data.AllocatorInstance.Data,
         local_res8 == (UObject *)0x0)))) &&
       (FVar10.Data = local_78.SubPathString.Data.AllocatorInstance.Data, pUVar6 != (UObject *)0x0))
    {
      pcVar2 = *(code **)(*(longlong *)pUVar6 + 0x88);
      iVar1 = (this->SubPathString).Data.ArrayNum;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar13 = iVar14;
      }
      pFVar7 = ::FString::ConstructFromPtrSize
                         (&local_88,(uchar *)(this->SubPathString).Data.AllocatorInstance.Data,
                          iVar13);
      if (&local_58 != pFVar7) {
        pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar14 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar11 = (FScriptContainerElement *)L"";
      if (iVar14 != 0) {
        pFVar11 = pFVar12;
      }
      (*pcVar2)(pUVar6,pFVar11,&local_res8,1);
      FVar10.Data = local_78.SubPathString.Data.AllocatorInstance.Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
        FVar10.Data = local_78.SubPathString.Data.AllocatorInstance.Data;
      }
    }
    goto LAB_14223300a;
  }
  ToString(this,&local_88);
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8._8_8_ = (ulonglong)local_78.AssetPath.AssetName & 0xffffffff00000000;
  if (local_88.Data.ArrayNum == 0) {
    local_98.DataPtr = L"";
LAB_142232ebd:
    sVar8 = wcslen(local_98.DataPtr);
    iVar14 = (int)sVar8;
  }
  else {
    local_98.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_142232ebd;
  }
  local_98.Size = iVar14;
  pUVar9 = Z_Construct_UClass_UObject_NoRegister();
  local_res8 = StaticLoadObject(pUVar9,(UObject *)0x0,&local_98,&local_a8,0,(UPackageMap *)0x0,true,
                                (FLinkerInstancingContext *)0x0);
  if ((local_res8 == (UObject *)0x0) && (SoftObjectPath::bResolveCoreRedirects != false)) {
    FSoftObjectPath(&local_48,this);
    bVar4 = FixupCoreRedirects(&local_48);
    if (bVar4) {
      local_98.Size = 0;
      local_98._12_4_ = 0;
      local_98.DataPtr = (wchar_t *)0x0;
      pFVar7 = ToString(&local_48,(FString *)&local_78);
      if ((pFVar7->Data).ArrayNum == 0) {
        local_a8.DataPtr = L"";
LAB_142232f68:
        sVar8 = wcslen(local_a8.DataPtr);
        uVar5 = (undefined4)sVar8;
      }
      else {
        local_a8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        uVar5 = 0;
        if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0)
        goto LAB_142232f68;
      }
      local_a8.Size = uVar5;
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      local_res8 = StaticLoadObject(pUVar9,(UObject *)0x0,&local_a8,&local_98,0,(UPackageMap *)0x0,
                                    true,(FLinkerInstancingContext *)0x0);
      if (local_78.AssetPath.PackageName != (FName)0x0) {
        FMemory::Free((void *)local_78.AssetPath.PackageName);
      }
    }
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  while (pUVar6 = local_res8, FVar10.Data = local_88.Data.AllocatorInstance.Data,
        local_res8 != (UObject *)0x0) {
    pUVar9 = UObjectRedirector::GetPrivateStaticClass();
    lVar3 = *(longlong *)&pUVar6->field_0x10;
    iVar14 = (int)pUVar9->_padding_;
    FVar10.Data = local_88.Data.AllocatorInstance.Data;
    if ((*(int *)(lVar3 + 0x38) < iVar14) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar9->_padding_)) break;
    local_res8 = *(UObject **)(pUVar6 + 1);
  }
LAB_14223300a:
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return local_res8;
}

