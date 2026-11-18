// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticClass @ 141e49320

UClass * __cdecl UDelegateProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DelegateProperty",
               &Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton,
               StaticRegisterNativesUDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FDelegateProperty,L"Engine",InternalConstructor<UDelegateProperty>,
               InternalVTableHelperCtorCaller<UDelegateProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton;
}

// UDelegateProperty @ 141e56820

UDelegateProperty * __thiscall
UDelegateProperty::UDelegateProperty(UDelegateProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UDelegateProperty__6B_;
  this->_padding_ = 0;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  return this;
}

// ~UDelegateProperty @ 141e57780

void __thiscall UDelegateProperty::~UDelegateProperty(UDelegateProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5b840

UClass * __cdecl UDelegateProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DelegateProperty",
               &Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton,
               StaticRegisterNativesUDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FDelegateProperty,L"Engine",InternalConstructor<UDelegateProperty>,
               InternalVTableHelperCtorCaller<UDelegateProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton;
}

// Serialize @ 141e5fe10

void __thiscall
UDelegateProperty::Serialize(UDelegateProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUDelegateProperty @ 141e60630

void __cdecl UDelegateProperty::StaticRegisterNativesUDelegateProperty(void)

{
  return;
}

// BeginDestroy @ 142168180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDelegateProperty::BeginDestroy(UDelegateProperty *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
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
    while (*(UDelegateProperty **)FVar3 != this) {
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

// Serialize @ 14218acf0

void __thiscall UDelegateProperty::Serialize(UDelegateProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014218ad19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SignatureFunction);
  return;
}

