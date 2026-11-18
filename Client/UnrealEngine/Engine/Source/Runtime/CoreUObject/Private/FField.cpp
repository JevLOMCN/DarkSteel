// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 45

// GetInnerFieldByName @ 141f81f80

FField * __thiscall FField::GetInnerFieldByName(FField *this,FName *param_1)

{
  return (FField *)0x0;
}

// GetInnerFields @ 141f81f90

void __thiscall
FField::GetInnerFields(FField *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetOwner<FField> @ 141fb9a90

FField * __thiscall FField::GetOwner<FField>(FField *this)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  
  pFVar4 = StaticClass();
  if (((*(byte *)&(this->Owner).Container & 1) == 0) &&
     (pFVar5 = (this->Owner).Container.Field, pFVar5 != (FField *)0x0)) {
    if ((pFVar4 == (FFieldClass *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FField *)(*pcVar2)();
      return pFVar5;
    }
    pFVar1 = pFVar5->ClassPrivate;
    if (pFVar4->Id == CASTCLASS_None) {
      for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar4) {
          bVar3 = true;
          goto LAB_141fb9b10;
        }
      }
      bVar3 = false;
    }
    else {
      bVar3 = (pFVar1->CastFlags & pFVar4->Id) != CASTCLASS_None;
    }
LAB_141fb9b10:
    if (bVar3) {
      return (this->Owner).Container.Field;
    }
  }
  return (FField *)0x0;
}

// FField @ 141fbd7d0

FField * __thiscall
FField::FField(FField *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7FField__6B_;
  uVar1 = *(ulonglong *)param_1.Container;
  (this->Owner).Container.Unknown = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  this->Next = (FField *)0x0;
  this->NamePrivate = *param_2;
  this->FlagsPrivate = param_3;
  return this;
}

// FField @ 141fbd840

FField * __thiscall FField::FField(FField *this,EInternal param_1,FFieldClass *param_2)

{
  this->ClassPrivate = param_2;
  this->_padding_ = (longlong)&___7FField__6B_;
  (this->Owner).Container.Field = (FField *)0x0;
  this->Next = (FField *)0x0;
  (this->NamePrivate).ComparisonIndex = 0;
  (this->NamePrivate).Number = 0;
  this->FlagsPrivate = RF_NoFlags;
  return this;
}

// ~FField @ 141fbfc90

void __thiscall FField::~FField(FField *this)

{
  this->_padding_ = (longlong)&___7FField__6B_;
  return;
}

// AddCppProperty @ 141fc3de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FField::AddCppProperty(FField *this,FProperty *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
  return;
}

// AddReferencedObjects @ 141fc51f0

void __thiscall FField::AddReferencedObjects(FField *this,FReferenceCollector *param_1)

{
  UObject *local_res8;
  
  if ((*(byte *)&(this->Owner).Container & 1) == 0) {
    local_res8 = (UObject *)0x0;
  }
  else {
    local_res8 = (UObject *)((this->Owner).Container.Unknown & 0xfffffffffffffffe);
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (local_res8 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res8);
  }
  if ((local_res8 != (UObject *)0x0) &&
     ((**(code **)(param_1->_padding_ + 0x88))(param_1,&local_res8,0,0),
     local_res8 == (UObject *)0x0)) {
    (this->Owner).Container.Field = (FField *)0x0;
  }
  return;
}

// BeginDestroy @ 141fc6280

void __thiscall FField::BeginDestroy(FField *this)

{
  return;
}

// Bind @ 141fc62c0

void __thiscall FField::Bind(FField *this)

{
  return;
}

// Construct @ 141fc74c0

FField * __cdecl FField::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  return (FField *)0x0;
}

// Construct @ 141fc74d0

FField * __cdecl
FField::Construct(FName *param_1,FFieldVariant *param_2,FName *param_3,EObjectFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FName,FFieldClass_*> *pTVar3;
  FField *pFVar4;
  longlong *plVar5;
  FString local_18;
  
  this = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
          *)FFieldClass::GetNameToFieldClassMap();
  pTVar3 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
           ::Find(this,*param_1);
  plVar5 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FFieldClass_*> *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    ::FName::ToString(param_1,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldClassPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x359,L"Field type %s does not exist");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FField *)(*pcVar1)();
      return pFVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141fc759d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FField *)
           (**(code **)(*plVar5 + 0x30))(param_2,param_3,param_4,*(code **)(*plVar5 + 0x30));
  return pFVar4;
}

// Duplicate @ 141fc9c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FField * __cdecl
FField::Duplicate(FField *param_1,FFieldVariant param_2,FName param_3,EObjectFlags param_4,
                 EInternalObjectFlags param_5)

{
  EObjectFlags EVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  FField *pFVar5;
  FName *pFVar6;
  FName local_res8;
  FName local_res10;
  
  if (param_1 == (FField *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InField",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x350,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FField *)(*pcVar3)();
      return pFVar5;
    }
  }
  EVar1 = param_1->FlagsPrivate;
  pFVar2 = param_1->ClassPrivate;
  if (param_3 == (FName)0x0) {
    bVar4 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar4) {
      local_res8 = param_1->NamePrivate;
      pFVar6 = &local_res8;
    }
    else {
      pFVar6 = &local_res8;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
  }
  else {
    pFVar6 = &local_res10;
    local_res10 = param_3;
  }
  pFVar5 = (*pFVar2->ConstructFn)((FFieldVariant *)param_2.Container,pFVar6,EVar1 & param_4);
  (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5,param_1);
  return pFVar5;
}

// GenerateFFieldName @ 141fcd7c0

FName __cdecl FField::GenerateFFieldName(FFieldVariant param_1,FFieldClass *param_2)

{
  FName *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  FName *in_R8;
  FString local_18;
  
  if (in_R8 == (FName *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x369,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  LOCK();
  pFVar1 = in_R8 + 7;
  uVar2 = (pFVar1->ComparisonIndex).Value;
  (pFVar1->ComparisonIndex).Value = (pFVar1->ComparisonIndex).Value + 1;
  UNLOCK();
  ::FName::ToString(in_R8,&local_18);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1.Container,(wchar_t *)FVar6.Data,uVar2 + 1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1.Container.Field;
}

// GetAuthoredName @ 141fcda50

FString * __thiscall FField::GetAuthoredName(FField *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetOwnerUObject(this);
  if (pUVar2 == (UObject *)0x0) goto LAB_141fcda96;
  while( true ) {
    pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) break;
LAB_141fcda96:
    pUVar2 = *(UObject **)&pUVar2->field_0x20;
    if (pUVar2 == (UObject *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  (**(code **)(*(longlong *)pUVar2 + 0x328))(pUVar2,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetFieldSize @ 141fcf3d0

ulong64 __thiscall FField::GetFieldSize(FField *this)

{
  return 0x30;
}

// GetFullName @ 141fcf650

FString * __thiscall FField::GetFullName(FField *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  ::FName::ToString(&this->ClassPrivate->Name,__return_storage_ptr__);
  ::FString::AppendChars(__return_storage_ptr__,L" ",1);
  pFVar2 = GetPathName(this,&local_18,(UObject *)0x0);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLinker @ 141fd1010

FLinkerLoad * __thiscall FField::GetLinker(FField *this)

{
  UObject *this_00;
  FLinkerLoad *pFVar1;
  
  this_00 = GetOwnerUObject(this);
  if (this_00 != (UObject *)0x0) {
    pFVar1 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
    return pFVar1;
  }
  return (FLinkerLoad *)0x0;
}

// GetOutermost @ 141fd1a70

UPackage * __thiscall FField::GetOutermost(FField *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UPackage *pUVar3;
  
  this_00 = GetOwnerUObject(this);
  if (this_00 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerUObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPackage *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
  return pUVar3;
}

// GetOwnerClass @ 141fd1b60

UClass * __thiscall FField::GetOwnerClass(FField *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar2 = GetOwnerUObject(this);
  pUVar3 = (UClass *)CastChecked<UField,UObject>(pUVar2);
  if (pUVar3 == (UClass *)0x0) {
    return (UClass *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar4->_padding_)) {
    return pUVar3;
  }
  pUVar3 = UField::GetOwnerClass((UField *)pUVar3);
  return pUVar3;
}

// GetOwnerStruct @ 141fd1c70

UStruct * __thiscall FField::GetOwnerStruct(FField *this)

{
  int iVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStruct *)GetOwnerUObject(this);
  if (pUVar2 == (UStruct *)0x0) goto LAB_141fd1ca6;
  while( true ) {
    pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) break;
LAB_141fd1ca6:
    pUVar2 = (UStruct *)pUVar2->_padding_;
    if (pUVar2 == (UStruct *)0x0) {
      return (UStruct *)0x0;
    }
  }
  return pUVar2;
}

// GetOwnerUField @ 141fd1cd0

UField * __thiscall FField::GetOwnerUField(FField *this)

{
  UObject *pUVar1;
  UField *pUVar2;
  
  pUVar1 = GetOwnerUObject(this);
  pUVar2 = CastChecked<UField,UObject>(pUVar1);
  return pUVar2;
}

// GetOwnerUObject @ 141fd1cf0

UObject * __thiscall FField::GetOwnerUObject(FField *this)

{
  ulonglong uVar1;
  UObject *pUVar2;
  
  uVar1 = (this->Owner).Container.Unknown;
  if ((uVar1 & 1) != 0) {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((uVar1 & 1) != 0) goto LAB_141fd1d4e;
  }
  do {
    do {
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_141fd1d4e;
      uVar1 = *(ulonglong *)(uVar1 + 0x10);
    } while ((uVar1 & 1) == 0);
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
  } while ((uVar1 & 1) == 0);
LAB_141fd1d4e:
  pUVar2 = (UObject *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) == 0) {
    pUVar2 = (UObject *)0x0;
  }
  return pUVar2;
}

// GetPathName @ 141fd21e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FField::GetPathName(FField *this,FString *__return_storage_ptr__,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_278 [32];
  FString local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  GetPathName(this,param_1,&local_248);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_258,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// GetPathName @ 141fd22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FField::GetPathName(FField *this,UObject *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<FName> FVar4;
  void *pvVar5;
  longlong lVar6;
  UObjectBaseUtility *pUVar7;
  uint uVar8;
  UObjectBaseUtility *this_00;
  FName *pFVar9;
  undefined1 auStack_148 [32];
  FName *local_128;
  ForElementType<FName> local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  FName local_f8;
  FName local_f0 [3];
  ForElementType<FName> local_d8;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pvVar5 = (void *)(this->Owner).Container.Unknown;
  pUVar7 = (UObjectBaseUtility *)0x0;
  local_d8.SecondaryData = (ForElementType<FName>)0x0;
  local_4c = 0x10;
  local_50 = 0;
  if ((((ulonglong)pvVar5 & 1) == 0) ||
     ((UObject *)((ulonglong)pvVar5 & 0xfffffffffffffffe) == (UObject *)0x0)) {
    if (((ulonglong)pvVar5 & 0xfffffffffffffffe) == 0) goto LAB_141fd24e0;
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pvVar5 & 0xfffffffffffffffe));
  }
LAB_141fd2341:
  do {
    if (((ulonglong)pvVar5 & 1) != 0) {
      this_00 = (UObjectBaseUtility *)((ulonglong)pvVar5 & 0xfffffffffffffffe);
      if (((ulonglong)pvVar5 & 1) == 0) {
        this_00 = pUVar7;
      }
      UObjectBaseUtility::GetPathName(this_00,param_1,param_2);
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = L':';
      param_2->CurPos = param_2->CurPos + 1;
      break;
    }
    bVar2 = IsThisNotNull(pvVar5,"FField::GetFName");
    if (bVar2) {
      local_f8 = *(FName *)((longlong)pvVar5 + 0x20);
    }
    else {
      local_f8.ComparisonIndex.Value = 0;
      local_f8.Number = 0;
    }
    FVar4 = (ForElementType<FName>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
      FVar4 = local_d8.SecondaryData;
    }
    if ((ulonglong)FVar4 <= &local_f8) {
      FVar4 = (ForElementType<FName>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar4 = local_d8.SecondaryData;
      }
      if (&local_f8 < (FName *)((longlong)FVar4 + (longlong)(int)local_4c * 8)) {
        local_110 = (longlong)(int)local_50;
        local_108 = 8;
        local_128 = &local_f8;
        local_120 = (ForElementType<FName>)&local_d8;
        if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
          local_120 = local_d8.SecondaryData;
        }
        local_118 = (longlong)(int)local_4c;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,&local_d8,(int *)&local_4c);
    }
    FVar4 = (ForElementType<FName>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
      FVar4 = local_d8.SecondaryData;
    }
    lVar6 = (longlong)(int)local_50;
    local_50 = local_50 + 1;
    *(FName *)((longlong)FVar4 + lVar6 * 8) = local_f8;
    pvVar5 = *(void **)((longlong)pvVar5 + 0x10);
    if (((ulonglong)pvVar5 & 1) != 0) {
      if (((UObject *)((ulonglong)pvVar5 & 0xfffffffffffffffe) == (UObject *)0x0) ||
         (UE::GC::GIsIncrementalReachabilityPending == false)) {
        if (((ulonglong)pvVar5 & 0xfffffffffffffffe) == 0) goto LAB_141fd248d;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pvVar5 & 0xfffffffffffffffe));
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pvVar5 & 0xfffffffffffffffe));
        goto LAB_141fd2341;
      }
    }
LAB_141fd248d:
  } while (((ulonglong)pvVar5 & 0xfffffffffffffffe) != 0);
  pUVar7 = (UObjectBaseUtility *)(ulonglong)local_50;
LAB_141fd24e0:
  uVar8 = (int)pUVar7 - 1;
  if (-1 < (int)uVar8) {
    pFVar9 = (FName *)(longlong)(int)uVar8;
    while( true ) {
      uVar3 = 0;
      if ((int)uVar8 < (int)pUVar7) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_120 = (ForElementType<FName>)(longlong)(int)pUVar7;
        local_128 = pFVar9;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar4 = (ForElementType<FName>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar4 = local_d8.SecondaryData;
      }
      ::FName::AppendString((FName *)((longlong)FVar4 + (longlong)pFVar9 * 8),param_2);
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      pvVar5 = FGenericPlatformString::Memcpy(param_2->CurPos,L".",2);
      pFVar9 = (FName *)((longlong)&pFVar9[-1].Number + 3);
      uVar8 = uVar8 - 1;
      param_2->CurPos = (wchar_t *)((longlong)pvVar5 + 2);
      if ((int)uVar8 < 0) break;
      pUVar7 = (UObjectBaseUtility *)(ulonglong)local_50;
    }
  }
  bVar2 = IsThisNotNull(this,"FField::GetFName");
  if (bVar2) {
    local_f0[0] = this->NamePrivate;
  }
  else {
    local_f0[0].ComparisonIndex.Value = 0;
    local_f0[0].Number = 0;
  }
  ::FName::AppendString(local_f0,param_2);
  if (local_d8.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_d8.SecondaryData);
  }
  return;
}

// GetPreloadDependencies @ 141fd2730

void __thiscall
FField::GetPreloadDependencies(FField *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypedOwner @ 141fd3290

FField * __thiscall FField::GetTypedOwner(FField *this,FFieldClass *param_1)

{
  FFieldVariant *pFVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  FField *pFVar5;
  FField *pFVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  
  pFVar5 = GetOwner<FField>(this);
  pFVar8 = (FField *)0x0;
  do {
    if (pFVar5 == (FField *)0x0) {
      return pFVar8;
    }
    if ((param_1 == (FFieldClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FField *)(*pcVar3)();
      return pFVar5;
    }
    pFVar7 = pFVar5->ClassPrivate;
    if (param_1->Id == CASTCLASS_None) {
      for (; pFVar7 != (FFieldClass *)0x0; pFVar7 = pFVar7->SuperClass) {
        if (pFVar7 == param_1) {
          bVar4 = true;
          goto LAB_141fd3315;
        }
      }
      bVar4 = false;
    }
    else {
      bVar4 = (pFVar7->CastFlags & param_1->Id) != CASTCLASS_None;
    }
LAB_141fd3315:
    pFVar1 = &pFVar5->Owner;
    pFVar6 = pFVar5;
    if (!bVar4) {
      pFVar6 = pFVar8;
    }
    pFVar7 = StaticClass();
    if (((*(byte *)&pFVar1->Container & 1) == 0) &&
       (pFVar5 = (pFVar1->Container).Field, pFVar5 != (FField *)0x0)) {
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FField *)(*pcVar3)();
        return pFVar5;
      }
      pFVar2 = pFVar5->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
          if (pFVar2 == pFVar7) {
            bVar4 = true;
            goto LAB_141fd3398;
          }
        }
        bVar4 = false;
      }
      else {
        bVar4 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
LAB_141fd3398:
      if (!bVar4) goto LAB_141fd33a8;
      pFVar5 = (pFVar1->Container).Field;
    }
    else {
LAB_141fd33a8:
      pFVar5 = (FField *)0x0;
    }
    pFVar8 = pFVar6;
    if (pFVar6 != (FField *)0x0) {
      return pFVar6;
    }
  } while( true );
}

// GetTypedOwner @ 141fd33e0

UObject * __thiscall FField::GetTypedOwner(FField *this,UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  
  pUVar2 = GetOwnerUObject(this);
  while( true ) {
    if (pUVar2 == (UObject *)0x0) {
      return (UObject *)0x0;
    }
    iVar1 = (int)param_1->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &param_1->_padding_)) break;
    pUVar2 = *(UObject **)&pUVar2->field_0x20;
  }
  return pUVar2;
}

// IsIn @ 141fd5990

bool __thiscall FField::IsIn(FField *this,FField *param_1)

{
  FFieldVariant *pFVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FField *pFVar6;
  FFieldClass *pFVar7;
  
  pFVar6 = GetOwner<FField>(this);
  if (pFVar6 != (FField *)0x0) {
    while( true ) {
      if (pFVar6 == param_1) {
        return true;
      }
      pFVar1 = &pFVar6->Owner;
      pFVar7 = StaticClass();
      if (((*(byte *)&pFVar1->Container & 1) != 0) ||
         (pFVar6 = (pFVar1->Container).Field, pFVar6 == (FField *)0x0)) break;
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = pFVar6->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
          if (pFVar2 == pFVar7) {
            bVar4 = true;
            goto LAB_141fd5a30;
          }
        }
        bVar4 = false;
      }
      else {
        bVar4 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
LAB_141fd5a30:
      if (!bVar4) {
        return false;
      }
      pFVar6 = (pFVar1->Container).Field;
      if (pFVar6 == (FField *)0x0) {
        return false;
      }
    }
  }
  return false;
}

// IsIn @ 141fd5a70

bool __thiscall FField::IsIn(FField *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this_00;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x20e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = GetOwnerUObject(this);
  if (this_00 != (UObject *)0x0) {
    if (this_00 == param_1) {
      return true;
    }
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this_00,param_1);
    return bVar2;
  }
  return false;
}

// IsNative @ 141fd5c80

bool __thiscall FField::IsNative(FField *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  
  pUVar4 = GetOwnerUObject(this);
  if (pUVar4 != (UObject *)0x0) {
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
    return (bool)((byte)((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19) & 1);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                     ,0x201,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// IsRooted @ 141fd5da0

bool __thiscall FField::IsRooted(FField *this)

{
  UObject *pUVar1;
  FUObjectItem *pFVar2;
  
  pUVar1 = GetOwnerUObject(this);
  while( true ) {
    if (pUVar1 == (UObject *)0x0) {
      return false;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar1->field_0xc);
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) break;
    pUVar1 = *(UObject **)&pUVar1->field_0x20;
  }
  return true;
}

// IsValidLowLevel @ 141fd62a0

bool __thiscall FField::IsValidLowLevel(FField *this)

{
  bool bVar1;
  
  bVar1 = IsThisNotNull(this,"FField::IsValidLowLevel");
  return bVar1;
}

// PostDuplicate @ 141fd9230

void __thiscall FField::PostDuplicate(FField *this,FField *param_1)

{
  return;
}

// PostLoad @ 141fd9240

void __thiscall FField::PostLoad(FField *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141fd9243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// Rename @ 141fe2aa0

void __thiscall FField::Rename(FField *this,FName *param_1)

{
  this->NamePrivate = *param_1;
  return;
}

// Serialize @ 141fe8070

void __thiscall FField::Serialize(FField *this,FArchive *param_1)

{
  EObjectFlags *pEVar1;
  EObjectFlags *pEVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->NamePrivate);
  pEVar1 = &this->FlagsPrivate;
  pEVar2 = (EObjectFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (EObjectFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pEVar1 = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fe80d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
  return;
}

// StaticClass @ 141fe9830

FFieldClass * __cdecl FField::StaticClass(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FField",1,CASTCLASS_UField,(FFieldClass *)0x0,Construct);
      atexit(`FField::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// TryConstruct @ 141fe9ec0

FField * __cdecl
FField::TryConstruct(FName *param_1,FFieldVariant *param_2,FName *param_3,EObjectFlags param_4)

{
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FName,FFieldClass_*> *pTVar1;
  FField *pFVar2;
  
  this = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
          *)FFieldClass::GetNameToFieldClassMap();
  pTVar1 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
           ::Find(this,*param_1);
  if ((pTVar1 == (TTuple<FName,FFieldClass_*> *)0x0) || (*(longlong *)&pTVar1->field_0x8 == 0)) {
    pFVar2 = (FField *)0x0;
  }
  else {
    pFVar2 = (FField *)
             (**(code **)(*(longlong *)&pTVar1->field_0x8 + 0x30))(param_2,param_3,param_4);
  }
  return pFVar2;
}

// GetName @ 1420faec0

FString * __thiscall FField::GetName(FField *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = IsThisNotNull(this,"FField::GetName");
  if (bVar1) {
    ::FName::ToString(&this->NamePrivate,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// IsA @ 1420ff300

bool __thiscall FField::IsA(FField *this,FFieldClass *param_1)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((param_1 == (FFieldClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = this->ClassPrivate;
  if (param_1->Id != CASTCLASS_None) {
    return (pFVar1->CastFlags & param_1->Id) != CASTCLASS_None;
  }
  while( true ) {
    if (pFVar1 == (FFieldClass *)0x0) {
      return false;
    }
    if (pFVar1 == param_1) break;
    pFVar1 = pFVar1->SuperClass;
  }
  return true;
}

// GetOwner<UObject> @ 1421269b0

UObject * __thiscall FField::GetOwner<UObject>(FField *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  bVar1 = FFieldVariant::IsA(&this->Owner,pUVar2);
  if (bVar1) {
    return (UObject *)((this->Owner).Container.Unknown & 0xfffffffffffffffe);
  }
  return (UObject *)0x0;
}

// GetOwner<FProperty> @ 142156a90

FProperty * __thiscall FField::GetOwner<FProperty>(FField *this)

{
  bool bVar1;
  FFieldClass *pFVar2;
  
  pFVar2 = FProperty::StaticClass();
  bVar1 = FFieldVariant::IsA(&this->Owner,pFVar2);
  if (bVar1) {
    return (FProperty *)(this->Owner).Container.Field;
  }
  return (FProperty *)0x0;
}

// GetOwner<UClass> @ 1421f7c90

UClass * __thiscall FField::GetOwner<UClass>(FField *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  bVar1 = FFieldVariant::IsA(&this->Owner,pUVar2);
  if (bVar1) {
    return (UClass *)((this->Owner).Container.Unknown & 0xfffffffffffffffe);
  }
  return (UClass *)0x0;
}

// GetFName @ 1422d2e80

FName __thiscall FField::GetFName(FField *this)

{
  bool bVar1;
  FName in_RDX;
  
  bVar1 = IsThisNotNull(this,"FField::GetFName");
  if (bVar1) {
    *(FName *)in_RDX = this->NamePrivate;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

