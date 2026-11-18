// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// StaticClass @ 1422b3f60

UClass * __cdecl UVerseStruct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseStruct",
               &Z_Registration_Info_UClass_UVerseStruct.InnerSingleton,
               StaticRegisterNativesUVerseStruct,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseStruct>,InternalVTableHelperCtorCaller<UVerseStruct>,
               local_res8,UScriptStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseStruct.InnerSingleton;
}

// UVerseStruct @ 1422b8d30

UVerseStruct * __thiscall UVerseStruct::UVerseStruct(UVerseStruct *this,FVTableHelper *param_1)

{
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseStruct__6B_;
  (this->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualifiedName).Data.ArrayNum = 0;
  (this->QualifiedName).Data.ArrayMax = 0;
  (this->InitFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->ModuleClass).field0_0x0.DebugPtr = (UVerseClass *)0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->FactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->OverrideFactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  this->VerseClassFlags = 0;
  this->ConstructorEffects = None;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// UVerseStruct @ 1422b8e30

UVerseStruct * __thiscall UVerseStruct::UVerseStruct(UVerseStruct *this,FObjectInitializer *param_1)

{
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseStruct__6B_;
  (this->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualifiedName).Data.ArrayNum = 0;
  (this->QualifiedName).Data.ArrayMax = 0;
  (this->InitFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->ModuleClass).field0_0x0.DebugPtr = (UVerseClass *)0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->FactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->OverrideFactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  this->VerseClassFlags = 0;
  this->ConstructorEffects = None;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// UVerseStruct @ 1422b8f30

UVerseStruct * __thiscall
UVerseStruct::UVerseStruct
          (UVerseStruct *this,FObjectInitializer *param_1,UScriptStruct *param_2,
          ICppStructOps *param_3,EStructFlags param_4,ulong64 param_5,ulong64 param_6)

{
  UScriptStruct::UScriptStruct
            ((UScriptStruct *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  this->_padding_ = (longlong)&___7UVerseStruct__6B_;
  (this->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualifiedName).Data.ArrayNum = 0;
  (this->QualifiedName).Data.ArrayMax = 0;
  (this->InitFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->ModuleClass).field0_0x0.DebugPtr = (UVerseClass *)0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->FactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->OverrideFactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  this->VerseClassFlags = 0;
  this->ConstructorEffects = None;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_LoadCompleted|RF_WasLoaded);
  return this;
}

// ~UVerseStruct @ 1422b95c0

void __thiscall UVerseStruct::~UVerseStruct(UVerseStruct *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UVerseStruct__6B_;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DoublePropertyConstraints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DoublePropertyConstraints);
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IntPropertyConstraints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IntPropertyConstraints);
  pFVar2 = (this->QualifiedName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UScriptStruct::~UScriptStruct((UScriptStruct *)this);
  return;
}

// GetAuthoredNameForField @ 1422bca50

FString * __thiscall
UVerseStruct::GetAuthoredNameForField
          (UVerseStruct *this,FString *__return_storage_ptr__,FField *param_1)

{
  UStruct::GetAuthoredNameForField((UStruct *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetCustomGuid @ 1422bcaa0

FGuid * __thiscall UVerseStruct::GetCustomGuid(UVerseStruct *this,FGuid *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1422bcf20

UClass * __cdecl UVerseStruct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseStruct",
               &Z_Registration_Info_UClass_UVerseStruct.InnerSingleton,
               StaticRegisterNativesUVerseStruct,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseStruct>,InternalVTableHelperCtorCaller<UVerseStruct>,
               local_res8,UScriptStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseStruct.InnerSingleton;
}

// GetStructTypeHash @ 1422bd040

uint __thiscall UVerseStruct::GetStructTypeHash(UVerseStruct *this,void *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  code *pcVar3;
  FProperty *this_00;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  UVerseStruct *local_res8;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrepareCppStructOpsCompleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x8f6,
                       L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 == (longlong *)0x0) ||
     (((*(byte *)(*plVar1 + 0x16) & 0x10) == 0 &&
      (local_res8 = this,
      bVar4 = `UVerseStruct::GetStructTypeHash'::__l6::<lambda_1>::operator()(&local_res8), !bVar4))
     )) {
    local_38.Field = (FField *)this->_padding_;
    uVar5 = 0;
    local_38.bIncludeInterface = false;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.Struct = (UStruct *)this;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    this_00 = (FProperty *)local_38.Field;
    do {
      if (this_00 == (FProperty *)0x0) {
        return uVar5;
      }
      iVar6 = 0;
      local_38.Field = (FField *)this_00;
      if (0 < this_00->ArrayDim) {
        do {
          if (((iVar6 < 0) || (this_00->ArrayDim <= iVar6)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
          uVar7 = FProperty::GetValueTypeHash
                            (this_00,(void *)((longlong)param_1 +
                                             (longlong)this_00->Offset_Internal +
                                             (longlong)iVar6 * (longlong)this_00->ElementSize));
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 ^ uVar7 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2);
        } while (iVar6 < this_00->ArrayDim);
      }
      local_38.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      this_00 = (FProperty *)local_38.Field;
    } while( true );
  }
  puVar2 = (uint *)*plVar1;
  if ((*(byte *)((longlong)puVar2 + 0x16) & 0x10) == 0) {
    return 0;
  }
  if (((~(byte)(*puVar2 >> 0x12) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  uVar7 = 0;
  for (uVar5 = *puVar2 & 0x3ffff; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001422bd163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(puVar2 + (ulonglong)uVar7 * 2 + 6))
                    (param_1,*(code **)(puVar2 + (ulonglong)uVar7 * 2 + 6));
  return uVar5;
}

// InvokeDefaultFactoryFunction @ 1422bd820

void __thiscall UVerseStruct::InvokeDefaultFactoryFunction(UVerseStruct *this,uchar *param_1)

{
  UFunction *pUVar1;
  UVerseClass *pUVar2;
  
  if (((!verse::FExecutionContext::bBlockAllExecution) &&
      (pUVar1 = (this->FactoryFunction).field0_0x0.DebugPtr, pUVar1 != (UFunction *)0x0)) &&
     (pUVar2 = (this->ModuleClass).field0_0x0.DebugPtr, pUVar2 != (UVerseClass *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001422bd847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar2->_padding_ + 0x260))(pUVar2,pUVar1,param_1);
    return;
  }
  return;
}

// Link @ 1422be630

void __thiscall UVerseStruct::Link(UVerseStruct *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  
  UScriptStruct::Link((UScriptStruct *)this,param_1,param_2);
  pIVar2 = Verse::Private::GEngineEnvironment;
  if ((((uint)this->_padding_ >> 0x13 & 1) != 0) && ((this->VerseClassFlags & 1) != 0)) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4549069935032139869>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseStruct.cpp"
                         ,0x5d,"Environment");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,this);
  }
  return;
}

// PreSave @ 1422be960

void __thiscall UVerseStruct::PreSave(UVerseStruct *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 1422bf040

void __thiscall UVerseStruct::Serialize(UVerseStruct *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  bool bVar4;
  uint local_res8 [2];
  
  if ((((this->VerseClassFlags & 0x10) == 0) || (*(longlong *)&param_1->field_0x68 == 0)) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  bVar4 = SUB41(uVar3,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = uVar3;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res8[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1422bf0dd;
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar4 = uVar3 != 0;
LAB_1422bf0dd:
  if (bVar4 == false) {
    UScriptStruct::Serialize((UScriptStruct *)this,param_1);
  }
  return;
}

// Serialize @ 1422bf110

void __thiscall UVerseStruct::Serialize(UVerseStruct *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  FFastPathLoadBuffer *pFVar2;
  FArchiveState *this_00;
  uint uVar3;
  bool bVar4;
  uint local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((((this->VerseClassFlags & 0x10) == 0) ||
      (this_00->SavePackageData == (FArchiveSavePackageData *)0x0)) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  bVar4 = SUB41(uVar3,0);
  pFVar2 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar2->StartFastPathLoadBuffer + 4);
  if (pFVar2->EndFastPathLoadBuffer < puVar1) {
    local_res8[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res8[0] = uVar3;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar3 = local_res8[0];
    if (this_00->ArIsLoading == 0) goto LAB_1422bf1bc;
  }
  else {
    uVar3 = *(uint *)pFVar2->StartFastPathLoadBuffer;
    pFVar2->StartFastPathLoadBuffer = (uchar *)puVar1;
  }
  bVar4 = uVar3 != 0;
LAB_1422bf1bc:
  if (bVar4 == false) {
    UScriptStruct::Serialize((UScriptStruct *)this,(FArchive *)this_00);
  }
  return;
}

// StaticRegisterNativesUVerseStruct @ 1422bf280

void __cdecl UVerseStruct::StaticRegisterNativesUVerseStruct(void)

{
  return;
}

// operator() @ 150489de0

bool __thiscall `UVerseStruct::GetStructTypeHash'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4549069935032139924>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4549069935032139924>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150489e55;
    }
  }
  bVar2 = false;
LAB_150489e55:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

