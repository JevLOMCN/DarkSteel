// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticClass @ 141e48950

UClass * __cdecl UInterfaceProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"InterfaceProperty",
               &Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton,
               StaticRegisterNativesUInterfaceProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FInterfaceProperty,L"Engine",InternalConstructor<UInterfaceProperty>,
               InternalVTableHelperCtorCaller<UInterfaceProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton;
}

// UInterfaceProperty @ 141e56aa0

UInterfaceProperty * __thiscall
UInterfaceProperty::UInterfaceProperty(UInterfaceProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UInterfaceProperty__6B_;
  this->_padding_ = 0;
  (this->InterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UInterfaceProperty @ 141e578d0

void __thiscall UInterfaceProperty::~UInterfaceProperty(UInterfaceProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c060

UClass * __cdecl UInterfaceProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"InterfaceProperty",
               &Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton,
               StaticRegisterNativesUInterfaceProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FInterfaceProperty,L"Engine",InternalConstructor<UInterfaceProperty>,
               InternalVTableHelperCtorCaller<UInterfaceProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton;
}

// Serialize @ 141e5fe70

void __thiscall
UInterfaceProperty::Serialize(UInterfaceProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUInterfaceProperty @ 141e606e0

void __cdecl UInterfaceProperty::StaticRegisterNativesUInterfaceProperty(void)

{
  return;
}

// BeginDestroy @ 142168190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInterfaceProperty::BeginDestroy(UInterfaceProperty *this)

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
    while (*(UInterfaceProperty **)FVar3 != this) {
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

// Serialize @ 14218adb0

void __thiscall UInterfaceProperty::Serialize(UInterfaceProperty *this,FArchive *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *this_00;
  UClass *pUVar5;
  UPackage *pUVar6;
  UPackage *pUVar7;
  
  UProperty::Serialize((UProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->InterfaceClass);
  if (((this->InterfaceClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
     (((uint)this->_padding_ >> 4 & 1) == 0)) {
    this_00 = UField::GetOwnerStruct((UField *)this);
    if (this_00 != (UStruct *)0x0) {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) &&
          (uVar2 = *(uint *)((longlong)&this_00[1]._padding_ + 4), (uVar2 >> 7 & 1) != 0)) &&
         (-1 < (int)uVar2)) {
        pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
        pUVar7 = GetTransientPackage();
        if (pUVar6 != pUVar7) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                             ,0x1b0,
                             L"Interface property tried to serialize a missing interface.  Did you remove a native class and not fully recompile?"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  return;
}

