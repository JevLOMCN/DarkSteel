// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146ea91f0

UClass * __cdecl UBlackboardKeyType_Struct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Struct",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Struct,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Struct>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Struct>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton;
}

// UBlackboardKeyType_Struct @ 146ecc340

UBlackboardKeyType_Struct * __thiscall
UBlackboardKeyType_Struct::UBlackboardKeyType_Struct
          (UBlackboardKeyType_Struct *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Struct__6B_;
  FInstancedStruct::FInstancedStruct(&this->DefaultValue);
  FInstancedStruct::FInstancedStruct(&this->Value);
  return this;
}

// UBlackboardKeyType_Struct @ 146ecc380

UBlackboardKeyType_Struct * __thiscall
UBlackboardKeyType_Struct::UBlackboardKeyType_Struct
          (UBlackboardKeyType_Struct *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Struct__6B_;
  FInstancedStruct::FInstancedStruct(&this->DefaultValue);
  FInstancedStruct::FInstancedStruct(&this->Value);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UBlackboardKeyType_Struct @ 146ecdec0

void __thiscall
UBlackboardKeyType_Struct::~UBlackboardKeyType_Struct(UBlackboardKeyType_Struct *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Struct__6B_;
  FInstancedStruct::Reset(&this->Value);
  FInstancedStruct::Reset(&this->DefaultValue);
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 146ed6590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardKeyType_Struct::Clear
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146ed6593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// CompareValues @ 146ed7b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBlackboardKeyType_Struct::CompareValues
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  int iVar1;
  UScriptStruct *this_00;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_3 != (UBlackboardKeyType *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       (this_00 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr,
       this_00 == (UScriptStruct *)param_3[1]._padding_)) {
      if ((this->_padding_ & 0x1000000) != 0) {
        bVar2 = FInstancedStruct::Identical
                          (&this->Value,(FInstancedStruct *)&param_3[1]._padding_,0);
        return bVar2 ^ Greater;
      }
      if (this_00 != (UScriptStruct *)0x0) {
        bVar2 = UScriptStruct::CompareScriptStruct(this_00,param_2,param_4,0);
        return bVar2 ^ Greater;
      }
    }
  }
  return Greater;
}

// CopyValues @ 146ed81e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardKeyType_Struct::CopyValues
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  int iVar1;
  UScriptStruct *this_00;
  UClass *pUVar2;
  
  if (param_3 != (UBlackboardKeyType *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr,
       this_00 == (UScriptStruct *)param_3[1]._padding_)) {
      if ((this->_padding_ & 0x1000000) == 0) {
        if (this_00 != (UScriptStruct *)0x0) {
          UScriptStruct::CopyScriptStruct(this_00,param_2,param_4,1);
        }
      }
      else if (&this->Value != (FInstancedStruct *)&param_3[1]._padding_) {
        FInstancedStruct::InitializeAs
                  (&this->Value,(UScriptStruct *)param_3[1]._padding_,(uchar *)param_3[1]._padding_)
        ;
        return;
      }
    }
  }
  return;
}

// DescribeSelf @ 146edd550

FString * __thiscall
UBlackboardKeyType_Struct::DescribeSelf
          (UBlackboardKeyType_Struct *this,FString *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,&local_18);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeValue @ 146ede390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardKeyType_Struct::DescribeValue
          (UBlackboardKeyType_Struct *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  UScriptStruct *this_00;
  byte bVar1;
  FString local_18;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 3) & 1;
  if (bVar1 != 0) {
    param_2 = (this->Value).StructMemory;
  }
  this_00 = (&this->DefaultValue)[bVar1].ScriptStruct.field0_0x0.DebugPtr;
  if ((this_00 != (UScriptStruct *)0x0) && (param_2 != (uchar *)0x0)) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    UScriptStruct::ExportText
              (this_00,&local_18,param_2,(void *)0x0,(UObject *)this,0,(UObject *)0x0,true);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x2c8))();
  return __return_storage_ptr__;
}

// FreeMemory @ 146ee39c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardKeyType_Struct::FreeMemory
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2)

{
  UScriptStruct *pUVar1;
  
  if (((this->_padding_ & 0x1000000) == 0) &&
     (pUVar1 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr, pUVar1 != (UScriptStruct *)0x0
     )) {
                    /* WARNING: Could not recover jumptable at 0x000146ee39de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,param_2,1);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 146eea540

UClass * __cdecl UBlackboardKeyType_Struct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Struct",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Struct,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Struct>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Struct>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Struct.InnerSingleton;
}

// GetValue @ 146eefe80

FConstStructView * __cdecl
UBlackboardKeyType_Struct::GetValue
          (FConstStructView *__return_storage_ptr__,UBlackboardKeyType_Struct *param_1,
          uchar *param_2)

{
  if ((param_1->_padding_ & 0x1000000) != 0) {
    __return_storage_ptr__->ScriptStruct = (UScriptStruct *)(param_1->Value).ScriptStruct.field0_0x0
    ;
    __return_storage_ptr__->StructMemory = (param_1->Value).StructMemory;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ScriptStruct =
       (UScriptStruct *)(param_1->DefaultValue).ScriptStruct.field0_0x0;
  __return_storage_ptr__->StructMemory = param_2;
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef3170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardKeyType_Struct::InitializeMemory
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  uchar *local_10;
  
  local_18 = (TObjectPtr<UScriptStruct_const_>_u_0)
             (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  local_10 = (this->DefaultValue).StructMemory;
  if ((this->_padding_ & 0x1000000) != 0) {
    FInstancedStruct::operator=(&this->Value,(FConstStructView *)&local_18.ObjectPtr);
    return;
  }
  if (local_18.DebugPtr != (UScriptStruct *)0x0) {
    UScriptStruct::CopyScriptStruct(local_18.DebugPtr,param_2,local_10,1);
    return;
  }
  return;
}

// IsAllowedByFilter @ 146ef3880

bool __thiscall
UBlackboardKeyType_Struct::IsAllowedByFilter
          (UBlackboardKeyType_Struct *this,UBlackboardKeyType *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UBlackboardKeyType *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       ((UScriptStruct *)param_1[1]._padding_ ==
        (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr)) {
      return true;
    }
  }
  return false;
}

// PostLoad @ 146efb9e0

void __thiscall UBlackboardKeyType_Struct::PostLoad(UBlackboardKeyType_Struct *this)

{
  byte *pbVar1;
  short sVar2;
  UScriptStruct *pUVar3;
  longlong *plVar4;
  char cVar5;
  void *local_18;
  undefined8 local_10;
  
  UObject::PostLoad((UObject *)this);
  pUVar3 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar3 == (UScriptStruct *)0x0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined2 *)&this->_padding_ = 0;
    return;
  }
  plVar4 = (longlong *)pUVar3->_padding_;
  while( true ) {
    if (plVar4 == (longlong *)0x0) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
      *pbVar1 = *pbVar1 & 0xfd;
      sVar2 = *(short *)((longlong)&pUVar3->_padding_ + 4);
      *(short *)&this->_padding_ = sVar2 + -1 + (short)pUVar3->_padding_ & -sVar2;
      return;
    }
    local_18 = (void *)0x0;
    local_10 = 0;
    cVar5 = (**(code **)(*plVar4 + 0x170))(plVar4,&local_18,1);
    if (cVar5 != '\0') break;
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    plVar4 = (longlong *)plVar4[9];
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  *(undefined2 *)&this->_padding_ = 0;
  if (local_18 == (void *)0x0) {
    return;
  }
  FMemory::Free(local_18);
  return;
}

// SetValue @ 146f00260

bool __cdecl
UBlackboardKeyType_Struct::SetValue
          (UBlackboardKeyType_Struct *param_1,uchar *param_2,FConstStructView *param_3)

{
  UScriptStruct *this;
  FConstStructView local_18;
  
  if ((param_1->_padding_ & 0x1000000) == 0) {
    this = (param_1->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
    if ((this != (UScriptStruct *)0x0) && (param_3->ScriptStruct == this)) {
      UScriptStruct::CopyScriptStruct(this,param_2,param_3->StructMemory,1);
      return true;
    }
  }
  else if (param_3->ScriptStruct == (param_1->DefaultValue).ScriptStruct.field0_0x0.DebugPtr) {
    local_18.ScriptStruct = param_3->ScriptStruct;
    local_18.StructMemory = param_3->StructMemory;
    FInstancedStruct::operator=(&param_1->Value,&local_18);
    return true;
  }
  return false;
}

// StaticRegisterNativesUBlackboardKeyType_Struct @ 146f01090

void __cdecl UBlackboardKeyType_Struct::StaticRegisterNativesUBlackboardKeyType_Struct(void)

{
  return;
}

// TestBasicOperation @ 146f013d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardKeyType_Struct::TestBasicOperation
          (UBlackboardKeyType_Struct *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3
          )

{
  UScriptStruct *this_00;
  bool bVar1;
  bool bVar2;
  
  if ((this->_padding_ & 0x1000000) == 0) {
    this_00 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
    if (this_00 != (UScriptStruct *)0x0) {
      bVar2 = UScriptStruct::CompareScriptStruct
                        (this_00,param_2,(this->DefaultValue).StructMemory,0);
      bVar1 = !bVar2;
      if (param_3 != Set) {
        bVar1 = bVar2;
      }
      return bVar1;
    }
    bVar1 = param_3 == NotSet;
  }
  else {
    bVar1 = FInstancedStruct::Identical(&this->Value,&this->DefaultValue,0);
    if (param_3 == Set) {
      return !bVar1;
    }
  }
  return bVar1;
}

// UpdateNeedsInstance @ 146f03ac0

void __thiscall UBlackboardKeyType_Struct::UpdateNeedsInstance(UBlackboardKeyType_Struct *this)

{
  byte *pbVar1;
  short sVar2;
  UScriptStruct *pUVar3;
  longlong *plVar4;
  char cVar5;
  void *local_18;
  undefined8 local_10;
  
  pUVar3 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar3 == (UScriptStruct *)0x0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined2 *)&this->_padding_ = 0;
    return;
  }
  plVar4 = (longlong *)pUVar3->_padding_;
  while( true ) {
    if (plVar4 == (longlong *)0x0) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
      *pbVar1 = *pbVar1 & 0xfd;
      sVar2 = *(short *)((longlong)&pUVar3->_padding_ + 4);
      *(short *)&this->_padding_ = sVar2 + -1 + (short)pUVar3->_padding_ & -sVar2;
      return;
    }
    local_18 = (void *)0x0;
    local_10 = 0;
    cVar5 = (**(code **)(*plVar4 + 0x170))(plVar4,&local_18,1);
    if (cVar5 != '\0') break;
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    plVar4 = (longlong *)plVar4[9];
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  *(undefined2 *)&this->_padding_ = 0;
  if (local_18 == (void *)0x0) {
    return;
  }
  FMemory::Free(local_18);
  return;
}

