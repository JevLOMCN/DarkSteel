// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 1422b3ea0

UClass * __cdecl UVerseFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseFunction",
               &Z_Registration_Info_UClass_UVerseFunction.InnerSingleton,
               StaticRegisterNativesUVerseFunction,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseFunction>,InternalVTableHelperCtorCaller<UVerseFunction>,
               local_res8,UFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseFunction.InnerSingleton;
}

// UVerseFunction @ 1422b8c40

UVerseFunction * __thiscall
UVerseFunction::UVerseFunction(UVerseFunction *this,FVTableHelper *param_1)

{
  UFunction::UFunction((UFunction *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseFunction__6B_;
  (this->AlternateName).ComparisonIndex = 0;
  (this->AlternateName).Number = 0;
  this->VerseFunctionFlags = None;
  return this;
}

// UVerseFunction @ 1422b8c80

UVerseFunction * __thiscall
UVerseFunction::UVerseFunction(UVerseFunction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVerseFunction__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AlternateName).ComparisonIndex = 0;
  (this->AlternateName).Number = 0;
  this->VerseFunctionFlags = None;
  return this;
}

// UVerseFunction @ 1422b8cf0

UVerseFunction * __thiscall
UVerseFunction::UVerseFunction
          (UVerseFunction *this,FObjectInitializer *param_1,UFunction *param_2,
          EFunctionFlags param_3,ulong64 param_4)

{
  UFunction::UFunction((UFunction *)this,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7UVerseFunction__6B_;
  (this->AlternateName).ComparisonIndex = 0;
  (this->AlternateName).Number = 0;
  this->VerseFunctionFlags = None;
  return this;
}

// ~UVerseFunction @ 1422b95a0

void __thiscall UVerseFunction::~UVerseFunction(UVerseFunction *this)

{
  this->_padding_ = (longlong)&___7UVerseFunction__6B_;
  UFunction::~UFunction((UFunction *)this);
  return;
}

// Bind @ 1422bae40

void __thiscall UVerseFunction::Bind(UVerseFunction *this)

{
  bool bVar1;
  UClass *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if (((this->_padding_ & 0x400) != 0) && ((this->VerseFunctionFlags & UHTTaskUpdate) != None)) {
    pUVar2 = UField::GetOwnerClass((UField *)this);
    if (pUVar2 != (UClass *)0x0) {
      pFVar4 = (pUVar2->NativeFunctionLookupTable).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)(pUVar2->NativeFunctionLookupTable).ArrayNum * 0x10;
      for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0x10) {
        if (this->_padding_ == *(longlong *)pFVar4) {
          this->_padding_ = *(longlong *)(pFVar4 + 8);
          return;
        }
      }
    }
    bVar1 = TryBindingCoroutine(this);
    if (bVar1) {
      return;
    }
  }
  UFunction::Bind((UFunction *)this);
  return;
}

// GetPrivateStaticClass @ 1422bce60

UClass * __cdecl UVerseFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseFunction",
               &Z_Registration_Info_UClass_UVerseFunction.InnerSingleton,
               StaticRegisterNativesUVerseFunction,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseFunction>,InternalVTableHelperCtorCaller<UVerseFunction>,
               local_res8,UFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseFunction.InnerSingleton;
}

// StaticRegisterNativesUVerseFunction @ 1422bf270

void __cdecl UVerseFunction::StaticRegisterNativesUVerseFunction(void)

{
  return;
}

// TryBindingCoroutine @ 1422c3b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UVerseFunction::TryBindingCoroutine(UVerseFunction *this)

{
  int *piVar1;
  wchar_t *pwVar2;
  FName FVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FName *pFVar11;
  FName *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  undefined1 auStackY_8a8 [32];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  pUVar7 = UField::GetOwnerClass((UField *)this);
  bVar5 = false;
  if (pUVar7 != (UClass *)0x0) {
    local_878.DataPtr = (wchar_t *)pUVar7->_padding_;
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    ::FName::AppendString((FName *)&local_878,&local_868);
    pwVar2 = local_868.Base;
    iVar15 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
    iVar6 = iVar15;
    if (5 < iVar15) {
      iVar6 = 5;
    }
    iVar16 = 0;
    if (0 < iVar6) {
      iVar16 = iVar6;
    }
    if ((iVar16 == 5) &&
       (iVar6 = FGenericPlatformStricmp::Strnicmp(L"task_",local_868.Base,5), iVar6 == 0)) {
      iVar6 = iVar15;
      if (iVar15 + -5 < iVar15) {
        iVar6 = iVar15 + -5;
      }
      iVar16 = 0;
      if (0 < iVar6) {
        iVar16 = iVar6;
      }
      pwVar2 = pwVar2 + ((longlong)iVar15 - (longlong)iVar16);
      local_878.Size = iVar16;
      local_878.DataPtr = pwVar2;
      iVar6 = UE::String::FindFirstChar(&local_878,L'$',CaseSensitive);
      if (iVar6 != -1) {
        iVar15 = iVar16;
        if (iVar6 < iVar16) {
          iVar15 = iVar6;
        }
        iVar13 = (iVar16 - iVar6) + -1;
        iVar6 = iVar16;
        if (iVar13 < iVar16) {
          iVar6 = iVar13;
        }
        iVar13 = 0;
        if (0 < iVar6) {
          iVar13 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar15) {
          iVar6 = iVar15;
        }
        pFVar8 = ::FName::FName((FName *)&local_878,iVar6,pwVar2,FNAME_Add);
        pUVar10 = (UObject *)pUVar7->_padding_;
        FVar3 = *pFVar8;
        pUVar9 = Z_Construct_UClass_UClass_NoRegister();
        pUVar10 = StaticFindObjectFast(pUVar9,pUVar10,FVar3,None,RF_NoFlags,Borrowed);
        if (pUVar10 != (UObject *)0x0) {
          pFVar11 = ::FName::FName((FName *)&local_878,iVar13,
                                   pwVar2 + ((longlong)iVar16 - (longlong)iVar13),FNAME_Add);
          pFVar8 = *(FName **)&pUVar10[0xc].field_0x18;
          pFVar12 = pFVar8 + (longlong)*(int *)&pUVar10[0xc].field_0x20 * 2;
          for (; pFVar8 != pFVar12; pFVar8 = pFVar8 + 2) {
            if (*pFVar11 == *pFVar8) {
              piVar1 = &(pUVar7->NativeFunctionLookupTable).ArrayMax;
              lVar4 = this->_padding_;
              this->_padding_ = (longlong)pFVar8[1];
              iVar6 = (pUVar7->NativeFunctionLookupTable).ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&(pUVar7->NativeFunctionLookupTable).AllocatorInstance,
                                   piVar1);
              }
              (pUVar7->NativeFunctionLookupTable).ArrayNum = iVar6 + 1;
              FVar3 = pFVar8[1];
              pFVar14 = (pUVar7->NativeFunctionLookupTable).AllocatorInstance.Data +
                        (longlong)iVar6 * 0x10;
              *(longlong *)pFVar14 = lVar4;
              bVar5 = true;
              *(FName *)(pFVar14 + 8) = FVar3;
              goto LAB_1422c3d80;
            }
          }
        }
      }
    }
    bVar5 = false;
LAB_1422c3d80:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  return bVar5;
}

