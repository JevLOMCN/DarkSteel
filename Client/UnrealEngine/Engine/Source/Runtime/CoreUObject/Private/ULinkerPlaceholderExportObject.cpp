// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticClass @ 1420e0030

UClass * __cdecl ULinkerPlaceholderExportObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",
               &Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderExportObject,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderExportObject>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton;
}

// ULinkerPlaceholderExportObject @ 1420eabd0

ULinkerPlaceholderExportObject * __thiscall
ULinkerPlaceholderExportObject::ULinkerPlaceholderExportObject
          (ULinkerPlaceholderExportObject *this,FVTableHelper *param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
  FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)&this->field_0x28);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FLinkerPlaceholderBase__;
  return this;
}

// ULinkerPlaceholderExportObject @ 1420eac30

ULinkerPlaceholderExportObject * __thiscall
ULinkerPlaceholderExportObject::ULinkerPlaceholderExportObject
          (ULinkerPlaceholderExportObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)&this->field_0x28);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FLinkerPlaceholderBase__;
  return this;
}

// ~ULinkerPlaceholderExportObject @ 1420ec6e0

void __thiscall
ULinkerPlaceholderExportObject::~ULinkerPlaceholderExportObject
          (ULinkerPlaceholderExportObject *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FLinkerPlaceholderBase__;
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase((FLinkerPlaceholderBase *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1420f2340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULinkerPlaceholderExportObject::BeginDestroy(ULinkerPlaceholderExportObject *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(ULinkerPlaceholderExportObject **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetPlaceholderAsUObject @ 1420fc700

UObject * __thiscall
ULinkerPlaceholderExportObject::GetPlaceholderAsUObject(ULinkerPlaceholderExportObject *this)

{
  return (UObject *)&this[-1].field_0xd0;
}

// GetPrivateStaticClass @ 1420fcce0

UClass * __cdecl ULinkerPlaceholderExportObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",
               &Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderExportObject,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderExportObject>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton;
}

// StaticRegisterNativesULinkerPlaceholderExportObject @ 142116520

void __cdecl
ULinkerPlaceholderExportObject::StaticRegisterNativesULinkerPlaceholderExportObject(void)

{
  return;
}

