// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 14925f920

UClass * __cdecl UNiagaraEmitterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitterBase",
               &Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEmitterBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraEmitterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEmitterBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton;
}

// UNiagaraEmitterBase @ 1492789d0

UNiagaraEmitterBase * __thiscall
UNiagaraEmitterBase::UNiagaraEmitterBase(UNiagaraEmitterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  (this->UniqueEmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueEmitterName).Data.ArrayNum = 0;
  (this->UniqueEmitterName).Data.ArrayMax = 0;
  return this;
}

// UNiagaraEmitterBase @ 149278a10

UNiagaraEmitterBase * __thiscall
UNiagaraEmitterBase::UNiagaraEmitterBase(UNiagaraEmitterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  (this->UniqueEmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueEmitterName).Data.ArrayNum = 0;
  (this->UniqueEmitterName).Data.ArrayMax = 0;
  return this;
}

// ~UNiagaraEmitterBase @ 14927aca0

void __thiscall UNiagaraEmitterBase::~UNiagaraEmitterBase(UNiagaraEmitterBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  pFVar1 = (this->UniqueEmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanObtainEmitterAttribute @ 1492884c0

bool __thiscall
UNiagaraEmitterBase::CanObtainEmitterAttribute
          (UNiagaraEmitterBase *this,FNiagaraVariableBase *param_1,FNiagaraTypeDefinition *param_2)

{
  return false;
}

// CanObtainParticleAttribute @ 1492886c0

bool __thiscall
UNiagaraEmitterBase::CanObtainParticleAttribute
          (UNiagaraEmitterBase *this,FNiagaraVariableBase *param_1,FGuid *param_2,
          FNiagaraTypeDefinition *param_3)

{
  return false;
}

// CanObtainSystemAttribute @ 1492886d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraEmitterBase::CanObtainSystemAttribute
          (UNiagaraEmitterBase *this,FNiagaraVariableBase *param_1,FNiagaraTypeDefinition *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  
  if (((uint)this->_padding_ >> 0xc & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyFlags(RF_NeedPostLoad)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterBase.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UNiagaraSystem *)0x0) {
    if (((uint)this_00->_padding_ >> 0xc & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NiagaraSystem->HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterBase.cpp"
                         ,0x45,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UNiagaraSystem::CanObtainSystemAttribute(this_00,param_1,param_2);
    return bVar2;
  }
  return false;
}

// CanObtainUserVariable @ 1492887a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraEmitterBase::CanObtainUserVariable(UNiagaraEmitterBase *this,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  
  if (((uint)this->_padding_ >> 0xc & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyFlags(RF_NeedPostLoad)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterBase.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UNiagaraSystem *)0x0) {
    if (((uint)this_00->_padding_ >> 0xc & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NiagaraSystem->HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterBase.cpp"
                         ,0x53,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UNiagaraSystem::CanObtainUserVariable(this_00,param_1);
    return bVar2;
  }
  return false;
}

// GetPrivateStaticClass @ 1492a63e0

UClass * __cdecl UNiagaraEmitterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitterBase",
               &Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEmitterBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraEmitterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEmitterBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton;
}

// GetResolvedDIBinding @ 1492a6aa0

FNiagaraVariableBase * __thiscall
UNiagaraEmitterBase::GetResolvedDIBinding
          (UNiagaraEmitterBase *this,FNiagaraVariableBase *__return_storage_ptr__,
          FNiagaraVariableBase *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->TypeDefHandle).RegisteredTypeIndex;
  __return_storage_ptr__->Name = param_1->Name;
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex = iVar1;
  return __return_storage_ptr__;
}

// GetUniqueEmitterName @ 1492a83c0

FString * __thiscall UNiagaraEmitterBase::GetUniqueEmitterName(UNiagaraEmitterBase *this)

{
  return &this->UniqueEmitterName;
}

// SetUniqueEmitterName @ 1492b5ed0

bool __thiscall
UNiagaraEmitterBase::SetUniqueEmitterName(UNiagaraEmitterBase *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  FString *pFVar6;
  FName *pFVar7;
  FName FVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  bool bVar13;
  FName local_res8;
  FName local_res10;
  ForAnyElementType *in_stack_ffffffffffffff88;
  ulonglong uVar14;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  iVar5 = (param_1->Data).ArrayNum;
  iVar1 = (this->UniqueEmitterName).Data.ArrayNum;
  if (iVar5 == iVar1) {
    if (iVar5 < 2) {
      return false;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(this->UniqueEmitterName).Data.AllocatorInstance.Data);
    bVar13 = iVar5 == 0;
  }
  else {
    bVar13 = iVar5 + iVar1 == 1;
  }
  if (bVar13) {
    return false;
  }
  local_50 = (this->UniqueEmitterName).Data.ArrayNum;
  lVar10 = (longlong)local_50;
  _Src = (this->UniqueEmitterName).Data.AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    in_stack_ffffffffffffff88 = &local_58;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,in_stack_ffffffffffffff88,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar10 * 2);
  }
  ::FString::operator=(&this->UniqueEmitterName,param_1);
  cVar4 = (**(code **)(this->_padding_ + 0x1c0))(this);
  if (cVar4 == '\0') {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    local_res8 = (FName)this->_padding_;
    pFVar6 = ::FName::GetPlainNameString(&local_res8,&local_38);
    FVar11.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (local_48.Data.ArrayNum == iVar5) {
    if (local_48.Data.ArrayNum < 2) goto LAB_1492b608d;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar11.Data,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar13 = iVar5 == 0;
  }
  else {
    bVar13 = iVar5 + local_48.Data.ArrayNum == 1;
  }
  if (!bVar13) {
    pwVar12 = L"";
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_res10,pwVar9);
    FVar2 = *pFVar7;
    FVar8 = (FName)StaticClass();
    uVar14 = (ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000;
    MakeUniqueObjectName
              ((UObject *)&local_res8,(UClass *)this->_padding_,FVar8,
               FVar2.ComparisonIndex.Value.Value);
    lVar10 = this->_padding_;
    pcVar3 = *(code **)(this->_padding_ + 0x170);
    pFVar6 = ::FName::ToString(&local_res8,&local_38);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    (*pcVar3)(this,pwVar12,lVar10,0,uVar14);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_1492b608d:
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return true;
}

// StaticRegisterNativesUNiagaraEmitterBase @ 1492b6980

void __cdecl UNiagaraEmitterBase::StaticRegisterNativesUNiagaraEmitterBase(void)

{
  return;
}

