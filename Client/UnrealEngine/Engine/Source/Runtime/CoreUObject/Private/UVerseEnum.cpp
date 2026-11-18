// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 1422b3de0

UClass * __cdecl UVerseEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseEnum",
               &Z_Registration_Info_UClass_UVerseEnum.InnerSingleton,StaticRegisterNativesUVerseEnum
               ,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVerseEnum>,
               InternalVTableHelperCtorCaller<UVerseEnum>,local_res8,UEnum::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseEnum.InnerSingleton;
}

// UVerseEnum @ 1422b8bc0

UVerseEnum * __thiscall UVerseEnum::UVerseEnum(UVerseEnum *this,FVTableHelper *param_1)

{
  UEnum::UEnum((UEnum *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseEnum__6B_;
  this->VerseEnumFlags = None;
  (this->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualifiedName).Data.ArrayNum = 0;
  (this->QualifiedName).Data.ArrayMax = 0;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// UVerseEnum @ 1422b8c00

UVerseEnum * __thiscall UVerseEnum::UVerseEnum(UVerseEnum *this,FObjectInitializer *param_1)

{
  UEnum::UEnum((UEnum *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseEnum__6B_;
  this->VerseEnumFlags = None;
  (this->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualifiedName).Data.ArrayNum = 0;
  (this->QualifiedName).Data.ArrayMax = 0;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// ~UVerseEnum @ 1422b9560

void __thiscall UVerseEnum::~UVerseEnum(UVerseEnum *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVerseEnum__6B_;
  pFVar1 = (this->QualifiedName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEnum::~UEnum((UEnum *)this);
  return;
}

// GetPrivateStaticClass @ 1422bcda0

UClass * __cdecl UVerseEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseEnum",
               &Z_Registration_Info_UClass_UVerseEnum.InnerSingleton,StaticRegisterNativesUVerseEnum
               ,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVerseEnum>,
               InternalVTableHelperCtorCaller<UVerseEnum>,local_res8,UEnum::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseEnum.InnerSingleton;
}

// PreSave @ 1422be930

void __thiscall UVerseEnum::PreSave(UVerseEnum *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 1422bef30

void __thiscall UVerseEnum::Serialize(UVerseEnum *this,FArchive *param_1)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  
  UEnum::Serialize((UEnum *)this,param_1);
  pIVar2 = Verse::Private::GEngineEnvironment;
  if (((param_1->field_0x28 & 1) != 0) && ((this->VerseEnumFlags & NativeBound) != None)) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6592237486066368543>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseEnum.cpp"
                         ,0x1f,"Environment");
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

// Serialize @ 1422befb0

void __thiscall UVerseEnum::Serialize(UVerseEnum *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  FArchive *pFVar4;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UEnum::Serialize((UEnum *)this,pFVar4);
  pIVar2 = Verse::Private::GEngineEnvironment;
  if (((pFVar4->field_0x28 & 1) != 0) && ((this->VerseEnumFlags & NativeBound) != None)) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6592237486066368543>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseEnum.cpp"
                         ,0x1f,"Environment");
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

// StaticRegisterNativesUVerseEnum @ 1422bf260

void __cdecl UVerseEnum::StaticRegisterNativesUVerseEnum(void)

{
  return;
}

