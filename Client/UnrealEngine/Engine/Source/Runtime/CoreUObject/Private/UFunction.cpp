// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// StaticClass @ 141f51f90

UClass * __cdecl UFunction::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Function",
               &Z_Registration_Info_UClass_UFunction.InnerSingleton,StaticRegisterNativesUFunction,
               0xe8,8,CLASS_Intrinsic,CASTCLASS_UFunction,L"Engine",InternalConstructor<UFunction>,
               InternalVTableHelperCtorCaller<UFunction>,local_res10,UStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UFunction.InnerSingleton;
}

// UFunction @ 141f67990

UFunction * __thiscall UFunction::UFunction(UFunction *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UFunction__6B_;
  return this;
}

// UFunction @ 141f67a00

UFunction * __thiscall
UFunction::UFunction
          (UFunction *this,FObjectInitializer *param_1,UFunction *param_2,EFunctionFlags param_3,
          ulong64 param_4)

{
  UStruct::UStruct((UStruct *)this,param_1,(UStruct *)param_2,param_4,0);
  this->FunctionFlags = param_3;
  this->_padding_ = (longlong)&___7UFunction__6B_;
  this->RPCId = 0;
  this->RPCResponseId = 0;
  this->FirstPropertyToInit = (FProperty *)0x0;
  this->EventGraphFunction = (UFunction *)0x0;
  this->EventGraphCallOffset = 0;
  this->SingletonPtr = (UFunction **)0x0;
  return this;
}

// UFunction @ 141f67a70

UFunction * __thiscall
UFunction::UFunction(UFunction *this,UFunction *param_1,EFunctionFlags param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  UFunction *pUVar5;
  int iVar6;
  short sVar7;
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = (longlong)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar3 = 1;
  if (param_3 == 0) {
    if (param_1 == (UFunction *)0x0) {
      *(undefined4 *)&this->_padding_ = 0;
    }
    else {
      *(int *)&this->_padding_ = (int)param_1->_padding_;
      iVar3 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    }
  }
  else {
    iVar6 = (int)param_3;
    if (((param_3 != (longlong)iVar6) || (iVar6 < 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UFunction *)(*pcVar1)();
      return pUVar5;
    }
    *(int *)&this->_padding_ = iVar6;
    if (param_1 != (UFunction *)0x0) {
      iVar3 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    }
  }
  iVar6 = 1;
  if (1 < iVar3) {
    iVar6 = iVar3;
  }
  sVar7 = (short)iVar6;
  if ((((longlong)iVar6 != (longlong)sVar7) || (sVar7 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UFunction *)(*pcVar1)();
    return pUVar5;
  }
  *(short *)((longlong)&this->_padding_ + 4) = sVar7;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  this->_padding_ = (longlong)&___7UFunction__6B_;
  this->FunctionFlags = param_2;
  this->RPCId = 0;
  this->RPCResponseId = 0;
  this->FirstPropertyToInit = (FProperty *)0x0;
  this->SingletonPtr = (UFunction **)0x0;
  return this;
}

// ~UFunction @ 141f690d0

void __thiscall UFunction::~UFunction(UFunction *this)

{
  this->_padding_ = (longlong)&___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// Bind @ 141f71350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFunction::Bind(UFunction *this)

{
  int iVar1;
  UFunction *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FName *pFVar5;
  UFunction *pUVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pUVar6 = (UFunction *)0x0;
  pUVar2 = this;
  while ((pUVar2 != (UFunction *)0x0 && (pUVar6 == (UFunction *)0x0))) {
    if (pUVar2 == (UFunction *)0x0) {
LAB_141f713a2:
      pUVar6 = (UFunction *)0x0;
    }
    else {
      pUVar3 = UClass::GetPrivateStaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
         (pUVar6 = pUVar2,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar3->_padding_)) goto LAB_141f713a2;
    }
    pUVar2 = (UFunction *)pUVar2->_padding_;
  }
  if ((this->FunctionFlags >> 10 & 1) == 0) {
    this->Func = UObject::ProcessInternal;
    return;
  }
  pFVar4 = (FName *)pUVar6[2]._padding_;
  local_res8 = (FName)this->_padding_;
  pFVar5 = pFVar4 + (longlong)(int)pUVar6[2]._padding_ * 2;
  do {
    if (pFVar4 == pFVar5) {
LAB_141f71409:
      if (((this->FunctionFlags >> 8 & 1) == 0) && (2 < (byte)LogClass._0_1_)) {
        ::FName::ToString(&local_res8,&local_18);
        local_res8 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    if (local_res8 == *pFVar4) {
      if (pFVar4 != (FName *)0x0) {
        this->Func = (_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *)pFVar4[1];
        return;
      }
      goto LAB_141f71409;
    }
    pFVar4 = pFVar4 + 2;
  } while( true );
}

// GetInheritanceSuper @ 141f81f60

UStruct * __thiscall UFunction::GetInheritanceSuper(UFunction *this)

{
  return (UStruct *)0x0;
}

// GetPrivateStaticClass @ 141f84de0

UClass * __cdecl UFunction::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Function",
               &Z_Registration_Info_UClass_UFunction.InnerSingleton,StaticRegisterNativesUFunction,
               0xe8,8,CLASS_Intrinsic,CASTCLASS_UFunction,L"Engine",InternalConstructor<UFunction>,
               InternalVTableHelperCtorCaller<UFunction>,local_res10,UStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UFunction.InnerSingleton;
}

// GetReturnProperty @ 141f866b0

FProperty * __thiscall UFunction::GetReturnProperty(UFunction *this)

{
  TFieldIterator<FProperty> local_28;
  
  if (this == (UFunction *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (FField *)this->_padding_;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  while (((FProperty *)local_28.Field != (FProperty *)0x0 &&
         ((char)((FProperty *)local_28.Field)->PropertyFlags < '\0'))) {
    if ((((FProperty *)local_28.Field)->PropertyFlags >> 10 & 1) != 0) {
      return (FProperty *)local_28.Field;
    }
    local_28.Field = (FField *)((FProperty *)local_28.Field)->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
  }
  return (FProperty *)0x0;
}

// InitializeDerivedMembers @ 141f8dc30

void __thiscall UFunction::InitializeDerivedMembers(UFunction *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  FProperty **ppFVar5;
  
  this->NumParms = '\0';
  ppFVar5 = &this->FirstPropertyToInit;
  this->ParmsSize = 0;
  this->ReturnValueOffset = 0xffff;
  if ((ppFVar5 == (FProperty **)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListStartPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                         ,0x3d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (FProperty *)this->_padding_;
  if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    do {
      if ((char)pFVar4->PropertyFlags < '\0') {
        this->NumParms = this->NumParms + '\x01';
        uVar3 = pFVar4->ElementSize * pFVar4->ArrayDim + pFVar4->Offset_Internal;
        if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this->ParmsSize = (ushort)uVar3;
        if (((uint)(int)pFVar4->PropertyFlags >> 10 & 1) != 0) {
          uVar3 = pFVar4->Offset_Internal;
          if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this->ReturnValueOffset = (ushort)uVar3;
        }
      }
      else {
        if ((this->FunctionFlags & FUNC_HasDefaults) == FUNC_None) {
          return;
        }
        if ((pFVar4->PropertyFlags >> 9 & 1) == 0) {
          if (*ppFVar5 != pFVar4) {
            *ppFVar5 = pFVar4;
          }
          ppFVar5 = &pFVar4->PostConstructLinkNext;
          if (pFVar4->PostConstructLinkNext != (FProperty *)0x0) {
            *ppFVar5 = (FProperty *)0x0;
          }
        }
      }
      pFVar4 = (FProperty *)pFVar4->_padding_;
      if (pFVar4 == (FProperty *)0x0) {
        return;
      }
    } while ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0xf & 1) != 0);
    return;
  }
  return;
}

// Invoke @ 141f8fed0

void __thiscall UFunction::Invoke(UFunction *this,UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  
  pUVar2 = (UClass *)this->_padding_;
  pUVar5 = Z_Construct_UClass_UInterface_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      param_1 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    }
  }
  pUVar3 = param_2->CurrentNativeFunction;
  param_2->CurrentNativeFunction = this;
  (*this->Func)(param_1,param_2,param_3);
  param_2->CurrentNativeFunction = pUVar3;
  return;
}

// IsSignatureCompatibleWith @ 141f90530

bool __thiscall UFunction::IsSignatureCompatibleWith(UFunction *this,UFunction *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  FField *pFVar3;
  FField *pFVar4;
  char cVar5;
  bool bVar6;
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  if (this == param_1) {
    return true;
  }
  if (this == (UFunction *)0x0) {
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
  if (param_1 == (UFunction *)0x0) {
    local_20.Field = (FField *)0x0;
  }
  else {
    local_20.Field = (FField *)param_1->_padding_;
  }
  local_20.InterfaceIndex = -1;
  local_20.bIncludeSuper = true;
  local_20.bIncludeDeprecated = true;
  local_20.bIncludeInterface = false;
  local_20.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_20);
  if (local_38.Field != (FField *)0x0) {
    while (pFVar4 = local_20.Field, pFVar3 = local_38.Field, pFVar1 = local_38.Field[1].ClassPrivate
          , (char)pFVar1 < '\0') {
      if ((((local_20.Field == (FField *)0x0) ||
           (pFVar2 = local_20.Field[1].ClassPrivate, -1 < (char)pFVar2)) ||
          ((local_38.Field != local_20.Field &&
           (((*(int *)((longlong)&local_38.Field[1]._padding_ + 4) *
              (int)local_38.Field[1]._padding_ !=
              *(int *)((longlong)&local_20.Field[1]._padding_ + 4) *
              (int)local_20.Field[1]._padding_ ||
             (*(int *)((longlong)&local_38.Field[1].Owner.Container + 4) !=
              *(int *)((longlong)&local_20.Field[1].Owner.Container + 4))) ||
            (cVar5 = (**(code **)((local_38.Field)->_padding_ + 0x1a0))
                               (local_38.Field,local_20.Field), cVar5 == '\0')))))) ||
         ((((ulonglong)pFVar2 ^ (ulonglong)pFVar1) & 0xfe81fb6fbff7fde1) != 0)) goto LAB_141f9066e;
      local_38.Field = pFVar3->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      local_20.Field = pFVar4->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_20);
      if (local_38.Field == (FField *)0x0) break;
    }
  }
  if ((local_20.Field == (FField *)0x0) || (((ulonglong)local_20.Field[1].ClassPrivate & 0x80) == 0)
     ) {
    bVar6 = true;
  }
  else {
LAB_141f9066e:
    bVar6 = false;
  }
  return bVar6;
}

// IsSignatureCompatibleWith @ 141f906a0

bool __thiscall
UFunction::IsSignatureCompatibleWith(UFunction *this,UFunction *param_1,ulong64 param_2)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  FField *pFVar3;
  FField *pFVar4;
  char cVar5;
  bool bVar6;
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  if (this == param_1) {
    return true;
  }
  if (this == (UFunction *)0x0) {
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
  if (param_1 == (UFunction *)0x0) {
    local_20.Field = (FField *)0x0;
  }
  else {
    local_20.Field = (FField *)param_1->_padding_;
  }
  local_20.InterfaceIndex = -1;
  local_20.bIncludeSuper = true;
  local_20.bIncludeDeprecated = true;
  local_20.bIncludeInterface = false;
  local_20.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_20);
  if (local_38.Field != (FField *)0x0) {
    while (pFVar4 = local_20.Field, pFVar3 = local_38.Field, pFVar1 = local_38.Field[1].ClassPrivate
          , (char)pFVar1 < '\0') {
      if ((((local_20.Field == (FField *)0x0) ||
           (pFVar2 = local_20.Field[1].ClassPrivate, -1 < (char)pFVar2)) ||
          ((local_38.Field != local_20.Field &&
           (((*(int *)((longlong)&local_38.Field[1]._padding_ + 4) *
              (int)local_38.Field[1]._padding_ !=
              *(int *)((longlong)&local_20.Field[1]._padding_ + 4) *
              (int)local_20.Field[1]._padding_ ||
             (*(int *)((longlong)&local_38.Field[1].Owner.Container + 4) !=
              *(int *)((longlong)&local_20.Field[1].Owner.Container + 4))) ||
            (cVar5 = (**(code **)((local_38.Field)->_padding_ + 0x1a0))
                               (local_38.Field,local_20.Field), cVar5 == '\0')))))) ||
         ((((ulonglong)pFVar1 ^ (ulonglong)pFVar2) & ~param_2) != 0)) goto LAB_141f907f0;
      local_38.Field = pFVar3->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      local_20.Field = pFVar4->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_20);
      if (local_38.Field == (FField *)0x0) break;
    }
  }
  if ((local_20.Field == (FField *)0x0) || (((ulonglong)local_20.Field[1].ClassPrivate & 0x80) == 0)
     ) {
    bVar6 = true;
  }
  else {
LAB_141f907f0:
    bVar6 = false;
  }
  return bVar6;
}

// Link @ 141f90bf0

void __thiscall UFunction::Link(UFunction *this,FArchive *param_1,bool param_2)

{
  UStruct::Link((UStruct *)this,param_1,param_2);
  InitializeDerivedMembers(this);
  return;
}

// PostLoad @ 141f94620

void __thiscall UFunction::PostLoad(UFunction *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  UStruct::PostLoad((UStruct *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UClass::GetPrivateStaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && ((this->FunctionFlags & FUNC_Net) != FUNC_None)) {
      *(uint *)(lVar2 + 0xd4) = *(uint *)(lVar2 + 0xd4) & 0xfffff7ff;
    }
  }
  if ((this->FunctionFlags & (FUNC_Const|FUNC_Static)) == (FUNC_Const|FUNC_Static)) {
    this->FunctionFlags = this->FunctionFlags & ~FUNC_Const;
  }
  return;
}

// Serialize @ 141f9d9c0

void __thiscall UFunction::Serialize(UFunction *this,FArchive *param_1)

{
  int *piVar1;
  EFunctionFlags *pEVar2;
  longlong *plVar3;
  int *piVar4;
  uchar *puVar5;
  ushort local_res8 [4];
  
  UStruct::Serialize((UStruct *)this,param_1);
  param_1->field_0x29 = param_1->field_0x29 | 0x20;
  pEVar2 = (EFunctionFlags *)**(undefined8 **)&param_1->field_0x8;
  if ((EFunctionFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->FunctionFlags,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->FunctionFlags);
    }
  }
  else {
    this->FunctionFlags = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((this->FunctionFlags & FUNC_Net) != FUNC_None) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = 0;
    if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar3;
      *plVar3 = *plVar3 + 2;
    }
  }
  if (0x1c2 < *(int *)&param_1->field_0x40) {
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&this->EventGraphFunction);
    piVar1 = &this->EventGraphCallOffset;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if ((*(uint *)&param_1->field_0x34 & 0x1000) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      InitializeDerivedMembers(this);
    }
  }
  else {
    puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumParms,1);
    }
    else {
      this->NumParms = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    ::operator<<(param_1,&this->ParmsSize);
    ::operator<<(param_1,&this->ReturnValueOffset);
    (**(code **)(*(longlong *)param_1 + 0x160))(param_1,&this->FirstPropertyToInit);
  }
  return;
}

// Serialize @ 141f9db90

void __thiscall UFunction::Serialize(UFunction *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUFunction @ 141fade00

void __cdecl UFunction::StaticRegisterNativesUFunction(void)

{
  return;
}

