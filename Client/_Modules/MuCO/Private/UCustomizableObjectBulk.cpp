// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 8

// StaticClass @ 14ab97e40

UClass * __cdecl UCustomizableObjectBulk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectBulk",
               &Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectBulk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObjectBulk>,
               InternalVTableHelperCtorCaller<UCustomizableObjectBulk>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton;
}

// UCustomizableObjectBulk @ 14ab9ffa0

UCustomizableObjectBulk * __thiscall
UCustomizableObjectBulk::UCustomizableObjectBulk
          (UCustomizableObjectBulk *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectBulk__6B_;
  (this->BulkFilePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkFilePrefix).Data.ArrayNum = 0;
  (this->BulkFilePrefix).Data.ArrayMax = 0;
  return this;
}

// UCustomizableObjectBulk @ 14ab9ffe0

UCustomizableObjectBulk * __thiscall
UCustomizableObjectBulk::UCustomizableObjectBulk
          (UCustomizableObjectBulk *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectBulk__6B_;
  (this->BulkFilePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkFilePrefix).Data.ArrayNum = 0;
  (this->BulkFilePrefix).Data.ArrayMax = 0;
  return this;
}

// ~UCustomizableObjectBulk @ 14aba2930

void __thiscall UCustomizableObjectBulk::~UCustomizableObjectBulk(UCustomizableObjectBulk *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectBulk__6B_;
  pFVar1 = (this->BulkFilePrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba53e0

UClass * __cdecl UCustomizableObjectBulk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectBulk",
               &Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectBulk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObjectBulk>,
               InternalVTableHelperCtorCaller<UCustomizableObjectBulk>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectBulk.InnerSingleton;
}

// StaticRegisterNativesUCustomizableObjectBulk @ 14aba6960

void __cdecl UCustomizableObjectBulk::StaticRegisterNativesUCustomizableObjectBulk(void)

{
  return;
}

// OpenFileAsyncRead @ 14abeb3b0

TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> __thiscall
UCustomizableObjectBulk::OpenFileAsyncRead(UCustomizableObjectBulk *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> TVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  IAsyncReadFileHandle IVar5;
  undefined4 in_register_00000014;
  ForAnyElementType FVar6;
  int in_R9D;
  FString local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0xd79,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (IAsyncReadFileHandle *)(*pcVar1)();
    return (TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>)TVar3.Ptr;
  }
  ::FString::PrintfImpl(&local_18,L"%s-%08x.mut");
  if (in_R9D == 1) {
    ::FString::AppendChars(&local_18,L".high",5);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  IVar5 = (IAsyncReadFileHandle)(**(code **)((longlong)*pIVar4 + 400))(pIVar4,FVar6.Data,0);
  *(IAsyncReadFileHandle *)CONCAT44(in_register_00000014,param_1) = IVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>)
         (IAsyncReadFileHandle *)CONCAT44(in_register_00000014,param_1);
}

// PostLoad @ 14abebbd0

void __thiscall UCustomizableObjectBulk::PostLoad(UCustomizableObjectBulk *this)

{
  UPackage *pUVar1;
  int iVar2;
  FName local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::FString(&local_28,L"");
  FPackageName::LongPackageNameToFilename(&local_38,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakeStandardFilename(&local_38);
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange
            (&this->BulkFilePrefix,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

