// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 22

// StaticClass @ 141f52cf0

UClass * __cdecl UUserDefinedStruct::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStruct",
               &Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton,
               StaticRegisterNativesUUserDefinedStruct,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUserDefinedStruct>,
               InternalVTableHelperCtorCaller<UUserDefinedStruct>,local_res10,
               UScriptStruct::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton;
}

// UUserDefinedStruct @ 141f684b0

UUserDefinedStruct * __thiscall
UUserDefinedStruct::UUserDefinedStruct(UUserDefinedStruct *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->_padding_ = (longlong)&___7UUserDefinedStruct__6B_;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->DefaultStructInstance);
  *(undefined ***)&this->DefaultStructInstance = &___7FUserStructOnScopeIgnoreDefaults__6B_;
  return this;
}

// UUserDefinedStruct @ 141f68550

UUserDefinedStruct * __thiscall
UUserDefinedStruct::UUserDefinedStruct(UUserDefinedStruct *this,FObjectInitializer *param_1)

{
  UPackage *pUVar1;
  
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  this->_padding_ = (longlong)&___7UUserDefinedStruct__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->DefaultStructInstance);
  *(undefined ***)&this->DefaultStructInstance = &___7FUserStructOnScopeIgnoreDefaults__6B_;
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  FStructOnScope::SetPackage((FStructOnScope *)&this->DefaultStructInstance,pUVar1);
  return this;
}

// ~UUserDefinedStruct @ 141f69260

void __thiscall UUserDefinedStruct::~UUserDefinedStruct(UUserDefinedStruct *this)

{
  this->_padding_ = (longlong)&___7UUserDefinedStruct__6B_;
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->DefaultStructInstance);
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// AddReferencedObjects @ 141f6dde0

void __cdecl UUserDefinedStruct::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  void *pvVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UUserDefinedStruct>(&local_38);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar6 = GetPrivateStaticClass();
  iVar2 = (int)pUVar6->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar6->_padding_)) {
    puVar1 = &param_1[5].field_0x10;
    cVar4 = (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1);
    if (cVar4 != '\0') {
      pUVar7 = (UObject *)(**(code **)(*(longlong *)puVar1 + 0x20))(puVar1);
      if (pUVar7 != param_1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6631037121106804251>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\UserDefinedStruct.cpp"
                           ,0x1e5,
                           "!This->DefaultStructInstance.IsValid() || This->DefaultStructInstance.GetStruct() == This"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    pvVar8 = (void *)(**(code **)(*(longlong *)puVar1 + 0x18))(puVar1);
    if (pvVar8 != (void *)0x0) {
      FReferenceCollector::AddPropertyReferences(param_2,(UStruct *)param_1,pvVar8,param_1);
    }
    UStruct::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar9 = GetTypeName<UUserDefinedStruct>(&local_28);
  pwVar10 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// CustomFindProperty @ 141f78530

FProperty * __thiscall
UUserDefinedStruct::CustomFindProperty(UUserDefinedStruct *this,FName param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FProperty *pFVar3;
  bool bVar4;
  FName local_res10;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,&local_48);
  if (this == (UUserDefinedStruct *)0x0) {
    local_38.Field = (FField *)0x0;
  }
  else {
    local_38.Field = (FField *)this->_padding_;
  }
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  local_38.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  local_20.bIncludeSuper = local_38.bIncludeSuper;
  local_20.bIncludeDeprecated = local_38.bIncludeDeprecated;
  local_20.InterfaceIndex = local_38.InterfaceIndex;
  local_20.bIncludeInterface = local_38.bIncludeInterface;
  local_20._23_1_ = local_38._23_1_;
  local_20.Struct = local_38.Struct;
  pFVar3 = (FProperty *)local_38.Field;
  while (local_20.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x328))(this,&local_38,pFVar3);
    iVar1 = *(int *)(puVar2 + 1);
    if (iVar1 == local_48.Data.ArrayNum) {
      if (iVar1 < 2) {
        bVar4 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar2,(wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar4 = iVar1 == 0;
      }
    }
    else {
      bVar4 = local_48.Data.ArrayNum + iVar1 == 1;
    }
    if ((UUserDefinedStruct *)local_38.Struct != (UUserDefinedStruct *)0x0) {
      FMemory::Free(local_38.Struct);
    }
    if (bVar4) goto LAB_141f7863b;
    local_20.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_20);
    pFVar3 = (FProperty *)local_20.Field;
  }
  pFVar3 = (FProperty *)0x0;
LAB_141f7863b:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pFVar3;
}

// GetAuthoredNameForField @ 141f80cd0

FString * __thiscall
UUserDefinedStruct::GetAuthoredNameForField
          (UUserDefinedStruct *this,FString *__return_storage_ptr__,FField *param_1)

{
  int *piVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (FField *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((uint)(int)param_1->ClassPrivate->CastFlags >> 0xf & 1) == 0) {
    bVar2 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString(&param_1->NamePrivate,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  bVar2 = IsThisNotNull(param_1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString(&param_1->NamePrivate,&local_28);
  }
  else {
    ::FString::FString(&local_28,L"None");
  }
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (0x23 < iVar5) {
    if (iVar5 + -0x21 < iVar5) {
      iVar5 = iVar5 + -0x21;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar4);
    pFVar6 = local_18.Data.AllocatorInstance.Data + (longlong)local_18.Data.ArrayNum * 2;
    do {
      if (pFVar6 == local_18.Data.AllocatorInstance.Data) goto LAB_141f80d95;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x5f);
    iVar5 = (int)((longlong)pFVar6 - (longlong)local_18.Data.AllocatorInstance.Data >> 1);
    if (0 < iVar5) {
      ::FString::Mid(&local_18,__return_storage_ptr__,0,iVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
LAB_141f80d95:
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_28.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar3.Data,
           (longlong)local_28.Data.ArrayNum * 2);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCustomGuid @ 141f817d0

FGuid * __thiscall
UUserDefinedStruct::GetCustomGuid(UUserDefinedStruct *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->Guid).B;
  uVar2 = (this->Guid).C;
  uVar3 = (this->Guid).D;
  __return_storage_ptr__->A = (this->Guid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetDefaultInstance @ 141f817f0

uchar * __thiscall UUserDefinedStruct::GetDefaultInstance(UUserDefinedStruct *this)

{
  FUserStructOnScopeIgnoreDefaults *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UUserDefinedStruct *pUVar5;
  uchar *puVar6;
  
  pFVar1 = &this->DefaultStructInstance;
  cVar3 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
  if (cVar3 != '\0') {
    pUVar5 = (UUserDefinedStruct *)(**(code **)(*(longlong *)pFVar1 + 0x20))(pFVar1);
    if (pUVar5 == this) goto LAB_141f8184c;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6631037121106804258>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\UserDefinedStruct.cpp"
                     ,0x1de,
                     "DefaultStructInstance.IsValid() && DefaultStructInstance.GetStruct() == this")
  ;
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
LAB_141f8184c:
                    /* WARNING: Could not recover jumptable at 0x000141f8185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (uchar *)(**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1);
  return puVar6;
}

// GetPrivateStaticClass @ 141f852b0

UClass * __cdecl UUserDefinedStruct::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStruct",
               &Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton,
               StaticRegisterNativesUUserDefinedStruct,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUserDefinedStruct>,
               InternalVTableHelperCtorCaller<UUserDefinedStruct>,local_res10,
               UScriptStruct::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton;
}

// GetStructCPPName @ 141f86d80

FString * __thiscall
UUserDefinedStruct::GetStructCPPName
          (UUserDefinedStruct *this,FString *__return_storage_ptr__,uint param_1)

{
  UPackage *this_00;
  wchar_t *pwVar1;
  FString *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((char)param_1 < '\0') {
    this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_78,(UObject *)0x0);
    FPackageName::GetLongPackageAssetName(&local_68,&local_78);
    iVar3 = 0;
    iVar5 = local_68.Data.ArrayNum + -1;
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_78,(wchar_t *)FVar4.Data,iVar5,IgnoreCase);
    if (local_78.Data.ArrayNum == 0) {
      pwVar1 = L"";
    }
    else {
      iVar3 = local_78.Data.ArrayNum + -1;
      pwVar1 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar1);
    ::FString::PrintfImpl(&local_38,L"%u");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pwVar1 = (wchar_t *)(**(code **)(this->_padding_ + 0x318))(this);
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,(wchar_t *)FVar4.Data);
    pFVar2 = UnicodeToCPPIdentifier(&local_28,&local_48,false,pwVar1);
    ::FString::ConcatFF(__return_storage_ptr__,pFVar2,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    ::FString::PrintfImpl(__return_storage_ptr__,L"F%s");
    local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStructTypeHash @ 141f87700

uint __thiscall UUserDefinedStruct::GetStructTypeHash(UUserDefinedStruct *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = GetUserDefinedStructTypeHash(param_1,(UScriptStruct *)this);
  return uVar1;
}

// GetUserDefinedStructTypeHash @ 141f87c20

uint __cdecl UUserDefinedStruct::GetUserDefinedStructTypeHash(void *param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  FProperty *this;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TFieldIterator<FProperty_const_> local_48;
  
  if (param_2 == (UScriptStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (FField *)param_2->_padding_;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  local_48.Struct = (UStruct *)param_2;
  TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
  uVar3 = 0;
  this = (FProperty *)local_48.Field;
  do {
    if (this == (FProperty *)0x0) {
      return uVar3;
    }
    uVar8 = 0;
    uVar4 = 0;
    uVar5 = uVar4;
    local_48.Field = (FField *)this;
    if (((this == (FProperty *)0x0) || ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) == 0)) ||
       (this == (FProperty *)0x0)) {
      if ((this->PropertyFlags >> 0x33 & 1) == 0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6631037121106804280>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\UserDefinedStruct.cpp"
                           ,0x1c8,"It->HasAllPropertyFlags(CPF_HasGetValueTypeHash)");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      else {
        iVar7 = 0;
        if (0 < this->ArrayDim) {
          do {
            if (((iVar7 < 0) || (this->ArrayDim <= iVar7)) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return uVar3;
            }
            if ((param_1 == (void *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return uVar3;
            }
            uVar5 = FProperty::GetValueTypeHash
                              (this,(void *)((longlong)param_1 +
                                            (longlong)this->Offset_Internal +
                                            (longlong)iVar7 * (longlong)this->ElementSize));
            if (uVar8 != 0) {
              uVar8 = uVar8 - uVar5 ^ uVar5 >> 0xd;
              uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
              uVar6 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
              uVar5 = (uVar8 - uVar6) - uVar4 ^ uVar6 >> 0xc;
              uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
              uVar8 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 5;
              uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 3;
              uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 << 10;
              uVar5 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xf;
            }
            uVar8 = uVar5;
            iVar7 = iVar7 + 1;
            uVar5 = uVar8;
          } while (iVar7 < this->ArrayDim);
        }
      }
    }
    else {
      iVar7 = 0;
      uVar5 = uVar8;
      if (0 < this->ArrayDim) {
        do {
          if (((iVar7 < 0) || (this->ArrayDim <= iVar7)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (((char)this[1]._padding_ == '\0') &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldSize != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0xa4b,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          iVar7 = iVar7 + 1;
          uVar5 = uVar4;
        } while (iVar7 < this->ArrayDim);
      }
    }
    if (uVar3 != 0) {
      uVar3 = uVar3 - uVar5 ^ uVar5 >> 0xd;
      uVar4 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
      uVar8 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xd;
      uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xc;
      uVar5 = (uVar4 - uVar3) - uVar8 ^ uVar3 << 0x10;
      uVar4 = (uVar8 - uVar5) - uVar3 ^ uVar5 >> 5;
      uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 3;
      uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 10;
      uVar5 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf;
    }
    local_48.Field = (FField *)this->_padding_;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
    uVar3 = uVar5;
    this = (FProperty *)local_48.Field;
  } while( true );
}

// InitializeStruct @ 141f8e7a0

void __thiscall
UUserDefinedStruct::InitializeStruct(UUserDefinedStruct *this,void *param_1,int param_2)

{
  FUserStructOnScopeIgnoreDefaults *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  UUserDefinedStruct *pUVar6;
  void *pvVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(uint)param_2;
  if ((param_1 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\UserDefinedStruct.cpp"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = &this->DefaultStructInstance;
  cVar5 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
  if (((cVar5 == '\0') ||
      (pUVar6 = (UUserDefinedStruct *)(**(code **)(*(longlong *)pFVar1 + 0x20))(pFVar1),
      pUVar6 != this)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6631037121106804258>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\UserDefinedStruct.cpp"
                         ,0x1de,
                         "DefaultStructInstance.IsValid() && DefaultStructInstance.GetStruct() == this"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar7 = (void *)(**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1);
  if (((((this->_padding_ & 0x2000) != 0) && (pvVar7 != (void *)0x0)) ||
      (UScriptStruct::InitializeStruct((UScriptStruct *)this,param_1,param_2), pvVar7 != (void *)0x0
      )) && (iVar8 = (int)*(short *)((longlong)&this->_padding_ + 4), lVar3 = this->_padding_,
            0 < param_2)) {
    do {
      UScriptStruct::CopyScriptStruct((UScriptStruct *)this,param_1,pvVar7,1);
      param_1 = (void *)((longlong)param_1 + (longlong)(iVar8 + -1 + (int)lVar3 & -iVar8));
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// InitializeStructIgnoreDefaults @ 141f8e8d0

void __thiscall
UUserDefinedStruct::InitializeStructIgnoreDefaults
          (UUserDefinedStruct *this,void *param_1,int param_2)

{
  FStructOpsFakeVTable *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  ICppStructOps *pIVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FString FStack_48;
  
  if ((param_1 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xec9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (int)*(short *)((longlong)&this->_padding_ + 4);
  uVar10 = (int)this->_padding_ + -1 + iVar8 & -iVar8;
  memset(param_1,0,(longlong)(int)(uVar10 * param_2));
  uVar11 = 0;
  pIVar7 = UScriptStruct::GetCppStructOps((UScriptStruct *)this);
  if (pIVar7 != (ICppStructOps *)0x0) {
    if ((!(pIVar7->FakeVPtr->Capabilities).HasZeroConstructor) && (0 < param_2)) {
      pvVar9 = param_1;
      uVar12 = (ulonglong)(uint)param_2;
      do {
        if (((ulonglong)pvVar9 & (longlong)pIVar7->Alignment - 1U) != 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_48,(UObject *)0x0);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAligned(PropertyDest, TheCppStructOps->GetAlignment())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0xedc,
                             L"Destination address for property does not match requirement of %d byte alignment for %s"
                            );
          if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = pIVar7->FakeVPtr;
        if (((pFVar1->Flags & Construct) == None) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(pFVar1 + 1))(pvVar9);
        pvVar9 = (void *)((longlong)pvVar9 + (longlong)(int)uVar10);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar11 = pIVar7->Size;
    if ((uVar10 == uVar11) && ((uint)this->_padding_ == uVar11)) {
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stride == InitializedSize && PropertiesSize == InitializedSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0xee3,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)uVar11 < (int)this->_padding_) {
    plVar2 = (longlong *)this->_padding_;
    bVar5 = false;
    while ((plVar2 != (longlong *)0x0 && (!bVar5))) {
      if ((int)uVar11 <
          *(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + *(int *)((longlong)plVar2 + 0x44)) {
        bVar5 = false;
        if (0 < param_2) {
          uVar12 = (ulonglong)(uint)param_2;
          pvVar9 = param_1;
          do {
            if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
              pcVar3 = *(code **)(*plVar2 + 0x150);
              if (((int)plVar2[6] < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((pvVar9 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (*pcVar3)(plVar2);
            }
            else {
              lVar4 = plVar2[6];
              iVar8 = *(int *)((longlong)plVar2 + 0x34);
              if (((int)lVar4 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((pvVar9 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              memset((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)pvVar9),0,
                     (longlong)(int)lVar4 * (longlong)iVar8);
            }
            pvVar9 = (void *)((longlong)pvVar9 + (longlong)(int)uVar10);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        bVar5 = true;
      }
      plVar2 = (longlong *)plVar2[9];
    }
  }
  return;
}

// PrepareCppStructOps @ 141f954b0

void __thiscall UUserDefinedStruct::PrepareCppStructOps(UUserDefinedStruct *this)

{
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return;
}

// RecursivelyPreload @ 141f95900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UUserDefinedStruct::RecursivelyPreload(UUserDefinedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinkerLoad *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b8;
  FArchiveState local_a8;
  
  pFVar4 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar4 != (FLinkerLoad *)0x0) && (this->_padding_ == 0)) {
    uVar6 = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)this,&local_b8,true,RF_NoFlags,Borrowed);
    uVar7 = uVar6;
    if (0 < local_b8.ArrayNum) {
      do {
        uVar5 = (uint)uVar6;
        uVar3 = 0;
        if ((int)uVar5 < local_b8.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FLinkerLoad::Preload
                  ((FLinkerLoad *)&pFVar4->_padding_,
                   *(UObject **)(local_b8.AllocatorInstance.Data + uVar7));
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar7 = uVar7 + 8;
      } while ((int)(uVar5 + 1) < local_b8.ArrayNum);
    }
    FLinkerLoad::Preload((FLinkerLoad *)&pFVar4->_padding_,(UObject *)this);
    if (this->_padding_ == 0) {
      FArchiveState::FArchiveState(&local_a8);
      local_a8._padding_ = (longlong)&___7FNullArchive__6B_;
      (**(code **)(this->_padding_ + 0x2c8))(this,&local_a8,1);
      FArchive::~FArchive((FArchive *)&local_a8);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141f9e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UUserDefinedStruct::Serialize(UUserDefinedStruct *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 141f9e900

void __thiscall
UUserDefinedStruct::Serialize(UUserDefinedStruct *this,FStructuredArchiveRecord param_1)

{
  FUserStructOnScopeIgnoreDefaults *pFVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  FArchive *this_00;
  FArchiveState *this_01;
  void *pvVar7;
  undefined8 local_res8;
  FSlotBase local_res10;
  FScopedPlaceholderRawContainerTracker local_res18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  local_res18[0].Data = (void *)param_1;
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                      ((FSlotBase *)local_res18);
  UStruct::Serialize((UStruct *)this,this_00);
  uVar4 = local_res8._4_4_;
  plVar3 = *(longlong **)&this_00->field_0x8;
  uVar2 = (uint)this->_padding_;
  local_res8 = (UUserDefinedStruct *)(CONCAT44(local_res8._4_4_,uVar2) & 0xffffffffff8003bd);
  if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)&local_res8);
    }
  }
  else {
    local_res8 = (UUserDefinedStruct *)CONCAT44(uVar4,*(undefined4 *)*plVar3);
    *plVar3 = *plVar3 + 4;
  }
  if ((this_00->field_0x28 & 1) != 0) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    *(uint *)&this->_padding_ = (uint)local_res8 & 0xff8003bd;
    this->_padding_ = 0;
    (**(code **)(this->_padding_ + 0x368))(this);
    if (this->_padding_ == 0) {
      *(uint *)&this->_padding_ = (uVar2 ^ (uint)this->_padding_) & 0xff8003bd ^ uVar2;
    }
  }
  this_01 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((this->_padding_ & 0x10) == 0) {
    (**(code **)(this_01->_padding_ + 0x230))(this_01,&FFrameworkObjectVersion::GUID);
    iVar6 = FArchiveState::CustomVer(this_01,&FFrameworkObjectVersion::GUID);
    if (((0x1f < iVar6) && ((this->Status).Value == '\0')) && ((this_01->ArPortFlags & 0x1000) == 0)
       ) {
      pFVar1 = &this->DefaultStructInstance;
      cVar5 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
      if ((cVar5 == '\0') && (this_01->ArIsLoading != 0)) {
        (**(code **)(*(longlong *)pFVar1 + 0x40))(pFVar1);
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)&(this->DefaultStructInstance).field_0x8,
                   (FObjectPtr)&local_res8);
        (*(code *)**(undefined8 **)pFVar1)(pFVar1);
      }
      pvVar7 = (void *)(**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1);
      FScopedPlaceholderRawContainerTracker::FScopedPlaceholderRawContainerTracker
                (local_res18,pvVar7);
      UScriptStruct::SerializeItem
                ((UScriptStruct *)this,(FStructuredArchiveSlot)local_res10.StructuredArchive,pvVar7,
                 (void *)0x0);
      if (this_01->ArIsLoading != 0) {
        UpdateStructFlags(this);
      }
      FScopedPlaceholderRawContainerTracker::~FScopedPlaceholderRawContainerTracker(local_res18);
    }
  }
  return;
}

// SerializeTaggedProperties @ 141fa6c90

void __thiscall
UUserDefinedStruct::SerializeTaggedProperties
          (UUserDefinedStruct *this,FStructuredArchiveSlot param_1,uchar *param_2,UStruct *param_3,
          uchar *param_4,UObject *param_5)

{
  FArchiveState *pFVar1;
  FSlotBase local_res10;
  FSlotBase local_18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  local_18[0].StructuredArchive = local_res10.StructuredArchive;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_18);
  if (pFVar1->ArUseUnversionedPropertySerialization != '\0') {
    SerializeUnversionedProperties
              ((UStruct *)this,(FStructuredArchiveSlot)local_18[0].StructuredArchive,param_2,param_3
               ,param_4);
    return;
  }
  UStruct::SerializeVersionedTaggedProperties
            ((UStruct *)this,(FStructuredArchiveSlot)local_18[0].StructuredArchive,param_2,param_3,
             param_4,param_5);
  return;
}

// StaticRegisterNativesUUserDefinedStruct @ 141fade60

void __cdecl UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct(void)

{
  return;
}

// UpdateStructFlags @ 141fafdd0

void __thiscall UUserDefinedStruct::UpdateStructFlags(UUserDefinedStruct *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TFieldIterator<FProperty> local_38;
  
  bVar1 = true;
  lVar5 = (**(code **)(*(longlong *)&this->DefaultStructInstance + 0x18))();
  if (lVar5 != 0) {
    iVar6 = (int)*(short *)((longlong)&this->_padding_ + 4);
    lVar7 = 0;
    lVar8 = (longlong)(int)((int)this->_padding_ + -1 + iVar6 & ~(iVar6 - 1U));
    if (0 < lVar8) {
      do {
        if (*(char *)(lVar5 + lVar7) != '\0') goto LAB_141fafe90;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
  local_38.Field = (FField *)this->_padding_;
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  local_38.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  while (local_38.Field != (FField *)0x0) {
    if ((*(uint *)&local_38.Field[1].ClassPrivate >> 9 & 1) == 0) goto LAB_141fafe90;
    local_38.Field = (local_38.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
  }
LAB_141fafe97:
  local_38.Field = (FField *)this->_padding_;
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  local_38.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  while (local_38.Field != (FField *)0x0) {
    if ((*(uint *)&local_38.Field[1].ClassPrivate >> 0x1e & 1) == 0) {
      local_38.Field = (FField *)this->_padding_;
      local_38.bIncludeInterface = false;
      bVar3 = true;
      local_38.InterfaceIndex = -1;
      local_38.bIncludeSuper = true;
      local_38.bIncludeDeprecated = true;
      local_38.Struct = (UStruct *)this;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      goto joined_r0x000141faff81;
    }
    local_38.Field = (local_38.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
  }
  bVar3 = true;
  bVar2 = true;
LAB_141fafef8:
  uVar4 = (uint)this->_padding_ | 0xe000;
  *(uint *)&this->_padding_ = uVar4;
  if (!bVar1) {
    uVar4 = uVar4 & 0xffff7fff;
    *(uint *)&this->_padding_ = uVar4;
  }
  if (!bVar2) {
    uVar4 = uVar4 & 0xffffdfff;
    *(uint *)&this->_padding_ = uVar4;
  }
  if (!bVar3) {
    *(uint *)&this->_padding_ = uVar4 & 0xffffbfff;
  }
  return;
LAB_141fafe90:
  bVar1 = false;
  goto LAB_141fafe97;
joined_r0x000141faff81:
  bVar2 = false;
  if (local_38.Field == (FField *)0x0) goto LAB_141fafef8;
  if (((ulonglong)local_38.Field[1].ClassPrivate & 0x1000000000) == 0) {
    bVar3 = false;
    bVar2 = false;
    goto LAB_141fafef8;
  }
  local_38.Field = (local_38.Field)->Next;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  goto joined_r0x000141faff81;
}

