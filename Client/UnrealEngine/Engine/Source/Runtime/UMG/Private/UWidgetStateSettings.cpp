// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// StaticClass @ 1468d9220

UClass * __cdecl UWidgetStateSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetStateSettings",
               &Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton,
               StaticRegisterNativesUWidgetStateSettings,0x6e8,8,CLASS_Intrinsic|CLASS_DefaultConfig
               ,CASTCLASS_None,L"Game",InternalConstructor<UWidgetStateSettings>,
               InternalVTableHelperCtorCaller<UWidgetStateSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton;
}

// UWidgetStateSettings @ 146902db0

UWidgetStateSettings * __thiscall
UWidgetStateSettings::UWidgetStateSettings(UWidgetStateSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
  *(undefined8 *)&(this->BinaryStateMap).field_0x280 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x288 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x28c = 0x20;
  *(undefined8 *)&(this->BinaryStateMap).field_0x298 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a0 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a4 = 0x20;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2ac = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a8 = 0xffffffff;
  *(undefined8 *)&(this->BinaryStateMap).field_0x2f0 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2f8 = 0;
  *(undefined8 *)&(this->EnumStateMap).field_0xa0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xa8 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xac = 8;
  *(undefined8 *)&(this->EnumStateMap).field_0xb8 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc4 = 0x20;
  *(undefined4 *)&(this->EnumStateMap).field_0xcc = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc8 = 0xffffffff;
  *(undefined8 *)&(this->EnumStateMap).field_0xe0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xe8 = 0;
  (this->BinaryStates).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->BinaryStates).ArrayNum = 0;
  (this->BinaryStates).ArrayMax = 0x20;
  (this->EnumStates).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->EnumStates).ArrayNum = 0;
  (this->EnumStates).ArrayMax = 8;
  (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0;
  (this->BinaryStateRegistrationCDOs).ArrayNum = 0;
  (this->BinaryStateRegistrationCDOs).ArrayMax = 0x20;
  (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0;
  (this->EnumStateRegistrationCDOs).ArrayNum = 0;
  (this->EnumStateRegistrationCDOs).ArrayMax = 8;
  return this;
}

// UWidgetStateSettings @ 146902ed0

UWidgetStateSettings * __thiscall
UWidgetStateSettings::UWidgetStateSettings(UWidgetStateSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
  *(undefined8 *)&(this->BinaryStateMap).field_0x280 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x288 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x28c = 0x20;
  *(undefined8 *)&(this->BinaryStateMap).field_0x298 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a0 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a4 = 0x20;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2ac = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2a8 = 0xffffffff;
  *(undefined8 *)&(this->BinaryStateMap).field_0x2f0 = 0;
  *(undefined4 *)&(this->BinaryStateMap).field_0x2f8 = 0;
  *(undefined8 *)&(this->EnumStateMap).field_0xa0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xa8 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xac = 8;
  *(undefined8 *)&(this->EnumStateMap).field_0xb8 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc4 = 0x20;
  *(undefined4 *)&(this->EnumStateMap).field_0xcc = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xc8 = 0xffffffff;
  *(undefined8 *)&(this->EnumStateMap).field_0xe0 = 0;
  *(undefined4 *)&(this->EnumStateMap).field_0xe8 = 0;
  (this->BinaryStates).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->BinaryStates).ArrayNum = 0;
  (this->BinaryStates).ArrayMax = 0x20;
  (this->EnumStates).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->EnumStates).ArrayNum = 0;
  (this->EnumStates).ArrayMax = 8;
  (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0;
  (this->BinaryStateRegistrationCDOs).ArrayNum = 0;
  (this->BinaryStateRegistrationCDOs).ArrayMax = 0x20;
  (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0;
  (this->EnumStateRegistrationCDOs).ArrayNum = 0;
  (this->EnumStateRegistrationCDOs).ArrayMax = 8;
  return this;
}

// ~UWidgetStateSettings @ 146905240

void __thiscall UWidgetStateSettings::~UWidgetStateSettings(UWidgetStateSettings *this)

{
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar1;
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar2;
  ForElementType<FName> FVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
  FVar1 = (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->EnumStates).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->BinaryStates).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  *(undefined4 *)&(this->EnumStateMap).field_0xe8 = 0;
  pvVar4 = *(void **)&(this->EnumStateMap).field_0xe0;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->EnumStateMap);
  *(undefined4 *)&(this->BinaryStateMap).field_0x2f8 = 0;
  pvVar4 = *(void **)&(this->BinaryStateMap).field_0x2f0;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->BinaryStateMap);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetAllStateNames @ 14691d650

void __thiscall
UWidgetStateSettings::GetAllStateNames
          (UWidgetStateSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FName> FVar7;
  uint uVar8;
  
  uVar8 = (this->BinaryStates).ArrayNum + (this->EnumStates).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (param_1->ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar8,&param_1->AllocatorInstance,0,piVar1);
  }
  if ((TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)param_1 ==
      &this->BinaryStates) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->BinaryStates).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar3,&param_1->AllocatorInstance,piVar2,piVar1);
    FVar7 = (this->BinaryStates).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FName>)0x0) {
      FVar7 = (ForElementType<FName>)&this->BinaryStates;
    }
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,(void *)FVar7,
           (longlong)iVar3 << 3);
  }
  if ((TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)param_1 ==
      &this->EnumStates) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->EnumStates).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar3,&param_1->AllocatorInstance,piVar2,piVar1);
    FVar7 = (this->EnumStates).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FName>)0x0) {
      FVar7 = (ForElementType<FName>)&this->EnumStates;
    }
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,(void *)FVar7,
           (longlong)iVar3 << 3);
  }
  return;
}

// GetBinaryStateIndex @ 14691db50

uchar __thiscall UWidgetStateSettings::GetBinaryStateIndex(UWidgetStateSettings *this,FName param_1)

{
  uchar *puVar1;
  
  puVar1 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&this->BinaryStateMap,param_1);
  return *puVar1;
}

// GetBinaryStateName @ 14691db70

FName __thiscall UWidgetStateSettings::GetBinaryStateName(UWidgetStateSettings *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  ForElementType<FName> FVar4;
  undefined7 in_register_00000011;
  byte in_R8B;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.ComparisonIndex.Value._0_1_ = param_1;
  if ((this->BinaryStates).ArrayNum <= (int)(uint)in_R8B) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FVar4 = (this->BinaryStates).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FName>)0x0) {
    FVar4 = (ForElementType<FName>)&this->BinaryStates;
  }
  *(undefined8 *)FVar3 = *(undefined8 *)((longlong)FVar4 + (ulonglong)in_R8B * 8);
  return FVar3;
}

// GetBinaryStateNames @ 14691dc10

void __thiscall
UWidgetStateSettings::GetBinaryStateNames
          (UWidgetStateSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  ForElementType<FName> FVar1;
  
  FVar1 = (this->BinaryStates).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FName>)0x0) {
    FVar1 = (ForElementType<FName>)&this->BinaryStates;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
            (param_1,(FName *)FVar1,(this->BinaryStates).ArrayNum,param_1->ArrayMax);
  return;
}

// GetEnumStateIndex @ 14691e250

uchar __thiscall UWidgetStateSettings::GetEnumStateIndex(UWidgetStateSettings *this,FName param_1)

{
  uchar *puVar1;
  
  puVar1 = TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&this->EnumStateMap,param_1);
  return *puVar1;
}

// GetEnumStateName @ 14691e270

FName __thiscall UWidgetStateSettings::GetEnumStateName(UWidgetStateSettings *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  ForElementType<FName> FVar4;
  undefined7 in_register_00000011;
  byte in_R8B;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.ComparisonIndex.Value._0_1_ = param_1;
  if ((this->EnumStates).ArrayNum <= (int)(uint)in_R8B) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FVar4 = (this->EnumStates).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FName>)0x0) {
    FVar4 = (ForElementType<FName>)&this->EnumStates;
  }
  *(undefined8 *)FVar3 = *(undefined8 *)((longlong)FVar4 + (ulonglong)in_R8B * 8);
  return FVar3;
}

// GetEnumStateNames @ 14691e310

void __thiscall
UWidgetStateSettings::GetEnumStateNames
          (UWidgetStateSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  ForElementType<FName> FVar1;
  
  FVar1 = (this->EnumStates).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FName>)0x0) {
    FVar1 = (ForElementType<FName>)&this->EnumStates;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
            (param_1,(FName *)FVar1,(this->EnumStates).ArrayNum,param_1->ArrayMax);
  return;
}

// GetInitialRegistrationBitfield @ 14691e890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetStateBitfield __thiscall
UWidgetStateSettings::GetInitialRegistrationBitfield(UWidgetStateSettings *this,UWidget *param_1)

{
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar1;
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar8;
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar9;
  byte bVar10;
  undefined1 local_res8 [8];
  
  FVar8 = (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  iVar3 = (this->BinaryStateRegistrationCDOs).ArrayNum;
  bVar10 = 0;
  param_1->_padding_ = 0;
  if (FVar8 == (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
    FVar8 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)
            &this->BinaryStateRegistrationCDOs;
  }
  FVar1 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)
          ((longlong)FVar8 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->BinaryStateRegistrationCDOs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UWidgetBinaryStateRegistration>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar1) break;
    bVar5 = (**(code **)(**(longlong **)FVar8 + 0x2b8))();
    bVar4 = bVar10 & 0x3f;
    uVar7 = (ulonglong)bVar10;
    bVar10 = bVar10 + 1;
    param_1->_padding_ = (ulonglong)bVar5 << bVar4 | param_1->_padding_ & ~(1L << (uVar7 & 0x3f));
    if (0x40 < bVar10) {
      `UWidgetStateSettings::GetInitialRegistrationBitfield'::__l6::<lambda_1>::operator()
                (local_res8);
    }
    FVar8 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)((longlong)FVar8 + 8);
  }
  FVar9 = (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  iVar3 = (this->EnumStateRegistrationCDOs).ArrayNum;
  if (FVar9 == (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
    FVar9 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)
            &this->EnumStateRegistrationCDOs;
  }
  FVar2 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)
          ((longlong)FVar9 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->EnumStateRegistrationCDOs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UWidgetEnumStateRegistration>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9 == FVar2) break;
    cVar6 = (**(code **)(**(longlong **)FVar9 + 0x2b8))();
    if (cVar6 != '\0') {
      (**(code **)(**(longlong **)FVar9 + 0x2c0))();
    }
    FVar9 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)((longlong)FVar9 + 8);
  }
  return (FWidgetStateBitfield)(ulong64)param_1;
}

// GetPrivateStaticClass @ 146923ca0

UClass * __cdecl UWidgetStateSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetStateSettings",
               &Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton,
               StaticRegisterNativesUWidgetStateSettings,0x6e8,8,CLASS_Intrinsic|CLASS_DefaultConfig
               ,CASTCLASS_None,L"Game",InternalConstructor<UWidgetStateSettings>,
               InternalVTableHelperCtorCaller<UWidgetStateSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton;
}

// PostInitProperties @ 1469324e0

void __thiscall UWidgetStateSettings::PostInitProperties(UWidgetStateSettings *this)

{
  TArray<TObjectPtr<UWidgetBinaryStateRegistration>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  TArray<TObjectPtr<UWidgetEnumStateRegistration>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar10;
  code *pcVar11;
  FScriptContainerElement *pFVar12;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  UClass *pUVar17;
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar18;
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar19;
  ForElementType<FName> FVar20;
  FString *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  ForAnyElementType FVar26;
  char local_res8 [8];
  char local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TObjectPtr<UObject>_u_0 local_128;
  undefined8 local_120;
  TObjectPtr<UObject>_u_0 local_118;
  undefined8 local_110;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *local_e0;
  undefined1 local_d8 [8];
  uchar *local_d0;
  char *local_c8;
  undefined8 *local_c0;
  char *local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  UObject::PostInitProperties((UObject *)this);
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  pUVar17 = UWidgetBinaryStateRegistration::StaticClass();
  GetDerivedClasses(pUVar17,&local_108,false);
  pTVar1 = &this->BinaryStateRegistrationCDOs;
  if (local_108.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_108._8_8_ & 0xffffffff);
  }
  piVar2 = &(this->BinaryStateRegistrationCDOs).ArrayMax;
  (this->BinaryStateRegistrationCDOs).ArrayNum = 0;
  if (*piVar2 != local_108.ArrayNum) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_>
              (8,8,local_108.ArrayNum,&pTVar1->AllocatorInstance,0,piVar2);
  }
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Empty((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)&this->BinaryStateMap,local_108.ArrayNum);
  uVar22 = local_108._8_8_ & 0xffffffff;
  pTVar3 = &this->BinaryStates;
  if (-1 < local_108.ArrayNum) {
    piVar4 = &(this->BinaryStates).ArrayMax;
    (this->BinaryStates).ArrayNum = 0;
    if (*piVar4 != local_108.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,local_108.ArrayNum,&pTVar3->AllocatorInstance,0,piVar4);
      uVar22 = local_108._8_8_ & 0xffffffff;
    }
    uVar23 = (ulonglong)(int)uVar22;
    local_res8[0] = '\0';
    local_e8 = (FScriptContainerElement *)CONCAT44(local_e8._4_4_,(int)uVar22);
    local_e0 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)(local_108.AllocatorInstance.Data + uVar23 * 8);
    FVar26.Data = local_108.AllocatorInstance.Data;
    do {
      pTVar13 = local_e0;
      if ((int)uVar22 != (int)uVar23) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)FVar26.Data == pTVar13) {
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        pUVar17 = UWidgetEnumStateRegistration::StaticClass();
        GetDerivedClasses(pUVar17,&local_f8,false);
        pTVar5 = &this->EnumStateRegistrationCDOs;
        if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_f8._8_8_ & 0xffffffff);
        }
        piVar2 = &(this->EnumStateRegistrationCDOs).ArrayMax;
        (this->EnumStateRegistrationCDOs).ArrayNum = 0;
        if (*piVar2 != local_f8.ArrayNum) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_>
                    (8,8,local_f8.ArrayNum,&pTVar5->AllocatorInstance,0,piVar2);
        }
        local_e0 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)&this->EnumStateMap;
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::Empty(local_e0,local_f8.ArrayNum);
        uVar22 = local_f8._8_8_ & 0xffffffff;
        pTVar6 = &this->EnumStates;
        if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar22);
        }
        piVar4 = &(this->EnumStates).ArrayMax;
        (this->EnumStates).ArrayNum = 0;
        if (*piVar4 != local_f8.ArrayNum) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,local_f8.ArrayNum,&pTVar6->AllocatorInstance,0,piVar4);
          uVar22 = local_f8._8_8_ & 0xffffffff;
        }
        iVar15 = (int)uVar22;
        local_res10[0] = '\0';
        local_e8 = local_f8.AllocatorInstance.Data + (longlong)iVar15 * 8;
        FVar26.Data = local_f8.AllocatorInstance.Data;
        while( true ) {
          pFVar12 = local_e8;
          if ((int)uVar22 != iVar15) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar26.Data == pFVar12) break;
          pUVar17 = *(UClass **)FVar26.Data;
          if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar17);
          }
          TVar7 = (TObjectPtr<UObject>_u_0)(pUVar17->ClassDefaultObject).field0_0x0.DebugPtr;
          if (TVar7.DebugPtr == (UObject *)0x0) {
            pFVar21 = GetTypeName<UWidgetEnumStateRegistration>(local_60);
            if ((pFVar21->Data).ArrayNum == 0) {
              pwVar24 = L"";
            }
            else {
              pwVar24 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar24);
          }
          pUVar17 = UWidgetEnumStateRegistration::StaticClass();
          iVar16 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)&(TVar7.DebugPtr)->field_0x10 + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&(TVar7.DebugPtr)->field_0x10 + 0x30) +
               (longlong)iVar16 * 8) != &pUVar17->_padding_)) {
            pFVar21 = GetTypeName<UWidgetEnumStateRegistration>(&local_80);
            pwVar24 = L"";
            if ((pFVar21->Data).ArrayNum == 0) {
              pwVar25 = L"";
            }
            else {
              pwVar25 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
            }
            pFVar21 = GetFullNameForCastLogError<UObject>(&local_70,TVar7.DebugPtr);
            if ((pFVar21->Data).ArrayNum != 0) {
              pwVar24 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar24,pwVar25);
          }
          local_118 = TVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(TVar7.DebugPtr);
          }
          FVar10 = (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData;
          FVar19 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)pTVar5;
          if (FVar10 != (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
            FVar19 = FVar10;
          }
          if ((ulonglong)FVar19 <= &local_118) {
            FVar19 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)pTVar5;
            if (FVar10 != (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
              FVar19 = FVar10;
            }
            if ((&local_118 < (TObjectPtr<UObject>_u_0 *)((longlong)FVar19 + (longlong)*piVar2 * 8))
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar16 = (this->EnumStateRegistrationCDOs).ArrayNum;
          if (iVar16 == *piVar2) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_>
                               (0x808,&pTVar5->AllocatorInstance,piVar2);
          }
          (this->EnumStateRegistrationCDOs).ArrayNum = iVar16 + 1;
          FVar10 = (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData;
          FVar19 = (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)pTVar5;
          if (FVar10 != (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
            FVar19 = FVar10;
          }
          ((TObjectPtr<UObject>_u_0 *)((longlong)FVar19 + (longlong)iVar16 * 8))->DebugPtr =
               (UObject *)local_118;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_118.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_118.DebugPtr);
          }
          (**(code **)(*(longlong *)TVar7.DebugPtr + 0x2b0))(TVar7.DebugPtr,&local_110);
          local_c0 = &local_110;
          local_b8 = local_res10;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
                    (local_e0,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)
                              (local_d8 + 4),(bool *)&local_c0);
          FVar9 = (this->EnumStates).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<FName>)pTVar6;
          if (FVar9 != (ForElementType<FName>)0x0) {
            FVar20 = FVar9;
          }
          if ((ulonglong)FVar20 <= &local_110) {
            FVar20 = (ForElementType<FName>)pTVar6;
            if (FVar9 != (ForElementType<FName>)0x0) {
              FVar20 = FVar9;
            }
            if ((&local_110 < (undefined8 *)((longlong)FVar20 + (longlong)*piVar4 * 8)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar16 = (this->EnumStates).ArrayNum;
          if (iVar16 == *piVar4) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                               (0x408,&pTVar6->AllocatorInstance,piVar4);
          }
          (this->EnumStates).ArrayNum = iVar16 + 1;
          FVar9 = (this->EnumStates).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<FName>)pTVar6;
          if (FVar9 != (ForElementType<FName>)0x0) {
            FVar20 = FVar9;
          }
          *(undefined8 *)((longlong)FVar20 + (longlong)iVar16 * 8) = local_110;
          (**(code **)(*(longlong *)TVar7.DebugPtr + 0x2c8))(TVar7.DebugPtr);
          local_res10[0] = local_res10[0] + '\x01';
          uVar22 = local_f8._8_8_ & 0xffffffff;
          FVar26.Data = FVar26.Data + 8;
        }
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
        return;
      }
      pUVar17 = *(UClass **)FVar26.Data;
      if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar17);
      }
      TVar7 = (TObjectPtr<UObject>_u_0)(pUVar17->ClassDefaultObject).field0_0x0.DebugPtr;
      if (TVar7.DebugPtr == (UObject *)0x0) {
        pFVar21 = GetTypeName<UWidgetBinaryStateRegistration>(&local_90);
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar24);
      }
      pUVar17 = UWidgetBinaryStateRegistration::StaticClass();
      iVar15 = (int)pUVar17->_padding_;
      if ((*(int *)(*(longlong *)&(TVar7.DebugPtr)->field_0x10 + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(TVar7.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar15 * 8)
          != &pUVar17->_padding_)) {
        pFVar21 = GetTypeName<UWidgetBinaryStateRegistration>(&local_b0);
        pwVar24 = L"";
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        pFVar21 = GetFullNameForCastLogError<UObject>(&local_a0,TVar7.DebugPtr);
        if ((pFVar21->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar24,pwVar25);
      }
      local_128 = TVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar7.DebugPtr);
      }
      FVar8 = (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)pTVar1;
      if (FVar8 != (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
        FVar18 = FVar8;
      }
      if ((ulonglong)FVar18 <= &local_128) {
        FVar18 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)pTVar1;
        if (FVar8 != (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
          FVar18 = FVar8;
        }
        if ((&local_128 < (TObjectPtr<UObject>_u_0 *)((longlong)FVar18 + (longlong)*piVar2 * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      iVar15 = (this->BinaryStateRegistrationCDOs).ArrayNum;
      if (iVar15 == *piVar2) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->BinaryStateRegistrationCDOs).ArrayNum = iVar15 + 1;
      FVar8 = (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)pTVar1;
      if (FVar8 != (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
        FVar18 = FVar8;
      }
      ((TObjectPtr<UObject>_u_0 *)((longlong)FVar18 + (longlong)iVar15 * 8))->DebugPtr =
           (UObject *)local_128;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_128.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_128.DebugPtr);
      }
      (**(code **)(*(longlong *)TVar7.DebugPtr + 0x2b0))(TVar7.DebugPtr,&local_120);
      local_d0 = (uchar *)&local_120;
      local_c8 = local_res8;
      TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
                ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)&this->BinaryStateMap,
                 (TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_d8,(bool *)&local_d0
                );
      FVar9 = (this->BinaryStates).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FName>)pTVar3;
      if (FVar9 != (ForElementType<FName>)0x0) {
        FVar20 = FVar9;
      }
      if ((ulonglong)FVar20 <= &local_120) {
        FVar20 = (ForElementType<FName>)pTVar3;
        if (FVar9 != (ForElementType<FName>)0x0) {
          FVar20 = FVar9;
        }
        if ((&local_120 < (undefined8 *)((longlong)FVar20 + (longlong)*piVar4 * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      iVar15 = (this->BinaryStates).ArrayNum;
      if (iVar15 == *piVar4) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,&pTVar3->AllocatorInstance,piVar4);
      }
      (this->BinaryStates).ArrayNum = iVar15 + 1;
      FVar9 = (this->BinaryStates).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FName>)pTVar3;
      if (FVar9 != (ForElementType<FName>)0x0) {
        FVar20 = FVar9;
      }
      *(undefined8 *)((longlong)FVar20 + (longlong)iVar15 * 8) = local_120;
      (**(code **)(*(longlong *)TVar7.DebugPtr + 0x2c0))(TVar7.DebugPtr);
      local_res8[0] = local_res8[0] + '\x01';
      uVar22 = local_108._8_8_ & 0xffffffff;
      FVar26.Data = FVar26.Data + 8;
      uVar23 = (ulonglong)local_e8 & 0xffffffff;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar22);
}

// StaticRegisterNativesUWidgetStateSettings @ 146945d50

void __cdecl UWidgetStateSettings::StaticRegisterNativesUWidgetStateSettings(void)

{
  return;
}

// operator() @ 1504f5f70

bool __thiscall
`UWidgetStateSettings::GetInitialRegistrationBitfield'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_442178724348034959>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_442178724348034959>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

