// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146eaf0e0

UClass * __cdecl UBlackboardKeyType_NativeEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_NativeEnum",
               &Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_NativeEnum,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardKeyType_NativeEnum>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_NativeEnum>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton;
}

// UBlackboardKeyType_NativeEnum @ 146ecbfe0

UBlackboardKeyType_NativeEnum * __thiscall
UBlackboardKeyType_NativeEnum::UBlackboardKeyType_NativeEnum
          (UBlackboardKeyType_NativeEnum *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_NativeEnum__6B_;
  (this->EnumName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumName).Data.ArrayNum = 0;
  (this->EnumName).Data.ArrayMax = 0;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// UBlackboardKeyType_NativeEnum @ 146ecc020

UBlackboardKeyType_NativeEnum * __thiscall
UBlackboardKeyType_NativeEnum::UBlackboardKeyType_NativeEnum
          (UBlackboardKeyType_NativeEnum *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_NativeEnum__6B_;
  (this->EnumName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumName).Data.ArrayNum = 0;
  (this->EnumName).Data.ArrayMax = 0;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~UBlackboardKeyType_NativeEnum @ 146ecddf0

void __thiscall
UBlackboardKeyType_NativeEnum::~UBlackboardKeyType_NativeEnum(UBlackboardKeyType_NativeEnum *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBlackboardKeyType_NativeEnum__6B_;
  pFVar1 = (this->EnumName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146eea240

UClass * __cdecl UBlackboardKeyType_NativeEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_NativeEnum",
               &Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_NativeEnum,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardKeyType_NativeEnum>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_NativeEnum>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.InnerSingleton;
}

// GetValue @ 146eefdf0

uchar __cdecl
UBlackboardKeyType_NativeEnum::GetValue(UBlackboardKeyType_NativeEnum *param_1,uchar *param_2)

{
  return *param_2;
}

// SetValue @ 146f00080

bool __cdecl
UBlackboardKeyType_NativeEnum::SetValue
          (UBlackboardKeyType_NativeEnum *param_1,uchar *param_2,uchar param_3)

{
  uchar uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_3;
  return uVar1 != param_3;
}

// StaticRegisterNativesUBlackboardKeyType_NativeEnum @ 146f01050

void __cdecl UBlackboardKeyType_NativeEnum::StaticRegisterNativesUBlackboardKeyType_NativeEnum(void)

{
  return;
}

// UpdateDeprecatedKey @ 146f03700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlackboardKeyType * __thiscall
UBlackboardKeyType_NativeEnum::UpdateDeprecatedKey(UBlackboardKeyType_NativeEnum *this)

{
  uint *puVar1;
  int iVar2;
  UObject *pUVar3;
  UEnum *pUVar4;
  UClass *pUVar5;
  UBlackboardKeyType *pUVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar3 = (UObject *)this->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UBlackboardKeyType_Enum::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar5);
  local_98._8_8_ = pUVar3;
  pUVar6 = (UBlackboardKeyType *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  iVar2 = (this->EnumName).Data.ArrayNum;
  uVar8 = 0;
  uVar9 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar9 = uVar8;
  }
  ::FString::AssignRange
            ((FString *)&pUVar6[1]._padding_,(wchar_t *)(this->EnumName).Data.AllocatorInstance.Data
             ,uVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->EnumType).field0_0x0.DebugPtr, pUVar4 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(TObjectPtr<UEnum>_u_0 *)(pUVar6 + 1) = (this->EnumType).field0_0x0;
  if (((this->EnumType).field0_0x0.DebugPtr != (UEnum *)0x0) && (1 < (this->EnumName).Data.ArrayNum)
     ) {
    uVar8 = 1;
  }
  puVar1 = (uint *)((longlong)&pUVar6[1]._padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)((longlong)&pUVar6[1]._padding_ + 4);
  *puVar1 = *puVar1 | uVar8;
  return pUVar6;
}

